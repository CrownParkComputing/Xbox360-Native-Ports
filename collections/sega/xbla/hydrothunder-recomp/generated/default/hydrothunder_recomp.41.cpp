#include "hydrothunder_funcs.41.h"

DEFINE_REX_FUNC(sub_82121FA0) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r10,7216
	r31.s64 = ctx.r10.s64 + 7216;
	// addi r11,r11,-26376
	ctx.r11.s64 = ctx.r11.s64 + -26376;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,7216(r10)
	REX_STORE_U32(ctx.r10.u32 + 7216, ctx.r11.u32);
	// bl 0x82122488
	ctx.lr = 0x82121FD0;
	sub_82122488(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82121FE8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82121fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82121FE8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
	// addi r4,r9,-26852
	ctx.r4.s64 = ctx.r9.s64 + -26852;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122028;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26840
	ctx.r4.s64 = ctx.r11.s64 + -26840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x8212203C;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,-26828
	r30.s64 = ctx.r11.s64 + -26828;
	// addi r4,r10,-26824
	ctx.r4.s64 = ctx.r10.s64 + -26824;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122058;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x8212206C;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26808
	ctx.r4.s64 = ctx.r11.s64 + -26808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122080;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26800
	ctx.r4.s64 = ctx.r11.s64 + -26800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122094;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26792
	ctx.r4.s64 = ctx.r11.s64 + -26792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x821220A8;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26780
	ctx.r4.s64 = ctx.r11.s64 + -26780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x821220BC;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26772
	ctx.r4.s64 = ctx.r11.s64 + -26772;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x821220D0;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26764
	ctx.r4.s64 = ctx.r11.s64 + -26764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x821220E4;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26756
	ctx.r4.s64 = ctx.r11.s64 + -26756;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x821220F8;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26748
	ctx.r4.s64 = ctx.r11.s64 + -26748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x8212210C;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26736
	ctx.r4.s64 = ctx.r11.s64 + -26736;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122120;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26720
	ctx.r4.s64 = ctx.r11.s64 + -26720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122134;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26704
	ctx.r4.s64 = ctx.r11.s64 + -26704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122148;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26688
	ctx.r4.s64 = ctx.r11.s64 + -26688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x8212215C;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26668
	ctx.r4.s64 = ctx.r11.s64 + -26668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122170;
	sub_82122280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-26652
	ctx.r4.s64 = ctx.r11.s64 + -26652;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122280
	ctx.lr = 0x82122184;
	sub_82122280(ctx, base);
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

DEFINE_REX_FUNC(sub_82134478) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822c9a30
	sub_822C9A30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82134908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,12632(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12632);
	// stw r10,12052(r11)
	REX_STORE_U32(ctx.r11.u32 + 12052, ctx.r10.u32);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r8,10548(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 10548);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwimi r8,r10,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r8,10548(r11)
	REX_STORE_U32(ctx.r11.u32 + 10548, ctx.r8.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821372B0) {
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
	ctx.lr = 0x821372B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x8212dd28
	ctx.lr = 0x821372DC;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821372EC;
	sub_826A1E70(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// lbz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 0);
	// addi r9,r29,-8
	ctx.r9.s64 = r29.s64 + -8;
	// stb r8,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r8.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lbz r8,1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 1);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stb r8,69(r31)
	REX_STORE_U8(r31.u32 + 69, ctx.r8.u8);
	// lbz r8,2(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 2);
	// stb r8,70(r31)
	REX_STORE_U8(r31.u32 + 70, ctx.r8.u8);
	// lbz r8,3(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 3);
	// stb r8,71(r31)
	REX_STORE_U8(r31.u32 + 71, ctx.r8.u8);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_8213732C:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8213732c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213732C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r9,29568
	ctx.r7.s64 = ctx.r9.s64 + 29568;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x82137374;
	sub_82139B18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213DC10) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,-17620
	ctx.r5.s64 = ctx.r11.s64 + -17620;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x8213DC34;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// bl 0x82121dd0
	ctx.lr = 0x8213DC44;
	sub_82121DD0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17640
	ctx.r4.s64 = ctx.r11.s64 + -17640;
	// bl 0x82121928
	ctx.lr = 0x8213DC50;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120670
	ctx.lr = 0x8213DC5C;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8213DC6C;
	sub_82120AC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x8213dca0
	ctx.lr = 0x8213DC78;
	sub_8213DCA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8213DC88;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_82142110) {
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
	ctx.lr = 0x82142118;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214213C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821421d8
	if (ctx.cr0.eq) goto loc_821421D8;
loc_82142144:
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214215C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821421b8
	if (ctx.cr0.eq) goto loc_821421B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214218C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214218C:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// beq 0x821421b0
	if (ctx.cr0.eq) goto loc_821421B0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214218c
	if (ctx.cr6.eq) goto loc_8214218C;
loc_821421B0:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821421e4
	if (ctx.cr0.eq) goto loc_821421E4;
loc_821421B8:
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821421D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82142144
	if (ctx.cr6.lt) goto loc_82142144;
loc_821421D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821421DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_821421E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x821421dc
	goto loc_821421DC;
}

DEFINE_REX_FUNC(sub_821497C0) {
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
	ctx.lr = 0x821497C8;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f0,1040(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// bl 0x8214a280
	ctx.lr = 0x82149834;
	sub_8214A280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821498ec
	if (ctx.cr0.eq) goto loc_821498EC;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821498ec
	if (!ctx.cr0.eq) goto loc_821498EC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// ld r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 8);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r25,r5,-13316
	r25.s64 = ctx.r5.s64 + -13316;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// addi r24,r1,112
	r24.s64 = ctx.r1.s64 + 112;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// std r8,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r8.u64);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// stw r30,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185dc0
	ctx.lr = 0x821498EC;
	sub_82185DC0(ctx, base);
loc_821498EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821524D0) {
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
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821524FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8215251c
	if (ctx.cr6.lt) goto loc_8215251C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-11080
	ctx.r4.s64 = ctx.r11.s64 + -11080;
	// addi r3,r10,-10904
	ctx.r3.s64 = ctx.r10.s64 + -10904;
	// li r5,203
	ctx.r5.s64 = 203;
	// bl 0x821231d0
	ctx.lr = 0x8215251C;
	sub_821231D0(ctx, base);
loc_8215251C:
	// mulli r11,r30,104
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(104));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
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

DEFINE_REX_FUNC(sub_82155930) {
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
	ctx.lr = 0x82155938;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82155964
	if (ctx.cr6.eq) goto loc_82155964;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82155a60
	goto loc_82155A60;
loc_82155964:
	// bl 0x82155fd0
	ctx.lr = 0x82155968;
	sub_82155FD0(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821559a8
	if (!ctx.cr6.eq) goto loc_821559A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821559a0
	if (ctx.cr6.lt) goto loc_821559A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-8968
	ctx.r3.s64 = ctx.r10.s64 + -8968;
	// li r5,527
	ctx.r5.s64 = 527;
	// bl 0x821231d0
	ctx.lr = 0x821559A0;
	sub_821231D0(ctx, base);
loc_821559A0:
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x82155a18
	goto loc_82155A18;
loc_821559A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821559f8
	if (ctx.cr6.eq) goto loc_821559F8;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
loc_821559C4:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x821559dc
	if (!ctx.cr6.eq) goto loc_821559DC;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// beq cr6,0x821559f0
	if (ctx.cr6.eq) goto loc_821559F0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_821559DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,308
	ctx.r9.s64 = ctx.r9.s64 + 308;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821559c4
	if (ctx.cr6.lt) goto loc_821559C4;
	// b 0x821559f8
	goto loc_821559F8;
loc_821559F0:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_821559F8:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82155a18
	if (!ctx.cr0.eq) goto loc_82155A18;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-8896
	ctx.r3.s64 = ctx.r10.s64 + -8896;
	// li r5,551
	ctx.r5.s64 = 551;
	// bl 0x821231d0
	ctx.lr = 0x82155A18;
	sub_821231D0(ctx, base);
loc_82155A18:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// stw r27,16(r26)
	REX_STORE_U32(r26.u32 + 16, r27.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82155a30
	if (ctx.cr6.lt) goto loc_82155A30;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x82155a34
	goto loc_82155A34;
loc_82155A30:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82155A34:
	// mulli r11,r29,308
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(308));
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
	// lhz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// b 0x82155a58
	goto loc_82155A58;
loc_82155A4C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82170f90
	ctx.lr = 0x82155A54;
	sub_82170F90(ctx, base);
	// lhzu r3,2(r31)
	ea = 2 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
loc_82155A58:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82155a4c
	if (!ctx.cr0.eq) goto loc_82155A4C;
loc_82155A60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8215DAC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215DAC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,18780
	ctx.r11.s64 = ctx.r11.s64 + 18780;
	// addi r10,r10,18556
	ctx.r10.s64 = ctx.r10.s64 + 18556;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,18788
	ctx.r10.s64 = ctx.r9.s64 + 18788;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8215c328
	ctx.lr = 0x8215DB20;
	sub_8215C328(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,18776
	ctx.r11.s64 = ctx.r11.s64 + 18776;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// bl 0x8215bdf8
	ctx.lr = 0x8215DB3C;
	sub_8215BDF8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215bed0
	ctx.lr = 0x8215DB4C;
	sub_8215BED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215db90
	if (!ctx.cr0.eq) goto loc_8215DB90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// bne cr6,0x8215db78
	if (!ctx.cr6.eq) goto loc_8215DB78;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8215DB78:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq 0x8215db90
	if (ctx.cr0.eq) goto loc_8215DB90;
	// bl 0x8215d170
	ctx.lr = 0x8215DB90;
	sub_8215D170(ctx, base);
loc_8215DB90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82166F38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-21096
	ctx.r4.s64 = ctx.r11.s64 + -21096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82166F60;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215fb50
	ctx.lr = 0x82166F68;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82166fb4
	if (ctx.cr0.eq) goto loc_82166FB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-21088
	ctx.r4.s64 = ctx.r11.s64 + -21088;
	// bl 0x8215f338
	ctx.lr = 0x82166F80;
	sub_8215F338(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x8215fb50
	ctx.lr = 0x82166F88;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82166fb4
	if (ctx.cr0.eq) goto loc_82166FB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-21080
	ctx.r4.s64 = ctx.r11.s64 + -21080;
	// bl 0x8215f338
	ctx.lr = 0x82166FA0;
	sub_8215F338(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x8215fb50
	ctx.lr = 0x82166FA8;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82166fb8
	if (!ctx.cr0.eq) goto loc_82166FB8;
loc_82166FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82166FB8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_8216A6C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8216a6e0
	if (ctx.cr0.eq) goto loc_8216A6E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8216a74c
	goto loc_8216A74C;
loc_8216A6E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8216a72c
	if (!ctx.cr0.eq) goto loc_8216A72C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8216a700
	goto loc_8216A700;
loc_8216A6F8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8216A700:
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8216a6f8
	if (ctx.cr0.eq) goto loc_8216A6F8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8216A714:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8216a73c
	if (!ctx.cr6.eq) goto loc_8216A73C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8216A72C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8216a714
	if (ctx.cr0.eq) goto loc_8216A714;
loc_8216A73C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,33(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8216A74C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216FC38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8216fc50
	if (!ctx.cr6.lt) goto loc_8216FC50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8216FC50:
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821711B8) {
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
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821711E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x821711F0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217121c
	if (ctx.cr0.eq) goto loc_8217121C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,8248
	ctx.r10.s64 = ctx.r10.s64 + 8248;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82171220
	goto loc_82171220;
loc_8217121C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82171220:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-25728
	ctx.r5.s64 = ctx.r10.s64 + -25728;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217123C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82176FC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82176FC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821626c0
	ctx.lr = 0x82176FE0;
	sub_821626C0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821626c0
	ctx.lr = 0x82176FEC;
	sub_821626C0(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821626c0
	ctx.lr = 0x82176FF8;
	sub_821626C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x82125c20
	ctx.lr = 0x82177008;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x82177014;
	sub_82125C98(ctx, base);
	// lbz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 76);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,77(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 77);
	// stb r11,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// lbz r11,78(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 78);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// lbz r11,79(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 79);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// bl 0x821626c0
	ctx.lr = 0x82177044;
	sub_821626C0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r28,84(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x8217705C;
	sub_82125C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x82177068;
	sub_82125C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82177074;
	sub_826A1E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217AE30) {
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
	// lwz r31,40(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r30,r11,-17568
	r30.s64 = ctx.r11.s64 + -17568;
	// b 0x8217ae90
	goto loc_8217AE90;
loc_8217AE54:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8217AE60:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8217ae84
	if (ctx.cr0.eq) goto loc_8217AE84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217ae60
	if (ctx.cr6.eq) goto loc_8217AE60;
loc_8217AE84:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8217af18
	if (ctx.cr0.eq) goto loc_8217AF18;
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_8217AE90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217ae54
	if (!ctx.cr6.eq) goto loc_8217AE54;
	// b 0x8217af14
	goto loc_8217AF14;
loc_8217AE9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217AEB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217af08
	if (ctx.cr0.eq) goto loc_8217AF08;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217AECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217af24
	goto loc_8217AF24;
loc_8217AED0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8217AEDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8217af00
	if (ctx.cr0.eq) goto loc_8217AF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217aedc
	if (ctx.cr6.eq) goto loc_8217AEDC;
loc_8217AF00:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8217af18
	if (ctx.cr0.eq) goto loc_8217AF18;
loc_8217AF08:
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217aed0
	if (!ctx.cr6.eq) goto loc_8217AED0;
loc_8217AF14:
	// li r31,0
	r31.s64 = 0;
loc_8217AF18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217ae9c
	if (!ctx.cr6.eq) goto loc_8217AE9C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217AF24:
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

DEFINE_REX_FUNC(sub_82183B80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15660
	ctx.r3.s64 = ctx.r11.s64 + -15660;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183E80) {
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
	ctx.lr = 0x82183E88;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r30,6096(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// ble cr6,0x82183ebc
	if (!ctx.cr6.gt) goto loc_82183EBC;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// b 0x82183ed0
	goto loc_82183ED0;
loc_82183EBC:
	// li r11,192
	ctx.r11.s64 = 192;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
loc_82183ED0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r31,r4,176
	r31.s64 = ctx.r4.s64 + 176;
	// addi r28,r29,160
	r28.s64 = r29.s64 + 160;
	// addi r27,r29,96
	r27.s64 = r29.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136f38
	ctx.lr = 0x82183F04;
	sub_82136F38(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x821842f0
	ctx.lr = 0x82183F24;
	sub_821842F0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136f38
	ctx.lr = 0x82183F3C;
	sub_82136F38(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136f38
	ctx.lr = 0x82183F54;
	sub_82136F38(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136f38
	ctx.lr = 0x82183F6C;
	sub_82136F38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8218B7C8) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x8218B7D0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca0
	ctx.lr = 0x8218B7D8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r29,r11,32
	r29.s64 = ctx.r11.s64 + 32;
	// add r23,r10,r3
	r23.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218b970
	if (!ctx.cr6.gt) goto loc_8218B970;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f26,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f26.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
loc_8218B828:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f2,f13,f9,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmsubs f1,f0,f9,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f11.f64)));
	// bl 0x8218aa80
	ctx.lr = 0x8218B868;
	sub_8218AA80(ctx, base);
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// rlwinm r25,r3,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + ctx.r11.u64;
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8218b950
	if (!ctx.cr6.lt) goto loc_8218B950;
	// lfs f0,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8218b950
	if (!ctx.cr6.lt) goto loc_8218B950;
	// lfs f0,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8218b8c0
	if (!ctx.cr6.gt) goto loc_8218B8C0;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fdivs f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8218B8C0:
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8218b8dc
	if (!ctx.cr6.gt) goto loc_8218B8DC;
	// fsubs f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fdivs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8218B8DC:
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f28.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8218ca70
	ctx.lr = 0x8218B8F0;
	sub_8218CA70(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmuls f29,f0,f30
	f29.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x8218ca70
	ctx.lr = 0x8218B928;
	sub_8218CA70(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lfd f12,0(r28)
	ctx.f12.u64 = REX_LOAD_U64(r28.u32 + 0);
	// lfd f13,136(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 136);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f30,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f30.f64, -f29.f64)));
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_8218B950:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218b828
	if (ctx.cr6.lt) goto loc_8218B828;
loc_8218B970:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cec
	ctx.lr = 0x8218B97C;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82196E80) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8215f0f0
	ctx.lr = 0x82196EB8;
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

DEFINE_REX_FUNC(sub_8219AAF8) {
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
	ctx.lr = 0x8219AB00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822f6280
	ctx.lr = 0x8219AB1C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8219ab94
	if (ctx.cr0.eq) goto loc_8219AB94;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r30,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r30.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
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
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// stb r11,73(r31)
	REX_STORE_U8(r31.u32 + 73, ctx.r11.u8);
	// beq 0x8219ab74
	if (ctx.cr0.eq) goto loc_8219AB74;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r28,28
	r27.s64 = r28.s64 + 28;
	// bl 0x82120d70
	ctx.lr = 0x8219AB60;
	sub_82120D70(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120d70
	ctx.lr = 0x8219AB6C;
	sub_82120D70(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
loc_8219AB74:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8219acd8
	ctx.lr = 0x8219AB88;
	sub_8219ACD8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8219AB94:
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
	ctx.lr = 0x8219ABB0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8219EEB8) {
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
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x822f6280
	ctx.lr = 0x8219EECC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219eedc
	if (ctx.cr0.eq) goto loc_8219EEDC;
	// bl 0x8219ef38
	ctx.lr = 0x8219EED8;
	sub_8219EF38(ctx, base);
	// b 0x8219eee0
	goto loc_8219EEE0;
loc_8219EEDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219EEE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A07C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15448
	ctx.r3.s64 = ctx.r11.s64 + -15448;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0A08) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-28356
	ctx.r11.s64 = ctx.r11.s64 + -28356;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1CEC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1E20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821A2A58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a2a74
	if (!ctx.cr6.eq) goto loc_821A2A74;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821A2A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3A18) {
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
	// lwz r11,-20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3A48;
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

DEFINE_REX_FUNC(sub_821A4750) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3aa8
	sub_821A3AA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A4EA0) {
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
	// lbz r10,81(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 81);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26116
	ctx.r11.s64 = ctx.r11.s64 + -26116;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821a4eec
	if (ctx.cr0.eq) goto loc_821A4EEC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,84(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,6216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6216);
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82293d58
	ctx.lr = 0x821A4EE0;
	sub_82293D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stb r11,81(r31)
	REX_STORE_U8(r31.u32 + 81, ctx.r11.u8);
loc_821A4EEC:
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

DEFINE_REX_FUNC(sub_821A7198) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x821A71B8;
	sub_8215F0F0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r31,6184(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6184);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a71e4
	if (ctx.cr6.eq) goto loc_821A71E4;
	// b 0x821a71d8
	goto loc_821A71D8;
loc_821A71CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82151278
	ctx.lr = 0x821A71D8;
	sub_82151278(ctx, base);
loc_821A71D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a71cc
	if (!ctx.cr6.eq) goto loc_821A71CC;
loc_821A71E4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a721c
	if (ctx.cr6.eq) goto loc_821A721C;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821a7208
	if (ctx.cr6.lt) goto loc_821A7208;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821A7208:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A721C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A721C:
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

DEFINE_REX_FUNC(sub_821AAF78) {
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
	// bl 0x821a7610
	ctx.lr = 0x821AAF90;
	sub_821A7610(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821aafa0
	if (!ctx.cr0.eq) goto loc_821AAFA0;
loc_821AAF98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821aafd4
	goto loc_821AAFD4;
loc_821AAFA0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aafd0
	if (ctx.cr6.eq) goto loc_821AAFD0;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821682c8
	ctx.lr = 0x821AAFBC;
	sub_821682C8(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821aaf98
	if (ctx.cr0.eq) goto loc_821AAF98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ab0c0
	ctx.lr = 0x821AAFD0;
	sub_821AB0C0(ctx, base);
loc_821AAFD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821AAFD4:
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

DEFINE_REX_FUNC(sub_821AE040) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821AE048;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ae0d4
	if (ctx.cr0.eq) goto loc_821AE0D4;
	// lwz r30,60(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821ae0d4
	if (ctx.cr6.eq) goto loc_821AE0D4;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ae0a4
	if (ctx.cr6.eq) goto loc_821AE0A4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r29,r11,-14556
	r29.s64 = ctx.r11.s64 + -14556;
loc_821AE080:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x821AE08C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ae0dc
	if (!ctx.cr0.eq) goto loc_821AE0DC;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ae080
	if (!ctx.cr6.eq) goto loc_821AE080;
loc_821AE0A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AE0A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae0d4
	if (ctx.cr6.eq) goto loc_821AE0D4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ae0d4
	if (ctx.cr6.eq) goto loc_821AE0D4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AE0D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AE0D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_821AE0DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821ae0a8
	goto loc_821AE0A8;
}

DEFINE_REX_FUNC(sub_821B3AE0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x821357c8
	ctx.lr = 0x821B3B00;
	sub_821357C8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,84(r30)
	REX_STORE_U32(r30.u32 + 84, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22400
	ctx.r4.s64 = ctx.r11.s64 + -22400;
	// bl 0x82120600
	ctx.lr = 0x821B3B18;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x821dd040
	ctx.lr = 0x821B3B24;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
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
	ctx.lr = 0x821B3B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821B3B58;
	sub_82120AC0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_821B6620) {
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
	ctx.lr = 0x821B6628;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82178268
	ctx.lr = 0x821B6640;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-21096
	ctx.r9.s64 = ctx.r9.s64 + -21096;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r8.u32);
	// lfs f13,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f12,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f12.f64 = double(temp.f32);
	// li r3,52
	ctx.r3.s64 = 52;
	// lfs f11,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r26,r31,128
	r26.s64 = r31.s64 + 128;
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// addi r25,r31,132
	r25.s64 = r31.s64 + 132;
	// stfs f11,128(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r24,r31,136
	r24.s64 = r31.s64 + 136;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r23,r31,140
	r23.s64 = r31.s64 + 140;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f10,140(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B66AC;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b66dc
	if (ctx.cr0.eq) goto loc_821B66DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-22948
	ctx.r4.s64 = ctx.r11.s64 + -22948;
	// bl 0x82120600
	ctx.lr = 0x821B66C4;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B66D8;
	sub_82196BA8(ctx, base);
	// b 0x821b66e0
	goto loc_821B66E0;
loc_821B66DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B66E0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B66F4;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b6e40
	ctx.lr = 0x821B6700;
	sub_821B6E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b671c
	if (ctx.cr0.eq) goto loc_821B671C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B671C;
	sub_82120AC0(ctx, base);
loc_821B671C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B6724;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b6754
	if (ctx.cr0.eq) goto loc_821B6754;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22932
	ctx.r4.s64 = ctx.r11.s64 + -22932;
	// bl 0x82120600
	ctx.lr = 0x821B673C;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821B6750;
	sub_82196BA8(ctx, base);
	// b 0x821b6758
	goto loc_821B6758;
loc_821B6754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B6758:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B6768;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b6e40
	ctx.lr = 0x821B6774;
	sub_821B6E40(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6790
	if (ctx.cr0.eq) goto loc_821B6790;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B6790;
	sub_82120AC0(ctx, base);
loc_821B6790:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B6798;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b67c8
	if (ctx.cr0.eq) goto loc_821B67C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24912
	ctx.r4.s64 = ctx.r11.s64 + 24912;
	// bl 0x82120600
	ctx.lr = 0x821B67B0;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B67C4;
	sub_82196BA8(ctx, base);
	// b 0x821b67cc
	goto loc_821B67CC;
loc_821B67C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B67CC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B67DC;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b6e40
	ctx.lr = 0x821B67E8;
	sub_821B6E40(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6804
	if (ctx.cr0.eq) goto loc_821B6804;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B6804;
	sub_82120AC0(ctx, base);
loc_821B6804:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B680C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b683c
	if (ctx.cr0.eq) goto loc_821B683C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-21256
	ctx.r4.s64 = ctx.r11.s64 + -21256;
	// bl 0x82120600
	ctx.lr = 0x821B6824;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x8219e1a0
	ctx.lr = 0x821B6838;
	sub_8219E1A0(ctx, base);
	// b 0x821b6840
	goto loc_821B6840;
loc_821B683C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B6840:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B6850;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b6e40
	ctx.lr = 0x821B685C;
	sub_821B6E40(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6878
	if (ctx.cr0.eq) goto loc_821B6878;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B6878;
	sub_82120AC0(ctx, base);
loc_821B6878:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B6880;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b68b0
	if (ctx.cr0.eq) goto loc_821B68B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-21240
	ctx.r4.s64 = ctx.r11.s64 + -21240;
	// bl 0x82120600
	ctx.lr = 0x821B6898;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821B68AC;
	sub_82196BA8(ctx, base);
	// b 0x821b68b4
	goto loc_821B68B4;
loc_821B68B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B68B4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B68C4;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b6e40
	ctx.lr = 0x821B68D0;
	sub_821B6E40(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b68ec
	if (ctx.cr0.eq) goto loc_821B68EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821B68EC;
	sub_82120AC0(ctx, base);
loc_821B68EC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B68F4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b6924
	if (ctx.cr0.eq) goto loc_821B6924;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-22436
	ctx.r4.s64 = ctx.r11.s64 + -22436;
	// bl 0x82120600
	ctx.lr = 0x821B690C;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821B6920;
	sub_82196BA8(ctx, base);
	// b 0x821b6928
	goto loc_821B6928;
loc_821B6924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B6928:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B6938;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b6e40
	ctx.lr = 0x821B6944;
	sub_821B6E40(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b695c
	if (ctx.cr0.eq) goto loc_821B695C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x821B695C;
	sub_82120AC0(ctx, base);
loc_821B695C:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B6964;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b697c
	if (ctx.cr0.eq) goto loc_821B697C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B6974;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b6980
	goto loc_821B6980;
loc_821B697C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B6980:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B6990;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B6998;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b69b0
	if (ctx.cr0.eq) goto loc_821B69B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b6ec0
	ctx.lr = 0x821B69A8;
	sub_821B6EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b69b4
	goto loc_821B69B4;
loc_821B69B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B69B4:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B69C0;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x821B69CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b69fc
	if (ctx.cr0.eq) goto loc_821B69FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r9,r9,27504
	ctx.r9.s64 = ctx.r9.s64 + 27504;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x821b6a00
	goto loc_821B6A00;
loc_821B69FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B6A00:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821a1ff8
	ctx.lr = 0x821B6A10;
	sub_821A1FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b6b70
	ctx.lr = 0x821B6A18;
	sub_821B6B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821D5938) {
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
	// bl 0x8219be30
	ctx.lr = 0x821D5958;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5968
	if (ctx.cr0.eq) goto loc_821D5968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D5968;
	sub_8269CE98(ctx, base);
loc_821D5968:
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

DEFINE_REX_FUNC(sub_821D7A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f7,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f8,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f7,1008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1008);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmsubs f11,f6,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, -ctx.f11.f64)));
	// fabs f6,f11
	ctx.f6.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// blt cr6,0x821d7b10
	if (ctx.cr6.lt) goto loc_821D7B10;
	// lfs f7,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f5,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fdivs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lfs f11,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmsubs f13,f7,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fmsubs f7,f7,f8,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, -ctx.f0.f64)));
	// fmuls f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f13,f7,f4
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821d7b10
	if (ctx.cr6.lt) goto loc_821D7B10;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821d7b10
	if (ctx.cr6.gt) goto loc_821D7B10;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x821d7b10
	if (ctx.cr6.lt) goto loc_821D7B10;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821d7b10
	if (ctx.cr6.gt) goto loc_821D7B10;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_821D7B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDF08) {
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
	ctx.lr = 0x821DDF10;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 126);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821de00c
	if (ctx.cr0.eq) goto loc_821DE00C;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DDF48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821de00c
	if (ctx.cr0.eq) goto loc_821DE00C;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x821DDF58;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ddfd0
	if (ctx.cr0.eq) goto loc_821DDFD0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r26,6152(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r30,112
	r31.s64 = r30.s64 + 112;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82178a50
	ctx.lr = 0x821DDF78;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x821DDF84;
	sub_8213BC98(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r26,0(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DDFA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8217f8a0
	ctx.lr = 0x821DDFC8;
	sub_8217F8A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821ddfd4
	goto loc_821DDFD4;
loc_821DDFD0:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_821DDFD4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821DDFE0;
	sub_821D3988(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ddff8
	if (ctx.cr0.eq) goto loc_821DDFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821DDFF8;
	sub_82120AC0(ctx, base);
loc_821DDFF8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x821DE00C;
	sub_82120B20(ctx, base);
loc_821DE00C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r10,r10,-7024
	ctx.r10.s64 = ctx.r10.s64 + -7024;
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x821DE02C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821de054
	if (ctx.cr0.eq) goto loc_821DE054;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,-12728
	ctx.r10.s64 = ctx.r10.s64 + -12728;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x821de058
	goto loc_821DE058;
loc_821DE054:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821DE058:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23844
	ctx.r5.s64 = ctx.r10.s64 + -23844;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DE074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821de08c
	if (ctx.cr0.eq) goto loc_821DE08C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821de090
	goto loc_821DE090;
loc_821DE08C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821DE090:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821de0f0
	if (ctx.cr6.eq) goto loc_821DE0F0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821de0a8
	if (ctx.cr0.eq) goto loc_821DE0A8;
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821de0ac
	goto loc_821DE0AC;
loc_821DE0A8:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_821DE0AC:
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821de0e8
	if (ctx.cr6.eq) goto loc_821DE0E8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r28,r11,-14572
	r28.s64 = ctx.r11.s64 + -14572;
loc_821DE0C4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x821DE0D0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821de118
	if (!ctx.cr0.eq) goto loc_821DE118;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821de0c4
	if (!ctx.cr6.eq) goto loc_821DE0C4;
loc_821DE0E8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821DE0EC:
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
loc_821DE0F0:
	// lbz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821de110
	if (ctx.cr0.eq) goto loc_821DE110;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r27,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821de180
	ctx.lr = 0x821DE110;
	sub_821DE180(ctx, base);
loc_821DE110:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1d00
	return;
loc_821DE118:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821de0ec
	goto loc_821DE0EC;
}

DEFINE_REX_FUNC(sub_821EBCD8) {
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
	ctx.lr = 0x821EBCE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,112(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821ebd74
	if (ctx.cr6.eq) goto loc_821EBD74;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ebd34
	if (ctx.cr6.eq) goto loc_821EBD34;
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
loc_821EBD0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821EBD1C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821ebd58
	if (ctx.cr0.eq) goto loc_821EBD58;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ebd0c
	if (!ctx.cr6.eq) goto loc_821EBD0C;
loc_821EBD34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EBD38:
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebd60
	if (ctx.cr6.eq) goto loc_821EBD60;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x821ebd64
	goto loc_821EBD64;
loc_821EBD58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821ebd38
	goto loc_821EBD38;
loc_821EBD60:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821EBD64:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ebd74
	if (!ctx.cr0.eq) goto loc_821EBD74;
loc_821EBD6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ebda8
	goto loc_821EBDA8;
loc_821EBD74:
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ebd9c
	goto loc_821EBD9C;
loc_821EBD80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821ebcd8
	ctx.lr = 0x821EBD8C;
	sub_821EBCD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ebd6c
	if (ctx.cr0.eq) goto loc_821EBD6C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
loc_821EBD9C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ebd80
	if (!ctx.cr6.eq) goto loc_821EBD80;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EBDA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821F5900) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F5908;
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
	// beq cr6,0x821f593c
	if (ctx.cr6.eq) goto loc_821F593C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,396
	ctx.r5.s64 = 396;
	// bl 0x821231d0
	ctx.lr = 0x821F593C;
	sub_821231D0(ctx, base);
loc_821F593C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F5950;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23256
	ctx.r4.s64 = ctx.r11.s64 + 23256;
	// bl 0x8215f338
	ctx.lr = 0x821F595C;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F5968;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F81F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821F81F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,100(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,24112
	r30.s64 = ctx.r11.s64 + 24112;
	// addi r28,r10,24064
	r28.s64 = ctx.r10.s64 + 24064;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821f8230
	if (ctx.cr6.eq) goto loc_821F8230;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821F8230;
	sub_821231D0(ctx, base);
loc_821F8230:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f829c
	if (ctx.cr0.eq) goto loc_821F829C;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f8254
	if (ctx.cr6.eq) goto loc_821F8254;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,586
	ctx.r5.s64 = 586;
	// bl 0x821231d0
	ctx.lr = 0x821F8254;
	sub_821231D0(ctx, base);
loc_821F8254:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f8294
	if (ctx.cr6.eq) goto loc_821F8294;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// li r5,590
	ctx.r5.s64 = 590;
	// bl 0x821231d0
	ctx.lr = 0x821F8294;
	sub_821231D0(ctx, base);
loc_821F8294:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821f832c
	goto loc_821F832C;
loc_821F829C:
	// li r30,0
	r30.s64 = 0;
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r7,r31,88
	ctx.r7.s64 = r31.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,6204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F82CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821f82e8
	if (ctx.cr6.eq) goto loc_821F82E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// li r5,193
	ctx.r5.s64 = 193;
	// bl 0x821231d0
	ctx.lr = 0x821F82E8;
	sub_821231D0(ctx, base);
loc_821F82E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f8328
	if (!ctx.cr6.gt) goto loc_821F8328;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_821F82F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821F8304;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f82f8
	if (ctx.cr6.lt) goto loc_821F82F8;
loc_821F8328:
	// li r11,8
	ctx.r11.s64 = 8;
loc_821F832C:
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822004D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822004F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822004f0
	if (ctx.cr6.lt) goto loc_822004F0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200FD8) {
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
	ctx.lr = 0x82200FE0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 140);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r26,144(r4)
	REX_STORE_U32(ctx.r4.u32 + 144, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201108
	if (ctx.cr6.eq) goto loc_82201108;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,112
	ctx.r3.s64 = r30.s64 + 112;
	// addi r5,r11,544
	ctx.r5.s64 = ctx.r11.s64 + 544;
	// bl 0x821efa90
	ctx.lr = 0x8220101C;
	sub_821EFA90(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220109c
	if (ctx.cr0.eq) goto loc_8220109C;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82201040
	if (ctx.cr6.lt) goto loc_82201040;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82201040:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,28712
	ctx.r5.s64 = ctx.r11.s64 + 28712;
	// bl 0x82202d10
	ctx.lr = 0x82201050;
	sub_82202D10(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r29,r1,140
	r29.s64 = ctx.r1.s64 + 140;
	// addi r27,r11,10560
	r27.s64 = ctx.r11.s64 + 10560;
loc_82201064:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82201070;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x82201078;
	sub_8215F200(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82201080;
	sub_8215F0F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lfsu f0,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r29.u32 = ea;
	// stfs f0,8(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// blt cr6,0x82201064
	if (ctx.cr6.lt) goto loc_82201064;
loc_8220109C:
	// lwz r3,132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 132);
	// bl 0x82151d50
	ctx.lr = 0x822010A4;
	sub_82151D50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821a1f88
	ctx.lr = 0x822010B0;
	sub_821A1F88(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,172(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 132);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r10,468(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// addi r8,r10,320
	ctx.r8.s64 = ctx.r10.s64 + 320;
	// std r11,320(r10)
	REX_STORE_U64(ctx.r10.u32 + 320, ctx.r11.u64);
	// std r9,328(r10)
	REX_STORE_U64(ctx.r10.u32 + 328, ctx.r9.u64);
loc_82201108:
	// lwz r3,132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lbz r11,699(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 699);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220112c
	if (ctx.cr0.eq) goto loc_8220112C;
	// lbz r11,705(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 705);
	// stb r26,699(r3)
	REX_STORE_U8(ctx.r3.u32 + 699, r26.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8220112c
	if (!ctx.cr0.eq) goto loc_8220112C;
	// bl 0x8224c660
	ctx.lr = 0x8220112C;
	sub_8224C660(ctx, base);
loc_8220112C:
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 128);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,112(r10)
	REX_STORE_U8(ctx.r10.u32 + 112, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8220B080) {
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
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x822f6280
	ctx.lr = 0x8220B094;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220b0a4
	if (ctx.cr0.eq) goto loc_8220B0A4;
	// bl 0x8220b0b8
	ctx.lr = 0x8220B0A0;
	sub_8220B0B8(ctx, base);
	// b 0x8220b0a8
	goto loc_8220B0A8;
loc_8220B0A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220B0A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C3D8) {
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
	ctx.lr = 0x8220C3F0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220c414
	if (ctx.cr0.eq) goto loc_8220C414;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268f38
	ctx.lr = 0x8220C400;
	sub_82268F38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-32256
	ctx.r11.s64 = ctx.r11.s64 + -32256;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220c418
	goto loc_8220C418;
loc_8220C414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C418:
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

DEFINE_REX_FUNC(sub_8220E488) {
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
	ctx.lr = 0x8220E490;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16340
	ctx.r4.s64 = ctx.r11.s64 + 16340;
	// bl 0x82120600
	ctx.lr = 0x8220E4A8;
	sub_82120600(ctx, base);
	// lis r18,-32106
	r18.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8220E4B8;
	sub_82180E18(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8220E4CC;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8220e6ac
	if (ctx.cr6.eq) goto loc_8220E6AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r22,96
	ctx.r3.s64 = r22.s64 + 96;
	// addi r4,r11,22808
	ctx.r4.s64 = ctx.r11.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x8220E4E4;
	sub_8215F338(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r29,r11,17388
	r29.s64 = ctx.r11.s64 + 17388;
	// addi r28,r10,-26856
	r28.s64 = ctx.r10.s64 + -26856;
loc_8220E514:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8220e52c
	if (!ctx.cr6.eq) goto loc_8220E52C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8220e530
	goto loc_8220E530;
loc_8220E52C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8220E530:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8220e620
	if (!ctx.cr6.lt) goto loc_8220E620;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f530
	ctx.lr = 0x8220E544;
	sub_8215F530(ctx, base);
	// lwz r11,6248(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821ef4d0
	ctx.lr = 0x8220E558;
	sub_821EF4D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220e618
	if (ctx.cr0.eq) goto loc_8220E618;
	// lwz r3,6272(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6272);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220e5a8
	if (ctx.cr0.eq) goto loc_8220E5A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8220e614
	if (!ctx.cr6.lt) goto loc_8220E614;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// b 0x8220e614
	goto loc_8220E614;
loc_8220E5A8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8220E5B4;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120600
	ctx.lr = 0x8220E5C0;
	sub_82120600(ctx, base);
	// lwz r3,6276(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6276);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8220E5F4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220E604;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220e618
	if (ctx.cr0.eq) goto loc_8220E618;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,288(r20)
	REX_STORE_U8(r20.u32 + 288, ctx.r11.u8);
loc_8220E614:
	// stb r19,289(r20)
	REX_STORE_U8(r20.u32 + 289, r19.u8);
loc_8220E618:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8220e514
	goto loc_8220E514;
loc_8220E620:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,-30420
	ctx.r4.s64 = ctx.r11.s64 + -30420;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826a0568
	ctx.lr = 0x8220E638;
	sub_826A0568(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-30412
	ctx.r4.s64 = ctx.r10.s64 + -30412;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120600
	ctx.lr = 0x8220E668;
	sub_82120600(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82121dd0
	ctx.lr = 0x8220E678;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r20,260
	ctx.r3.s64 = r20.s64 + 260;
	// bl 0x82120700
	ctx.lr = 0x8220E684;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8220E694;
	sub_82120AC0(ctx, base);
	// lwz r3,6040(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 6040);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220E6AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220E6AC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82223240) {
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
	// addi r3,r3,796
	ctx.r3.s64 = ctx.r3.s64 + 796;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8226b588
	ctx.lr = 0x82223264;
	sub_8226B588(ctx, base);
	// addi r3,r31,700
	ctx.r3.s64 = r31.s64 + 700;
	// bl 0x822e6f28
	ctx.lr = 0x8222326C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// bl 0x822e6f28
	ctx.lr = 0x82223274;
	sub_822E6F28(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = r31.s64 + 484;
	// bl 0x822e6f28
	ctx.lr = 0x8222327C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x822e6f28
	ctx.lr = 0x82223284;
	sub_822E6F28(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x822e6f28
	ctx.lr = 0x8222328C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822e6f28
	ctx.lr = 0x82223294;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8222329C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822232ac
	if (ctx.cr0.eq) goto loc_822232AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822232AC;
	sub_8269CE98(ctx, base);
loc_822232AC:
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

DEFINE_REX_FUNC(sub_82227980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82227988;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r29,680(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 680);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-24116
	ctx.r4.s64 = ctx.r11.s64 + -24116;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x822279AC;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x822279B4;
	sub_8215F200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x822279BC;
	sub_8215F5F8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822279d0
	if (ctx.cr6.lt) goto loc_822279D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822279d4
	goto loc_822279D4;
loc_822279D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_822279D4:
	// bl 0x8215fbf8
	ctx.lr = 0x822279D8;
	sub_8215FBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82229368) {
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
	ctx.lr = 0x8222937C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222938c
	if (ctx.cr0.eq) goto loc_8222938C;
	// bl 0x822293a0
	ctx.lr = 0x82229388;
	sub_822293A0(ctx, base);
	// b 0x82229390
	goto loc_82229390;
loc_8222938C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229CF0) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x822f6280
	ctx.lr = 0x82229D04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82229d14
	if (ctx.cr0.eq) goto loc_82229D14;
	// bl 0x82229b60
	ctx.lr = 0x82229D10;
	sub_82229B60(ctx, base);
	// b 0x82229d18
	goto loc_82229D18;
loc_82229D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229D18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222A5D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13764
	ctx.r3.s64 = ctx.r11.s64 + -13764;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222A788) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8222A790;
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
	ctx.lr = 0x8222A7A4;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r11,r11,-22120
	ctx.r11.s64 = ctx.r11.s64 + -22120;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8222A7C4;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8222A7CC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222a7fc
	if (ctx.cr0.eq) goto loc_8222A7FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22980
	ctx.r4.s64 = ctx.r11.s64 + -22980;
	// bl 0x82120600
	ctx.lr = 0x8222A7E4;
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
	ctx.lr = 0x8222A7F8;
	sub_821BF110(ctx, base);
	// b 0x8222a800
	goto loc_8222A800;
loc_8222A7FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A800:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8222A810;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a828
	if (ctx.cr0.eq) goto loc_8222A828;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222A828;
	sub_82120AC0(ctx, base);
loc_8222A828:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222EB88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-26856
	ctx.r5.s64 = ctx.r10.s64 + -26856;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x8222EBBC;
	sub_8216B6A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222ea80
	ctx.lr = 0x8222EBC8;
	sub_8222EA80(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822315B8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// bl 0x82120600
	ctx.lr = 0x822315DC;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x821dd0c8
	ctx.lr = 0x822315E8;
	sub_821DD0C8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231610
	if (ctx.cr6.eq) goto loc_82231610;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13580
	ctx.r10.s64 = ctx.r10.s64 + -13580;
loc_822315FC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82231630
	if (ctx.cr6.eq) goto loc_82231630;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822315fc
	if (!ctx.cr6.eq) goto loc_822315FC;
loc_82231610:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231614:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231638
	if (ctx.cr0.eq) goto loc_82231638;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231638
	if (ctx.cr6.eq) goto loc_82231638;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8223163c
	goto loc_8223163C;
loc_82231630:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82231614
	goto loc_82231614;
loc_82231638:
	// li r31,0
	r31.s64 = 0;
loc_8223163C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8223164C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82236190) {
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
	ctx.lr = 0x82236198;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x821914c8
	ctx.lr = 0x822361A8;
	sub_821914C8(ctx, base);
	// lbz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 296);
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822361d0
	if (ctx.cr0.eq) goto loc_822361D0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x821c5618
	ctx.lr = 0x822361C8;
	sub_821C5618(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e34c8
	ctx.lr = 0x822361D0;
	sub_821E34C8(ctx, base);
loc_822361D0:
	// lbz r11,817(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 817);
	// li r8,-1
	ctx.r8.s64 = -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822361e4
	if (!ctx.cr0.eq) goto loc_822361E4;
	// li r8,-2
	ctx.r8.s64 = -2;
loc_822361E4:
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r30,r31,448
	r30.s64 = r31.s64 + 448;
	// sth r10,660(r31)
	REX_STORE_U16(r31.u32 + 660, ctx.r10.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236210
	if (ctx.cr6.eq) goto loc_82236210;
	// lwz r9,200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// sth r10,714(r11)
	REX_STORE_U16(ctx.r11.u32 + 714, ctx.r10.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82236210
	if (ctx.cr6.eq) goto loc_82236210;
	// sth r10,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
loc_82236210:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// sth r8,214(r30)
	REX_STORE_U16(r30.u32 + 214, ctx.r8.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236234
	if (ctx.cr6.eq) goto loc_82236234;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// sth r8,716(r11)
	REX_STORE_U16(ctx.r11.u32 + 716, ctx.r8.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82236234
	if (ctx.cr6.eq) goto loc_82236234;
	// sth r8,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
loc_82236234:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r3,244(r30)
	REX_STORE_U32(r30.u32 + 244, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236268
	if (ctx.cr6.eq) goto loc_82236268;
	// stw r3,500(r11)
	REX_STORE_U32(ctx.r11.u32 + 500, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236268
	if (ctx.cr6.eq) goto loc_82236268;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82236268:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// stw r10,248(r30)
	REX_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236280
	if (ctx.cr6.eq) goto loc_82236280;
	// stw r10,708(r11)
	REX_STORE_U32(ctx.r11.u32 + 708, ctx.r10.u32);
loc_82236280:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e3cf0
	ctx.lr = 0x82236288;
	sub_821E3CF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e4490
	ctx.lr = 0x82236290;
	sub_821E4490(ctx, base);
	// lbz r11,816(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 816);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822362a8
	if (!ctx.cr0.eq) goto loc_822362A8;
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_822362A8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822362C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,6048(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x822362E8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-12728
	r27.s64 = ctx.r11.s64 + -12728;
	// beq 0x82236310
	if (ctx.cr0.eq) goto loc_82236310;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82236314
	goto loc_82236314;
loc_82236310:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82236314:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,6048(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8223634C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223636c
	if (ctx.cr0.eq) goto loc_8223636C;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82236370
	goto loc_82236370;
loc_8223636C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82236370:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223638C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r10,r31,832
	ctx.r10.s64 = r31.s64 + 832;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// ld r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// std r10,832(r31)
	REX_STORE_U64(r31.u32 + 832, ctx.r10.u64);
	// ld r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,840(r31)
	REX_STORE_U64(r31.u32 + 840, ctx.r10.u64);
	// ld r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,848(r31)
	REX_STORE_U64(r31.u32 + 848, ctx.r10.u64);
	// ld r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// std r11,856(r31)
	REX_STORE_U64(r31.u32 + 856, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82245CF8) {
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
	ctx.lr = 0x82245D00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245D28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82245e54
	if (!ctx.cr0.gt) goto loc_82245E54;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_82245D34:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245D4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,705(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82245e34
	if (!ctx.cr0.eq) goto loc_82245E34;
	// lwz r9,144(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f0,68(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x82245e34
	if (!ctx.cr6.lt) goto loc_82245E34;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f10.f64)));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82245e34
	if (!ctx.cr6.lt) goto loc_82245E34;
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82245e34
	if (!ctx.cr6.lt) goto loc_82245E34;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// lwz r3,6296(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6296);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82245e1c
	if (ctx.cr6.lt) goto loc_82245E1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82245E1C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245E34:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82245E4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82245d34
	if (ctx.cr6.lt) goto loc_82245D34;
loc_82245E54:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82252F88) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f4,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f3,472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,468(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,464(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ad88
	ctx.lr = 0x82252FC4;
	sub_8216AD88(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8216af20
	ctx.lr = 0x82252FF8;
	sub_8216AF20(ctx, base);
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

DEFINE_REX_FUNC(sub_82254E00) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82254ed4
	if (!ctx.cr6.gt) goto loc_82254ED4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82254e48
	if (ctx.cr6.gt) goto loc_82254E48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-21756
	ctx.r3.s64 = ctx.r10.s64 + -21756;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821231d0
	ctx.lr = 0x82254E48;
	sub_821231D0(ctx, base);
loc_82254E48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256840
	ctx.lr = 0x82254E50;
	sub_82256840(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82254E5C;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,-10760
	ctx.r3.s64 = ctx.r10.s64 + -10760;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8226afb8
	ctx.lr = 0x82254E74;
	sub_8226AFB8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10728
	ctx.r4.s64 = ctx.r11.s64 + -10728;
	// bl 0x82120600
	ctx.lr = 0x82254E84;
	sub_82120600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256840
	ctx.lr = 0x82254E8C;
	sub_82256840(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r31,-1
	r31.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-13252
	ctx.r3.s64 = ctx.r11.s64 + -13252;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x82254EAC;
	sub_82120B20(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x82254EC4;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82254ED4;
	sub_82120AC0(ctx, base);
loc_82254ED4:
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

DEFINE_REX_FUNC(sub_8225AF68) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// stw r9,1584(r3)
	REX_STORE_U32(ctx.r3.u32 + 1584, ctx.r9.u32);
	// bne cr6,0x8225afc4
	if (!ctx.cr6.eq) goto loc_8225AFC4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,160(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11228
	ctx.r6.s64 = ctx.r11.s64 + -11228;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x8225AFBC;
	sub_82288100(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8225b068
	goto loc_8225B068;
loc_8225AFC4:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8225aff8
	if (!ctx.cr6.eq) goto loc_8225AFF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11340
	ctx.r6.s64 = ctx.r11.s64 + -11340;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x8225AFF0;
	sub_82288100(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8225b068
	goto loc_8225B068;
loc_8225AFF8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8225b014
	if (!ctx.cr6.eq) goto loc_8225B014;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11368
	ctx.r6.s64 = ctx.r11.s64 + -11368;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// b 0x8225b050
	goto loc_8225B050;
loc_8225B014:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// addi r5,r10,-26252
	ctx.r5.s64 = ctx.r10.s64 + -26252;
	// bne cr6,0x8225b048
	if (!ctx.cr6.eq) goto loc_8225B048;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,-11208
	ctx.r6.s64 = ctx.r11.s64 + -11208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x8225B040;
	sub_82288100(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8225b068
	goto loc_8225B068;
loc_8225B048:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-11184
	ctx.r6.s64 = ctx.r11.s64 + -11184;
loc_8225B050:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x8225B064;
	sub_82288100(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8225B068:
	// stw r11,1584(r31)
	REX_STORE_U32(r31.u32 + 1584, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82263AE8) {
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
	ctx.lr = 0x82263AF0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// bne cr6,0x82263b30
	if (!ctx.cr6.eq) goto loc_82263B30;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r31.s64 = ctx.r11.s32 >> 4;
	// b 0x82263b34
	goto loc_82263B34;
loc_82263B30:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82263B34:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215fc78
	ctx.lr = 0x82263B3C;
	sub_8215FC78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x82263B48;
	sub_8215DC10(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82263B4C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82263b74
	if (!ctx.cr6.eq) goto loc_82263B74;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82263b78
	goto loc_82263B78;
loc_82263B74:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82263B78:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82263b98
	if (!ctx.cr6.lt) goto loc_82263B98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82145980
	ctx.lr = 0x82263B8C;
	sub_82145980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82263b4c
	goto loc_82263B4C;
loc_82263B98:
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r28,r4
	ctx.r11.u64 = ctx.r4.u64 - r28.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x82264788
	ctx.lr = 0x82263BB4;
	sub_82264788(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
	// addi r27,r11,24544
	r27.s64 = ctx.r11.s64 + 24544;
loc_82263BC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82263be8
	if (!ctx.cr6.eq) goto loc_82263BE8;
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
	// b 0x82263bec
	goto loc_82263BEC;
loc_82263BE8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82263BEC:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82263c48
	if (!ctx.cr6.lt) goto loc_82263C48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x8215f1b0
	ctx.lr = 0x82263C00;
	sub_8215F1B0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x82263C10;
	sub_8215F200(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82263C18;
	sub_8215EFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f200
	ctx.lr = 0x82263C24;
	sub_8215F200(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x82263C2C;
	sub_8215F670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82263C34;
	sub_8215F0F0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,8(r24)
	REX_STORE_U32(r24.u32 + 8, r31.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// b 0x82263bc4
	goto loc_82263BC4;
loc_82263C48:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82263c58
	if (ctx.cr6.eq) goto loc_82263C58;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82263C58;
	sub_8269CE98(ctx, base);
loc_82263C58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8226E490) {
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
	ctx.lr = 0x8226E498;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5272
	ctx.r4.s64 = ctx.r11.s64 + -5272;
	// bl 0x82120600
	ctx.lr = 0x8226E4B0;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208610
	ctx.lr = 0x8226E4BC;
	sub_82208610(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8226E4CC;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,25636
	ctx.r11.s64 = ctx.r11.s64 + 25636;
	// addi r10,r10,-8472
	ctx.r10.s64 = ctx.r10.s64 + -8472;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r11,r9,31560
	ctx.r11.s64 = ctx.r9.s64 + 31560;
	// addi r10,r8,-4884
	ctx.r10.s64 = ctx.r8.s64 + -4884;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r9,r7,-4880
	ctx.r9.s64 = ctx.r7.s64 + -4880;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8226E540;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8226E568;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226e618
	if (ctx.cr0.eq) goto loc_8226E618;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r4,r10,16348
	ctx.r4.s64 = ctx.r10.s64 + 16348;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
	// stw r30,16(r29)
	REX_STORE_U32(r29.u32 + 16, r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stb r11,148(r31)
	REX_STORE_U8(r31.u32 + 148, ctx.r11.u8);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
	// stb r11,157(r31)
	REX_STORE_U8(r31.u32 + 157, ctx.r11.u8);
	// bl 0x82120600
	ctx.lr = 0x8226E5CC;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8226E5DC;
	sub_82180E18(ctx, base);
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226E5F0;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226E60C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
loc_8226E618:
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
	ctx.lr = 0x8226E630;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82277B30) {
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
	// addi r11,r11,-16904
	ctx.r11.s64 = ctx.r11.s64 + -16904;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// bl 0x82120ac0
	ctx.lr = 0x82277B60;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82277B70;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82120ac0
	ctx.lr = 0x82277B80;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82120ac0
	ctx.lr = 0x82277B90;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82120ac0
	ctx.lr = 0x82277BA0;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_8227BEC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8227BED0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,296(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227c010
	if (ctx.cr6.eq) goto loc_8227C010;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8227bef4
	if (!ctx.cr6.eq) goto loc_8227BEF4;
	// bl 0x8228dd10
	ctx.lr = 0x8227BEF4;
	sub_8228DD10(ctx, base);
loc_8227BEF4:
	// lwz r31,296(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227bfa4
	if (!ctx.cr6.eq) goto loc_8227BFA4;
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r29.u64);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227bf54
	if (!ctx.cr6.gt) goto loc_8227BF54;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8227bf40
	if (ctx.cr6.gt) goto loc_8227BF40;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8227BF40;
	sub_821231D0(ctx, base);
loc_8227BF40:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x8215efb0
	ctx.lr = 0x8227BF54;
	sub_8215EFB0(ctx, base);
loc_8227BF54:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,296(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227bf8c
	if (ctx.cr6.eq) goto loc_8227BF8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BF8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227BF8C:
	// stw r29,296(r30)
	REX_STORE_U32(r30.u32 + 296, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227c020
	ctx.lr = 0x8227BF98;
	sub_8227C020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8227BFA0;
	sub_8215F0F0(ctx, base);
	// b 0x8227c018
	goto loc_8227C018;
loc_8227BFA4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfd f13,160(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 160);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfd f0,1112(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1112);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8227c018
	if (!ctx.cr6.gt) goto loc_8227C018;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8227bfe8
	if (!ctx.cr6.eq) goto loc_8227BFE8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BFE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_8227BFE8:
	// lwz r3,296(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227c008
	if (ctx.cr6.eq) goto loc_8227C008;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227C008:
	// stw r29,296(r30)
	REX_STORE_U32(r30.u32 + 296, r29.u32);
	// b 0x8227c018
	goto loc_8227C018;
loc_8227C010:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227c020
	ctx.lr = 0x8227C018;
	sub_8227C020(ctx, base);
loc_8227C018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822852E8) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x822852F0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca4
	ctx.lr = 0x822852F8;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822856c8
	ctx.lr = 0x82285304;
	sub_822856C8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r24,1
	r24.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stb r24,148(r30)
	REX_STORE_U8(r30.u32 + 148, r24.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lfs f0,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 152, temp.u32);
	// stfs f30,208(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// ld r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// bl 0x822eeb50
	ctx.lr = 0x82285358;
	sub_822EEB50(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822856b4
	if (!ctx.cr6.gt) goto loc_822856B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r30,156
	r26.s64 = r30.s64 + 156;
	// addi r29,r30,212
	r29.s64 = r30.s64 + 212;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_82285388:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82285394;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82286278
	ctx.lr = 0x822853A0;
	sub_82286278(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x826a1e70
	ctx.lr = 0x822853BC;
	sub_826A1E70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822853CC;
	sub_826A1E70(ctx, base);
	// addi r4,r31,464
	ctx.r4.s64 = r31.s64 + 464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8216d040
	ctx.lr = 0x822853D8;
	sub_8216D040(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f12,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r9,336
	ctx.r8.s64 = ctx.r9.s64 + 336;
	// lfs f11,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,320(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,324(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,328(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,336(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 336);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// ld r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f12,f12,f10,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f4.f64)));
	// fmsubs f13,f13,f11,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fmsubs f0,f9,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fadds f28,f12,f8
	f28.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f29,f13,f6
	f29.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f27,f0,f7
	f27.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// bl 0x821a33a0
	ctx.lr = 0x8228547C;
	sub_821A33A0(ctx, base);
	// lfs f0,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x82285498;
	sub_821A33A0(ctx, base);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f13,484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822854B4;
	sub_821A33A0(ctx, base);
	// lfs f0,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f13,488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822854D0;
	sub_821A33A0(ctx, base);
	// lfs f0,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f13,512(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822854EC;
	sub_821A33A0(ctx, base);
	// lfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f13,516(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x82285508;
	sub_821A33A0(ctx, base);
	// lfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f13,520(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x82285530;
	sub_823FBE48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
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
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// bl 0x823fbe48
	ctx.lr = 0x82285570;
	sub_823FBE48(ctx, base);
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// std r6,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f28,144(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// stfs f27,148(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// std r10,320(r11)
	REX_STORE_U64(ctx.r11.u32 + 320, ctx.r10.u64);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// std r8,328(r11)
	REX_STORE_U64(ctx.r11.u32 + 328, ctx.r8.u64);
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r10,r11,336
	ctx.r10.s64 = ctx.r11.s64 + 336;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,336(r11)
	REX_STORE_U64(ctx.r11.u32 + 336, ctx.r10.u64);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r10,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r10.u64);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821c3ec8
	ctx.lr = 0x82285610;
	sub_821C3EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,552(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 552);
	// bl 0x822c0f18
	ctx.lr = 0x8228561C;
	sub_822C0F18(ctx, base);
	// lbz r11,556(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 556);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228565c
	if (!ctx.cr0.eq) goto loc_8228565C;
	// lwz r3,6164(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6164);
	// lwz r4,552(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 552);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6164(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6164);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,556(r31)
	REX_STORE_U8(r31.u32 + 556, r24.u8);
loc_8228565C:
	// lwz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 580);
	// addi r11,r31,560
	ctx.r11.s64 = r31.s64 + 560;
	// lwz r3,6180(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6180);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82285674
	if (ctx.cr6.lt) goto loc_82285674;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82285674:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822856a4
	if (ctx.cr0.eq) goto loc_822856A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822856A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822856A4:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82285388
	if (ctx.cr6.lt) goto loc_82285388;
loc_822856B4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf0
	ctx.lr = 0x822856C0;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822A6028) {
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
	ctx.lr = 0x822A6030;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a61e8
	if (!ctx.cr6.gt) goto loc_822A61E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r3,80
	r27.s64 = ctx.r3.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_822A6064:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A60D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f11,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// lfs f9,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f10,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f8,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f8,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6168;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x822a59f0
	ctx.lr = 0x822A61C0;
	sub_822A59F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A61D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a6064
	if (ctx.cr6.lt) goto loc_822A6064;
loc_822A61E8:
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822BB330) {
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
	ctx.lr = 0x822BB338;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7116
	ctx.r4.s64 = ctx.r11.s64 + 7116;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x82180150
	ctx.lr = 0x822BB36C;
	sub_82180150(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bb3a4
	if (!ctx.cr6.gt) goto loc_822BB3A4;
loc_822BB37C:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822bae10
	ctx.lr = 0x822BB394;
	sub_822BAE10(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bb37c
	if (ctx.cr6.lt) goto loc_822BB37C;
loc_822BB3A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r31,276(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BB3E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821800b8
	ctx.lr = 0x822BB3E8;
	sub_821800B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822BD3B8) {
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
	ctx.lr = 0x822BD3C0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7332
	ctx.r4.s64 = ctx.r11.s64 + 7332;
	// bl 0x82180150
	ctx.lr = 0x822BD3DC;
	sub_82180150(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lwz r29,184(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822bd4c0
	if (ctx.cr6.lt) goto loc_822BD4C0;
	// ble cr6,0x822bd498
	if (!ctx.cr6.gt) goto loc_822BD498;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822bd4c0
	if (!ctx.cr6.gt) goto loc_822BD4C0;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822BD414;
	sub_822C1A70(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bd450
	if (!ctx.cr6.gt) goto loc_822BD450;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822BD430:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd444
	if (ctx.cr6.eq) goto loc_822BD444;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822BD444:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bd430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BD430;
loc_822BD450:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bd48c
	if (ctx.cr6.eq) goto loc_822BD48C;
	// lbz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822bd48c
	if (ctx.cr0.eq) goto loc_822BD48C;
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
	ctx.lr = 0x822BD48C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BD48C:
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r27.u8);
loc_822BD498:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822bd4c0
	if (!ctx.cr6.gt) goto loc_822BD4C0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_822BD4A8:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd4b8
	if (ctx.cr0.eq) goto loc_822BD4B8;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_822BD4B8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822bd4a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BD4A8;
loc_822BD4C0:
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD4DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822bd51c
	if (!ctx.cr0.gt) goto loc_822BD51C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_822BD4E8:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822bd4e8
	if (ctx.cr6.lt) goto loc_822BD4E8;
loc_822BD51C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stb r30,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x822bd544
	if (!ctx.cr6.gt) goto loc_822BD544;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c0220
	ctx.lr = 0x822BD544;
	sub_822C0220(ctx, base);
loc_822BD544:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r8,r8,7760
	ctx.r8.s64 = ctx.r8.s64 + 7760;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r5,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stb r27,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, r27.u8);
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stw r30,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// stb r27,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, r27.u8);
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// stw r30,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r30.u32);
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r30.u32);
	// stb r27,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, r27.u8);
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r30.u32);
	// stw r30,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD5F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD60C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x822f0570
	ctx.lr = 0x822BD620;
	sub_822F0570(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822bdb28
	ctx.lr = 0x822BD628;
	sub_822BDB28(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821eced8
	ctx.lr = 0x822BD650;
	sub_821ECED8(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x821eced8
	ctx.lr = 0x822BD658;
	sub_821ECED8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821eced8
	ctx.lr = 0x822BD660;
	sub_821ECED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x821eced8
	ctx.lr = 0x822BD674;
	sub_821ECED8(ctx, base);
	// bl 0x821800b8
	ctx.lr = 0x822BD678;
	sub_821800B8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822CD7E8) {
	REX_FUNC_PROLOGUE();
	// b 0x822ce208
	sub_822CE208(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CD7F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,19892(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19892);
	// andi. r10,r4,249
	ctx.r10.u64 = ctx.r4.u64 & 249;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,29,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,19892(r3)
	REX_STORE_U32(ctx.r3.u32 + 19892, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CDB70) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,19892(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19892);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cdbbc
	if (!ctx.cr0.eq) goto loc_822CDBBC;
	// rlwimi r4,r5,1,27,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1E) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822ceff0
	ctx.lr = 0x822CDBBC;
	sub_822CEFF0(ctx, base);
loc_822CDBBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D0770) {
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
	ctx.lr = 0x822D0778;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,5
	r27.s64 = 5;
	// lwz r15,10368(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 10368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// li r21,0
	r21.s64 = 0;
	// mr r14,r27
	r14.u64 = r27.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x822d080c
	if (ctx.cr6.eq) goto loc_822D080C;
	// addi r11,r5,3154
	ctx.r11.s64 = ctx.r5.s64 + 3154;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r14,4
	r14.s64 = 4;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r21,28(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r11,r21,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d07f4
	if (!ctx.cr6.eq) goto loc_822D07F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r21,r11,17,12,15
	r21.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xF0000) | (r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_822D07F4:
	// rlwinm r11,r21,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xF0000;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d080c
	if (!ctx.cr6.eq) goto loc_822D080C;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r21,r11,16,12,15
	r21.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000) | (r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_822D080C:
	// lwz r11,10560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r20,0
	r20.s64 = 0;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x822d0828
	if (ctx.cr0.eq) goto loc_822D0828;
	// li r20,118
	r20.s64 = 118;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_822D0828:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d089c
	if (ctx.cr0.eq) goto loc_822D089C;
	// lwz r29,396(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r20,r20,34561
	r20.u64 = r20.u64 | 34561;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// beq 0x822d0850
	if (ctx.cr0.eq) goto loc_822D0850;
	// rlwimi r30,r29,8,16,23
	r30.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFF00) | (r30.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x822d0860
	goto loc_822D0860;
loc_822D0850:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0860
	if (ctx.cr0.eq) goto loc_822D0860;
	// rlwimi r30,r29,8,16,23
	r30.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFF00) | (r30.u64 & 0xFFFFFFFFFFFF00FF);
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
loc_822D0860:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d0878
	if (!ctx.cr6.gt) goto loc_822D0878;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D0878;
	sub_822D5B28(ctx, base);
loc_822D0878:
	// li r11,8461
	ctx.r11.s64 = 8461;
	// li r10,255
	ctx.r10.s64 = 255;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwimi r29,r10,16,0,23
	r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFFFF00) | (r29.u64 & 0xFFFFFFFF000000FF);
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822D089C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db298
	ctx.lr = 0x822D08AC;
	sub_822DB298(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d08c4
	if (!ctx.cr6.gt) goto loc_822D08C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D08C4;
	sub_822D5B28(ctx, base);
loc_822D08C4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// rlwinm. r28,r28,0,26,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// mr r17,r20
	r17.u64 = r20.u64;
	// mr r18,r14
	r18.u64 = r14.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// bne 0x822d0a10
	if (!ctx.cr0.eq) goto loc_822D0A10;
	// rlwinm r3,r21,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x822d0a10
	if (ctx.cr6.eq) goto loc_822D0A10;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x822d0a10
	if (ctx.cr6.eq) goto loc_822D0A10;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// beq cr6,0x822d0a10
	if (ctx.cr6.eq) goto loc_822D0A10;
	// rlwinm. r11,r15,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,16
	ctx.r9.s64 = 16;
	// bne 0x822d0934
	if (!ctx.cr0.eq) goto loc_822D0934;
	// li r11,80
	ctx.r11.s64 = 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x822d0948
	goto loc_822D0948;
loc_822D0934:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,80
	ctx.r11.s64 = 80;
	// beq cr6,0x822d0948
	if (ctx.cr6.eq) goto loc_822D0948;
	// li r11,40
	ctx.r11.s64 = 40;
loc_822D0948:
	// subf r8,r25,r24
	ctx.r8.u64 = r24.u64 - r25.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0a10
	if (ctx.cr6.lt) goto loc_822D0A10;
	// subf r11,r26,r23
	ctx.r11.u64 = r23.u64 - r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822d0a10
	if (ctx.cr6.lt) goto loc_822D0A10;
	// lvlx128 v63,r0,r16
	temp.u32 = r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lvrx128 v62,r9,r16
	temp.u32 = ctx.r9.u32 + r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vor128 v1,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// rlwinm r4,r21,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 12) & 0x3F;
	// bl 0x822c6d60
	ctx.lr = 0x822D097C;
	sub_822C6D60(ctx, base);
	// li r10,8707
	ctx.r10.s64 = 8707;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stwu r10,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// li r8,8194
	ctx.r8.s64 = 8194;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r10,r6,16592
	ctx.r10.s64 = ctx.r6.s64 + 16592;
	// stwu r9,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r29.u32 = ea;
	// clrlwi r7,r21,20
	ctx.r7.u64 = r21.u32 & 0xFFF;
	// lfd f0,1584(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 1584);
	// li r9,8461
	ctx.r9.s64 = 8461;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfd f13,1592(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 1592);
	// li r12,1
	ctx.r12.s64 = 1;
	// oris r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 16711680;
	// stwu r8,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r29.u32 = ea;
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// lis r17,0
	r17.s64 = 0;
	// mr r18,r27
	r18.u64 = r27.u64;
	// ori r17,r17,34679
	r17.u64 = r17.u64 | 34679;
	// stwu r7,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r29.u32 = ea;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stwu r9,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r29.u32 = ea;
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822D0A10:
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0a28
	if (ctx.cr0.eq) goto loc_822D0A28;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822d0ab8
	goto loc_822D0AB8;
loc_822D0A28:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0ab0
	if (ctx.cr0.eq) goto loc_822D0AB0;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r9,12904(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d0a48
	if (ctx.cr6.eq) goto loc_822D0A48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0ab0
	if (!ctx.cr6.eq) goto loc_822D0AB0;
loc_822D0A48:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r9,12908(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d0a60
	if (ctx.cr6.eq) goto loc_822D0A60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0ab0
	if (!ctx.cr6.eq) goto loc_822D0AB0;
loc_822D0A60:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r9,12912(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d0a78
	if (ctx.cr6.eq) goto loc_822D0A78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0ab0
	if (!ctx.cr6.eq) goto loc_822D0AB0;
loc_822D0A78:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r9,12916(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d0a90
	if (ctx.cr6.eq) goto loc_822D0A90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0ab0
	if (!ctx.cr6.eq) goto loc_822D0AB0;
loc_822D0A90:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r9,12920(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d0aa8
	if (ctx.cr6.eq) goto loc_822D0AA8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0ab0
	if (!ctx.cr6.eq) goto loc_822D0AB0;
loc_822D0AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822d0ab4
	goto loc_822D0AB4;
loc_822D0AB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D0AB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822D0AB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d0afc
	if (!ctx.cr0.eq) goto loc_822D0AFC;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0518
	ctx.lr = 0x822D0AF8;
	sub_822D0518(ctx, base);
	// b 0x822d0cd8
	goto loc_822D0CD8;
loc_822D0AFC:
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// lwz r19,12884(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0bbc
	if (ctx.cr0.eq) goto loc_822D0BBC;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0bbc
	if (ctx.cr0.eq) goto loc_822D0BBC;
	// lis r12,5461
	ctx.r12.s64 = 357892096;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and. r30,r19,r12
	r30.u64 = r19.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822d0bbc
	if (ctx.cr0.eq) goto loc_822D0BBC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822d0bb0
	if (ctx.cr6.eq) goto loc_822D0BB0;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d0b48
	if (!ctx.cr6.gt) goto loc_822D0B48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D0B44;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D0B48:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13348);
	// lwz r6,13352(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 13352);
	// rlwimi r9,r10,18,0,13
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r4,13168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 13168);
	// lwz r5,13172(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 13172);
	// rlwinm r10,r9,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFC000;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// subf r7,r5,r23
	ctx.r7.u64 = r23.u64 - ctx.r5.u64;
	// rlwimi r10,r6,0,18,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC000);
	// subf r6,r4,r24
	ctx.r6.u64 = r24.u64 - ctx.r4.u64;
	// subf r5,r5,r26
	ctx.r5.u64 = r26.u64 - ctx.r5.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = r25.u64 - ctx.r4.u64;
	// bl 0x822d0518
	ctx.lr = 0x822D0BB0;
	sub_822D0518(ctx, base);
loc_822D0BB0:
	// lis r12,-5462
	ctx.r12.s64 = -357957632;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// and r19,r19,r12
	r19.u64 = r19.u64 & ctx.r12.u64;
loc_822D0BBC:
	// lwz r11,12924(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d0cd8
	if (!ctx.cr6.gt) goto loc_822D0CD8;
	// li r23,0
	r23.s64 = 0;
	// addi r28,r31,13172
	r28.s64 = r31.s64 + 13172;
	// addi r24,r31,12932
	r24.s64 = r31.s64 + 12932;
	// b 0x822d0be4
	goto loc_822D0BE4;
loc_822D0BDC:
	// lwz r25,348(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_822D0BE4:
	// lwz r11,-4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + -4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822d0bf4
	if (ctx.cr6.gt) goto loc_822D0BF4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_822D0BF4:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822d0c04
	if (ctx.cr6.gt) goto loc_822D0C04;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_822D0C04:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r27,364(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0c18
	if (ctx.cr6.lt) goto loc_822D0C18;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_822D0C18:
	// lwz r29,8(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822d0c2c
	if (!ctx.cr6.lt) goto loc_822D0C2C;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_822D0C2C:
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(r25.s32, r27.s32, ctx.xer);
	// bge cr6,0x822d0cbc
	if (!ctx.cr6.lt) goto loc_822D0CBC;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(r26.s32, r29.s32, ctx.xer);
	// bge cr6,0x822d0cbc
	if (!ctx.cr6.lt) goto loc_822D0CBC;
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r11,r11,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r23.u8 & 0x3F));
	// and. r30,r11,r19
	r30.u64 = ctx.r11.u64 & r19.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822d0cbc
	if (ctx.cr0.eq) goto loc_822D0CBC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d0c68
	if (!ctx.cr6.gt) goto loc_822D0C68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D0C64;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D0C68:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r7,r9,r29
	ctx.r7.u64 = r29.u64 - ctx.r9.u64;
	// lwz r11,-4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -4);
	// subf r5,r9,r26
	ctx.r5.u64 = r26.u64 - ctx.r9.u64;
	// subf r6,r11,r27
	ctx.r6.u64 = r27.u64 - ctx.r11.u64;
	// subf r4,r11,r25
	ctx.r4.u64 = r25.u64 - ctx.r11.u64;
	// bl 0x822d0518
	ctx.lr = 0x822D0CBC;
	sub_822D0518(ctx, base);
loc_822D0CBC:
	// lwz r11,12924(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d0bdc
	if (ctx.cr6.lt) goto loc_822D0BDC;
loc_822D0CD8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822F7AD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7aec
	if (ctx.cr6.eq) goto loc_822F7AEC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822f7af0
	goto loc_822F7AF0;
loc_822F7AEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F7AF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822f7b20
	if (ctx.cr0.eq) goto loc_822F7B20;
	// beq cr6,0x822f7b14
	if (ctx.cr6.eq) goto loc_822F7B14;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x822f7b18
	goto loc_822F7B18;
loc_822F7B14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F7B18:
	// cmplwi cr6,r11,4095
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4095, ctx.xer);
	// b 0x822f7b34
	goto loc_822F7B34;
loc_822F7B20:
	// beq cr6,0x822f7b2c
	if (ctx.cr6.eq) goto loc_822F7B2C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x822f7b30
	goto loc_822F7B30;
loc_822F7B2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F7B30:
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
loc_822F7B34:
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB4C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FB4C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fb4f0
	if (ctx.cr6.eq) goto loc_822FB4F0;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// bl 0x823ef2f8
	ctx.lr = 0x822FB4F0;
	sub_823EF2F8(ctx, base);
loc_822FB4F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fb508
	if (ctx.cr6.eq) goto loc_822FB508;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x822FB508;
	sub_823EF2F8(ctx, base);
loc_822FB508:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822fb520
	if (ctx.cr6.eq) goto loc_822FB520;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x822FB520;
	sub_823EF2F8(ctx, base);
loc_822FB520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FC958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FC960;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,172(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r29,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r29.u32);
	// lfs f13,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x822FC9B4;
	sub_823EF2F8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,188
	ctx.r4.s64 = r30.s64 + 188;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x823ef2f8
	ctx.lr = 0x822FC9C4;
	sub_823EF2F8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,280
	ctx.r4.s64 = r30.s64 + 280;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lfs f0,212(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,216(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// std r29,72(r31)
	REX_STORE_U64(r31.u32 + 72, r29.u64);
	// std r29,80(r31)
	REX_STORE_U64(r31.u32 + 80, r29.u64);
	// std r29,88(r31)
	REX_STORE_U64(r31.u32 + 88, r29.u64);
	// bl 0x823ef2f8
	ctx.lr = 0x822FC9FC;
	sub_823EF2F8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r11,r11,0,20,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lhz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 100);
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lhz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 100);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fca40
	if (!ctx.cr0.eq) goto loc_822FCA40;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
loc_822FCA40:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,220
	ctx.r4.s64 = r30.s64 + 220;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f0,132(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x822FCA8C;
	sub_823EF2F8(ctx, base);
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,252(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f0,256(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f0,260(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// lfs f0,140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f0,144(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f0,264(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// lfs f0,268(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// lfs f0,272(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// lfs f0,276(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// lhz r10,164(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 164);
	// sth r10,164(r31)
	REX_STORE_U16(r31.u32 + 164, ctx.r10.u16);
	// lhz r10,166(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 166);
	// sth r10,166(r31)
	REX_STORE_U16(r31.u32 + 166, ctx.r10.u16);
	// lfs f0,152(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f0,156(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// sth r29,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, r29.u16);
	// lwz r3,312(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FCB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8230E228) {
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
	ctx.lr = 0x8230E230;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e2a8
	if (ctx.cr0.eq) goto loc_8230E2A8;
	// bl 0x8230ca10
	ctx.lr = 0x8230E250;
	sub_8230CA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e2d8
	if (!ctx.cr0.eq) goto loc_8230E2D8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230ce30
	ctx.lr = 0x8230E27C;
	sub_8230CE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e294
	if (!ctx.cr0.eq) goto loc_8230E294;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10796(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10796);
	// bl 0x82341948
	ctx.lr = 0x8230E290;
	sub_82341948(ctx, base);
	// b 0x8230e2d8
	goto loc_8230E2D8;
loc_8230E294:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x8230e2d8
	goto loc_8230E2D8;
loc_8230E2A8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230dd00
	ctx.lr = 0x8230E2BC;
	sub_8230DD00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e2d8
	if (!ctx.cr0.eq) goto loc_8230E2D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230c590
	ctx.lr = 0x8230E2D8;
	sub_8230C590(ctx, base);
loc_8230E2D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82312CB0) {
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
	// li r6,60
	ctx.r6.s64 = 60;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x82312CE0;
	sub_82331A00(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312d04
	if (ctx.cr6.eq) goto loc_82312D04;
	// bl 0x82331458
	ctx.lr = 0x82312CF0;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x82312D04;
	sub_82331A00(ctx, base);
loc_82312D04:
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

DEFINE_REX_FUNC(sub_82314360) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823146E8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8231470c
	if (!ctx.cr6.eq) goto loc_8231470C;
loc_82314704:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82314774
	goto loc_82314774;
loc_8231470C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314724
	if (!ctx.cr6.eq) goto loc_82314724;
	// li r3,95
	ctx.r3.s64 = 95;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82314774
	goto loc_82314774;
loc_82314724:
	// bl 0x82316590
	ctx.lr = 0x82314728;
	sub_82316590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823164e8
	ctx.lr = 0x82314750;
	sub_823164E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82314704
	if (ctx.cr0.eq) goto loc_82314704;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82316528
	ctx.lr = 0x8231476C;
	sub_82316528(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314774:
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

DEFINE_REX_FUNC(sub_823177C8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82317918) {
	REX_FUNC_PROLOGUE();
	// lis r3,29549
	ctx.r3.s64 = 1936523264;
	// ori r3,r3,26483
	ctx.r3.u64 = ctx.r3.u64 | 26483;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82318398) {
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
	// beq cr6,0x823183e0
	if (ctx.cr6.eq) goto loc_823183E0;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82318408
	if (!ctx.cr0.eq) goto loc_82318408;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823183D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231840c
	if (!ctx.cr0.eq) goto loc_8231840C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82318404
	goto loc_82318404;
loc_823183E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823183F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231840c
	if (!ctx.cr0.eq) goto loc_8231840C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82318404:
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
loc_82318408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231840C:
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

DEFINE_REX_FUNC(sub_8231D1F0) {
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
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231D220;
	sub_82331A00(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d244
	if (ctx.cr6.eq) goto loc_8231D244;
	// bl 0x82331458
	ctx.lr = 0x8231D230;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231D244;
	sub_82331A00(ctx, base);
loc_8231D244:
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

DEFINE_REX_FUNC(sub_823205B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f2,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82312540
	sub_82312540(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82320BC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82320BD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 312);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,16(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// b 0x82320c1c
	goto loc_82320C1C;
loc_82320C00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82320c10
	if (!ctx.cr6.eq) goto loc_82320C10;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82320C10:
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r8,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82320C1C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82320c00
	if (!ctx.cr6.eq) goto loc_82320C00;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310878
	ctx.lr = 0x82320C34;
	sub_82310878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82320c4c
	if (!ctx.cr0.eq) goto loc_82320C4C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82320C4C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823267C0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x823267C8;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r17,12(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,1
	r28.s64 = 1;
	// li r20,0
	r20.s64 = 0;
	// addi r16,r3,12
	r16.s64 = ctx.r3.s64 + 12;
	// stb r28,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r28.u8);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r14,r20
	r14.u64 = r20.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(r17.u32, r16.u32, ctx.xer);
	// beq cr6,0x823275a8
	if (ctx.cr6.eq) goto loc_823275A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r18,-32126
	r18.s64 = -2105409536;
	// lfs f29,7272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7272);
	f29.f64 = double(temp.f32);
	// lfs f30,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f30.f64 = double(temp.f32);
loc_82326820:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// addi r21,r17,-4
	r21.s64 = r17.s64 + -4;
	// bne cr6,0x82326830
	if (!ctx.cr6.eq) goto loc_82326830;
	// mr r21,r20
	r21.u64 = r20.u64;
loc_82326830:
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// stb r20,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r20.u8);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232759c
	if (!ctx.cr0.eq) goto loc_8232759C;
	// std r20,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r20.u64);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x822f7a58
	ctx.lr = 0x82326850;
	sub_822F7A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326870
	if (ctx.cr0.eq) goto loc_82326870;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8232b628
	ctx.lr = 0x82326868;
	sub_8232B628(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_82326870:
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232688c
	if (ctx.cr0.eq) goto loc_8232688C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8232b2e8
	ctx.lr = 0x82326884;
	sub_8232B2E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_8232688C:
	// lwz r30,52(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 52);
	// addi r19,r21,52
	r19.s64 = r21.s64 + 52;
	// b 0x8232692c
	goto loc_8232692C;
loc_82326898:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// bne cr6,0x823268a8
	if (!ctx.cr6.eq) goto loc_823268A8;
	// mr r31,r20
	r31.u64 = r20.u64;
loc_823268A8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82326914
	if (!ctx.cr6.eq) goto loc_82326914;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stb r20,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r20.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823268e8
	if (ctx.cr6.eq) goto loc_823268E8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8233f250
	ctx.lr = 0x823268D0;
	sub_8233F250(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823268e8
	if (ctx.cr0.eq) goto loc_823268E8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x823268e8
	if (ctx.cr6.eq) goto loc_823268E8;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
loc_823268E8:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823268fc
	if (ctx.cr0.eq) goto loc_823268FC;
	// mr r24,r28
	r24.u64 = r28.u64;
	// b 0x82326914
	goto loc_82326914;
loc_823268FC:
	// lwz r11,32(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r21)
	REX_STORE_U32(r21.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82326914:
	// lbz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 44);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
	// stb r29,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r29.u8);
loc_8232692C:
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(r30.u32, r19.u32, ctx.xer);
	// bne cr6,0x82326898
	if (!ctx.cr6.eq) goto loc_82326898;
	// lwz r25,0(r19)
	r25.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r26,36(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 36);
	// b 0x82327168
	goto loc_82327168;
loc_82326940:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// addi r31,r25,-4
	r31.s64 = r25.s64 + -4;
	// bne cr6,0x82326950
	if (!ctx.cr6.eq) goto loc_82326950;
	// mr r31,r20
	r31.u64 = r20.u64;
loc_82326950:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232696C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stb r20,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r20.u8);
	// beq cr6,0x82326a58
	if (ctx.cr6.eq) goto loc_82326A58;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r6,r1,87
	ctx.r6.s64 = ctx.r1.s64 + 87;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f2,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ff560
	ctx.lr = 0x82326998;
	sub_822FF560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823269b4
	if (ctx.cr0.eq) goto loc_823269B4;
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// b 0x823269f0
	goto loc_823269F0;
loc_823269B4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823269d0
	if (!ctx.cr0.eq) goto loc_823269D0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823269f0
	if (ctx.cr0.eq) goto loc_823269F0;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823269f0
	if (!ctx.cr0.eq) goto loc_823269F0;
loc_823269D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f2,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ff5b8
	ctx.lr = 0x823269E8;
	sub_822FF5B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_823269F0:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82326a5c
	if (!ctx.cr0.eq) goto loc_82326A5C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stfs f30,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82326a28
	if (ctx.cr0.eq) goto loc_82326A28;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82326a30
	if (!ctx.cr6.lt) goto loc_82326A30;
loc_82326A28:
	// rlwinm r11,r11,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82326A30:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310888
	ctx.lr = 0x82326A40;
	sub_82310888(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82326a5c
	if (!ctx.cr6.eq) goto loc_82326A5C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82326a5c
	goto loc_82326A5C;
loc_82326A58:
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
loc_82326A5C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82313118
	ctx.lr = 0x82326A70;
	sub_82313118(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326aac
	if (ctx.cr0.eq) goto loc_82326AAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8232b7e0
	ctx.lr = 0x82326A84;
	sub_8232B7E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326b14
	if (ctx.cr0.eq) goto loc_82326B14;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82326aa4
	if (ctx.cr0.eq) goto loc_82326AA4;
	// ld r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82326b14
	if (!ctx.cr6.eq) goto loc_82326B14;
loc_82326AA4:
	// stb r20,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r20.u8);
	// b 0x82326b18
	goto loc_82326B18;
loc_82326AAC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82326b1c
	if (ctx.cr0.eq) goto loc_82326B1C;
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82326b1c
	if (!ctx.cr0.eq) goto loc_82326B1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311998
	ctx.lr = 0x82326ACC;
	sub_82311998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326b1c
	if (ctx.cr0.eq) goto loc_82326B1C;
	// lwz r11,32(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82326b1c
	if (ctx.cr6.eq) goto loc_82326B1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82313038
	ctx.lr = 0x82326AE8;
	sub_82313038(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82326b14
	if (!ctx.cr0.eq) goto loc_82326B14;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82326b08
	if (ctx.cr0.eq) goto loc_82326B08;
	// ld r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82326b14
	if (!ctx.cr6.eq) goto loc_82326B14;
loc_82326B08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823119e8
	ctx.lr = 0x82326B10;
	sub_823119E8(ctx, base);
	// b 0x82326aa4
	goto loc_82326AA4;
loc_82326B14:
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
loc_82326B18:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_82326B1C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823270f4
	if (ctx.cr0.eq) goto loc_823270F4;
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823270f4
	if (!ctx.cr0.eq) goto loc_823270F4;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stb r20,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r20.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82326ba8
	if (ctx.cr6.eq) goto loc_82326BA8;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x8233f250
	ctx.lr = 0x82326B4C;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82326b68
	if (ctx.cr6.eq) goto loc_82326B68;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82326b68
	if (ctx.cr6.eq) goto loc_82326B68;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
	// b 0x82326ba8
	goto loc_82326BA8;
loc_82326B68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311720
	ctx.lr = 0x82326B74;
	sub_82311720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82326ba8
	if (ctx.cr6.eq) goto loc_82326BA8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82326ba0
	if (!ctx.cr0.eq) goto loc_82326BA0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82326ba8
	if (ctx.cr0.eq) goto loc_82326BA8;
loc_82326BA0:
	// rlwimi r11,r28,8,23,24
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0x180) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE7F);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82326BA8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82326bb8
	if (ctx.cr0.eq) goto loc_82326BB8;
	// stb r28,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r28.u8);
loc_82326BB8:
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82326f64
	if (!ctx.cr0.eq) goto loc_82326F64;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82326eec
	if (!ctx.cr0.eq) goto loc_82326EEC;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82326eec
	if (!ctx.cr0.eq) goto loc_82326EEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82326c58
	if (!ctx.cr6.gt) goto loc_82326C58;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82326c58
	if (ctx.cr6.gt) goto loc_82326C58;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82326c58
	if (!ctx.cr6.gt) goto loc_82326C58;
	// clrldi r11,r22,32
	ctx.r11.u64 = r22.u64 & 0xFFFFFFFF;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x8232b890
	ctx.lr = 0x82326C24;
	sub_8232B890(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82326c44
	if (ctx.cr0.eq) goto loc_82326C44;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82326c44
	if (!ctx.cr0.eq) goto loc_82326C44;
	// lfs f0,84(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
loc_82326C44:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -ctx.f0.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
loc_82326C58:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82326ee4
	if (!ctx.cr6.lt) goto loc_82326EE4;
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82326d64
	if (!ctx.cr6.gt) goto loc_82326D64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82326d64
	if (ctx.cr6.gt) goto loc_82326D64;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82326d84
	if (ctx.cr6.gt) goto loc_82326D84;
	// li r28,1
	r28.s64 = 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// beq cr6,0x82326ce0
	if (ctx.cr6.eq) goto loc_82326CE0;
	// bl 0x826a1b88
	ctx.lr = 0x82326CA4;
	sub_826A1B88(ctx, base);
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// divw r9,r3,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f13,168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// b 0x82326cec
	goto loc_82326CEC;
loc_82326CE0:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
loc_82326CEC:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82326d84
	if (ctx.cr6.gt) goto loc_82326D84;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// beq cr6,0x82326d48
	if (ctx.cr6.eq) goto loc_82326D48;
	// bl 0x826a1b88
	ctx.lr = 0x82326D10;
	sub_826A1B88(ctx, base);
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// std r11,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// b 0x82326d54
	goto loc_82326D54;
loc_82326D48:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
loc_82326D54:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x82326d84
	goto loc_82326D84;
loc_82326D64:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82326d80
	if (!ctx.cr0.eq) goto loc_82326D80;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r28,1
	r28.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82326d84
	goto loc_82326D84;
loc_82326D80:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_82326D84:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326e20
	if (ctx.cr0.eq) goto loc_82326E20;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82326de4
	if (!ctx.cr6.gt) goto loc_82326DE4;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82326dd4
	if (!ctx.cr6.eq) goto loc_82326DD4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82326de4
	if (ctx.cr6.lt) goto loc_82326DE4;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// b 0x82326de4
	goto loc_82326DE4;
loc_82326DD4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82326DE4:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326e20
	if (ctx.cr0.eq) goto loc_82326E20;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
	// b 0x82326e18
	goto loc_82326E18;
loc_82326DF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82326e08
	if (!ctx.cr6.eq) goto loc_82326E08;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_82326E08:
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82326e28
	if (ctx.cr0.eq) goto loc_82326E28;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82326E18:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82326df8
	if (!ctx.cr6.eq) goto loc_82326DF8;
loc_82326E20:
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x82326f74
	goto loc_82326F74;
loc_82326E28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82326e38
	if (!ctx.cr6.eq) goto loc_82326E38;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82326E38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82326e20
	if (ctx.cr6.eq) goto loc_82326E20;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r20,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r20.u8);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r24,1
	r24.s64 = 1;
	// stw r11,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r11.u32);
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x822fe938
	ctx.lr = 0x82326E64;
	sub_822FE938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82326e9c
	if (!ctx.cr0.eq) goto loc_82326E9C;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82326f74
	if (!ctx.cr0.eq) goto loc_82326F74;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// b 0x82326f74
	goto loc_82326F74;
loc_82326E9C:
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x82326ed0
	if (ctx.cr6.eq) goto loc_82326ED0;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// beq cr6,0x82326ed0
	if (ctx.cr6.eq) goto loc_82326ED0;
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stfs f30,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r9,r9,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// b 0x82326f28
	goto loc_82326F28;
loc_82326ED0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stfs f30,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82326f74
	goto loc_82326F74;
loc_82326EE4:
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x823270f4
	goto loc_823270F4;
loc_82326EEC:
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82326f74
	if (!ctx.cr0.eq) goto loc_82326F74;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
	// bl 0x822fe938
	ctx.lr = 0x82326F0C;
	sub_822FE938(ctx, base);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x82326f1c
	if (ctx.cr6.eq) goto loc_82326F1C;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82326f20
	if (!ctx.cr6.eq) goto loc_82326F20;
loc_82326F1C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82326F20:
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// bne cr6,0x82326f58
	if (!ctx.cr6.eq) goto loc_82326F58;
loc_82326F28:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82326f74
	if (ctx.cr0.eq) goto loc_82326F74;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x82326f74
	goto loc_82326F74;
loc_82326F58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
	// b 0x82326f74
	goto loc_82326F74;
loc_82326F64:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f29,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// mr r24,r28
	r24.u64 = r28.u64;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_82326F74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823270f0
	if (ctx.cr6.eq) goto loc_823270F0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823270f0
	if (ctx.cr6.eq) goto loc_823270F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82321c98
	ctx.lr = 0x82326FA0;
	sub_82321C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233eac0
	ctx.lr = 0x82326FB4;
	sub_8233EAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82326fc4
	if (ctx.cr0.eq) goto loc_82326FC4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
loc_82326FC4:
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823270f0
	if (ctx.cr0.eq) goto loc_823270F0;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823270d4
	if (ctx.cr0.eq) goto loc_823270D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311998
	ctx.lr = 0x82326FE4;
	sub_82311998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232703c
	if (ctx.cr0.eq) goto loc_8232703C;
	// ld r30,128(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x8232703c
	if (ctx.cr6.eq) goto loc_8232703C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x82327008;
	sub_823107A0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8233ec00
	ctx.lr = 0x82327028;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// b 0x823270d4
	goto loc_823270D4;
loc_8232703C:
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x822f7a58
	ctx.lr = 0x82327044;
	sub_822F7A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823270d4
	if (ctx.cr0.eq) goto loc_823270D4;
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232fbb0
	ctx.lr = 0x82327060;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f290
	ctx.lr = 0x8232707C;
	sub_8232F290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x823270A8;
	sub_823107A0(ctx, base);
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8233ec00
	ctx.lr = 0x823270CC;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_823270D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233ea78
	ctx.lr = 0x823270E0;
	sub_8233EA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823270f0
	if (ctx.cr0.eq) goto loc_823270F0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
loc_823270F0:
	// li r28,1
	r28.s64 = 1;
loc_823270F4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327164
	if (ctx.cr0.eq) goto loc_82327164;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8232714c
	if (!ctx.cr6.eq) goto loc_8232714C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232714c
	if (ctx.cr6.eq) goto loc_8232714C;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232714c
	if (ctx.cr6.eq) goto loc_8232714C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327134
	if (!ctx.cr6.eq) goto loc_82327134;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82327134:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x8232714C;
	sub_822F7C10(ctx, base);
loc_8232714C:
	// stw r20,140(r31)
	REX_STORE_U32(r31.u32 + 140, r20.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82311720
	ctx.lr = 0x8232715C;
	sub_82311720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_82327164:
	// lwz r25,0(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_82327168:
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(r25.u32, r19.u32, ctx.xer);
	// bne cr6,0x82326940
	if (!ctx.cr6.eq) goto loc_82326940;
	// lwz r26,0(r19)
	r26.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(r26.u32, r19.u32, ctx.xer);
	// beq cr6,0x8232756c
	if (ctx.cr6.eq) goto loc_8232756C;
loc_8232717C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// addi r29,r26,-4
	r29.s64 = r26.s64 + -4;
	// bne cr6,0x8232718c
	if (!ctx.cr6.eq) goto loc_8232718C;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8232718C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r5,r1,90
	ctx.r5.s64 = ctx.r1.s64 + 90;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823271A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232755c
	if (ctx.cr0.eq) goto loc_8232755C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82313170
	ctx.lr = 0x823271C8;
	sub_82313170(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r28,128(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 128);
	// addi r27,r29,128
	r27.s64 = r29.s64 + 128;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// beq cr6,0x8232755c
	if (ctx.cr6.eq) goto loc_8232755C;
	// li r25,1
	r25.s64 = 1;
loc_823271E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
	// bne cr6,0x823271f4
	if (!ctx.cr6.eq) goto loc_823271F4;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_823271F4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327550
	if (ctx.cr0.eq) goto loc_82327550;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232739c
	if (!ctx.cr6.eq) goto loc_8232739C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x822fe938
	ctx.lr = 0x82327224;
	sub_822FE938(ctx, base);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x82327234
	if (ctx.cr6.eq) goto loc_82327234;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82327238
	if (!ctx.cr6.eq) goto loc_82327238;
loc_82327234:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82327238:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82327248
	if (ctx.cr6.eq) goto loc_82327248;
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
loc_82327248:
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232754c
	if (ctx.cr6.eq) goto loc_8232754C;
	// addi r4,r1,89
	ctx.r4.s64 = ctx.r1.s64 + 89;
	// bl 0x8233eac0
	ctx.lr = 0x8232725C;
	sub_8233EAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232726c
	if (ctx.cr0.eq) goto loc_8232726C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
loc_8232726C:
	// lbz r11,89(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8232754c
	if (ctx.cr0.eq) goto loc_8232754C;
	// lbz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 90);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8232737c
	if (ctx.cr0.eq) goto loc_8232737C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311998
	ctx.lr = 0x8232728C;
	sub_82311998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823272e4
	if (ctx.cr0.eq) goto loc_823272E4;
	// ld r31,128(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x823272e4
	if (ctx.cr6.eq) goto loc_823272E4;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x823272B0;
	sub_823107A0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8233ec00
	ctx.lr = 0x823272D0;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
	// b 0x8232737c
	goto loc_8232737C;
loc_823272E4:
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x822f7a58
	ctx.lr = 0x823272EC;
	sub_822F7A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232737c
	if (ctx.cr0.eq) goto loc_8232737C;
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232fbb0
	ctx.lr = 0x82327308;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f290
	ctx.lr = 0x82327324;
	sub_8232F290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// ld r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823107a0
	ctx.lr = 0x82327350;
	sub_823107A0(ctx, base);
	// ld r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8233ec00
	ctx.lr = 0x82327374;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_8232737C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// bl 0x8233ea78
	ctx.lr = 0x82327388;
	sub_8233EA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232754c
	if (ctx.cr0.eq) goto loc_8232754C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
	// b 0x8232754c
	goto loc_8232754C;
loc_8232739C:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82321c98
	ctx.lr = 0x823273B0;
	sub_82321C98(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x823273d4
	if (ctx.cr6.eq) goto loc_823273D4;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x823273d4
	if (ctx.cr6.eq) goto loc_823273D4;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// beq cr6,0x823273d4
	if (ctx.cr6.eq) goto loc_823273D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
	// b 0x823273d8
	goto loc_823273D8;
loc_823273D4:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_823273D8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82327418
	if (!ctx.cr0.eq) goto loc_82327418;
	// addi r4,r1,85
	ctx.r4.s64 = ctx.r1.s64 + 85;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// bl 0x8233f250
	ctx.lr = 0x823273EC;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82327408
	if (ctx.cr6.eq) goto loc_82327408;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82327408
	if (ctx.cr6.eq) goto loc_82327408;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823276c8
	if (!ctx.cr6.eq) goto loc_823276C8;
	// b 0x8232740c
	goto loc_8232740C;
loc_82327408:
	// stb r20,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r20.u8);
loc_8232740C:
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82327418:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823274e4
	if (!ctx.cr0.eq) goto loc_823274E4;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823274e4
	if (ctx.cr6.eq) goto loc_823274E4;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stb r25,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r25.u8);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232745c
	if (ctx.cr6.eq) goto loc_8232745C;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f2,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ff560
	ctx.lr = 0x82327454;
	sub_822FF560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_8232745C:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823274e4
	if (!ctx.cr0.eq) goto loc_823274E4;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233ec48
	ctx.lr = 0x8232747C;
	sub_8233EC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823274e4
	if (!ctx.cr0.eq) goto loc_823274E4;
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232fbb0
	ctx.lr = 0x82327498;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,-10820(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f290
	ctx.lr = 0x823274B4;
	sub_8232F290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x823274e4
	if (!ctx.cr6.gt) goto loc_823274E4;
	// stb r25,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r25.u8);
	// mr r31,r25
	r31.u64 = r25.u64;
loc_823274E4:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327548
	if (ctx.cr0.eq) goto loc_82327548;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82327524
	if (ctx.cr6.eq) goto loc_82327524;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232750c
	if (!ctx.cr6.eq) goto loc_8232750C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8232750C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x82327524;
	sub_822F7C10(ctx, base);
loc_82327524:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// bl 0x82312e10
	ctx.lr = 0x82327538;
	sub_82312E10(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r29)
	REX_STORE_U32(r29.u32 + 88, ctx.r11.u32);
	// b 0x8232754c
	goto loc_8232754C;
loc_82327548:
	// mr r14,r25
	r14.u64 = r25.u64;
loc_8232754C:
	// mr r24,r25
	r24.u64 = r25.u64;
loc_82327550:
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x823271e4
	if (!ctx.cr6.eq) goto loc_823271E4;
loc_8232755C:
	// lwz r26,0(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(r26.u32, r19.u32, ctx.xer);
	// bne cr6,0x8232717c
	if (!ctx.cr6.eq) goto loc_8232717C;
	// li r28,1
	r28.s64 = 1;
loc_8232756C:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82327598
	if (ctx.cr0.eq) goto loc_82327598;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x822f7a58
	ctx.lr = 0x82327580;
	sub_822F7A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327598
	if (ctx.cr0.eq) goto loc_82327598;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8232b6e0
	ctx.lr = 0x82327590;
	sub_8232B6E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823276c8
	if (!ctx.cr0.eq) goto loc_823276C8;
loc_82327598:
	// lbz r29,86(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
loc_8232759C:
	// lwz r17,0(r17)
	r17.u64 = REX_LOAD_U32(r17.u32 + 0);
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(r17.u32, r16.u32, ctx.xer);
	// bne cr6,0x82326820
	if (!ctx.cr6.eq) goto loc_82326820;
loc_823275A8:
	// clrlwi r10,r14,24
	ctx.r10.u64 = r14.u32 & 0xFF;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r9,r8,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// andc r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 & ~r15.u64;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823276dc
	if (ctx.cr0.eq) goto loc_823276DC;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823276dc
	if (!ctx.cr0.eq) goto loc_823276DC;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823276dc
	if (!ctx.cr0.eq) goto loc_823276DC;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823276dc
	if (ctx.cr0.eq) goto loc_823276DC;
	// lwz r31,24(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 24);
	// addi r30,r23,24
	r30.s64 = r23.s64 + 24;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// b 0x8232769c
	goto loc_8232769C;
loc_8232762C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8232763c
	if (!ctx.cr6.eq) goto loc_8232763C;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_8232763C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82327698
	if (ctx.cr0.eq) goto loc_82327698;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82327698
	if (!ctx.cr6.gt) goto loc_82327698;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_82327664:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82327684
	if (ctx.cr6.gt) goto loc_82327684;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82327664
	if (ctx.cr6.lt) goto loc_82327664;
	// b 0x82327698
	goto loc_82327698;
loc_82327684:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
loc_82327698:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8232769C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8232762c
	if (!ctx.cr6.eq) goto loc_8232762C;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823276c4
	if (ctx.cr0.eq) goto loc_823276C4;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823276C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823276C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823276C8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_823276DC:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82327730
	if (ctx.cr0.eq) goto loc_82327730;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82327730
	if (!ctx.cr0.eq) goto loc_82327730;
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82327730
	if (!ctx.cr0.eq) goto loc_82327730;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82327730
	if (!ctx.cr0.eq) goto loc_82327730;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232771C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x823276c4
	goto loc_823276C4;
loc_82327730:
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823276c4
	if (ctx.cr0.eq) goto loc_823276C4;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x823276c8
	goto loc_823276C8;
}

DEFINE_REX_FUNC(sub_823BC4E0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x823BC4E8;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// sth r10,590(r1)
	REX_STORE_U16(ctx.r1.u32 + 590, ctx.r10.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r4.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f29,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f29.f64 = double(temp.f32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// stw r5,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r5.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r7,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r7.u32);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r14,16
	r14.s64 = 16;
	// li r28,32
	r28.s64 = 32;
	// li r29,48
	r29.s64 = 48;
	// li r26,64
	r26.s64 = 64;
	// li r27,80
	r27.s64 = 80;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// fdivs f31,f29,f12
	f31.f64 = double(float(f29.f64 / ctx.f12.f64));
	// bne cr6,0x823bc5f4
	if (!ctx.cr6.eq) goto loc_823BC5F4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r10,32480
	ctx.r7.s64 = ctx.r10.s64 + 32480;
	// addi r8,r11,32464
	ctx.r8.s64 = ctx.r11.s64 + 32464;
	// addi r6,r9,32448
	ctx.r6.s64 = ctx.r9.s64 + 32448;
	// rlwinm r10,r15,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x3FFFFFFF;
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x823bc73c
	if (ctx.cr6.eq) goto loc_823BC73C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,-32
	ctx.r10.s64 = -32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
loc_823BC5A0:
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v58,v60,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v56,v59,v62
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v55,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v54,v57,v61
	simde_mm_store_ps(ctx.v54.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v53,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v52,v55,v63
	simde_mm_store_ps(ctx.v52.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v51,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v50,v53,v62
	simde_mm_store_ps(ctx.v50.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v49,v51,v61
	simde_mm_store_ps(ctx.v49.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v58,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bdnz 0x823bc5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC5A0;
	// b 0x823bc73c
	goto loc_823BC73C;
loc_823BC5F4:
	// cmpwi cr6,r23,8
	ctx.cr6.compare<int32_t>(r23.s32, 8, ctx.xer);
	// bne cr6,0x823bc6a4
	if (!ctx.cr6.eq) goto loc_823BC6A4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r10,32448
	ctx.r8.s64 = ctx.r10.s64 + 32448;
	// addi r9,r11,32464
	ctx.r9.s64 = ctx.r11.s64 + 32464;
	// rlwinm r10,r15,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x823bc73c
	if (ctx.cr6.eq) goto loc_823BC73C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,-32
	ctx.r10.s64 = -32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
loc_823BC638:
	// lvx128 v48,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v46,v48,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v45,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v44,v47,v63
	simde_mm_store_ps(ctx.v44.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v43,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v42,v45,v62
	simde_mm_store_ps(ctx.v42.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v41,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v40,v43,v62
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v39,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v38,v41,v63
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v37,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v36,v39,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v35,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v34,v37,v62
	simde_mm_store_ps(ctx.v34.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v33,v35,v62
	simde_mm_store_ps(ctx.v33.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v46,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v44,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v38,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x823bc638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC638;
	// b 0x823bc73c
	goto loc_823BC73C;
loc_823BC6A4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823bc73c
	if (!ctx.cr6.gt) goto loc_823BC73C;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lfs f0,32432(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32432);
	ctx.f0.f64 = double(temp.f32);
loc_823BC6C4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823bc6f8
	if (ctx.cr6.eq) goto loc_823BC6F8;
	// addi r11,r15,-1
	ctx.r11.s64 = r15.s64 + -1;
	// rlwinm r9,r23,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BC6E4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x823bc6e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC6E4;
loc_823BC6F8:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// ble cr6,0x823bc72c
	if (!ctx.cr6.gt) goto loc_823BC72C;
	// addi r11,r15,-2
	ctx.r11.s64 = r15.s64 + -2;
	// rlwinm r9,r23,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BC718:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x823bc718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC718;
loc_823BC72C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x823bc6c4
	if (!ctx.cr0.eq) goto loc_823BC6C4;
loc_823BC73C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bb078
	ctx.lr = 0x823BC750;
	sub_823BB078(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r16,r31,1200
	r16.s64 = r31.s64 + 1200;
	// addi r11,r31,1128
	ctx.r11.s64 = r31.s64 + 1128;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// li r18,0
	r18.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r19,1
	r19.s64 = 1;
loc_823BC76C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,1220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1220);
	// lwz r7,1216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r4,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// bne cr6,0x823bc79c
	if (!ctx.cr6.eq) goto loc_823BC79C;
	// stb r18,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r18.u8);
	// b 0x823bc7c4
	goto loc_823BC7C4;
loc_823BC79C:
	// stb r19,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r19.u8);
	// lwz r7,1216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1220);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// stw r4,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
loc_823BC7C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x823bc76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC76C;
	// li r17,8
	r17.s64 = 8;
	// addi r8,r31,916
	ctx.r8.s64 = r31.s64 + 916;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// addi r11,r31,788
	ctx.r11.s64 = r31.s64 + 788;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
loc_823BC7E4:
	// lwz r9,168(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r7,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r7.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// stw r6,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r6.u32);
	// bne cr6,0x823bc828
	if (!ctx.cr6.eq) goto loc_823BC828;
	// stb r18,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r18.u8);
	// b 0x823bc850
	goto loc_823BC850;
loc_823BC828:
	// stb r19,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r19.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,168(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,136(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r4,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r4.u32);
loc_823BC850:
	// lfs f0,-280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -216);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-248(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -248, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823bc89c
	if (ctx.cr6.eq) goto loc_823BC89C;
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823bc890
	if (!ctx.cr6.eq) goto loc_823BC890;
	// stb r19,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r19.u8);
	// lwz r9,168(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,136(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r5.u32);
loc_823BC890:
	// lfs f0,-216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-216(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -216, temp.u32);
loc_823BC89C:
	// stfs f0,-184(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -184, temp.u32);
	// lfs f0,-712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -712);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f0
	ctx.f12.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,-672(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -672, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f12,-640(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -640, temp.u32);
	// bne cr6,0x823bc8c4
	if (!ctx.cr6.eq) goto loc_823BC8C4;
	// stb r18,-808(r8)
	REX_STORE_U8(ctx.r8.u32 + -808, r18.u8);
	// b 0x823bc8d8
	goto loc_823BC8D8;
loc_823BC8C4:
	// stb r19,-808(r8)
	REX_STORE_U8(ctx.r8.u32 + -808, r19.u8);
	// lfs f0,-576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-672(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -672);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-608(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -608, temp.u32);
	// stfs f13,-576(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -576, temp.u32);
loc_823BC8D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x823bc7e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC7E4;
	// lfs f0,660(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,676(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 676);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 668, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bc900
	if (!ctx.cr6.eq) goto loc_823BC900;
	// stb r18,664(r31)
	REX_STORE_U8(r31.u32 + 664, r18.u8);
	// b 0x823bc90c
	goto loc_823BC90C;
loc_823BC900:
	// stfs f13,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 672, temp.u32);
	// stb r19,664(r31)
	REX_STORE_U8(r31.u32 + 664, r19.u8);
	// stfs f0,676(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 676, temp.u32);
loc_823BC90C:
	// lfs f0,656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 656);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,692(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bc928
	if (!ctx.cr6.eq) goto loc_823BC928;
	// stb r18,680(r31)
	REX_STORE_U8(r31.u32 + 680, r18.u8);
	// b 0x823bc934
	goto loc_823BC934;
loc_823BC928:
	// stfs f13,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// stb r19,680(r31)
	REX_STORE_U8(r31.u32 + 680, r19.u8);
	// stfs f0,692(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 692, temp.u32);
loc_823BC934:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bc950
	if (!ctx.cr6.eq) goto loc_823BC950;
	// stb r18,20(r31)
	REX_STORE_U8(r31.u32 + 20, r18.u8);
	// b 0x823bc95c
	goto loc_823BC95C;
loc_823BC950:
	// stfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stb r19,20(r31)
	REX_STORE_U8(r31.u32 + 20, r19.u8);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
loc_823BC95C:
	// lfs f0,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,652(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 652);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 644, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bc978
	if (!ctx.cr6.eq) goto loc_823BC978;
	// stb r18,640(r31)
	REX_STORE_U8(r31.u32 + 640, r18.u8);
	// b 0x823bc984
	goto loc_823BC984;
loc_823BC978:
	// stfs f13,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 648, temp.u32);
	// stb r19,640(r31)
	REX_STORE_U8(r31.u32 + 640, r19.u8);
	// stfs f0,652(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 652, temp.u32);
loc_823BC984:
	// lfs f0,696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,712(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 712);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,704(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 704, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bc9a0
	if (!ctx.cr6.eq) goto loc_823BC9A0;
	// stb r18,700(r31)
	REX_STORE_U8(r31.u32 + 700, r18.u8);
	// b 0x823bc9ac
	goto loc_823BC9AC;
loc_823BC9A0:
	// stfs f13,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 708, temp.u32);
	// stb r19,700(r31)
	REX_STORE_U8(r31.u32 + 700, r19.u8);
	// stfs f0,712(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 712, temp.u32);
loc_823BC9AC:
	// mr r24,r18
	r24.u64 = r18.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823bd384
	if (ctx.cr6.eq) goto loc_823BD384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r6,r23,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r31,108
	r20.s64 = r31.s64 + 108;
	// mr r21,r18
	r21.u64 = r18.u64;
	// lfs f8,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f8.f64 = double(temp.f32);
	// b 0x823bc9e0
	goto loc_823BC9E0;
loc_823BC9D0:
	// li r28,32
	r28.s64 = 32;
	// li r29,48
	r29.s64 = 48;
	// li r26,64
	r26.s64 = 64;
	// li r27,80
	r27.s64 = 80;
loc_823BC9E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// subf r5,r24,r15
	ctx.r5.u64 = r15.u64 - r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f13,r11,r21
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823bca34
	if (ctx.cr6.eq) goto loc_823BCA34;
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,280(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f3,f12,f7,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmuls f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 * f31.f64));
loc_823BCA34:
	// lbz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 640);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bca80
	if (ctx.cr6.eq) goto loc_823BCA80;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lfs f12,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f11,648(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
	ctx.f11.f64 = double(temp.f32);
	// std r10,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r10.u64);
	// std r11,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f10,256(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfd f7,272(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmadds f2,f11,f4,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmuls f11,f2,f31
	ctx.f11.f64 = double(float(ctx.f2.f64 * f31.f64));
	// b 0x823bca84
	goto loc_823BCA84;
loc_823BCA80:
	// lfs f11,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 644);
	ctx.f11.f64 = double(temp.f32);
loc_823BCA84:
	// lbz r11,700(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 700);
	// lfs f12,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bcacc
	if (ctx.cr6.eq) goto loc_823BCACC;
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f10,708(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 708);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// std r10,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r10.u64);
	// lfd f9,288(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f6,304(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f1,f10,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_823BCACC:
	// fsubs f10,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f29.f64 - ctx.f0.f64));
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f6,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f8
	ctx.cr6.compare(ctx.f5.f64, ctx.f8.f64);
	// fmadds f4,f9,f10,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f0,f6,f10,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f3.f64)));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// beq cr6,0x823bcb3c
	if (ctx.cr6.eq) goto loc_823BCB3C;
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f6,f13,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f0,f2,f13,f4
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// b 0x823bcb40
	goto loc_823BCB40;
loc_823BCB3C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_823BCB40:
	// lwz r11,1220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1220);
	// lwz r10,1216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,1084(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1084);
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,1220(r31)
	REX_STORE_U32(r31.u32 + 1220, ctx.r7.u32);
	// stfsx f13,r4,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,1216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// lbz r3,680(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 680);
	// lwz r11,1224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1224);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,1224(r31)
	REX_STORE_U32(r31.u32 + 1224, ctx.r10.u32);
	// beq cr6,0x823bcbc0
	if (ctx.cr6.eq) goto loc_823BCBC0;
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f0,684(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lfs f13,688(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// std r11,320(r1)
	REX_STORE_U64(ctx.r1.u32 + 320, ctx.r11.u64);
	// std r8,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r8.u64);
	// lfd f10,320(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfd f7,264(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f2,f13,f4,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * f31.f64));
	// b 0x823bcbc4
	goto loc_823BCBC4;
loc_823BCBC0:
	// lfs f13,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
loc_823BCBC4:
	// lwz r11,1084(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1084);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,0(r16)
	ctx.r8.u64 = REX_LOAD_U8(r16.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// beq cr6,0x823bcc30
	if (ctx.cr6.eq) goto loc_823BCC30;
	// clrldi r7,r24,32
	ctx.r7.u64 = r24.u64 & 0xFFFFFFFF;
	// lwz r10,1260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r7,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// std r8,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// lfd f7,296(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lfd f10,216(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stw r3,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r3.u32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// lfsx f2,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f0,f1,f4,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
loc_823BCC30:
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// lwz r10,1428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,1444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1444);
	// lwz r8,1396(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1396);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r4,1436(r31)
	REX_STORE_U32(r31.u32 + 1436, ctx.r4.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,1444(r31)
	REX_STORE_U32(r31.u32 + 1444, ctx.r3.u32);
	// lfs f13,716(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 716);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f13,f0,f10
	ctx.f9.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fmadds f7,f13,f9,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfsx f7,r11,r8
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,1432(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1432);
	// lwz r10,1440(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1440);
	// lwz r8,1400(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1400);
	// lwz r11,1448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1448);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,1448(r31)
	REX_STORE_U32(r31.u32 + 1448, ctx.r4.u32);
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r10,1440(r31)
	REX_STORE_U32(r31.u32 + 1440, ctx.r10.u32);
	// lfs f6,716(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 716);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f4,f6,f9,f5
	ctx.f4.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmadds f3,f6,f4,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, ctx.f9.f64)));
	// stfsx f3,r9,r8
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,1360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r7,1296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lwz r11,1364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1364);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r3.u32);
	// stfsx f4,r11,r7
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,1372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// stw r11,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,1360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r8,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r8.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1296(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lwz r9,1376(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// lwz r8,1380(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1380);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lfsx f2,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r10.u32);
	// lwz r3,1360(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,1384(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// and r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
	// stw r10,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r10.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1296(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lfsx f1,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,1376(r31)
	REX_STORE_U32(r31.u32 + 1376, ctx.r9.u32);
	// lwz r3,1360(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// and r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stw r10,1376(r31)
	REX_STORE_U32(r31.u32 + 1376, ctx.r10.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,1296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lfsx f0,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, ctx.r11.u32);
	// lwz r4,1360(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// stw r3,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, ctx.r3.u32);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1296(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// lwz r10,1388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1388);
	// lwz r9,1392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1392);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfsx f13,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r11.u32);
	// lwz r3,1360(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// stw r11,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r11.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r7,1296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lfsx f10,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,1388(r31)
	REX_STORE_U32(r31.u32 + 1388, ctx.r10.u32);
	// lwz r4,1360(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r3,1388(r31)
	REX_STORE_U32(r31.u32 + 1388, ctx.r3.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lfsx f9,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r9.u32);
	// lwz r8,1360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r7,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r7.u32);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfsx f7,r4,r3
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ble cr6,0x823bd044
	if (!ctx.cr6.gt) goto loc_823BD044;
	// subfic r3,r31,-1264
	ctx.xer.ca = r31.u32 <= 4294966032;
	ctx.r3.u64 = static_cast<uint64_t>(-1264) - r31.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r4,r16,1
	ctx.r4.s64 = r16.s64 + 1;
	// addi r11,r31,1264
	ctx.r11.s64 = r31.s64 + 1264;
	// subfic r30,r31,-108
	ctx.xer.ca = r31.u32 <= 4294967188;
	r30.u64 = static_cast<uint64_t>(-108) - r31.u64;
loc_823BCE14:
	// lwz r10,-36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-36(r11)
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r10.u32);
	// lwz r9,1216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r8,-36(r11)
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r8.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,1084(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1084);
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823bce9c
	if (ctx.cr6.eq) goto loc_823BCE9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r24,32
	ctx.r8.u64 = r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// std r8,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// std r9,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfd f13,232(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f9,192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// lwz r9,1216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1084(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1084);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfsx f3,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f5,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f4.f64)));
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * f31.f64));
loc_823BCE9C:
	// lbz r10,664(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 664);
	// lfs f13,668(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 668);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bcee4
	if (ctx.cr6.eq) goto loc_823BCEE4;
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lfs f10,672(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 672);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r10,r24,32
	ctx.r10.u64 = r24.u64 & 0xFFFFFFFF;
	// std r9,312(r1)
	REX_STORE_U64(ctx.r1.u32 + 312, ctx.r9.u64);
	// std r10,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lfd f9,248(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f6,312(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmadds f1,f10,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_823BCEE4:
	// lwz r10,-276(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -276);
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r9,-340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -340);
	// lfs f13,-724(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -724);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r10,-276(r11)
	REX_STORE_U32(ctx.r11.u32 + -276, ctx.r10.u32);
	// lbz r8,808(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 808);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823bcf7c
	if (ctx.cr6.eq) goto loc_823BCF7C;
	// clrldi r27,r24,32
	r27.u64 = r24.u64 & 0xFFFFFFFF;
	// lwz r8,-244(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -244);
	// clrldi r26,r5,32
	r26.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r25,-540(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -540);
	// std r27,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, r27.u64);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// std r26,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, r26.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lfs f10,-660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -660);
	ctx.f10.f64 = double(temp.f32);
	// li r26,64
	r26.s64 = 64;
	// stw r9,-244(r11)
	REX_STORE_U32(ctx.r11.u32 + -244, ctx.r9.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,80
	r27.s64 = 80;
	// lfsx f9,r10,r25
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfd f6,200(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfd f4,208(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfsx f2,r8,r25
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f7,f1,f10,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f0,f7,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f0.f64)));
	// b 0x823bcf8c
	goto loc_823BCF8C;
loc_823BCF7C:
	// lwz r9,-540(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -540);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
loc_823BCF8C:
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lfs f13,-1148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bcff8
	if (ctx.cr6.eq) goto loc_823BCFF8;
	// clrldi r10,r24,32
	ctx.r10.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f10,-1084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1084);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r10,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// std r9,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lwz r10,500(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 500);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f9,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfd f7,224(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f5,240(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmadds f13,f10,f2,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f1.f64)));
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fsubs f7,f29,f10
	ctx.f7.f64 = double(float(f29.f64 - ctx.f10.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f5,f7,f9,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfsx f5,r10,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x823bd014
	goto loc_823BD014;
loc_823BCFF8:
	// lwz r10,500(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 500);
	// fmuls f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,-1116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1116);
	ctx.f9.f64 = double(temp.f32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f7,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f7,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsx f6,r10,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_823BD014:
	// lwz r10,-308(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -308);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,-340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -340);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 + r30.u64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r9,-308(r11)
	REX_STORE_U32(ctx.r11.u32 + -308, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 720);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823bce14
	if (ctx.cr6.lt) goto loc_823BCE14;
loc_823BD044:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f11,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,500(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 500);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v13,v0,78
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xB1));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v13,v0,177
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x4E));
	// lvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v11,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r9,r14
	ea = (ctx.r9.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v10,v13,78
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xB1));
	// stvx128 v0,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v12,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v12,v13,177
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x4E));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v9,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v8,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r18
	r29.u64 = r18.u64;
	// stvx128 v0,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,956(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 956);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,504(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 724);
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r5,504(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 728);
	// lwz r8,960(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 960);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,72(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r7,r4
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lwz r10,732(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 732);
	// lwz r3,504(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r11,964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 964);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r10
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r8,504(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r7,736(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 736);
	// lfs f10,80(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,968(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 968);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r4,r7
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lwz r3,504(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// lwz r10,972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 972);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r9,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,504(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r8,976(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 976);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,744(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 744);
	// lfs f7,88(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stfsx f7,r4,r5
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r3,980(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 980);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r10,748(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 748);
	// lfs f6,92(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f6,r9,r10
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r4,504(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 504);
	// lwz r7,984(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 984);
	// lfs f5,64(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,752(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 752);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f5,r5,r8
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// ble cr6,0x823bd370
	if (!ctx.cr6.gt) goto loc_823BD370;
	// lwz r10,548(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// lwz r9,540(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lhz r25,590(r1)
	r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 590);
	// addi r3,r31,1052
	ctx.r3.s64 = r31.s64 + 1052;
	// subf r26,r10,r9
	r26.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_823BD1E4:
	// slw r11,r19,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823bd200
	if (!ctx.cr6.eq) goto loc_823BD200;
	// lfsx f0,r27,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// b 0x823bd358
	goto loc_823BD358;
loc_823BD200:
	// divw r4,r17,r23
	ctx.r4.u64 = uint32_t((r23.s32 && !(r17.s32 == INT32_MIN && r23.s32 == -1)) ? r17.s32 / r23.s32 : 0);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// mr r30,r18
	r30.u64 = r18.u64;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// blt cr6,0x823bd2d8
	if (ctx.cr6.lt) goto loc_823BD2D8;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r3,-328
	ctx.r8.s64 = ctx.r3.s64 + -328;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r3,-128
	ctx.r9.s64 = ctx.r3.s64 + -128;
	// rlwinm r30,r7,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823BD254:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsux f6,r10,r6
	ea = ctx.r10.u32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + r23.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + r23.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r15,0(r9)
	r15.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 & r15.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rlwinm r15,r7,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,0(r8)
	r14.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwzux r7,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lfsx f5,r15,r14
	temp.u32 = REX_LOAD_U32(r15.u32 + r14.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzux r15,r9,r6
	ea = ctx.r9.u32 + ctx.r6.u32;
	r15.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// and r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 & r15.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rlwinm r15,r7,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzux r7,r8,r6
	ea = ctx.r8.u32 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfsx f4,r15,r7
	temp.u32 = REX_LOAD_U32(r15.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// bdnz 0x823bd254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BD254;
	// lwz r15,564(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// li r14,16
	r14.s64 = 16;
loc_823BD2D8:
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x823bd324
	if (!ctx.cr6.lt) goto loc_823BD324;
	// addi r11,r5,263
	ctx.r11.s64 = ctx.r5.s64 + 263;
	// addi r10,r5,231
	ctx.r10.s64 = ctx.r5.s64 + 231;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r5,181
	ctx.r8.s64 = ctx.r5.s64 + 181;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lwzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lfsx f10,r7,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
loc_823BD324:
	// fadds f13,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fcmpu cr6,f30,f8
	ctx.cr6.compare(f30.f64, ctx.f8.f64);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bne cr6,0x823bd348
	if (!ctx.cr6.eq) goto loc_823BD348;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// b 0x823bd358
	goto loc_823BD358;
loc_823BD348:
	// lfsx f12,r27,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f30,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f0.f64)));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_823BD358:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(r29.s32, r23.s32, ctx.xer);
	// blt cr6,0x823bd1e4
	if (ctx.cr6.lt) goto loc_823BD1E4;
loc_823BD370:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// add r22,r22,r6
	r22.u64 = r22.u64 + ctx.r6.u64;
	// cmplw cr6,r24,r15
	ctx.cr6.compare<uint32_t>(r24.u32, r15.u32, ctx.xer);
	// blt cr6,0x823bc9d0
	if (ctx.cr6.lt) goto loc_823BC9D0;
loc_823BD384:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8243AE40) {
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
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x8243ae70
	goto loc_8243AE70;
loc_8243AE64:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243ae94
	if (ctx.cr6.eq) goto loc_8243AE94;
loc_8243AE70:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438da8
	ctx.lr = 0x8243AE88;
	sub_82438DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243ae64
	if (!ctx.cr0.lt) goto loc_8243AE64;
	// b 0x8243ae98
	goto loc_8243AE98;
loc_8243AE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243AE98:
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

DEFINE_REX_FUNC(sub_8243E1C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8243E1D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r29,r5,r6
	r29.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// blt cr6,0x8243e3a8
	if (ctx.cr6.lt) goto loc_8243E3A8;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,74
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 74, ctx.xer);
	// bne cr6,0x8243e3a8
	if (!ctx.cr6.eq) goto loc_8243E3A8;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x8243e3a8
	if (!ctx.cr6.eq) goto loc_8243E3A8;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x8243e3a8
	if (!ctx.cr6.eq) goto loc_8243E3A8;
	// lbz r11,3(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x8243e3a8
	if (!ctx.cr6.eq) goto loc_8243E3A8;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243e3a8
	if (!ctx.cr6.eq) goto loc_8243E3A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stb r10,288(r3)
	REX_STORE_U8(ctx.r3.u32 + 288, ctx.r10.u8);
	// lbz r9,6(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// stb r9,289(r3)
	REX_STORE_U8(ctx.r3.u32 + 289, ctx.r9.u8);
	// lbz r8,7(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// stb r8,290(r3)
	REX_STORE_U8(ctx.r3.u32 + 290, ctx.r8.u8);
	// lbz r11,9(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,288(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 288);
	// sth r6,292(r3)
	REX_STORE_U16(ctx.r3.u32 + 292, ctx.r6.u16);
	// lbz r10,11(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,10(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// rotlwi r11,r3,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// sth r11,294(r31)
	REX_STORE_U16(r31.u32 + 294, ctx.r11.u16);
	// beq cr6,0x8243e2b4
	if (ctx.cr6.eq) goto loc_8243E2B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,119
	ctx.r10.s64 = 119;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 288);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r6,289(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 289);
	// stw r6,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E2B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,87
	ctx.r10.s64 = 87;
	// lbz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 288);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lbz r8,289(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 289);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lhz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 292);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lhz r6,294(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 294);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lbz r5,290(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 290);
	// stw r5,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8243E304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,13(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 13);
	// lbz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 12);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8243e354
	if (ctx.cr6.eq) goto loc_8243E354;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,90
	ctx.r10.s64 = 90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 12);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r6,13(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 13);
	// stw r6,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243E354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E354:
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 12);
	// addi r10,r29,-14
	ctx.r10.s64 = r29.s64 + -14;
	// lbz r11,13(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 13);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8243e4d0
	if (ctx.cr6.eq) goto loc_8243E4D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,88
	ctx.r9.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243E3A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8243E3A8:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x8243e4a4
	if (ctx.cr6.lt) goto loc_8243E4A4;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,74
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 74, ctx.xer);
	// bne cr6,0x8243e4a4
	if (!ctx.cr6.eq) goto loc_8243E4A4;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x8243e4a4
	if (!ctx.cr6.eq) goto loc_8243E4A4;
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x8243e4a4
	if (!ctx.cr6.eq) goto loc_8243E4A4;
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x8243e4a4
	if (!ctx.cr6.eq) goto loc_8243E4A4;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243e4a4
	if (!ctx.cr6.eq) goto loc_8243E4A4;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8243e49c
	if (ctx.cr6.eq) goto loc_8243E49C;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8243e470
	if (ctx.cr6.eq) goto loc_8243E470;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x8243e448
	if (ctx.cr6.eq) goto loc_8243E448;
	// li r10,89
	ctx.r10.s64 = 89;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r8,5(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 5);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8243E440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8243E448:
	// li r10,110
	ctx.r10.s64 = 110;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8243E468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8243E470:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,109
	ctx.r10.s64 = 109;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8243E494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8243E49C:
	// li r10,108
	ctx.r10.s64 = 108;
	// b 0x8243e4a8
	goto loc_8243E4A8;
loc_8243E4A4:
	// li r10,77
	ctx.r10.s64 = 77;
loc_8243E4A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r29.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8243E4D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243E4D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8244AA60) {
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
	ctx.lr = 0x8244AA68;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r5,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r26,132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// oris r29,r10,8
	r29.u64 = ctx.r10.u64 | 524288;
	// rlwimi r26,r8,30,1,1
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x40000000) | (r26.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// beq cr6,0x8244acbc
	if (ctx.cr6.eq) goto loc_8244ACBC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
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
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r9,2408
	ctx.r9.s64 = ctx.r9.s64 + 2408;
	// li r24,1
	r24.s64 = 1;
	// addi r19,r7,2384
	r19.s64 = ctx.r7.s64 + 2384;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r25,r6,2332
	r25.s64 = ctx.r6.s64 + 2332;
	// addi r18,r5,2296
	r18.s64 = ctx.r5.s64 + 2296;
	// addi r21,r4,2260
	r21.s64 = ctx.r4.s64 + 2260;
	// addi r17,r3,2220
	r17.s64 = ctx.r3.s64 + 2220;
	// addi r16,r31,2184
	r16.s64 = r31.s64 + 2184;
	// addi r15,r30,2128
	r15.s64 = r30.s64 + 2128;
	// addi r14,r29,2068
	r14.s64 = r29.s64 + 2068;
	// addi r23,r8,-27848
	r23.s64 = ctx.r8.s64 + -27848;
	// addi r22,r10,2036
	r22.s64 = ctx.r10.s64 + 2036;
	// addi r20,r11,1968
	r20.s64 = ctx.r11.s64 + 1968;
loc_8244AB58:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8244ab84
	if (ctx.cr6.eq) goto loc_8244AB84;
loc_8244AB78:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stb r24,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r24.u8);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AB84:
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,24(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8244ac18
	if (!ctx.cr6.eq) goto loc_8244AC18;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8244ac18
	if (!ctx.cr6.eq) goto loc_8244AC18;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8244ac18
	if (!ctx.cr0.eq) goto loc_8244AC18;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244abcc
	if (ctx.cr6.eq) goto loc_8244ABCC;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8244ABC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244abf8
	goto loc_8244ABF8;
loc_8244ABCC:
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x82449b70
	ctx.lr = 0x8244ABDC;
	sub_82449B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8244ac00
	if (!ctx.cr0.eq) goto loc_8244AC00;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8244ABF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8244ABF8:
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AC00:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AC18:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244ac28
	if (!ctx.cr6.eq) goto loc_8244AC28;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8244ac88
	goto loc_8244AC88;
loc_8244AC28:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8244ab78
	if (!ctx.cr6.eq) goto loc_8244AB78;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8244AC40:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8244AC48:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// beq 0x8244ac6c
	if (ctx.cr0.eq) goto loc_8244AC6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8244ac48
	if (ctx.cr6.eq) goto loc_8244AC48;
loc_8244AC6C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8244acf8
	if (ctx.cr0.eq) goto loc_8244ACF8;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r7,216
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 216, ctx.xer);
	// blt cr6,0x8244ac40
	if (ctx.cr6.lt) goto loc_8244AC40;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_8244AC88:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8244AC98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8244AC98:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244ab58
	if (!ctx.cr6.eq) goto loc_8244AB58;
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r25,340(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r31,332(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r29,128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8244ACBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244af14
	if (ctx.cr6.eq) goto loc_8244AF14;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8244af14
	if (!ctx.cr0.eq) goto loc_8244AF14;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-27316
	ctx.r10.s64 = ctx.r10.s64 + -27316;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r9,1912
	ctx.r4.s64 = ctx.r9.s64 + 1912;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x8244ACF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244af38
	goto loc_8244AF38;
loc_8244ACF8:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8244ad14
	if (!ctx.cr6.eq) goto loc_8244AD14;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8244ad30
	if (!ctx.cr6.eq) goto loc_8244AD30;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// b 0x8244ac88
	goto loc_8244AC88;
loc_8244AD14:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8244ad30
	if (!ctx.cr6.eq) goto loc_8244AD30;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8244ad30
	if (!ctx.cr6.eq) goto loc_8244AD30;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// b 0x8244ac88
	goto loc_8244AC88;
loc_8244AD30:
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// slw r9,r24,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r24.u32 << (r29.u8 & 0x3F));
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8244ad4c
	if (ctx.cr0.eq) goto loc_8244AD4C;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// b 0x8244ac88
	goto loc_8244AC88;
loc_8244AD4C:
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// li r30,0
	r30.s64 = 0;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// blt cr6,0x8244ae24
	if (ctx.cr6.lt) goto loc_8244AE24;
	// beq cr6,0x8244ae0c
	if (ctx.cr6.eq) goto loc_8244AE0C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8244adc0
	if (ctx.cr6.lt) goto loc_8244ADC0;
	// bne cr6,0x8244addc
	if (!ctx.cr6.eq) goto loc_8244ADDC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r5.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// bl 0x8244a898
	ctx.lr = 0x8244ADA0;
	sub_8244A898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244aea4
	if (!ctx.cr0.lt) goto loc_8244AEA4;
loc_8244ADA8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8244ADBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244ADC0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8244a898
	ctx.lr = 0x8244ADD0;
	sub_8244A898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244ada8
	if (ctx.cr0.lt) goto loc_8244ADA8;
loc_8244ADD8:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8244ADDC:
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(r29.u32, 10, ctx.xer);
	// bgt cr6,0x8244ac98
	if (ctx.cr6.gt) goto loc_8244AC98;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,1280
	ctx.r12.s64 = ctx.r12.s64 + 1280;
	// lbzx r0,r12,r29
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + r29.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// nop 
	// addi r12,r12,-21352
	ctx.r12.s64 = ctx.r12.s64 + -21352;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r29.u32) {
	case 0:
		goto loc_8244AEAC;
	case 1:
		goto loc_8244AEC0;
	case 2:
		goto loc_8244AEC8;
	case 3:
		goto loc_8244AED0;
	case 4:
		goto loc_8244AED8;
	case 5:
		goto loc_8244AEE0;
	case 6:
		goto loc_8244AEE8;
	case 7:
		goto loc_8244AEF0;
	case 8:
		goto loc_8244AF00;
	case 9:
		goto loc_8244AC98;
	case 10:
		goto loc_8244AF0C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8244AE0C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8244a980
	ctx.lr = 0x8244AE14;
	sub_8244A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244add8
	if (!ctx.cr0.lt) goto loc_8244ADD8;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// b 0x8244ac88
	goto loc_8244AC88;
loc_8244AE24:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x8244ae38
	if (ctx.cr6.eq) goto loc_8244AE38;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// b 0x8244ac88
	goto loc_8244AC88;
loc_8244AE38:
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8244ae7c
	goto loc_8244AE7C;
loc_8244AE48:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8244AE4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8244ae70
	if (ctx.cr0.eq) goto loc_8244AE70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244ae4c
	if (ctx.cr6.eq) goto loc_8244AE4C;
loc_8244AE70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8244ae9c
	if (ctx.cr0.eq) goto loc_8244AE9C;
	// lwzu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
loc_8244AE7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244ae48
	if (!ctx.cr6.eq) goto loc_8244AE48;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x8244AE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AE9C:
	// lbz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// b 0x8244addc
	goto loc_8244ADDC;
loc_8244AEA4:
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8244addc
	goto loc_8244ADDC;
loc_8244AEAC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// rlwimi r11,r10,27,2,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x38000000) | (ctx.r11.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AEC0:
	// rlwimi r26,r8,12,19,19
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x1000) | (r26.u64 & 0xFFFFFFFFFFFFEFFF);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AEC8:
	// rlwimi r26,r8,13,18,18
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x2000) | (r26.u64 & 0xFFFFFFFFFFFFDFFF);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AED0:
	// rlwimi r26,r8,15,16,16
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x8000) | (r26.u64 & 0xFFFFFFFFFFFF7FFF);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AED8:
	// rlwimi r26,r8,16,10,15
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3F0000) | (r26.u64 & 0xFFFFFFFFFFC0FFFF);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AEE0:
	// rlwimi r26,r30,24,2,7
	r26.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0x3F000000) | (r26.u64 & 0xFFFFFFFFC0FFFFFF);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AEE8:
	// rlwimi r26,r8,30,1,1
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x40000000) | (r26.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AEF0:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r8,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
loc_8244AEF8:
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AF00:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r30,8,1,23
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0x7FFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF800000FF);
	// b 0x8244aef8
	goto loc_8244AEF8;
loc_8244AF0C:
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// b 0x8244ac98
	goto loc_8244AC98;
loc_8244AF14:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8244af38
	if (ctx.cr6.eq) goto loc_8244AF38;
	// rlwinm. r11,r29,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244af38
	if (ctx.cr0.eq) goto loc_8244AF38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,1832
	ctx.r4.s64 = ctx.r11.s64 + 1832;
	// bctrl 
	ctx.lr = 0x8244AF38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8244AF38:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82473498) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824715b8
	ctx.lr = 0x824734B4;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x824734F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247354C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82473588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824735B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r4,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x824735fc
	if (!ctx.cr6.eq) goto loc_824735FC;
	// rlwinm r4,r4,0,8,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFCFFFFFF;
	// oris r5,r10,3072
	ctx.r5.u64 = ctx.r10.u64 | 201326592;
	// rlwinm r4,r4,0,5,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// b 0x82473600
	goto loc_82473600;
loc_824735FC:
	// oris r5,r10,256
	ctx.r5.u64 = ctx.r10.u64 | 16777216;
loc_82473600:
	// bctrl 
	ctx.lr = 0x82473604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8247363c
	if (ctx.cr6.lt) goto loc_8247363C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82473630;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247363c
	if (ctx.cr0.lt) goto loc_8247363C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247363C:
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

DEFINE_REX_FUNC(sub_8247B110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r9,44(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247b138
	if (!ctx.cr0.eq) goto loc_8247B138;
loc_8247B130:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247b2b0
	goto loc_8247B2B0;
loc_8247B138:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247b168
	if (ctx.cr6.eq) goto loc_8247B168;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8247B148:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,-4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r7,44(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8247b168
	if (!ctx.cr6.lt) goto loc_8247B168;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x8247b148
	if (!ctx.cr0.eq) goto loc_8247B148;
loc_8247B168:
	// subf r11,r8,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r8.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247b1ac
	if (ctx.cr0.eq) goto loc_8247B1AC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8247B180:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,-4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r3,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r3.u32);
	// bdnz 0x8247b180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247B180;
loc_8247B1AC:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247b200
	if (ctx.cr6.eq) goto loc_8247B200;
	// lwz r10,24(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,44(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8247b1e0
	if (!ctx.cr6.gt) goto loc_8247B1E0;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// b 0x8247b244
	goto loc_8247B244;
loc_8247B1E0:
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247b200
	if (!ctx.cr6.eq) goto loc_8247B200;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x8247b1e0
	if (!ctx.cr0.eq) goto loc_8247B1E0;
loc_8247B200:
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247b244
	if (ctx.cr0.eq) goto loc_8247B244;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8247B218:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r5,-4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r3,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r3.u32);
	// bdnz 0x8247b218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247B218;
loc_8247B244:
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8247b130
	if (ctx.cr6.eq) goto loc_8247B130;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247b290
	if (ctx.cr0.eq) goto loc_8247B290;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8247B264:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,-4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r7,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r7.u32);
	// bdnz 0x8247b264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247B264;
loc_8247B290:
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stwx r9,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8247B2B0:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82493D20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82493d74
	if (ctx.cr6.lt) goto loc_82493D74;
	// beq cr6,0x82493d64
	if (ctx.cr6.eq) goto loc_82493D64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82493d50
	if (ctx.cr6.lt) goto loc_82493D50;
	// beq cr6,0x82493d48
	if (ctx.cr6.eq) goto loc_82493D48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82493D48:
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// b 0x82493d94
	goto loc_82493D94;
loc_82493D50:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_82493D5C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x82493d94
	goto loc_82493D94;
loc_82493D64:
	// lwa r11,8(r5)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 8));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82493d5c
	goto loc_82493D5C;
loc_82493D74:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82493d8c
	if (ctx.cr6.eq) goto loc_82493D8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// b 0x82493d94
	goto loc_82493D94;
loc_82493D8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82493D94:
	// stfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82494F18) {
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
	ctx.lr = 0x82494F20;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82494f5c
	if (ctx.cr6.eq) goto loc_82494F5C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82494F40:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82494f40
	if (!ctx.cr6.eq) goto loc_82494F40;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82494F5C:
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8249503c
	if (ctx.cr6.eq) goto loc_8249503C;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82495028
	if (ctx.cr6.eq) goto loc_82495028;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82494F78:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82494f78
	if (!ctx.cr6.eq) goto loc_82494F78;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82495028
	if (ctx.cr0.eq) goto loc_82495028;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82495028
	if (ctx.cr6.eq) goto loc_82495028;
	// add r11,r30,r27
	ctx.r11.u64 = r30.u64 + r27.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// bl 0x82444608
	ctx.lr = 0x82494FB4;
	sub_82444608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82494fe0
	if (!ctx.cr0.eq) goto loc_82494FE0;
loc_82494FBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,24176
	ctx.r6.s64 = ctx.r11.s64 + 24176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494e30
	ctx.lr = 0x82494FD4;
	sub_82494E30(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8249507c
	goto loc_8249507C;
loc_82494FE0:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x826a1e70
	ctx.lr = 0x82494FF4;
	sub_826A1E70(ctx, base);
	// add r29,r31,r30
	r29.u64 = r31.u64 + r30.u64;
	// li r11,58
	ctx.r11.s64 = 58;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stbx r11,r31,r30
	REX_STORE_U8(r31.u32 + r30.u32, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,2
	ctx.r3.s64 = r29.s64 + 2;
	// stb r11,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r11.u8);
	// bl 0x826a1e70
	ctx.lr = 0x82495014;
	sub_826A1E70(ctx, base);
	// add r11,r29,r27
	ctx.r11.u64 = r29.u64 + r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x8249503c
	goto loc_8249503C;
loc_82495028:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8249503c
	if (ctx.cr6.eq) goto loc_8249503C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8249503c
	if (!ctx.cr6.eq) goto loc_8249503C;
	// lwz r28,20(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_8249503C:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82444750
	ctx.lr = 0x82495044;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82495068
	if (ctx.cr0.eq) goto loc_82495068;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82445118
	ctx.lr = 0x82495064;
	sub_82445118(ctx, base);
	// b 0x8249506c
	goto loc_8249506C;
loc_82495068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249506C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82494fbc
	if (ctx.cr6.eq) goto loc_82494FBC;
	// stw r3,20(r26)
	REX_STORE_U32(r26.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249507C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8249DBA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8249DBB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// beq cr6,0x8249dcf8
	if (ctx.cr6.eq) goto loc_8249DCF8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x8249DBD0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249dbe4
	if (ctx.cr0.eq) goto loc_8249DBE4;
	// bl 0x82446f70
	ctx.lr = 0x8249DBDC;
	sub_82446F70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8249dbe8
	goto loc_8249DBE8;
loc_8249DBE4:
	// li r30,0
	r30.s64 = 0;
loc_8249DBE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8249dcf8
	if (ctx.cr6.eq) goto loc_8249DCF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// beq cr6,0x8249dc34
	if (ctx.cr6.eq) goto loc_8249DC34;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8249dc64
	if (!ctx.cr6.eq) goto loc_8249DC64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,3079
	ctx.r5.s64 = 3079;
	// addi r6,r10,-9744
	ctx.r6.s64 = ctx.r10.s64 + -9744;
	// b 0x8249dc4c
	goto loc_8249DC4C;
loc_8249DC34:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249dc84
	if (ctx.cr6.eq) goto loc_8249DC84;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// addi r6,r10,-22356
	ctx.r6.s64 = ctx.r10.s64 + -22356;
loc_8249DC4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82494d48
	ctx.lr = 0x8249DC60;
	sub_82494D48(ctx, base);
	// b 0x8249dc84
	goto loc_8249DC84;
loc_8249DC64:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d2e8
	ctx.lr = 0x8249DC80;
	sub_8249D2E8(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
loc_8249DC84:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x8249DC8C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249dcb4
	if (ctx.cr0.eq) goto loc_8249DCB4;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x8249DCB0;
	sub_824474C0(ctx, base);
	// b 0x8249dcb8
	goto loc_8249DCB8;
loc_8249DCB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249DCB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249dcf8
	if (ctx.cr6.eq) goto loc_8249DCF8;
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249DCCC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249dcec
	if (ctx.cr0.eq) goto loc_8249DCEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444918
	ctx.lr = 0x8249DCE8;
	sub_82444918(ctx, base);
	// b 0x8249dcf0
	goto loc_8249DCF0;
loc_8249DCEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249DCF0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8249dcfc
	if (!ctx.cr6.eq) goto loc_8249DCFC;
loc_8249DCF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249DCFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824AB798) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x824AB7A0;
	// lwz r6,552(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// lwz r24,564(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// lwz r23,-4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824abac0
	if (ctx.cr6.eq) goto loc_824ABAC0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824abac0
	if (!ctx.cr6.eq) goto loc_824ABAC0;
	// li r26,0
	r26.s64 = 0;
	// lwz r8,16(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r7,132(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824AB7E4:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824abac0
	if (!ctx.cr6.eq) goto loc_824ABAC0;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824abac0
	if (!ctx.cr6.eq) goto loc_824ABAC0;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r5,60(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// rlwinm. r5,r5,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x824abac0
	if (!ctx.cr0.eq) goto loc_824ABAC0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824ab7e4
	if (ctx.cr6.lt) goto loc_824AB7E4;
	// lhz r25,202(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// li r28,1
	r28.s64 = 1;
	// mr r27,r26
	r27.u64 = r26.u64;
	// addi r29,r6,-1
	r29.s64 = ctx.r6.s64 + -1;
loc_824AB840:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824ab8c0
	if (ctx.cr6.eq) goto loc_824AB8C0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_824AB854:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab8b0
	if (ctx.cr6.eq) goto loc_824AB8B0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ab8b0
	if (ctx.cr6.eq) goto loc_824AB8B0;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824ab8a8
	if (ctx.cr6.eq) goto loc_824AB8A8;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_824AB888:
	// lwzx r30,r11,r9
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824ab898
	if (!ctx.cr6.eq) goto loc_824AB898;
	// li r31,1
	r31.s64 = 1;
loc_824AB898:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824ab888
	if (ctx.cr6.lt) goto loc_824AB888;
loc_824AB8A8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824ab8c0
	if (!ctx.cr6.eq) goto loc_824AB8C0;
loc_824AB8B0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// blt cr6,0x824ab854
	if (ctx.cr6.lt) goto loc_824AB854;
loc_824AB8C0:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r25,260
	ctx.cr6.compare<uint32_t>(r25.u32, 260, ctx.xer);
	// bne cr6,0x824ab8e4
	if (!ctx.cr6.eq) goto loc_824AB8E4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824ab8f4
	if (!ctx.cr6.lt) goto loc_824AB8F4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ab8f4
	if (ctx.cr6.eq) goto loc_824AB8F4;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x824ab8f4
	goto loc_824AB8F4;
loc_824AB8E4:
	// subfc r9,r11,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// and r28,r11,r28
	r28.u64 = ctx.r11.u64 & r28.u64;
loc_824AB8F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824abac0
	if (ctx.cr6.eq) goto loc_824ABAC0;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x824aba00
	if (!ctx.cr6.lt) goto loc_824ABA00;
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824AB918:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ab9f8
	if (ctx.cr6.eq) goto loc_824AB9F8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ab9f8
	if (ctx.cr6.eq) goto loc_824AB9F8;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ab994
	if (ctx.cr6.eq) goto loc_824AB994;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,136(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_824AB950:
	// lwzx r8,r9,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r22,4(r8)
	r22.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r22,r5
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824ab984
	if (!ctx.cr6.eq) goto loc_824AB984;
	// lwz r22,16(r8)
	r22.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r22,r27
	ctx.cr6.compare<uint32_t>(r22.u32, r27.u32, ctx.xer);
	// bne cr6,0x824ab984
	if (!ctx.cr6.eq) goto loc_824AB984;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r8,r28
	r28.u64 = ctx.r8.u64 & r28.u64;
loc_824AB984:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// blt cr6,0x824ab950
	if (ctx.cr6.lt) goto loc_824AB950;
loc_824AB994:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ab9f8
	if (ctx.cr6.eq) goto loc_824AB9F8;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_824AB9B4:
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824ab9e8
	if (!ctx.cr6.eq) goto loc_824AB9E8;
	// lwz r31,16(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// bne cr6,0x824ab9e8
	if (!ctx.cr6.eq) goto loc_824AB9E8;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r28
	r28.u64 = ctx.r9.u64 & r28.u64;
loc_824AB9E8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824ab9b4
	if (ctx.cr6.lt) goto loc_824AB9B4;
loc_824AB9F8:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x824ab918
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB918;
loc_824ABA00:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x824ab840
	if (ctx.cr6.lt) goto loc_824AB840;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824abac0
	if (ctx.cr6.eq) goto loc_824ABAC0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_824ABA1C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824abab0
	if (ctx.cr6.eq) goto loc_824ABAB0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_824ABA2C:
	// lwz r11,564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// lwzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824aba98
	if (ctx.cr6.eq) goto loc_824ABA98;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aba98
	if (ctx.cr6.eq) goto loc_824ABA98;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824aba98
	if (!ctx.cr6.gt) goto loc_824ABA98;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_824ABA5C:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824aba84
	if (!ctx.cr6.eq) goto loc_824ABA84;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
loc_824ABA84:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824aba5c
	if (ctx.cr6.lt) goto loc_824ABA5C;
loc_824ABA98:
	// lwz r11,552(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x824aba2c
	if (ctx.cr6.lt) goto loc_824ABA2C;
loc_824ABAB0:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x824aba1c
	if (ctx.cr6.lt) goto loc_824ABA1C;
	// stw r26,0(r23)
	REX_STORE_U32(r23.u32 + 0, r26.u32);
loc_824ABAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824C1BA8) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r3,r10,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r10.s32 / ctx.r4.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C26E8) {
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
	ctx.lr = 0x824C26F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// li r25,2
	r25.s64 = 2;
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,10280
	r26.s64 = ctx.r11.s64 + 10280;
	// addi r27,r10,10792
	r27.s64 = ctx.r10.s64 + 10792;
loc_824C2720:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x824c2750
	if (!ctx.cr6.lt) goto loc_824C2750;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c1ef8
	ctx.lr = 0x824C2734;
	sub_824C1EF8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x824c2748
	if (!ctx.cr6.lt) goto loc_824C2748;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824c2b00
	if (ctx.cr6.eq) goto loc_824C2B00;
loc_824C2748:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c2b30
	if (ctx.cr6.eq) goto loc_824C2B30;
loc_824C2750:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824c27b8
	if (ctx.cr6.lt) goto loc_824C27B8;
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
	// lhzx r28,r7,r8
	r28.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r28,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, r28.u16);
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
loc_824C27B8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x824c2850
	if (ctx.cr6.eq) goto loc_824C2850;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c2850
	if (!ctx.cr6.lt) goto loc_824C2850;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c2850
	if (ctx.cr6.gt) goto loc_824C2850;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824c2818
	if (ctx.cr6.eq) goto loc_824C2818;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c1d40
	ctx.lr = 0x824C2814;
	sub_824C1D40(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_824C2818:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x824c2850
	if (ctx.cr6.gt) goto loc_824C2850;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x824c284c
	if (ctx.cr6.eq) goto loc_824C284C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824c2850
	if (!ctx.cr6.eq) goto loc_824C2850;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x824c2850
	if (!ctx.cr6.gt) goto loc_824C2850;
loc_824C284C:
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
loc_824C2850:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824c2a28
	if (ctx.cr6.lt) goto loc_824C2A28;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c2a28
	if (ctx.cr6.gt) goto loc_824C2A28;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r8,5784(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,5788(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r10,r5,r6
	REX_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lwz r11,5776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r11.u32);
	// lbzx r11,r7,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
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
	// bge cr6,0x824c28ec
	if (!ctx.cr6.lt) goto loc_824C28EC;
	// lbzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// b 0x824c28f8
	goto loc_824C28F8;
loc_824C28EC:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_824C28F8:
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
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r7,5784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r10,5780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r7,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_824C2944:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x824c29b4
	if (ctx.cr6.gt) goto loc_824C29B4;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r5,r6
	r28.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// sthx r28,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u16);
loc_824C29B4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bne 0x824c2944
	if (!ctx.cr0.eq) goto loc_824C2944;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x824c2720
	if (ctx.cr6.eq) goto loc_824C2720;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c29f8
	if (ctx.cr6.lt) goto loc_824C29F8;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x824c29fc
	goto loc_824C29FC;
loc_824C29F8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_824C29FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ce068
	ctx.lr = 0x824C2A0C;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C2A1C;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x824c2af8
	goto loc_824C2AF8;
loc_824C2A28:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c2b0c
	if (ctx.cr6.eq) goto loc_824C2B0C;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
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
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824c2ad8
	if (!ctx.cr6.eq) goto loc_824C2AD8;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c2ab0
	if (ctx.cr6.lt) goto loc_824C2AB0;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x824c2ab4
	goto loc_824C2AB4;
loc_824C2AB0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_824C2AB4:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x824ce068
	ctx.lr = 0x824C2AC8;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C2AD8;
	sub_824C1C80(ctx, base);
loc_824C2AD8:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_824C2AF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c2720
	if (!ctx.cr6.eq) goto loc_824C2720;
loc_824C2B00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C2B04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_824C2B0C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x824c2720
	goto loc_824C2720;
loc_824C2B30:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c2b90
	if (ctx.cr6.eq) goto loc_824C2B90;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
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
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
loc_824C2B90:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c2ba8
	if (ctx.cr6.lt) goto loc_824C2BA8;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824c2bac
	goto loc_824C2BAC;
loc_824C2BA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_824C2BAC:
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
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
	ctx.lr = 0x824C2BC8;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C2BD8;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c2bfc
	if (!ctx.cr6.eq) goto loc_824C2BFC;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 & r25.u64;
	// b 0x824c2b04
	goto loc_824C2B04;
loc_824C2BFC:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x824c2b04
	if (ctx.cr6.eq) goto loc_824C2B04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c2b04
	goto loc_824C2B04;
}

DEFINE_REX_FUNC(sub_824DDE08) {
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
	ctx.lr = 0x824DDE10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	r27.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x824dd990
	ctx.lr = 0x824DDE28;
	sub_824DD990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824dde98
	if (!ctx.cr0.eq) goto loc_824DDE98;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// lwz r4,4680(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4680);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824dda00
	ctx.lr = 0x824DDE40;
	sub_824DDA00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x824dde58
	if (!ctx.cr0.lt) goto loc_824DDE58;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// b 0x824ddea0
	goto loc_824DDEA0;
loc_824DDE58:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,4680(r31)
	REX_STORE_U32(r31.u32 + 4680, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824dd928
	ctx.lr = 0x824DDE6C;
	sub_824DD928(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r29,328(r11)
	REX_STORE_U8(ctx.r11.u32 + 328, r29.u8);
	// bl 0x824dd928
	ctx.lr = 0x824DDE84;
	sub_824DD928(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// stb r30,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_824DDE98:
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// lbz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 72);
loc_824DDEA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824E21F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,19188
	ctx.r4.s64 = ctx.r11.s64 + 19188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2220;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2234;
	sub_824DF9F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19212
	ctx.r4.s64 = ctx.r11.s64 + 19212;
	// bl 0x824e0480
	ctx.lr = 0x824E2244;
	sub_824E0480(ctx, base);
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

DEFINE_REX_FUNC(sub_824E41B8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824e3f78
	ctx.lr = 0x824E41E8;
	sub_824E3F78(ctx, base);
	// lwz r11,2492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4218
	if (ctx.cr6.eq) goto loc_824E4218;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(r30.s32, 3537, ctx.xer);
	// beq cr6,0x824e4218
	if (ctx.cr6.eq) goto loc_824E4218;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2488);
	// addi r6,r30,-1100
	ctx.r6.s64 = r30.s64 + -1100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x824E4218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824E4218:
	// cmpwi cr6,r30,3517
	ctx.cr6.compare<int32_t>(r30.s32, 3517, ctx.xer);
	// beq cr6,0x824e4254
	if (ctx.cr6.eq) goto loc_824E4254;
	// cmpwi cr6,r30,3525
	ctx.cr6.compare<int32_t>(r30.s32, 3525, ctx.xer);
	// beq cr6,0x824e4260
	if (ctx.cr6.eq) goto loc_824E4260;
	// cmpwi cr6,r30,3527
	ctx.cr6.compare<int32_t>(r30.s32, 3527, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// beq cr6,0x824e424c
	if (ctx.cr6.eq) goto loc_824E424C;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(r30.s32, 3537, ctx.xer);
	// beq cr6,0x824e4244
	if (ctx.cr6.eq) goto loc_824E4244;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x824e425c
	goto loc_824E425C;
loc_824E4244:
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// b 0x824e425c
	goto loc_824E425C;
loc_824E424C:
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// b 0x824e425c
	goto loc_824E425C;
loc_824E4254:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_824E425C:
	// stw r11,2480(r31)
	REX_STORE_U32(r31.u32 + 2480, ctx.r11.u32);
loc_824E4260:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,1136
	ctx.r3.s64 = r31.s64 + 1136;
	// bl 0x826a4440
	ctx.lr = 0x824E426C;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_824E9AE8) {
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
	ctx.lr = 0x824E9AF0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824e9b24
	if (ctx.cr6.eq) goto loc_824E9B24;
	// bl 0x826b40a0
	ctx.lr = 0x824E9B24;
	sub_826B40A0(ctx, base);
loc_824E9B24:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824e9b38
	if (!ctx.cr6.lt) goto loc_824E9B38;
	// bl 0x826b40a0
	ctx.lr = 0x824E9B38;
	sub_826B40A0(ctx, base);
loc_824E9B38:
	// lwzu r29,4(r31)
	ea = 4 + r31.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lwzu r30,4(r31)
	ea = 4 + r31.u32;
	r30.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r21,r31,4
	r21.s64 = r31.s64 + 4;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r31,r30,21
	r31.u64 = r30.u32 & 0x7FF;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x824e9bc8
	if (!ctx.cr6.eq) goto loc_824E9BC8;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// blt cr6,0x824e9b88
	if (ctx.cr6.lt) goto loc_824E9B88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,-29516
	ctx.r6.s64 = ctx.r11.s64 + -29516;
loc_824E9B70:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	ctx.lr = 0x824E9B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x824e9d18
	goto loc_824E9D18;
loc_824E9B88:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e9758
	ctx.lr = 0x824E9B98;
	sub_824E9758(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824e9bac
	if (!ctx.cr6.lt) goto loc_824E9BAC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824E9BAC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 12);
	// slw r11,r10,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// b 0x824e9d10
	goto loc_824E9D10;
loc_824E9BC8:
	// rlwinm r27,r30,0,12,15
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824e9c3c
	if (ctx.cr6.eq) goto loc_824E9C3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824e9c00
	if (ctx.cr6.eq) goto loc_824E9C00;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x824e9bec
	if (ctx.cr6.eq) goto loc_824E9BEC;
loc_824E9BE4:
	// bl 0x826b40a0
	ctx.lr = 0x824E9BE8;
	sub_826B40A0(ctx, base);
	// b 0x824e9d10
	goto loc_824E9D10;
loc_824E9BEC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824e9d10
	if (!ctx.cr6.lt) goto loc_824E9D10;
	// b 0x824e9be4
	goto loc_824E9BE4;
loc_824E9C00:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e9c14
	if (ctx.cr6.lt) goto loc_824E9C14;
	// bl 0x826b40a0
	ctx.lr = 0x824E9C14;
	sub_826B40A0(ctx, base);
loc_824E9C14:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// blt cr6,0x824e9c20
	if (ctx.cr6.lt) goto loc_824E9C20;
	// bl 0x826b40a0
	ctx.lr = 0x824E9C20;
	sub_826B40A0(ctx, base);
loc_824E9C20:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-19904
	ctx.r7.s64 = ctx.r11.s64 + -19904;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// b 0x824e9d00
	goto loc_824E9D00;
loc_824E9C3C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e9cc4
	if (ctx.cr6.lt) goto loc_824E9CC4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// blt cr6,0x824e9c58
	if (ctx.cr6.lt) goto loc_824E9C58;
	// bl 0x826b40a0
	ctx.lr = 0x824E9C58;
	sub_826B40A0(ctx, base);
loc_824E9C58:
	// clrlwi r4,r29,28
	ctx.r4.u64 = r29.u32 & 0xF;
	// rlwinm r6,r30,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 10) & 0x1;
	// rlwinm r5,r29,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x824e9c70
	if (!ctx.cr6.eq) goto loc_824E9C70;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824E9C70:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x824e9ca4
	if (!ctx.cr6.eq) goto loc_824E9CA4;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x824e9ca4
	if (ctx.cr6.lt) goto loc_824E9CA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-29632
	ctx.r5.s64 = ctx.r11.s64 + -29632;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1a58
	ctx.lr = 0x824E9C98;
	sub_826A1A58(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x824e9b70
	goto loc_824E9B70;
loc_824E9CA4:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// addi r7,r11,-19888
	ctx.r7.s64 = ctx.r11.s64 + -19888;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e97f8
	ctx.lr = 0x824E9CC0;
	sub_824E97F8(ctx, base);
	// b 0x824e9d10
	goto loc_824E9D10;
loc_824E9CC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824e9cd8
	if (!ctx.cr6.eq) goto loc_824E9CD8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r30,r11,-19936
	r30.s64 = ctx.r11.s64 + -19936;
	// b 0x824e9cec
	goto loc_824E9CEC;
loc_824E9CD8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// addi r30,r11,-19920
	r30.s64 = ctx.r11.s64 + -19920;
	// blt cr6,0x824e9cec
	if (ctx.cr6.lt) goto loc_824E9CEC;
	// bl 0x826b40a0
	ctx.lr = 0x824E9CEC;
	sub_826B40A0(ctx, base);
loc_824E9CEC:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824E9D00:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// bl 0x824e99a8
	ctx.lr = 0x824E9D10;
	sub_824E99A8(ctx, base);
loc_824E9D10:
	// stw r21,0(r22)
	REX_STORE_U32(r22.u32 + 0, r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824E9D18:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824F7238) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_824F7258:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824f7258
	if (ctx.cr6.eq) goto loc_824F7258;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F7DC0) {
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
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x824f7de8
	if (!ctx.cr6.gt) goto loc_824F7DE8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7c98
	ctx.lr = 0x824F7DE4;
	sub_824F7C98(ctx, base);
	// b 0x824f7e54
	goto loc_824F7E54;
loc_824F7DE8:
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824f7e0c
	if (ctx.cr6.lt) goto loc_824F7E0C;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x824f7e50
	goto loc_824F7E50;
loc_824F7E0C:
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
	// beq cr6,0x824f7e44
	if (ctx.cr6.eq) goto loc_824F7E44;
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
	ctx.lr = 0x824F7E3C;
	sub_826A2E60(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x824f7e50
	goto loc_824F7E50;
loc_824F7E44:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7378
	ctx.lr = 0x824F7E4C;
	sub_824F7378(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_824F7E50:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_824F7E54:
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

DEFINE_REX_FUNC(sub_824FFC30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x824ffc80
	if (ctx.cr6.lt) goto loc_824FFC80;
	// beq cr6,0x824ffc44
	if (ctx.cr6.eq) goto loc_824FFC44;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_824FFC44:
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_824FFC80:
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503E18) {
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
	ctx.lr = 0x82503E20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82503f3c
	if (ctx.cr6.eq) goto loc_82503F3C;
	// lhz r27,18(r5)
	r27.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// lwz r11,668(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 668);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82503f3c
	if (!ctx.cr6.lt) goto loc_82503F3C;
	// rlwinm r25,r27,2,0,29
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82503E54:
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82503f28
	if (ctx.cr6.eq) goto loc_82503F28;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x82503f3c
	if (!ctx.cr6.eq) goto loc_82503F3C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x82503E78;
	sub_825164C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,88(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 88);
	// lwz r5,672(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 672);
	// bl 0x82501ce0
	ctx.lr = 0x82503E8C;
	sub_82501CE0(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82503f28
	if (ctx.cr6.gt) goto loc_82503F28;
loc_82503EA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x82503EAC;
	sub_825164C0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x82503eec
	if (ctx.cr6.eq) goto loc_82503EEC;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82503ecc
	if (!ctx.cr6.eq) goto loc_82503ECC;
	// li r30,-1
	r30.s64 = -1;
	// b 0x82503ee0
	goto loc_82503EE0;
loc_82503ECC:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// lwz r5,672(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,88(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 88);
	// bl 0x82501ce0
	ctx.lr = 0x82503EDC;
	sub_82501CE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82503EE0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x82503ea0
	if (!ctx.cr6.gt) goto loc_82503EA0;
	// b 0x82503f28
	goto loc_82503F28;
loc_82503EEC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82516928
	ctx.lr = 0x82503EF8;
	sub_82516928(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825168b8
	ctx.lr = 0x82503F08;
	sub_825168B8(ctx, base);
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,18,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r24,r11,r24
	r24.u64 = ctx.r11.u64 | r24.u64;
loc_82503F28:
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82503e54
	if (ctx.cr6.lt) goto loc_82503E54;
loc_82503F3C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8250F440) {
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
	ctx.lr = 0x8250F448;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f498
	if (!ctx.cr0.eq) goto loc_8250F498;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250f498
	if (ctx.cr0.eq) goto loc_8250F498;
loc_8250F46C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// beq cr6,0x8250f4a4
	if (ctx.cr6.eq) goto loc_8250F4A4;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f498
	if (!ctx.cr0.eq) goto loc_8250F498;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250f46c
	if (!ctx.cr6.eq) goto loc_8250F46C;
loc_8250F498:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F4A4;
	sub_824E4368(ctx, base);
loc_8250F4A4:
	// lwz r28,8(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8250F4A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8250f524
	if (ctx.cr6.eq) goto loc_8250F524;
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x8250f4f0
	goto loc_8250F4F0;
loc_8250F4B8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250f4d4
	if (ctx.cr6.eq) goto loc_8250F4D4;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8250f4d8
	if (!ctx.cr6.eq) goto loc_8250F4D8;
loc_8250F4D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250F4D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f518
	if (!ctx.cr0.eq) goto loc_8250F518;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq cr6,0x8250f4f0
	if (ctx.cr6.eq) goto loc_8250F4F0;
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8250F4F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250d258
	ctx.lr = 0x8250F508;
	sub_8250D258(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f4b8
	if (ctx.cr0.eq) goto loc_8250F4B8;
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x8250f4a8
	goto loc_8250F4A8;
loc_8250F518:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F524;
	sub_824E4368(ctx, base);
loc_8250F524:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8251EB30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r8,2
	ctx.r8.s64 = 2;
	// clrldi r11,r5,58
	ctx.r11.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r7,r4,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// sld r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r6,r5,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r5,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r4,58
	ctx.r8.u64 = ctx.r4.u64 & 0x3F;
	// li r31,-1
	r31.s64 = -1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sld r8,r31,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r8.u8 & 0x7F));
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8251eb78
	if (!ctx.cr6.eq) goto loc_8251EB78;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8251EB78:
	// ld r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8251eb9c
	if (ctx.cr6.eq) goto loc_8251EB9C;
	// rlwinm r10,r5,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
loc_8251EB8C:
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8251EB94:
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// b 0x8251ebf8
	goto loc_8251EBF8;
loc_8251EB9C:
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// b 0x8251ebb4
	goto loc_8251EBB4;
loc_8251EBA4:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8251ebd4
	if (!ctx.cr6.eq) goto loc_8251EBD4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8251EBB4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8251eba4
	if (ctx.cr6.gt) goto loc_8251EBA4;
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8251ebf4
	if (ctx.cr6.eq) goto loc_8251EBF4;
	// rlwinm r10,r4,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// b 0x8251eb8c
	goto loc_8251EB8C;
loc_8251EBD4:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r4,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cntlzd r9,r9
	ctx.r9.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x8251eb94
	goto loc_8251EB94;
loc_8251EBF4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8251EBF8:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82524D50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82524D58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,102
	ctx.r6.s64 = 102;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82524D7C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82524da0
	if (ctx.cr6.eq) goto loc_82524DA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82524D9C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82524DA0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524DA8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82524de8
	if (ctx.cr6.eq) goto loc_82524DE8;
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
loc_82524DE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8252E460) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8252E468;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,340(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r30,0
	r30.s64 = 0;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r30,0(r14)
	REX_STORE_U32(r14.u32 + 0, r30.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r15,r30
	r15.u64 = r30.u64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// beq cr6,0x8252e5a8
	if (ctx.cr6.eq) goto loc_8252E5A8;
	// lwz r18,324(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r19,r30
	r19.u64 = r30.u64;
loc_8252E4B0:
	// li r25,0
	r25.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8252e558
	if (ctx.cr6.eq) goto loc_8252E558;
	// mr r31,r24
	r31.u64 = r24.u64;
	// subf r29,r24,r16
	r29.u64 = r16.u64 - r24.u64;
	// subf r28,r24,r17
	r28.u64 = r17.u64 - r24.u64;
loc_8252E4CC:
	// lwzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252e500
	if (!ctx.cr6.eq) goto loc_8252E500;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwzx r9,r30,r18
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + r18.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252e500
	if (!ctx.cr6.eq) goto loc_8252E500;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// lwzx r9,r30,r23
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8252e558
	if (ctx.cr6.eq) goto loc_8252E558;
loc_8252E500:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8252e548
	if (!ctx.cr6.eq) goto loc_8252E548;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8252e548
	if (!ctx.cr6.eq) goto loc_8252E548;
	// lwzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b8558
	ctx.lr = 0x8252E52C;
	sub_825B8558(ctx, base);
	// lwzx r5,r30,r18
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + r18.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwzx r4,r30,r23
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwzx r3,r30,r26
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// bl 0x825b8558
	ctx.lr = 0x8252E540;
	sub_825B8558(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x8252e558
	if (ctx.cr6.eq) goto loc_8252E558;
loc_8252E548:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// blt cr6,0x8252e4cc
	if (ctx.cr6.lt) goto loc_8252E4CC;
loc_8252E558:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// bne cr6,0x8252e580
	if (!ctx.cr6.eq) goto loc_8252E580;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e5c0
	if (ctx.cr0.eq) goto loc_8252E5C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// slw r11,r11,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r22.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// b 0x8252e594
	goto loc_8252E594;
loc_8252E580:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r27,r19
	ctx.r10.u64 = r19.u8 & 0x20 ? 0 : (r27.u32 << (r19.u8 & 0x3F));
	// slw r11,r11,r19
	ctx.r11.u64 = r19.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r19.u8 & 0x3F));
	// andc r11,r15,r11
	ctx.r11.u64 = r15.u64 & ~ctx.r11.u64;
	// or r15,r11,r10
	r15.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8252E594:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(r22.u32, r21.u32, ctx.xer);
	// blt cr6,0x8252e4b0
	if (ctx.cr6.lt) goto loc_8252E4B0;
loc_8252E5A8:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r15.u32);
loc_8252E5B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8252E5C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252e5b4
	goto loc_8252E5B4;
}

DEFINE_REX_FUNC(sub_82544048) {
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
	ctx.lr = 0x82544050;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8254405C:
	// li r24,0
	r24.s64 = 0;
	// li r25,44
	r25.s64 = 44;
loc_82544064:
	// lwz r27,8(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r27,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82544174
	if (!ctx.cr6.lt) goto loc_82544174;
	// lwzx r26,r25,r30
	r26.u64 = REX_LOAD_U32(r25.u32 + r30.u32);
	// lwz r31,12(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a60
	ctx.lr = 0x82544084;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544154
	if (ctx.cr0.eq) goto loc_82544154;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82544154
	if (!ctx.cr6.lt) goto loc_82544154;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
loc_825440A8:
	// rlwinm r11,r27,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8254414c
	if (!ctx.cr6.lt) goto loc_8254414C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8254414c
	if (ctx.cr6.eq) goto loc_8254414C;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, ctx.xer);
	// beq cr6,0x825440f0
	if (ctx.cr6.eq) goto loc_825440F0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82542e80
	ctx.lr = 0x825440D8;
	sub_82542E80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82544160
	if (!ctx.cr0.eq) goto loc_82544160;
	// lwz r27,8(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r27,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x825440fc
	if (ctx.cr6.eq) goto loc_825440FC;
loc_825440F0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x825440a8
	goto loc_825440A8;
loc_825440FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82544100:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544140
	if (ctx.cr6.eq) goto loc_82544140;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82544130
	if (ctx.cr6.eq) goto loc_82544130;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82544130
	if (!ctx.cr6.eq) goto loc_82544130;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82544138
	if (!ctx.cr0.eq) goto loc_82544138;
loc_82544130:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82544100
	goto loc_82544100;
loc_82544138:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// b 0x82544144
	goto loc_82544144;
loc_82544140:
	// li r30,0
	r30.s64 = 0;
loc_82544144:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8254405c
	if (!ctx.cr6.eq) goto loc_8254405C;
loc_8254414C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82544174
	if (ctx.cr6.eq) goto loc_82544174;
loc_82544154:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// b 0x82544064
	goto loc_82544064;
loc_82544160:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// bl 0x825bad90
	ctx.lr = 0x8254416C;
	sub_825BAD90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82544178
	goto loc_82544178;
loc_82544174:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82544178:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8254FFC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82550004
	if (!ctx.cr6.gt) goto loc_82550004;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x8254ffe8
	if (!ctx.cr6.eq) goto loc_8254FFE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8254FFE8:
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x82550004
	if (ctx.cr6.eq) goto loc_82550004;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x82550004
	if (ctx.cr6.eq) goto loc_82550004;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82550004:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82550900) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8255097c
	if (ctx.cr6.lt) goto loc_8255097C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82550974
	if (!ctx.cr6.gt) goto loc_82550974;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x8255097c
	if (!ctx.cr6.gt) goto loc_8255097C;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// ble cr6,0x82550974
	if (!ctx.cr6.gt) goto loc_82550974;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// bne cr6,0x8255097c
	if (!ctx.cr6.eq) goto loc_8255097C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82550958;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,1,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60000000;
	// addis r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -536870912;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82550980
	goto loc_82550980;
loc_82550974:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82550980
	goto loc_82550980;
loc_8255097C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82550980:
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

DEFINE_REX_FUNC(sub_82553E38) {
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
	ctx.lr = 0x82553E40;
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
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82553E6C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82553e90
	if (ctx.cr6.eq) goto loc_82553E90;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553E8C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553E90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553E98;
	sub_8250AD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
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
	ctx.lr = 0x82553EC8;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82558500) {
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
	ctx.lr = 0x82558508;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82558584
	goto loc_82558584;
loc_82558530:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82558574
	if (!ctx.cr6.eq) goto loc_82558574;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x82558544;
	sub_824FFCC0(ctx, base);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r9,r30,1
	ctx.r9.u64 = r30.u64 | 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82558574:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255858c
	if (!ctx.cr0.eq) goto loc_8255858C;
loc_82558584:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82558530
	if (!ctx.cr6.eq) goto loc_82558530;
loc_8255858C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82560258) {
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
	ctx.lr = 0x82560260;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r21,1
	r21.s64 = 1;
	// clrlwi. r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825602a4
	if (!ctx.cr0.eq) goto loc_825602A4;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825602a4
	if (!ctx.cr0.eq) goto loc_825602A4;
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825603b4
	if (ctx.cr6.eq) goto loc_825603B4;
loc_825602A4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825603b4
	if (!ctx.cr0.eq) goto loc_825603B4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825603b4
	if (ctx.cr0.eq) goto loc_825603B4;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r6,r11,65535
	ctx.r6.u64 = ctx.r11.u64 | 65535;
loc_825602C4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825602e0
	if (ctx.cr6.eq) goto loc_825602E0;
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x82560398
	if (!ctx.cr6.eq) goto loc_82560398;
	// lwz r10,80(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// b 0x8256033c
	goto loc_8256033C;
loc_825602E0:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r10,40(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560398
	if (ctx.cr0.eq) goto loc_82560398;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82560310:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82560328
	if (!ctx.cr0.eq) goto loc_82560328;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82560310
	if (!ctx.cr6.eq) goto loc_82560310;
loc_82560328:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560408
	if (ctx.cr6.eq) goto loc_82560408;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82560398
	if (!ctx.cr6.eq) goto loc_82560398;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8256033C:
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// clrlwi. r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82560354
	if (!ctx.cr0.eq) goto loc_82560354;
	// lwz r9,76(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 76);
	// rlwimi r11,r9,0,13,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
loc_82560354:
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm. r9,r11,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256036c
	if (!ctx.cr0.eq) goto loc_8256036C;
	// lwz r9,76(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 76);
	// rlwimi r11,r9,0,12,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
loc_8256036C:
	// lwz r9,68(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 68);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// clrlwi r8,r9,4
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFFF;
	// clrlwi r9,r11,4
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82560390
	if (!ctx.cr6.gt) goto loc_82560390;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82560390:
	// rlwimi r11,r9,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
loc_82560398:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825603b4
	if (!ctx.cr0.eq) goto loc_825603B4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825602c4
	if (!ctx.cr6.eq) goto loc_825602C4;
loc_825603B4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x825603C4;
	sub_825C2288(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r26,r24
	r26.u64 = r24.u64;
loc_825603D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82560428
	if (ctx.cr6.eq) goto loc_82560428;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8256041c
	if (ctx.cr6.eq) goto loc_8256041C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_825603E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256041c
	if (ctx.cr6.eq) goto loc_8256041C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm. r9,r9,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82560424
	if (!ctx.cr0.eq) goto loc_82560424;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825603e8
	goto loc_825603E8;
loc_82560408:
	// rlwinm r11,r7,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x8256041C;
	sub_824E4368(ctx, base);
loc_8256041C:
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x825603d0
	goto loc_825603D0;
loc_82560424:
	// mr r26,r21
	r26.u64 = r21.u64;
loc_82560428:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825604c4
	if (ctx.cr6.eq) goto loc_825604C4;
loc_82560440:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825604c4
	if (ctx.cr6.eq) goto loc_825604C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825604bc
	if (!ctx.cr0.eq) goto loc_825604BC;
	// rlwinm. r9,r10,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825604bc
	if (ctx.cr0.eq) goto loc_825604BC;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82560474
	if (ctx.cr6.eq) goto loc_82560474;
	// lwz r28,80(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8256047c
	goto loc_8256047C;
loc_82560474:
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8256047C:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82560490
	if (ctx.cr0.eq) goto loc_82560490;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x8256049c
	goto loc_8256049C;
loc_82560490:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
loc_8256049C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x825604AC;
	sub_825C2288(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x825604BC;
	sub_825C69A0(ctx, base);
loc_825604BC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82560440
	goto loc_82560440;
loc_825604C4:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c6828
	ctx.lr = 0x825604D4;
	sub_825C6828(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82560530
	if (ctx.cr6.eq) goto loc_82560530;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c6828
	ctx.lr = 0x825604EC;
	sub_825C6828(ctx, base);
	// lwz r29,80(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 80);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825604F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256053c
	if (ctx.cr6.eq) goto loc_8256053C;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x82560518
	if (ctx.cr6.eq) goto loc_82560518;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c6828
	ctx.lr = 0x82560518;
	sub_825C6828(ctx, base);
loc_82560518:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82560528
	if (!ctx.cr6.eq) goto loc_82560528;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_82560528:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x825604f8
	goto loc_825604F8;
loc_82560530:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
loc_8256053C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560550
	if (!ctx.cr0.eq) goto loc_82560550;
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 48);
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,48(r22)
	REX_STORE_U32(r22.u32 + 48, ctx.r11.u32);
loc_82560550:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stb r21,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r21.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq cr6,0x82560574
	if (ctx.cr6.eq) goto loc_82560574;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82558660
	ctx.lr = 0x82560570;
	sub_82558660(ctx, base);
	// b 0x825605a4
	goto loc_825605A4;
loc_82560574:
	// bl 0x8257dfd8
	ctx.lr = 0x82560578;
	sub_8257DFD8(ctx, base);
	// stb r24,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r24.u8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82558660
	ctx.lr = 0x82560594;
	sub_82558660(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82551458
	ctx.lr = 0x825605A4;
	sub_82551458(ctx, base);
loc_825605A4:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x8255f2d0
	ctx.lr = 0x825605BC;
	sub_8255F2D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825605d8
	if (ctx.cr0.eq) goto loc_825605D8;
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bne cr6,0x825605dc
	if (!ctx.cr6.eq) goto loc_825605DC;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x825605dc
	goto loc_825605DC;
loc_825605D8:
	// lbz r31,80(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_825605DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8256062c
	if (ctx.cr6.eq) goto loc_8256062C;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560600
	if (ctx.cr6.eq) goto loc_82560600;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x82560604
	if (!ctx.cr6.eq) goto loc_82560604;
loc_82560600:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82560604:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256062c
	if (!ctx.cr0.eq) goto loc_8256062C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8255f2d0
	ctx.lr = 0x82560620;
	sub_8255F2D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// or r31,r11,r10
	r31.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8256062C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256063c
	if (ctx.cr0.eq) goto loc_8256063C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8256063C;
	sub_8257DFD8(ctx, base);
loc_8256063C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82584AC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82584AC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82584b10
	if (ctx.cr6.eq) goto loc_82584B10;
loc_82584AE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82553828
	ctx.lr = 0x82584AEC;
	sub_82553828(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// rlwimi r10,r31,2,16,29
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0003);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwimi r10,r11,1,30,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFFFFFE0003) | (ctx.r10.u64 & 0x1FFFC);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82584ae4
	if (ctx.cr6.lt) goto loc_82584AE4;
loc_82584B10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82586D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82586D28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586D50;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586D60;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586D6C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586D7C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586D88;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// stw r9,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8258C420) {
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
	ctx.lr = 0x8258C428;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258c77c
	if (ctx.cr6.eq) goto loc_8258C77C;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r27,r5,40
	r27.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// lwz r11,564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lwzx r9,r27,r10
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r18,0
	r18.s64 = 0;
	// add r20,r27,r10
	r20.u64 = r27.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r30,r9,29,18,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// beq cr6,0x8258c488
	if (ctx.cr6.eq) goto loc_8258C488;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8258c48c
	goto loc_8258C48C;
loc_8258C488:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
loc_8258C48C:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258b258
	ctx.lr = 0x8258C4A8;
	sub_8258B258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8255db50
	ctx.lr = 0x8258C4B4;
	sub_8255DB50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82584600
	ctx.lr = 0x8258C4C0;
	sub_82584600(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,20(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82520410
	ctx.lr = 0x8258C4D4;
	sub_82520410(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r21,r18
	r21.u64 = r18.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8258c764
	if (ctx.cr6.eq) goto loc_8258C764;
loc_8258C4E8:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82589f28
	ctx.lr = 0x8258C4F0;
	sub_82589F28(ctx, base);
	// lwz r14,8(r16)
	r14.u64 = REX_LOAD_U32(r16.u32 + 8);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8258c7c4
	if (ctx.cr6.eq) goto loc_8258C7C4;
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258c514
	if (!ctx.cr6.eq) goto loc_8258C514;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82520608
	ctx.lr = 0x8258C514;
	sub_82520608(ctx, base);
loc_8258C514:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// mr r22,r18
	r22.u64 = r18.u64;
	// addic. r19,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r19.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq 0x8258c74c
	if (ctx.cr0.eq) goto loc_8258C74C;
	// rlwinm r17,r21,3,0,28
	r17.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
loc_8258C528:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r17,r9
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + ctx.r9.u32);
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258c784
	if (ctx.cr0.eq) goto loc_8258C784;
	// rlwinm r23,r11,5,28,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xF;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8258c57c
	if (ctx.cr6.eq) goto loc_8258C57C;
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
loc_8258C554:
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r8,r8,5,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xF;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r23.u32, ctx.xer);
	// beq cr6,0x8258c574
	if (ctx.cr6.eq) goto loc_8258C574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// blt cr6,0x8258c554
	if (ctx.cr6.lt) goto loc_8258C554;
loc_8258C574:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// blt cr6,0x8258c73c
	if (ctx.cr6.lt) goto loc_8258C73C;
loc_8258C57C:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmplw cr6,r22,r19
	ctx.cr6.compare<uint32_t>(r22.u32, r19.u32, ctx.xer);
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
	// stw r18,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r18.u32);
	// bge cr6,0x8258c7b8
	if (!ctx.cr6.lt) goto loc_8258C7B8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r28,r17
	r28.u64 = r17.u64;
	// addi r25,r11,-4
	r25.s64 = ctx.r11.s64 + -4;
loc_8258C5B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm r11,r11,5,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xF;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8258c628
	if (!ctx.cr6.eq) goto loc_8258C628;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// beq cr6,0x8258c7a0
	if (ctx.cr6.eq) goto loc_8258C7A0;
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 28);
	// add r4,r24,r21
	ctx.r4.u64 = r24.u64 + r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r30,116(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,120(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// bl 0x82580ab0
	ctx.lr = 0x8258C5FC;
	sub_82580AB0(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258C620;
	sub_82584ED0(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwu r3,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r25.u32 = ea;
loc_8258C628:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(r24.u32, r19.u32, ctx.xer);
	// blt cr6,0x8258c5b0
	if (ctx.cr6.lt) goto loc_8258C5B0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8258c7b8
	if (ctx.cr6.eq) goto loc_8258C7B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r26
	ctx.r11.u64 = r26.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r26.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258c7b8
	if (!ctx.cr6.eq) goto loc_8258C7B8;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm. r30,r11,2,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8258c6d0
	if (!ctx.cr0.eq) goto loc_8258C6D0;
	// lwz r4,16(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8258c6d0
	if (ctx.cr6.eq) goto loc_8258C6D0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825898c0
	ctx.lr = 0x8258C678;
	sub_825898C0(ctx, base);
	// b 0x8258c6a8
	goto loc_8258C6A8;
loc_8258C67C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258c7ac
	if (ctx.cr6.eq) goto loc_8258C7AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8258c7ac
	if (!ctx.cr6.eq) goto loc_8258C7AC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257f848
	ctx.lr = 0x8258C69C;
	sub_8257F848(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8258c6a8
	if (!ctx.cr6.eq) goto loc_8258C6A8;
	// li r30,1
	r30.s64 = 1;
loc_8258C6A8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82589980
	ctx.lr = 0x8258C6B0;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8258c67c
	if (!ctx.cr0.eq) goto loc_8258C67C;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r11,972
	ctx.r10.s64 = ctx.r11.s64 + 972;
	// lwz r10,976(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 976);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r9,976(r11)
	REX_STORE_U32(ctx.r11.u32 + 976, ctx.r9.u32);
loc_8258C6D0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584b18
	ctx.lr = 0x8258C6E8;
	sub_82584B18(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x8258c720
	if (!ctx.cr6.gt) goto loc_8258C720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// bl 0x82580870
	ctx.lr = 0x8258C71C;
	sub_82580870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8258C720:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,356(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bd768
	ctx.lr = 0x8258C734;
	sub_825BD768(ctx, base);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,332(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_8258C73C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r17,r17,8
	r17.s64 = r17.s64 + 8;
	// cmplw cr6,r22,r19
	ctx.cr6.compare<uint32_t>(r22.u32, r19.u32, ctx.xer);
	// blt cr6,0x8258c528
	if (ctx.cr6.lt) goto loc_8258C528;
loc_8258C74C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r21,r19,r21
	r21.u64 = r19.u64 + r21.u64;
	// stw r18,4(r16)
	REX_STORE_U32(r16.u32 + 4, r18.u32);
	// subf. r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne 0x8258c4e8
	if (!ctx.cr0.eq) goto loc_8258C4E8;
loc_8258C764:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82559f10
	ctx.lr = 0x8258C76C;
	sub_82559F10(ctx, base);
	// addi r11,r31,972
	ctx.r11.s64 = r31.s64 + 972;
	// lwz r11,1004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1004);
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// stw r16,1004(r31)
	REX_STORE_U32(r31.u32 + 1004, r16.u32);
loc_8258C77C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
loc_8258C784:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257ecd0
	ctx.lr = 0x8258C790;
	sub_8257ECD0(ctx, base);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4503
	ctx.r4.s64 = 4503;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C7A0;
	sub_824E4368(ctx, base);
loc_8258C7A0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C7AC;
	sub_824E4368(ctx, base);
loc_8258C7AC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C7B8;
	sub_824E4368(ctx, base);
loc_8258C7B8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C7C4;
	sub_824E4368(ctx, base);
loc_8258C7C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8258c7e8
	if (!ctx.cr6.eq) goto loc_8258C7E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-18364
	r28.s64 = ctx.r11.s64 + -18364;
	// b 0x8258c854
	goto loc_8258C854;
loc_8258C7E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-18388
	ctx.r4.s64 = ctx.r11.s64 + -18388;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x826a1e70
	ctx.lr = 0x8258C7FC;
	sub_826A1E70(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257f6f8
	ctx.lr = 0x8258C808;
	sub_8257F6F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258C810:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8258c810
	if (!ctx.cr6.eq) goto loc_8258C810;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,22
	r30.s64 = ctx.r11.s64 + 22;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f7e68
	ctx.lr = 0x8258C840;
	sub_824F7E68(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1a58
	ctx.lr = 0x8258C854;
	sub_826A1A58(ctx, base);
loc_8258C854:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257e830
	ctx.lr = 0x8258C85C;
	sub_8257E830(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3503
	ctx.r4.s64 = 3503;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C870;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825B3E30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r3,1444
	ctx.r11.s64 = ctx.r3.s64 + 1444;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B3E3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,2136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm r9,r9,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// stb r9,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,2136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm r9,r9,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// stb r9,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,2136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm r9,r9,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// stb r9,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bdnz 0x825b3e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B3E3C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B4A28) {
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
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x825B4A30;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16672(r1)
	ea = -16672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,16692(r1)
	REX_STORE_U32(ctx.r1.u32 + 16692, ctx.r3.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,16700(r1)
	REX_STORE_U32(ctx.r1.u32 + 16700, ctx.r4.u32);
	// stw r6,16716(r1)
	REX_STORE_U32(ctx.r1.u32 + 16716, ctx.r6.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,16708(r1)
	REX_STORE_U32(ctx.r1.u32 + 16708, ctx.r5.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r7,16724(r1)
	REX_STORE_U32(ctx.r1.u32 + 16724, ctx.r7.u32);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bl 0x825b4030
	ctx.lr = 0x825B4A70;
	sub_825B4030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b40e0
	ctx.lr = 0x825B4A78;
	sub_825B40E0(ctx, base);
	// stw r28,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, r28.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b4158
	ctx.lr = 0x825B4A8C;
	sub_825B4158(ctx, base);
	// stw r3,1488(r31)
	REX_STORE_U32(r31.u32 + 1488, ctx.r3.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x826a4760
	ctx.lr = 0x825B4A98;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// lwz r31,16692(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 16692);
	// lwz r26,16708(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 16708);
	// li r25,0
	r25.s64 = 0;
	// lwz r27,16700(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 16700);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r24,128(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bne 0x825b4c74
	if (!ctx.cr0.eq) goto loc_825B4C74;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1384(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 1384);
	// bl 0x825a1088
	ctx.lr = 0x825B4AC0;
	sub_825A1088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x825b4ad8
	if (ctx.cr0.eq) goto loc_825B4AD8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-3672
	ctx.r4.s64 = ctx.r11.s64 + -3672;
	// b 0x825b4ae0
	goto loc_825B4AE0;
loc_825B4AD8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-3720
	ctx.r4.s64 = ctx.r11.s64 + -3720;
loc_825B4AE0:
	// bl 0x82130e88
	ctx.lr = 0x825B4AE4;
	sub_82130E88(ctx, base);
	// lwz r3,16716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 16716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b4fe0
	if (ctx.cr6.eq) goto loc_825B4FE0;
	// lwz r4,16724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 16724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4fe0
	if (ctx.cr6.eq) goto loc_825B4FE0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x825de908
	ctx.lr = 0x825B4B04;
	sub_825DE908(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b4408
	ctx.lr = 0x825B4B14;
	sub_825B4408(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825b4b30
	if (ctx.cr6.eq) goto loc_825B4B30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825de868
	ctx.lr = 0x825B4B24;
	sub_825DE868(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825B4B30;
	sub_825B3528(ctx, base);
loc_825B4B30:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,1620(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1620);
	// lwz r4,1540(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// bl 0x824f0470
	ctx.lr = 0x825B4B40;
	sub_824F0470(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-9588
	r29.s64 = ctx.r10.s64 + -9588;
	// addi r28,r9,-4368
	r28.s64 = ctx.r9.s64 + -4368;
	// beq 0x825b4b78
	if (ctx.cr0.eq) goto loc_825B4B78;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,838
	ctx.r7.s64 = 838;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B4B78;
	sub_824EA978(ctx, base);
loc_825B4B78:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,1624(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1624);
	// lwz r4,1544(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// bl 0x824f0470
	ctx.lr = 0x825B4B88;
	sub_824F0470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b4ba8
	if (ctx.cr0.eq) goto loc_825B4BA8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,842
	ctx.r7.s64 = 842;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B4BA8;
	sub_824EA978(ctx, base);
loc_825B4BA8:
	// lwz r30,1540(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r29,r11,25636
	r29.s64 = ctx.r11.s64 + 25636;
	// addi r28,r10,-14552
	r28.s64 = ctx.r10.s64 + -14552;
	// beq cr6,0x825b4c14
	if (ctx.cr6.eq) goto loc_825B4C14;
	// lbz r11,2129(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2129);
	// stw r25,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, r25.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b4c14
	if (ctx.cr0.eq) goto loc_825B4C14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-3740
	ctx.r4.s64 = ctx.r11.s64 + -3740;
	// bl 0x82130e88
	ctx.lr = 0x825B4BE4;
	sub_82130E88(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826a2e60
	ctx.lr = 0x825B4BF4;
	sub_826A2E60(ctx, base);
	// stw r31,8352(r1)
	REX_STORE_U32(ctx.r1.u32 + 8352, r31.u32);
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,1620(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1620);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824ece98
	ctx.lr = 0x825B4C10;
	sub_824ECE98(ctx, base);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
loc_825B4C14:
	// lwz r30,1544(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825b4c74
	if (ctx.cr6.eq) goto loc_825B4C74;
	// lbz r11,2129(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2129);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, ctx.r10.u32);
	// beq 0x825b4c74
	if (ctx.cr0.eq) goto loc_825B4C74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-3760
	ctx.r4.s64 = ctx.r11.s64 + -3760;
	// bl 0x82130e88
	ctx.lr = 0x825B4C44;
	sub_82130E88(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,8384
	ctx.r3.s64 = ctx.r1.s64 + 8384;
	// bl 0x826a2e60
	ctx.lr = 0x825B4C54;
	sub_826A2E60(ctx, base);
	// stw r31,16576(r1)
	REX_STORE_U32(ctx.r1.u32 + 16576, r31.u32);
	// stw r28,8368(r1)
	REX_STORE_U32(ctx.r1.u32 + 8368, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1624);
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x824ece98
	ctx.lr = 0x825B4C70;
	sub_824ECE98(ctx, base);
	// stw r29,8368(r1)
	REX_STORE_U32(ctx.r1.u32 + 8368, r29.u32);
loc_825B4C74:
	// lwz r4,1620(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1620);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4c90
	if (ctx.cr6.eq) goto loc_825B4C90;
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// lwz r3,1444(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B4C90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B4C90:
	// stw r25,1540(r31)
	REX_STORE_U32(r31.u32 + 1540, r25.u32);
	// stw r25,1620(r31)
	REX_STORE_U32(r31.u32 + 1620, r25.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b4cb4
	if (ctx.cr6.eq) goto loc_825B4CB4;
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// lwz r3,1444(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B4CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B4CB4:
	// stw r25,1624(r31)
	REX_STORE_U32(r31.u32 + 1624, r25.u32);
	// stw r25,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, r25.u32);
	// lwz r28,1364(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 1364);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x825b4fc8
	if (!ctx.cr6.eq) goto loc_825B4FC8;
	// lbz r11,2025(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2025);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b4d00
	if (ctx.cr0.eq) goto loc_825B4D00;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d00
	if (!ctx.cr0.eq) goto loc_825B4D00;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d00
	if (!ctx.cr0.eq) goto loc_825B4D00;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d00
	if (!ctx.cr0.eq) goto loc_825B4D00;
	// li r29,2
	r29.s64 = 2;
loc_825B4D00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b4d68
	if (!ctx.cr6.eq) goto loc_825B4D68;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d30
	if (!ctx.cr0.eq) goto loc_825B4D30;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b4d30
	if (ctx.cr0.eq) goto loc_825B4D30;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d30
	if (!ctx.cr0.eq) goto loc_825B4D30;
	// li r29,3
	r29.s64 = 3;
loc_825B4D30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b4d68
	if (!ctx.cr6.eq) goto loc_825B4D68;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b4d60
	if (ctx.cr0.eq) goto loc_825B4D60;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d60
	if (!ctx.cr0.eq) goto loc_825B4D60;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d60
	if (!ctx.cr0.eq) goto loc_825B4D60;
	// li r29,4
	r29.s64 = 4;
loc_825B4D60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b4d98
	if (ctx.cr6.eq) goto loc_825B4D98;
loc_825B4D68:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b4d90
	if (ctx.cr0.eq) goto loc_825B4D90;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d90
	if (!ctx.cr0.eq) goto loc_825B4D90;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4d90
	if (!ctx.cr0.eq) goto loc_825B4D90;
	// li r29,5
	r29.s64 = 5;
loc_825B4D90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b4df0
	if (!ctx.cr6.eq) goto loc_825B4DF0;
loc_825B4D98:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b4dc0
	if (ctx.cr0.eq) goto loc_825B4DC0;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b4dc0
	if (ctx.cr0.eq) goto loc_825B4DC0;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825b4dc0
	if (!ctx.cr0.eq) goto loc_825B4DC0;
	// li r29,6
	r29.s64 = 6;
loc_825B4DC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b4df0
	if (!ctx.cr6.eq) goto loc_825B4DF0;
	// lbz r11,2026(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2026);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825b4df0
	if (!ctx.cr0.eq) goto loc_825B4DF0;
	// lbz r11,2027(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2027);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825b4df0
	if (!ctx.cr0.eq) goto loc_825B4DF0;
	// lbz r11,2028(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b4df0
	if (ctx.cr0.eq) goto loc_825B4DF0;
	// li r29,7
	r29.s64 = 7;
loc_825B4DF0:
	// lwz r11,1864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1864);
	// lbz r10,2024(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2024);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b4e08
	if (ctx.cr0.eq) goto loc_825B4E08;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_825B4E08:
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// lwz r10,1784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x825b4e20
	if (ctx.cr6.gt) goto loc_825B4E20;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_825B4E20:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r25,1940(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 1940);
	// li r4,1978
	ctx.r4.s64 = 1978;
	// lwz r23,1944(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r5,1700(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1700);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// and r22,r10,r11
	r22.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4E44;
	sub_824F07B0(ctx, base);
	// li r4,1978
	ctx.r4.s64 = 1978;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,1700(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1700);
	// bl 0x824f07b0
	ctx.lr = 0x825B4E54;
	sub_824F07B0(ctx, base);
	// li r4,1979
	ctx.r4.s64 = 1979;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,1704(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1704);
	// bl 0x824f07b0
	ctx.lr = 0x825B4E64;
	sub_824F07B0(ctx, base);
	// li r4,1979
	ctx.r4.s64 = 1979;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,1704(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1704);
	// bl 0x824f07b0
	ctx.lr = 0x825B4E74;
	sub_824F07B0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4E84;
	sub_824F07B0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4E94;
	sub_824F07B0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4EA4;
	sub_824F07B0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4EB4;
	sub_824F07B0(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 2029);
	// bl 0x824f07b0
	ctx.lr = 0x825B4EC4;
	sub_824F07B0(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 2029);
	// bl 0x824f07b0
	ctx.lr = 0x825B4ED4;
	sub_824F07B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4EE4;
	sub_824F07B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4EF4;
	sub_824F07B0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F04;
	sub_824F07B0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F14;
	sub_824F07B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F24;
	sub_824F07B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F34;
	sub_824F07B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F44;
	sub_824F07B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F54;
	sub_824F07B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F64;
	sub_824F07B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f07b0
	ctx.lr = 0x825B4F74;
	sub_824F07B0(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2032);
	// bl 0x824f07b0
	ctx.lr = 0x825B4F84;
	sub_824F07B0(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2032);
	// bl 0x824f07b0
	ctx.lr = 0x825B4F94;
	sub_824F07B0(ctx, base);
	// li r4,1989
	ctx.r4.s64 = 1989;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r5,2030(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 2030);
	// bl 0x824f07b0
	ctx.lr = 0x825B4FA4;
	sub_824F07B0(ctx, base);
	// li r4,1989
	ctx.r4.s64 = 1989;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r5,2030(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 2030);
	// bl 0x824f07b0
	ctx.lr = 0x825B4FB4;
	sub_824F07B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x82130e88
	ctx.lr = 0x825B4FC4;
	sub_82130E88(ctx, base);
	// bl 0x825b3ec0
	ctx.lr = 0x825B4FC8;
	sub_825B3EC0(ctx, base);
loc_825B4FC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825b3ba8
	ctx.lr = 0x825B4FD4;
	sub_825B3BA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,16672
	ctx.r1.s64 = ctx.r1.s64 + 16672;
	// b 0x826a1cf0
	return;
loc_825B4FE0:
	// li r11,21
	ctx.r11.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x826a4440
	ctx.lr = 0x825B4FF4;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_825CFC60) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x825CFC68;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x825CFC70;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825cfc9c
	if (!ctx.cr6.eq) goto loc_825CFC9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825d00a4
	goto loc_825D00A4;
loc_825CFC9C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cfccc
	if (ctx.cr6.lt) goto loc_825CFCCC;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825cfccc
	if (!ctx.cr6.lt) goto loc_825CFCCC;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cfccc
	if (ctx.cr6.lt) goto loc_825CFCCC;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d00a0
	if (ctx.cr6.lt) goto loc_825D00A0;
loc_825CFCCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cf930
	ctx.lr = 0x825CFCD4;
	sub_825CF930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825d00a4
	if (ctx.cr0.lt) goto loc_825D00A4;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// beq cr6,0x825d00a0
	if (ctx.cr6.eq) goto loc_825D00A0;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,128(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,75
	ctx.r5.u64 = ctx.r5.u64 | 75;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// blt cr6,0x825d00a0
	if (ctx.cr6.lt) goto loc_825D00A0;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x825cffc0
	if (!ctx.cr6.gt) goto loc_825CFFC0;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,74
	ctx.r8.u64 = ctx.r8.u64 | 74;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x825d00a0
	if (!ctx.cr6.gt) goto loc_825D00A0;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r8,r8,76
	ctx.r8.u64 = ctx.r8.u64 | 76;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x825d00a0
	if (ctx.cr6.gt) goto loc_825D00A0;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825d00a0
	if (!ctx.cr6.lt) goto loc_825D00A0;
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f11,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f12,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f29,20344(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20344);
	f29.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f30,20340(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20340);
	f30.f64 = double(temp.f32);
	// lfs f31,20336(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20336);
	f31.f64 = double(temp.f32);
	// lfs f4,20332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20332);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,20328(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20328);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,19036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19036);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,5436(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 5436);
	ctx.f3.f64 = double(temp.f32);
loc_825CFDC8:
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// rlwinm r6,r8,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// lwz r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 168);
	// rlwinm r29,r7,8,16,23
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// stfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// rlwinm r28,r7,24,8,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r29,r28
	ctx.r4.u64 = r29.u64 | r28.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r30,r8,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// or r8,r30,r8
	ctx.r8.u64 = r30.u64 | ctx.r8.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// rlwinm r8,r7,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f28,f0,f4
	f28.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fsubs f13,f28,f9
	ctx.f13.f64 = double(float(f28.f64 - ctx.f9.f64));
	// fadds f0,f28,f8
	ctx.f0.f64 = double(float(f28.f64 + ctx.f8.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 + f28.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x825cfed4
	if (!ctx.cr6.lt) goto loc_825CFED4;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x825cfee0
	goto loc_825CFEE0;
loc_825CFED4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x825cfee0
	if (!ctx.cr6.gt) goto loc_825CFEE0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_825CFEE0:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x825cfef4
	if (!ctx.cr6.lt) goto loc_825CFEF4;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x825cff00
	goto loc_825CFF00;
loc_825CFEF4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x825cff00
	if (!ctx.cr6.gt) goto loc_825CFF00;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_825CFF00:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x825cff14
	if (!ctx.cr6.lt) goto loc_825CFF14;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x825cff20
	goto loc_825CFF20;
loc_825CFF14:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x825cff20
	if (!ctx.cr6.gt) goto loc_825CFF20;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_825CFF20:
	// fmuls f13,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsubs f13,f9,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x825cff58
	if (!ctx.cr6.lt) goto loc_825CFF58;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x825cff64
	goto loc_825CFF64;
loc_825CFF58:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x825cff64
	if (!ctx.cr6.gt) goto loc_825CFF64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_825CFF64:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x825cff78
	if (!ctx.cr6.lt) goto loc_825CFF78;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x825cff84
	goto loc_825CFF84;
loc_825CFF78:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x825cff84
	if (!ctx.cr6.gt) goto loc_825CFF84;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_825CFF84:
	// stfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x825cff98
	if (!ctx.cr6.lt) goto loc_825CFF98;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x825cffa4
	goto loc_825CFFA4;
loc_825CFF98:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x825cffa4
	if (!ctx.cr6.gt) goto loc_825CFFA4;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_825CFFA4:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stfsu f10,32(r11)
	ctx.fpscr.disableFlushMode();
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825cfdc8
	if (ctx.cr6.lt) goto loc_825CFDC8;
	// b 0x825d00a0
	goto loc_825D00A0;
loc_825CFFC0:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d00a0
	if (!ctx.cr6.lt) goto loc_825D00A0;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lfs f0,20328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_825CFFE8:
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// lhzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825cffe8
	if (ctx.cr6.lt) goto loc_825CFFE8;
loc_825D00A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D00A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x825D00B0;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F3D88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825F3D90;
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f3f60
	if (!ctx.cr0.eq) goto loc_825F3F60;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f3f60
	if (!ctx.cr0.eq) goto loc_825F3F60;
	// addi r11,r5,244
	ctx.r11.s64 = ctx.r5.s64 + 244;
	// addi r10,r6,244
	ctx.r10.s64 = ctx.r6.s64 + 244;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r6,260
	ctx.r9.s64 = ctx.r6.s64 + 260;
	// addi r8,r5,260
	ctx.r8.s64 = ctx.r5.s64 + 260;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r29,r6,69
	r29.s64 = ctx.r6.s64 + 69;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r28,r5,69
	r28.s64 = ctx.r5.s64 + 69;
	// stwx r31,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r31.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r30,r9,r3
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r31,r28,2,0,29
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r3
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stwx r29,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r29.u32);
	// stwx r30,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r30.u32);
loc_825F3E0C:
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + ctx.r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r30,r8,r3
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stwx r7,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// stwx r30,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r30.u32);
	// bdnz 0x825f3e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F3E0C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r6,85
	ctx.r9.s64 = ctx.r6.s64 + 85;
	// addi r7,r5,85
	ctx.r7.s64 = ctx.r5.s64 + 85;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825F3E50:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r31,r9,r3
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r30,r10,r3
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r31,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r31.u32);
	// stwx r30,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r30.u32);
	// bdnz 0x825f3e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F3E50;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r6,101
	ctx.r9.s64 = ctx.r6.s64 + 101;
	// addi r7,r5,101
	ctx.r7.s64 = ctx.r5.s64 + 101;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825F3E94:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r31,r9,r3
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r30,r10,r3
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r31,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r31.u32);
	// stwx r30,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r30.u32);
	// bdnz 0x825f3e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F3E94;
	// addi r11,r5,228
	ctx.r11.s64 = ctx.r5.s64 + 228;
	// addi r10,r6,228
	ctx.r10.s64 = ctx.r6.s64 + 228;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r11,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// beq cr6,0x825f3f00
	if (ctx.cr6.eq) goto loc_825F3F00;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f3f00
	if (ctx.cr6.eq) goto loc_825F3F00;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r5.u32);
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
loc_825F3F00:
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f3f28
	if (ctx.cr6.eq) goto loc_825F3F28;
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// stw r6,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3f28
	if (ctx.cr6.eq) goto loc_825F3F28;
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_825F3F28:
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3f44
	if (ctx.cr6.eq) goto loc_825F3F44;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x825f3f44
	if (!ctx.cr6.eq) goto loc_825F3F44;
	// stw r5,2076(r4)
	REX_STORE_U32(ctx.r4.u32 + 2076, ctx.r5.u32);
loc_825F3F44:
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3f60
	if (ctx.cr6.eq) goto loc_825F3F60;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x825f3f60
	if (!ctx.cr6.eq) goto loc_825F3F60;
	// stw r6,2076(r4)
	REX_STORE_U32(ctx.r4.u32 + 2076, ctx.r6.u32);
loc_825F3F60:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825FAEC0) {
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
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FAEE0;
	sub_825FA990(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,31536
	ctx.r10.s64 = ctx.r10.s64 + 31536;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_825FBC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FBC10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1452(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FBC2C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fbc4c
	if (ctx.cr0.eq) goto loc_825FBC4C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb768
	ctx.lr = 0x825FBC48;
	sub_825FB768(ctx, base);
	// b 0x825fbc50
	goto loc_825FBC50;
loc_825FBC4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBC50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD7A0) {
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
	// bl 0x825fcd38
	ctx.lr = 0x825FD7B8;
	sub_825FCD38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30920
	ctx.r11.s64 = ctx.r11.s64 + -30920;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826077C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826077D0;
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
	ctx.lr = 0x826077F0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607814
	if (ctx.cr0.eq) goto loc_82607814;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8de0
	ctx.lr = 0x82607810;
	sub_825F8DE0(ctx, base);
	// b 0x82607818
	goto loc_82607818;
loc_82607814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82609578) {
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
	ctx.lr = 0x82609580;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82609748
	if (!ctx.cr0.gt) goto loc_82609748;
	// li r25,0
	r25.s64 = 0;
loc_826095A0:
	// addi r24,r27,1
	r24.s64 = r27.s64 + 1;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82609738
	if (!ctx.cr6.lt) goto loc_82609738;
	// addi r26,r25,4
	r26.s64 = r25.s64 + 4;
loc_826095B4:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826095c8
	if (!ctx.cr6.lt) goto loc_826095C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x826095d4
	goto loc_826095D4;
loc_826095C8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826095D4;
	sub_825F7718(ctx, base);
loc_826095D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x826095f8
	if (!ctx.cr6.lt) goto loc_826095F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x82609604
	goto loc_82609604;
loc_826095F8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82609604;
	sub_825F7718(ctx, base);
loc_82609604:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r29,r11,r30
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// bge cr6,0x8260962c
	if (!ctx.cr6.lt) goto loc_8260962C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x82609638
	goto loc_82609638;
loc_8260962C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82609638;
	sub_825F7718(ctx, base);
loc_82609638:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bge cr6,0x8260965c
	if (!ctx.cr6.lt) goto loc_8260965C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x82609668
	goto loc_82609668;
loc_8260965C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82609668;
	sub_825F7718(ctx, base);
loc_82609668:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82609724
	if (!ctx.cr6.lt) goto loc_82609724;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82609698
	if (!ctx.cr6.lt) goto loc_82609698;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x826096a4
	goto loc_826096A4;
loc_82609698:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826096A4;
	sub_825F7718(ctx, base);
loc_826096A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826096c0
	if (!ctx.cr6.lt) goto loc_826096C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// b 0x826096d0
	goto loc_826096D0;
loc_826096C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826096CC;
	sub_825F7718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826096D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826096e8
	if (!ctx.cr6.lt) goto loc_826096E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x826096f4
	goto loc_826096F4;
loc_826096E8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826096F4;
	sub_825F7718(ctx, base);
loc_826096F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82609714
	if (!ctx.cr6.lt) goto loc_82609714;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x82609720
	goto loc_82609720;
loc_82609714:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82609720;
	sub_825F7718(ctx, base);
loc_82609720:
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82609724:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826095b4
	if (ctx.cr6.lt) goto loc_826095B4;
loc_82609738:
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// blt cr6,0x826095a0
	if (ctx.cr6.lt) goto loc_826095A0;
loc_82609748:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826128B0) {
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
	// bl 0x82612838
	ctx.lr = 0x826128D0;
	sub_82612838(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826128e0
	if (ctx.cr0.eq) goto loc_826128E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826128E0;
	sub_8264C3D0(ctx, base);
loc_826128E0:
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

DEFINE_REX_FUNC(sub_82613E20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82613E28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,500
	ctx.r3.s64 = ctx.r3.s64 + 500;
	// bl 0x8260c0a0
	ctx.lr = 0x82613E38;
	sub_8260C0A0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82613eac
	if (ctx.cr0.eq) goto loc_82613EAC;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8260b5b8
	ctx.lr = 0x82613E5C;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82613ea4
	if (ctx.cr0.eq) goto loc_82613EA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,540
	ctx.r3.s64 = r30.s64 + 540;
	// bl 0x82613af8
	ctx.lr = 0x82613E70;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82613e84
	if (!ctx.cr0.eq) goto loc_82613E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82613E80;
	sub_8264C3D0(ctx, base);
	// b 0x82613ea4
	goto loc_82613EA4;
loc_82613E84:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 472);
	// bl 0x82610918
	ctx.lr = 0x82613EA0;
	sub_82610918(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82613EA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82613EAC;
	sub_8264C3D0(ctx, base);
loc_82613EAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826166F0) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8261672c
	if (!ctx.cr6.lt) goto loc_8261672C;
	// bl 0x82793a84
	ctx.lr = 0x82616720;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8261672c
	if (ctx.cr6.eq) goto loc_8261672C;
	// li r30,1
	r30.s64 = 1;
loc_8261672C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82616740
	if (ctx.cr6.eq) goto loc_82616740;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826167c4
	if (ctx.cr6.eq) goto loc_826167C4;
loc_82616740:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826167b4
	if (ctx.cr6.gt) goto loc_826167B4;
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
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x8260b5b8
	ctx.lr = 0x82616770;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826167c4
	if (ctx.cr0.eq) goto loc_826167C4;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82616784:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82616784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82616784;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// b 0x826167c4
	goto loc_826167C4;
loc_826167B4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x823ecbd8
	ctx.lr = 0x826167C0;
	sub_823ECBD8(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_826167C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826167dc
	if (ctx.cr6.eq) goto loc_826167DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826167e0
	goto loc_826167E0;
loc_826167DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826167E0:
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

DEFINE_REX_FUNC(sub_8261DC48) {
	REX_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8261dca4
	if (!ctx.cr6.eq) goto loc_8261DCA4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x8261dc80
	if (ctx.cr6.eq) goto loc_8261DC80;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// beq cr6,0x8261dc80
	if (ctx.cr6.eq) goto loc_8261DC80;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x8261dc80
	if (ctx.cr6.eq) goto loc_8261DC80;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8261dcd4
	if (!ctx.cr6.eq) goto loc_8261DCD4;
loc_8261DC80:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8261dcc4
	if (ctx.cr6.eq) goto loc_8261DCC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8261dcc4
	if (ctx.cr6.eq) goto loc_8261DCC4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8261dcc4
	if (ctx.cr6.eq) goto loc_8261DCC4;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// blr 
	return;
loc_8261DCA4:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8261dcd4
	if (!ctx.cr6.eq) goto loc_8261DCD4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8261dcd4
	if (!ctx.cr6.eq) goto loc_8261DCD4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8261dcd4
	if (!ctx.cr6.eq) goto loc_8261DCD4;
loc_8261DCC4:
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8261DCD4:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626780) {
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
	// bl 0x82626588
	ctx.lr = 0x826267A0;
	sub_82626588(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826267b0
	if (ctx.cr0.eq) goto loc_826267B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826267B0;
	sub_8264C3D0(ctx, base);
loc_826267B0:
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

DEFINE_REX_FUNC(sub_82627460) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627468;
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
	ctx.lr = 0x8262748C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826284f8
	ctx.lr = 0x8262749C;
	sub_826284F8(ctx, base);
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
	ctx.lr = 0x826274B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82628A20) {
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
	// bl 0x82628910
	ctx.lr = 0x82628A40;
	sub_82628910(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82628a84
	if (ctx.cr0.eq) goto loc_82628A84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82628a70
	if (ctx.cr6.eq) goto loc_82628A70;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82628a74
	goto loc_82628A74;
loc_82628A70:
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
loc_82628A74:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_82628A84:
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

DEFINE_REX_FUNC(sub_8262D830) {
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
	ctx.lr = 0x8262D838;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,24(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r22,32(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8262d864
	if (ctx.cr6.eq) goto loc_8262D864;
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_8262D864:
	// lwz r24,12(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8262d940
	if (!ctx.cr6.eq) goto loc_8262D940;
	// divwu. r10,r10,r26
	ctx.r10.u64 = uint32_t(r26.u32 ? ctx.r10.u32 / r26.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8262da40
	if (ctx.cr0.eq) goto loc_8262DA40;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r29,r26,1,0,30
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,15504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	ctx.f12.f64 = double(temp.f32);
loc_8262D88C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8262d92c
	if (ctx.cr6.eq) goto loc_8262D92C;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// std r9,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r9.u64);
	// lfd f0,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r31,r6,108
	r31.s64 = ctx.r6.s64 + 108;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
loc_8262D8BC:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// ble cr6,0x8262d904
	if (!ctx.cr6.gt) goto loc_8262D904;
	// addi r7,r26,-1
	ctx.r7.s64 = r26.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8262D8E0:
	// lhau r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r9.u32 = ea;
	// lfsu f13,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// std r7,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r7.u64);
	// lfd f10,-104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bdnz 0x8262d8e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262D8E0;
loc_8262D904:
	// dcbt r0,r3
	// dcbt r0,r31
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8262d91c
	if (ctx.cr6.eq) goto loc_8262D91C;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8262D91C:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8262d8bc
	if (!ctx.cr0.eq) goto loc_8262D8BC;
loc_8262D92C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// bne 0x8262d88c
	if (!ctx.cr0.eq) goto loc_8262D88C;
	// b 0x8262da40
	goto loc_8262DA40;
loc_8262D940:
	// divwu. r23,r10,r26
	r23.u64 = uint32_t(r26.u32 ? ctx.r10.u32 / r26.u32 : 0);
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x8262da40
	if (ctx.cr0.eq) goto loc_8262DA40;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r27,r26,1,0,30
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r28,2,0,29
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,15504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15504);
	ctx.f10.f64 = double(temp.f32);
loc_8262D960:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8262da2c
	if (ctx.cr6.eq) goto loc_8262DA2C;
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
	// std r10,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r10.u64);
	// addi r30,r6,108
	r30.s64 = ctx.r6.s64 + 108;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// lfd f0,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfd f0,-112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
loc_8262D9A8:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// ble cr6,0x8262da04
	if (!ctx.cr6.gt) goto loc_8262DA04;
	// addi r5,r26,-1
	ctx.r5.s64 = r26.s64 + -1;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8262D9D8:
	// lhau r5,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r8.u32 = ea;
	// lfsu f12,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// std r5,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r5.u64);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f13,f13,f11,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f12.f64)));
	// lfd f12,-96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// bdnz 0x8262d9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262D9D8;
loc_8262DA04:
	// dcbt r0,r31
	// dcbt r0,r30
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8262da1c
	if (ctx.cr6.eq) goto loc_8262DA1C;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8262DA1C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x8262d9a8
	if (!ctx.cr0.eq) goto loc_8262D9A8;
loc_8262DA2C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// add r6,r25,r6
	ctx.r6.u64 = r25.u64 + ctx.r6.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// blt cr6,0x8262d960
	if (ctx.cr6.lt) goto loc_8262D960;
loc_8262DA40:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8263F390) {
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
	ctx.lr = 0x8263F398;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r25,r29
	r25.u64 = r29.u64;
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8263f460
	if (!ctx.cr6.eq) goto loc_8263F460;
	// lwz r11,744(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f460
	if (ctx.cr6.eq) goto loc_8263F460;
	// li r24,1
	r24.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r24.u32);
	// stw r24,572(r26)
	REX_STORE_U32(r26.u32 + 572, r24.u32);
	// lwz r30,120(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826a2e60
	ctx.lr = 0x8263F3F0;
	sub_826A2E60(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r24,20(r30)
	REX_STORE_U32(r30.u32 + 20, r24.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8263F418;
	sub_826A2E60(ctx, base);
	// lhz r9,34(r26)
	ctx.r9.u64 = REX_LOAD_U16(r26.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263F430;
	sub_826A2E60(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 148);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// stw r6,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3704(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_8263F460:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8263f854
	if (ctx.cr6.eq) goto loc_8263F854;
	// li r24,1
	r24.s64 = 1;
	// li r23,2
	r23.s64 = 2;
	// li r22,3
	r22.s64 = 3;
	// li r19,4
	r19.s64 = 4;
	// li r20,5
	r20.s64 = 5;
	// li r21,8
	r21.s64 = 8;
loc_8263F484:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8263f848
	if (ctx.cr6.gt) goto loc_8263F848;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8263f59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F59C;
	// bdzf 4*cr6+eq,0x8263f5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F5D0;
	// bdzf 4*cr6+eq,0x8263f674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F674;
	// bdzf 4*cr6+eq,0x8263f6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F6FC;
	// bdzf 4*cr6+eq,0x8263f780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F780;
	// bdzf 4*cr6+eq,0x8263f780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F780;
	// bdzf 4*cr6+eq,0x8263f848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F848;
	// bne cr6,0x8263f7cc
	if (!ctx.cr6.eq) goto loc_8263F7CC;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lhz r10,580(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8263f50c
	if (ctx.cr6.eq) goto loc_8263F50C;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8263F4F0:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8263f4f0
	if (ctx.cr6.lt) goto loc_8263F4F0;
loc_8263F50C:
	// lhz r11,580(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 580);
	// mr r27,r29
	r27.u64 = r29.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8263f594
	if (!ctx.cr6.gt) goto loc_8263F594;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8263F524:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// stwx r29,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826a2e60
	ctx.lr = 0x8263F544;
	sub_826A2E60(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8263F564;
	sub_826A2E60(ctx, base);
	// lhz r10,34(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263F57C;
	sub_826A2E60(ctx, base);
	// lhz r8,580(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 580);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r28,r28,152
	r28.s64 = r28.s64 + 152;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8263f524
	if (ctx.cr6.lt) goto loc_8263F524;
loc_8263F594:
	// stw r24,88(r31)
	REX_STORE_U32(r31.u32 + 88, r24.u32);
	// b 0x8263f848
	goto loc_8263F848;
loc_8263F59C:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x8263F5B0;
	sub_82638D80(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// b 0x8263f844
	goto loc_8263F844;
loc_8263F5D0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f5fc
	if (!ctx.cr6.eq) goto loc_8263F5FC;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263f860
	if (ctx.cr6.eq) goto loc_8263F860;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f5fc
	if (!ctx.cr6.eq) goto loc_8263F5FC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8263f87c
	if (ctx.cr6.eq) goto loc_8263F87C;
loc_8263F5FC:
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826f1f78
	ctx.lr = 0x8263F608;
	sub_826F1F78(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263f030
	ctx.lr = 0x8263F61C;
	sub_8263F030(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263ea50
	ctx.lr = 0x8263F630;
	sub_8263EA50(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r22,88(r31)
	REX_STORE_U32(r31.u32 + 88, r22.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// stw r5,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// b 0x8263f848
	goto loc_8263F848;
loc_8263F674:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(152));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8263f6f4
	if (!ctx.cr6.eq) goto loc_8263F6F4;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8263f6f4
	if (!ctx.cr6.lt) goto loc_8263F6F4;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_8263F6A4:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263F6B8;
	sub_82638D80(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r6.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8263f6a4
	if (ctx.cr6.lt) goto loc_8263F6A4;
loc_8263F6F4:
	// stw r19,88(r31)
	REX_STORE_U32(r31.u32 + 88, r19.u32);
	// b 0x8263f848
	goto loc_8263F848;
loc_8263F6FC:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8263f778
	if (!ctx.cr6.eq) goto loc_8263F778;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8263f778
	if (!ctx.cr6.lt) goto loc_8263F778;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_8263F72C:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263F740;
	sub_82638D80(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8263f72c
	if (ctx.cr6.lt) goto loc_8263F72C;
loc_8263F778:
	// stw r20,88(r31)
	REX_STORE_U32(r31.u32 + 88, r20.u32);
	// b 0x8263f848
	goto loc_8263F848;
loc_8263F780:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263edc0
	ctx.lr = 0x8263F788;
	sub_8263EDC0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8263f848
	if (!ctx.cr6.eq) goto loc_8263F848;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r21,88(r31)
	REX_STORE_U32(r31.u32 + 88, r21.u32);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// stw r5,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r5.u32);
	// b 0x8263f848
	goto loc_8263F848;
loc_8263F7CC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263f844
	if (ctx.cr6.eq) goto loc_8263F844;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x8263F7EC;
	sub_82638D80(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f854
	if (ctx.cr6.lt) goto loc_8263F854;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263f844
	if (!ctx.cr6.eq) goto loc_8263F844;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lhz r10,580(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8263f844
	if (ctx.cr6.eq) goto loc_8263F844;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8263F828:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8263f828
	if (ctx.cr6.lt) goto loc_8263F828;
loc_8263F844:
	// stw r23,88(r31)
	REX_STORE_U32(r31.u32 + 88, r23.u32);
loc_8263F848:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8263f484
	if (!ctx.cr6.eq) goto loc_8263F484;
loc_8263F854:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_8263F860:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,572(r26)
	REX_STORE_U32(r26.u32 + 572, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_8263F87C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8265C500) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265c534
	if (ctx.cr6.eq) goto loc_8265C534;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x8265C530;
	sub_8265D850(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8265C534:
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

DEFINE_REX_FUNC(sub_8265D0D8) {
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
	ctx.lr = 0x8265D0E0;
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8265d12c
	if (!ctx.cr6.gt) goto loc_8265D12C;
	// li r30,0
	r30.s64 = 0;
loc_8265D104:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8265c940
	ctx.lr = 0x8265D118;
	sub_8265C940(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8265d104
	if (ctx.cr6.lt) goto loc_8265D104;
loc_8265D12C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8265DEE0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265DFE0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,996
	ctx.r10.u64 = ctx.r10.u64 | 996;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8265e000
	if (ctx.cr6.eq) goto loc_8265E000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8265e024
	if (ctx.cr6.lt) goto loc_8265E024;
	// b 0x8265e00c
	goto loc_8265E00C;
loc_8265E000:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e024
	if (ctx.cr6.eq) goto loc_8265E024;
loc_8265E00C:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8265e02c
	if (ctx.cr6.lt) goto loc_8265E02C;
loc_8265E024:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265E02C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mulli r10,r4,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F6F8) {
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
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// ld r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// bl 0x8264e488
	ctx.lr = 0x8265F728;
	sub_8264E488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f754
	if (ctx.cr0.eq) goto loc_8265F754;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265f754
	if (ctx.cr6.eq) goto loc_8265F754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ede70
	ctx.lr = 0x8265F740;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265f758
	if (ctx.cr0.lt) goto loc_8265F758;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8265f758
	goto loc_8265F758;
loc_8265F754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265F758:
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

DEFINE_REX_FUNC(sub_82661B30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82661B38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ori r10,r10,65533
	ctx.r10.u64 = ctx.r10.u64 | 65533;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82661b70
	if (!ctx.cr6.eq) goto loc_82661B70;
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// b 0x82661be0
	goto loc_82661BE0;
loc_82661B70:
	// lwz r31,48(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r7,32(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r6,28(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
loc_82661BA8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82661ba8
	if (!ctx.cr0.eq) goto loc_82661BA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82661be0
	if (!ctx.cr6.eq) goto loc_82661BE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82661BE0:
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82661bf8
	if (ctx.cr6.eq) goto loc_82661BF8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82661bf8
	if (ctx.cr6.eq) goto loc_82661BF8;
	// bl 0x82675ad0
	ctx.lr = 0x82661BF8;
	sub_82675AD0(ctx, base);
loc_82661BF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826689F0) {
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
	ctx.lr = 0x826689F8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r10,240(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// addi r21,r3,240
	r21.s64 = ctx.r3.s64 + 240;
	// li r3,16
	ctx.r3.s64 = 16;
	// subf r9,r10,r21
	ctx.r9.u64 = r21.u64 - ctx.r10.u64;
	// lwz r11,224(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 224);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r23,r11,-4
	r23.s64 = ctx.r11.s64 + -4;
	// bl 0x82675ee0
	ctx.lr = 0x82668A30;
	sub_82675EE0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82668a44
	if (!ctx.cr0.eq) goto loc_82668A44;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82668e28
	goto loc_82668E28;
loc_82668A44:
	// li r20,0
	r20.s64 = 0;
	// addi r27,r28,68
	r27.s64 = r28.s64 + 68;
	// stb r20,69(r28)
	REX_STORE_U8(r28.u32 + 69, r20.u8);
	// li r25,3
	r25.s64 = 3;
	// stb r20,70(r28)
	REX_STORE_U8(r28.u32 + 70, r20.u8);
	// addi r26,r27,3
	r26.s64 = r27.s64 + 3;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// beq cr6,0x82668b40
	if (ctx.cr6.eq) goto loc_82668B40;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82668b40
	if (ctx.cr0.eq) goto loc_82668B40;
loc_82668A74:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r29,r24,-4
	r29.s64 = r24.s64 + -4;
	// lwz r10,288(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 288);
	// subf r9,r11,r21
	ctx.r9.u64 = r21.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq 0x82668b38
	if (ctx.cr0.eq) goto loc_82668B38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82666c48
	ctx.lr = 0x82668AA4;
	sub_82666C48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82668e34
	if (ctx.cr0.eq) goto loc_82668E34;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82668adc
	if (!ctx.cr6.eq) goto loc_82668ADC;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// beq cr6,0x82668adc
	if (ctx.cr6.eq) goto loc_82668ADC;
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1(r27)
	REX_STORE_U8(r27.u32 + 1, ctx.r11.u8);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_82668ADC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x826706a8
	ctx.lr = 0x82668AE8;
	sub_826706A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82668afc
	if (!ctx.cr0.eq) goto loc_82668AFC;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
loc_82668AFC:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82668e48
	if (!ctx.cr6.eq) goto loc_82668E48;
	// lwz r11,292(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 292);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,292(r29)
	REX_STORE_U32(r29.u32 + 292, ctx.r11.u32);
	// lwz r11,224(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 224);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,224(r22)
	REX_STORE_U32(r22.u32 + 224, ctx.r11.u32);
	// bl 0x82670e18
	ctx.lr = 0x82668B2C;
	sub_82670E18(ctx, base);
	// lwz r11,356(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 356);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,356(r22)
	REX_STORE_U32(r22.u32 + 356, ctx.r11.u32);
loc_82668B38:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82668a74
	if (!ctx.cr6.eq) goto loc_82668A74;
loc_82668B40:
	// lwz r11,176(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 176);
	// li r24,-1
	r24.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668be0
	if (ctx.cr6.eq) goto loc_82668BE0;
	// lwz r11,196(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 196);
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668be0
	if (ctx.cr6.eq) goto loc_82668BE0;
	// mr r30,r20
	r30.u64 = r20.u64;
	// addi r26,r26,-4
	r26.s64 = r26.s64 + -4;
loc_82668B68:
	// lwz r11,188(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 188);
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lhz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 284);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,284(r31)
	REX_STORE_U16(r31.u32 + 284, ctx.r11.u16);
loc_82668B7C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82668b7c
	if (!ctx.cr0.eq) goto loc_82668B7C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// bl 0x82671018
	ctx.lr = 0x82668BB4;
	sub_82671018(ctx, base);
	// lbz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stb r11,2(r27)
	REX_STORE_U8(r27.u32 + 2, ctx.r11.u8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stwu r11,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r26.u32 = ea;
	// lwz r11,196(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 196);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82668b68
	if (ctx.cr6.lt) goto loc_82668B68;
loc_82668BE0:
	// stw r25,48(r28)
	REX_STORE_U32(r28.u32 + 48, r25.u32);
	// li r7,131
	ctx.r7.s64 = 131;
	// addi r5,r28,36
	ctx.r5.s64 = r28.s64 + 36;
	// lwz r6,32(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826711d8
	ctx.lr = 0x82668BFC;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x82668C18;
	sub_826715F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671240
	ctx.lr = 0x82668C20;
	sub_82671240(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671558
	ctx.lr = 0x82668C2C;
	sub_82671558(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82668e48
	if (!ctx.cr0.eq) goto loc_82668E48;
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
loc_82668C38:
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
	// bne 0x82668c38
	if (!ctx.cr0.eq) goto loc_82668C38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82668c74
	if (!ctx.cr6.eq) goto loc_82668C74;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82668C74:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// beq cr6,0x82668e24
	if (ctx.cr6.eq) goto loc_82668E24;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82668e24
	if (ctx.cr0.eq) goto loc_82668E24;
loc_82668C8C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r30,r25,-4
	r30.s64 = r25.s64 + -4;
	// subf r10,r11,r21
	ctx.r10.u64 = r21.u64 - ctx.r11.u64;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r10,r11
	r25.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x82668e1c
	if (ctx.cr6.eq) goto loc_82668E1C;
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82668e1c
	if (!ctx.cr0.eq) goto loc_82668E1C;
	// lwz r31,176(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82668e1c
	if (ctx.cr6.eq) goto loc_82668E1C;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// li r3,18
	ctx.r3.s64 = 18;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82675ee0
	ctx.lr = 0x82668CD4;
	sub_82675EE0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82668e40
	if (ctx.cr0.eq) goto loc_82668E40;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r31,69(r28)
	REX_STORE_U8(r28.u32 + 69, r31.u8);
	// addi r11,r28,68
	ctx.r11.s64 = r28.s64 + 68;
	// sth r9,70(r28)
	REX_STORE_U16(r28.u32 + 70, ctx.r9.u16);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lwz r10,196(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 196);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668d70
	if (ctx.cr6.eq) goto loc_82668D70;
	// mr r29,r20
	r29.u64 = r20.u64;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_82668D08:
	// lwz r11,188(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 188);
	// lwzx r31,r11,r29
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lhz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 284);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,284(r31)
	REX_STORE_U16(r31.u32 + 284, ctx.r11.u16);
loc_82668D1C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82668d1c
	if (!ctx.cr0.eq) goto loc_82668D1C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// bl 0x82671018
	ctx.lr = 0x82668D54;
	sub_82671018(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwu r11,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r26.u32 = ea;
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82668d08
	if (ctx.cr6.lt) goto loc_82668D08;
loc_82668D70:
	// lwz r11,428(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 428);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82668d8c
	if (ctx.cr0.eq) goto loc_82668D8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82661f28
	ctx.lr = 0x82668D8C;
	sub_82661F28(ctx, base);
loc_82668D8C:
	// li r7,131
	ctx.r7.s64 = 131;
	// lwz r6,32(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r5,r28,36
	ctx.r5.s64 = r28.s64 + 36;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826711d8
	ctx.lr = 0x82668DA4;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x82668DC0;
	sub_826715F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671240
	ctx.lr = 0x82668DC8;
	sub_82671240(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671558
	ctx.lr = 0x82668DD4;
	sub_82671558(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82668e48
	if (!ctx.cr0.eq) goto loc_82668E48;
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
loc_82668DE0:
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
	// bne 0x82668de0
	if (!ctx.cr0.eq) goto loc_82668DE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82668e1c
	if (!ctx.cr6.eq) goto loc_82668E1C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82668E1C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82668c8c
	if (!ctx.cr6.eq) goto loc_82668C8C;
loc_82668E24:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82668E28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce8
	return;
loc_82668E34:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4120
	r30.u64 = r30.u64 | 4120;
	// b 0x82668e48
	goto loc_82668E48;
loc_82668E40:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_82668E48:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82668e28
	if (ctx.cr6.eq) goto loc_82668E28;
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
loc_82668E54:
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
	// bne 0x82668e54
	if (!ctx.cr0.eq) goto loc_82668E54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82668e28
	if (!ctx.cr6.eq) goto loc_82668E28;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668E90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82668e28
	goto loc_82668E28;
}

DEFINE_REX_FUNC(sub_826847A0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826847d4
	if (ctx.cr6.eq) goto loc_826847D4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_826847D4:
	// lwz r11,208(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,212(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,208(r10)
	REX_STORE_U32(ctx.r10.u32 + 208, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r11,212(r10)
	REX_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
	// b 0x82687cf8
	sub_82687CF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82686608) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8268662c
	if (ctx.cr6.eq) goto loc_8268662C;
loc_82686614:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268662c
	if (!ctx.cr0.eq) goto loc_8268662C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82686614
	if (!ctx.cr6.eq) goto loc_82686614;
loc_8268662C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82686644
	if (!ctx.cr6.lt) goto loc_82686644;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// ble cr6,0x8268664c
	if (!ctx.cr6.gt) goto loc_8268664C;
loc_82686644:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8268664C:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687CF8) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x8265d850
	sub_8265D850(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82688120) {
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
	ctx.lr = 0x82688128;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rldicl r10,r5,59,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 59) & 0x7FFFFFFFFFFFFFF;
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,56(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// lbz r25,72(r3)
	r25.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lhz r22,12(r26)
	r22.u64 = REX_LOAD_U16(r26.u32 + 12);
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// std r5,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r5.u64);
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r20,r23
	r20.u64 = r23.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r21,r23
	r21.u64 = r23.u64;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r19,r23
	r19.u64 = r23.u64;
	// rotlwi r17,r10,0
	r17.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8268824c
	if (ctx.cr6.eq) goto loc_8268824C;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x826881f8
	if (ctx.cr6.eq) goto loc_826881F8;
	// sth r17,0(r15)
	REX_STORE_U16(r15.u32 + 0, r17.u16);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x826845b8
	ctx.lr = 0x826881B0;
	sub_826845B8(ctx, base);
	// lhz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 14);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm. r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// beq 0x826881d8
	if (ctx.cr0.eq) goto loc_826881D8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x826881e4
	goto loc_826881E4;
loc_826881D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826881E4:
	// rlwinm r10,r10,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r23,1
	r23.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82688220
	goto loc_82688220;
loc_826881F8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lhz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U16(r15.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x82688218
	if (!ctx.cr6.lt) goto loc_82688218;
	// sth r11,0(r15)
	REX_STORE_U16(r15.u32 + 0, ctx.r11.u16);
loc_82688218:
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_82688220:
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x82688250
	if (ctx.cr6.eq) goto loc_82688250;
	// rlwinm r10,r27,0,30,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r10,0,24,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// li r25,4
	r25.s64 = 4;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ori r27,r10,3
	r27.u64 = ctx.r10.u64 | 3;
	// b 0x82688250
	goto loc_82688250;
loc_8268824C:
	// sth r23,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r23.u16);
loc_82688250:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf. r14,r22,r11
	r14.u64 = ctx.r11.u64 - r22.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x82688278
	if (ctx.cr0.eq) goto loc_82688278;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// bne cr6,0x82688278
	if (!ctx.cr6.eq) goto loc_82688278;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// li r25,128
	r25.s64 = 128;
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82688278
	if (ctx.cr0.eq) goto loc_82688278;
	// ori r27,r27,3
	r27.u64 = r27.u64 | 3;
loc_82688278:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82688290
	if (!ctx.cr6.lt) goto loc_82688290;
	// rlwinm r11,r27,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r11,r11,0,24,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// ori r27,r11,3
	r27.u64 = ctx.r11.u64 | 3;
loc_82688290:
	// lhz r11,14(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 14);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826882a0
	if (ctx.cr0.eq) goto loc_826882A0;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
loc_826882A0:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826882ec
	if (ctx.cr0.eq) goto loc_826882EC;
	// li r24,1
	r24.s64 = 1;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,0(r28)
	REX_STORE_U32(r28.u32 + 0, r24.u32);
	// bne 0x826882c8
	if (!ctx.cr0.eq) goto loc_826882C8;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r11,168(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,168(r10)
	REX_STORE_U16(ctx.r10.u32 + 168, ctx.r11.u16);
loc_826882C8:
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826882d8
	if (ctx.cr0.eq) goto loc_826882D8;
	// li r30,3
	r30.s64 = 3;
	// b 0x826882f0
	goto loc_826882F0;
loc_826882D8:
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// b 0x826882f0
	goto loc_826882F0;
loc_826882EC:
	// li r30,0
	r30.s64 = 0;
loc_826882F0:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688328
	if (ctx.cr0.eq) goto loc_82688328;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82688310
	if (ctx.cr6.eq) goto loc_82688310;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r11,170(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 170);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,170(r10)
	REX_STORE_U16(ctx.r10.u32 + 170, ctx.r11.u16);
loc_82688310:
	// lhz r11,14(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 14);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r21,r11,21,31,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// rlwinm r20,r9,20,31,31
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// lhz r19,170(r10)
	r19.u64 = REX_LOAD_U16(ctx.r10.u32 + 170);
loc_82688328:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82684560
	ctx.lr = 0x82688338;
	sub_82684560(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82688348
	if (!ctx.cr6.gt) goto loc_82688348;
	// stw r30,0(r18)
	REX_STORE_U32(r18.u32 + 0, r30.u32);
loc_82688348:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r9,r31,74
	ctx.r9.s64 = r31.s64 + 74;
	// addi r8,r31,73
	ctx.r8.s64 = r31.s64 + 73;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82681680
	ctx.lr = 0x82688374;
	sub_82681680(ctx, base);
	// lwz r23,340(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm. r11,r27,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// beq 0x826883b0
	if (ctx.cr0.eq) goto loc_826883B0;
	// rlwinm. r11,r27,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82688398
	if (ctx.cr0.eq) goto loc_82688398;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// sth r17,0(r15)
	REX_STORE_U16(r15.u32 + 0, r17.u16);
loc_82688398:
	// addi r11,r28,9
	ctx.r11.s64 = r28.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r31.u32);
	// lhz r11,330(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 330);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,330(r29)
	REX_STORE_U16(r29.u32 + 330, ctx.r11.u16);
loc_826883B0:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lhz r6,14(r26)
	ctx.r6.u64 = REX_LOAD_U16(r26.u32 + 14);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// sth r19,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, r19.u16);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r10,152(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// rlwinm r6,r6,0,18,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lhz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82686dd0
	ctx.lr = 0x826883F8;
	sub_82686DD0(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + r22.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r3,r30
	r27.u64 = ctx.r3.u64 + r30.u64;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// beq cr6,0x82688498
	if (ctx.cr6.eq) goto loc_82688498;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// beq cr6,0x8268843c
	if (ctx.cr6.eq) goto loc_8268843C;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// beq cr6,0x826884b0
	if (ctx.cr6.eq) goto loc_826884B0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// bne cr6,0x826884b0
	if (!ctx.cr6.eq) goto loc_826884B0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// bl 0x826871d8
	ctx.lr = 0x82688438;
	sub_826871D8(ctx, base);
	// b 0x826885bc
	goto loc_826885BC;
loc_8268843C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lhz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 168);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82688460
	if (!ctx.cr6.eq) goto loc_82688460;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82688460:
	// addi r10,r28,9
	ctx.r10.s64 = r28.s64 + 9;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// lhz r11,330(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 330);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,330(r29)
	REX_STORE_U16(r29.u32 + 330, ctx.r11.u16);
	// stw r9,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// sth r17,0(r15)
	REX_STORE_U16(r15.u32 + 0, r17.u16);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// b 0x826884b0
	goto loc_826884B0;
loc_82688498:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826884b0
	if (ctx.cr6.eq) goto loc_826884B0;
	// lhz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x82687188
	ctx.lr = 0x826884B0;
	sub_82687188(ctx, base);
loc_826884B0:
	// addi r11,r31,84
	ctx.r11.s64 = r31.s64 + 84;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x826884d4
	if (ctx.cr6.eq) goto loc_826884D4;
loc_826884BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826884d4
	if (ctx.cr6.lt) goto loc_826884D4;
	// subf. r14,r10,r14
	r14.u64 = r14.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x826884bc
	if (!ctx.cr0.eq) goto loc_826884BC;
loc_826884D4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82688518
	if (ctx.cr6.eq) goto loc_82688518;
	// addi r29,r11,-8
	r29.s64 = ctx.r11.s64 + -8;
loc_826884E0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// subf r30,r14,r11
	r30.u64 = ctx.r11.u64 - r14.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// ble cr6,0x826884f4
	if (!ctx.cr6.gt) goto loc_826884F4;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_826884F4:
	// lwzu r11,8(r29)
	ea = 8 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + r14.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82688508;
	sub_826A1E70(ctx, base);
	// subf. r22,r30,r22
	r22.u64 = r22.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// li r14,0
	r14.s64 = 0;
	// bne 0x826884e0
	if (!ctx.cr0.eq) goto loc_826884E0;
loc_82688518:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826885bc
	if (ctx.cr6.lt) goto loc_826885BC;
	// lbz r11,78(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 78);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82688544
	if (!ctx.cr0.eq) goto loc_82688544;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826847a0
	ctx.lr = 0x82688540;
	sub_826847A0(ctx, base);
	// b 0x826885bc
	goto loc_826885BC;
loc_82688544:
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82688560
	if (ctx.cr0.eq) goto loc_82688560;
	// lbz r10,79(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 79);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stb r11,78(r31)
	REX_STORE_U8(r31.u32 + 78, ctx.r11.u8);
	// stb r10,79(r31)
	REX_STORE_U8(r31.u32 + 79, ctx.r10.u8);
loc_82688560:
	// lbz r11,78(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 78);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82688580
	if (ctx.cr0.eq) goto loc_82688580;
	// lbz r10,79(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 79);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stb r11,78(r31)
	REX_STORE_U8(r31.u32 + 78, ctx.r11.u8);
	// stb r10,79(r31)
	REX_STORE_U8(r31.u32 + 79, ctx.r10.u8);
loc_82688580:
	// lhz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r10,304(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// lbz r9,79(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 79);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// beq 0x826885b8
	if (ctx.cr0.eq) goto loc_826885B8;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// bl 0x82685250
	ctx.lr = 0x826885B4;
	sub_82685250(ctx, base);
	// b 0x826885bc
	goto loc_826885BC;
loc_826885B8:
	// bl 0x826847f8
	ctx.lr = 0x826885BC;
	sub_826847F8(ctx, base);
loc_826885BC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(__savevmx_122) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_72) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B7170) {
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
	ctx.lr = 0x826B7178;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b720c
	if (ctx.cr6.eq) goto loc_826B720C;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c4660
	ctx.lr = 0x826B71A8;
	sub_822C4660(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822c9330
	ctx.lr = 0x826B71B4;
	sub_822C9330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822c96d8
	ctx.lr = 0x826B71C0;
	sub_822C96D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822c98a8
	ctx.lr = 0x826B71CC;
	sub_822C98A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822c4808
	ctx.lr = 0x826B71D8;
	sub_822C4808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r27
	r30.u64 = r27.u64;
	// rldicr r29,r11,63,63
	r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_826B71E4:
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x822d3538
	ctx.lr = 0x826B7200;
	sub_822D3538(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x826b71e4
	if (ctx.cr6.lt) goto loc_826B71E4;
loc_826B720C:
	// li r28,72
	r28.s64 = 72;
loc_826B7210:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_826B7214:
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7230
	if (ctx.cr6.eq) goto loc_826B7230;
	// bl 0x822c5ef0
	ctx.lr = 0x826B722C;
	sub_822C5EF0(ctx, base);
	// stwx r27,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, r27.u32);
loc_826B7230:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// blt cr6,0x826b7214
	if (ctx.cr6.lt) goto loc_826B7214;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// cmplwi cr6,r28,81
	ctx.cr6.compare<uint32_t>(r28.u32, 81, ctx.xer);
	// blt cr6,0x826b7210
	if (ctx.cr6.lt) goto loc_826B7210;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b725c
	if (ctx.cr6.eq) goto loc_826B725C;
	// bl 0x822c5ef0
	ctx.lr = 0x826B7258;
	sub_822C5EF0(ctx, base);
	// stw r27,324(r31)
	REX_STORE_U32(r31.u32 + 324, r27.u32);
loc_826B725C:
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b7270
	if (ctx.cr6.eq) goto loc_826B7270;
	// bl 0x822c5ef0
	ctx.lr = 0x826B726C;
	sub_822C5EF0(ctx, base);
	// stw r27,328(r31)
	REX_STORE_U32(r31.u32 + 328, r27.u32);
loc_826B7270:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b58f8
	ctx.lr = 0x826B7278;
	sub_826B58F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826BF560) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,204
	ctx.r7.s64 = ctx.r3.s64 + 204;
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

DEFINE_REX_FUNC(sub_826C0D60) {
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
	ctx.lr = 0x826C0D68;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r25,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r25.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// li r23,128
	r23.s64 = 128;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c136c
	if (ctx.cr6.eq) goto loc_826C136C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826c1378
	if (ctx.cr6.eq) goto loc_826C1378;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c136c
	if (ctx.cr6.eq) goto loc_826C136C;
	// stw r25,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r25.u32);
	// li r21,7
	r21.s64 = 7;
	// stw r25,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// li r22,1
	r22.s64 = 1;
	// lbz r11,525(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 525);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826c0fec
	if (ctx.cr6.eq) goto loc_826C0FEC;
loc_826C0DC0:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c0e3c
	if (!ctx.cr6.eq) goto loc_826C0E3C;
	// ld r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x826c0e10
	if (!ctx.cr6.eq) goto loc_826C0E10;
	// lwz r30,392(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,392(r31)
	REX_STORE_U32(r31.u32 + 392, r21.u32);
	// bl 0x826bfa00
	ctx.lr = 0x826C0DE8;
	sub_826BFA00(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x826c135c
	if (ctx.cr6.eq) goto loc_826C135C;
	// lbz r11,525(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 525);
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826c0fe0
	if (ctx.cr6.eq) goto loc_826C0FE0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x826c1020
	if (ctx.cr6.eq) goto loc_826C1020;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c120c
	if (!ctx.cr6.eq) goto loc_826C120C;
loc_826C0E10:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c0e3c
	if (!ctx.cr6.eq) goto loc_826C0E3C;
	// ld r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x826c120c
	if (ctx.cr6.eq) goto loc_826C120C;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r8,408(r31)
	REX_STORE_U64(r31.u32 + 408, ctx.r8.u64);
	// stw r10,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r10.u32);
loc_826C0E3C:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826c0e4c
	if (!ctx.cr6.gt) goto loc_826C0E4C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_826C0E4C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C0E60;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, ctx.xer);
	// bne cr6,0x826c11e8
	if (!ctx.cr6.eq) goto loc_826C11E8;
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0ed4
	if (ctx.cr6.eq) goto loc_826C0ED4;
	// lhz r9,518(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x826c1034
	if (ctx.cr6.gt) goto loc_826C1034;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 408);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpld cr6,r8,r6
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r6.u64, ctx.xer);
	// bgt cr6,0x826c1034
	if (ctx.cr6.gt) goto loc_826C1034;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 612);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C0ED0;
	sub_826A1E70(ctx, base);
	// b 0x826c0ef0
	goto loc_826C0EF0;
loc_826C0ED4:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x826c134c
	if (ctx.cr6.gt) goto loc_826C134C;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// bl 0x826a1e70
	ctx.lr = 0x826C0EE8;
	sub_826A1E70(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_826C0EF0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 420);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,548(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 548);
	// std r8,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r8.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// bne cr6,0x826c120c
	if (!ctx.cr6.eq) goto loc_826C120C;
	// lwz r10,552(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c0f74
	if (ctx.cr6.eq) goto loc_826C0F74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c0f6c
	if (!ctx.cr6.eq) goto loc_826C0F6C;
	// ld r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bgt cr6,0x826c0f6c
	if (ctx.cr6.gt) goto loc_826C0F6C;
	// addi r6,r31,600
	ctx.r6.s64 = r31.s64 + 600;
	// lwz r4,612(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 612);
	// lwz r3,592(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lhz r5,518(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 518);
	// bl 0x826d2b68
	ctx.lr = 0x826C0F50;
	sub_826D2B68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c1270
	if (ctx.cr6.lt) goto loc_826C1270;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lhz r10,518(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 518);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// b 0x826c0f74
	goto loc_826C0F74;
loc_826C0F6C:
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
loc_826C0F74:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0fc8
	if (ctx.cr6.eq) goto loc_826C0FC8;
	// lhz r11,518(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// ld r9,408(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 408);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r25,416(r31)
	REX_STORE_U32(r31.u32 + 416, r25.u32);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x826c0fbc
	if (!ctx.cr6.eq) goto loc_826C0FBC;
	// stw r22,4(r20)
	REX_STORE_U32(r20.u32 + 4, r22.u32);
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulli r7,r8,10000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10000));
	// std r7,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r7.u64);
loc_826C0FBC:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c120c
	if (ctx.cr6.eq) goto loc_826C120C;
loc_826C0FC8:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1340
	if (ctx.cr6.eq) goto loc_826C1340;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c120c
	if (!ctx.cr6.eq) goto loc_826C120C;
loc_826C0FE0:
	// lbz r11,525(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 525);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826c0dc0
	if (!ctx.cr6.eq) goto loc_826C0DC0;
loc_826C0FEC:
	// lbz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826c120c
	if (ctx.cr6.gt) goto loc_826C120C;
	// li r29,2
	r29.s64 = 2;
	// li r27,3
	r27.s64 = 3;
	// li r28,4
	r28.s64 = 4;
loc_826C1008:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1044
	if (ctx.cr6.eq) goto loc_826C1044;
	// bdz 0x826c10e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826C10E4;
	// bdz 0x826c1104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826C1104;
	// b 0x826c119c
	goto loc_826C119C;
loc_826C1020:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C1034:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C1044:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C1058;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x826c11e8
	if (!ctx.cr6.eq) goto loc_826C11E8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c11e8
	if (ctx.cr6.eq) goto loc_826C11E8;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// ld r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 400);
	// sth r25,536(r31)
	REX_STORE_U16(r31.u32 + 536, r25.u16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// std r8,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r8.u64);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r7,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r7.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,526(r31)
	REX_STORE_U8(r31.u32 + 526, ctx.r7.u8);
	// beq cr6,0x826c10ac
	if (ctx.cr6.eq) goto loc_826C10AC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// sth r9,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r9.u16);
loc_826C10AC:
	// lbz r9,526(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 526);
	// lhz r10,522(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 522);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x826c10d0
	if (!ctx.cr6.gt) goto loc_826C10D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// sth r11,520(r31)
	REX_STORE_U16(r31.u32 + 520, ctx.r11.u16);
	// b 0x826c11cc
	goto loc_826C11CC;
loc_826C10D0:
	// bne cr6,0x826c10dc
	if (!ctx.cr6.eq) goto loc_826C10DC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// sth r11,520(r31)
	REX_STORE_U16(r31.u32 + 520, ctx.r11.u16);
loc_826C10DC:
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// b 0x826c11cc
	goto loc_826C11CC;
loc_826C10E4:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c1230
	if (!ctx.cr6.eq) goto loc_826C1230;
	// lhz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826c11f8
	if (!ctx.cr6.eq) goto loc_826C11F8;
	// stb r27,524(r31)
	REX_STORE_U8(r31.u32 + 524, r27.u8);
	// b 0x826c11cc
	goto loc_826C11CC;
loc_826C1104:
	// lhz r11,522(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 522);
	// lhz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 520);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826c1194
	if (!ctx.cr6.gt) goto loc_826C1194;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C1128;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x826c11e8
	if (!ctx.cr6.eq) goto loc_826C11E8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c11e8
	if (ctx.cr6.eq) goto loc_826C11E8;
	// ld r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 400);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// std r11,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r11.u64);
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r8,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r8.u16);
	// stb r8,526(r31)
	REX_STORE_U8(r31.u32 + 526, ctx.r8.u8);
	// beq cr6,0x826c1178
	if (ctx.cr6.eq) goto loc_826C1178;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sth r9,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r9.u16);
loc_826C1178:
	// lhz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 520);
	// lbz r11,526(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 526);
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,520(r31)
	REX_STORE_U16(r31.u32 + 520, ctx.r11.u16);
	// b 0x826c11cc
	goto loc_826C11CC;
loc_826C1194:
	// stb r28,524(r31)
	REX_STORE_U8(r31.u32 + 524, r28.u8);
	// b 0x826c11cc
	goto loc_826C11CC;
loc_826C119C:
	// lwz r30,392(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r25,524(r31)
	REX_STORE_U8(r31.u32 + 524, r25.u8);
	// std r25,408(r31)
	REX_STORE_U64(r31.u32 + 408, r25.u64);
	// stb r25,525(r31)
	REX_STORE_U8(r31.u32 + 525, r25.u8);
	// stw r21,392(r31)
	REX_STORE_U32(r31.u32 + 392, r21.u32);
	// bl 0x826bfa00
	ctx.lr = 0x826C11B8;
	sub_826BFA00(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x826c135c
	if (ctx.cr6.eq) goto loc_826C135C;
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c120c
	if (!ctx.cr6.eq) goto loc_826C120C;
loc_826C11CC:
	// lbz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 524);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x826c1008
	if (!ctx.cr6.gt) goto loc_826C1008;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C11E8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C11F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c1230
	if (!ctx.cr6.eq) goto loc_826C1230;
	// lhz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c1218
	if (!ctx.cr6.eq) goto loc_826C1218;
loc_826C120C:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C1218:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r22,416(r31)
	REX_STORE_U32(r31.u32 + 416, r22.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r9,528(r31)
	REX_STORE_U16(r31.u32 + 528, ctx.r9.u16);
	// stw r10,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r10.u32);
loc_826C1230:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826c1240
	if (!ctx.cr6.gt) goto loc_826C1240;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_826C1240:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 400);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C1254;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, ctx.xer);
	// bne cr6,0x826c11e8
	if (!ctx.cr6.eq) goto loc_826C11E8;
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1284
	if (ctx.cr6.eq) goto loc_826C1284;
loc_826C1270:
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C1284:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bgt cr6,0x826c134c
	if (ctx.cr6.gt) goto loc_826C134C;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826c134c
	if (ctx.cr6.eq) goto loc_826C134C;
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// bl 0x826a1e70
	ctx.lr = 0x826C12A0;
	sub_826A1E70(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r8,548(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 420);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r7,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r7.u64);
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r5,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r5.u32);
	// bne cr6,0x826c120c
	if (!ctx.cr6.eq) goto loc_826C120C;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1340
	if (ctx.cr6.eq) goto loc_826C1340;
	// lbz r11,526(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 526);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lhz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 528);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826c1330
	if (!ctx.cr6.eq) goto loc_826C1330;
	// stw r22,4(r20)
	REX_STORE_U32(r20.u32 + 4, r22.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lhz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 536);
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,512(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 512);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulli r5,r6,10000
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(10000));
	// std r5,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r5.u64);
	// lhz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 536);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,536(r31)
	REX_STORE_U16(r31.u32 + 536, ctx.r4.u16);
loc_826C1330:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,416(r31)
	REX_STORE_U32(r31.u32 + 416, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C1340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C134C:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C135C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_826C136C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826c1378
	if (ctx.cr6.eq) goto loc_826C1378;
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
loc_826C1378:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826c1384
	if (ctx.cr6.eq) goto loc_826C1384;
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
loc_826C1384:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_826F2BB8) {
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
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x82700598
	ctx.lr = 0x826F2BD4;
	sub_82700598(ctx, base);
	// bl 0x826f2818
	ctx.lr = 0x826F2BD8;
	sub_826F2818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f2bfc
	if (ctx.cr6.lt) goto loc_826F2BFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_826F2BFC:
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

DEFINE_REX_FUNC(sub_826F4280) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82634f40
	ctx.lr = 0x826F429C;
	sub_82634F40(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x82634f40
	ctx.lr = 0x826F42A4;
	sub_82634F40(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x82634f40
	ctx.lr = 0x826F42AC;
	sub_82634F40(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82634f40
	ctx.lr = 0x826F42B4;
	sub_82634F40(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82634f40
	ctx.lr = 0x826F42BC;
	sub_82634F40(ctx, base);
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

DEFINE_REX_FUNC(sub_826F6A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826F6A40;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r30,0(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bge cr6,0x826f6ad0
	if (!ctx.cr6.lt) goto loc_826F6AD0;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lis r31,-8
	r31.s64 = -524288;
	// ori r5,r11,65535
	ctx.r5.u64 = ctx.r11.u64 | 65535;
loc_826F6A80:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x826f6a94
	if (!ctx.cr6.lt) goto loc_826F6A94;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x826f6aa0
	goto loc_826F6AA0;
loc_826F6A94:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x826f6aa0
	if (!ctx.cr6.gt) goto loc_826F6AA0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_826F6AA0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lbz r29,-46(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + -46);
	// lhz r11,-48(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -48);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r29,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r29.u8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// bdnz 0x826f6a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F6A80;
loc_826F6AD0:
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826FBF80) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x826FBF88;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r4,3364(r3)
	REX_STORE_U32(ctx.r3.u32 + 3364, ctx.r4.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stw r30,22356(r3)
	REX_STORE_U32(ctx.r3.u32 + 22356, r30.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x8271e248
	ctx.lr = 0x826FBFD4;
	sub_8271E248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826fc0c8
	if (!ctx.cr6.eq) goto loc_826FC0C8;
	// stfs f31,3672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 3672, temp.u32);
	// stw r29,3664(r31)
	REX_STORE_U32(r31.u32 + 3664, r29.u32);
	// stfs f30,3676(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 3676, temp.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// sth r30,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r30.u16);
	// stw r28,3668(r31)
	REX_STORE_U32(r31.u32 + 3668, r28.u32);
	// ble cr6,0x826fc000
	if (!ctx.cr6.gt) goto loc_826FC000;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x826fc00c
	goto loc_826FC00C;
loc_826FC000:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bge cr6,0x826fc010
	if (!ctx.cr6.lt) goto loc_826FC010;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_826FC00C:
	// stw r11,3668(r31)
	REX_STORE_U32(r31.u32 + 3668, ctx.r11.u32);
loc_826FC010:
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, ctx.r11.u32);
	// beq cr6,0x826fc02c
	if (ctx.cr6.eq) goto loc_826FC02C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826fc02c
	if (ctx.cr6.eq) goto loc_826FC02C;
	// stw r30,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, r30.u32);
loc_826FC02C:
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r7,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r7.u32);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// stw r6,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r6.u32);
	// stw r5,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r5.u32);
	// bne cr6,0x826fc080
	if (!ctx.cr6.eq) goto loc_826FC080;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x826fc084
	if (ctx.cr6.eq) goto loc_826FC084;
loc_826FC080:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_826FC084:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r8,188(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 188);
	// li r3,0
	ctx.r3.s64 = 0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// stw r30,3480(r31)
	REX_STORE_U32(r31.u32 + 3480, r30.u32);
	// addi r9,r9,29672
	ctx.r9.s64 = ctx.r9.s64 + 29672;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r30,3484(r31)
	REX_STORE_U32(r31.u32 + 3484, r30.u32);
	// stw r7,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r7.u32);
	// stw r30,3488(r31)
	REX_STORE_U32(r31.u32 + 3488, r30.u32);
	// addi r6,r9,384
	ctx.r6.s64 = ctx.r9.s64 + 384;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
loc_826FC0C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82712578) {
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
	ctx.lr = 0x82712580;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r27,r11,-26304
	r27.s64 = ctx.r11.s64 + -26304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r30,r27
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// bl 0x82725f80
	ctx.lr = 0x827125B0;
	sub_82725F80(ctx, base);
	// addi r9,r27,1
	ctx.r9.s64 = r27.s64 + 1;
	// li r25,3
	r25.s64 = 3;
	// lbzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x827125c8
	if (!ctx.cr6.eq) goto loc_827125C8;
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
loc_827125C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic. r28,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	r28.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x827126b8
	if (ctx.cr0.eq) goto loc_827126B8;
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,3580(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 3580);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82712600
	if (!ctx.cr6.gt) goto loc_82712600;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x827126bc
	goto loc_827126BC;
loc_82712600:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82712614
	if (!ctx.cr6.eq) goto loc_82712614;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x827126bc
	goto loc_827126BC;
loc_82712614:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82712674
	if (!ctx.cr6.gt) goto loc_82712674;
loc_8271261C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82712674
	if (ctx.cr6.eq) goto loc_82712674;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82712664
	if (!ctx.cr0.lt) goto loc_82712664;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82712664;
	sub_82725E38(ctx, base);
loc_82712664:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8271261c
	if (ctx.cr6.gt) goto loc_8271261C;
loc_82712674:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x827126ac
	if (!ctx.cr0.lt) goto loc_827126AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827126AC;
	sub_82725E38(ctx, base);
loc_827126AC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// b 0x827126bc
	goto loc_827126BC;
loc_827126B8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_827126BC:
	// lwz r10,3588(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 3588);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x827126d8
	if (!ctx.cr6.eq) goto loc_827126D8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827126d8
	if (!ctx.cr6.eq) goto loc_827126D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82712718
	goto loc_82712718;
loc_827126D8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827126e8
	if (!ctx.cr6.eq) goto loc_827126E8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x82712718
	goto loc_82712718;
loc_827126E8:
	// srawi r11,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r28.s32 >> 31;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// xor r8,r28,r11
	ctx.r8.u64 = r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82712714
	if (ctx.cr6.gt) goto loc_82712714;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82712714:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_82712718:
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// rldicl r9,r10,13,51
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 13) & 0x1FFF;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r30,r27
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// bl 0x82725f80
	ctx.lr = 0x82712738;
	sub_82725F80(ctx, base);
	// addi r8,r27,1
	ctx.r8.s64 = r27.s64 + 1;
	// lbzx r11,r30,r8
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8271274c
	if (!ctx.cr6.eq) goto loc_8271274C;
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
loc_8271274C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic. r28,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	r28.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82712820
	if (ctx.cr0.eq) goto loc_82712820;
	// lwz r30,84(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,3580(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 3580);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82712820
	if (ctx.cr6.gt) goto loc_82712820;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82712820
	if (ctx.cr6.eq) goto loc_82712820;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827127e0
	if (!ctx.cr6.gt) goto loc_827127E0;
loc_82712788:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827127e0
	if (ctx.cr6.eq) goto loc_827127E0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x827127d0
	if (!ctx.cr0.lt) goto loc_827127D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827127D0;
	sub_82725E38(ctx, base);
loc_827127D0:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82712788
	if (ctx.cr6.gt) goto loc_82712788;
loc_827127E0:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82712818
	if (!ctx.cr0.lt) goto loc_82712818;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82712818;
	sub_82725E38(ctx, base);
loc_82712818:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// b 0x82712824
	goto loc_82712824;
loc_82712820:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82712824:
	// lwz r10,3588(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 3588);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82712848
	if (!ctx.cr6.eq) goto loc_82712848;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82712848
	if (!ctx.cr6.eq) goto loc_82712848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r24)
	REX_STORE_U8(r24.u32 + 1, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82712848:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8271285c
	if (!ctx.cr6.eq) goto loc_8271285C;
	// stb r28,1(r24)
	REX_STORE_U8(r24.u32 + 1, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8271285C:
	// srawi r11,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r28.s32 >> 31;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// xor r8,r28,r11
	ctx.r8.u64 = r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82712888
	if (ctx.cr6.gt) goto loc_82712888;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82712888:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stb r11,1(r24)
	REX_STORE_U8(r24.u32 + 1, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82728478) {
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
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82728480;
	// li r26,192
	r26.s64 = 192;
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,224
	r28.s64 = 224;
	// vcsxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// li r27,208
	r27.s64 = 208;
	// li r29,240
	r29.s64 = 240;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lvx128 v61,r6,r26
	ea = (ctx.r6.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,480
	ctx.r11.s64 = 480;
	// lvx128 v60,r6,r28
	ea = (ctx.r6.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,448
	ctx.r10.s64 = 448;
	// lvx128 v59,r6,r27
	ea = (ctx.r6.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,416
	ctx.r9.s64 = 416;
	// lvx128 v58,r6,r29
	ea = (ctx.r6.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,384
	ctx.r8.s64 = 384;
	// li r30,160
	r30.s64 = 160;
	// vcsxwfp128 v57,v61,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// li r7,352
	ctx.r7.s64 = 352;
	// lvx128 v56,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,320
	ctx.r6.s64 = 320;
	// lvx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,176
	r31.s64 = 176;
	// lvx128 v52,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v56,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r22,r30
	ea = (r22.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v54,11
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v40,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v52,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v38,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v46,v50,11
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v42,r22,r31
	ea = (r22.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v40,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v55,v59,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// vcsxwfp128 v53,v60,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvx128 v45,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v58,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// lvx128 v44,r5,r26
	ea = (ctx.r5.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// vcsxwfp128 v36,v38,11
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// vcsxwfp128 v39,v42,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v35,r22,r11
	ea = (r22.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,128
	ctx.r9.s64 = 128;
	// lvx128 v61,r22,r3
	ea = (r22.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,112
	ctx.r8.s64 = 112;
	// lvx128 v60,r22,r4
	ea = (r22.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v59,r22,r5
	ea = (r22.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,288
	r28.s64 = 288;
	// lvx128 v58,r22,r6
	ea = (r22.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,256
	r26.s64 = 256;
	// lvx128 v56,r22,r7
	ea = (r22.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v34,v49,v51
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v51.f32), 0xEF));
	// vcsxwfp128 v54,v35,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmsum3fp128 v33,v48,v53
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v53.f32), 0xEF));
	// vcsxwfp128 v50,v61,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vmsum3fp128 v32,v47,v55
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v55.f32), 0xEF));
	// lvx128 v52,r22,r8
	ea = (r22.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v46,v57
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v57.f32), 0xEF));
	// lvx128 v49,r22,r9
	ea = (r22.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v42,v37,v39
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v39.f32), 0xEF));
	// lvx128 v47,r22,r10
	ea = (r22.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v38,v36,v41
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v41.f32), 0xEF));
	// lvx128 v43,r23,r28
	ea = (r23.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r23,r26
	ea = (r23.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r21,-32127
	r21.s64 = -2105475072;
	// lvx128 v37,r23,r30
	ea = (r23.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v60,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// lvx128 v35,r23,r9
	ea = (r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v46,v59,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v36,v58,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v61,v56,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// addi r9,r21,31744
	ctx.r9.s64 = r21.s64 + 31744;
	// vrlimi128 v63,v32,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v32.f32), 228), 4));
	// vcsxwfp128 v58,v49,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v56,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v43,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v38,v42,1,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 1));
	// vrlimi128 v33,v34,1,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 1));
	// vcsxwfp128 v60,v52,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// lvx128 v59,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v47,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v42,v35,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v34,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v32,v44,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v12,v63,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcsxwfp128 v47,v40,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r7,496
	ctx.r7.s64 = 496;
	// vcsxwfp128 v44,v37,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r5,464
	ctx.r5.s64 = 464;
	// vcsxwfp128 v35,v56,11
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r3,432
	ctx.r3.s64 = 432;
	// vcsxwfp128 v40,v45,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v45,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v37,v59,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r9,400
	ctx.r9.s64 = 400;
	// vcsxwfp128 v63,v43,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v59,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v34,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v43,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v33,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v0.f32)));
	// li r7,368
	ctx.r7.s64 = 368;
	// vmsum3fp128 v34,v49,v52
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v52.f32), 0xEF));
	// vsubfp128 v11,v38,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v42,v42,v46
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v46.f32), 0xEF));
	// vcsxwfp128 v38,v59,11
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v32,v32,v61
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v61.f32), 0xEF));
	// vcsxwfp128 v59,v43,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmaddfp128 v45,v12,v1,v45
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v45.f32)));
	// li r5,336
	ctx.r5.s64 = 336;
	// vmsum3fp128 v49,v47,v58
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v58.f32), 0xEF));
	// lvx128 v47,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v44,v44,v36
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v36.f32), 0xEF));
	// vcsxwfp128 v43,v47,11
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v35,v35,v50
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v50.f32), 0xEF));
	// li r3,304
	ctx.r3.s64 = 304;
	// vmsum3fp128 v40,v40,v60
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v60.f32), 0xEF));
	// li r30,272
	r30.s64 = 272;
	// vmsum3fp128 v37,v37,v48
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v48.f32), 0xEF));
	// lvx128 v10,r23,r9
	ea = (r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32), 0xEF));
	// vcfsx v4,v10,11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum3fp128 v56,v56,v54
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v54.f32), 0xEF));
	// lvx128 v7,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v6,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v1,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v5,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v51,v38,v51
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v51.f32), 0xEF));
	// lvx128 v3,r23,r30
	ea = (r23.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v59,v59,v53
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v53.f32), 0xEF));
	// lvx128 v38,r23,r29
	ea = (r23.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r23,r27
	ea = (r23.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v47,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmsum3fp128 v43,v43,v55
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v55.f32), 0xEF));
	// lvx128 v55,r23,r10
	ea = (r23.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v2,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrlimi128 v49,v34,4,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 4));
	// lvx128 v34,r23,r31
	ea = (r23.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v42,v44,4,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 4));
	// vrlimi128 v45,v13,3,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vrlimi128 v32,v40,1,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v40.f32), 228), 1));
	// vsubfp128 v13,v49,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v35,v37,1,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// vsubfp128 v10,v42,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v63,v56,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 4));
	// vcfpuxws128 v49,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v11,v32,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v9,v35,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v8,v63,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v45,v4,v57
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v57.f32), 0xEF));
	// vmaddfp128 v33,v13,v1,v33
	simde_mm_store_ps(ctx.v33.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v33.f32)));
	// vmaddfp v13,v11,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v42,r23,r6
	ea = (r23.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v47,v10,v1,v47
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r23,r8
	ea = (r23.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v35,v3,11
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v37,r23,r4
	ea = (r23.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v53,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v32,r23,r11
	ea = (r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v5,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v59,v51,1,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 1));
	// vcsxwfp128 v63,v38,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v38,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v53,v6,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor v31,v0,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v51,v34,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor v30,v0,v0
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v56,v7,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v42,v42,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v34,v55,11
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vor128 v55,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcsxwfp128 v44,v44,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v33,v12,3,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 3));
	// vcsxwfp128 v37,v37,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v32,v32,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v47,v13,3,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vsubfp128 v13,v59,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v58,v35,v58
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v58.f32), 0xEF));
	// vrlimi128 v45,v43,4,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 228), 4));
	// vmsum3fp128 v35,v57,v61
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v61.f32), 0xEF));
	// vmsum3fp128 v59,v40,v52
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v52.f32), 0xEF));
	// vcfpuxws128 v40,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v33.f32)));
	// vmsum3fp128 v52,v63,v60
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xEF));
	// vmaddfp v11,v9,v1,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v61,v53,v41
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v41.f32), 0xEF));
	// vmaddfp128 v2,v8,v1,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vsubfp128 v12,v45,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v60,v51,v36
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v36.f32), 0xEF));
	// vmsum3fp128 v33,v56,v39
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v39.f32), 0xEF));
	// vcfpuxws128 v63,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vmsum3fp128 v53,v42,v50
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v50.f32), 0xEF));
	// vmsum3fp128 v57,v34,v46
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v46.f32), 0xEF));
	// vmsum3fp128 v56,v44,v48
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v48.f32), 0xEF));
	// vmsum3fp128 v51,v37,v54
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v54.f32), 0xEF));
	// vmsum3fp128 v50,v32,v62
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v62.f32), 0xEF));
	// vmaddfp v13,v13,v1,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkswus128 v49,v40,v49
	simde_mm_store_si128((simde__m128i*)ctx.v49.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v40.s32)));
	// vrlimi128 v2,v11,3,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 3));
	// vmaddfp128 v38,v12,v1,v38
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v38.f32)));
	// vrlimi128 v58,v59,4,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vrlimi128 v35,v52,1,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 228), 1));
	// vcfpuxws128 v48,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v61,v33,1,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 1));
	// vsubfp128 v11,v58,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v10,v35,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v57,v60,4,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 4));
	// vrlimi128 v53,v56,1,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 1));
	// vsubfp128 v12,v61,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v50,v51,4,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 4));
	// vsubfp128 v9,v57,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v38,v13,3,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 3));
	// vsubfp128 v8,v53,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v13,v50,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpkswus128 v47,v48,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vcfpuxws128 v45,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// vmaddfp128 v55,v11,v1,v55
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v55.f32)));
	// vmaddfp v11,v10,v1,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vpkuhus128 v46,v47,v49
	vTemp.u8[15] = ctx.v47.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[7];
	vTemp.u8[7] = ctx.v49.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[7];
	vTemp.u8[14] = ctx.v47.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[6];
	vTemp.u8[6] = ctx.v49.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[6];
	vTemp.u8[13] = ctx.v47.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[5];
	vTemp.u8[5] = ctx.v49.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[5];
	vTemp.u8[12] = ctx.v47.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[4];
	vTemp.u8[4] = ctx.v49.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[4];
	vTemp.u8[11] = ctx.v47.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[3];
	vTemp.u8[3] = ctx.v49.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[3];
	vTemp.u8[10] = ctx.v47.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[2];
	vTemp.u8[2] = ctx.v49.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[2];
	vTemp.u8[9] = ctx.v47.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[1];
	vTemp.u8[1] = ctx.v49.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[1];
	vTemp.u8[8] = ctx.v47.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[0];
	vTemp.u8[0] = ctx.v49.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v49.u16[0];
	ctx.v46 = vTemp;
	// vmaddfp v12,v12,v1,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v31,v9,v1,v31
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v10,v8,v1,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v30,v13,v1,v30
	simde_mm_store_ps(v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v30.f32)));
	// stvlx128 v46,r0,r25
	ea = r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvrx128 v46,r25,r11
	ea = r25.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v46.u8[i]);
	// vrlimi128 v55,v12,3,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 3));
	// vrlimi128 v31,v11,3,0
	simde_mm_store_ps(v31.f32, simde_mm_blend_ps(simde_mm_load_ps(v31.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 228), 3));
	// vcfpuxws128 v44,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v30,v10,3,0
	simde_mm_store_ps(v30.f32, simde_mm_blend_ps(simde_mm_load_ps(v30.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 3));
	// vcfpuxws128 v43,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(v31.f32)));
	// vcfpuxws128 v42,v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(v30.f32)));
	// vpkswus128 v41,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// vpkswus128 v40,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v40.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vpkuhus128 v39,v40,v41
	vTemp.u8[15] = ctx.v40.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[7];
	vTemp.u8[7] = ctx.v41.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[7];
	vTemp.u8[14] = ctx.v40.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[6];
	vTemp.u8[6] = ctx.v41.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[6];
	vTemp.u8[13] = ctx.v40.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[5];
	vTemp.u8[5] = ctx.v41.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[5];
	vTemp.u8[12] = ctx.v40.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[4];
	vTemp.u8[4] = ctx.v41.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[4];
	vTemp.u8[11] = ctx.v40.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[3];
	vTemp.u8[3] = ctx.v41.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[3];
	vTemp.u8[10] = ctx.v40.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[2];
	vTemp.u8[2] = ctx.v41.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[2];
	vTemp.u8[9] = ctx.v40.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[1];
	vTemp.u8[1] = ctx.v41.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[1];
	vTemp.u8[8] = ctx.v40.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v40.u16[0];
	vTemp.u8[0] = ctx.v41.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v41.u16[0];
	ctx.v39 = vTemp;
	// stvlx128 v39,r0,r24
	ea = r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r24,r11
	ea = r24.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82769808) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82769844
	if (ctx.cr6.eq) goto loc_82769844;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82769844
	if (!ctx.cr6.eq) goto loc_82769844;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276983C;
	sub_8271B1A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82769844:
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

DEFINE_REX_FUNC(sub_8276AF10) {
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
	ctx.lr = 0x8276AF18;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8276AF34:
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhzu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// mulli r5,r4,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r3,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subf r29,r7,r9
	r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mulli r3,r3,1892
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r4,r4,784
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(784));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r7,r30,1448
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1448));
	// subf r5,r3,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1448));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r4,64
	ctx.r5.s64 = ctx.r4.s64 + 64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r6,64
	ctx.r3.s64 = ctx.r6.s64 + 64;
	// srawi r7,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 7;
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// srawi r5,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// srawi r4,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 7;
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// sth r4,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8276af34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276AF34;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r26,r11,r9
	r26.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r25,r11,r7
	r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r24,r11,r5
	r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r23,r11,r7
	r23.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r22,r11,r8
	r22.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8276B004:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r6,r22,r11
	ctx.r6.u64 = REX_LOAD_U16(r22.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r5,r24,r11
	ctx.r5.u64 = REX_LOAD_U16(r24.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r4,r25,r11
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r3,r23,r11
	ctx.r3.u64 = REX_LOAD_U16(r23.u32 + ctx.r11.u32);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r31,r26,r11
	r31.u64 = REX_LOAD_U16(r26.u32 + ctx.r11.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r30,r10,r11
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// lhzx r29,r9,r11
	r29.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r27,r6,3406
	r27.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,2276
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(2276));
	// mulli r6,r28,2408
	ctx.r6.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(2408));
	// subf r28,r27,r8
	r28.u64 = ctx.r8.u64 - r27.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mulli r6,r5,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r5,r4,4017
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(4017));
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// srawi r6,r28,3
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7) != 0);
	ctx.r6.s64 = r28.s32 >> 3;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// mulli r8,r27,1108
	ctx.r8.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(1108));
	// extsh r30,r30
	r30.s64 = r30.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r21,r3,3784
	r21.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3784));
	// mulli r3,r31,1568
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1568));
	// subf r28,r5,r7
	r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r27,r4,r6
	r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// subf r21,r21,r8
	r21.u64 = ctx.r8.u64 - r21.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r20,r27,r28
	r20.u64 = r27.u64 + r28.u64;
	// rlwinm r30,r31,8,0,23
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r21,3
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7) != 0);
	ctx.r3.s64 = r21.s32 >> 3;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r31.s64 = ctx.r8.s32 >> 3;
	// subf r28,r27,r28
	r28.u64 = r28.u64 - r27.u64;
	// add r8,r29,r30
	ctx.r8.u64 = r29.u64 + r30.u64;
	// mulli r21,r20,181
	r21.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(181));
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// subf r30,r31,r8
	r30.u64 = ctx.r8.u64 - r31.u64;
	// mulli r28,r28,181
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(181));
	// addi r27,r21,128
	r27.s64 = r21.s64 + 128;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = r27.s32 >> 8;
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// add r27,r7,r8
	r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r3,r29
	r31.u64 = r29.u64 - ctx.r3.u64;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + r29.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = r28.s32 >> 8;
	// srawi r28,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r28.s64 = r27.s32 >> 14;
	// add r29,r5,r4
	r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// sthx r28,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, r28.u16);
	// add r28,r30,r6
	r28.u64 = r30.u64 + ctx.r6.u64;
	// srawi r29,r29,14
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FFF) != 0);
	r29.s64 = r29.s32 >> 14;
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r29.u16);
	// srawi r27,r27,14
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FFF) != 0);
	r27.s64 = r27.s32 >> 14;
	// srawi r31,r28,14
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FFF) != 0);
	r31.s64 = r28.s32 >> 14;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r6,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 14;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r7,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 14;
	// srawi r5,r5,14
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 14;
	// sthx r27,r26,r11
	REX_STORE_U16(r26.u32 + ctx.r11.u32, r27.u16);
	// srawi r4,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 14;
	// sthx r31,r25,r11
	REX_STORE_U16(r25.u32 + ctx.r11.u32, r31.u16);
	// sthx r6,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u16);
	// sthx r7,r24,r11
	REX_STORE_U16(r24.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r5,r23,r11
	REX_STORE_U16(r23.u32 + ctx.r11.u32, ctx.r5.u16);
	// sthx r4,r22,r11
	REX_STORE_U16(r22.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8276b004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276B004;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8277E208) {
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

