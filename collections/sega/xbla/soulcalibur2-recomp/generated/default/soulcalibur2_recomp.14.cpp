#include "soulcalibur2_funcs.14.h"

DEFINE_REX_FUNC(sub_820E06E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// bl 0x820e00c0
	ctx.lr = 0x820E0744;
	sub_820E00C0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
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

DEFINE_REX_FUNC(sub_820EA220) {
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
	ctx.lr = 0x820EA228;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r27,r11,432
	r27.s64 = ctx.r11.s64 + 432;
	// addi r3,r27,84
	ctx.r3.s64 = r27.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EA23C;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ea308
	if (!ctx.cr0.eq) goto loc_820EA308;
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r30,r11,-28232
	r30.s64 = ctx.r11.s64 + -28232;
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwa r10,80(r11)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 80));
	// lfs f0,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f13,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwa r9,84(r11)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 84));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r4,88(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x82202560
	ctx.lr = 0x820EA2A0;
	sub_82202560(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea2d0
	if (ctx.cr6.eq) goto loc_820EA2D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82202560
	ctx.lr = 0x820EA2C0;
	sub_82202560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r11.u32);
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// sth r28,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r28.u16);
loc_820EA2D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820ea300
	if (!ctx.cr6.gt) goto loc_820EA300;
	// addi r3,r27,84
	ctx.r3.s64 = r27.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EA2E8;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ea308
	if (!ctx.cr0.eq) goto loc_820EA308;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x820ea308
	goto loc_820EA308;
loc_820EA300:
	// lwz r11,-32480(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// sth r28,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r28.u16);
loc_820EA308:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820F0DF0) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f0e2c
	if (!ctx.cr6.eq) goto loc_820F0E2C;
	// bl 0x82135998
	ctx.lr = 0x820F0E24;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f0e4c
	if (!ctx.cr0.eq) goto loc_820F0E4C;
loc_820F0E2C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820ef940
	ctx.lr = 0x820F0E4C;
	sub_820EF940(ctx, base);
loc_820F0E4C:
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

DEFINE_REX_FUNC(sub_820F34A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r8,r11,432
	ctx.r8.s64 = ctx.r11.s64 + 432;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,31920(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 31920);
	// lha r10,30(r8)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 30));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820f34d0
	if (ctx.cr6.eq) goto loc_820F34D0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820f34f4
	if (!ctx.cr6.eq) goto loc_820F34F4;
loc_820F34D0:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x820f34e4
	if (ctx.cr6.eq) goto loc_820F34E4;
	// lwz r11,9332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 9332);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x820f34e8
	goto loc_820F34E8;
loc_820F34E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F34E8:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bge cr6,0x820f34f4
	if (!ctx.cr6.lt) goto loc_820F34F4;
	// li r11,-2
	ctx.r11.s64 = -2;
loc_820F34F4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820f3528
	if (ctx.cr6.lt) goto loc_820F3528;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bgt cr6,0x820f3528
	if (ctx.cr6.gt) goto loc_820F3528;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,872(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 872);
	// lha r10,56(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 56));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,8336(r3)
	REX_STORE_U32(ctx.r3.u32 + 8336, ctx.r11.u32);
loc_820F3528:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8336);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r9,r8
	temp.u8 = (~ctx.r9.u32 + ctx.r8.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,8336(r3)
	REX_STORE_U32(ctx.r3.u32 + 8336, ctx.r11.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x820f3554
	if (ctx.cr6.lt) goto loc_820F3554;
	// li r11,13
	ctx.r11.s64 = 13;
loc_820F3554:
	// stw r11,8336(r3)
	REX_STORE_U32(ctx.r3.u32 + 8336, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F93B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r10,r4,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(48));
	// stw r4,6348(r3)
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r4.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,7256(r3)
	REX_STORE_U32(ctx.r3.u32 + 7256, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F9BE8) {
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
	// lhz r6,2076(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x820f9c9c
	if (ctx.cr0.eq) goto loc_820F9C9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x820f9c48
	if (!ctx.cr6.gt) goto loc_820F9C48;
	// lwz r9,4264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4264);
	// addi r10,r31,46
	ctx.r10.s64 = r31.s64 + 46;
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mulli r7,r9,496
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(496));
loc_820F9C28:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// blt cr6,0x820f9c28
	if (ctx.cr6.lt) goto loc_820F9C28;
loc_820F9C48:
	// bl 0x820fed80
	ctx.lr = 0x820F9C4C;
	sub_820FED80(ctx, base);
	// lhz r5,2076(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 2076);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x820f9c9c
	if (!ctx.cr0.gt) goto loc_820F9C9C;
	// lwz r9,4264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4264);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mulli r6,r9,496
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(496));
loc_820F9C70:
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f9cb4
	if (ctx.cr6.lt) goto loc_820F9CB4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820f9c70
	if (ctx.cr6.lt) goto loc_820F9C70;
loc_820F9C9C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F9CA0:
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
loc_820F9CB4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x820f9ca0
	goto loc_820F9CA0;
}

DEFINE_REX_FUNC(sub_820FD2F8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fd364
	if (ctx.cr6.lt) goto loc_820FD364;
	// beq cr6,0x820fd34c
	if (ctx.cr6.eq) goto loc_820FD34C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fd3b8
	if (!ctx.cr6.lt) goto loc_820FD3B8;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD338;
	sub_820F8D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,590(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 590);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd3b8
	if (!ctx.cr0.eq) goto loc_820FD3B8;
	// b 0x820fd3b4
	goto loc_820FD3B4;
loc_820FD34C:
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD35C;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fd3b4
	goto loc_820FD3B4;
loc_820FD364:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD378;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd3a0
	if (!ctx.cr0.eq) goto loc_820FD3A0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd3a0
	if (ctx.cr0.eq) goto loc_820FD3A0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD39C;
	sub_820F8D58(ctx, base);
	// b 0x820fd3b8
	goto loc_820FD3B8;
loc_820FD3A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD3B0;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FD3B4:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD3B8:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd3f8
	if (!ctx.cr0.eq) goto loc_820FD3F8;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd3f8
	if (!ctx.cr0.eq) goto loc_820FD3F8;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd3f8
	if (!ctx.cr0.eq) goto loc_820FD3F8;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd3f8
	if (!ctx.cr0.eq) goto loc_820FD3F8;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd414
	if (ctx.cr0.eq) goto loc_820FD414;
loc_820FD3F8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fd414
	if (ctx.cr6.eq) goto loc_820FD414;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD414;
	sub_820F8D58(ctx, base);
loc_820FD414:
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

DEFINE_REX_FUNC(sub_82101D68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82102C38) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82102c80
	if (ctx.cr6.eq) goto loc_82102C80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82102c80
	if (ctx.cr6.eq) goto loc_82102C80;
	// lfs f12,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// lfs f11,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// b 0x82102c88
	goto loc_82102C88;
loc_82102C80:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
loc_82102C88:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f8,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fnmsubs f13,f8,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f13.f64)));
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fnmsubs f6,f7,f0,f12
	ctx.f6.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f12.f64)));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
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
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfs f10,26544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26544);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,26540(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26540);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,26944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26944);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,26940(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26940);
	ctx.f11.f64 = double(temp.f32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f0,f10,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f7248
	ctx.lr = 0x82102D68;
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

DEFINE_REX_FUNC(sub_8210EAA8) {
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
	// lhz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 208);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8210ebe0
	if (!ctx.cr0.eq) goto loc_8210EBE0;
	// lbz r11,123(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 123);
	// lbz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// lbz r9,124(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8210e480
	ctx.lr = 0x8210EAF0;
	sub_8210E480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8210eb3c
	if (ctx.cr6.eq) goto loc_8210EB3C;
	// lbz r11,127(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 127);
	// stb r3,123(r31)
	REX_STORE_U8(r31.u32 + 123, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,127(r31)
	REX_STORE_U8(r31.u32 + 127, ctx.r11.u8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8210eb24
	if (ctx.cr6.lt) goto loc_8210EB24;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,127(r31)
	REX_STORE_U8(r31.u32 + 127, ctx.r11.u8);
loc_8210EB24:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210e680
	ctx.lr = 0x8210EB30;
	sub_8210E680(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8210EB3C;
	sub_8212BC38(ctx, base);
loc_8210EB3C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210eb70
	if (ctx.cr0.eq) goto loc_8210EB70;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8210EB70:
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210ebbc
	if (ctx.cr0.eq) goto loc_8210EBBC;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210e680
	ctx.lr = 0x8210EB84;
	sub_8210E680(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,122(r31)
	REX_STORE_U8(r31.u32 + 122, ctx.r11.u8);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,2024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x8210EBA8;
	sub_821AFA50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,26
	ctx.r3.s64 = 26;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// sth r11,208(r31)
	REX_STORE_U16(r31.u32 + 208, ctx.r11.u16);
	// bl 0x8212bc38
	ctx.lr = 0x8210EBBC;
	sub_8212BC38(ctx, base);
loc_8210EBBC:
	// andi. r11,r30,16416
	ctx.r11.u64 = r30.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210ebe0
	if (ctx.cr0.eq) goto loc_8210EBE0;
	// li r3,27
	ctx.r3.s64 = 27;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8210EBD4;
	sub_8212BC38(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23880(r10)
	REX_STORE_U8(ctx.r10.u32 + 23880, ctx.r11.u8);
loc_8210EBE0:
	// lbz r11,125(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 125);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8210ec00
	if (!ctx.cr6.gt) goto loc_8210EC00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,42
	ctx.r11.s64 = 42;
	// lfs f13,2344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8210ec0c
	goto loc_8210EC0C;
loc_8210EC00:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,56
	ctx.r11.s64 = 56;
	// lfs f13,28452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28452);
	ctx.f13.f64 = double(temp.f32);
loc_8210EC0C:
	// lbz r10,126(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 126);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lbz r9,123(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 123);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r6,112(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// divw r9,r10,r7
	ctx.r9.u64 = uint32_t((ctx.r7.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r10.s32 / ctx.r7.s32 : 0);
	// lfs f10,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// divw r5,r10,r7
	ctx.r5.u64 = uint32_t((ctx.r7.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r10.s32 / ctx.r7.s32 : 0);
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stfs f0,88(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// lfs f12,2380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f12.f64 = double(temp.f32);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// andc r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f13,f8,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f11,84(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,80(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8210edb4
	if (!ctx.cr0.gt) goto loc_8210EDB4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
loc_8210ECE8:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8210ed9c
	if (ctx.cr6.eq) goto loc_8210ED9C;
	// lbz r8,123(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 123);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// bne cr6,0x8210ed58
	if (!ctx.cr6.eq) goto loc_8210ED58;
	// stfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f12,64(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f12,68(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// b 0x8210ed9c
	goto loc_8210ED9C;
loc_8210ED58:
	// stfs f13,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// stfs f0,68(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
loc_8210ED9C:
	// lbz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 124);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8210ece8
	if (ctx.cr6.lt) goto loc_8210ECE8;
loc_8210EDB4:
	// lbz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 120);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8210e7d8
	ctx.lr = 0x8210EDC0;
	sub_8210E7D8(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// bl 0x82101d88
	ctx.lr = 0x8210EDD8;
	sub_82101D88(ctx, base);
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

DEFINE_REX_FUNC(sub_8211AD38) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,192(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f2,200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211adb4
	if (!ctx.cr6.gt) goto loc_8211ADB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30984(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30984);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8211adb4
	if (!ctx.cr6.gt) goto loc_8211ADB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211adb4
	if (!ctx.cr6.lt) goto loc_8211ADB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30988(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30988);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x8211adb4
	if (!ctx.cr6.gt) goto loc_8211ADB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8211adb4
	if (!ctx.cr6.lt) goto loc_8211ADB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
loc_8211ADB4:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8211ade8
	if (!ctx.cr6.eq) goto loc_8211ADE8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125860
	ctx.lr = 0x8211ADD8;
	sub_82125860(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30996);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
loc_8211ADE8:
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

DEFINE_REX_FUNC(sub_8211E690) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211E968) {
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
	ctx.lr = 0x8211E970;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8211ea50
	if (ctx.cr6.eq) goto loc_8211EA50;
	// lwz r31,80(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8211e9ec
	goto loc_8211E9EC;
loc_8211E9B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211E9D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x8211E9E8;
	sub_820E1B28(ctx, base);
	// lwz r31,80(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8211E9EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8211e9b8
	if (!ctx.cr6.eq) goto loc_8211E9B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cc0
	ctx.lr = 0x8211EA04;
	sub_820E1CC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x8211EA0C;
	sub_820E22E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8211ea2c
	if (!ctx.cr6.gt) goto loc_8211EA2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cf8
	ctx.lr = 0x8211EA2C;
	sub_820E1CF8(ctx, base);
loc_8211EA2C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8211ea5c
	if (!ctx.cr6.eq) goto loc_8211EA5C;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8211ea5c
	if (!ctx.cr6.eq) goto loc_8211EA5C;
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8211ea5c
	if (!ctx.cr6.eq) goto loc_8211EA5C;
loc_8211EA50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8211EA5C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821224A8) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x821224B0;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f38
	ctx.lr = 0x821224B8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r29,-32170
	r29.s64 = -2108293120;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r23,r11,30520
	r23.s64 = ctx.r11.s64 + 30520;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,29816(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 29816);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x82122920
	if (!ctx.cr6.lt) goto loc_82122920;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r6,r8,-30244
	ctx.r6.s64 = ctx.r8.s64 + -30244;
	// addi r9,r11,3144
	ctx.r9.s64 = ctx.r11.s64 + 3144;
	// addi r8,r10,2392
	ctx.r8.s64 = ctx.r10.s64 + 2392;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,131
	ctx.r4.s64 = 131;
	// bl 0x821f7d50
	ctx.lr = 0x82122518;
	sub_821F7D50(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x82122534
	if (ctx.cr0.eq) goto loc_82122534;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82122538
	goto loc_82122538;
loc_82122534:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82122538:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82122920
	if (ctx.cr6.eq) goto loc_82122920;
	// lwz r11,29816(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 29816);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// addi r31,r10,80
	r31.s64 = ctx.r10.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r9,7104
	ctx.r10.s64 = ctx.r9.s64 + 7104;
	// stw r11,29816(r29)
	REX_STORE_U32(r29.u32 + 29816, ctx.r11.u32);
	// mulli r11,r28,192
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(192));
	// li r5,192
	ctx.r5.s64 = 192;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ff870
	ctx.lr = 0x8212256C;
	sub_821FF870(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// lha r10,142(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 142));
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// beq 0x821225ac
	if (ctx.cr0.eq) goto loc_821225AC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821225cc
	if (!ctx.cr6.eq) goto loc_821225CC;
loc_821225AC:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29640
	ctx.r10.s64 = ctx.r10.s64 + 29640;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f0,2376(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821225CC:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(r22.s32, 7, ctx.xer);
	// lfs f13,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// bne cr6,0x8212260c
	if (!ctx.cr6.eq) goto loc_8212260C;
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,35056
	ctx.r11.u64 = ctx.r11.u64 | 35056;
	// sth r10,142(r31)
	REX_STORE_U16(r31.u32 + 142, ctx.r10.u16);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_8212260C:
	// stb r26,123(r31)
	REX_STORE_U8(r31.u32 + 123, r26.u8);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// sth r22,8(r31)
	REX_STORE_U16(r31.u32 + 8, r22.u16);
	// addi r21,r31,12
	r21.s64 = r31.s64 + 12;
	// lwz r11,52(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 52);
	// addi r30,r10,-8304
	r30.s64 = ctx.r10.s64 + -8304;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// mulli r4,r22,80
	ctx.r4.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(80));
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r3,496(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x82122638;
	sub_82190558(ctx, base);
	// addi r18,r31,160
	r18.s64 = r31.s64 + 160;
	// rlwinm r4,r22,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,496(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 496);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x82190558
	ctx.lr = 0x8212264C;
	sub_82190558(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212291c
	if (ctx.cr6.eq) goto loc_8212291C;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212291c
	if (ctx.cr6.eq) goto loc_8212291C;
	// lhz r10,142(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 142);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r17,1
	r17.s64 = 1;
	// mr r19,r26
	r19.u64 = r26.u64;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r23,r11,-27848
	r23.s64 = ctx.r11.s64 + -27848;
	// bne cr6,0x821226bc
	if (!ctx.cr6.eq) goto loc_821226BC;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x82122690;
	sub_820E1EC0(ctx, base);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x821226A0;
	sub_820E1EC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// mr r19,r17
	r19.u64 = r17.u64;
	// sth r17,142(r31)
	REX_STORE_U16(r31.u32 + 142, r17.u16);
	// lfs f0,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
loc_821226BC:
	// mr r24,r26
	r24.u64 = r26.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82122914
	if (!ctx.cr6.gt) goto loc_82122914;
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r25,r26
	r25.u64 = r26.u64;
	// addi r27,r31,48
	r27.s64 = r31.s64 + 48;
	// addi r20,r11,9600
	r20.s64 = ctx.r11.s64 + 9600;
	// lfs f31,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fdivs f28,f29,f0
	f28.f64 = double(float(f29.f64 / ctx.f0.f64));
loc_82122708:
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r9,r20,-8
	ctx.r9.s64 = r20.s64 + -8;
	// add r30,r26,r10
	r30.u64 = r26.u64 + ctx.r10.u64;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82122720:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82122720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82122720;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// bl 0x821fec88
	ctx.lr = 0x82122740;
	sub_821FEC88(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stb r11,77(r30)
	REX_STORE_U8(r30.u32 + 77, ctx.r11.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stfs f30,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f30,20(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stfs f30,24(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f30,28(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// add r29,r11,r25
	r29.u64 = ctx.r11.u64 + r25.u64;
	// beq cr6,0x82122798
	if (ctx.cr6.eq) goto loc_82122798;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x82122798;
	sub_820E1EC0(ctx, base);
loc_82122798:
	// lha r11,100(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x821227c4
	if (!ctx.cr6.eq) goto loc_821227C4;
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821227d8
	goto loc_821227D8;
loc_821227C4:
	// bl 0x821fedc8
	ctx.lr = 0x821227C8;
	sub_821FEDC8(ctx, base);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_821227D8:
	// stfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821227F0;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821227FC;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82122808;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x82122820;
	sub_820E2290(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cf8
	ctx.lr = 0x82122830;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x82122840;
	sub_820E1B70(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x82122844;
	sub_821FEDC8(ctx, base);
	// extsw r11,r24
	ctx.r11.s64 = r24.s32;
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f28,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f0.f64)));
	// bl 0x820e00c0
	ctx.lr = 0x8212286C;
	sub_820E00C0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfs f30,52(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f30,60(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f1,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82122894;
	sub_820E1CC0(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x82122898;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821228A4;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821228B0;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1b70
	ctx.lr = 0x821228C8;
	sub_820E1B70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e2290
	ctx.lr = 0x821228D4;
	sub_820E2290(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x821228D8;
	sub_821FEDC8(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821228EC;
	sub_820E1CF8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x821228FC;
	sub_820E1EC0(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stfs f29,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r26,r26,80
	r26.s64 = r26.s64 + 80;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(r24.s32, r22.s32, ctx.xer);
	// blt cr6,0x82122708
	if (ctx.cr6.lt) goto loc_82122708;
loc_82122914:
	// stb r17,123(r31)
	REX_STORE_U8(r31.u32 + 123, r17.u8);
	// b 0x82122920
	goto loc_82122920;
loc_8212291C:
	// stb r26,123(r31)
	REX_STORE_U8(r31.u32 + 123, r26.u8);
loc_82122920:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f84
	ctx.lr = 0x8212292C;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_821330A8) {
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
	// b 0x821330dc
	goto loc_821330DC;
loc_821330D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_821330DC:
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,9(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x821330d0
	if (!ctx.cr6.eq) goto loc_821330D0;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8213310c
	if (!ctx.cr6.lt) goto loc_8213310C;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_8213310C:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134170) {
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
	ctx.lr = 0x82134184;
	sub_82133B28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82133ad0
	ctx.lr = 0x82134190;
	sub_82133AD0(ctx, base);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8213419c
	if (ctx.cr6.lt) goto loc_8213419C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8213419C:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821341e4
	if (!ctx.cr6.lt) goto loc_821341E4;
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
	// lha r3,18(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 18));
	// rlwinm. r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821341e8
	if (ctx.cr0.eq) goto loc_821341E8;
loc_821341E4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821341E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136010) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x82136048
	if (ctx.cr6.eq) goto loc_82136048;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82133f70
	sub_82133F70(ctx, base);
	return;
loc_82136048:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// addi r9,r9,21824
	ctx.r9.s64 = ctx.r9.s64 + 21824;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821333a0
	sub_821333A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821391B8) {
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
	ctx.lr = 0x821391C0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-24940(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24940);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lfs f13,28452(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28452);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x8212fe30
	ctx.lr = 0x821391F4;
	sub_8212FE30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r10,-24640
	ctx.r3.s64 = ctx.r10.s64 + -24640;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfd f2,-24624(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -24624);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82139224;
	sub_821EACB0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,23000
	ctx.r10.s64 = ctx.r11.s64 + 23000;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
loc_8213923C:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82139404
	if (ctx.cr6.lt) goto loc_82139404;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,804
	ctx.r7.s64 = ctx.r10.s64 + 804;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8213923c
	if (!ctx.cr6.gt) goto loc_8213923C;
	// li r30,1
	r30.s64 = 1;
loc_82139260:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82137518
	ctx.lr = 0x82139268;
	sub_82137518(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,55
	ctx.r3.u64 = ctx.r3.u64 | 55;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82139284;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r10,-24676
	ctx.r3.s64 = ctx.r10.s64 + -24676;
	// lfd f2,-24648(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -24648);
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821392C4;
	sub_821EACB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,524(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// beq cr6,0x82139368
	if (ctx.cr6.eq) goto loc_82139368;
	// lhz r10,524(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r11,528(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 528);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821356e0
	ctx.lr = 0x821392F8;
	sub_821356E0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139338
	if (ctx.cr6.eq) goto loc_82139338;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,263
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 263, ctx.xer);
	// bne cr6,0x82139338
	if (!ctx.cr6.eq) goto loc_82139338;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// ori r4,r4,255
	ctx.r4.u64 = ctx.r4.u64 | 255;
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139338
	if (ctx.cr0.eq) goto loc_82139338;
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// ori r4,r4,255
	ctx.r4.u64 = ctx.r4.u64 | 255;
loc_82139338:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,26532
	ctx.r3.s64 = ctx.r11.s64 + 26532;
	// bl 0x821eacb0
	ctx.lr = 0x82139344;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-24680(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24680);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x82139368;
	sub_820E6D50(ctx, base);
loc_82139368:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,85
	ctx.r7.s64 = 5570560;
	// addi r9,r10,-8304
	ctx.r9.s64 = ctx.r10.s64 + -8304;
	// ori r10,r7,8440
	ctx.r10.u64 = ctx.r7.u64 | 8440;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,16788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,-24684(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24688(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24688);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// beq cr6,0x821393bc
	if (ctx.cr6.eq) goto loc_821393BC;
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f13,116(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
loc_821393BC:
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// ori r10,r10,8444
	ctx.r10.u64 = ctx.r10.u64 | 8444;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821393dc
	if (ctx.cr6.eq) goto loc_821393DC;
	// stfs f0,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f13,116(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
loc_821393DC:
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// ori r10,r10,8448
	ctx.r10.u64 = ctx.r10.u64 | 8448;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821393f8
	if (ctx.cr6.eq) goto loc_821393F8;
	// stfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f13,116(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
loc_821393F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_82139404:
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// b 0x82139260
	goto loc_82139260;
}

DEFINE_REX_FUNC(sub_8214A748) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0250
	ctx.lr = 0x8214A764;
	sub_820E0250(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x8214A774;
	sub_820E0590(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8214a7ac
	if (!ctx.cr6.lt) goto loc_8214A7AC;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8214a7ac
	if (!ctx.cr6.lt) goto loc_8214A7AC;
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8214a7b4
	goto loc_8214A7B4;
loc_8214A7AC:
	// lfs f2,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
loc_8214A7B4:
	// bl 0x820e0130
	ctx.lr = 0x8214A7B8;
	sub_820E0130(ctx, base);
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

DEFINE_REX_FUNC(sub_8214CBB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r11,r11,16952
	ctx.r11.s64 = ctx.r11.s64 + 16952;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// bne cr6,0x8214cbf0
	if (!ctx.cr6.eq) goto loc_8214CBF0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,-24240(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24240);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8214cc04
	goto loc_8214CC04;
loc_8214CBF0:
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,-19324(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19324);
	ctx.f13.f64 = double(temp.f32);
loc_8214CC04:
	// frsp f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f13,-19328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19328);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214F4E8) {
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
	// bl 0x822d4e88
	ctx.lr = 0x8214F4F0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x8214F4F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,144(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8214f51c
	if (!ctx.cr6.eq) goto loc_8214F51C;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// b 0x8214f6ac
	goto loc_8214F6AC;
loc_8214F51C:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f29,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f29.f64 = double(temp.f32);
	// ori r30,r6,3696
	r30.u64 = ctx.r6.u64 | 3696;
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// addi r29,r11,13128
	r29.s64 = ctx.r11.s64 + 13128;
	// addi r28,r10,-7072
	r28.s64 = ctx.r10.s64 + -7072;
	// bne cr6,0x8214f5c8
	if (!ctx.cr6.eq) goto loc_8214F5C8;
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8214f578
	if (ctx.cr6.lt) goto loc_8214F578;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x8218e510
	ctx.lr = 0x8214F568;
	sub_8218E510(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x8218e1b0
	ctx.lr = 0x8214F578;
	sub_8218E1B0(ctx, base);
loc_8214F578:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1840(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21808);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8214f5a4
	if (!ctx.cr6.lt) goto loc_8214F5A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,132(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_8214F5A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28428);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8214f5c8
	if (!ctx.cr6.lt) goto loc_8214F5C8;
	// stfs f29,136(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
loc_8214F5C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f30.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x820e0028
	ctx.lr = 0x8214F5DC;
	sub_820E0028(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stb r11,188(r10)
	REX_STORE_U8(ctx.r10.u32 + 188, ctx.r11.u8);
	// lfs f13,31840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// fsubs f29,f31,f28
	f29.f64 = double(float(f31.f64 - f28.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8214F610;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// fsubs f13,f31,f29
	ctx.f13.f64 = double(float(f31.f64 - f29.f64));
	// lfs f0,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f29,f0,f31
	ctx.f0.f64 = double(float(-std::fma(f29.f64, ctx.f0.f64, -f31.f64)));
	// stfs f0,144(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 144, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f0,2352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,148(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// fnmsubs f0,f29,f0,f31
	ctx.f0.f64 = double(float(-std::fma(f29.f64, ctx.f0.f64, -f31.f64)));
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 * ctx.f0.f64));
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// addi r29,r11,196
	r29.s64 = ctx.r11.s64 + 196;
	// bl 0x820e0028
	ctx.lr = 0x8214F678;
	sub_820E0028(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e2028
	ctx.lr = 0x8214F688;
	sub_820E2028(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214f69c
	if (ctx.cr6.eq) goto loc_8214F69C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8214f6ac
	if (!ctx.cr6.eq) goto loc_8214F6AC;
loc_8214F69C:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x8218e510
	ctx.lr = 0x8214F6AC;
	sub_8218E510(ctx, base);
loc_8214F6AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x8214F6B8;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8215C750) {
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
	ctx.lr = 0x8215C758;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215cb1c
	if (ctx.cr0.eq) goto loc_8215CB1C;
	// lbz r11,125(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 125);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215cb1c
	if (ctx.cr0.eq) goto loc_8215CB1C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x8215C798;
	sub_820E1DF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x8215C7A8;
	sub_820E1DF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8215c7c8
	if (!ctx.cr6.gt) goto loc_8215C7C8;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8215c7d8
	if (ctx.cr6.lt) goto loc_8215C7D8;
loc_8215C7C8:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8215c7e0
	if (!ctx.cr6.lt) goto loc_8215C7E0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215c7e0
	if (!ctx.cr6.gt) goto loc_8215C7E0;
loc_8215C7D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215c7e4
	goto loc_8215C7E4;
loc_8215C7E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C7E4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,2020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2020);
	f30.f64 = double(temp.f32);
	// beq 0x8215c8d8
	if (ctx.cr0.eq) goto loc_8215C8D8;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// blt cr6,0x8215c8d8
	if (ctx.cr6.lt) goto loc_8215C8D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e2028
	ctx.lr = 0x8215C818;
	sub_820E2028(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fmsubs f12,f9,f0,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8215c850
	if (!ctx.cr6.gt) goto loc_8215C850;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// blt cr6,0x8215c860
	if (ctx.cr6.lt) goto loc_8215C860;
loc_8215C850:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8215c868
	if (!ctx.cr6.lt) goto loc_8215C868;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x8215c868
	if (!ctx.cr6.gt) goto loc_8215C868;
loc_8215C860:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215c86c
	goto loc_8215C86C;
loc_8215C868:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C86C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215c8d8
	if (!ctx.cr0.eq) goto loc_8215C8D8;
	// lfs f13,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// ble cr6,0x8215c8ac
	if (!ctx.cr6.gt) goto loc_8215C8AC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8215c8bc
	if (ctx.cr6.lt) goto loc_8215C8BC;
loc_8215C8AC:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8215c8c4
	if (!ctx.cr6.lt) goto loc_8215C8C4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215c8c4
	if (!ctx.cr6.gt) goto loc_8215C8C4;
loc_8215C8BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215c8c8
	goto loc_8215C8C8;
loc_8215C8C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C8C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215c8d8
	if (!ctx.cr0.eq) goto loc_8215C8D8;
loc_8215C8D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215cb20
	goto loc_8215CB20;
loc_8215C8D8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1df8
	ctx.lr = 0x8215C8E8;
	sub_820E1DF8(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x8215c900
	if (!ctx.cr6.gt) goto loc_8215C900;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8215c910
	if (ctx.cr6.lt) goto loc_8215C910;
loc_8215C900:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8215c918
	if (!ctx.cr6.lt) goto loc_8215C918;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215c918
	if (!ctx.cr6.gt) goto loc_8215C918;
loc_8215C910:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215c91c
	goto loc_8215C91C;
loc_8215C918:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C91C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215ca04
	if (ctx.cr0.eq) goto loc_8215CA04;
	// fsubs f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// blt cr6,0x8215ca04
	if (ctx.cr6.lt) goto loc_8215CA04;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fdivs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e2028
	ctx.lr = 0x8215C948;
	sub_820E2028(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fmsubs f12,f9,f0,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8215c980
	if (!ctx.cr6.gt) goto loc_8215C980;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// blt cr6,0x8215c990
	if (ctx.cr6.lt) goto loc_8215C990;
loc_8215C980:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8215c998
	if (!ctx.cr6.lt) goto loc_8215C998;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x8215c998
	if (!ctx.cr6.gt) goto loc_8215C998;
loc_8215C990:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215c99c
	goto loc_8215C99C;
loc_8215C998:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C99C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215ca00
	if (!ctx.cr0.eq) goto loc_8215CA00;
	// lfs f13,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// ble cr6,0x8215c9dc
	if (!ctx.cr6.gt) goto loc_8215C9DC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8215c9ec
	if (ctx.cr6.lt) goto loc_8215C9EC;
loc_8215C9DC:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8215c9f4
	if (!ctx.cr6.lt) goto loc_8215C9F4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215c9f4
	if (!ctx.cr6.gt) goto loc_8215C9F4;
loc_8215C9EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215c9f8
	goto loc_8215C9F8;
loc_8215C9F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C9F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215c8d0
	if (ctx.cr0.eq) goto loc_8215C8D0;
loc_8215CA00:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
loc_8215CA04:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215ca18
	if (!ctx.cr6.gt) goto loc_8215CA18;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x8215ca28
	if (ctx.cr6.lt) goto loc_8215CA28;
loc_8215CA18:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8215ca30
	if (!ctx.cr6.lt) goto loc_8215CA30;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8215ca30
	if (!ctx.cr6.gt) goto loc_8215CA30;
loc_8215CA28:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215ca34
	goto loc_8215CA34;
loc_8215CA30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CA34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215cb1c
	if (ctx.cr0.eq) goto loc_8215CB1C;
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// blt cr6,0x8215cb1c
	if (ctx.cr6.lt) goto loc_8215CB1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820e2028
	ctx.lr = 0x8215CA60;
	sub_820E2028(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fmsubs f12,f9,f0,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8215ca98
	if (!ctx.cr6.gt) goto loc_8215CA98;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// blt cr6,0x8215caa8
	if (ctx.cr6.lt) goto loc_8215CAA8;
loc_8215CA98:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8215cab0
	if (!ctx.cr6.lt) goto loc_8215CAB0;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x8215cab0
	if (!ctx.cr6.gt) goto loc_8215CAB0;
loc_8215CAA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215cab4
	goto loc_8215CAB4;
loc_8215CAB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CAB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215cb1c
	if (!ctx.cr0.eq) goto loc_8215CB1C;
	// lfs f13,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// lfs f10,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f10,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f13,f9,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f0,f0,f10,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f13.f64)));
	// ble cr6,0x8215caf4
	if (!ctx.cr6.gt) goto loc_8215CAF4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8215cb04
	if (ctx.cr6.lt) goto loc_8215CB04;
loc_8215CAF4:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8215cb0c
	if (!ctx.cr6.lt) goto loc_8215CB0C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8215cb0c
	if (!ctx.cr6.gt) goto loc_8215CB0C;
loc_8215CB04:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215cb10
	goto loc_8215CB10;
loc_8215CB0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CB10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x8215cb20
	if (ctx.cr0.eq) goto loc_8215CB20;
loc_8215CB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215CB20:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82170788) {
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
	// bl 0x8212b000
	ctx.lr = 0x8217079C;
	sub_8212B000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821707c8
	if (ctx.cr0.eq) goto loc_821707C8;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,24664
	r31.s64 = ctx.r10.s64 + 24664;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,24664(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24664);
	// stw r11,2612(r31)
	REX_STORE_U32(r31.u32 + 2612, ctx.r11.u32);
	// bl 0x82199fd0
	ctx.lr = 0x821707C0;
	sub_82199FD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2612(r31)
	REX_STORE_U32(r31.u32 + 2612, ctx.r11.u32);
loc_821707C8:
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

DEFINE_REX_FUNC(sub_82171CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82171CC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8216f788
	ctx.lr = 0x82171CDC;
	sub_8216F788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8216f8a0
	ctx.lr = 0x82171CF4;
	sub_8216F8A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r8,15(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 15);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r7,14(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 14);
	// lbz r6,13(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 13);
	// bl 0x8216ff70
	ctx.lr = 0x82171D10;
	sub_8216FF70(ctx, base);
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82171D18:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82171d18
	if (!ctx.cr6.eq) goto loc_82171D18;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x82171d50
	if (ctx.cr0.eq) goto loc_82171D50;
	// bl 0x8216fa40
	ctx.lr = 0x82171D4C;
	sub_8216FA40(ctx, base);
	// b 0x82171d58
	goto loc_82171D58;
loc_82171D50:
	// lbz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 0);
	// bl 0x8216f8a0
	ctx.lr = 0x82171D58;
	sub_8216F8A0(ctx, base);
loc_82171D58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82173F30) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82173a58
	ctx.lr = 0x82173F48;
	sub_82173A58(ctx, base);
	// mulli r11,r6,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82173F5C;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82174178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r5,-5
	ctx.r11.s64 = ctx.r5.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82174184:
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,9(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,11(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,15(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,17(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,19(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,22(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,23(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,26(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbz r10,27(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// lbzu r10,28(r11)
	ea = 28 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82174184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82174184;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82177940) {
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
	// bl 0x821fee88
	ctx.lr = 0x82177958;
	sub_821FEE88(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
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
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// bl 0x821fee88
	ctx.lr = 0x82177984;
	sub_821FEE88(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
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
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82178C98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, ctx.r11.u8);
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821796F0) {
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
	// bl 0x822d4e80
	ctx.lr = 0x821796F8;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,196(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821798b4
	if (ctx.cr6.eq) goto loc_821798B4;
	// lwz r6,192(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821798b4
	if (ctx.cr6.eq) goto loc_821798B4;
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x821798b4
	if (!ctx.cr6.lt) goto loc_821798B4;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// beq cr6,0x82179794
	if (ctx.cr6.eq) goto loc_82179794;
loc_82179750:
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r9,r11,80
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// stw r10,200(r30)
	REX_STORE_U32(r30.u32 + 200, ctx.r10.u32);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// add r29,r9,r7
	r29.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r31,r11,r6
	r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82179778
	if (!ctx.cr6.eq) goto loc_82179778;
	// stw r28,200(r30)
	REX_STORE_U32(r30.u32 + 200, r28.u32);
loc_82179778:
	// lbz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82179794
	if (ctx.cr0.eq) goto loc_82179794;
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82179750
	if (ctx.cr6.lt) goto loc_82179750;
loc_82179794:
	// addi r4,r30,112
	ctx.r4.s64 = r30.s64 + 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821797A4;
	sub_822D4FA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// stfs f31,16(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f31,20(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f31,24(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// stb r10,76(r29)
	REX_STORE_U8(r29.u32 + 76, ctx.r10.u8);
	// lhz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 208);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// lhz r11,210(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 210);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// lhz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 212);
	// sth r11,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r11.u16);
	// lhz r11,214(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 214);
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// bl 0x82177940
	ctx.lr = 0x8217980C;
	sub_82177940(ctx, base);
	// bl 0x821fecf0
	ctx.lr = 0x82179810;
	sub_821FECF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// beq 0x82179828
	if (ctx.cr0.eq) goto loc_82179828;
	// stfs f30,80(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// b 0x82179834
	goto loc_82179834;
loc_82179828:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
loc_82179834:
	// lwz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 232);
	// stfs f30,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f30,56(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stfs f30,64(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,50(r31)
	REX_STORE_U16(r31.u32 + 50, ctx.r11.u16);
	// lfs f1,204(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82179858;
	sub_820E1CC0(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x8217985C;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16688(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f1,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// sth r28,40(r31)
	REX_STORE_U16(r31.u32 + 40, r28.u16);
	// sth r28,42(r31)
	REX_STORE_U16(r31.u32 + 42, r28.u16);
	// sth r28,44(r31)
	REX_STORE_U16(r31.u32 + 44, r28.u16);
	// sth r28,46(r31)
	REX_STORE_U16(r31.u32 + 46, r28.u16);
	// sth r28,48(r31)
	REX_STORE_U16(r31.u32 + 48, r28.u16);
	// lwz r11,248(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,248(r30)
	REX_STORE_U32(r30.u32 + 248, ctx.r11.u32);
loc_821798B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8217FD08) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x8217FD10;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x8217FD18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,76(r4)
	REX_STORE_U8(ctx.r4.u32 + 76, ctx.r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x821fedc8
	ctx.lr = 0x8217FD34;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	f31.f64 = double(temp.f32);
	// lfs f29,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f29.f64 = double(temp.f32);
	// fsubs f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// lfs f28,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	f28.f64 = double(temp.f32);
	// fmuls f30,f0,f28
	f30.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x821fedc8
	ctx.lr = 0x8217FD54;
	sub_821FEDC8(ctx, base);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,8(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f0,16336(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f31,36(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f30,44(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x821fec88
	ctx.lr = 0x8217FDA8;
	sub_821FEC88(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// stw r11,76(r29)
	REX_STORE_U32(r29.u32 + 76, ctx.r11.u32);
	// bl 0x821fedc8
	ctx.lr = 0x8217FDB4;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
	// stfs f30,32(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f30,36(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f30,40(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// stfs f31,44(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x8217FDE4;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// lfs f13,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,60(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 60, temp.u32);
	// stfs f31,64(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 64, temp.u32);
	// stfs f31,68(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f30,16(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f30,24(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// stfs f30,0(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f30,4(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f30,8(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f31,12(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x8217FE38;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82184268) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821854c0
	sub_821854C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82184390) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x821843b0
	goto loc_821843B0;
loc_8218439C:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821843B0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218439c
	if (!ctx.cr6.eq) goto loc_8218439C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82184A50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82184A58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,254
	ctx.r6.s64 = 254;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822cbac8
	ctx.lr = 0x82184A74;
	sub_822CBAC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82184a84
	if (!ctx.cr0.eq) goto loc_82184A84;
loc_82184A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82184b30
	goto loc_82184B30;
loc_82184A84:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r28,2
	r28.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// sth r28,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822cba08
	ctx.lr = 0x82184AAC;
	sub_822CBA08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82184a7c
	if (ctx.cr0.eq) goto loc_82184A7C;
	// li r30,1
	r30.s64 = 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x822cbb18
	ctx.lr = 0x82184AD0;
	sub_822CBB18(ctx, base);
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822cbac8
	ctx.lr = 0x82184AE4;
	sub_822CBAC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82184a7c
	if (ctx.cr0.eq) goto loc_82184A7C;
	// li r11,1001
	ctx.r11.s64 = 1001;
	// sth r28,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x822cba08
	ctx.lr = 0x82184B0C;
	sub_822CBA08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82184a7c
	if (ctx.cr0.eq) goto loc_82184A7C;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x822cbb18
	ctx.lr = 0x82184B2C;
	sub_822CBB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82184B30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82187FF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82188028
	goto loc_82188028;
loc_82188018:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82188034
	if (ctx.cr6.eq) goto loc_82188034;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_82188028:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82188018
	if (!ctx.cr6.eq) goto loc_82188018;
	// b 0x82188058
	goto loc_82188058;
loc_82188034:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x8218804C;
	sub_822D6840(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82188058:
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

DEFINE_REX_FUNC(sub_82189200) {
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
	ctx.lr = 0x82189208;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(3));
	// add r31,r11,r5
	r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mulli r11,r31,28
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r3,r3,-296
	ctx.r3.s64 = ctx.r3.s64 + -296;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821892e8
	if (ctx.cr6.eq) goto loc_821892E8;
	// bl 0x82209598
	ctx.lr = 0x82189240;
	sub_82209598(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218925c
	if (ctx.cr0.eq) goto loc_8218925C;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82187d00
	ctx.lr = 0x82189254;
	sub_82187D00(ctx, base);
loc_82189254:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821892ec
	goto loc_821892EC;
loc_8218925C:
	// mulli r26,r31,14424
	r26.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(14424));
	// add r25,r26,r28
	r25.u64 = r26.u64 + r28.u64;
	// lwz r11,980(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 980);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82189254
	if (ctx.cr6.eq) goto loc_82189254;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x82189288
	if (ctx.cr6.lt) goto loc_82189288;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82189288:
	// add r27,r11,r30
	r27.u64 = ctx.r11.u64 + r30.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// bge cr6,0x82189254
	if (!ctx.cr6.lt) goto loc_82189254;
	// mulli r31,r30,48
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
	// li r30,0
	r30.s64 = 0;
loc_821892A0:
	// lwz r11,980(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 980);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821892d4
	if (ctx.cr6.eq) goto loc_821892D4;
	// add r11,r31,r26
	ctx.r11.u64 = r31.u64 + r26.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// bl 0x822d4fa0
	ctx.lr = 0x821892D0;
	sub_822D4FA0(ctx, base);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
loc_821892D4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x821892a0
	if (ctx.cr6.lt) goto loc_821892A0;
	// b 0x82189254
	goto loc_82189254;
loc_821892E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821892EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8218DFD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E510) {
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
	// bl 0x8218e8c0
	ctx.lr = 0x8218E52C;
	sub_8218E8C0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r30,r11,30448
	r30.s64 = ctx.r11.s64 + 30448;
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218e578
	if (ctx.cr6.eq) goto loc_8218E578;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e568
	if (ctx.cr6.eq) goto loc_8218E568;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x8218cab8
	ctx.lr = 0x8218E558;
	sub_8218CAB8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// b 0x8218e574
	goto loc_8218E574;
loc_8218E568:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8218cab8
	ctx.lr = 0x8218E570;
	sub_8218CAB8(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
loc_8218E574:
	// bl 0x8218cab8
	ctx.lr = 0x8218E578;
	sub_8218CAB8(ctx, base);
loc_8218E578:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e5a4
	if (ctx.cr6.eq) goto loc_8218E5A4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8218E5A4:
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

DEFINE_REX_FUNC(sub_82190790) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x821907a8
	if (ctx.cr6.lt) goto loc_821907A8;
	// bne cr6,0x821907cc
	if (!ctx.cr6.eq) goto loc_821907CC;
loc_821907A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821907B0;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,26564
	ctx.r3.s64 = ctx.r11.s64 + 26564;
	// bl 0x821eb258
	ctx.lr = 0x821907BC;
	sub_821EB258(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,2812
	ctx.r3.s64 = ctx.r11.s64 + 2812;
	// bl 0x821f96b8
	ctx.lr = 0x821907CC;
	sub_821F96B8(ctx, base);
loc_821907CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191CC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lwz r11,2960(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2960);
	// lwz r10,2964(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2964);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821924E8) {
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
	// lwz r3,148(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219250c
	if (ctx.cr6.eq) goto loc_8219250C;
	// bl 0x822c80a8
	ctx.lr = 0x8219250C;
	sub_822C80A8(ctx, base);
loc_8219250C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-19520
	ctx.r10.s64 = ctx.r10.s64 + -19520;
	// addi r9,r9,31764
	ctx.r9.s64 = ctx.r9.s64 + 31764;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82194580) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// addi r10,r10,3820
	ctx.r10.s64 = ctx.r10.s64 + 3820;
	// addi r9,r9,3772
	ctx.r9.s64 = ctx.r9.s64 + 3772;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stw r5,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// stw r6,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stb r7,206(r3)
	REX_STORE_U8(ctx.r3.u32 + 206, ctx.r7.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82195BE0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82199a88
	ctx.lr = 0x82195C00;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x82199a80
	ctx.lr = 0x82195C0C;
	sub_82199A80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r9,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r9.u8);
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

DEFINE_REX_FUNC(sub_82198800) {
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
	// bl 0x822d4e84
	ctx.lr = 0x82198808;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x82198830;
	sub_820E4BB0(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r31,108
	r27.s64 = r31.s64 + 108;
loc_82198844:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82198860
	if (ctx.cr6.lt) goto loc_82198860;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82198860:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x82198888
	if (!ctx.cr6.lt) goto loc_82198888;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82198388
	ctx.lr = 0x82198878;
	sub_82198388(ctx, base);
	// stwx r3,r27,r30
	REX_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82198844
	goto loc_82198844;
loc_82198888:
	// bl 0x82198410
	ctx.lr = 0x8219888C;
	sub_82198410(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821988b8
	if (ctx.cr0.eq) goto loc_821988B8;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82199590
	ctx.lr = 0x821988B8;
	sub_82199590(ctx, base);
loc_821988B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f13,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f31,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f31.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f11,16036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16036);
	ctx.f11.f64 = double(temp.f32);
	// li r4,18
	ctx.r4.s64 = 18;
	// lfs f9,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f10,16032(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16032);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x82198928;
	sub_821918A0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82191bb0
	ctx.lr = 0x82198930;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,-10576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10576);
	f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,4388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4388);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x82198974;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82198990
	if (ctx.cr0.eq) goto loc_82198990;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82195440
	ctx.lr = 0x8219898C;
	sub_82195440(ctx, base);
	// b 0x82198994
	goto loc_82198994;
loc_82198990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82198994:
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82191bb0
	ctx.lr = 0x821989A0;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// lfs f0,-7104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7104);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821989D8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821989f4
	if (ctx.cr0.eq) goto loc_821989F4;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82195440
	ctx.lr = 0x821989F0;
	sub_82195440(ctx, base);
	// b 0x821989f8
	goto loc_821989F8;
loc_821989F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821989F8:
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A0608) {
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
	ctx.lr = 0x821A0628;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a0638
	if (!ctx.cr0.eq) goto loc_821A0638;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821a0330
	ctx.lr = 0x821A0638;
	sub_821A0330(ctx, base);
loc_821A0638:
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

DEFINE_REX_FUNC(sub_821A1130) {
	REX_FUNC_PROLOGUE();
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A17C8) {
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
	// bl 0x821feec8
	ctx.lr = 0x821A17E8;
	sub_821FEEC8(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821A1800;
	sub_821FEEC8(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
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

DEFINE_REX_FUNC(sub_821A2F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x821a2f74
	if (!ctx.cr6.eq) goto loc_821A2F74;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_821A2F74:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// subf r8,r7,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r7.u64;
	// lwz r11,11888(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 11888);
	// mulli r9,r8,11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(11));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f2,100(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3CB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A4CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,5932
	ctx.r11.s64 = ctx.r3.s64 + 5932;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7224);
	ctx.f13.f64 = double(temp.f32);
loc_821A4CFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a4d18
	if (ctx.cr6.eq) goto loc_821A4D18;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,84(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f13,100(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821A4D18:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x821a4cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A4CFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6310) {
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
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821a6358
	if (!ctx.cr6.eq) goto loc_821A6358;
	// lis r30,-32174
	r30.s64 = -2108555264;
	// lha r11,92(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 92));
	// addi r30,r30,14948
	r30.s64 = r30.s64 + 14948;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x821a6358
	if (!ctx.cr6.lt) goto loc_821A6358;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a64cc
	goto loc_821A64CC;
loc_821A6358:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a6368
	if (ctx.cr0.eq) goto loc_821A6368;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821a6398
	if (!ctx.cr6.eq) goto loc_821A6398;
loc_821A6368:
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821a6384
	if (ctx.cr6.eq) goto loc_821A6384;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x821a6384
	if (ctx.cr6.eq) goto loc_821A6384;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x821a6398
	goto loc_821A6398;
loc_821A6384:
	// li r7,-32768
	ctx.r7.s64 = -32768;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// or r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
loc_821A6398:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x821a63a8
	if (!ctx.cr6.eq) goto loc_821A63A8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_821A63A8:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821a6450
	if (ctx.cr6.lt) goto loc_821A6450;
	// clrlwi r5,r5,17
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFF;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// bne cr6,0x821a63d0
	if (!ctx.cr6.eq) goto loc_821A63D0;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_821A63D0:
	// lha r11,92(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 92));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x821a63ec
	if (!ctx.cr6.eq) goto loc_821A63EC;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14912
	ctx.r9.s64 = ctx.r9.s64 + 14912;
	// b 0x821a63f4
	goto loc_821A63F4;
loc_821A63EC:
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14880
	ctx.r9.s64 = ctx.r9.s64 + 14880;
loc_821A63F4:
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821a640c
	if (!ctx.cr6.eq) goto loc_821A640C;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// bne cr6,0x821a640c
	if (!ctx.cr6.eq) goto loc_821A640C;
	// li r4,29
	ctx.r4.s64 = 29;
loc_821A640C:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// bne cr6,0x821a6430
	if (!ctx.cr6.eq) goto loc_821A6430;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-16824
	ctx.r10.s64 = ctx.r10.s64 + -16824;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
loc_821A6430:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218dba0
	ctx.lr = 0x821A644C;
	sub_8218DBA0(ctx, base);
	// b 0x821a64c8
	goto loc_821A64C8;
loc_821A6450:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821a64bc
	if (ctx.cr6.eq) goto loc_821A64BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821a64b0
	if (ctx.cr6.eq) goto loc_821A64B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821a649c
	if (ctx.cr6.eq) goto loc_821A649C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821a6484
	if (ctx.cr6.eq) goto loc_821A6484;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821a647c
	if (ctx.cr6.eq) goto loc_821A647C;
loc_821A6478:
	// b 0x821a6478
	goto loc_821A6478;
loc_821A647C:
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x821a64c0
	goto loc_821A64C0;
loc_821A6484:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,193
	ctx.r8.s64 = 193;
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x821a64c0
	goto loc_821A64C0;
loc_821A649C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,16600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16600);
	ctx.f2.f64 = double(temp.f32);
loc_821A64A4:
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x821a5c10
	ctx.lr = 0x821A64AC;
	sub_821A5C10(ctx, base);
	// b 0x821a64c4
	goto loc_821A64C4;
loc_821A64B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,16644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16644);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821a64a4
	goto loc_821A64A4;
loc_821A64BC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_821A64C0:
	// bl 0x821a6088
	ctx.lr = 0x821A64C4;
	sub_821A6088(ctx, base);
loc_821A64C4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_821A64C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821A64CC:
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

DEFINE_REX_FUNC(sub_821ABA80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r3,-11708(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -11708);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ABE30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r3,-11704(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -11704);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AD758) {
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
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,-11088
	ctx.r8.s64 = ctx.r11.s64 + -11088;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,-10940(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10940);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821ad7a4
	if (!ctx.cr6.gt) goto loc_821AD7A4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stb r6,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r6.u8);
	// lwz r11,-10940(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10940);
loc_821AD7A4:
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lwz r9,-10944(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + -10944);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x821ad7d0
	if (!ctx.cr6.gt) goto loc_821AD7D0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r8,60
	ctx.r9.s64 = ctx.r8.s64 + 60;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stb r6,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r6.u8);
	// lwz r9,-10944(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + -10944);
	// lwz r11,-10940(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10940);
loc_821AD7D0:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821ad7e0
	if (!ctx.cr6.lt) goto loc_821AD7E0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// b 0x821ad7e4
	goto loc_821AD7E4;
loc_821AD7E0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821AD7E4:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821ad910
	if (ctx.cr6.gt) goto loc_821AD910;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x821ad8e0
	if (ctx.cr6.eq) goto loc_821AD8E0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r31,24
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,-10552
	ctx.r11.s64 = ctx.r11.s64 + -10552;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821ad838
	if (ctx.cr6.eq) goto loc_821AD838;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ad828
	if (ctx.cr6.eq) goto loc_821AD828;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ad844
	if (!ctx.cr6.eq) goto loc_821AD844;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x821ad82c
	goto loc_821AD82C;
loc_821AD828:
	// lis r11,-32640
	ctx.r11.s64 = -2139095040;
loc_821AD82C:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_821AD830:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x821ad84c
	goto loc_821AD84C;
loc_821AD838:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// ori r11,r11,32896
	ctx.r11.u64 = ctx.r11.u64 | 32896;
	// b 0x821ad830
	goto loc_821AD830;
loc_821AD844:
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821AD84C:
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f12,-5892(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -5892);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f11,8544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8544);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f10,4464(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4464);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,16676(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16676);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f8,f12,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f9,8528(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8528);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f10,f7,f12,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821e8680
	ctx.lr = 0x821AD8E0;
	sub_821E8680(ctx, base);
loc_821AD8E0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-11216
	r31.s64 = ctx.r11.s64 + -11216;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ad910
	if (!ctx.cr6.eq) goto loc_821AD910;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,25
	ctx.r3.s64 = 25;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821AD908;
	sub_8212BC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r11.u32);
loc_821AD910:
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

DEFINE_REX_FUNC(sub_821BDF28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821bdfec
	if (!ctx.cr6.eq) goto loc_821BDFEC;
loc_821BDF3C:
	// lbz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bdf60
	if (ctx.cr0.eq) goto loc_821BDF60;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 180);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821bdf60
	if (!ctx.cr0.eq) goto loc_821BDF60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821bdf3c
	goto loc_821BDF3C;
loc_821BDF60:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r11,23240
	ctx.r10.s64 = ctx.r11.s64 + 23240;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// mulli r7,r11,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// and. r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bdfac
	if (ctx.cr0.eq) goto loc_821BDFAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,7208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// blr 
	return;
loc_821BDFAC:
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r7,r10,272
	ctx.r7.s64 = ctx.r10.s64 + 272;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821bdfec
	if (ctx.cr0.eq) goto loc_821BDFEC;
	// mulli r9,r11,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r10,272
	ctx.r8.s64 = ctx.r10.s64 + 272;
	// addi r7,r10,572
	ctx.r7.s64 = ctx.r10.s64 + 572;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821BDFEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF630) {
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
	ctx.lr = 0x821BF638;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r28,10032(r3)
	r28.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 10032));
	// mulli r11,r6,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(896));
	// lfs f12,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,10008(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lwz r7,10016(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 10016);
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// lwz r31,10024(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 10024);
	// lwz r30,10020(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 10020);
	// lwz r29,10012(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 10012);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r11,7224
	ctx.r10.s64 = ctx.r11.s64 + 7224;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x821bf6d4
	if (ctx.cr6.eq) goto loc_821BF6D4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x821bf6c8
	if (ctx.cr6.eq) goto loc_821BF6C8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x821bf6d8
	if (!ctx.cr6.eq) goto loc_821BF6D8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lha r5,4(r5)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 4));
	// bl 0x821bee40
	ctx.lr = 0x821BF69C;
	sub_821BEE40(ctx, base);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821bf6c8
	if (ctx.cr6.gt) goto loc_821BF6C8;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_821BF6C8:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lha r5,2(r9)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 2));
	// bl 0x821bee40
	ctx.lr = 0x821BF6D4;
	sub_821BEE40(ctx, base);
loc_821BF6D4:
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
loc_821BF6D8:
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r9,-9752(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -9752);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bf764
	if (ctx.cr6.eq) goto loc_821BF764;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lfs f0,-9756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -9756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x821bf724
	if (ctx.cr6.lt) goto loc_821BF724;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x821bf724
	if (ctx.cr6.gt) goto loc_821BF724;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_821BF724:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821bf764
	if (!ctx.cr6.lt) goto loc_821BF764;
	// sth r11,100(r8)
	REX_STORE_U16(ctx.r8.u32 + 100, ctx.r11.u16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r10,10008(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// sth r11,102(r10)
	REX_STORE_U16(ctx.r10.u32 + 102, ctx.r11.u16);
	// lwz r11,10008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// stfs f1,108(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lwz r11,10008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lfs f0,-9756(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -9756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lwz r10,10008(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lwz r11,-9760(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -9760);
	// sth r11,104(r10)
	REX_STORE_U16(ctx.r10.u32 + 104, ctx.r11.u16);
	// b 0x821bf790
	goto loc_821BF790;
loc_821BF764:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x821bf778
	if (!ctx.cr6.eq) goto loc_821BF778;
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,-9764(r6)
	REX_STORE_U32(ctx.r6.u32 + -9764, ctx.r9.u32);
loc_821BF778:
	// stfs f11,96(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// sth r11,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, ctx.r11.u16);
	// stfs f1,92(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lwz r11,10008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r11.u16);
loc_821BF790:
	// stw r8,10008(r3)
	REX_STORE_U32(ctx.r3.u32 + 10008, ctx.r8.u32);
	// stw r7,10016(r3)
	REX_STORE_U32(ctx.r3.u32 + 10016, ctx.r7.u32);
	// stw r31,10024(r3)
	REX_STORE_U32(ctx.r3.u32 + 10024, r31.u32);
	// sth r28,10032(r3)
	REX_STORE_U16(ctx.r3.u32 + 10032, r28.u16);
	// stw r30,10020(r3)
	REX_STORE_U32(ctx.r3.u32 + 10020, r30.u32);
	// stw r29,10012(r3)
	REX_STORE_U32(ctx.r3.u32 + 10012, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821C4FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821c5004
	if (ctx.cr6.lt) goto loc_821C5004;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x821c5004
	if (!ctx.cr6.lt) goto loc_821C5004;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mulli r10,r3,248
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(248));
	// addi r11,r11,-25704
	ctx.r11.s64 = ctx.r11.s64 + -25704;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_821C5004:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5628) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c5754
	if (ctx.cr6.eq) goto loc_821C5754;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r10,7856
	ctx.r11.s64 = ctx.r10.s64 + 7856;
	// lfs f6,15628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15628);
	ctx.f6.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f5,15632(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15632);
	ctx.f5.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f4,16032(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16032);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// lfs f3,16036(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16036);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x821eb750
	ctx.lr = 0x821C56A8;
	sub_821EB750(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-28232
	r31.s64 = ctx.r11.s64 + -28232;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x820f3460
	ctx.lr = 0x821C56D4;
	sub_820F3460(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C56EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x820f2e70
	ctx.lr = 0x821C5700;
	sub_820F2E70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C5720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822006f8
	ctx.lr = 0x821C572C;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200700
	ctx.lr = 0x821C5738;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x821C5744;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x821C5754;
	sub_82200818(ctx, base);
loc_821C5754:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_821C8CD0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821c8d00
	if (ctx.cr6.lt) goto loc_821C8D00;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x821c8d00
	if (!ctx.cr6.lt) goto loc_821C8D00;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mulli r11,r3,248
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(248));
	// addi r10,r10,-25704
	ctx.r10.s64 = ctx.r10.s64 + -25704;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c8d0c
	if (ctx.cr6.eq) goto loc_821C8D0C;
	// b 0x821c8d04
	goto loc_821C8D04;
loc_821C8D00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C8D04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c8d14
	if (!ctx.cr6.eq) goto loc_821C8D14;
loc_821C8D0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821C8D14:
	// lha r3,138(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 138));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9E88) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x821c9ea4
	if (!ctx.cr6.eq) goto loc_821C9EA4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_821C9EA4:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x821c9eb0
	if (!ctx.cr6.eq) goto loc_821C9EB0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_821C9EB0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x821c7878
	ctx.lr = 0x821C9EB8;
	sub_821C7878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c9edc
	if (ctx.cr0.eq) goto loc_821C9EDC;
	// lha r11,88(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 88));
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821c9ed8
	if (ctx.cr6.eq) goto loc_821C9ED8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x821c9edc
	if (!ctx.cr6.eq) goto loc_821C9EDC;
loc_821C9ED8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821C9EDC:
	// stw r4,104(r9)
	REX_STORE_U32(ctx.r9.u32 + 104, ctx.r4.u32);
	// stw r5,108(r9)
	REX_STORE_U32(ctx.r9.u32 + 108, ctx.r5.u32);
	// stw r6,112(r9)
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CB150) {
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
	ctx.lr = 0x821CB158;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5584(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5584, temp.u32);
	// lhz r11,624(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 624);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cb220
	if (ctx.cr6.eq) goto loc_821CB220;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821cb1dc
	if (ctx.cr6.eq) goto loc_821CB1DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821cb1d0
	if (ctx.cr6.eq) goto loc_821CB1D0;
	// li r30,0
	r30.s64 = 0;
	// stfs f0,5588(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5588, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,5572(r3)
	REX_STORE_U32(ctx.r3.u32 + 5572, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,5580(r3)
	REX_STORE_U32(ctx.r3.u32 + 5580, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,5576(r3)
	REX_STORE_U32(ctx.r3.u32 + 5576, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// li r29,-1
	r29.s64 = -1;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// bl 0x821be318
	ctx.lr = 0x821CB1C0;
	sub_821BE318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218c1a0
	ctx.lr = 0x821CB1C8;
	sub_8218C1A0(ctx, base);
	// stfs f31,5584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5584, temp.u32);
	// b 0x821cb22c
	goto loc_821CB22C;
loc_821CB1D0:
	// li r30,6
	r30.s64 = 6;
	// li r29,90
	r29.s64 = 90;
	// b 0x821cb228
	goto loc_821CB228;
loc_821CB1DC:
	// lwz r11,10008(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10008);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,5
	r30.s64 = 5;
	// lfs f13,32280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,12408(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16896(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16896);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f11,f13
	f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821cb22c
	goto loc_821CB22C;
loc_821CB220:
	// li r30,4
	r30.s64 = 4;
	// li r29,180
	r29.s64 = 180;
loc_821CB228:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_821CB22C:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be318
	ctx.lr = 0x821CB240;
	sub_821BE318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821be3a0
	ctx.lr = 0x821CB25C;
	sub_821BE3A0(ctx, base);
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
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 840, temp.u32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 828, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821D1DF0) {
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
	// bl 0x821aff50
	ctx.lr = 0x821D1E00;
	sub_821AFF50(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r11,r11,49184
	ctx.r11.u64 = ctx.r11.u64 & 49184;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d1e28
	if (ctx.cr0.eq) goto loc_821D1E28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821D1E20;
	sub_8212BC38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821d1e2c
	goto loc_821D1E2C;
loc_821D1E28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1E2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D2EE8) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821b0030
	ctx.lr = 0x821D2F08;
	sub_821B0030(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r6,r8,13220
	ctx.r6.s64 = ctx.r8.s64 + 13220;
	// addi r9,r11,824
	ctx.r9.s64 = ctx.r11.s64 + 824;
	// addi r8,r10,680
	ctx.r8.s64 = ctx.r10.s64 + 680;
	// addi r7,r7,-416
	ctx.r7.s64 = ctx.r7.s64 + -416;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821D2F3C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d2f50
	if (ctx.cr0.eq) goto loc_821D2F50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821D2F50:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D2F64;
	sub_821D6210(ctx, base);
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

DEFINE_REX_FUNC(sub_821D54B8) {
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
	ctx.lr = 0x821D54C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32165
	r28.s64 = -2107965440;
	// lwz r26,-32480(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// bl 0x82119468
	ctx.lr = 0x821D54D0;
	sub_82119468(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,-7176
	r29.s64 = ctx.r10.s64 + -7176;
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// bl 0x821b0858
	ctx.lr = 0x821D54E4;
	sub_821B0858(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D54F8;
	sub_821D6210(ctx, base);
	// bl 0x820e2460
	ctx.lr = 0x821D54FC;
	sub_820E2460(ctx, base);
	// bl 0x821dcd60
	ctx.lr = 0x821D5500;
	sub_821DCD60(ctx, base);
	// bl 0x82136640
	ctx.lr = 0x821D5504;
	sub_82136640(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r27,1
	r27.s64 = 1;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stb r27,1812(r30)
	REX_STORE_U8(r30.u32 + 1812, r27.u8);
	// bl 0x82199ec0
	ctx.lr = 0x821D551C;
	sub_82199EC0(ctx, base);
	// bl 0x8218dfe8
	ctx.lr = 0x821D5520;
	sub_8218DFE8(ctx, base);
	// bl 0x82121f70
	ctx.lr = 0x821D5524;
	sub_82121F70(ctx, base);
	// bl 0x821b6b38
	ctx.lr = 0x821D5528;
	sub_821B6B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d4f10
	ctx.lr = 0x821D5530;
	sub_821D4F10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,716(r31)
	REX_STORE_U32(r31.u32 + 716, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r10.u32);
	// bl 0x821d4a70
	ctx.lr = 0x821D5548;
	sub_821D4A70(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r7,r9,-7072
	ctx.r7.s64 = ctx.r9.s64 + -7072;
	// ori r8,r8,21468
	ctx.r8.u64 = ctx.r8.u64 | 21468;
	// stw r10,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// li r11,60
	ctx.r11.s64 = 60;
	// li r9,60
	ctx.r9.s64 = 60;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,148(r31)
	REX_STORE_U16(r31.u32 + 148, ctx.r11.u16);
	// stw r9,17772(r7)
	REX_STORE_U32(ctx.r7.u32 + 17772, ctx.r9.u32);
	// stwx r11,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// stw r10,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// bl 0x821d1a50
	ctx.lr = 0x821D5580;
	sub_821D1A50(ctx, base);
	// bl 0x821d3620
	ctx.lr = 0x821D5584;
	sub_821D3620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// bl 0x821a4060
	ctx.lr = 0x821D5590;
	sub_821A4060(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r11,7840(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 7840);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,140
	ctx.r10.s64 = ctx.r11.s64 + 140;
	// stfs f0,140(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f13,188(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stb r27,1824(r30)
	REX_STORE_U8(r30.u32 + 1824, r27.u8);
	// lwz r11,-32480(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ff500
	ctx.lr = 0x821D55D8;
	sub_820FF500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,1088
	ctx.r4.s64 = r30.s64 + 1088;
	// bl 0x8229a710
	ctx.lr = 0x821D55E4;
	sub_8229A710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,1088
	ctx.r4.s64 = r30.s64 + 1088;
	// bl 0x821029b8
	ctx.lr = 0x821D55F0;
	sub_821029B8(ctx, base);
	// bl 0x820e6b70
	ctx.lr = 0x821D55F4;
	sub_820E6B70(ctx, base);
	// bl 0x82246ca8
	ctx.lr = 0x821D55F8;
	sub_82246CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,1888(r30)
	REX_STORE_U8(r30.u32 + 1888, ctx.r3.u8);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,12(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r6,r8,13396
	ctx.r6.s64 = ctx.r8.s64 + 13396;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,21304
	ctx.r8.s64 = ctx.r10.s64 + 21304;
	// addi r7,r11,18008
	ctx.r7.s64 = ctx.r11.s64 + 18008;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821D5630;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d564c
	if (ctx.cr0.eq) goto loc_821D564C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d5650
	goto loc_821D5650;
loc_821D564C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D5650:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r11.u32);
	// addi r10,r10,18040
	ctx.r10.s64 = ctx.r10.s64 + 18040;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stb r27,61(r11)
	REX_STORE_U8(ctx.r11.u32 + 61, r27.u8);
	// lwz r11,-32480(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// sth r27,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821DCC68) {
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
	// addi r11,r11,15132
	ctx.r11.s64 = ctx.r11.s64 + 15132;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DCC94;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dcca4
	if (ctx.cr0.eq) goto loc_821DCCA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821DCCA4;
	sub_822C80A8(ctx, base);
loc_821DCCA4:
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

DEFINE_REX_FUNC(sub_821DD678) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821dd5d8
	sub_821DD5D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DDA68) {
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
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// lwz r31,100(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821ddaac
	if (ctx.cr6.eq) goto loc_821DDAAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821DDA9C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821DDAA4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_821DDAAC:
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

DEFINE_REX_FUNC(sub_821DF570) {
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
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r9,r10,-9304
	ctx.r9.s64 = ctx.r10.s64 + -9304;
	// addi r6,r6,15244
	ctx.r6.s64 = ctx.r6.s64 + 15244;
	// addi r8,r8,-3840
	ctx.r8.s64 = ctx.r8.s64 + -3840;
	// addi r7,r7,-2912
	ctx.r7.s64 = ctx.r7.s64 + -2912;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821DF5C0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821df5dc
	if (ctx.cr0.eq) goto loc_821DF5DC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821df5e0
	goto loc_821DF5E0;
loc_821DF5DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DF5E0:
	// stw r31,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r31.u32);
	// stw r30,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r30.u32);
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

DEFINE_REX_FUNC(sub_821E1860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821E1868;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,5588(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e188c
	if (ctx.cr6.eq) goto loc_821E188C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e1920
	goto loc_821E1920;
loc_821E188C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r9,r10,3240
	ctx.r9.s64 = ctx.r10.s64 + 3240;
	// addi r6,r6,15604
	ctx.r6.s64 = ctx.r6.s64 + 15604;
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r8,r8,5552
	ctx.r8.s64 = ctx.r8.s64 + 5552;
	// addi r7,r7,3120
	ctx.r7.s64 = ctx.r7.s64 + 3120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x821f7d50
	ctx.lr = 0x821E18C4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e18e0
	if (ctx.cr0.eq) goto loc_821E18E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821e18e4
	goto loc_821E18E4;
loc_821E18E0:
	// li r31,0
	r31.s64 = 0;
loc_821E18E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821e18f4
	if (ctx.cr6.eq) goto loc_821E18F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7c80
	ctx.lr = 0x821E18F4;
	sub_821F7C80(ctx, base);
loc_821E18F4:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r11,r30,-3
	ctx.r11.s64 = r30.s64 + -3;
	// addi r9,r10,-5420
	ctx.r9.s64 = ctx.r10.s64 + -5420;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r30,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, r30.u32);
	// stw r11,-5420(r10)
	REX_STORE_U32(ctx.r10.u32 + -5420, ctx.r11.u32);
	// bl 0x821e12a8
	ctx.lr = 0x821E191C;
	sub_821E12A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821E1920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821E2BD8) {
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
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2BF4;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,9828
	ctx.r11.s64 = ctx.r11.s64 + 9828;
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

DEFINE_REX_FUNC(sub_821E3858) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x821e3878
	if (!ctx.cr6.lt) goto loc_821E3878;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// b 0x821e3884
	goto loc_821E3884;
loc_821E3878:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x821e3884
	if (!ctx.cr6.gt) goto loc_821E3884;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_821E3884:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f2,200(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f13,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x821e38a8
	if (!ctx.cr6.lt) goto loc_821E38A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// blr 
	return;
loc_821E38A8:
	// fsubs f12,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// fsubs f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,192(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// addi r10,r10,31920
	ctx.r10.s64 = ctx.r10.s64 + 31920;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,28724(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r7,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r7.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,26932(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,16836(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16836);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,16788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f0.f64)));
	// lfs f13,-23604(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23604);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821e3928
	if (ctx.cr6.eq) goto loc_821E3928;
	// fmadds f11,f1,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f12,f2,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f12.f64)));
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x821e3938
	goto loc_821E3938;
loc_821E3928:
	// fnmsubs f11,f1,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fnmsubs f12,f2,f13,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_821E3938:
	// fadds f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E8820) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821e80c8
	sub_821E80C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E9218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821e9240
	if (!ctx.cr6.eq) goto loc_821E9240;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x821e9238
	goto loc_821E9238;
loc_821E9230:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_821E9238:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821e9230
	if (!ctx.cr0.eq) goto loc_821E9230;
loc_821E9240:
	// rlwinm. r10,r6,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// bne 0x821e92ac
	if (!ctx.cr0.eq) goto loc_821E92AC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821e929c
	if (!ctx.cr6.gt) goto loc_821E929C;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_821E9258:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821e9274
	if (ctx.cr0.eq) goto loc_821E9274;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x821e9258
	if (ctx.cr0.gt) goto loc_821E9258;
loc_821E9274:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821e929c
	if (!ctx.cr6.gt) goto loc_821E929C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r9,32
	ctx.r9.s64 = 32;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x821e9298
	if (ctx.cr0.eq) goto loc_821E9298;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_821E9290:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x821e9290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E9290;
loc_821E9298:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_821E929C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_821E92AC:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x821e92d0
	goto loc_821E92D0;
loc_821E92C8:
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_821E92D0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e92c8
	if (!ctx.cr0.eq) goto loc_821E92C8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
loc_821E92EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e930c
	if (!ctx.cr6.gt) goto loc_821E930C;
	// lbzu r8,-1(r9)
	ea = -1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bgt 0x821e92ec
	if (ctx.cr0.gt) goto loc_821E92EC;
loc_821E930C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_821E931C:
	// li r10,32
	ctx.r10.s64 = 32;
	// stbu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821e931c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E931C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED9F0) {
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
	// bl 0x822d4e74
	ctx.lr = 0x821ED9F8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f24
	ctx.lr = 0x821EDA00;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821edcb4
	if (!ctx.cr0.eq) goto loc_821EDCB4;
	// lhz r30,88(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x821edcb4
	if (ctx.cr0.eq) goto loc_821EDCB4;
	// lwz r24,96(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r31,92(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// addi r26,r11,-248
	r26.s64 = ctx.r11.s64 + -248;
	// bne cr6,0x821eda50
	if (!ctx.cr6.eq) goto loc_821EDA50;
	// lbz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 104);
	// mr r24,r26
	r24.u64 = r26.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x821ed388
	ctx.lr = 0x821EDA50;
	sub_821ED388(ctx, base);
loc_821EDA50:
	// mr r23,r30
	r23.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821edcb4
	if (!ctx.cr6.gt) goto loc_821EDCB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f25,15624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15624);
	f25.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f28,18120(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 18120);
	f28.f64 = double(temp.f32);
	// lfs f29,17444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17444);
	f29.f64 = double(temp.f32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lfs f26,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	f26.f64 = double(temp.f32);
	// lis r25,-32166
	r25.s64 = -2108030976;
	// lfs f27,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f27.f64 = double(temp.f32);
	// addi r27,r11,-32032
	r27.s64 = ctx.r11.s64 + -32032;
	// lfs f30,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_821EDA9C:
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821edca8
	if (ctx.cr0.eq) goto loc_821EDCA8;
	// addi r28,r30,-16
	r28.s64 = r30.s64 + -16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1b70
	ctx.lr = 0x821EDABC;
	sub_820E1B70(ctx, base);
	// stfs f30,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,7792(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 7792);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,1672(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x820e1df8
	ctx.lr = 0x821EDAD4;
	sub_820E1DF8(ctx, base);
	// lfs f0,64(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	f31.f64 = double(temp.f32);
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x821edca8
	if (!ctx.cr6.gt) goto loc_821EDCA8;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r27,332
	ctx.r3.s64 = r27.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821EDAF4;
	sub_821F1818(ctx, base);
	// ld r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 100);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lbz r11,104(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 104);
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
	// lbz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 108);
	// stb r11,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r11.u8);
	// lbz r11,109(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 109);
	// stb r11,78(r31)
	REX_STORE_U8(r31.u32 + 78, ctx.r11.u8);
	// lbz r11,59(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 59);
	// stb r11,79(r31)
	REX_STORE_U8(r31.u32 + 79, ctx.r11.u8);
	// bl 0x821ec7c8
	ctx.lr = 0x821EDB30;
	sub_821EC7C8(ctx, base);
	// lfs f0,68(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x821edb9c
	if (!ctx.cr6.lt) goto loc_821EDB9C;
	// lfs f0,64(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// beq cr6,0x821edb64
	if (ctx.cr6.eq) goto loc_821EDB64;
	// bl 0x820e0188
	ctx.lr = 0x821EDB58;
	sub_820E0188(ctx, base);
	// fmuls f1,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f26.f64));
	// bl 0x820e0160
	ctx.lr = 0x821EDB60;
	sub_820E0160(ctx, base);
	// b 0x821edb68
	goto loc_821EDB68;
loc_821EDB64:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
loc_821EDB68:
	// lbz r11,99(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// b 0x821edba0
	goto loc_821EDBA0;
loc_821EDB9C:
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
loc_821EDBA0:
	// fdivs f24,f30,f31
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(f30.f64 / f31.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821EDBB4;
	sub_820E1CF8(ctx, base);
	// stfs f30,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,44(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,7792(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 7792);
	// lfs f11,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,1548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1548);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f24
	ctx.f11.f64 = double(float(ctx.f11.f64 * f24.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f24,f12,f11
	f24.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f23,f0,f11
	f23.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// bl 0x820e00c0
	ctx.lr = 0x821EDC04;
	sub_820E00C0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f23
	ctx.f4.f64 = f23.f64;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f23
	ctx.f12.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fmuls f11,f13,f23
	ctx.f11.f64 = double(float(ctx.f13.f64 * f23.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmr f3,f24
	ctx.f3.f64 = f24.f64;
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821ed2d8
	ctx.lr = 0x821EDC48;
	sub_821ED2D8(ctx, base);
	// fmadds f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f28.f64)));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lbz r11,111(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 111);
	// lfs f0,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821edc68
	if (ctx.cr0.eq) goto loc_821EDC68;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// b 0x821edc7c
	goto loc_821EDC7C;
loc_821EDC68:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x821edc78
	if (!ctx.cr6.gt) goto loc_821EDC78;
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// b 0x821edc7c
	goto loc_821EDC7C;
loc_821EDC78:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
loc_821EDC7C:
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// lbz r5,61(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 61);
	// lhz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 56);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x821ec8d8
	ctx.lr = 0x821EDC98;
	sub_821EC8D8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r27,332
	ctx.r3.s64 = r27.s64 + 332;
	// lbz r6,90(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 90);
	// bl 0x821f1a48
	ctx.lr = 0x821EDCA8;
	sub_821F1A48(ctx, base);
loc_821EDCA8:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// bgt 0x821eda9c
	if (ctx.cr0.gt) goto loc_821EDA9C;
loc_821EDCB4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f70
	ctx.lr = 0x821EDCC0;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821FE140) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x821FE148;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f10
	ctx.lr = 0x821FE150;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821FE16C;
	sub_821F28A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821FE180;
	sub_821F2908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f2bf0
	ctx.lr = 0x821FE190;
	sub_821F2BF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed290
	ctx.lr = 0x821FE1CC;
	sub_821ED290(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r25,r30,32
	r25.s64 = r30.s64 + 32;
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f19,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f19.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// lfs f18,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	f18.f64 = double(temp.f32);
	// stfs f19,132(r31)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f19,92(r31)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f19,52(r31)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f19,12(r31)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_821FE210:
	// lbzx r10,r9,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 * f18.f64));
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821fe210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FE210;
	// lwz r28,40(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r11,r11,9824
	ctx.r11.s64 = ctx.r11.s64 + 9824;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// lwz r11,10416(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 10416);
	// lwz r5,36(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f2c50
	ctx.lr = 0x821FE2AC;
	sub_821F2C50(ctx, base);
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(r28.u32, 10, ctx.xer);
	// bne cr6,0x821fe540
	if (!ctx.cr6.eq) goto loc_821FE540;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,15387
	ctx.r10.s64 = ctx.r10.s64 + 15387;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r9,r9,21028
	ctx.r9.s64 = ctx.r9.s64 + 21028;
	// addi r8,r8,21020
	ctx.r8.s64 = ctx.r8.s64 + 21020;
	// addi r10,r7,21012
	ctx.r10.s64 = ctx.r7.s64 + 21012;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x821fe540
	if (ctx.cr6.eq) goto loc_821FE540;
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,9952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9952);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f24,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	f24.f64 = double(temp.f32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lfs f11,16228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f7,f12
	f30.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f29,f6,f12
	f29.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f20,f30,f24
	f20.f64 = double(float(f30.f64 * f24.f64));
	// fnmsubs f31,f30,f11,f8
	f31.f64 = double(float(-std::fma(f30.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fadds f27,f20,f9
	f27.f64 = double(float(f20.f64 + ctx.f9.f64));
	// ble cr6,0x821fe354
	if (!ctx.cr6.gt) goto loc_821FE354;
	// fmadds f28,f29,f24,f0
	f28.f64 = double(float(std::fma(f29.f64, f24.f64, ctx.f0.f64)));
	// fsubs f21,f13,f29
	f21.f64 = double(float(ctx.f13.f64 - f29.f64));
	// b 0x821fe35c
	goto loc_821FE35C;
loc_821FE354:
	// fmadds f28,f29,f11,f0
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(std::fma(f29.f64, ctx.f11.f64, ctx.f0.f64)));
	// fnmsubs f21,f29,f10,f13
	f21.f64 = double(float(-std::fma(f29.f64, ctx.f10.f64, -ctx.f13.f64)));
loc_821FE35C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f22,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f22.f64 = double(temp.f32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r31,r10,-48
	r31.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x821fe3ac
	if (!ctx.cr6.gt) goto loc_821FE3AC;
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// fsubs f0,f31,f27
	ctx.f0.f64 = double(float(f31.f64 - f27.f64));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f23,f0,f13
	f23.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmadds f0,f30,f10,f23
	ctx.f0.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, f23.f64)));
	// fadds f31,f0,f27
	f31.f64 = double(float(ctx.f0.f64 + f27.f64));
	// b 0x821fe3b0
	goto loc_821FE3B0;
loc_821FE3AC:
	// fmr f23,f22
	ctx.fpscr.disableFlushMode();
	f23.f64 = f22.f64;
loc_821FE3B0:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// fmr f25,f22
	ctx.fpscr.disableFlushMode();
	f25.f64 = f22.f64;
	// fmr f26,f22
	f26.f64 = f22.f64;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x821fe3d0
	if (!ctx.cr6.eq) goto loc_821FE3D0;
	// addi r27,r27,3
	r27.s64 = r27.s64 + 3;
	// b 0x821fe3f4
	goto loc_821FE3F4;
loc_821FE3D0:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x821fe3f4
	if (!ctx.cr6.gt) goto loc_821FE3F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f25,f30
	ctx.fpscr.disableFlushMode();
	f25.u64 = f30.u64 ^ 0x8000000000000000;
	// fsubs f27,f27,f30
	f27.f64 = double(float(f27.f64 - f30.f64));
	// lfs f0,16196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f29,f0
	f26.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fsubs f31,f31,f25
	f31.f64 = double(float(f31.f64 - f25.f64));
	// fsubs f28,f28,f26
	f28.f64 = double(float(f28.f64 - f26.f64));
loc_821FE3F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f2bf0
	ctx.lr = 0x821FE404;
	sub_821F2BF0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r26,7672(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 7672);
	// bl 0x821ed290
	ctx.lr = 0x821FE418;
	sub_821ED290(ctx, base);
	// fmr f2,f22
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f22.f64;
	// fmr f3,f19
	ctx.f3.f64 = f19.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821FE424;
	sub_82204AE0(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821fe518
	if (!ctx.cr6.gt) goto loc_821FE518;
	// fadds f0,f23,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f23.f64 + f30.f64));
	// addi r11,r28,44
	ctx.r11.s64 = r28.s64 + 44;
	// fmadds f13,f29,f24,f26
	ctx.f13.f64 = double(float(std::fma(f29.f64, f24.f64, f26.f64)));
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
loc_821FE440:
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f27,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f27,-44(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f28,0(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stfs f28,-40(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,-4(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stfs f21,80(r11)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f21,40(r11)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f1,84(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f1,-36(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// stfs f19,88(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f19,48(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f19,8(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f19,-32(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + -32, temp.u32);
loc_821FE490:
	// lbzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f18
	ctx.f12.f64 = double(float(ctx.f12.f64 * f18.f64));
	// stfs f12,124(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// stfs f12,84(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f12,44(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821fe490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FE490;
	// lbzu r10,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// fsubs f12,f31,f20
	ctx.f12.f64 = double(float(f31.f64 - f20.f64));
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// fadds f27,f12,f25
	f27.f64 = double(float(ctx.f12.f64 + f25.f64));
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r9,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bgt 0x821fe440
	if (ctx.cr0.gt) goto loc_821FE440;
loc_821FE518:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r5,36(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,7696(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7696);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f2c50
	ctx.lr = 0x821FE540;
	sub_821F2C50(ctx, base);
loc_821FE540:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f5c
	ctx.lr = 0x821FE54C;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82210980) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210A60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210B30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210C00) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210CB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12828(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12828);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12304(r3)
	REX_STORE_U32(ctx.r3.u32 + 12304, ctx.r4.u32);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,10460(r3)
	REX_STORE_U32(ctx.r3.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822118E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,12284(r3)
	REX_STORE_U32(ctx.r3.u32 + 12284, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822120E8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,3230
	ctx.r11.s64 = ctx.r4.s64 + 3230;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212148
	if (ctx.cr6.eq) goto loc_82212148;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8221211c
	if (ctx.cr6.lt) goto loc_8221211C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221211C:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_82212148:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12382(r11)
	REX_STORE_U8(ctx.r11.u32 + 12382, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82214AC8) {
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
	ctx.lr = 0x82214AD0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13600);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214b34
	if (ctx.cr6.eq) goto loc_82214B34;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// addi r3,r3,13760
	ctx.r3.s64 = ctx.r3.s64 + 13760;
	// rlwimi r30,r11,24,0,7
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000) | (r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82214a48
	ctx.lr = 0x82214B30;
	sub_82214A48(ctx, base);
	// b 0x82214c98
	goto loc_82214C98;
loc_82214B34:
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214be8
	if (ctx.cr6.eq) goto loc_82214BE8;
	// addi r24,r31,11156
	r24.s64 = r31.s64 + 11156;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824d447c
	ctx.lr = 0x82214B4C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214ba8
	if (ctx.cr6.eq) goto loc_82214BA8;
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lis r11,-28928
	ctx.r11.s64 = -1895825408;
	// bne cr6,0x82214b70
	if (!ctx.cr6.eq) goto loc_82214B70;
	// lis r11,-32512
	ctx.r11.s64 = -2130706432;
loc_82214B70:
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,8(r29)
	REX_STORE_U32(r29.u32 + 8, r27.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82213da0
	ctx.lr = 0x82214B98;
	sub_82213DA0(ctx, base);
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// li r28,1
	r28.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stw r11,11152(r31)
	REX_STORE_U32(r31.u32 + 11152, ctx.r11.u32);
loc_82214BA8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824d446c
	ctx.lr = 0x82214BB4;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82214be8
	if (ctx.cr6.eq) goto loc_82214BE8;
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82214c98
	if (ctx.cr0.eq) goto loc_82214C98;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24460
	ctx.r3.s64 = r31.s64 + 24460;
	// bl 0x824d445c
	ctx.lr = 0x82214BD8;
	__imp__KeSetEvent(ctx, base);
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,11072(r31)
	REX_STORE_U8(r31.u32 + 11072, ctx.r11.u8);
	// b 0x82214c98
	goto loc_82214C98;
loc_82214BE8:
	// lwz r11,24392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24392);
	// lwz r10,21940(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bne cr6,0x82214c10
	if (!ctx.cr6.eq) goto loc_82214C10;
	// lwz r11,23768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82214c14
	if (ctx.cr6.eq) goto loc_82214C14;
loc_82214C10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82214C14:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82214c5c
	if (ctx.cr6.eq) goto loc_82214C5C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82214c5c
	if (ctx.cr6.eq) goto loc_82214C5C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214c5c
	if (ctx.cr6.eq) goto loc_82214C5C;
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// lis r7,-28928
	ctx.r7.s64 = -1895825408;
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,11152(r31)
	REX_STORE_U32(r31.u32 + 11152, ctx.r11.u32);
	// bl 0x8221dc80
	ctx.lr = 0x82214C58;
	sub_8221DC80(ctx, base);
	// b 0x82214c98
	goto loc_82214C98;
loc_82214C5C:
	// subfic r10,r23,0
	ctx.xer.ca = r23.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r23.u64;
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// lwz r11,11152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11152);
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r11,r10,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// stw r9,11152(r31)
	REX_STORE_U32(r31.u32 + 11152, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r30,r11,24,0,7
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000) | (r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82214098
	ctx.lr = 0x82214C98;
	sub_82214098(ctx, base);
loc_82214C98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8221CEF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_8221CF00:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221cfc4
	if (!ctx.cr6.lt) goto loc_8221CFC4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221CF24:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r11,r5,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r5.u64;
	// beq 0x8221cf58
	if (ctx.cr0.eq) goto loc_8221CF58;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subfc r8,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// subf r8,r4,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r4.u64;
	// b 0x8221cf8c
	goto loc_8221CF8C;
loc_8221CF58:
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r8.u32));
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r7.u32));
	// lwbrx r4,0,r4
	ctx.r4.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r4.u32));
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwbrx r7,0,r3
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r3.u32));
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8221CF8C:
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r9,r7,512
	ctx.r9.s64 = ctx.r7.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// dcbf r0,r9
	// dcbf r0,r11
	// li r9,24
	ctx.r9.s64 = 24;
	// dcbf r9,r11
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8221cf24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221CF24;
loc_8221CFC4:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221cf00
	if (!ctx.cr6.eq) goto loc_8221CF00;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82221460) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,44
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 44, ctx.xer);
	// bgt cr6,0x822214b8
	if (ctx.cr6.gt) goto loc_822214B8;
	// beq cr6,0x822214b0
	if (ctx.cr6.eq) goto loc_822214B0;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// blt cr6,0x822214e0
	if (ctx.cr6.lt) goto loc_822214E0;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// ble cr6,0x8222149c
	if (!ctx.cr6.gt) goto loc_8222149C;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// ble cr6,0x822214e0
	if (!ctx.cr6.gt) goto loc_822214E0;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// ble cr6,0x822214e8
	if (!ctx.cr6.gt) goto loc_822214E8;
	// cmplwi cr6,r3,39
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 39, ctx.xer);
	// beq cr6,0x822214b0
	if (ctx.cr6.eq) goto loc_822214B0;
	// cmplwi cr6,r3,40
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 40, ctx.xer);
	// bne cr6,0x822214e0
	if (!ctx.cr6.eq) goto loc_822214E0;
loc_8222149C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822214A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_822214B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822214a0
	goto loc_822214A0;
loc_822214B8:
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// beq cr6,0x822214e8
	if (ctx.cr6.eq) goto loc_822214E8;
	// cmplwi cr6,r3,50
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 50, ctx.xer);
	// ble cr6,0x822214e0
	if (!ctx.cr6.gt) goto loc_822214E0;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// ble cr6,0x822214e8
	if (!ctx.cr6.gt) goto loc_822214E8;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// ble cr6,0x822214e0
	if (!ctx.cr6.gt) goto loc_822214E0;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// ble cr6,0x822214e8
	if (!ctx.cr6.gt) goto loc_822214E8;
loc_822214E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822214ec
	goto loc_822214EC;
loc_822214E8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_822214EC:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82223378) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// b 0x82222798
	sub_82222798(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82223790) {
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
	ctx.lr = 0x82223798;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r27,-1
	r27.s64 = -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,-7292(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -7292);
	// mr r26,r27
	r26.u64 = r27.u64;
	// addi r30,r11,-7292
	r30.s64 = ctx.r11.s64 + -7292;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x82223848
	if (!ctx.cr0.eq) goto loc_82223848;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x823cd118
	ctx.lr = 0x822237D0;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822237e0
	if (!ctx.cr0.eq) goto loc_822237E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822238f8
	goto loc_822238F8;
loc_822237E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d440c
	ctx.lr = 0x822237E8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// li r8,6144
	ctx.r8.s64 = 6144;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,800(r31)
	REX_STORE_U32(r31.u32 + 800, ctx.r11.u32);
loc_82223800:
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
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bne cr6,0x82223824
	if (!ctx.cr6.eq) goto loc_82223824;
	// stwcx. r31,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82223800
	if (!ctx.cr0.eq) goto loc_82223800;
	// b 0x8222382c
	goto loc_8222382C;
loc_82223824:
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
loc_8222382C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82223848
	if (ctx.cr6.eq) goto loc_82223848;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x82223844;
	sub_823CD250(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82223848:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x82223850;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822238e0
	if (ctx.cr6.gt) goto loc_822238E0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x82223528
	ctx.lr = 0x82223874;
	sub_82223528(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822238e0
	if (ctx.cr0.eq) goto loc_822238E0;
loc_8222387C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// blt cr6,0x82223898
	if (ctx.cr6.lt) goto loc_82223898;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bge cr6,0x82223898
	if (!ctx.cr6.lt) goto loc_82223898;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82223898:
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223528
	ctx.lr = 0x822238AC;
	sub_82223528(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8222387c
	if (!ctx.cr0.eq) goto loc_8222387C;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x822238e0
	if (ctx.cr6.eq) goto loc_822238E0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223600
	ctx.lr = 0x822238DC;
	sub_82223600(ctx, base);
	// mr r26,r30
	r26.u64 = r30.u64;
loc_822238E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x822238E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// subf r11,r26,r27
	ctx.r11.u64 = r27.u64 - r26.u64;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822238F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82229EB0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x82229EB8;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r30,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r30.u32);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// addi r8,r7,7
	ctx.r8.s64 = ctx.r7.s64 + 7;
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r30,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// addi r7,r26,7
	ctx.r7.s64 = r26.s64 + 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// rlwinm r22,r8,0,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r21,r7,0,0,28
	r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82229F14:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82229f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229F14;
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,262
	ctx.r5.u64 = ctx.r5.u64 | 262;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82222b40
	ctx.lr = 0x82229F44;
	sub_82222B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212850
	ctx.lr = 0x82229F4C;
	sub_82212850(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822132a0
	ctx.lr = 0x82229F5C;
	sub_822132A0(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_82229F68:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212808
	ctx.lr = 0x82229F74;
	sub_82212808(ctx, base);
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212f10
	ctx.lr = 0x82229F88;
	sub_82212F10(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x82229f68
	if (ctx.cr6.lt) goto loc_82229F68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82211770
	ctx.lr = 0x82229F9C;
	sub_82211770(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82211748
	ctx.lr = 0x82229FAC;
	sub_82211748(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x8222a0cc
	if (ctx.cr6.eq) goto loc_8222A0CC;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82229fd8
	if (ctx.cr6.eq) goto loc_82229FD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// bl 0x8221e3a8
	ctx.lr = 0x82229FD4;
	sub_8221E3A8(ctx, base);
	// std r3,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_82229FD8:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222a008
	if (ctx.cr6.eq) goto loc_8222A008;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82229FFC;
	sub_8221E738(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_8222A008:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222a040
	if (ctx.cr6.eq) goto loc_8222A040;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x8222A02C;
	sub_8221E738(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_8222A040:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222a088
	if (ctx.cr6.eq) goto loc_8222A088;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x8222A070;
	sub_8221E738(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_8222A088:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222a0cc
	if (ctx.cr6.eq) goto loc_8222A0CC;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x8222A0B4;
	sub_8221E738(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_8222A0CC:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8222a11c
	if (ctx.cr6.eq) goto loc_8222A11C;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222a11c
	if (ctx.cr6.eq) goto loc_8222A11C;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x8222A104;
	sub_8221E738(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
loc_8222A11C:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8222a154
	if (ctx.cr6.eq) goto loc_8222A154;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222a154
	if (ctx.cr6.eq) goto loc_8222A154;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x8222A148;
	sub_8221E738(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_8222A154:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228a80
	ctx.lr = 0x8222A15C;
	sub_82228A80(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,-29416
	r29.s64 = ctx.r11.s64 + -29416;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228ad8
	ctx.lr = 0x8222A178;
	sub_82228AD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a194
	if (ctx.cr0.eq) goto loc_8222A194;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228b58
	ctx.lr = 0x8222A194;
	sub_82228B58(ctx, base);
loc_8222A194:
	// addi r4,r29,352
	ctx.r4.s64 = r29.s64 + 352;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,429
	ctx.r5.s64 = 429;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228ad8
	ctx.lr = 0x8222A1A8;
	sub_82228AD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a1c4
	if (ctx.cr0.eq) goto loc_8222A1C4;
	// addi r5,r29,160
	ctx.r5.s64 = r29.s64 + 160;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,500
	ctx.r4.s64 = 500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228b58
	ctx.lr = 0x8222A1C4;
	sub_82228B58(ctx, base);
loc_8222A1C4:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8222a1e0
	if (!ctx.cr6.gt) goto loc_8222A1E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8222A1DC;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222A1E0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82228df8
	ctx.lr = 0x8222A20C;
	sub_82228DF8(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r25,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// addi r11,r1,324
	ctx.r11.s64 = ctx.r1.s64 + 324;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// stfs f31,320(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f13,16228(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f13,388(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfs f11,31344(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31344);
	ctx.f11.f64 = double(temp.f32);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// lfs f10,-11672(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -11672);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,2012(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2012);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f11,344(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f10,348(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,352(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f9,360(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f8,364(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f12,392(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f7,340(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f12,396(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f31,400(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f31,404(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f31,416(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f31,420(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmsubs f2,f6,f13,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f0.f64)));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f12,-25744(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25744);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,-25748(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25748);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f10,-25752(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -25752);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lfs f9,-25756(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -25756);
	ctx.f9.f64 = double(temp.f32);
	// li r5,160
	ctx.r5.s64 = 160;
	// lfs f8,-25760(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -25760);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f7,-25764(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25764);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfs f13,-25768(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,-25772(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25772);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// lfs f6,-25776(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -25776);
	ctx.f6.f64 = double(temp.f32);
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f3,408(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f1,412(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f2,376(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f2,380(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f31,424(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f12,436(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f11,440(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f10,444(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f9,452(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f8,456(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f7,460(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f0,464(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f6,468(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f13,472(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f5,476(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x8222A3E0;
	sub_822D5870(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8222a4c0
	if (ctx.cr6.eq) goto loc_8222A4C0;
	// addi r27,r23,-4
	r27.s64 = r23.s64 + -4;
	// addi r28,r1,468
	r28.s64 = ctx.r1.s64 + 468;
loc_8222A3F4:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// stfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfsu f0,16(r28)
	ea = 16 + r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8222A420:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8222a420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222A420;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
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
	// bl 0x82222848
	ctx.lr = 0x8222A478;
	sub_82222848(ctx, base);
	// lwz r9,284(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// lwzu r11,4(r27)
	ea = 4 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// rlwimi r9,r10,11,13,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FC00) | (ctx.r9.u64 & 0xFFFFFFFFFFF803FF);
	// rlwinm r10,r8,0,13,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF87FFFF;
	// stw r9,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// rlwimi r11,r7,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228c30
	ctx.lr = 0x8222A4B4;
	sub_82228C30(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// blt cr6,0x8222a3f4
	if (ctx.cr6.lt) goto loc_8222A3F4;
loc_8222A4C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8222A4C8;
	sub_82228CF0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228b58
	ctx.lr = 0x8222A4DC;
	sub_82228B58(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228b58
	ctx.lr = 0x8222A4F0;
	sub_82228B58(ctx, base);
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8222a504
	if (!ctx.cr0.eq) goto loc_8222A504;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a50c
	if (ctx.cr0.eq) goto loc_8222A50C;
loc_8222A504:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221a770
	ctx.lr = 0x8222A50C;
	sub_8221A770(ctx, base);
loc_8222A50C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82228d58
	ctx.lr = 0x8222A51C;
	sub_82228D58(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,648
	ctx.r11.s64 = ctx.r1.s64 + 648;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8222A52C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8222a52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222A52C;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,262
	ctx.r9.u64 = ctx.r9.u64 | 262;
	// lwz r5,22096(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 22096);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,22092(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 22092);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82222848
	ctx.lr = 0x8222A584;
	sub_82222848(ctx, base);
	// lwz r11,22100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22100);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8222a59c
	if (!ctx.cr6.lt) goto loc_8222A59C;
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// b 0x8222a5a0
	goto loc_8222A5A0;
loc_8222A59C:
	// addis r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -1090519040;
loc_8222A5A0:
	// lwz r8,688(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r8,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r21,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r21.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r22,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82232580
	ctx.lr = 0x8222A5EC;
	sub_82232580(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822132a0
	ctx.lr = 0x8222A5F8;
	sub_822132A0(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8222a608
	if (ctx.cr6.eq) goto loc_8222A608;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8222A608;
	sub_82216CC8(ctx, base);
loc_8222A608:
	// addi r28,r1,640
	r28.s64 = ctx.r1.s64 + 640;
loc_8222A60C:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82212f10
	ctx.lr = 0x8222A620;
	sub_82212F10(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8222a630
	if (ctx.cr6.eq) goto loc_8222A630;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8222A630;
	sub_82216CC8(ctx, base);
loc_8222A630:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x8222a60c
	if (ctx.cr6.lt) goto loc_8222A60C;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82211748
	ctx.lr = 0x8222A64C;
	sub_82211748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822152c0
	ctx.lr = 0x8222A654;
	sub_822152C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8224A1A8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224a224
	if (ctx.cr6.eq) goto loc_8224A224;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,23872
	ctx.r10.s64 = ctx.r10.s64 + 23872;
	// lwz r9,544(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8224a224
	if (!ctx.cr6.lt) goto loc_8224A224;
	// rlwinm r6,r11,25,7,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r6,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8224a224
	if (!ctx.cr6.eq) goto loc_8224A224;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8224a224
	if (!ctx.cr6.eq) goto loc_8224A224;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8224A224:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8224a238
	if (!ctx.cr6.eq) goto loc_8224A238;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8224a29c
	goto loc_8224A29C;
loc_8224A238:
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
loc_8224A23C:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r3,32(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224a25c
	if (ctx.cr6.lt) goto loc_8224A25C;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224a274
	if (ctx.cr6.lt) goto loc_8224A274;
loc_8224A25C:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224a294
	if (ctx.cr6.eq) goto loc_8224A294;
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8224a23c
	goto loc_8224A23C;
loc_8224A274:
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mulli r11,r9,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(48));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82249e80
	ctx.lr = 0x8224A290;
	sub_82249E80(ctx, base);
	// b 0x8224a29c
	goto loc_8224A29C;
loc_8224A294:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
loc_8224A29C:
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

DEFINE_REX_FUNC(sub_8224E488) {
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
	// li r3,484
	ctx.r3.s64 = 484;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224E4AC;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e4e4
	if (ctx.cr0.eq) goto loc_8224E4E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8224e4e8
	goto loc_8224E4E8;
loc_8224E4E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8224E4E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8224e4fc
	if (!ctx.cr6.eq) goto loc_8224E4FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224e508
	goto loc_8224E508;
loc_8224E4FC:
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8224E508:
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

DEFINE_REX_FUNC(sub_82251BB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5768
	ctx.r3.s64 = ctx.r11.s64 + -5768;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251DF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5660
	ctx.r3.s64 = ctx.r11.s64 + -5660;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252020) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252188) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5512
	ctx.r3.s64 = ctx.r11.s64 + -5512;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252240) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5492
	ctx.r3.s64 = ctx.r11.s64 + -5492;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252260) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5444
	ctx.r3.s64 = ctx.r11.s64 + -5444;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822523F0) {
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
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-5364
	ctx.r10.s64 = ctx.r10.s64 + -5364;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r9,r9,-5840
	ctx.r9.s64 = ctx.r9.s64 + -5840;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82246ca8
	ctx.lr = 0x82252438;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// addi r10,r10,-7792
	ctx.r10.s64 = ctx.r10.s64 + -7792;
	// addi r9,r9,27656
	ctx.r9.s64 = ctx.r9.s64 + 27656;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8224fe88
	ctx.lr = 0x82252468;
	sub_8224FE88(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23620
	ctx.r4.s64 = ctx.r11.s64 + 23620;
	// bl 0x822512d8
	ctx.lr = 0x82252480;
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

DEFINE_REX_FUNC(sub_82254A68) {
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
	// li r3,212
	ctx.r3.s64 = 212;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x82254A8C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82254aa0
	if (ctx.cr0.eq) goto loc_82254AA0;
	// bl 0x8224f0e0
	ctx.lr = 0x82254A98;
	sub_8224F0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82254aa4
	goto loc_82254AA4;
loc_82254AA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82254AA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82254ab8
	if (!ctx.cr6.eq) goto loc_82254AB8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82254ac8
	goto loc_82254AC8;
loc_82254AB8:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82254AC8:
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

DEFINE_REX_FUNC(sub_82256348) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// bl 0x82255c88
	ctx.lr = 0x82256360;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82256370
	if (ctx.cr0.eq) goto loc_82256370;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_82256370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256990) {
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
	ctx.lr = 0x822569B8;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822569cc
	if (!ctx.cr0.eq) goto loc_822569CC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822569f0
	goto loc_822569F0;
loc_822569CC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822569e4
	if (ctx.cr6.eq) goto loc_822569E4;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x822569E0;
	sub_822469C0(ctx, base);
	// b 0x822569e8
	goto loc_822569E8;
loc_822569E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822569E8:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822569F0:
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

DEFINE_REX_FUNC(sub_82257B48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257938
	ctx.lr = 0x82257B70;
	sub_82257938(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82257B7C;
	sub_822469C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8224da00
	ctx.lr = 0x82257B84;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_8225A890) {
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
	ctx.lr = 0x8225A898;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bne cr6,0x8225a8d4
	if (!ctx.cr6.eq) goto loc_8225A8D4;
loc_8225A8C0:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8225A8C8;
	sub_822D7B58(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8225ad34
	goto loc_8225AD34;
loc_8225A8D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256918
	ctx.lr = 0x8225A8E0;
	sub_82256918(ctx, base);
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8225a900
	if (!ctx.cr6.eq) goto loc_8225A900;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8225A8F4;
	sub_822D7B58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8225ad34
	goto loc_8225AD34;
loc_8225A900:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-5472
	r28.s64 = ctx.r11.s64 + -5472;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224d8a0
	ctx.lr = 0x8225A910;
	sub_8224D8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822468a0
	ctx.lr = 0x8225A91C;
	sub_822468A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8225a94c
	if (ctx.cr0.eq) goto loc_8225A94C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82256e40
	ctx.lr = 0x8225A938;
	sub_82256E40(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8225A940;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8225ad34
	goto loc_8225AD34;
loc_8225A94C:
	// bl 0x82255cf8
	ctx.lr = 0x8225A950;
	sub_82255CF8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x8225a8c0
	if (ctx.cr0.eq) goto loc_8225A8C0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82257a70
	ctx.lr = 0x8225A96C;
	sub_82257A70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225A974;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224da00
	ctx.lr = 0x8225A97C;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225a9b4
	if (ctx.cr0.lt) goto loc_8225A9B4;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225a9b4
	if (ctx.cr6.eq) goto loc_8225A9B4;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225a9b4
	if (ctx.cr6.eq) goto loc_8225A9B4;
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 56);
	// stw r26,64(r23)
	REX_STORE_U32(r23.u32 + 64, r26.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,56(r23)
	REX_STORE_U32(r23.u32 + 56, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,68(r23)
	REX_STORE_U32(r23.u32 + 68, ctx.r11.u32);
loc_8225A9B4:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// beq cr6,0x8225aa28
	if (ctx.cr6.eq) goto loc_8225AA28;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225aa28
	if (ctx.cr0.eq) goto loc_8225AA28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257af0
	ctx.lr = 0x8225A9D8;
	sub_82257AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822590a0
	ctx.lr = 0x8225A9F0;
	sub_822590A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225aa1c
	if (ctx.cr0.lt) goto loc_8225AA1C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// lwz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addc r11,r11,r9
	ctx.xer.ca = ctx.r11.u32 + ctx.r9.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r11,r10
	r27.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8225aa20
	goto loc_8225AA20;
loc_8225AA1C:
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8225AA20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8225aa58
	if (!ctx.cr6.eq) goto loc_8225AA58;
loc_8225AA28:
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 56);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8225ad28
	if (ctx.cr6.eq) goto loc_8225AD28;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82259568
	ctx.lr = 0x8225AA48;
	sub_82259568(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8225AA50;
	sub_822D7B58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225ad34
	goto loc_8225AD34;
loc_8225AA58:
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82251640
	ctx.lr = 0x8225AA68;
	sub_82251640(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225acb0
	if (ctx.cr0.lt) goto loc_8225ACB0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82246220
	ctx.lr = 0x8225AA7C;
	sub_82246220(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225aa94
	if (!ctx.cr6.eq) goto loc_8225AA94;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// b 0x8225acb0
	goto loc_8225ACB0;
loc_8225AA94:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8225ce78
	ctx.lr = 0x8225AA9C;
	sub_8225CE78(ctx, base);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8225ce90
	ctx.lr = 0x8225AAA8;
	sub_8225CE90(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8225aacc
	if (ctx.cr6.eq) goto loc_8225AACC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,32(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 32);
	// bl 0x82268708
	ctx.lr = 0x8225AAC4;
	sub_82268708(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225acb0
	if (ctx.cr0.lt) goto loc_8225ACB0;
loc_8225AACC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ab6c
	if (ctx.cr6.eq) goto loc_8225AB6C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225ab6c
	if (!ctx.cr6.gt) goto loc_8225AB6C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x822581c8
	ctx.lr = 0x8225AB00;
	sub_822581C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ab6c
	if (ctx.cr0.lt) goto loc_8225AB6C;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225e988
	ctx.lr = 0x8225AB18;
	sub_8225E988(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8225ab40
	if (!ctx.cr6.gt) goto loc_8225AB40;
	// lfs f12,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_8225AB40:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8225ab60
	if (!ctx.cr6.gt) goto loc_8225AB60;
	// lfs f0,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_8225AB60:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256da0
	ctx.lr = 0x8225AB6C;
	sub_82256DA0(ctx, base);
loc_8225AB6C:
	// lis r31,-32172
	r31.s64 = -2108424192;
	// lwz r3,-6968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// bl 0x824d49dc
	ctx.lr = 0x8225AB78;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-6968(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824d49cc
	ctx.lr = 0x8225AB88;
	__imp__KeTlsSetValue(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256a80
	ctx.lr = 0x8225AB94;
	sub_82256A80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82256b70
	ctx.lr = 0x8225ABA8;
	sub_82256B70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8225abcc
	if (!ctx.cr6.lt) goto loc_8225ABCC;
	// lwz r3,-6968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -6968);
loc_8225ABB4:
	// bl 0x824d49dc
	ctx.lr = 0x8225ABB8;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-6968(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824d49cc
	ctx.lr = 0x8225ABC8;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x8225acb0
	goto loc_8225ACB0;
loc_8225ABCC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822568d0
	ctx.lr = 0x8225ABD4;
	sub_822568D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82256880
	ctx.lr = 0x8225ABE0;
	sub_82256880(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r3,-6968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// blt 0x8225abb4
	if (ctx.cr0.lt) goto loc_8225ABB4;
	// bl 0x824d49dc
	ctx.lr = 0x8225ABF0;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-6968(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824d49cc
	ctx.lr = 0x8225AC00;
	__imp__KeTlsSetValue(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82255b48
	ctx.lr = 0x8225AC08;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225ac34
	if (ctx.cr0.eq) goto loc_8225AC34;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227cd20
	ctx.lr = 0x8225AC24;
	sub_8227CD20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278048
	ctx.lr = 0x8225AC2C;
	sub_82278048(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x8225ac38
	goto loc_8225AC38;
loc_8225AC34:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8225AC38:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8225ac4c
	if (!ctx.cr6.eq) goto loc_8225AC4C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8225acb0
	goto loc_8225ACB0;
loc_8225AC4C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,32(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82259228
	ctx.lr = 0x8225AC64;
	sub_82259228(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225aca4
	if (ctx.cr0.lt) goto loc_8225ACA4;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82255b48
	ctx.lr = 0x8225AC74;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8225ac90
	if (ctx.cr0.eq) goto loc_8225AC90;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8227cd20
	ctx.lr = 0x8225AC84;
	sub_8227CD20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82277818
	ctx.lr = 0x8225AC8C;
	sub_82277818(ctx, base);
	// b 0x8225ac94
	goto loc_8225AC94;
loc_8225AC90:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_8225AC94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8225acd0
	if (!ctx.cr6.eq) goto loc_8225ACD0;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_8225ACA4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822582f0
	ctx.lr = 0x8225ACB0;
	sub_822582F0(ctx, base);
loc_8225ACB0:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225acc0
	if (ctx.cr6.eq) goto loc_8225ACC0;
	// bl 0x822516b0
	ctx.lr = 0x8225ACC0;
	sub_822516B0(ctx, base);
loc_8225ACC0:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8225ACC8;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8225ad34
	goto loc_8225AD34;
loc_8225ACD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278518
	ctx.lr = 0x8225ACE0;
	sub_82278518(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82257220
	ctx.lr = 0x8225ACEC;
	sub_82257220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed768
	ctx.lr = 0x8225ACF4;
	sub_822ED768(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82257318
	ctx.lr = 0x8225AD10;
	sub_82257318(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278348
	ctx.lr = 0x8225AD1C;
	sub_82278348(ctx, base);
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 56);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,56(r23)
	REX_STORE_U32(r23.u32 + 56, ctx.r11.u32);
loc_8225AD28:
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x822d7b58
	ctx.lr = 0x8225AD30;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225AD34:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8226F7A8) {
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
	ctx.lr = 0x8226F7B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f884
	if (ctx.cr6.eq) goto loc_8226F884;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x8226F7D0;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226f884
	if (ctx.cr0.eq) goto loc_8226F884;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x822d6a10
	ctx.lr = 0x8226F7E0;
	sub_822D6A10(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8226f884
	if (!ctx.cr6.lt) goto loc_8226F884;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lfs f13,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8226F82C;
	sub_822D6A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82256380
	ctx.lr = 0x8226F838;
	sub_82256380(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226f884
	if (ctx.cr0.eq) goto loc_8226F884;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8226f894
	if (!ctx.cr6.eq) goto loc_8226F894;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8226f884
	if (ctx.cr6.eq) goto loc_8226F884;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82284870
	ctx.lr = 0x8226F874;
	sub_82284870(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8226f8e0
	if (ctx.cr6.gt) goto loc_8226F8E0;
loc_8226F884:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8226F88C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
loc_8226F894:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226f8b4
	if (!ctx.cr6.lt) goto loc_8226F8B4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x8226f8bc
	goto loc_8226F8BC;
loc_8226F8B4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_8226F8BC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82284870
	ctx.lr = 0x8226F8D0;
	sub_82284870(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8226f8ec
	if (!ctx.cr6.gt) goto loc_8226F8EC;
loc_8226F8E0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f098
	ctx.lr = 0x8226F8EC;
	sub_8226F098(ctx, base);
loc_8226F8EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226F8F4;
	sub_8226B6F8(ctx, base);
	// b 0x8226f88c
	goto loc_8226F88C;
}

DEFINE_REX_FUNC(sub_82277F18) {
	REX_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
loc_82277F34:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82277f4c
	if (!ctx.cr6.gt) goto loc_82277F4C;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
loc_82277F4C:
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82277f34
	if (ctx.cr6.lt) goto loc_82277F34;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82278550) {
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
	// bl 0x822784a0
	ctx.lr = 0x8227856C;
	sub_822784A0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82278594
	if (!ctx.cr6.eq) goto loc_82278594;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822785a0
	if (ctx.cr6.eq) goto loc_822785A0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82258c78
	ctx.lr = 0x82278590;
	sub_82258C78(ctx, base);
	// b 0x822785a0
	goto loc_822785A0;
loc_82278594:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8227b7c0
	ctx.lr = 0x8227859C;
	sub_8227B7C0(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_822785A0:
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x8227cd20
	ctx.lr = 0x822785B4;
	sub_8227CD20(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8227A068) {
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
	ctx.lr = 0x8227A070;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr. r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r27,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r27.u8);
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq 0x8227a104
	if (ctx.cr0.eq) goto loc_8227A104;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8227a120
	if (ctx.cr6.gt) goto loc_8227A120;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r25,-4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8227a134
	if (!ctx.cr6.eq) goto loc_8227A134;
loc_8227A104:
	// lis r28,-32720
	r28.s64 = -2144337920;
loc_8227A108:
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
loc_8227A10C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82279ff8
	ctx.lr = 0x8227A114;
	sub_82279FF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8227A118:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
loc_8227A120:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82279ff8
	ctx.lr = 0x8227A128;
	sub_82279FF8(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227a118
	goto loc_8227A118;
loc_8227A134:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8224d8a0
	ctx.lr = 0x8227A13C;
	sub_8224D8A0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227a190
	if (!ctx.cr0.eq) goto loc_8227A190;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,23836(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227a184
	if (ctx.cr6.eq) goto loc_8227A184;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227A170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227a184
	if (ctx.cr0.lt) goto loc_8227A184;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227a190
	if (!ctx.cr6.eq) goto loc_8227A190;
loc_8227A184:
	// lis r28,-32720
	r28.s64 = -2144337920;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
	// b 0x8227a10c
	goto loc_8227A10C;
loc_8227A190:
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// clrlwi r23,r23,24
	r23.u64 = r23.u32 & 0xFF;
	// beq 0x8227a220
	if (ctx.cr0.eq) goto loc_8227A220;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r25,0(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82279a10
	ctx.lr = 0x8227A1C8;
	sub_82279A10(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r11.u32);
	// bne 0x8227a1dc
	if (!ctx.cr0.eq) goto loc_8227A1DC;
loc_8227A1D4:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// b 0x8227a108
	goto loc_8227A108;
loc_8227A1DC:
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82279f00
	ctx.lr = 0x8227A200;
	sub_82279F00(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8227a10c
	if (ctx.cr0.lt) goto loc_8227A10C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x8227a220
	if (ctx.cr6.eq) goto loc_8227A220;
loc_8227A214:
	// lis r28,-32720
	r28.s64 = -2144337920;
	// ori r28,r28,13
	r28.u64 = r28.u64 | 13;
	// b 0x8227a10c
	goto loc_8227A10C;
loc_8227A220:
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227a2d0
	if (ctx.cr0.eq) goto loc_8227A2D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8227a214
	if (ctx.cr6.lt) goto loc_8227A214;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8227a2d0
	if (ctx.cr6.eq) goto loc_8227A2D0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82279ad0
	ctx.lr = 0x8227A264;
	sub_82279AD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r3.u32);
	// beq 0x8227a1d4
	if (ctx.cr0.eq) goto loc_8227A1D4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8227a2d0
	if (ctx.cr6.eq) goto loc_8227A2D0;
loc_8227A278:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r10.u32);
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r29.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x8227a068
	ctx.lr = 0x8227A2BC;
	sub_8227A068(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8227a10c
	if (ctx.cr0.lt) goto loc_8227A10C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x8227a278
	if (ctx.cr6.lt) goto loc_8227A278;
loc_8227A2D0:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227a10c
	if (ctx.cr0.eq) goto loc_8227A10C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822795e8
	ctx.lr = 0x8227A2F0;
	sub_822795E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8227a10c
	goto loc_8227A10C;
}

DEFINE_REX_FUNC(sub_82281AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82281AE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,204(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82281b50
	if (ctx.cr6.eq) goto loc_82281B50;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r28,r11,30560
	r28.s64 = ctx.r11.s64 + 30560;
loc_82281AFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227fec0
	ctx.lr = 0x82281B04;
	sub_8227FEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82281b44
	if (ctx.cr0.eq) goto loc_82281B44;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82281b44
	if (ctx.cr6.eq) goto loc_82281B44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,76(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x82281710
	ctx.lr = 0x82281B24;
	sub_82281710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82280c78
	ctx.lr = 0x82281B30;
	sub_82280C78(ctx, base);
	// bl 0x82280c20
	ctx.lr = 0x82281B34;
	sub_82280C20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227ff40
	ctx.lr = 0x82281B3C;
	sub_8227FF40(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x82281b48
	goto loc_82281B48;
loc_82281B44:
	// lwz r31,76(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 76);
loc_82281B48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82281afc
	if (!ctx.cr6.eq) goto loc_82281AFC;
loc_82281B50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82285260) {
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
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82282f80
	ctx.lr = 0x82285284;
	sub_82282F80(ctx, base);
	// bl 0x8228ea50
	ctx.lr = 0x82285288;
	sub_8228EA50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822852a4
	if (ctx.cr6.eq) goto loc_822852A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822852A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822852A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82286168) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// lfs f0,-13044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bctrl 
	ctx.lr = 0x82286214;
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

DEFINE_REX_FUNC(sub_82288308) {
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
	ctx.lr = 0x82288310;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228833C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r30,20
	r27.s64 = r30.s64 + 20;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne 0x822883fc
	if (!ctx.cr0.eq) goto loc_822883FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822883C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82288400
	if (ctx.cr0.lt) goto loc_82288400;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822883DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822883FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822883FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288400:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8228B518) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8228B520;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228b584
	if (ctx.cr6.eq) goto loc_8228B584;
	// addi r29,r3,100
	r29.s64 = ctx.r3.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228B540;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,31372(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31372);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// bl 0x8228b170
	ctx.lr = 0x8228B558;
	sub_8228B170(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b56c
	if (!ctx.cr6.eq) goto loc_8228B56C;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// b 0x8228b578
	goto loc_8228B578;
loc_8228B56C:
	// stw r30,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r30.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r11.u32);
loc_8228B578:
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228B584;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8228B584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228DBB0) {
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
	// fmuls f31,f3,f3
	f31.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmadds f13,f1,f1,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f13.f64)));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x822d49e8
	ctx.lr = 0x8228DBE4;
	sub_822D49E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,1980(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
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

DEFINE_REX_FUNC(sub_822904B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822904E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822904e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822904E4;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,12760
	ctx.r11.s64 = ctx.r11.s64 + 12760;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82291920) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,12944
	ctx.r11.s64 = ctx.r11.s64 + 12944;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82291990) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822919a0
	if (ctx.cr6.eq) goto loc_822919A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_822919A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82292138) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82292198
	if (ctx.cr6.eq) goto loc_82292198;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82292198
	if (ctx.cr6.eq) goto loc_82292198;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82292160
	if (!ctx.cr0.eq) goto loc_82292160;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82292160:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// blr 
	return;
loc_82292198:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293268) {
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
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82232580
	ctx.lr = 0x82293290;
	sub_82232580(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82294048) {
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
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82294098
	if (ctx.cr6.eq) goto loc_82294098;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82294098
	if (ctx.cr6.eq) goto loc_82294098;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82294088
	if (!ctx.cr6.eq) goto loc_82294088;
	// li r31,-1
	r31.s64 = -1;
	// b 0x822940a0
	goto loc_822940A0;
loc_82294088:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x822d4fa0
	ctx.lr = 0x82294094;
	sub_822D4FA0(ctx, base);
	// b 0x822940a0
	goto loc_822940A0;
loc_82294098:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,6
	r31.u64 = r31.u64 | 6;
loc_822940A0:
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

DEFINE_REX_FUNC(sub_82295688) {
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
	ctx.lr = 0x82295690;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82295748
	if (ctx.cr6.eq) goto loc_82295748;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295748
	if (ctx.cr6.eq) goto loc_82295748;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822956dc
	if (!ctx.cr6.eq) goto loc_822956DC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822942b8
	ctx.lr = 0x822956D4;
	sub_822942B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82295750
	if (ctx.cr0.lt) goto loc_82295750;
loc_822956DC:
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82294dc0
	ctx.lr = 0x822956F8;
	sub_82294DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82295750
	if (!ctx.cr0.eq) goto loc_82295750;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82295710
	if (ctx.cr6.eq) goto loc_82295710;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82295710:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82295720
	if (ctx.cr6.eq) goto loc_82295720;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82295720:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82295730
	if (ctx.cr6.eq) goto loc_82295730;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82295730:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82295740
	if (ctx.cr6.eq) goto loc_82295740;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82295740:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82295750
	goto loc_82295750;
loc_82295748:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
loc_82295750:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8229B3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x8229b440
	if (!ctx.cr6.gt) goto loc_8229B440;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x8229b450
	goto loc_8229B450;
loc_8229B440:
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_8229B450:
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8229b48c
	if (!ctx.cr6.gt) goto loc_8229B48C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x8229b4a4
	goto loc_8229B4A4;
loc_8229B48C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229b4b0
	if (!ctx.cr6.gt) goto loc_8229B4B0;
	// lhz r11,5808(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8229B4A4:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_8229B4B0:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// rlwinm r6,r5,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r8,5804(r3)
	REX_STORE_U32(ctx.r3.u32 + 5804, ctx.r8.u32);
	// not r8,r5
	ctx.r8.u64 = ~ctx.r5.u64;
	// stbx r5,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r8,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_8229B538:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bdnz 0x8229b538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229B538;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A08B8) {
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
	ctx.lr = 0x822A08C0;
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
	// ble cr6,0x822a09ac
	if (!ctx.cr6.gt) goto loc_822A09AC;
loc_822A08E4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822a0970
	if (!ctx.cr6.gt) goto loc_822A0970;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a03f0
	ctx.lr = 0x822A0900;
	sub_822A03F0(ctx, base);
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
	// bge cr6,0x822a0950
	if (!ctx.cr6.lt) goto loc_822A0950;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a08b8
	ctx.lr = 0x822A0948;
	sub_822A08B8(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x822a0960
	goto loc_822A0960;
loc_822A0950:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822a08b8
	ctx.lr = 0x822A095C;
	sub_822A08B8(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_822A0960:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x822a08e4
	if (ctx.cr6.gt) goto loc_822A08E4;
loc_822A0970:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x822a09ac
	if (!ctx.cr6.gt) goto loc_822A09AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822a0998
	if (!ctx.cr6.gt) goto loc_822A0998;
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
	// bl 0x8229fd78
	ctx.lr = 0x822A0998;
	sub_8229FD78(ctx, base);
loc_822A0998:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a0628
	ctx.lr = 0x822A09A8;
	sub_822A0628(ctx, base);
	// b 0x822a09c8
	goto loc_822A09C8;
loc_822A09AC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822a09c8
	if (!ctx.cr6.gt) goto loc_822A09C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229fde0
	ctx.lr = 0x822A09C8;
	sub_8229FDE0(ctx, base);
loc_822A09C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822A57B0) {
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
	ctx.lr = 0x822A57B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,255(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 255);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822a57e4
	if (!ctx.cr0.eq) goto loc_822A57E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a58d8
	goto loc_822A58D8;
loc_822A57E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a3120
	ctx.lr = 0x822A57F4;
	sub_822A3120(ctx, base);
	// addi r4,r30,480
	ctx.r4.s64 = r30.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a9958
	ctx.lr = 0x822A5800;
	sub_822A9958(ctx, base);
	// ld r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 456);
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// std r11,504(r30)
	REX_STORE_U64(r30.u32 + 504, ctx.r11.u64);
	// lbz r11,258(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 258);
	// stb r11,512(r30)
	REX_STORE_U8(r30.u32 + 512, ctx.r11.u8);
	// bl 0x8229e988
	ctx.lr = 0x822A5818;
	sub_8229E988(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// bl 0x8229e9b0
	ctx.lr = 0x822A5824;
	sub_8229E9B0(ctx, base);
	// clrlwi r28,r3,16
	r28.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r29,r29,16
	r29.u64 = r29.u32 & 0xFFFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11e8
	ctx.lr = 0x822A5848;
	sub_822A11E8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1550
	ctx.lr = 0x822A5860;
	sub_822A1550(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a1080
	ctx.lr = 0x822A5870;
	sub_822A1080(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a26b8
	ctx.lr = 0x822A587C;
	sub_822A26B8(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,452(r31)
	REX_STORE_U32(r31.u32 + 452, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1528
	ctx.lr = 0x822A5890;
	sub_822A1528(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A58A0;
	sub_822A1098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a1600
	ctx.lr = 0x822A58B0;
	sub_822A1600(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r29,1544(r11)
	REX_STORE_U8(ctx.r11.u32 + 1544, r29.u8);
	// stb r29,1545(r11)
	REX_STORE_U8(ctx.r11.u32 + 1545, r29.u8);
	// stb r29,1546(r11)
	REX_STORE_U8(ctx.r11.u32 + 1546, r29.u8);
	// stb r10,1536(r11)
	REX_STORE_U8(ctx.r11.u32 + 1536, ctx.r10.u8);
	// stb r10,1537(r11)
	REX_STORE_U8(ctx.r11.u32 + 1537, ctx.r10.u8);
loc_822A58D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822A9DA0) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1616
	ctx.r3.s64 = ctx.r11.s64 + 1616;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9F80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2912(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2912);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822a9fa0
	if (!ctx.cr6.eq) goto loc_822A9FA0;
	// lfs f0,2916(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2916);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822A9FA0:
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,2912(r3)
	REX_STORE_U64(ctx.r3.u32 + 2912, ctx.r11.u64);
	// lfs f13,2912(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2916(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2916);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2932(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 2932, temp.u32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,2928(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2928, temp.u32);
	// stfs f12,2936(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 2936, temp.u32);
	// stfs f0,2940(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2940, temp.u32);
	// lwz r11,31464(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 31464);
	// stb r8,1541(r11)
	REX_STORE_U8(ctx.r11.u32 + 1541, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB5B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB608) {
	REX_FUNC_PROLOGUE();
	// lbz r10,258(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 258);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,258(r3)
	REX_STORE_U8(ctx.r3.u32 + 258, ctx.r4.u8);
	// b 0x822ab3d8
	sub_822AB3D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AC2B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ACB78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822ACB80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,68(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,64(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x822acba0
	goto loc_822ACBA0;
loc_822ACB94:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822ba118
	ctx.lr = 0x822ACB9C;
	sub_822BA118(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_822ACBA0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x822acb94
	if (!ctx.cr6.eq) goto loc_822ACB94;
	// lwz r29,148(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r30,144(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 144);
	// b 0x822acbc0
	goto loc_822ACBC0;
loc_822ACBB4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822c2380
	ctx.lr = 0x822ACBBC;
	sub_822C2380(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_822ACBC0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x822acbb4
	if (!ctx.cr6.eq) goto loc_822ACBB4;
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r31,48(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x822acbe0
	goto loc_822ACBE0;
loc_822ACBD4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822b25e0
	ctx.lr = 0x822ACBDC;
	sub_822B25E0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822ACBE0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x822acbd4
	if (!ctx.cr6.eq) goto loc_822ACBD4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822AE3D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AE3E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,64(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r3,64
	r28.s64 = ctx.r3.s64 + 64;
	// b 0x822ae414
	goto loc_822AE414;
loc_822AE3F4:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ae410
	if (ctx.cr6.eq) goto loc_822AE410;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ba568
	ctx.lr = 0x822AE408;
	sub_822BA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822AE410;
	sub_822C80A8(ctx, base);
loc_822AE410:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822AE414:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ae3f4
	if (!ctx.cr6.eq) goto loc_822AE3F4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822AE434;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B0C78) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f30
	ctx.lr = 0x822B0C90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822d4c88
	ctx.lr = 0x822B0CB0;
	sub_822D4C88(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822d4c88
	ctx.lr = 0x822B0CC0;
	sub_822D4C88(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822d4c88
	ctx.lr = 0x822B0CD0;
	sub_822D4C88(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f28,f1
	f28.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822d4d68
	ctx.lr = 0x822B0CE0;
	sub_822D4D68(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// frsp f27,f1
	f27.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822d4d68
	ctx.lr = 0x822B0CF0;
	sub_822D4D68(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f26,f1
	f26.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x822d4d68
	ctx.lr = 0x822B0D00;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f12,f26,f28
	ctx.f12.f64 = double(float(f26.f64 * f28.f64));
	// fmuls f13,f27,f28
	ctx.f13.f64 = double(float(f27.f64 * f28.f64));
	// fmuls f10,f28,f29
	ctx.f10.f64 = double(float(f28.f64 * f29.f64));
	// fmuls f11,f26,f27
	ctx.f11.f64 = double(float(f26.f64 * f27.f64));
	// fmuls f9,f0,f26
	ctx.f9.f64 = double(float(ctx.f0.f64 * f26.f64));
	// fmuls f8,f0,f29
	ctx.f8.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f7,f9,f27
	ctx.f7.f64 = double(float(ctx.f9.f64 * f27.f64));
	// fmuls f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fmadds f0,f0,f29,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f12.f64)));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmsubs f13,f9,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, -ctx.f13.f64)));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f0,f10,f30,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f7.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmsubs f0,f11,f28,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, -ctx.f8.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f7c
	ctx.lr = 0x822B0D60;
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

DEFINE_REX_FUNC(sub_822B7AB8) {
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
	ctx.lr = 0x822B7AC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822b7550
	ctx.lr = 0x822B7ACC;
	sub_822B7550(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// addi r31,r29,40
	r31.s64 = r29.s64 + 40;
	// mr r27,r26
	r27.u64 = r26.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7b48
	if (ctx.cr0.eq) goto loc_822B7B48;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_822B7AF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r30,r28,r11
	r30.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b7b10
	if (ctx.cr6.eq) goto loc_822B7B10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822b0710
	ctx.lr = 0x822B7B0C;
	sub_822B0710(ctx, base);
	// stw r26,136(r30)
	REX_STORE_U32(r30.u32 + 136, r26.u32);
loc_822B7B10:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B7B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b7af0
	if (ctx.cr6.lt) goto loc_822B7AF0;
loc_822B7B48:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822B7B5C;
	sub_822BA200(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b7ba4
	if (ctx.cr6.eq) goto loc_822B7BA4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r31,112(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 112);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x822b7ba0
	if (ctx.cr6.gt) goto loc_822B7BA0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822b7ba0
	if (ctx.cr6.eq) goto loc_822B7BA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b85b0
	ctx.lr = 0x822B7B94;
	sub_822B85B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B7B9C;
	sub_822C80A8(ctx, base);
	// stw r26,112(r29)
	REX_STORE_U32(r29.u32 + 112, r26.u32);
loc_822B7BA0:
	// stw r26,112(r29)
	REX_STORE_U32(r29.u32 + 112, r26.u32);
loc_822B7BA4:
	// addi r4,r29,200
	ctx.r4.s64 = r29.s64 + 200;
	// lwz r6,204(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 204);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,200(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 200);
	// bl 0x822ba200
	ctx.lr = 0x822B7BB8;
	sub_822BA200(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822BA258) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BA260;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r30.u32);
	// addi r29,r3,72
	r29.s64 = ctx.r3.s64 + 72;
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, r30.u32);
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// stb r30,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, r30.u8);
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x822b3b80
	ctx.lr = 0x822BA29C;
	sub_822B3B80(ctx, base);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// bl 0x822ad068
	ctx.lr = 0x822BA2C8;
	sub_822AD068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822BD3E8) {
	REX_FUNC_PROLOGUE();
	// lbz r3,192(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BD440) {
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
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BD464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bd474
	if (ctx.cr0.eq) goto loc_822BD474;
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x822bd478
	goto loc_822BD478;
loc_822BD474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BD478:
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

DEFINE_REX_FUNC(sub_822C0160) {
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
	// bl 0x822d4e68
	ctx.lr = 0x822C0168;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c01a4
	if (ctx.cr6.eq) goto loc_822C01A4;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822c01a8
	if (ctx.cr0.eq) goto loc_822C01A8;
loc_822C01A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C01A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c05cc
	if (ctx.cr0.eq) goto loc_822C05CC;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c01d8
	if (ctx.cr6.eq) goto loc_822C01D8;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822c01dc
	if (ctx.cr0.eq) goto loc_822C01DC;
loc_822C01D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C01DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c05cc
	if (ctx.cr0.eq) goto loc_822C05CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,32(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c025c
	if (!ctx.cr6.eq) goto loc_822C025C;
loc_822C0208:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C022C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x822c05d0
	goto loc_822C05D0;
loc_822C025C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822c0208
	if (ctx.cr6.eq) goto loc_822C0208;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822c0208
	if (ctx.cr6.eq) goto loc_822C0208;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822c0208
	if (ctx.cr6.eq) goto loc_822C0208;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822c05cc
	if (!ctx.cr6.eq) goto loc_822C05CC;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r31,r11,-3168
	r31.s64 = ctx.r11.s64 + -3168;
	// bne cr6,0x822c02a0
	if (!ctx.cr6.eq) goto loc_822C02A0;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,384
	ctx.r6.s64 = ctx.r11.s64 + 384;
	// bne cr6,0x822c02a0
	if (!ctx.cr6.eq) goto loc_822C02A0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_822C02A0:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821f3f40
	ctx.lr = 0x822C02AC;
	sub_821F3F40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822c02bc
	if (ctx.cr6.eq) goto loc_822C02BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822c02d0
	goto loc_822C02D0;
loc_822C02BC:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// bne cr6,0x822c02d0
	if (!ctx.cr6.eq) goto loc_822C02D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_822C02D0:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822C02D8;
	sub_821F3F40(ctx, base);
	// lwz r28,28(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 28);
	// lwz r27,28(r21)
	r27.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r26,52(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r25,52(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 52);
	// bl 0x8229f270
	ctx.lr = 0x822C02F8;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822C0304;
	sub_821F3F40(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c05cc
	if (!ctx.cr6.gt) goto loc_822C05CC;
	// li r23,0
	r23.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_822C031C:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// beq cr6,0x822c0340
	if (ctx.cr6.eq) goto loc_822C0340;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822c0350
	goto loc_822C0350;
loc_822C0340:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lhz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r8,18(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
loc_822C0350:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
loc_822C0374:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,-32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f10,f13,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsx f10,r10,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822c0374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C0374;
	// mulli r11,r8,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
loc_822C03F0:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,-32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f10,f13,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsx f10,r10,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822c03f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C03F0;
	// mulli r11,r7,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(12));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
loc_822C046C:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,-32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f8,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f10,f13,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsx f10,r10,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822c046c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C046C;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ble cr6,0x822c05b4
	if (!ctx.cr6.gt) goto loc_822C05B4;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_822C04DC:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// beq cr6,0x822c0500
	if (ctx.cr6.eq) goto loc_822C0500;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822c0510
	goto loc_822C0510;
loc_822C0500:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r9,18(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
loc_822C0510:
	// mulli r8,r9,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lfsx f0,r8,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mulli r9,r10,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r10,r8,r25
	ctx.r10.u64 = ctx.r8.u64 + r25.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f8,204(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f4,220(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x822be820
	ctx.lr = 0x822C0594;
	sub_822BE820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c05d8
	if (!ctx.cr0.eq) goto loc_822C05D8;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c04dc
	if (ctx.cr6.lt) goto loc_822C04DC;
loc_822C05B4:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,32
	r24.s64 = r24.s64 + 32;
	// addi r23,r23,24
	r23.s64 = r23.s64 + 24;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c031c
	if (ctx.cr6.lt) goto loc_822C031C;
loc_822C05CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C05D0:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822d4eb8
	return;
loc_822C05D8:
	// stw r21,188(r20)
	REX_STORE_U32(r20.u32 + 188, r21.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r20,188(r21)
	REX_STORE_U32(r21.u32 + 188, r20.u32);
	// b 0x822c05d0
	goto loc_822C05D0;
}

DEFINE_REX_FUNC(sub_822D3398) {
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
	ctx.lr = 0x822D33A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d0de0
	ctx.lr = 0x822D33AC;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d3530
	if (ctx.cr0.eq) goto loc_822D3530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0c70
	ctx.lr = 0x822D33BC;
	sub_822D0C70(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r27,r31,220
	r27.s64 = r31.s64 + 220;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D33D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822d33f8
	if (ctx.cr6.lt) goto loc_822D33F8;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
loc_822D33F8:
	// lbz r7,29(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 29);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r8,216(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 216);
	// mulli r10,r7,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(36));
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822D342C;
	sub_822D5870(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822d3448
	if (ctx.cr6.eq) goto loc_822D3448;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// beq cr6,0x822d349c
	if (ctx.cr6.eq) goto loc_822D349C;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x822d3530
	if (!ctx.cr6.eq) goto loc_822D3530;
loc_822D3448:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822d29c8
	ctx.lr = 0x822D3454;
	sub_822D29C8(ctx, base);
	// lbz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 88);
loc_822D3458:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822d3464
	if (!ctx.cr6.eq) goto loc_822D3464;
	// li r29,1
	r29.s64 = 1;
loc_822D3464:
	// lbz r11,29(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 29);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r8,216(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 216);
	// mulli r9,r11,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bne cr6,0x822d34b0
	if (!ctx.cr6.eq) goto loc_822D34B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x822d34b4
	goto loc_822D34B4;
loc_822D349C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822d0ea0
	ctx.lr = 0x822D34A8;
	sub_822D0EA0(ctx, base);
	// lbz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 212);
	// b 0x822d3458
	goto loc_822D3458;
loc_822D34B0:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822D34B4:
	// lbz r10,29(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 29);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// mulli r10,r10,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822d351c
	if (ctx.cr6.lt) goto loc_822D351C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d351c
	if (!ctx.cr0.eq) goto loc_822D351C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0cd8
	ctx.lr = 0x822D34EC;
	sub_822D0CD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3508
	if (ctx.cr0.eq) goto loc_822D3508;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x822d351c
	goto loc_822D351C;
loc_822D3508:
	// lbz r11,29(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 29);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_822D351C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D3530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(__savevmx_21) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_102) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_69) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E5F28) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x822dbb00
	ctx.lr = 0x822E5F3C;
	sub_822DBB00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E6618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E6620;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe. r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e6658
	if (!ctx.cr0.eq) goto loc_822E6658;
	// bl 0x822db6c0
	ctx.lr = 0x822E6644;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E6650;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e6684
	goto loc_822E6684;
loc_822E6658:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcc80
	ctx.lr = 0x822E6660;
	sub_822DCC80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e6468
	ctx.lr = 0x822E6670;
	sub_822E6468(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x822e66ac
	ctx.lr = 0x822E6680;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E66AC(ctx, base);
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_822E6684:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822E90D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822E96B8) {
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
	// bl 0x822eeca0
	ctx.lr = 0x822E96D4;
	sub_822EECA0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-29736
	ctx.r10.s64 = ctx.r11.s64 + -29736;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822eeed0
	ctx.lr = 0x822E96E8;
	sub_822EEED0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// li r5,576
	ctx.r5.s64 = 576;
	// stw r30,640(r31)
	REX_STORE_U32(r31.u32 + 640, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,636(r31)
	REX_STORE_U32(r31.u32 + 636, r30.u32);
	// stw r30,644(r31)
	REX_STORE_U32(r31.u32 + 644, r30.u32);
	// stw r30,648(r31)
	REX_STORE_U32(r31.u32 + 648, r30.u32);
	// stw r30,652(r31)
	REX_STORE_U32(r31.u32 + 652, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x822E9714;
	sub_822D5870(ctx, base);
	// stw r30,656(r31)
	REX_STORE_U32(r31.u32 + 656, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,660(r31)
	REX_STORE_U32(r31.u32 + 660, r30.u32);
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

DEFINE_REX_FUNC(sub_822EB3A8) {
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
	// bl 0x822d4e60
	ctx.lr = 0x822EB3B0;
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r30,r27,208
	r30.s64 = r27.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB3DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// bl 0x822f35d8
	ctx.lr = 0x822EB3F0;
	sub_822F35D8(ctx, base);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ori r18,r9,16389
	r18.u64 = ctx.r9.u64 | 16389;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r18
	ctx.r11.u64 = ctx.r6.u64 & r18.u64;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// blt cr6,0x822eb434
	if (ctx.cr6.lt) goto loc_822EB434;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eb434
	if (!ctx.cr6.eq) goto loc_822EB434;
	// lis r19,-32768
	r19.s64 = -2147483648;
	// ori r19,r19,16387
	r19.u64 = r19.u64 | 16387;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x822eb480
	goto loc_822EB480;
loc_822EB434:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822eb480
	if (ctx.cr6.lt) goto loc_822EB480;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EB45C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,52(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EB480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EB480:
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822eb4d0
	if (ctx.cr6.lt) goto loc_822EB4D0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// bl 0x822f3600
	ctx.lr = 0x822EB498;
	sub_822F3600(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r9,r18
	r19.u64 = ctx.r9.u64 & r18.u64;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822eb4d0
	if (ctx.cr6.lt) goto loc_822EB4D0;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822eb4d4
	if (!ctx.cr6.eq) goto loc_822EB4D4;
	// lis r19,-32768
	r19.s64 = -2147483648;
	// ori r19,r19,16387
	r19.u64 = r19.u64 | 16387;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x822eb74c
	goto loc_822EB74C;
loc_822EB4D0:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_822EB4D4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822eb74c
	if (ctx.cr6.lt) goto loc_822EB74C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r23,r10,-28044
	r23.s64 = ctx.r10.s64 + -28044;
	// addi r25,r9,-28076
	r25.s64 = ctx.r9.s64 + -28076;
	// addi r22,r8,-28100
	r22.s64 = ctx.r8.s64 + -28100;
	// addi r21,r7,-28120
	r21.s64 = ctx.r7.s64 + -28120;
	// addi r20,r6,-28148
	r20.s64 = ctx.r6.s64 + -28148;
	// addi r24,r11,-28180
	r24.s64 = ctx.r11.s64 + -28180;
loc_822EB510:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r26,r5,16
	r26.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822eb704
	if (!ctx.cr6.lt) goto loc_822EB704;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eb65c
	if (!ctx.cr6.eq) goto loc_822EB65C;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x822EB558;
	sub_822D7BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb584
	if (!ctx.cr6.eq) goto loc_822EB584;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EB580;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822eb6f0
	goto loc_822EB6F0;
loc_822EB584:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x822EB594;
	sub_822D7BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb5c0
	if (!ctx.cr6.eq) goto loc_822EB5C0;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EB5BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822eb6f0
	goto loc_822EB6F0;
loc_822EB5C0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x822EB5D0;
	sub_822D7BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb5fc
	if (!ctx.cr6.eq) goto loc_822EB5FC;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EB5F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822eb6f0
	goto loc_822EB6F0;
loc_822EB5FC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x822EB60C;
	sub_822D7BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb6f0
	if (!ctx.cr6.eq) goto loc_822EB6F0;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r29,r27,208
	r29.s64 = r27.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB62C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822d6a10
	ctx.lr = 0x822EB630;
	sub_822D6A10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822eb6f0
	if (!ctx.cr6.eq) goto loc_822EB6F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EB658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822eb6f0
	goto loc_822EB6F0;
loc_822EB65C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822eb6f0
	if (!ctx.cr6.eq) goto loc_822EB6F0;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x822EB678;
	sub_822D7BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb698
	if (!ctx.cr6.eq) goto loc_822EB698;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822eb6e8
	goto loc_822EB6E8;
loc_822EB698:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x822EB6A8;
	sub_822D7BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822eb6f0
	if (!ctx.cr6.eq) goto loc_822EB6F0;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r29,r27,208
	r29.s64 = r27.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822eb6f0
	if (!ctx.cr6.eq) goto loc_822EB6F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_822EB6E8:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EB6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EB6F0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822eb510
	goto loc_822EB510;
loc_822EB704:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822eb74c
	if (ctx.cr6.lt) goto loc_822EB74C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// bl 0x822f3518
	ctx.lr = 0x822EB718;
	sub_822F3518(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r9,r18
	r19.u64 = ctx.r9.u64 & r18.u64;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x822eb74c
	if (ctx.cr6.lt) goto loc_822EB74C;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EB74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EB74C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822eb768
	goto loc_822EB768;
loc_822EB768:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_822FDB78) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x822FDB80;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fdba8
	if (!ctx.cr6.eq) goto loc_822FDBA8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eac
	return;
loc_822FDBA8:
	// addi r23,r4,-24
	r23.s64 = ctx.r4.s64 + -24;
	// addi r22,r6,24
	r22.s64 = ctx.r6.s64 + 24;
	// cmplwi cr6,r23,50
	ctx.cr6.compare<uint32_t>(r23.u32, 50, ctx.xer);
	// blt cr6,0x822fe03c
	if (ctx.cr6.lt) goto loc_822FE03C;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r24,r22,32
	r24.u64 = r22.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FDBD8;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fe03c
	if (!ctx.cr6.eq) goto loc_822FE03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe03c
	if (ctx.cr6.eq) goto loc_822FE03C;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r23,64
	ctx.cr6.compare<uint32_t>(r23.u32, 64, ctx.xer);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r25,r8,16
	r25.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x822fe03c
	if (ctx.cr6.lt) goto loc_822FE03C;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x822ec1e8
	ctx.lr = 0x822FDC2C;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x822fe03c
	if (!ctx.cr6.eq) goto loc_822FE03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe03c
	if (ctx.cr6.eq) goto loc_822FE03C;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// li r28,64
	r28.s64 = 64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r26,r3,16
	r26.u64 = ctx.r3.u32 & 0xFFFF;
	// beq cr6,0x822fdd08
	if (ctx.cr6.eq) goto loc_822FDD08;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fdd08
	if (!ctx.cr6.gt) goto loc_822FDD08;
loc_822FDC94:
	// addi r30,r28,2
	r30.s64 = r28.s64 + 2;
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x822fe03c
	if (ctx.cr6.gt) goto loc_822FE03C;
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FDCC4;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822fe03c
	if (!ctx.cr6.eq) goto loc_822FE03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe03c
	if (ctx.cr6.eq) goto loc_822FE03C;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r11,2
	r28.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x822fdc94
	if (ctx.cr6.lt) goto loc_822FDC94;
loc_822FDD08:
	// clrlwi r27,r26,16
	r27.u64 = r26.u32 & 0xFFFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822fdf4c
	if (ctx.cr6.eq) goto loc_822FDF4C;
	// lhz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822fdd2c
	if (!ctx.cr6.eq) goto loc_822FDD2C;
loc_822FDD20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eac
	return;
loc_822FDD2C:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// bgt cr6,0x822fdd20
	if (ctx.cr6.gt) goto loc_822FDD20;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	r29.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// sth r25,244(r10)
	REX_STORE_U16(ctx.r10.u32 + 244, r25.u16);
	// ble cr6,0x822fdf4c
	if (!ctx.cr6.gt) goto loc_822FDF4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,-25272
	r26.s64 = ctx.r11.s64 + -25272;
loc_822FDD60:
	// addi r11,r28,22
	ctx.r11.s64 = r28.s64 + 22;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x822fe03c
	if (ctx.cr6.gt) goto loc_822FE03C;
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FDD8C;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x822fe03c
	if (!ctx.cr6.eq) goto loc_822FE03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe03c
	if (ctx.cr6.eq) goto loc_822FE03C;
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// rlwinm r8,r4,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r25,1(r11)
	ea = 1 + ctx.r11.u32;
	r25.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r20,1(r11)
	ea = 1 + ctx.r11.u32;
	r20.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r19,1(r11)
	ea = 1 + ctx.r11.u32;
	r19.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r18,1(r11)
	ea = 1 + ctx.r11.u32;
	r18.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r17,1(r11)
	ea = 1 + ctx.r11.u32;
	r17.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r3,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r3.u16);
	// stb r8,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// stb r6,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stb r4,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r4.u8);
	// sth r7,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// stb r20,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r20.u8);
	// stb r25,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, r25.u8);
	// stb r19,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, r19.u8);
	// stb r17,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, r17.u8);
	// stb r18,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, r18.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822FDE74:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822fde94
	if (!ctx.cr0.eq) goto loc_822FDE94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822fde74
	if (!ctx.cr6.eq) goto loc_822FDE74;
loc_822FDE94:
	// lhz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 240);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r9.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lhz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 240);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// sth r3,248(r11)
	REX_STORE_U16(ctx.r11.u32 + 248, ctx.r3.u16);
	// lhz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 240);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// sth r9,240(r31)
	REX_STORE_U16(r31.u32 + 240, ctx.r9.u16);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r6,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r28,r11,22
	r28.s64 = ctx.r11.s64 + 22;
	// blt cr6,0x822fdd60
	if (ctx.cr6.lt) goto loc_822FDD60;
loc_822FDF4C:
	// addi r30,r28,24
	r30.s64 = r28.s64 + 24;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// bge cr6,0x822fe030
	if (!ctx.cr6.lt) goto loc_822FE030;
	// add r6,r28,r22
	ctx.r6.u64 = r28.u64 + r22.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fba90
	ctx.lr = 0x822FDF6C;
	sub_822FBA90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe040
	if (!ctx.cr6.eq) goto loc_822FE040;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-25464
	ctx.r11.s64 = ctx.r11.s64 + -25464;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_822FDF84:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fdfa4
	if (!ctx.cr0.eq) goto loc_822FDFA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fdf84
	if (!ctx.cr6.eq) goto loc_822FDF84;
loc_822FDFA4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fdfe4
	if (ctx.cr6.eq) goto loc_822FDFE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-25336
	ctx.r11.s64 = ctx.r11.s64 + -25336;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_822FDFBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fdfdc
	if (!ctx.cr0.eq) goto loc_822FDFDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822fdfbc
	if (!ctx.cr6.eq) goto loc_822FDFBC;
loc_822FDFDC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fe030
	if (!ctx.cr6.eq) goto loc_822FE030;
loc_822FDFE4:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r10,r4,-24
	ctx.r10.s64 = ctx.r4.s64 + -24;
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x822fdd20
	if (ctx.cr6.gt) goto loc_822FDD20;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fc060
	ctx.lr = 0x822FE024;
	sub_822FC060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fe040
	if (!ctx.cr6.eq) goto loc_822FE040;
	// std r30,0(r31)
	REX_STORE_U64(r31.u32 + 0, r30.u64);
loc_822FE030:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eac
	return;
loc_822FE03C:
	// li r3,3
	ctx.r3.s64 = 3;
loc_822FE040:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82312EE0) {
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
	ctx.lr = 0x82312EE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// stw r4,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_82312F10:
	// ld r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 72);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823125c8
	ctx.lr = 0x82312F28;
	sub_823125C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313034
	if (ctx.cr6.lt) goto loc_82313034;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82312ffc
	if (ctx.cr6.eq) goto loc_82312FFC;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82312f7c
	if (!ctx.cr6.eq) goto loc_82312F7C;
	// ld r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 128);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82312f7c
	if (ctx.cr6.lt) goto loc_82312F7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823121d0
	ctx.lr = 0x82312F6C;
	sub_823121D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313034
	if (ctx.cr6.lt) goto loc_82313034;
	// ld r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 72);
	// std r8,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r8.u64);
loc_82312F7C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// subf r6,r8,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x82312fb4
	if (ctx.cr6.lt) goto loc_82312FB4;
	// bne cr6,0x82312fd0
	if (!ctx.cr6.eq) goto loc_82312FD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82312fd0
	goto loc_82312FD0;
loc_82312FB4:
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r6,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82312FD0:
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// ld r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 72);
	// subf. r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// beq 0x82312ffc
	if (ctx.cr0.eq) goto loc_82312FFC;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82312f10
	if (!ctx.cr6.gt) goto loc_82312F10;
loc_82312FFC:
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82313024
	if (ctx.cr6.eq) goto loc_82313024;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82312c80
	ctx.lr = 0x82313010;
	sub_82312C80(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_82313024:
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
loc_82313034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823186B8) {
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
	ctx.lr = 0x823186C0;
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
	// ble cr6,0x82318bb8
	if (!ctx.cr6.gt) goto loc_82318BB8;
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
loc_82318738:
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
	// blt cr6,0x82318968
	if (ctx.cr6.lt) goto loc_82318968;
loc_82318770:
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
	// blt cr6,0x82318770
	if (ctx.cr6.lt) goto loc_82318770;
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
loc_82318968:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x82318a44
	if (!ctx.cr6.lt) goto loc_82318A44;
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
loc_82318A44:
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
	// ble cr6,0x82318aa8
	if (!ctx.cr6.gt) goto loc_82318AA8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82318ae4
	if (!ctx.cr6.gt) goto loc_82318AE4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// subf r8,r25,r9
	ctx.r8.u64 = ctx.r9.u64 - r25.u64;
loc_82318A80:
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82318a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82318A80;
	// b 0x82318ae4
	goto loc_82318AE4;
loc_82318AA8:
	// bge cr6,0x82318ae4
	if (!ctx.cr6.lt) goto loc_82318AE4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82318ae4
	if (!ctx.cr6.gt) goto loc_82318AE4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// subf r10,r25,r9
	ctx.r10.u64 = ctx.r9.u64 - r25.u64;
loc_82318AC0:
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82318ac0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82318AC0;
loc_82318AE4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82318b18
	if (!ctx.cr6.eq) goto loc_82318B18;
	// rlwinm r31,r22,1,0,30
	r31.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82318B00;
	sub_822D4FA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r31,r24
	ctx.r3.u64 = r31.u64 + r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82318B10;
	sub_822D4FA0(ctx, base);
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// b 0x82318b1c
	goto loc_82318B1C;
loc_82318B18:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_82318B1C:
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
	// ble cr6,0x82318b50
	if (!ctx.cr6.gt) goto loc_82318B50;
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,32767
	ctx.cr6.compare<int32_t>(r29.s32, 32767, ctx.xer);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// ble cr6,0x82318b80
	if (!ctx.cr6.gt) goto loc_82318B80;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// sthx r9,r10,r27
	REX_STORE_U16(ctx.r10.u32 + r27.u32, ctx.r9.u16);
	// b 0x82318b80
	goto loc_82318B80;
loc_82318B50:
	// bge cr6,0x82318b78
	if (!ctx.cr6.lt) goto loc_82318B78;
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
	// bge cr6,0x82318b80
	if (!ctx.cr6.lt) goto loc_82318B80;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// sthx r9,r10,r27
	REX_STORE_U16(ctx.r10.u32 + r27.u32, ctx.r9.u16);
	// b 0x82318b80
	goto loc_82318B80;
loc_82318B78:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82318B80:
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
	// bne 0x82318738
	if (!ctx.cr0.eq) goto loc_82318738;
loc_82318BB8:
	// stw r4,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r4.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82333748) {
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
	ctx.lr = 0x82333750;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233376c
	if (!ctx.cr6.eq) goto loc_8233376C;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8233376C:
	// lwz r31,736(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 736);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233378c
	if (ctx.cr6.eq) goto loc_8233378C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8233378C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82332310
	ctx.lr = 0x82333794;
	sub_82332310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823388d0
	ctx.lr = 0x8233379C;
	sub_823388D0(ctx, base);
	// lwz r27,24688(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232e898
	ctx.lr = 0x823337AC;
	sub_8232E898(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r5,45872
	ctx.r5.u64 = ctx.r5.u64 | 45872;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x823337C8;
	sub_822D5870(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823337e0
	if (!ctx.cr6.eq) goto loc_823337E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823337E0;
	sub_8233FF78(ctx, base);
loc_823337E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233fd40
	ctx.lr = 0x823337E8;
	sub_8233FD40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x823337F0;
	sub_8233D4C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823382A8) {
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
	ctx.lr = 0x823382B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r9,24688(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r4,2600(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2600);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r29,r11,-21480
	r29.s64 = ctx.r11.s64 + -21480;
	// addi r28,r10,-21648
	r28.s64 = ctx.r10.s64 + -21648;
	// addi r11,r7,-26320
	ctx.r11.s64 = ctx.r7.s64 + -26320;
	// stw r29,2592(r31)
	REX_STORE_U32(r31.u32 + 2592, r29.u32);
	// addi r10,r6,-26292
	ctx.r10.s64 = ctx.r6.s64 + -26292;
	// stw r28,2596(r31)
	REX_STORE_U32(r31.u32 + 2596, r28.u32);
	// addi r7,r5,-26252
	ctx.r7.s64 = ctx.r5.s64 + -26252;
	// stw r11,2576(r31)
	REX_STORE_U32(r31.u32 + 2576, ctx.r11.u32);
	// addi r6,r3,-26228
	ctx.r6.s64 = ctx.r3.s64 + -26228;
	// stw r10,2580(r31)
	REX_STORE_U32(r31.u32 + 2580, ctx.r10.u32);
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r7,2584(r31)
	REX_STORE_U32(r31.u32 + 2584, ctx.r7.u32);
	// addi r5,r31,2184
	ctx.r5.s64 = r31.s64 + 2184;
	// stw r6,2588(r31)
	REX_STORE_U32(r31.u32 + 2588, ctx.r6.u32);
	// li r3,98
	ctx.r3.s64 = 98;
	// stw r8,2568(r31)
	REX_STORE_U32(r31.u32 + 2568, ctx.r8.u32);
	// addi r20,r31,2564
	r20.s64 = r31.s64 + 2564;
	// stw r5,2564(r31)
	REX_STORE_U32(r31.u32 + 2564, ctx.r5.u32);
	// stw r3,2572(r31)
	REX_STORE_U32(r31.u32 + 2572, ctx.r3.u32);
	// addi r30,r9,8
	r30.s64 = ctx.r9.s64 + 8;
	// stw r8,2604(r31)
	REX_STORE_U32(r31.u32 + 2604, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233833c
	if (ctx.cr6.eq) goto loc_8233833C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x8233833C;
	sub_8233FF78(ctx, base);
loc_8233833C:
	// li r25,0
	r25.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r25,2600(r31)
	REX_STORE_U32(r31.u32 + 2600, r25.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,168
	ctx.r6.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x8233835C;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2644(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2644);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r29,r11,-21120
	r29.s64 = ctx.r11.s64 + -21120;
	// addi r28,r10,-21312
	r28.s64 = ctx.r10.s64 + -21312;
	// addi r3,r8,-26548
	ctx.r3.s64 = ctx.r8.s64 + -26548;
	// stw r29,2636(r31)
	REX_STORE_U32(r31.u32 + 2636, r29.u32);
	// addi r11,r7,-26368
	ctx.r11.s64 = ctx.r7.s64 + -26368;
	// stw r28,2640(r31)
	REX_STORE_U32(r31.u32 + 2640, r28.u32);
	// addi r10,r6,-26516
	ctx.r10.s64 = ctx.r6.s64 + -26516;
	// stw r3,2620(r31)
	REX_STORE_U32(r31.u32 + 2620, ctx.r3.u32);
	// li r9,185
	ctx.r9.s64 = 185;
	// stw r11,2624(r31)
	REX_STORE_U32(r31.u32 + 2624, ctx.r11.u32);
	// addi r8,r5,-26328
	ctx.r8.s64 = ctx.r5.s64 + -26328;
	// stw r10,2628(r31)
	REX_STORE_U32(r31.u32 + 2628, ctx.r10.u32);
	// addi r7,r31,2196
	ctx.r7.s64 = r31.s64 + 2196;
	// stw r9,2612(r31)
	REX_STORE_U32(r31.u32 + 2612, ctx.r9.u32);
	// li r6,118
	ctx.r6.s64 = 118;
	// stw r8,2632(r31)
	REX_STORE_U32(r31.u32 + 2632, ctx.r8.u32);
	// addi r21,r31,2608
	r21.s64 = r31.s64 + 2608;
	// stw r7,2608(r31)
	REX_STORE_U32(r31.u32 + 2608, ctx.r7.u32);
	// stw r6,2616(r31)
	REX_STORE_U32(r31.u32 + 2616, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2648(r31)
	REX_STORE_U32(r31.u32 + 2648, ctx.r9.u32);
	// beq cr6,0x823383e0
	if (ctx.cr6.eq) goto loc_823383E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823383E0;
	sub_8233FF78(ctx, base);
loc_823383E0:
	// stw r25,2644(r31)
	REX_STORE_U32(r31.u32 + 2644, r25.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// li r6,185
	ctx.r6.s64 = 185;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x823383FC;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2688(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2688);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r29,r11,-20776
	r29.s64 = ctx.r11.s64 + -20776;
	// addi r28,r10,-20928
	r28.s64 = ctx.r10.s64 + -20928;
	// addi r3,r8,-26136
	ctx.r3.s64 = ctx.r8.s64 + -26136;
	// stw r29,2680(r31)
	REX_STORE_U32(r31.u32 + 2680, r29.u32);
	// addi r11,r7,-26104
	ctx.r11.s64 = ctx.r7.s64 + -26104;
	// stw r28,2684(r31)
	REX_STORE_U32(r31.u32 + 2684, r28.u32);
	// addi r10,r6,-26060
	ctx.r10.s64 = ctx.r6.s64 + -26060;
	// stw r3,2664(r31)
	REX_STORE_U32(r31.u32 + 2664, ctx.r3.u32);
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r11,2668(r31)
	REX_STORE_U32(r31.u32 + 2668, ctx.r11.u32);
	// addi r8,r5,-26044
	ctx.r8.s64 = ctx.r5.s64 + -26044;
	// stw r10,2672(r31)
	REX_STORE_U32(r31.u32 + 2672, ctx.r10.u32);
	// addi r7,r31,2208
	ctx.r7.s64 = r31.s64 + 2208;
	// stw r9,2656(r31)
	REX_STORE_U32(r31.u32 + 2656, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r8,2676(r31)
	REX_STORE_U32(r31.u32 + 2676, ctx.r8.u32);
	// addi r22,r31,2652
	r22.s64 = r31.s64 + 2652;
	// stw r7,2652(r31)
	REX_STORE_U32(r31.u32 + 2652, ctx.r7.u32);
	// stw r6,2660(r31)
	REX_STORE_U32(r31.u32 + 2660, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2692(r31)
	REX_STORE_U32(r31.u32 + 2692, ctx.r9.u32);
	// beq cr6,0x82338480
	if (ctx.cr6.eq) goto loc_82338480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82338480;
	sub_8233FF78(ctx, base);
loc_82338480:
	// stw r25,2688(r31)
	REX_STORE_U32(r31.u32 + 2688, r25.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r6,148
	ctx.r6.s64 = 148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x8233849C;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2732(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2732);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r29,r11,-20488
	r29.s64 = ctx.r11.s64 + -20488;
	// addi r28,r10,-20624
	r28.s64 = ctx.r10.s64 + -20624;
	// addi r3,r8,-26216
	ctx.r3.s64 = ctx.r8.s64 + -26216;
	// stw r29,2724(r31)
	REX_STORE_U32(r31.u32 + 2724, r29.u32);
	// addi r11,r7,-26192
	ctx.r11.s64 = ctx.r7.s64 + -26192;
	// stw r28,2728(r31)
	REX_STORE_U32(r31.u32 + 2728, r28.u32);
	// addi r10,r6,-26164
	ctx.r10.s64 = ctx.r6.s64 + -26164;
	// stw r3,2708(r31)
	REX_STORE_U32(r31.u32 + 2708, ctx.r3.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r11,2712(r31)
	REX_STORE_U32(r31.u32 + 2712, ctx.r11.u32);
	// addi r8,r5,-26144
	ctx.r8.s64 = ctx.r5.s64 + -26144;
	// stw r10,2716(r31)
	REX_STORE_U32(r31.u32 + 2716, ctx.r10.u32);
	// addi r7,r31,2220
	ctx.r7.s64 = r31.s64 + 2220;
	// stw r9,2700(r31)
	REX_STORE_U32(r31.u32 + 2700, ctx.r9.u32);
	// li r6,84
	ctx.r6.s64 = 84;
	// stw r8,2720(r31)
	REX_STORE_U32(r31.u32 + 2720, ctx.r8.u32);
	// addi r23,r31,2696
	r23.s64 = r31.s64 + 2696;
	// stw r7,2696(r31)
	REX_STORE_U32(r31.u32 + 2696, ctx.r7.u32);
	// stw r6,2704(r31)
	REX_STORE_U32(r31.u32 + 2704, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2736(r31)
	REX_STORE_U32(r31.u32 + 2736, ctx.r9.u32);
	// beq cr6,0x82338520
	if (ctx.cr6.eq) goto loc_82338520;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82338520;
	sub_8233FF78(ctx, base);
loc_82338520:
	// stw r25,2732(r31)
	REX_STORE_U32(r31.u32 + 2732, r25.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,132
	ctx.r6.s64 = 132;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x8233853C;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2776);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r28,r11,-19664
	r28.s64 = ctx.r11.s64 + -19664;
	// addi r27,r10,-19560
	r27.s64 = ctx.r10.s64 + -19560;
	// addi r5,r9,-25956
	ctx.r5.s64 = ctx.r9.s64 + -25956;
	// stw r28,2768(r31)
	REX_STORE_U32(r31.u32 + 2768, r28.u32);
	// addi r3,r8,-25928
	ctx.r3.s64 = ctx.r8.s64 + -25928;
	// stw r27,2772(r31)
	REX_STORE_U32(r31.u32 + 2772, r27.u32);
	// li r29,102
	r29.s64 = 102;
	// stw r5,2752(r31)
	REX_STORE_U32(r31.u32 + 2752, ctx.r5.u32);
	// addi r11,r7,-25884
	ctx.r11.s64 = ctx.r7.s64 + -25884;
	// stw r3,2756(r31)
	REX_STORE_U32(r31.u32 + 2756, ctx.r3.u32);
	// addi r10,r6,-25868
	ctx.r10.s64 = ctx.r6.s64 + -25868;
	// stw r29,2744(r31)
	REX_STORE_U32(r31.u32 + 2744, r29.u32);
	// addi r9,r31,2232
	ctx.r9.s64 = r31.s64 + 2232;
	// stw r11,2760(r31)
	REX_STORE_U32(r31.u32 + 2760, ctx.r11.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r10,2764(r31)
	REX_STORE_U32(r31.u32 + 2764, ctx.r10.u32);
	// addi r24,r31,2740
	r24.s64 = r31.s64 + 2740;
	// stw r9,2740(r31)
	REX_STORE_U32(r31.u32 + 2740, ctx.r9.u32);
	// stw r8,2748(r31)
	REX_STORE_U32(r31.u32 + 2748, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,2780(r31)
	REX_STORE_U32(r31.u32 + 2780, r29.u32);
	// beq cr6,0x823385c0
	if (ctx.cr6.eq) goto loc_823385C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823385C0;
	sub_8233FF78(ctx, base);
loc_823385C0:
	// stw r25,2776(r31)
	REX_STORE_U32(r31.u32 + 2776, r25.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x823385DC;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2820(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2820);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r29,2788(r31)
	REX_STORE_U32(r31.u32 + 2788, r29.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r29,2824(r31)
	REX_STORE_U32(r31.u32 + 2824, r29.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r28,r11,-19456
	r28.s64 = ctx.r11.s64 + -19456;
	// addi r27,r10,-19352
	r27.s64 = ctx.r10.s64 + -19352;
	// addi r5,r9,-26036
	ctx.r5.s64 = ctx.r9.s64 + -26036;
	// stw r28,2812(r31)
	REX_STORE_U32(r31.u32 + 2812, r28.u32);
	// addi r3,r8,-26020
	ctx.r3.s64 = ctx.r8.s64 + -26020;
	// stw r27,2816(r31)
	REX_STORE_U32(r31.u32 + 2816, r27.u32);
	// addi r11,r7,-25996
	ctx.r11.s64 = ctx.r7.s64 + -25996;
	// stw r5,2796(r31)
	REX_STORE_U32(r31.u32 + 2796, ctx.r5.u32);
	// addi r10,r6,-25968
	ctx.r10.s64 = ctx.r6.s64 + -25968;
	// stw r3,2800(r31)
	REX_STORE_U32(r31.u32 + 2800, ctx.r3.u32);
	// addi r9,r31,2244
	ctx.r9.s64 = r31.s64 + 2244;
	// stw r11,2804(r31)
	REX_STORE_U32(r31.u32 + 2804, ctx.r11.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r10,2808(r31)
	REX_STORE_U32(r31.u32 + 2808, ctx.r10.u32);
	// addi r26,r31,2784
	r26.s64 = r31.s64 + 2784;
	// stw r9,2784(r31)
	REX_STORE_U32(r31.u32 + 2784, ctx.r9.u32);
	// stw r8,2792(r31)
	REX_STORE_U32(r31.u32 + 2792, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233865c
	if (ctx.cr6.eq) goto loc_8233865C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x8233865C;
	sub_8233FF78(ctx, base);
loc_8233865C:
	// stw r25,2820(r31)
	REX_STORE_U32(r31.u32 + 2820, r25.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,102
	ctx.r6.s64 = 102;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x82338678;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2908(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2908);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r28,r11,-20176
	r28.s64 = ctx.r11.s64 + -20176;
	// addi r27,r10,-20352
	r27.s64 = ctx.r10.s64 + -20352;
	// addi r3,r8,-25760
	ctx.r3.s64 = ctx.r8.s64 + -25760;
	// stw r28,2900(r31)
	REX_STORE_U32(r31.u32 + 2900, r28.u32);
	// addi r11,r7,-25732
	ctx.r11.s64 = ctx.r7.s64 + -25732;
	// stw r27,2904(r31)
	REX_STORE_U32(r31.u32 + 2904, r27.u32);
	// addi r10,r6,-25700
	ctx.r10.s64 = ctx.r6.s64 + -25700;
	// stw r3,2884(r31)
	REX_STORE_U32(r31.u32 + 2884, ctx.r3.u32);
	// li r9,174
	ctx.r9.s64 = 174;
	// stw r11,2888(r31)
	REX_STORE_U32(r31.u32 + 2888, ctx.r11.u32);
	// addi r8,r5,-25664
	ctx.r8.s64 = ctx.r5.s64 + -25664;
	// stw r10,2892(r31)
	REX_STORE_U32(r31.u32 + 2892, ctx.r10.u32);
	// addi r7,r31,2432
	ctx.r7.s64 = r31.s64 + 2432;
	// stw r9,2876(r31)
	REX_STORE_U32(r31.u32 + 2876, ctx.r9.u32);
	// li r6,108
	ctx.r6.s64 = 108;
	// stw r8,2896(r31)
	REX_STORE_U32(r31.u32 + 2896, ctx.r8.u32);
	// addi r29,r31,2872
	r29.s64 = r31.s64 + 2872;
	// stw r7,2872(r31)
	REX_STORE_U32(r31.u32 + 2872, ctx.r7.u32);
	// stw r6,2880(r31)
	REX_STORE_U32(r31.u32 + 2880, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2912(r31)
	REX_STORE_U32(r31.u32 + 2912, ctx.r9.u32);
	// beq cr6,0x823386fc
	if (ctx.cr6.eq) goto loc_823386FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x823386FC;
	sub_8233FF78(ctx, base);
loc_823386FC:
	// stw r25,2908(r31)
	REX_STORE_U32(r31.u32 + 2908, r25.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,174
	ctx.r6.s64 = 174;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x82338718;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,2864(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2864);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r28,r11,-19832
	r28.s64 = ctx.r11.s64 + -19832;
	// addi r27,r10,-20000
	r27.s64 = ctx.r10.s64 + -20000;
	// addi r3,r8,-25864
	ctx.r3.s64 = ctx.r8.s64 + -25864;
	// stw r28,2856(r31)
	REX_STORE_U32(r31.u32 + 2856, r28.u32);
	// addi r11,r7,-25848
	ctx.r11.s64 = ctx.r7.s64 + -25848;
	// stw r27,2860(r31)
	REX_STORE_U32(r31.u32 + 2860, r27.u32);
	// addi r10,r6,-25828
	ctx.r10.s64 = ctx.r6.s64 + -25828;
	// stw r3,2840(r31)
	REX_STORE_U32(r31.u32 + 2840, ctx.r3.u32);
	// li r9,162
	ctx.r9.s64 = 162;
	// stw r11,2844(r31)
	REX_STORE_U32(r31.u32 + 2844, ctx.r11.u32);
	// addi r8,r5,-25768
	ctx.r8.s64 = ctx.r5.s64 + -25768;
	// stw r10,2848(r31)
	REX_STORE_U32(r31.u32 + 2848, ctx.r10.u32);
	// addi r7,r31,2256
	ctx.r7.s64 = r31.s64 + 2256;
	// stw r9,2832(r31)
	REX_STORE_U32(r31.u32 + 2832, ctx.r9.u32);
	// li r6,125
	ctx.r6.s64 = 125;
	// stw r8,2852(r31)
	REX_STORE_U32(r31.u32 + 2852, ctx.r8.u32);
	// addi r29,r31,2828
	r29.s64 = r31.s64 + 2828;
	// stw r7,2828(r31)
	REX_STORE_U32(r31.u32 + 2828, ctx.r7.u32);
	// stw r6,2836(r31)
	REX_STORE_U32(r31.u32 + 2836, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,2868(r31)
	REX_STORE_U32(r31.u32 + 2868, ctx.r9.u32);
	// beq cr6,0x8233879c
	if (ctx.cr6.eq) goto loc_8233879C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233ff78
	ctx.lr = 0x8233879C;
	sub_8233FF78(ctx, base);
loc_8233879C:
	// stw r25,2864(r31)
	REX_STORE_U32(r31.u32 + 2864, r25.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,162
	ctx.r6.s64 = 162;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82338210
	ctx.lr = 0x823387B8;
	sub_82338210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233883c
	if (!ctx.cr6.eq) goto loc_8233883C;
	// addi r11,r31,2044
	ctx.r11.s64 = r31.s64 + 2044;
	// stw r22,2940(r31)
	REX_STORE_U32(r31.u32 + 2940, r22.u32);
	// addi r10,r31,2056
	ctx.r10.s64 = r31.s64 + 2056;
	// stw r20,2944(r31)
	REX_STORE_U32(r31.u32 + 2944, r20.u32);
	// addi r9,r31,2068
	ctx.r9.s64 = r31.s64 + 2068;
	// stw r11,2104(r31)
	REX_STORE_U32(r31.u32 + 2104, ctx.r11.u32);
	// stw r24,2948(r31)
	REX_STORE_U32(r31.u32 + 2948, r24.u32);
	// addi r8,r31,2080
	ctx.r8.s64 = r31.s64 + 2080;
	// stw r23,2952(r31)
	REX_STORE_U32(r31.u32 + 2952, r23.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r21,2956(r31)
	REX_STORE_U32(r31.u32 + 2956, r21.u32);
	// addi r6,r31,1992
	ctx.r6.s64 = r31.s64 + 1992;
	// stw r26,2960(r31)
	REX_STORE_U32(r31.u32 + 2960, r26.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r10,2108(r31)
	REX_STORE_U32(r31.u32 + 2108, ctx.r10.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// stw r9,2112(r31)
	REX_STORE_U32(r31.u32 + 2112, ctx.r9.u32);
	// addi r4,r31,2004
	ctx.r4.s64 = r31.s64 + 2004;
	// stw r8,2116(r31)
	REX_STORE_U32(r31.u32 + 2116, ctx.r8.u32);
	// addi r11,r7,-17040
	ctx.r11.s64 = ctx.r7.s64 + -17040;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r6,2016(r31)
	REX_STORE_U32(r31.u32 + 2016, ctx.r6.u32);
	// addi r9,r5,-15936
	ctx.r9.s64 = ctx.r5.s64 + -15936;
	// stw r4,2020(r31)
	REX_STORE_U32(r31.u32 + 2020, ctx.r4.u32);
	// addi r8,r3,-19248
	ctx.r8.s64 = ctx.r3.s64 + -19248;
	// stw r11,2024(r31)
	REX_STORE_U32(r31.u32 + 2024, ctx.r11.u32);
	// addi r7,r10,-18144
	ctx.r7.s64 = ctx.r10.s64 + -18144;
	// stw r9,2028(r31)
	REX_STORE_U32(r31.u32 + 2028, ctx.r9.u32);
	// stw r8,2032(r31)
	REX_STORE_U32(r31.u32 + 2032, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, ctx.r7.u32);
loc_8233883C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8235ABC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8235ABD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8235b0ec
	if (!ctx.cr6.gt) goto loc_8235B0EC;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8235b0ec
	if (!ctx.cr6.gt) goto loc_8235B0EC;
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
	// lfd f0,-64(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,15944(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fsubs f8,f9,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsubs f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fsubs f0,f2,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsubs f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// fsubs f10,f2,f6
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// bgt cr6,0x8235ac44
	if (ctx.cr6.gt) goto loc_8235AC44;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_8235AC44:
	// fctiwz f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r5,-60(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8235ac5c
	if (!ctx.cr6.gt) goto loc_8235AC5C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8235AC5C:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// li r31,4
	r31.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,-4
	ctx.r4.s64 = -4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfd f0,4000(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// fdivs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// blt cr6,0x8235ad68
	if (ctx.cr6.lt) goto loc_8235AD68;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8235AC90:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// std r8,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f8,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r30.u64);
	// lfd f7,-56(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f3,-40(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// std r30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r30.u64);
	// lfd f6,-48(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fcfid f8,f3
	ctx.f8.f64 = double(ctx.f3.s64);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// fsubs f5,f2,f13
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f8,f5,f12,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f11.f64)));
	// fsubs f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fmadds f5,f2,f12,f11
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f11.f64)));
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fmadds f3,f7,f12,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f2,f6,f12,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f11.f64)));
	// fadd f8,f5,f0
	ctx.f8.f64 = ctx.f5.f64 + ctx.f0.f64;
	// fctiwz f7,f4
	ctx.f7.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f7,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f7.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadd f6,f3,f0
	ctx.f6.f64 = ctx.f3.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f5,f2,f0
	ctx.f5.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f4,f8
	ctx.f4.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f4,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f4.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fctiwz f3,f6
	ctx.f3.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f3,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f3.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f2,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f2.u32);
	// blt cr6,0x8235ac90
	if (ctx.cr6.lt) goto loc_8235AC90;
loc_8235AD68:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235adb4
	if (!ctx.cr6.lt) goto loc_8235ADB4;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235AD7C:
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
	// fmadds f4,f5,f12,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f11.f64)));
	// fadd f3,f4,f0
	ctx.f3.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f2.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235ad7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235AD7C;
loc_8235ADB4:
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
	// bgt cr6,0x8235add8
	if (ctx.cr6.gt) goto loc_8235ADD8;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_8235ADD8:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f13.u64);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235ae94
	if (!ctx.cr6.lt) goto loc_8235AE94;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x8235ae58
	if (ctx.cr6.lt) goto loc_8235AE58;
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f7.u64);
	// lwz r9,-36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_8235AE1C:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// blt cr6,0x8235ae1c
	if (ctx.cr6.lt) goto loc_8235AE1C;
loc_8235AE58:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235ae94
	if (!ctx.cr6.lt) goto loc_8235AE94;
	// fadds f13,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f8.u64);
	// lwz r9,-36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_8235AE84:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235ae84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235AE84;
loc_8235AE94:
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
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x8235aeb8
	if (ctx.cr6.gt) goto loc_8235AEB8;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
loc_8235AEB8:
	// fsubs f12,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fsubs f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f13.u64);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// fdivs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// bge cr6,0x8235b014
	if (!ctx.cr6.lt) goto loc_8235B014;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235afc8
	if (ctx.cr6.lt) goto loc_8235AFC8;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235AEF0:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r29,r11
	r29.s64 = ctx.r11.s32;
	// std r30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, r30.u64);
	// std r8,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// lfd f8,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// std r29,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r29.u64);
	// lfd f11,-48(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// extsw r30,r8
	r30.s64 = ctx.r8.s32;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// lfd f8,-64(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fmadds f12,f4,f13,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f1.f64)));
	// fsubs f11,f3,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f9,f2,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fadd f6,f12,f0
	ctx.f6.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmadds f5,f11,f13,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f1.f64)));
	// fsubs f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fmadds f4,f9,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f1.f64)));
	// fctiwz f2,f6
	ctx.f2.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f2,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f2.u32);
	// fadd f12,f5,f0
	ctx.f12.f64 = ctx.f5.f64 + ctx.f0.f64;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fmadds f6,f8,f13,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadd f11,f4,f0
	ctx.f11.f64 = ctx.f4.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fctiwz f7,f11
	ctx.f7.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f7,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f7.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f4.u32);
	// blt cr6,0x8235aef0
	if (ctx.cr6.lt) goto loc_8235AEF0;
loc_8235AFC8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235b014
	if (!ctx.cr6.lt) goto loc_8235B014;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235AFDC:
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
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f13,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// fadd f6,f7,f0
	ctx.f6.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235afdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235AFDC;
loc_8235B014:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235b054
	if (!ctx.cr6.gt) goto loc_8235B054;
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
loc_8235B038:
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235b038
	if (ctx.cr6.lt) goto loc_8235B038;
loc_8235B054:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235b17c
	if (!ctx.cr6.gt) goto loc_8235B17C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8235B070:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
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
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
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
	// stfiwx f1,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235b070
	if (ctx.cr6.lt) goto loc_8235B070;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4edc
	return;
loc_8235B0EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235b17c
	if (!ctx.cr6.gt) goto loc_8235B17C;
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
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f9.u64);
	// lwz r9,-52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
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
	// lwz r7,-44(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
loc_8235B148:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8235b148
	if (ctx.cr6.lt) goto loc_8235B148;
loc_8235B17C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82375048) {
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
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// li r0,0
	ctx.r0.s64 = 0;
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// vslb v8,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r11,r9,r9
	ctx.r11.u64 = ctx.r9.u64 + ctx.r9.u64;
	// add r10,r12,r9
	ctx.r10.u64 = ctx.r12.u64 + ctx.r9.u64;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v4,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v3,r8,r12
	ea = (ctx.r8.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v1,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v7,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r12,r10,r11
	ctx.r12.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vaddshs v18,v2,v8
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v0,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v19,v3,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v11,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v1,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// lvx128 v5,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,4
	ctx.r6.s64 = 4;
	// vaddshs v20,v4,v8
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// lvx128 v9,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v5,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v13,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v16,v8,v8
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvx128 v15,r8,r12
	ea = (ctx.r8.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vaddshs v22,v6,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v3,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v23,v7,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v8,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lvx128 v14,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v4,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// stvewx v0,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v0,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v5,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvewx v1,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v1.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stvewx v1,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v1.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v6,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx v2,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx v2,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v24,v8,v16
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v3,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v25,v9,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v3,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v10,v16
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v4,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v27,v11,v16
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v28,v12,v16
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v4,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v29,v13,v16
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v5,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v30,v14,v16
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v5,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v31,v15,v16
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvewx v6,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v7,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vpkshus v8,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// stvewx v6,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v9,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vpkshus v10,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus v11,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vpkshus v12,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vpkshus v13,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vpkshus v14,v30,v30
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vpkshus v15,v31,v31
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvewx v7,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stvewx v7,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx v8,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvewx v8,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvewx v9,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v9,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stvewx v10,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v10,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v15,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v15.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v15,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v15.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8237F088) {
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
	ctx.lr = 0x8237F090;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// li r28,0
	r28.s64 = 0;
	// lwz r9,272(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,21940(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21940);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// beq cr6,0x8237f194
	if (ctx.cr6.eq) goto loc_8237F194;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f234
	if (!ctx.cr6.gt) goto loc_8237F234;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r27,0
	r27.s64 = 0;
loc_8237F0DC:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f178
	if (!ctx.cr6.gt) goto loc_8237F178;
loc_8237F0E8:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// addi r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 + 14;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x8237f120
	if (ctx.cr6.eq) goto loc_8237F120;
	// lwz r11,21968(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21968);
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8237f124
	if (ctx.cr6.eq) goto loc_8237F124;
loc_8237F120:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8237F124:
	// cntlzw r9,r29
	ctx.r9.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r31,-10
	ctx.r5.s64 = r31.s64 + -10;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r10,r31,14
	ctx.r10.s64 = r31.s64 + 14;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r9,r31,-16
	ctx.r9.s64 = r31.s64 + -16;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// rlwinm r6,r6,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82388798
	ctx.lr = 0x8237F164;
	sub_82388798(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237f0e8
	if (ctx.cr6.lt) goto loc_8237F0E8;
loc_8237F178:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8237f0dc
	if (ctx.cr6.lt) goto loc_8237F0DC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
loc_8237F194:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f234
	if (!ctx.cr6.gt) goto loc_8237F234;
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
loc_8237F1A0:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f224
	if (!ctx.cr6.gt) goto loc_8237F224;
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8237F1B4:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r5,r31,-10
	ctx.r5.s64 = r31.s64 + -10;
	// cntlzw r9,r29
	ctx.r9.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r10,r31,14
	ctx.r10.s64 = r31.s64 + 14;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,-16
	ctx.r9.s64 = r31.s64 + -16;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r6,r6,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82388798
	ctx.lr = 0x8237F210;
	sub_82388798(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237f1b4
	if (ctx.cr6.lt) goto loc_8237F1B4;
loc_8237F224:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8237f1a0
	if (ctx.cr6.lt) goto loc_8237F1A0;
loc_8237F234:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8238A8D8) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r9,216(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,208(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r11,14864(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14864);
	// lwz r4,3788(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// lwz r5,3792(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// lwz r6,3796(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238a930
	if (!ctx.cr6.eq) goto loc_8238A930;
	// lwz r11,14860(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238a954
	if (!ctx.cr6.eq) goto loc_8238A954;
	// bl 0x8238a780
	ctx.lr = 0x8238A92C;
	sub_8238A780(ctx, base);
	// b 0x8238a94c
	goto loc_8238A94C;
loc_8238A930:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238a954
	if (!ctx.cr6.eq) goto loc_8238A954;
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238a954
	if (!ctx.cr6.eq) goto loc_8238A954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a830
	ctx.lr = 0x8238A94C;
	sub_8238A830(ctx, base);
loc_8238A94C:
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// stw r11,14864(r31)
	REX_STORE_U32(r31.u32 + 14864, ctx.r11.u32);
loc_8238A954:
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

DEFINE_REX_FUNC(sub_8238BAA0) {
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
	ctx.lr = 0x8238BAA8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// addi r24,r5,-5
	r24.s64 = ctx.r5.s64 + -5;
	// addi r25,r6,-5
	r25.s64 = ctx.r6.s64 + -5;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8238bb4c
	if (!ctx.cr6.gt) goto loc_8238BB4C;
	// addi r10,r8,31
	ctx.r10.s64 = ctx.r8.s64 + 31;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// srawi r26,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r26.s64 = ctx.r10.s32 >> 5;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
loc_8238BAE4:
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8238bb40
	if (!ctx.cr6.gt) goto loc_8238BB40;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8238BAF8:
	// lbzu r28,1(r27)
	ea = 1 + r27.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82387bd0
	ctx.lr = 0x8238BB10;
	sub_82387BD0(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82387bd0
	ctx.lr = 0x8238BB2C;
	sub_82387BD0(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8238baf8
	if (!ctx.cr0.eq) goto loc_8238BAF8;
loc_8238BB40:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// bne 0x8238bae4
	if (!ctx.cr0.eq) goto loc_8238BAE4;
loc_8238BB4C:
	// srawi. r22,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r22.s64 = r22.s32 >> 1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble 0x8238bbd0
	if (!ctx.cr0.gt) goto loc_8238BBD0;
	// srawi r11,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r11.s64 = r19.s32 >> 1;
	// mr r23,r22
	r23.u64 = r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r20,-1
	r27.s64 = r20.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	r26.s64 = ctx.r11.s32 >> 5;
loc_8238BB68:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8238bbc4
	if (!ctx.cr6.gt) goto loc_8238BBC4;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8238BB7C:
	// lbzu r28,1(r27)
	ea = 1 + r27.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82387bd0
	ctx.lr = 0x8238BB94;
	sub_82387BD0(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82387bd0
	ctx.lr = 0x8238BBB0;
	sub_82387BD0(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8238bb7c
	if (!ctx.cr0.eq) goto loc_8238BB7C;
loc_8238BBC4:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// bne 0x8238bb68
	if (!ctx.cr0.eq) goto loc_8238BB68;
loc_8238BBD0:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8238bc58
	if (!ctx.cr6.gt) goto loc_8238BC58;
	// srawi r11,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r11.s64 = r19.s32 >> 1;
	// mr r24,r22
	r24.u64 = r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	r26.s64 = ctx.r11.s32 >> 5;
loc_8238BBF0:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8238bc4c
	if (!ctx.cr6.gt) goto loc_8238BC4C;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8238BC04:
	// lbzu r28,1(r27)
	ea = 1 + r27.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82387bd0
	ctx.lr = 0x8238BC1C;
	sub_82387BD0(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82387bd0
	ctx.lr = 0x8238BC38;
	sub_82387BD0(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8238bc04
	if (!ctx.cr0.eq) goto loc_8238BC04;
loc_8238BC4C:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bne 0x8238bbf0
	if (!ctx.cr0.eq) goto loc_8238BBF0;
loc_8238BC58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82392780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823927cc
	if (!ctx.cr6.gt) goto loc_823927CC;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823927A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823927a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823927A0;
loc_823927CC:
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// ble cr6,0x82392854
	if (!ctx.cr6.gt) goto loc_82392854;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8239282C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8239282c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239282C;
loc_82392854:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82392878:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x8239289c
	if (!ctx.cr6.gt) goto loc_8239289C;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_8239289C:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82392878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82392878;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82394820) {
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
	ctx.lr = 0x82394828;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// addi r26,r6,-4
	r26.s64 = ctx.r6.s64 + -4;
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// subfic r8,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r8.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lbz r30,4(r4)
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mulli r31,r7,34
	r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(34));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r7,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r31,2(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r30,r31,3
	r30.u64 = __builtin_rotateleft32(r31.u32, 3);
	// mulli r7,r8,25
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r8,r31,r30
	ctx.r8.u64 = r30.u64 - r31.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r8,15
	ctx.r7.s64 = ctx.r8.s64 + 15;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lbz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r30,2(r4)
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r31,6(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rotlwi r7,r30,3
	ctx.r7.u64 = __builtin_rotateleft32(r30.u32, 3);
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// subf r30,r30,r7
	r30.u64 = ctx.r7.u64 - r30.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r7,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lbz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r30,0(r4)
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r29,r7,3
	r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// rotlwi r31,r8,1
	r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r7,r7,r29
	ctx.r7.u64 = r29.u64 - ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - r30.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r7,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// ble cr6,0x823949ac
	if (!ctx.cr6.gt) goto loc_823949AC;
	// addi r8,r26,-5
	ctx.r8.s64 = r26.s64 + -5;
	// addi r31,r4,-2
	r31.s64 = ctx.r4.s64 + -2;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r4,-4
	r27.s64 = ctx.r4.s64 + -4;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 + 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82394924:
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbzx r30,r10,r11
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lbzx r28,r11,r4
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r9,r11
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - r30.u64;
	// rotlwi r30,r28,3
	r30.u64 = __builtin_rotateleft32(r28.u32, 3);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// subf r30,r28,r30
	r30.u64 = r30.u64 - r28.u64;
	// rlwinm r28,r7,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lbzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbzx r30,r11,r4
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r27,r11
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// lbzx r28,r10,r11
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r28,r28,1
	r28.u64 = __builtin_rotateleft32(r28.u32, 1);
	// subf r7,r7,r28
	ctx.r7.u64 = r28.u64 - ctx.r7.u64;
	// rotlwi r28,r30,3
	r28.u64 = __builtin_rotateleft32(r30.u32, 3);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// subf r30,r30,r28
	r30.u64 = r28.u64 - r30.u64;
	// rlwinm r28,r7,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// stwu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82394924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394924;
loc_823949AC:
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r5
	r31.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r4,r6,-3
	ctx.r4.s64 = ctx.r6.s64 + -3;
	// lbz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r10,-6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r29,r8,3
	r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lbz r28,-2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r8,r8,r29
	ctx.r8.u64 = r29.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r6,-2
	ctx.r4.s64 = ctx.r6.s64 + -2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r4,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r28,r10
	ctx.r9.u64 = ctx.r10.u64 - r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// stwx r10,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r10.u32);
	// lbz r9,-6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lbz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// rotlwi r9,r7,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stwx r7,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, ctx.r7.u32);
	// lbz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// mulli r9,r10,25
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(25));
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stwx r9,r29,r5
	REX_STORE_U32(r29.u32 + ctx.r5.u32, ctx.r9.u32);
	// lbz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// subfic r10,r7,5
	ctx.xer.ca = ctx.r7.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r8,r8,34
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(34));
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// stw r10,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r10.u32);
	// ble cr6,0x82394ad4
	if (!ctx.cr6.gt) goto loc_82394AD4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82394AA8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82394ac0
	if (!ctx.cr6.gt) goto loc_82394AC0;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82394AC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbx r11,r4,r3
	REX_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82394aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394AA8;
loc_82394AD4:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823A2420) {
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
	// bl 0x822d4e70
	ctx.lr = 0x823A2428;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823a26f0
	if (ctx.cr6.eq) goto loc_823A26F0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823a2458
	if (ctx.cr6.eq) goto loc_823A2458;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823A2444:
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// stdx r10,r11,r5
	REX_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u64);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x823a2444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A2444;
	// b 0x822d4ec0
	return;
loc_823A2458:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r31,r8,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r31,r5
	r29.u64 = r31.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r30,r9,r5
	r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// add r4,r31,r4
	ctx.r4.u64 = r31.u64 + ctx.r4.u64;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// addi r27,r6,-1
	r27.s64 = ctx.r6.s64 + -1;
	// subfic r31,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	r31.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
loc_823A24A8:
	// lwz r30,0(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,-1(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + -1);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r30,31,1,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r28
	r30.u64 = r30.u64 & r28.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// lwzx r30,r8,r6
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r29,r31,r10
	r29.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r29,r30,r29
	r29.u64 = r30.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, r30.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,-1(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -1);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r26,r28,r29
	r26.u64 = r28.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// lwzx r30,r10,r6
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r29,r31,r9
	r29.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r29,r30,r29
	r29.u64 = r30.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r30.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r30,0(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,-1(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + -1);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// and r29,r30,r29
	r29.u64 = r30.u64 & r29.u64;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwzx r28,r9,r6
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r26,r31,r11
	r26.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r30,r26,31,1,31
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r29,r28,31,1,31
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r26
	r28.u64 = r28.u64 & r26.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r29,r29,r30
	r29.u64 = r29.u64 + r30.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r30,r28,r12
	r30.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r30,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,-1(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -1);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r26,r28,r29
	r26.u64 = r28.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// lwzx r29,r11,r6
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r28,r27,r11
	r28.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r26,r28,r29
	r26.u64 = r28.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// stwx r30,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, r30.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823a24a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A24A8;
	// b 0x822d4ec0
	return;
loc_823A26F0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823a2994
	if (ctx.cr6.eq) goto loc_823A2994;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r31,r6,r9
	r31.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r6.u64;
	// rlwinm r30,r7,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// add r30,r30,r5
	r30.u64 = r30.u64 + ctx.r5.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_823A274C:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r28
	r29.u64 = r29.u64 & r28.u64;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// stwx r4,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r27,0(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r28,0(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r4,r28,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r29,r27,31,1,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r27,r28
	r28.u64 = r27.u64 & r28.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r29,0(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r27,0(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r27,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r27,r29
	r29.u64 = r27.u64 & r29.u64;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r27,0(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r28,r27,31,1,31
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r29,r27
	r29.u64 = r29.u64 & r27.u64;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stwx r4,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// and r27,r29,r28
	r27.u64 = r29.u64 & r28.u64;
	// rlwinm r29,r28,31,1,31
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r28,r27,r12
	r28.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r4.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// and r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 & r29.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r4.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwzx r28,r10,r6
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r27,31,1,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// rlwinm r4,r28,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r27
	r28.u64 = r28.u64 & r27.u64;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r28,r12
	r29.u64 = r28.u64 & ctx.r12.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823a274c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A274C;
	// b 0x822d4ec0
	return;
loc_823A2994:
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r25,r5,r6
	r25.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subfic r24,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r24.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// ori r8,r11,257
	ctx.r8.u64 = ctx.r11.u64 | 257;
loc_823A29A8:
	// li r31,2
	r31.s64 = 2;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r9,r24,r11
	ctx.r9.u64 = r24.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823A29C0:
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r28,r3,r9
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r26,r9,r7
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// lwzx r23,r3,r10
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r22,r10,r7
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r27,r28,30,2,31
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r28,r12
	r31.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r30,r26,r12
	r30.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// and r29,r23,r12
	r29.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r23,30,2,31
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r22,r12
	r30.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r22,30,2,31
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwzx r28,r9,r7
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r23,r10,r7
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r27,r3,r9
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	r31.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r26,r3,r10
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r28,r12
	r30.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r28,30,2,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r26,30,2,31
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r23,r12
	r30.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r30,r23,30,2,31
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwux r31,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r29,r9,r7
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// lwzx r22,r10,r7
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwzx r23,r3,r10
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r27,r3,r9
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	r31.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// and r28,r29,r12
	r28.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r29,30,2,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// and r30,r23,r12
	r30.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r29,r23,30,2,31
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r26,r22,r12
	r26.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r31,r31,30,6,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r22,30,2,31
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stwux r31,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// lwzx r28,r9,r7
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r26,r3,r10
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r23,r10,r7
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r27,r3,r9
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	r31.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r28,r12
	r30.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r29,r26,r12
	r29.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r23,r12
	r30.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r28,r28,30,2,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r29,r26,30,2,31
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// rlwinm r31,r31,30,6,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r30,r23,30,2,31
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r31,r31,r12
	r31.u64 = r31.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwux r31,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x823a29c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A29C0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x823a29a8
	if (ctx.cr6.lt) goto loc_823A29A8;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823C2C18) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x823C2C20;
	// lwz r31,108(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r11,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r31.s32 >> 31;
	// mr r29,r31
	r29.u64 = r31.u64;
	// xor r30,r31,r11
	r30.u64 = r31.u64 ^ ctx.r11.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823c2c40
	if (ctx.cr6.eq) goto loc_823C2C40;
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
loc_823C2C40:
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r22,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r22.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r30,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r30.s64 = r20.s32 >> 1;
	// rlwinm r23,r29,1,0,30
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x823c2cb8
	if (!ctx.cr0.gt) goto loc_823C2CB8;
	// lwz r26,124(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r27,0
	r27.s64 = 0;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_823C2C68:
	// li r29,0
	r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823c2ca8
	if (!ctx.cr6.gt) goto loc_823C2CA8;
	// add r25,r27,r6
	r25.u64 = r27.u64 + ctx.r6.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r24,r26,1
	r24.s64 = r26.s64 + 1;
	// add r28,r27,r11
	r28.u64 = r27.u64 + ctx.r11.u64;
loc_823C2C88:
	// lbzx r19,r28,r5
	r19.u64 = REX_LOAD_U8(r28.u32 + ctx.r5.u32);
	// lbzx r18,r25,r11
	r18.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r28,r27,r11
	r28.u64 = r27.u64 + ctx.r11.u64;
	// stbx r19,r26,r29
	REX_STORE_U8(r26.u32 + r29.u32, r19.u8);
	// stbx r18,r24,r29
	REX_STORE_U8(r24.u32 + r29.u32, r18.u8);
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// bdnz 0x823c2c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2C88;
loc_823C2CA8:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// add r27,r27,r10
	r27.u64 = r27.u64 + ctx.r10.u64;
	// add r26,r26,r30
	r26.u64 = r26.u64 + r30.u64;
	// bne 0x823c2c68
	if (!ctx.cr0.eq) goto loc_823C2C68;
loc_823C2CB8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823c2ed4
	if (!ctx.cr6.gt) goto loc_823C2ED4;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r7,-16
	r29.s64 = ctx.r7.s64 + -16;
	// rlwinm r27,r20,1,0,30
	r27.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// subf r3,r9,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_823C2CE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823c2e88
	if (!ctx.cr6.gt) goto loc_823C2E88;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + r30.u64;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + r20.u64;
loc_823C2CFC:
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// lbzx r25,r11,r6
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r25.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r24,r11,r6
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r29.s32, ctx.xer);
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r11,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// blt cr6,0x823c2cfc
	if (ctx.cr6.lt) goto loc_823C2CFC;
loc_823C2E88:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823c2ec4
	if (!ctx.cr6.lt) goto loc_823C2EC4;
	// subf r25,r6,r7
	r25.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + r30.u64;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + r20.u64;
	// add r11,r30,r6
	ctx.r11.u64 = r30.u64 + ctx.r6.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823C2EA4:
	// lbzx r25,r9,r6
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzx r24,r11,r4
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r30,r6
	ctx.r11.u64 = r30.u64 + ctx.r6.u64;
	// stbx r25,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r25.u8);
	// stbx r24,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, r24.u8);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// bdnz 0x823c2ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2EA4;
loc_823C2EC4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r30,r26,r30
	r30.u64 = r26.u64 + r30.u64;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// bne 0x823c2ce4
	if (!ctx.cr0.eq) goto loc_823C2CE4;
loc_823C2ED4:
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823CDB60) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d4acc
	ctx.lr = 0x823CDB74;
	__imp__NtSetEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cdb84
	if (ctx.cr0.lt) goto loc_823CDB84;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cdb8c
	goto loc_823CDB8C;
loc_823CDB84:
	// bl 0x8220a840
	ctx.lr = 0x823CDB88;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CDB8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CDE90) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824d4b1c
	ctx.lr = 0x823CDEA4;
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823cdeb8
	if (!ctx.cr0.lt) goto loc_823CDEB8;
	// bl 0x8220a840
	ctx.lr = 0x823CDEB0;
	sub_8220A840(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823cdebc
	goto loc_823CDEBC;
loc_823CDEB8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823CDEBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CE0A0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CE0D0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CE128) {
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
	ctx.lr = 0x823CE130;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x823ce160
	if (!ctx.cr6.lt) goto loc_823CE160;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ce5d8
	ctx.lr = 0x823CE15C;
	sub_823CE5D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823CE160:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x823CE16C;
	sub_823CD118(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823ce180
	if (!ctx.cr0.eq) goto loc_823CE180;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823ce1b4
	goto loc_823CE1B4;
loc_823CE180:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// bge cr6,0x823ce1a0
	if (!ctx.cr6.lt) goto loc_823CE1A0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ce588
	ctx.lr = 0x823CE19C;
	sub_823CE588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823CE1A0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_823CE1B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823CFA20) {
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
	ctx.lr = 0x823CFA28;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r21,11016(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r8,11956(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r25,r3,3644
	r25.s64 = ctx.r3.s64 + 3644;
	// lwz r10,11952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r24,r3,9020
	r24.s64 = ctx.r3.s64 + 9020;
	// lwz r5,11012(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r23,r3,24
	r23.s64 = ctx.r3.s64 + 24;
	// addi r22,r3,2072
	r22.s64 = ctx.r3.s64 + 2072;
	// addi r27,r3,2584
	r27.s64 = ctx.r3.s64 + 2584;
	// addi r26,r3,3256
	r26.s64 = ctx.r3.s64 + 3256;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x823cfcbc
	goto loc_823CFCBC;
loc_823CFA64:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r23
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r23.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x823cfaa4
	if (!ctx.cr0.lt) goto loc_823CFAA4;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_823CFA78:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r25
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + r25.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x823cfa78
	if (ctx.cr0.lt) goto loc_823CFA78;
loc_823CFAA4:
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, ctx.xer);
	// bge cr6,0x823cfcd8
	if (!ctx.cr6.lt) goto loc_823CFCD8;
	// lbzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823cfaec
	if (ctx.cr0.gt) goto loc_823CFAEC;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r3,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823CFAEC:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x823cfb10
	if (!ctx.cr0.lt) goto loc_823CFB10;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stbx r7,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x823cfcbc
	goto loc_823CFCBC;
loc_823CFB10:
	// clrlwi r3,r6,29
	ctx.r3.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x823cfba0
	if (!ctx.cr6.eq) goto loc_823CFBA0;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r22
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r22.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823cfb5c
	if (!ctx.cr0.lt) goto loc_823CFB5C;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_823CFB30:
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r3,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// xori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 ^ 1;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r24
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r24.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x823cfb30
	if (ctx.cr0.lt) goto loc_823CFB30;
loc_823CFB5C:
	// lbzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x823cfb9c
	if (ctx.cr0.gt) goto loc_823CFB9C;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r3,r7
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r31,0(r5)
	r31.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r31,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_823CFB9C:
	// addi r3,r9,7
	ctx.r3.s64 = ctx.r9.s64 + 7;
loc_823CFBA0:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x823cfc64
	if (!ctx.cr6.gt) goto loc_823CFC64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x823cfc4c
	if (!ctx.cr6.gt) goto loc_823CFC4C;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r6,r31,32
	ctx.xer.ca = r31.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// bgt 0x823cfc38
	if (ctx.cr0.gt) goto loc_823CFC38;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// neg r19,r9
	r19.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r20,0(r5)
	r20.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// or r31,r9,r20
	r31.u64 = ctx.r9.u64 | r20.u64;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r31,r31,r19
	r31.u64 = r19.u8 & 0x20 ? 0 : (r31.u32 << (r19.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x823cfc38
	if (ctx.cr0.gt) goto loc_823CFC38;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r31,r9
	r31.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r20,0(r5)
	r20.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r20,r8,r20
	r20.u64 = ctx.r8.u64 | r20.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r20,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823CFC38:
	// addi r9,r7,3014
	ctx.r9.s64 = ctx.r7.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x823cfc50
	goto loc_823CFC50;
loc_823CFC4C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_823CFC50:
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r7,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// b 0x823cfc7c
	goto loc_823CFC7C;
loc_823CFC64:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r6,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// beq cr6,0x823cfc80
	if (ctx.cr6.eq) goto loc_823CFC80;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r7,r6,r29
	REX_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r7.u32);
loc_823CFC7C:
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_823CFC80:
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// subf r7,r9,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r9.u64;
loc_823CFC8C:
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & r31.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// lbzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// stbx r9,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r9.u8);
	// bge cr6,0x823cfcac
	if (!ctx.cr6.lt) goto loc_823CFCAC;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// stbx r9,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u8);
loc_823CFCAC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x823cfc8c
	if (ctx.cr0.gt) goto loc_823CFC8C;
loc_823CFCBC:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// blt cr6,0x823cfa64
	if (ctx.cr6.lt) goto loc_823CFA64;
	// stb r8,11956(r11)
	REX_STORE_U8(ctx.r11.u32 + 11956, ctx.r8.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	REX_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r5,11012(r11)
	REX_STORE_U32(ctx.r11.u32 + 11012, ctx.r5.u32);
loc_823CFCD4:
	// b 0x822d4eb4
	return;
loc_823CFCD8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823cfcd4
	goto loc_823CFCD4;
}

DEFINE_REX_FUNC(sub_823D88B8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x823D88C0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823d8904
	if (ctx.cr6.eq) goto loc_823D8904;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
loc_823D8904:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823d8928
	if (ctx.cr6.eq) goto loc_823D8928;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
loc_823D8928:
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823d8d4c
	if (!ctx.cr6.eq) goto loc_823D8D4C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x823d8970
	if (!ctx.cr6.gt) goto loc_823D8970;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d8970
	if (ctx.cr0.eq) goto loc_823D8970;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_823D8970:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823d898c
	if (!ctx.cr6.gt) goto loc_823D898C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_823D898C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823d8b18
	if (!ctx.cr0.eq) goto loc_823D8B18;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,0,26,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// rlwinm r10,r8,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823d8b18
	if (!ctx.cr6.eq) goto loc_823D8B18;
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x823d8b18
	if (ctx.cr6.lt) goto loc_823D8B18;
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x823d8b18
	if (ctx.cr6.lt) goto loc_823D8B18;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823d8b18
	if (!ctx.cr6.eq) goto loc_823D8B18;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823d8b18
	if (!ctx.cr6.eq) goto loc_823D8B18;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823d8aa0
	if (ctx.cr6.gt) goto loc_823D8AA0;
	// beq cr6,0x823d8a94
	if (ctx.cr6.eq) goto loc_823D8A94;
	// lis r9,1168
	ctx.r9.s64 = 76546048;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d8a94
	if (ctx.cr6.eq) goto loc_823D8A94;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,10
	ctx.r9.u64 = ctx.r9.u64 | 10;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d8a88
	if (ctx.cr6.eq) goto loc_823D8A88;
	// addis r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -405274624;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d8a7c
	if (ctx.cr0.eq) goto loc_823D8A7C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823d8a48
	if (ctx.cr6.eq) goto loc_823D8A48;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x823d8a70
	if (ctx.cr6.eq) goto loc_823D8A70;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d8b18
	if (!ctx.cr6.eq) goto loc_823D8B18;
loc_823D8A48:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,11328(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 11328);
loc_823D8A58:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// bctrl 
	ctx.lr = 0x823D8A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8A70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7d70
	ctx.lr = 0x823D8A78;
	sub_823D7D70(ctx, base);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8A7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7c68
	ctx.lr = 0x823D8A84;
	sub_823D7C68(ctx, base);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8A88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d8038
	ctx.lr = 0x823D8A90;
	sub_823D8038(ctx, base);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8A94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7e70
	ctx.lr = 0x823D8A9C;
	sub_823D7E70(ctx, base);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8AA0:
	// addis r10,r10,-10280
	ctx.r10.s64 = ctx.r10.s64 + -673710080;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d8b00
	if (ctx.cr0.eq) goto loc_823D8B00;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823d8af4
	if (ctx.cr6.eq) goto loc_823D8AF4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823d8ad4
	if (ctx.cr6.eq) goto loc_823D8AD4;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x823d8ae8
	if (ctx.cr6.eq) goto loc_823D8AE8;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823d8b18
	if (!ctx.cr6.eq) goto loc_823D8B18;
loc_823D8AD4:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,11332(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 11332);
	// b 0x823d8a58
	goto loc_823D8A58;
loc_823D8AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7f38
	ctx.lr = 0x823D8AF0;
	sub_823D7F38(ctx, base);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8AF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240f958
	ctx.lr = 0x823D8AFC;
	sub_8240F958(ctx, base);
	// b 0x823d8b08
	goto loc_823D8B08;
loc_823D8B00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7b68
	ctx.lr = 0x823D8B08;
	sub_823D7B68(ctx, base);
loc_823D8B08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823d8b18
	if (ctx.cr6.lt) goto loc_823D8B18;
loc_823D8B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d8d54
	goto loc_823D8D54;
loc_823D8B18:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823D8B2C;
	sub_823CD118(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x823d8b40
	if (!ctx.cr0.eq) goto loc_823D8B40;
loc_823D8B34:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d8d54
	goto loc_823D8D54;
loc_823D8B40:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823d8b6c
	if (!ctx.cr6.eq) goto loc_823D8B6C;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823D8B60;
	sub_823CD118(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D8B6C:
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x823cd118
	ctx.lr = 0x823D8B74;
	sub_823CD118(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823D8B88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823d8ba0
	if (!ctx.cr6.eq) goto loc_823D8BA0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D8B9C;
	sub_823CD250(ctx, base);
	// b 0x823d8b34
	goto loc_823D8B34;
loc_823D8BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823d8bbc
	if (!ctx.cr6.eq) goto loc_823D8BBC;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// b 0x823d8bc4
	goto loc_823D8BC4;
loc_823D8BBC:
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
loc_823D8BC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823d8d30
	if (!ctx.cr6.gt) goto loc_823D8D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f31.f64 = double(temp.f32);
loc_823D8BE0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r28,r25,1,0,30
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D8C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x823d8c2c
	if (ctx.cr6.eq) goto loc_823D8C2C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D8C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D8C2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823d8cfc
	if (!ctx.cr6.gt) goto loc_823D8CFC;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
loc_823D8C44:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// lfsx f0,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f10,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
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
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d8c44
	if (ctx.cr6.lt) goto loc_823D8C44;
loc_823D8CFC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D8D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d8be0
	if (ctx.cr6.lt) goto loc_823D8BE0;
loc_823D8D30:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D8D3C;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D8D48;
	sub_823CD250(ctx, base);
	// b 0x823d8b10
	goto loc_823D8B10;
loc_823D8D4C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D8D54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823E43A0) {
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
	// bge cr6,0x823e4484
	if (!ctx.cr6.lt) goto loc_823E4484;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,23268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 23268);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_823E4408:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e4408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4408;
loc_823E4484:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e44a0
	if (ctx.cr6.eq) goto loc_823E44A0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E44A0;
	sub_82413D40(ctx, base);
loc_823E44A0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e44bc
	if (ctx.cr6.eq) goto loc_823E44BC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E44BC;
	sub_823DC3F0(ctx, base);
loc_823E44BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7960) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E7968;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e79d0
	if (ctx.cr6.eq) goto loc_823E79D0;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e79c4
	if (ctx.cr0.eq) goto loc_823E79C4;
	// li r30,0
	r30.s64 = 0;
loc_823E7994:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e79ac
	if (ctx.cr6.eq) goto loc_823E79AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823eab18
	ctx.lr = 0x823E79AC;
	sub_823EAB18(ctx, base);
loc_823E79AC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e7994
	if (ctx.cr6.lt) goto loc_823E7994;
loc_823E79C4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x823cd250
	ctx.lr = 0x823E79D0;
	sub_823CD250(ctx, base);
loc_823E79D0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e7a30
	if (ctx.cr6.eq) goto loc_823E7A30;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e7a24
	if (ctx.cr0.eq) goto loc_823E7A24;
	// li r30,0
	r30.s64 = 0;
loc_823E79F4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e7a0c
	if (ctx.cr6.eq) goto loc_823E7A0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823eab18
	ctx.lr = 0x823E7A0C;
	sub_823EAB18(ctx, base);
loc_823E7A0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e79f4
	if (ctx.cr6.lt) goto loc_823E79F4;
loc_823E7A24:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x823cd250
	ctx.lr = 0x823E7A30;
	sub_823CD250(ctx, base);
loc_823E7A30:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x823cd250
	ctx.lr = 0x823E7A3C;
	sub_823CD250(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EC260) {
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
	// bne cr6,0x823ec294
	if (!ctx.cr6.eq) goto loc_823EC294;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823ebff8
	ctx.lr = 0x823EC284;
	sub_823EBFF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ec2ac
	if (!ctx.cr0.lt) goto loc_823EC2AC;
loc_823EC28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ec2b4
	goto loc_823EC2B4;
loc_823EC294:
	// li r5,1
	ctx.r5.s64 = 1;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// bl 0x823ebc78
	ctx.lr = 0x823EC2A0;
	sub_823EBC78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ec2b0
	if (!ctx.cr0.eq) goto loc_823EC2B0;
	// b 0x823ec28c
	goto loc_823EC28C;
loc_823EC2AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823EC2B0:
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_823EC2B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EEEB8) {
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
	ctx.lr = 0x823EEEC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,121
	ctx.r10.s64 = 121;
	// lwz r30,420(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r30.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r28.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EEF00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,97
	r27.s64 = 97;
loc_823EEF04:
	// cmpwi cr6,r30,192
	ctx.cr6.compare<int32_t>(r30.s32, 192, ctx.xer);
	// bge cr6,0x823eef14
	if (!ctx.cr6.lt) goto loc_823EEF14;
loc_823EEF0C:
	// li r31,2
	r31.s64 = 2;
	// b 0x823eef80
	goto loc_823EEF80;
loc_823EEF14:
	// cmpwi cr6,r30,208
	ctx.cr6.compare<int32_t>(r30.s32, 208, ctx.xer);
	// blt cr6,0x823eef7c
	if (ctx.cr6.lt) goto loc_823EEF7C;
	// cmpwi cr6,r30,215
	ctx.cr6.compare<int32_t>(r30.s32, 215, ctx.xer);
	// bgt cr6,0x823eef7c
	if (ctx.cr6.gt) goto loc_823EEF7C;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823eef7c
	if (ctx.cr6.eq) goto loc_823EEF7C;
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823eef7c
	if (ctx.cr6.eq) goto loc_823EEF7C;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823eef0c
	if (ctx.cr6.eq) goto loc_823EEF0C;
	// addi r11,r28,-2
	ctx.r11.s64 = r28.s64 + -2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823eef0c
	if (ctx.cr6.eq) goto loc_823EEF0C;
	// li r31,1
	r31.s64 = 1;
	// b 0x823eef80
	goto loc_823EEF80;
loc_823EEF7C:
	// li r31,3
	r31.s64 = 3;
loc_823EEF80:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r31,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r31.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823EEFB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x823eeff8
	if (ctx.cr6.eq) goto loc_823EEFF8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x823eefd4
	if (ctx.cr6.eq) goto loc_823EEFD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// bne cr6,0x823eef04
	if (!ctx.cr6.eq) goto loc_823EEF04;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823EEFD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ee860
	ctx.lr = 0x823EEFDC;
	sub_823EE860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eefec
	if (ctx.cr6.eq) goto loc_823EEFEC;
	// lwz r30,420(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 420);
	// b 0x823eef04
	goto loc_823EEF04;
loc_823EEFEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823EEFF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,420(r29)
	REX_STORE_U32(r29.u32 + 420, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F2248) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1360(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f225c
	if (ctx.cr6.eq) goto loc_823F225C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823F225C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15412
	ctx.r4.s64 = ctx.r11.s64 + 15412;
	// b 0x823ec3e0
	sub_823EC3E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F2690) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x823F2698;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f00
	ctx.lr = 0x823F26A0;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x823f26bc
	if (!ctx.cr6.eq) goto loc_823F26BC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,22416
	r31.s64 = ctx.r11.s64 + 22416;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,22404
	r30.s64 = ctx.r11.s64 + 22404;
	// b 0x823f26cc
	goto loc_823F26CC;
loc_823F26BC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,22388
	r31.s64 = ctx.r11.s64 + 22388;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r11,22372
	r30.s64 = ctx.r11.s64 + 22372;
loc_823F26CC:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,11624
	ctx.r8.s64 = ctx.r11.s64 + 11624;
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r29,11624(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 11624);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// fmr f26,f0
	f26.f64 = ctx.f0.f64;
	// lwz r28,8(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r28,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, r28.u32);
	// stw r8,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lfs f31,-264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -264);
	f31.f64 = double(temp.f32);
	// lfs f1,-268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	f30.f64 = double(temp.f32);
loc_823F2728:
	// lfs f11,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// bge cr6,0x823f2738
	if (!ctx.cr6.lt) goto loc_823F2738;
	// fmr f30,f11
	f30.f64 = ctx.f11.f64;
loc_823F2738:
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bge cr6,0x823f2748
	if (!ctx.cr6.lt) goto loc_823F2748;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
loc_823F2748:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x823f2758
	if (!ctx.cr6.lt) goto loc_823F2758;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_823F2758:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f26.f64);
	// ble cr6,0x823f2764
	if (!ctx.cr6.gt) goto loc_823F2764;
	// fmr f26,f11
	f26.f64 = ctx.f11.f64;
loc_823F2764:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f29.f64);
	// ble cr6,0x823f2770
	if (!ctx.cr6.gt) goto loc_823F2770;
	// fmr f29,f12
	f29.f64 = ctx.f12.f64;
loc_823F2770:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// ble cr6,0x823f277c
	if (!ctx.cr6.gt) goto loc_823F277C;
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
loc_823F277C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823f2728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2728;
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 - ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(f28.f64 - f31.f64));
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(f26.f64 - f30.f64));
	// lfs f10,26308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26308);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f12,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f3,f11,f11,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// blt cr6,0x823f2aec
	if (ctx.cr6.lt) goto loc_823F2AEC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f6,f26,f30
	ctx.f6.f64 = double(float(f26.f64 + f30.f64));
	// fadds f5,f29,f1
	ctx.f5.f64 = double(float(f29.f64 + ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(f28.f64 + f31.f64));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f10,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fdivs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// lfs f27,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f27.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmuls f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 * f27.f64));
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * f27.f64));
	// fmuls f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 * f27.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
loc_823F2800:
	// lfs f2,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f25.f64 = double(temp.f32);
	// fsubs f24,f2,f6
	f24.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfsu f2,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f25,f25,f5
	f25.f64 = double(float(f25.f64 - ctx.f5.f64));
	// fsubs f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fmuls f24,f24,f11
	f24.f64 = double(float(f24.f64 * ctx.f11.f64));
	// fmuls f25,f25,f13
	f25.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fsubs f23,f24,f25
	f23.f64 = double(float(f24.f64 - f25.f64));
	// fadds f22,f25,f24
	f22.f64 = double(float(f25.f64 + f24.f64));
	// fadds f25,f2,f25
	f25.f64 = double(float(ctx.f2.f64 + f25.f64));
	// fadds f21,f23,f2
	f21.f64 = double(float(f23.f64 + ctx.f2.f64));
	// fsubs f22,f22,f2
	f22.f64 = double(float(f22.f64 - ctx.f2.f64));
	// fadds f25,f25,f24
	f25.f64 = double(float(f25.f64 + f24.f64));
	// fsubs f2,f23,f2
	ctx.f2.f64 = double(float(f23.f64 - ctx.f2.f64));
	// fmadds f8,f21,f21,f8
	ctx.f8.f64 = double(float(std::fma(f21.f64, f21.f64, ctx.f8.f64)));
	// fmadds f9,f22,f22,f9
	ctx.f9.f64 = double(float(std::fma(f22.f64, f22.f64, ctx.f9.f64)));
	// fmadds f10,f25,f25,f10
	ctx.f10.f64 = double(float(std::fma(f25.f64, f25.f64, ctx.f10.f64)));
	// fmadds f7,f2,f2,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f7.f64)));
	// bdnz 0x823f2800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2800;
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f7,-260(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// stfs f10,-272(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f9,-268(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f8,-264(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// addi r9,r1,-268
	ctx.r9.s64 = ctx.r1.s64 + -268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F2878:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x823f288c
	if (!ctx.cr6.gt) goto loc_823F288C;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_823F288C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823f2878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2878;
	// rlwinm. r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f28ac
	if (ctx.cr0.eq) goto loc_823F28AC;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
loc_823F28AC:
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f28c0
	if (ctx.cr0.eq) goto loc_823F28C0;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// fmr f31,f28
	f31.f64 = f28.f64;
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
loc_823F28C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,-11788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11788);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-288(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fcmpu cr6,f3,f9
	ctx.cr6.compare(ctx.f3.f64, ctx.f9.f64);
	// blt cr6,0x823f2aec
	if (ctx.cr6.lt) goto loc_823F2AEC;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// std r11,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r11.u64);
	// lfd f13,-272(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f24.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f23,16372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	f23.f64 = double(temp.f32);
	// frsp f25,f13
	f25.f64 = double(float(ctx.f13.f64));
	// lfs f22,22368(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 22368);
	f22.f64 = double(temp.f32);
	// b 0x823f2910
	goto loc_823F2910;
loc_823F290C:
	// lfs f9,-288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f9.f64 = double(temp.f32);
loc_823F2910:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f295c
	if (ctx.cr6.eq) goto loc_823F295C;
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r9,r31,r30
	ctx.r9.u64 = r30.u64 - r31.u64;
loc_823F2928:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfsx f11,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmadds f12,f11,f26,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, ctx.f12.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f12,f11,f29,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f29.f64, ctx.f10.f64)));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f13,f11,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f13.f64)));
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f2928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2928;
loc_823F295C:
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(f28.f64 - f31.f64));
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(f26.f64 - f30.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x823f2aec
	if (ctx.cr6.lt) goto loc_823F2AEC;
	// fdivs f21,f25,f10
	f21.f64 = double(float(f25.f64 / ctx.f10.f64));
	// li r10,16
	ctx.r10.s64 = 16;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmuls f11,f21,f11
	ctx.f11.f64 = double(float(f21.f64 * ctx.f11.f64));
	// fmuls f2,f21,f13
	ctx.f2.f64 = double(float(f21.f64 * ctx.f13.f64));
	// fmuls f12,f21,f12
	ctx.f12.f64 = double(float(f21.f64 * ctx.f12.f64));
loc_823F29B8:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f21,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f21.f64 = double(temp.f32);
	// fsubs f21,f21,f31
	f21.f64 = double(float(f21.f64 - f31.f64));
	// lfs f20,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f20.f64 = double(temp.f32);
	// fsubs f20,f20,f30
	f20.f64 = double(float(f20.f64 - f30.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f13,f21,f12,f13
	ctx.f13.f64 = double(float(std::fma(f21.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f20,f11,f13
	ctx.f13.f64 = double(float(std::fma(f20.f64, ctx.f11.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, f25.f64);
	// blt cr6,0x823f29ec
	if (ctx.cr6.lt) goto loc_823F29EC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x823f29fc
	goto loc_823F29FC;
loc_823F29EC:
	// fadds f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.f13.u64);
	// lwz r10,-268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
loc_823F29FC:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f21,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f21.f64 = double(temp.f32);
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// lfs f20,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f20.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r28,r1,-252
	r28.s64 = ctx.r1.s64 + -252;
	// addi r27,r1,-248
	r27.s64 = ctx.r1.s64 + -248;
	// lfsx f16,r9,r29
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	f16.f64 = double(temp.f32);
	// fsubs f21,f16,f21
	f21.f64 = double(float(f16.f64 - f21.f64));
	// lfsx f19,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	f19.f64 = double(temp.f32);
	// lfsx f18,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	f18.f64 = double(temp.f32);
	// fmuls f17,f19,f23
	f17.f64 = double(float(f19.f64 * f23.f64));
	// lfsx f14,r9,r28
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	f14.f64 = double(temp.f32);
	// fmuls f15,f18,f23
	f15.f64 = double(float(f18.f64 * f23.f64));
	// lfsx f16,r9,r27
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	f16.f64 = double(temp.f32);
	// fsubs f20,f14,f20
	f20.f64 = double(float(f14.f64 - f20.f64));
	// fsubs f13,f16,f13
	ctx.f13.f64 = double(float(f16.f64 - ctx.f13.f64));
	// fmadds f10,f19,f17,f10
	ctx.f10.f64 = double(float(std::fma(f19.f64, f17.f64, ctx.f10.f64)));
	// fmadds f9,f18,f15,f9
	ctx.f9.f64 = double(float(std::fma(f18.f64, f15.f64, ctx.f9.f64)));
	// fmadds f8,f17,f21,f8
	ctx.f8.f64 = double(float(std::fma(f17.f64, f21.f64, ctx.f8.f64)));
	// fmadds f7,f17,f20,f7
	ctx.f7.f64 = double(float(std::fma(f17.f64, f20.f64, ctx.f7.f64)));
	// fmadds f6,f17,f13,f6
	ctx.f6.f64 = double(float(std::fma(f17.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f5,f15,f21,f5
	ctx.f5.f64 = double(float(std::fma(f15.f64, f21.f64, ctx.f5.f64)));
	// fmadds f4,f15,f20,f4
	ctx.f4.f64 = double(float(std::fma(f15.f64, f20.f64, ctx.f4.f64)));
	// fmadds f3,f15,f13,f3
	ctx.f3.f64 = double(float(std::fma(f15.f64, ctx.f13.f64, ctx.f3.f64)));
	// bdnz 0x823f29b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F29B8;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x823f2a80
	if (!ctx.cr6.gt) goto loc_823F2A80;
	// fdivs f13,f24,f10
	ctx.f13.f64 = double(float(f24.f64 / ctx.f10.f64));
	// fmadds f30,f13,f8,f30
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, f30.f64)));
	// fmadds f1,f13,f7,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f31,f13,f6,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, f31.f64)));
loc_823F2A80:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x823f2a98
	if (!ctx.cr6.gt) goto loc_823F2A98;
	// fdivs f13,f24,f9
	ctx.f13.f64 = double(float(f24.f64 / ctx.f9.f64));
	// fmadds f26,f13,f5,f26
	f26.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f26.f64)));
	// fmadds f29,f13,f4,f29
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, f29.f64)));
	// fmadds f28,f13,f3,f28
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f28.f64)));
loc_823F2A98:
	// fmuls f13,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, f22.f64);
	// bge cr6,0x823f2ae0
	if (!ctx.cr6.lt) goto loc_823F2AE0;
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, f22.f64);
	// bge cr6,0x823f2ae0
	if (!ctx.cr6.lt) goto loc_823F2AE0;
	// fmuls f13,f6,f6
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, f22.f64);
	// bge cr6,0x823f2ae0
	if (!ctx.cr6.lt) goto loc_823F2AE0;
	// fmuls f13,f5,f5
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, f22.f64);
	// bge cr6,0x823f2ae0
	if (!ctx.cr6.lt) goto loc_823F2AE0;
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, f22.f64);
	// bge cr6,0x823f2ae0
	if (!ctx.cr6.lt) goto loc_823F2AE0;
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, f22.f64);
	// blt cr6,0x823f2aec
	if (ctx.cr6.lt) goto loc_823F2AEC;
loc_823F2AE0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x823f290c
	if (ctx.cr6.lt) goto loc_823F290C;
loc_823F2AEC:
	// stfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f26,0(r4)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f29,4(r4)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f28,8(r4)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f4c
	ctx.lr = 0x823F2B0C;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82405650) {
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
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8240a328
	ctx.lr = 0x82405688;
	sub_8240A328(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82409e00
	ctx.lr = 0x8240569C;
	sub_82409E00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r10,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r4,r10,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// clrlwi r3,r10,27
	ctx.r3.u64 = ctx.r10.u32 & 0x1F;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lvrx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vcuxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// addi r6,r5,16304
	ctx.r6.s64 = ctx.r5.s64 + 16304;
	// rlwinm r5,r11,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r4,r11,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lvrx128 v63,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vcuxwfp128 v61,v63,0
	simde_mm_store_ps(ctx.v61.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// vmulfp128 v0,v61,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vsubfp128 v13,v63,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// bgt cr6,0x82405770
	if (ctx.cr6.gt) goto loc_82405770;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824057a4
	goto loc_824057A4;
loc_82405770:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-31056
	ctx.r11.s64 = ctx.r11.s64 + -31056;
	// addi r10,r10,-30672
	ctx.r10.s64 = ctx.r10.s64 + -30672;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v12,v13,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824057A4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824057B0:
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x824057b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824057B0;
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

DEFINE_REX_FUNC(sub_82411930) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82411938;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// lwz r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mr r20,r22
	r20.u64 = r22.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// mr r18,r22
	r18.u64 = r22.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm r31,r7,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// rlwinm r30,r11,14,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x824115c0
	ctx.lr = 0x82411994;
	sub_824115C0(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq 0x824120bc
	if (ctx.cr0.eq) goto loc_824120BC;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x824115c0
	ctx.lr = 0x824119B4;
	sub_824115C0(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x824120bc
	if (ctx.cr0.eq) goto loc_824120BC;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x824115c0
	ctx.lr = 0x824119D4;
	sub_824115C0(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x824120bc
	if (ctx.cr0.eq) goto loc_824120BC;
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r30,-1
	r30.s64 = -1;
	// ori r7,r9,21845
	ctx.r7.u64 = ctx.r9.u64 | 21845;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 0);
	// add r15,r11,r16
	r15.u64 = ctx.r11.u64 + r16.u64;
	// add r14,r10,r20
	r14.u64 = ctx.r10.u64 + r20.u64;
	// lwz r31,112(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// add r19,r9,r18
	r19.u64 = ctx.r9.u64 + r18.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x82411a18
	if (!ctx.cr6.gt) goto loc_82411A18;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82411A18:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82411a2c
	if (!ctx.cr6.gt) goto loc_82411A2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82411A2C:
	// bl 0x822c80d0
	ctx.lr = 0x82411A30;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82411a6c
	if (ctx.cr0.eq) goto loc_82411A6C;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82411a64
	if (ctx.cr0.lt) goto loc_82411A64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82411A54:
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r22.u32);
	// stwu r22,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82411a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411A54;
loc_82411A64:
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// b 0x82411a70
	goto loc_82411A70;
loc_82411A6C:
	// mr r21,r22
	r21.u64 = r22.u64;
loc_82411A70:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824120b0
	if (ctx.cr6.eq) goto loc_824120B0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r17,r10,65535
	r17.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82411a98
	if (!ctx.cr6.gt) goto loc_82411A98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82411A98:
	// bl 0x822c80d0
	ctx.lr = 0x82411A9C;
	sub_822C80D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824120b0
	if (ctx.cr6.eq) goto loc_824120B0;
	// addi r7,r18,4
	ctx.r7.s64 = r18.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x82411b14
	if (!ctx.cr6.lt) goto loc_82411B14;
loc_82411ABC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82411b08
	if (!ctx.cr6.lt) goto loc_82411B08;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82411AE8:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x82411ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411AE8;
loc_82411B08:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r19
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r19.u32, ctx.xer);
	// blt cr6,0x82411abc
	if (ctx.cr6.lt) goto loc_82411ABC;
loc_82411B14:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x824120a4
	if (!ctx.cr6.lt) goto loc_824120A4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	f30.f64 = double(temp.f32);
loc_82411B38:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r11,4
	r24.s64 = ctx.r11.s64 + 4;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x82411be8
	if (!ctx.cr6.lt) goto loc_82411BE8;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82411B54:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82411bdc
	if (!ctx.cr6.eq) goto loc_82411BDC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82411b8c
	if (ctx.cr6.eq) goto loc_82411B8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// b 0x82411bbc
	goto loc_82411BBC;
loc_82411B8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82411bac
	if (!ctx.cr6.gt) goto loc_82411BAC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82411BAC:
	// bl 0x822c80d0
	ctx.lr = 0x82411BB0;
	sub_822C80D0(ctx, base);
	// stwx r3,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824120ac
	if (ctx.cr6.eq) goto loc_824120AC;
loc_82411BBC:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r21
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x82411BDC;
	sub_822D5870(ctx, base);
loc_82411BDC:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x82411b54
	if (ctx.cr6.lt) goto loc_82411B54;
loc_82411BE8:
	// addi r30,r20,4
	r30.s64 = r20.s64 + 4;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// bge cr6,0x82411d6c
	if (!ctx.cr6.lt) goto loc_82411D6C;
	// addi r26,r16,4
	r26.s64 = r16.s64 + 4;
loc_82411BFC:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82411C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r15
	ctx.cr6.compare<uint32_t>(r26.u32, r15.u32, ctx.xer);
	// bge cr6,0x82411d5c
	if (!ctx.cr6.lt) goto loc_82411D5C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82411C38:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bge cr6,0x82411d4c
	if (!ctx.cr6.lt) goto loc_82411D4C;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
loc_82411C50:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x82411d40
	if (!ctx.cr6.lt) goto loc_82411D40;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
loc_82411C60:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82411d34
	if (!ctx.cr6.lt) goto loc_82411D34;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82411CA4:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f0,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x82411ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411CA4;
loc_82411D34:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x82411c60
	if (ctx.cr6.lt) goto loc_82411C60;
loc_82411D40:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r23.u32, ctx.xer);
	// blt cr6,0x82411c50
	if (ctx.cr6.lt) goto loc_82411C50;
loc_82411D4C:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r15.u32, ctx.xer);
	// blt cr6,0x82411c38
	if (ctx.cr6.lt) goto loc_82411C38;
loc_82411D5C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r14
	ctx.cr6.compare<uint32_t>(r29.u32, r14.u32, ctx.xer);
	// blt cr6,0x82411bfc
	if (ctx.cr6.lt) goto loc_82411BFC;
loc_82411D6C:
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x8241208c
	if (!ctx.cr6.lt) goto loc_8241208C;
loc_82411D78:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r30,r11,r21
	r30.u64 = ctx.r11.u64 + r21.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne 0x82412080
	if (!ctx.cr0.eq) goto loc_82412080;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82412074
	if (!ctx.cr6.gt) goto loc_82412074;
loc_82411DA8:
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82411f6c
	if (ctx.cr6.eq) goto loc_82411F6C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82411ea4
	if (ctx.cr6.eq) goto loc_82411EA4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82412030
	if (!ctx.cr6.eq) goto loc_82412030;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412030
	if (ctx.cr6.eq) goto loc_82412030;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82411DEC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x82411e00
	if (!ctx.cr6.lt) goto loc_82411E00;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82411e0c
	goto loc_82411E0C;
loc_82411E00:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82411e0c
	if (ctx.cr6.lt) goto loc_82411E0C;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82411E0C:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82411e24
	if (!ctx.cr6.lt) goto loc_82411E24;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82411e38
	goto loc_82411E38;
loc_82411E24:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411e34
	if (!ctx.cr6.lt) goto loc_82411E34;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82411e38
	goto loc_82411E38;
loc_82411E34:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82411E38:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82411e50
	if (!ctx.cr6.lt) goto loc_82411E50;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82411e64
	goto loc_82411E64;
loc_82411E50:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411e60
	if (!ctx.cr6.lt) goto loc_82411E60;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82411e64
	goto loc_82411E64;
loc_82411E60:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82411E64:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82411e7c
	if (!ctx.cr6.lt) goto loc_82411E7C;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82411e88
	goto loc_82411E88;
loc_82411E7C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82411e88
	if (ctx.cr6.lt) goto loc_82411E88;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82411E88:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82411dec
	if (ctx.cr6.lt) goto loc_82411DEC;
	// b 0x82412030
	goto loc_82412030;
loc_82411EA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412030
	if (ctx.cr6.eq) goto loc_82412030;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82411EB4:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x82411ec8
	if (!ctx.cr6.lt) goto loc_82411EC8;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82411ed4
	goto loc_82411ED4;
loc_82411EC8:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82411ed4
	if (ctx.cr6.lt) goto loc_82411ED4;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82411ED4:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82411eec
	if (!ctx.cr6.lt) goto loc_82411EEC;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82411f00
	goto loc_82411F00;
loc_82411EEC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411efc
	if (!ctx.cr6.lt) goto loc_82411EFC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82411f00
	goto loc_82411F00;
loc_82411EFC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82411F00:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82411f18
	if (!ctx.cr6.lt) goto loc_82411F18;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x82411f2c
	goto loc_82411F2C;
loc_82411F18:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411f28
	if (!ctx.cr6.lt) goto loc_82411F28;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82411f2c
	goto loc_82411F2C;
loc_82411F28:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82411F2C:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82411f44
	if (!ctx.cr6.lt) goto loc_82411F44;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82411f50
	goto loc_82411F50;
loc_82411F44:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82411f50
	if (ctx.cr6.lt) goto loc_82411F50;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82411F50:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82411eb4
	if (ctx.cr6.lt) goto loc_82411EB4;
	// b 0x82412030
	goto loc_82412030;
loc_82411F6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412030
	if (ctx.cr6.eq) goto loc_82412030;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82411F7C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bge cr6,0x82411f90
	if (!ctx.cr6.lt) goto loc_82411F90;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x82411f9c
	goto loc_82411F9C;
loc_82411F90:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x82411f9c
	if (ctx.cr6.lt) goto loc_82411F9C;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82411F9C:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82411fb4
	if (!ctx.cr6.lt) goto loc_82411FB4;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x82411fc8
	goto loc_82411FC8;
loc_82411FB4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411fc4
	if (!ctx.cr6.lt) goto loc_82411FC4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82411fc8
	goto loc_82411FC8;
loc_82411FC4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82411FC8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82411fe0
	if (!ctx.cr6.lt) goto loc_82411FE0;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x82411ff4
	goto loc_82411FF4;
loc_82411FE0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411ff0
	if (!ctx.cr6.lt) goto loc_82411FF0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82411ff4
	goto loc_82411FF4;
loc_82411FF0:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82411FF4:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8241200c
	if (!ctx.cr6.lt) goto loc_8241200C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x82412018
	goto loc_82412018;
loc_8241200C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82412018
	if (ctx.cr6.lt) goto loc_82412018;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82412018:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82411f7c
	if (ctx.cr6.lt) goto loc_82411F7C;
loc_82412030:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82412060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82411da8
	if (ctx.cr6.lt) goto loc_82411DA8;
loc_82412074:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82412080:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(r29.u32, r23.u32, ctx.xer);
	// blt cr6,0x82411d78
	if (ctx.cr6.lt) goto loc_82411D78;
loc_8241208C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x82411b38
	if (ctx.cr6.lt) goto loc_82411B38;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r22,0
	r22.s64 = 0;
loc_824120A4:
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x824120c4
	goto loc_824120C4;
loc_824120AC:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824120B0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824120c4
	goto loc_824120C4;
loc_824120BC:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_824120C4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824120d8
	if (ctx.cr6.eq) goto loc_824120D8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824118b0
	ctx.lr = 0x824120D8;
	sub_824118B0(ctx, base);
loc_824120D8:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824120E0;
	sub_822C80A8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824120E8;
	sub_822C80A8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824120F0;
	sub_822C80A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x824120F8;
	sub_822C80A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c80a8
	ctx.lr = 0x82412100;
	sub_822C80A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8242D328) {
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
	ctx.lr = 0x8242D330;
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r26,r3,180
	r26.s64 = ctx.r3.s64 + 180;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242d358
	if (!ctx.cr6.eq) goto loc_8242D358;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824342b8
	ctx.lr = 0x8242D358;
	sub_824342B8(ctx, base);
loc_8242D358:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8242d598
	if (ctx.cr6.lt) goto loc_8242D598;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242D380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x8242d598
	if (ctx.cr0.lt) goto loc_8242D598;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8242d5b0
	if (ctx.cr6.eq) goto loc_8242D5B0;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242d3b0
	if (ctx.cr6.eq) goto loc_8242D3B0;
	// bl 0x82473600
	ctx.lr = 0x8242D3AC;
	sub_82473600(ctx, base);
	// stw r28,156(r31)
	REX_STORE_U32(r31.u32 + 156, r28.u32);
loc_8242D3B0:
	// lis r10,61
	ctx.r10.s64 = 3997696;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// ori r10,r10,23808
	ctx.r10.u64 = ctx.r10.u64 | 23808;
	// mulli r4,r11,1068
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1068));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8242d3cc
	if (!ctx.cr6.gt) goto loc_8242D3CC;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_8242D3CC:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x8242c3b0
	ctx.lr = 0x8242D3E4;
	sub_8242C3B0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r3,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// and r27,r9,r11
	r27.u64 = ctx.r9.u64 & ctx.r11.u64;
	// ble cr6,0x8242d514
	if (!ctx.cr6.gt) goto loc_8242D514;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8242D410:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8242d598
	if (ctx.cr6.lt) goto loc_8242D598;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242D434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x8242d500
	if (ctx.cr0.lt) goto loc_8242D500;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,40
	ctx.r5.s64 = 40;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,1024(r11)
	REX_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,1028
	ctx.r3.s64 = ctx.r11.s64 + 1028;
	// bl 0x822d4fa0
	ctx.lr = 0x8242D464;
	sub_822D4FA0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r10,256
	ctx.r10.s64 = 256;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_8242D474:
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8242d494
	if (ctx.cr0.eq) goto loc_8242D494;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x8242d474
	if (!ctx.cr0.eq) goto loc_8242D474;
loc_8242D494:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242d4a0
	if (!ctx.cr6.eq) goto loc_8242D4A0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8242D4A0:
	// sth r28,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r28.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
loc_8242D4B8:
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8242d4d8
	if (ctx.cr0.eq) goto loc_8242D4D8;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x8242d4b8
	if (!ctx.cr0.eq) goto loc_8242D4B8;
loc_8242D4D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242d4e4
	if (!ctx.cr6.eq) goto loc_8242D4E4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8242D4E4:
	// sth r28,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r28.u16);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x823cd250
	ctx.lr = 0x8242D4F4;
	sub_823CD250(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x823cd250
	ctx.lr = 0x8242D500;
	sub_823CD250(ctx, base);
loc_8242D500:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,1068
	r30.s64 = r30.s64 + 1068;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8242d410
	if (ctx.cr6.lt) goto loc_8242D410;
loc_8242D514:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8242d598
	if (ctx.cr6.lt) goto loc_8242D598;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8242d5b0
	if (!ctx.cr6.gt) goto loc_8242D5B0;
	// lwz r30,156(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r11,1068
	ctx.r11.s64 = 1068;
loc_8242D534:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,1024(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1024);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8242d55c
	if (!ctx.cr0.eq) goto loc_8242D55C;
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8242d534
	if (ctx.cr6.lt) goto loc_8242D534;
	// b 0x8242d5b0
	goto loc_8242D5B0;
loc_8242D55C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8242D56C;
	sub_822D4FA0(ctx, base);
	// mulli r29,r29,1068
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1068));
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8242D580;
	sub_822D4FA0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// bl 0x822d4fa0
	ctx.lr = 0x8242D594;
	sub_822D4FA0(ctx, base);
	// b 0x8242d5b0
	goto loc_8242D5B0;
loc_8242D598:
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242d5ac
	if (ctx.cr6.eq) goto loc_8242D5AC;
	// bl 0x82473600
	ctx.lr = 0x8242D5A8;
	sub_82473600(ctx, base);
	// stw r28,156(r31)
	REX_STORE_U32(r31.u32 + 156, r28.u32);
loc_8242D5AC:
	// stw r28,152(r31)
	REX_STORE_U32(r31.u32 + 152, r28.u32);
loc_8242D5B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82438308) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82438310;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,516(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 516);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8243b9c0
	ctx.lr = 0x82438334;
	sub_8243B9C0(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824383a8
	if (!ctx.cr6.eq) goto loc_824383A8;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824383a8
	if (ctx.cr0.eq) goto loc_824383A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438408
	if (ctx.cr6.eq) goto loc_82438408;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,524(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82438374:
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + r29.u64;
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r31,r7,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r31,r31,r10
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// sthx r8,r5,r7
	REX_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r8.u16);
	// bdnz 0x82438374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438374;
	// b 0x82438408
	goto loc_82438408;
loc_824383A8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438408
	if (ctx.cr6.eq) goto loc_82438408;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 528);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lwz r4,524(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 524);
loc_824383D0:
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + r29.u64;
	// lhz r31,2(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// divwu r30,r11,r9
	r30.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r30,r30,r9
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sthux r31,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r31.u16);
	ctx.r11.u32 = ea;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// bdnz 0x824383d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824383D0;
loc_82438408:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243BEF0) {
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
loc_8243BF04:
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
	// beq cr6,0x8243bf2c
	if (ctx.cr6.eq) goto loc_8243BF2C;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r4,12,12,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFF000) | (ctx.r11.u64 & 0xFFFFFFFFFFF00FFF);
	// stw r7,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8243BF2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243bf04
	if (ctx.cr6.lt) goto loc_8243BF04;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D068) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8243dbb0
	sub_8243DBB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243D108) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f13,16632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16632);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// beq cr6,0x8243d168
	if (ctx.cr6.eq) goto loc_8243D168;
	// bl 0x82473600
	ctx.lr = 0x8243D164;
	sub_82473600(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_8243D168:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x822d5870
	ctx.lr = 0x8243D178;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_8243FDD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lhz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r3,6(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// bl 0x824536e0
	ctx.lr = 0x8243FDF8;
	sub_824536E0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

DEFINE_REX_FUNC(sub_82441050) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

DEFINE_REX_FUNC(sub_82441178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82441180;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824411A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x8245c510
	ctx.lr = 0x824411B0;
	sub_8245C510(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824411C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82442070) {
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
	// bl 0x82441768
	ctx.lr = 0x82442090;
	sub_82441768(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824420d4
	if (ctx.cr0.eq) goto loc_824420D4;
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
	// beq cr6,0x824420c0
	if (ctx.cr6.eq) goto loc_824420C0;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x824420c4
	goto loc_824420C4;
loc_824420C0:
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
loc_824420C4:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_824420D4:
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

DEFINE_REX_FUNC(sub_82443590) {
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
	ctx.lr = 0x82443598;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824435C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824435E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x824435fc
	if (ctx.cr0.lt) goto loc_824435FC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x824435FC;
	sub_822D4FA0(ctx, base);
loc_824435FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82447A60) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x82447A68;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r17,56(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r19,r11,11872
	r19.s64 = ctx.r11.s64 + 11872;
	// dcbt r0,r19
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r19
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82447ab4
	if (!ctx.cr6.gt) goto loc_82447AB4;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82447acc
	if (ctx.cr6.gt) goto loc_82447ACC;
loc_82447AB4:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
loc_82447ACC:
	// rlwinm r9,r10,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// li r24,0
	r24.s64 = 0;
	// divw r23,r9,r11
	r23.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// ble cr6,0x82447af0
	if (!ctx.cr6.gt) goto loc_82447AF0;
loc_82447AE0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// srw r11,r23,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (r23.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82447ae0
	if (ctx.cr6.gt) goto loc_82447AE0;
loc_82447AF0:
	// lwz r9,256(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// divw r10,r9,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82447b14
	if (!ctx.cr6.gt) goto loc_82447B14;
loc_82447B04:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82447b04
	if (ctx.cr6.gt) goto loc_82447B04;
loc_82447B14:
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// add r27,r11,r9
	r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82447b3c
	if (!ctx.cr6.gt) goto loc_82447B3C;
loc_82447B2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82447b2c
	if (ctx.cr6.gt) goto loc_82447B2C;
loc_82447B3C:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mullw r4,r6,r23
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r23.s32);
	// lwzx r21,r7,r8
	r21.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// srawi r11,r4,12
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 12;
	// li r30,0
	r30.s64 = 0;
	// extsh r18,r3
	r18.s64 = ctx.r3.s16;
	// li r29,-1
	r29.s64 = -1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82447b9c
	if (ctx.cr6.lt) goto loc_82447B9C;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
loc_82447B8C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82447b8c
	if (!ctx.cr6.lt) goto loc_82447B8C;
loc_82447B9C:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447f10
	if (ctx.cr6.lt) goto loc_82447F10;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r22,r18
	r22.s64 = r18.s16;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r10,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r10.u16);
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x82447dbc
	if (!ctx.cr6.lt) goto loc_82447DBC;
	// li r26,1
	r26.s64 = 1;
loc_82447BF0:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x82447dbc
	if (!ctx.cr6.lt) goto loc_82447DBC;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// mullw r8,r11,r23
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82447c38
	if (ctx.cr6.lt) goto loc_82447C38;
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r23
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r23.s32);
	// srawi r8,r7,12
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 12;
loc_82447C28:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82447c28
	if (!ctx.cr6.lt) goto loc_82447C28;
loc_82447C38:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x82447dbc
	if (!ctx.cr6.lt) goto loc_82447DBC;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bne cr6,0x82447c84
	if (!ctx.cr6.eq) goto loc_82447C84;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	f31.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x82469b38
	ctx.lr = 0x82447C7C;
	sub_82469B38(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x82447cac
	goto loc_82447CAC;
loc_82447C84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82469b38
	ctx.lr = 0x82447C8C;
	sub_82469B38(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f1
	f31.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
loc_82447CAC:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(r24.s32, 12, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82447cdc
	if (!ctx.cr6.gt) goto loc_82447CDC;
	// addi r10,r24,-13
	ctx.r10.s64 = r24.s64 + -13;
	// addi r8,r24,-12
	ctx.r8.s64 = r24.s64 + -12;
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sraw r6,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r6.s64 = ctx.r7.s32 >> temp.u32;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// b 0x82447cec
	goto loc_82447CEC;
loc_82447CDC:
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// subfic r10,r24,12
	ctx.xer.ca = r24.u32 <= 12;
	ctx.r10.u64 = static_cast<uint64_t>(12) - r24.u64;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
loc_82447CEC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(r29.s32, r22.s32, ctx.xer);
	// ble cr6,0x82447d04
	if (!ctx.cr6.gt) goto loc_82447D04;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82447D04:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82447d14
	if (ctx.cr6.eq) goto loc_82447D14;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_82447D14:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r9,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + r17.u32, temp.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82447D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447f10
	if (ctx.cr6.lt) goto loc_82447F10;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r9,r29
	ctx.r9.s64 = r29.s16;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r10,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r10.u16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82447da8
	if (!ctx.cr6.lt) goto loc_82447DA8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x82447d8c
	if (!ctx.cr6.lt) goto loc_82447D8C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r19
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x82447d04
	goto loc_82447D04;
loc_82447D8C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	f31.f64 = double(float(ctx.f12.f64 * f30.f64));
	// b 0x82447d04
	goto loc_82447D04;
loc_82447DA8:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r22.s32, ctx.xer);
	// blt cr6,0x82447bf0
	if (ctx.cr6.lt) goto loc_82447BF0;
loc_82447DBC:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// bne cr6,0x82447e68
	if (!ctx.cr6.eq) goto loc_82447E68;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82447e2c
	if (ctx.cr6.lt) goto loc_82447E2C;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x82447e10
	if (!ctx.cr6.lt) goto loc_82447E10;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
loc_82447DE8:
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r6,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 12;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82447e10
	if (ctx.cr6.lt) goto loc_82447E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// blt cr6,0x82447de8
	if (ctx.cr6.lt) goto loc_82447DE8;
loc_82447E10:
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// bgt cr6,0x82447e2c
	if (ctx.cr6.gt) goto loc_82447E2C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82469b38
	ctx.lr = 0x82447E28;
	sub_82469B38(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82447E2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * f30.f64));
	// beq cr6,0x82447e58
	if (ctx.cr6.eq) goto loc_82447E58;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82447E58:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r17.u32, temp.u32);
loc_82447E68:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lhz r10,118(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82447ab4
	if (ctx.cr6.gt) goto loc_82447AB4;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82447e9c
	if (!ctx.cr6.gt) goto loc_82447E9C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d5870
	ctx.lr = 0x82447E9C;
	sub_822D5870(ctx, base);
loc_82447E9C:
	// lhz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82447EC0;
	sub_822D5870(ctx, base);
	// lhz r7,202(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 202);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r22.s32, ctx.xer);
	// bne cr6,0x82447ef0
	if (!ctx.cr6.eq) goto loc_82447EF0;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,490(r25)
	REX_STORE_U16(r25.u32 + 490, ctx.r11.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
loc_82447EF0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r9,490(r25)
	REX_STORE_U16(r25.u32 + 490, ctx.r9.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
loc_82447F10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_8245F750) {
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
	ctx.lr = 0x8245F758;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x8245e7e8
	ctx.lr = 0x8245F774;
	sub_8245E7E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8245f798
	if (ctx.cr0.eq) goto loc_8245F798;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8245f804
	goto loc_8245F804;
loc_8245F798:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8242c3b0
	ctx.lr = 0x8245F7B4;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245f7c8
	if (!ctx.cr0.eq) goto loc_8245F7C8;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245f804
	goto loc_8245F804;
loc_8245F7C8:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
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
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8245f9d8
	ctx.lr = 0x8245F7F4;
	sub_8245F9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245f804
	if (!ctx.cr0.lt) goto loc_8245F804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F804;
	sub_82473600(ctx, base);
loc_8245F804:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82460EF8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82460f98
	if (ctx.cr6.lt) goto loc_82460F98;
	// subfic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82460f98
	if (ctx.cr6.gt) goto loc_82460F98;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd118
	ctx.lr = 0x82460F30;
	sub_823CD118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460f98
	if (ctx.cr6.eq) goto loc_82460F98;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82460f8c
	if (ctx.cr6.lt) goto loc_82460F8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x82460f5c
	if (!ctx.cr6.gt) goto loc_82460F5C;
loc_82460F4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82460f4c
	if (ctx.cr6.gt) goto loc_82460F4C;
loc_82460F5C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + r31.u64;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r6,-1(r7)
	REX_STORE_U8(ctx.r7.u32 + -1, ctx.r6.u8);
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
loc_82460F8C:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd250
	ctx.lr = 0x82460F98;
	sub_823CD250(ctx, base);
loc_82460F98:
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

DEFINE_REX_FUNC(sub_82464E80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// divw r11,r10,r5
	ctx.r11.u64 = uint32_t((ctx.r5.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r10.s32 / ctx.r5.s32 : 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82464ea4
	if (!ctx.cr6.gt) goto loc_82464EA4;
loc_82464E94:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srw r5,r11,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82464e94
	if (ctx.cr6.gt) goto loc_82464E94;
loc_82464EA4:
	// divw r11,r10,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82464ec4
	if (!ctx.cr6.gt) goto loc_82464EC4;
loc_82464EB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82464eb4
	if (ctx.cr6.gt) goto loc_82464EB4;
loc_82464EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82464f04
	if (!ctx.cr6.gt) goto loc_82464F04;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
loc_82464EE0:
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
	// bdnz 0x82464ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82464EE0;
loc_82464F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82466DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82466DC0;
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r30,1
	r30.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8246712c
	if (!ctx.cr6.eq) goto loc_8246712C;
	// lwz r31,60(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bgt cr6,0x82466e8c
	if (ctx.cr6.gt) goto loc_82466E8C;
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,34(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,424(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// ble cr6,0x82466e44
	if (!ctx.cr6.gt) goto loc_82466E44;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82466E1C:
	// lwz r7,40(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// addi r7,r7,0
	ctx.r7.s64 = ctx.r7.s64 + 0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfe r29,r29,r29
	temp.u8 = (~r29.u32 + r29.u32 < ~r29.u32) | (~r29.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~r29.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r29,r11
	ctx.r11.u64 = r29.u64 & ctx.r11.u64;
	// blt cr6,0x82466e1c
	if (ctx.cr6.lt) goto loc_82466E1C;
loc_82466E44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82466e8c
	if (ctx.cr6.eq) goto loc_82466E8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82466e8c
	if (!ctx.cr6.gt) goto loc_82466E8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r6,34(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82466E64:
	// lwz r7,48(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// addi r7,r7,0
	ctx.r7.s64 = ctx.r7.s64 + 0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// blt cr6,0x82466e64
	if (ctx.cr6.lt) goto loc_82466E64;
loc_82466E8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// bgt cr6,0x82466fd4
	if (ctx.cr6.gt) goto loc_82466FD4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82466eac
	if (ctx.cr6.eq) goto loc_82466EAC;
	// lwz r9,464(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// b 0x82466fa0
	goto loc_82466FA0;
loc_82466EAC:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,444(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r10,-2(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x82466ee8
	if (ctx.cr6.eq) goto loc_82466EE8;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sraw r11,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// sraw r10,r7,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// b 0x82466f14
	goto loc_82466F14;
loc_82466EE8:
	// lwz r9,448(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82466f14
	if (ctx.cr6.eq) goto loc_82466F14;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// slw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// slw r4,r7,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
loc_82466F14:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82466f2c
	if (ctx.cr6.lt) goto loc_82466F2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82466f4c
	goto loc_82466F4C;
loc_82466F2C:
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
loc_82466F4C:
	// lwz r8,140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82466f7c
	if (!ctx.cr6.eq) goto loc_82466F7C;
	// lwz r8,148(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82466f7c
	if (!ctx.cr6.eq) goto loc_82466F7C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82466F7C:
	// lwz r10,468(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r30.u32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subf r10,r5,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82466FA0:
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246711c
	if (ctx.cr6.eq) goto loc_8246711C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82466FB4:
	// lwz r8,360(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r7,34(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82466fb4
	if (ctx.cr6.lt) goto loc_82466FB4;
	// b 0x8246711c
	goto loc_8246711C;
loc_82466FD4:
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467048
	if (ctx.cr6.eq) goto loc_82467048;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246711c
	if (ctx.cr6.eq) goto loc_8246711C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82466FF4:
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467010
	if (ctx.cr6.eq) goto loc_82467010;
	// lwz r11,376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 376);
	// lwz r8,456(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x82467028
	goto loc_82467028;
loc_82467010:
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 376);
	// beq cr6,0x82467028
	if (ctx.cr6.eq) goto loc_82467028;
	// lwz r8,456(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
loc_82467028:
	// lwz r8,360(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r7,34(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82466ff4
	if (ctx.cr6.lt) goto loc_82466FF4;
	// b 0x8246711c
	goto loc_8246711C;
loc_82467048:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82467060
	if (ctx.cr6.eq) goto loc_82467060;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x824670dc
	goto loc_824670DC;
loc_82467060:
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824670dc
	if (ctx.cr6.eq) goto loc_824670DC;
	// lwz r8,320(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r6,444(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82467084:
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// beq cr6,0x824670a8
	if (ctx.cr6.eq) goto loc_824670A8;
	// lwz r4,456(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r11,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x824670bc
	goto loc_824670BC;
loc_824670A8:
	// lwz r4,448(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824670bc
	if (ctx.cr6.eq) goto loc_824670BC;
	// lwz r4,456(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
loc_824670BC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x824670c8
	if (!ctx.cr6.gt) goto loc_824670C8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_824670C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt cr6,0x82467084
	if (ctx.cr6.lt) goto loc_82467084;
loc_824670DC:
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246711c
	if (ctx.cr6.eq) goto loc_8246711C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824670F0:
	// lwz r9,468(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,360(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824670f0
	if (ctx.cr6.lt) goto loc_824670F0;
loc_8246711C:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8246712c
	if (!ctx.cr6.eq) goto loc_8246712C;
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r30.u32);
loc_8246712C:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824754E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824754E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247551c
	if (ctx.cr6.eq) goto loc_8247551C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82475dd8
	ctx.lr = 0x82475514;
	sub_82475DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247558c
	if (ctx.cr0.lt) goto loc_8247558C;
loc_8247551C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82475530
	if (ctx.cr6.eq) goto loc_82475530;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474508
	ctx.lr = 0x82475530;
	sub_82474508(ctx, base);
loc_82475530:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8247558c
	if (ctx.cr6.lt) goto loc_8247558C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243a608
	ctx.lr = 0x82475540;
	sub_8243A608(ctx, base);
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82475570
	if (ctx.cr0.eq) goto loc_82475570;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8245c3e0
	ctx.lr = 0x82475558;
	sub_8245C3E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245c5a8
	ctx.lr = 0x82475568;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8247557c
	if (!ctx.cr0.eq) goto loc_8247557C;
loc_82475570:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8247558c
	goto loc_8247558C;
loc_8247557C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82472fd0
	ctx.lr = 0x82475584;
	sub_82472FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474990
	ctx.lr = 0x8247558C;
	sub_82474990(ctx, base);
loc_8247558C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8247A7E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8247A7F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8247a810
	if (ctx.cr6.gt) goto loc_8247A810;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8247A810:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a860
	if (ctx.cr6.eq) goto loc_8247A860;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A82C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247a8bc
	if (ctx.cr6.eq) goto loc_8247A8BC;
loc_8247A838:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
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
	// bne 0x8247a838
	if (!ctx.cr0.eq) goto loc_8247A838;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8247A860:
	// bl 0x8220fda0
	ctx.lr = 0x8247A864;
	sub_8220FDA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8220e3f8
	ctx.lr = 0x8247A874;
	sub_8220E3F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247a8bc
	if (ctx.cr6.eq) goto loc_8247A8BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247a8bc
	if (ctx.cr6.eq) goto loc_8247A8BC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220d670
	ctx.lr = 0x8247A898;
	sub_8220D670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8247a8bc
	if (!ctx.cr6.gt) goto loc_8247A8BC;
loc_8247A8A0:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
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
	// bne 0x8247a8a0
	if (!ctx.cr0.eq) goto loc_8247A8A0;
loc_8247A8BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8247DD74) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dbb00
	ctx.lr = 0x8247DD88;
	sub_822DBB00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247F26C) {
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
	// lwz r30,180(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x8247f2a4
	goto loc_8247F2A4;
loc_8247F2A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5ce0
	ctx.lr = 0x8247F2AC;
	sub_822E5CE0(ctx, base);
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

DEFINE_REX_FUNC(sub_8247FE94) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
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
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247ff04
	if (ctx.cr6.eq) goto loc_8247FF04;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247fefc
	if (ctx.cr6.eq) goto loc_8247FEFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8247FEFC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e5ce0
	ctx.lr = 0x8247FF04;
	sub_822E5CE0(ctx, base);
loc_8247FF04:
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

DEFINE_REX_FUNC(sub_824899C0) {
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
	ctx.lr = 0x824899C8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// srawi r26,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r26.s64 = ctx.r4.s32 >> 1;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lhz r3,50(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 224);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,3780(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 3780);
	// rlwinm r28,r3,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,3784(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 3784);
	// lwz r3,272(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 272);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lbz r29,33(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 33);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// bne cr6,0x82489a34
	if (!ctx.cr6.eq) goto loc_82489A34;
	// lwz r11,22268(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 22268);
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
	// b 0x82489a44
	goto loc_82489A44;
loc_82489A34:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,1480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// stw r10,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r10.u32);
loc_82489A44:
	// mullw r11,r28,r7
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// lhz r9,74(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lhz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r18,r9,r4
	r18.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r20,r11,r5
	r20.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// add r26,r10,r3
	r26.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82489d28
	if (!ctx.cr6.lt) goto loc_82489D28;
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r21,0
	r21.s64 = 0;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r24,-32161
	r24.s64 = -2107703296;
	// li r19,1
	r19.s64 = 1;
	// lis r25,-32161
	r25.s64 = -2107703296;
	// b 0x82489ac0
	goto loc_82489AC0;
loc_82489AB4:
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82489AC0:
	// lwz r17,20696(r23)
	r17.u64 = REX_LOAD_U32(r23.u32 + 20696);
	// mr r14,r21
	r14.u64 = r21.u64;
	// lwz r16,20700(r23)
	r16.u64 = REX_LOAD_U32(r23.u32 + 20700);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r15,20704(r23)
	r15.u64 = REX_LOAD_U32(r23.u32 + 20704);
	// ble cr6,0x82489ccc
	if (!ctx.cr6.gt) goto loc_82489CCC;
	// subf r11,r20,r30
	ctx.r11.u64 = r30.u64 - r20.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82489AE4:
	// addi r11,r31,560
	ctx.r11.s64 = r31.s64 + 560;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_82489AF4:
	// srawi r11,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r11.s64 = r29.s32 >> 2;
	// lwz r9,28(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwzu r10,4(r28)
	ea = 4 + r28.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r3,r9,-128
	ctx.r3.s64 = ctx.r9.s64 + -128;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// dcbt r8,r3
	// stw r3,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r3.u32);
	// addi r5,r11,45
	ctx.r5.s64 = ctx.r11.s64 + 45;
	// lwz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r11,1384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,5112(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 5112);
	// lwz r6,5100(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 5100);
	// lbz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 4);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r8,r4,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + r31.u32);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x823ae920
	ctx.lr = 0x82489B50;
	sub_823AE920(ctx, base);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,768
	ctx.cr6.compare<int32_t>(r30.s32, 768, ctx.xer);
	// blt cr6,0x82489af4
	if (ctx.cr6.lt) goto loc_82489AF4;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82489c64
	if (ctx.cr6.eq) goto loc_82489C64;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// beq cr6,0x82489bd0
	if (ctx.cr6.eq) goto loc_82489BD0;
	// stwx r19,r9,r22
	REX_STORE_U32(ctx.r9.u32 + r22.u32, r19.u32);
	// lwz r8,348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, r19.u32);
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, r19.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r19.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r19,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r19.u32);
	// b 0x82489c14
	goto loc_82489C14;
loc_82489BD0:
	// stwx r21,r9,r22
	REX_STORE_U32(ctx.r9.u32 + r22.u32, r21.u32);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// lwz r8,348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 348);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, r21.u32);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// lwz r4,348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 348);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, r21.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r21.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r21,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r21.u32);
loc_82489C14:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r3,1384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82489c50
	if (!ctx.cr6.eq) goto loc_82489C50;
	// bl 0x82489880
	ctx.lr = 0x82489C40;
	sub_82489880(ctx, base);
	// addi r17,r17,32
	r17.s64 = r17.s64 + 32;
	// addi r16,r16,16
	r16.s64 = r16.s64 + 16;
	// addi r15,r15,16
	r15.s64 = r15.s64 + 16;
	// b 0x82489c9c
	goto loc_82489C9C;
loc_82489C50:
	// bl 0x824898d0
	ctx.lr = 0x82489C54;
	sub_824898D0(ctx, base);
	// addi r17,r17,32
	r17.s64 = r17.s64 + 32;
	// addi r16,r16,16
	r16.s64 = r16.s64 + 16;
	// addi r15,r15,16
	r15.s64 = r15.s64 + 16;
	// b 0x82489c9c
	goto loc_82489C9C;
loc_82489C64:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lhz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 76);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r7,74(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lwz r3,1384(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r6,r11,r20
	ctx.r6.u64 = ctx.r11.u64 + r20.u64;
	// bne cr6,0x82489c98
	if (!ctx.cr6.eq) goto loc_82489C98;
	// bl 0x82489920
	ctx.lr = 0x82489C94;
	sub_82489920(ctx, base);
	// b 0x82489c9c
	goto loc_82489C9C;
loc_82489C98:
	// bl 0x82489970
	ctx.lr = 0x82489C9C;
	sub_82489970(ctx, base);
loc_82489C9C:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r18,r18,16
	r18.s64 = r18.s64 + 16;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82489ae4
	if (ctx.cr6.lt) goto loc_82489AE4;
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82489CCC:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82489cf8
	if (ctx.cr6.eq) goto loc_82489CF8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,20704(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20704);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r8,20700(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 20700);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r7,20696(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 20696);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248b100
	ctx.lr = 0x82489CF8;
	sub_8248B100(ctx, base);
loc_82489CF8:
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,228(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 228);
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + r20.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r7,r18,r10
	ctx.r7.u64 = r18.u64 + ctx.r10.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne 0x82489ab4
	if (!ctx.cr0.eq) goto loc_82489AB4;
loc_82489D28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824A8558) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x824A8560;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v11,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v31,5
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x5)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// vsubshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x824a8714
	if (!ctx.cr6.eq) goto loc_824A8714;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a88fc
	if (!ctx.cr6.gt) goto loc_824A88FC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A8628:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v30,v9,v9
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v25,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v27,v5
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v25
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v19,v26,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vadduhm v26,v21,v28
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v19,v20
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v30,v14
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v18,v29,v27
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v30,v17,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v29,v20,v16
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v18,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v27,v14,v29
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v26,v30,v28
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsrah v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x824a8628
	if (ctx.cr6.lt) goto loc_824A8628;
	// b 0x824a88fc
	goto loc_824A88FC;
loc_824A8714:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v46,v47
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v30,v44,v45
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v28
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a88fc
	if (!ctx.cr6.gt) goto loc_824A88FC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_824A87A0:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v27,v7,v7
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v26,v6,v6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v25,v5,v5
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vslh v28,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v29
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vmrghb v30,v0,v19
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v28,v18,v18
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v19,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vslh v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v22,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v26,v19
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v21,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v26,v24,v14
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v20,v27,v20
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v27,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v26
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v15,v27,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v18,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v20,v23
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v26,v17,v22
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v23,v25,v16
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vadduhm v20,v19,v26
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v21,v21,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v16,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v16,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x824a87a0
	if (ctx.cr6.lt) goto loc_824A87A0;
loc_824A88FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a7318
	ctx.lr = 0x824A890C;
	sub_824A7318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824B9BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 16;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,-115
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -115, ctx.xer);
	// bge cr6,0x824b9c28
	if (!ctx.cr6.lt) goto loc_824B9C28;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// b 0x824b9c40
	goto loc_824B9C40;
loc_824B9C28:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x824b9c44
	if (!ctx.cr6.gt) goto loc_824B9C44;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_824B9C40:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_824B9C44:
	// cmpwi cr6,r31,-115
	ctx.cr6.compare<int32_t>(r31.s32, -115, ctx.xer);
	// bge cr6,0x824b9c80
	if (!ctx.cr6.lt) goto loc_824B9C80;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// beq cr6,0x824b9c70
	if (ctx.cr6.eq) goto loc_824B9C70;
	// addi r10,r11,-116
	ctx.r10.s64 = ctx.r11.s64 + -116;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824B9C70:
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824B9C80:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x824b9cac
	if (!ctx.cr6.gt) goto loc_824B9CAC;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x824b9ca8
	if (!ctx.cr6.eq) goto loc_824B9CA8;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_824B9CA8:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_824B9CAC:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D15B0) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r31,1
	r31.s64 = 1;
	// addi r30,r11,6648
	r30.s64 = ctx.r11.s64 + 6648;
loc_824D15D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d7748
	ctx.lr = 0x824D15D8;
	sub_823D7748(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,596
	r30.s64 = r30.s64 + 596;
	// bge 0x824d15d0
	if (!ctx.cr0.lt) goto loc_824D15D0;
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

DEFINE_REX_FUNC(sub_824D1740) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8040
	ctx.r11.s64 = r31.s64 + 8040;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1760;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21580
	ctx.r11.s64 = ctx.r11.s64 + 21580;
	// stw r11,8040(r31)
	REX_STORE_U32(r31.u32 + 8040, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1980) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8400
	ctx.r11.s64 = r31.s64 + 8400;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D19A0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21652
	ctx.r11.s64 = ctx.r11.s64 + 21652;
	// stw r11,8400(r31)
	REX_STORE_U32(r31.u32 + 8400, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1BC0) {
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
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r31,8764
	ctx.r11.s64 = r31.s64 + 8764;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1BE0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21724
	ctx.r11.s64 = ctx.r11.s64 + 21724;
	// stw r11,8764(r31)
	REX_STORE_U32(r31.u32 + 8764, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1DC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27032
	ctx.r9.s64 = ctx.r11.s64 + -27032;
	// addi r11,r10,-23116
	ctx.r11.s64 = ctx.r10.s64 + -23116;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D1F80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26800
	ctx.r9.s64 = ctx.r11.s64 + -26800;
	// addi r11,r10,-22544
	ctx.r11.s64 = ctx.r10.s64 + -22544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2130) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-20696
	ctx.r10.s64 = ctx.r10.s64 + -20696;
	// lwz r11,-28516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28516);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,24628
	ctx.r11.s64 = ctx.r11.s64 + 24628;
	// addi r9,r9,-13284
	ctx.r9.s64 = ctx.r9.s64 + -13284;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824D2880:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824d2880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D2880;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2B80) {
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
	// addi r31,r11,3380
	r31.s64 = ctx.r11.s64 + 3380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82206828
	ctx.lr = 0x824D2BA0;
	sub_82206828(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// stb r11,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r11.u8);
	// addi r3,r10,14800
	ctx.r3.s64 = ctx.r10.s64 + 14800;
	// bl 0x822d5848
	ctx.lr = 0x824D2BB4;
	sub_822D5848(ctx, base);
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

DEFINE_REX_FUNC(sub_824D3108) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3208) {
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
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r31,r11,30560
	r31.s64 = ctx.r11.s64 + 30560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x824D3230;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,804(r31)
	REX_STORE_U32(r31.u32 + 804, ctx.r11.u32);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// bl 0x822d5870
	ctx.lr = 0x824D3248;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_824D38E8) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// addi r31,r11,7392
	r31.s64 = ctx.r11.s64 + 7392;
loc_824D3910:
	// addis r31,r31,-1
	r31.s64 = r31.s64 + -65536;
	// addi r31,r31,-3696
	r31.s64 = r31.s64 + -3696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d4e88
	ctx.lr = 0x824D3920;
	sub_821D4E88(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x824d3910
	if (!ctx.cr0.lt) goto loc_824D3910;
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

DEFINE_REX_FUNC(sub_824D3D10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E70) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3ED0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001f7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4020) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000262
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4180) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4300) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010199
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4480) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100b1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4600) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101ba
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4780) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000317
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4900) {
	REX_FUNC_PROLOGUE();
	// .long 0x200030c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A80) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010119
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4C00) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

