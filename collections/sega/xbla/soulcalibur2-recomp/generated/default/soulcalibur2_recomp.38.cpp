#include "soulcalibur2_funcs.38.h"

DEFINE_REX_FUNC(sub_820E1BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E7330) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r5,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, ctx.r5.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f13,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lbz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e7378
	if (ctx.cr0.eq) goto loc_820E7378;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E7378:
	// stfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EA4A0) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ea4c4
	if (ctx.cr6.lt) goto loc_820EA4C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820ea518
	goto loc_820EA518;
loc_820EA4C4:
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// bl 0x820e0088
	ctx.lr = 0x820EA500;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f12,f13,f0
	ctx.f1.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
loc_820EA518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EE5C8) {
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
	// addi r11,r11,16460
	ctx.r11.s64 = ctx.r11.s64 + 16460;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x820ee5f4
	if (ctx.cr0.eq) goto loc_820EE5F4;
	// bl 0x822c80a8
	ctx.lr = 0x820EE5F4;
	sub_822C80A8(ctx, base);
loc_820EE5F4:
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

DEFINE_REX_FUNC(sub_820F02A8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f033c
	if (!ctx.cr0.eq) goto loc_820F033C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4900);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x820f033c
	if (ctx.cr6.eq) goto loc_820F033C;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r30,1
	r30.s64 = 1;
	// andi. r8,r11,32771
	ctx.r8.u64 = ctx.r11.u64 & 32771;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r8,32771
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32771, ctx.xer);
	// stw r30,-48(r9)
	REX_STORE_U32(ctx.r9.u32 + -48, r30.u32);
	// bne cr6,0x820f0354
	if (!ctx.cr6.eq) goto loc_820F0354;
	// bl 0x821ff1b8
	ctx.lr = 0x820F0310;
	sub_821FF1B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,16952(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16952);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f0364
	if (ctx.cr6.lt) goto loc_820F0364;
loc_820F0330:
	// bl 0x820ee610
	ctx.lr = 0x820F0334;
	sub_820EE610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
loc_820F033C:
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
loc_820F0354:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,32769
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32769, ctx.xer);
	// bne cr6,0x820f0330
	if (!ctx.cr6.eq) goto loc_820F0330;
loc_820F0364:
	// bl 0x820ec308
	ctx.lr = 0x820F0368;
	sub_820EC308(ctx, base);
	// stw r30,500(r31)
	REX_STORE_U32(r31.u32 + 500, r30.u32);
	// b 0x820f033c
	goto loc_820F033C;
}

DEFINE_REX_FUNC(sub_820F4858) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8324(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8324);
	// lwz r10,8320(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8320);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rlwinm. r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq 0x820f4884
	if (ctx.cr0.eq) goto loc_820F4884;
	// li r8,1088
	ctx.r8.s64 = 1088;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r11,8388(r3)
	REX_STORE_U32(ctx.r3.u32 + 8388, ctx.r11.u32);
loc_820F4884:
	// rlwinm. r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820f489c
	if (ctx.cr0.eq) goto loc_820F489C;
	// li r8,2112
	ctx.r8.s64 = 2112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r11,8388(r3)
	REX_STORE_U32(ctx.r3.u32 + 8388, ctx.r11.u32);
loc_820F489C:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f48b0
	if (ctx.cr0.eq) goto loc_820F48B0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F48B0:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f48c4
	if (ctx.cr0.eq) goto loc_820F48C4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F48C4:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f48d8
	if (ctx.cr0.eq) goto loc_820F48D8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F48D8:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f48ec
	if (ctx.cr0.eq) goto loc_820F48EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F48EC:
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f48fc
	if (ctx.cr0.eq) goto loc_820F48FC;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F48FC:
	// rlwinm. r11,r9,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,4160
	ctx.r10.s64 = 4160;
	// beq 0x820f490c
	if (ctx.cr0.eq) goto loc_820F490C;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_820F490C:
	// rlwinm. r8,r9,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r11,8256
	ctx.r11.s64 = 8256;
	// beq 0x820f491c
	if (ctx.cr0.eq) goto loc_820F491C;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F491C:
	// rlwinm. r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820f4928
	if (ctx.cr0.eq) goto loc_820F4928;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_820F4928:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f4934
	if (ctx.cr0.eq) goto loc_820F4934;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820F4934:
	// lwz r11,8388(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm. r11,r9,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f4954
	if (ctx.cr0.eq) goto loc_820F4954;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820F4954:
	// rlwinm. r11,r9,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f4968
	if (ctx.cr0.eq) goto loc_820F4968;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820F4968:
	// rlwinm. r11,r9,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f497c
	if (ctx.cr0.eq) goto loc_820F497C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_820F497C:
	// rlwinm. r11,r9,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FD430) {
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
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fd478
	if (ctx.cr6.eq) goto loc_820FD478;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD46C;
	sub_820F8D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x820fd57c
	goto loc_820FD57C;
loc_820FD478:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fd4cc
	if (ctx.cr6.lt) goto loc_820FD4CC;
	// beq cr6,0x820fd4b4
	if (ctx.cr6.eq) goto loc_820FD4B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fd520
	if (!ctx.cr6.lt) goto loc_820FD520;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD4A0;
	sub_820F8D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,590(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 590);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd520
	if (!ctx.cr0.eq) goto loc_820FD520;
	// b 0x820fd51c
	goto loc_820FD51C;
loc_820FD4B4:
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD4C4;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fd51c
	goto loc_820FD51C;
loc_820FD4CC:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD4E0;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd508
	if (!ctx.cr0.eq) goto loc_820FD508;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd508
	if (ctx.cr0.eq) goto loc_820FD508;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD504;
	sub_820F8D58(ctx, base);
	// b 0x820fd520
	goto loc_820FD520;
loc_820FD508:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD518;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FD51C:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD520:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd560
	if (!ctx.cr0.eq) goto loc_820FD560;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd560
	if (!ctx.cr0.eq) goto loc_820FD560;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd560
	if (!ctx.cr0.eq) goto loc_820FD560;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd560
	if (!ctx.cr0.eq) goto loc_820FD560;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd57c
	if (ctx.cr0.eq) goto loc_820FD57C;
loc_820FD560:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fd57c
	if (ctx.cr6.eq) goto loc_820FD57C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD57C;
	sub_820F8D58(ctx, base);
loc_820FD57C:
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

DEFINE_REX_FUNC(sub_82104738) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8210479c
	if (ctx.cr0.eq) goto loc_8210479C;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f10,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f9,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fmadds f12,f11,f12,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x82104790
	if (!ctx.cr6.lt) goto loc_82104790;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8210479c
	if (ctx.cr6.lt) goto loc_8210479C;
loc_82104790:
	// stfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
loc_8210479C:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82102c38
	ctx.lr = 0x821047D0;
	sub_82102C38(ctx, base);
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

DEFINE_REX_FUNC(sub_82109778) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821098d0
	if (ctx.cr6.eq) goto loc_821098D0;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821097d4
	if (!ctx.cr6.eq) goto loc_821097D4;
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821098d0
	if (!ctx.cr6.eq) goto loc_821098D0;
loc_821097D4:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821098d0
	if (ctx.cr6.eq) goto loc_821098D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// bl 0x8215bcc8
	ctx.lr = 0x821097F0;
	sub_8215BCC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,5780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821098c4
	if (ctx.cr6.eq) goto loc_821098C4;
	// lhz r11,50(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// bgt cr6,0x82109868
	if (ctx.cr6.gt) goto loc_82109868;
	// beq cr6,0x821098b8
	if (ctx.cr6.eq) goto loc_821098B8;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bgt cr6,0x82109848
	if (ctx.cr6.gt) goto loc_82109848;
	// beq cr6,0x82109840
	if (ctx.cr6.eq) goto loc_82109840;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82109860
	if (ctx.cr6.eq) goto loc_82109860;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82109840
	if (ctx.cr6.eq) goto loc_82109840;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x821098c0
	if (ctx.cr6.eq) goto loc_821098C0;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x821098c4
	if (!ctx.cr6.eq) goto loc_821098C4;
loc_82109840:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821098c4
	goto loc_821098C4;
loc_82109848:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82109860
	if (ctx.cr6.eq) goto loc_82109860;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82109860
	if (ctx.cr6.eq) goto loc_82109860;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// bne cr6,0x821098c4
	if (!ctx.cr6.eq) goto loc_821098C4;
loc_82109860:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x821098c4
	goto loc_821098C4;
loc_82109868:
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bgt cr6,0x82109898
	if (ctx.cr6.gt) goto loc_82109898;
	// beq cr6,0x82109890
	if (ctx.cr6.eq) goto loc_82109890;
	// cmpwi cr6,r11,75
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 75, ctx.xer);
	// beq cr6,0x82109890
	if (ctx.cr6.eq) goto loc_82109890;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x821098c0
	if (ctx.cr6.eq) goto loc_821098C0;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x821098b8
	if (ctx.cr6.eq) goto loc_821098B8;
	// b 0x821098c4
	goto loc_821098C4;
loc_82109890:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x821098c4
	goto loc_821098C4;
loc_82109898:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// beq cr6,0x821098c0
	if (ctx.cr6.eq) goto loc_821098C0;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// ble cr6,0x821098c4
	if (!ctx.cr6.gt) goto loc_821098C4;
	// cmpwi cr6,r11,130
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 130, ctx.xer);
	// ble cr6,0x82109860
	if (!ctx.cr6.gt) goto loc_82109860;
	// cmpwi cr6,r11,201
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 201, ctx.xer);
	// bne cr6,0x821098c4
	if (!ctx.cr6.eq) goto loc_821098C4;
loc_821098B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821098c4
	goto loc_821098C4;
loc_821098C0:
	// li r5,4
	ctx.r5.s64 = 4;
loc_821098C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821096e8
	ctx.lr = 0x821098D0;
	sub_821096E8(ctx, base);
loc_821098D0:
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

DEFINE_REX_FUNC(sub_82110FA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lbz r3,23952(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 23952);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821113A0) {
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
	// lwz r31,128(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821113dc
	if (ctx.cr6.eq) goto loc_821113DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821113CC;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821113D4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
loc_821113DC:
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

DEFINE_REX_FUNC(sub_82112FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82112FC0;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// beq cr6,0x82113040
	if (ctx.cr6.eq) goto loc_82113040;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,30124
	ctx.r6.s64 = ctx.r11.s64 + 30124;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82113014;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82113040
	if (ctx.cr0.eq) goto loc_82113040;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82112380
	ctx.lr = 0x8211303C;
	sub_82112380(ctx, base);
	// b 0x82113044
	goto loc_82113044;
loc_82113040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82113044:
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

DEFINE_REX_FUNC(sub_82114C68) {
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
	ctx.lr = 0x82114C70;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x82114C78;
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// bgt cr6,0x82114ddc
	if (ctx.cr6.gt) goto loc_82114DDC;
	// cmplwi cr6,r7,21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 21, ctx.xer);
	// bge cr6,0x82114cbc
	if (!ctx.cr6.lt) goto loc_82114CBC;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82114cc0
	goto loc_82114CC0;
loc_82114CBC:
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_82114CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x82114CC8;
	sub_821EB2C0(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82114ddc
	if (ctx.cr6.eq) goto loc_82114DDC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x82114d38
	if (ctx.cr6.eq) goto loc_82114D38;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bne cr6,0x82114d8c
	if (!ctx.cr6.eq) goto loc_82114D8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x82114D04;
	sub_822D55F8(ctx, base);
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x82114D2C;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// b 0x82114d8c
	goto loc_82114D8C;
loc_82114D38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x82114D4C;
	sub_822D55F8(ctx, base);
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x82114D74;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f31,f13,f0,f31
	f31.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// fnmsubs f28,f12,f0,f28
	f28.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -f28.f64)));
loc_82114D8C:
	// stfd f29,64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f30,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// addi r3,r11,31016
	ctx.r3.s64 = ctx.r11.s64 + 31016;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82114DD4;
	sub_821EACB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82114DDC;
	sub_821EACB0(ctx, base);
loc_82114DDC:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x82114DE8;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82119318) {
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
	ctx.lr = 0x82119320;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82119334;
	sub_822D5870(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,256(r31)
	REX_STORE_U32(r31.u32 + 256, r28.u32);
	// beq cr6,0x82119460
	if (ctx.cr6.eq) goto loc_82119460;
	// addi r4,r31,260
	ctx.r4.s64 = r31.s64 + 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82119200
	ctx.lr = 0x82119354;
	sub_82119200(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82119458
	if (!ctx.cr0.eq) goto loc_82119458;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,328(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// lfs f13,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,2332(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2332);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f12,312(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f9,292(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82119458
	if (ctx.cr6.lt) goto loc_82119458;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,32348(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32348);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82119458
	if (!ctx.cr6.lt) goto loc_82119458;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x82119458
	if (ctx.cr6.lt) goto loc_82119458;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82119458
	if (!ctx.cr6.lt) goto loc_82119458;
	// lis r30,-32166
	r30.s64 = -2108030976;
	// li r29,1
	r29.s64 = 1;
	// lwz r3,7844(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 7844);
	// lbz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x821193f4
	if (ctx.cr6.eq) goto loc_821193F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82119450
	if (!ctx.cr6.eq) goto loc_82119450;
loc_821193F4:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211940c
	if (ctx.cr6.eq) goto loc_8211940C;
	// bl 0x821f0388
	ctx.lr = 0x82119404;
	sub_821F0388(ctx, base);
	// stw r3,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r3.u32);
	// lwz r3,7844(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 7844);
loc_8211940C:
	// li r11,336
	ctx.r11.s64 = 336;
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,340
	ctx.r10.s64 = 340;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfiwx f0,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// lwz r11,7844(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7844);
	// lfs f0,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// lwz r11,7844(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7844);
	// stw r29,348(r11)
	REX_STORE_U32(ctx.r11.u32 + 348, r29.u32);
	// lfs f13,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,7844(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7844);
	// fnmsubs f0,f13,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f0,352(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 352, temp.u32);
loc_82119450:
	// stw r29,284(r31)
	REX_STORE_U32(r31.u32 + 284, r29.u32);
	// b 0x8211945c
	goto loc_8211945C;
loc_82119458:
	// stw r28,284(r31)
	REX_STORE_U32(r31.u32 + 284, r28.u32);
loc_8211945C:
	// stw r28,280(r31)
	REX_STORE_U32(r31.u32 + 280, r28.u32);
loc_82119460:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8211F5C8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f5f4
	if (ctx.cr6.eq) goto loc_8211F5F4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8211F5F4:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e1f50
	ctx.lr = 0x8211F61C;
	sub_820E1F50(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,-7072
	ctx.r10.s64 = ctx.r10.s64 + -7072;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// lfs f0,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8211f6f0
	if (!ctx.cr0.eq) goto loc_8211F6F0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// ori r11,r8,3696
	ctx.r11.u64 = ctx.r8.u64 | 3696;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r10,r11,284
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8211f6f0
	if (!ctx.cr0.eq) goto loc_8211F6F0;
	// lfs f2,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x8211F698;
	sub_820E0130(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e22e8
	ctx.lr = 0x8211F6A4;
	sub_820E22E8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e0130
	ctx.lr = 0x8211F6B4;
	sub_820E0130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f6cc
	if (ctx.cr6.eq) goto loc_8211F6CC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8211F6CC:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x8211f6e4
	if (!ctx.cr6.eq) goto loc_8211F6E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8211f6e8
	goto loc_8211F6E8;
loc_8211F6E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8211F6E8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8211f70c
	goto loc_8211F70C;
loc_8211F6F0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8211F70C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8211f730
	if (!ctx.cr6.eq) goto loc_8211F730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8211f740
	goto loc_8211F740;
loc_8211F730:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8211f75c
	if (!ctx.cr6.eq) goto loc_8211F75C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
loc_8211F740:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8211f75c
	if (!ctx.cr6.gt) goto loc_8211F75C;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_8211F75C:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,29428(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 29428);
	// bl 0x8211f508
	ctx.lr = 0x8211F76C;
	sub_8211F508(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-30328
	ctx.r6.s64 = ctx.r10.s64 + -30328;
	// addi r8,r11,-4368
	ctx.r8.s64 = ctx.r11.s64 + -4368;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8211F794;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211f7a8
	if (ctx.cr0.eq) goto loc_8211F7A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8211F7A8:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8211f7bc
	if (ctx.cr6.eq) goto loc_8211F7BC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8211f7f4
	if (!ctx.cr6.eq) goto loc_8211F7F4;
loc_8211F7BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-30340
	ctx.r6.s64 = ctx.r11.s64 + -30340;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8211F7E0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211f7f4
	if (ctx.cr0.eq) goto loc_8211F7F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-30360
	ctx.r11.s64 = ctx.r11.s64 + -30360;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8211F7F4:
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

DEFINE_REX_FUNC(sub_82128AA8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x82128AB0;
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f29.u64);
	// stfd f30,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82128d40
	if (ctx.cr6.lt) goto loc_82128D40;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lha r11,28(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82128d40
	if (!ctx.cr6.lt) goto loc_82128D40;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r20,r11,1
	r20.s64 = ctx.r11.s64 + 1;
	// bgt cr6,0x82128b18
	if (ctx.cr6.gt) goto loc_82128B18;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// b 0x82128b1c
	goto loc_82128B1C;
loc_82128B18:
	// fmr f29,f13
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f13.f64;
loc_82128B1C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82128b2c
	if (ctx.cr6.lt) goto loc_82128B2C;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// b 0x82128b30
	goto loc_82128B30;
loc_82128B2C:
	// fmr f30,f13
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f13.f64;
loc_82128B30:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r24,1
	r24.s64 = 1;
	// blt cr6,0x82128b40
	if (ctx.cr6.lt) goto loc_82128B40;
	// li r24,-1
	r24.s64 = -1;
loc_82128B40:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r23,4(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r22,6(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// bne cr6,0x82128b70
	if (!ctx.cr6.eq) goto loc_82128B70;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// b 0x82128b78
	goto loc_82128B78;
loc_82128B70:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_82128B78:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r21,-1
	r21.s64 = -1;
	// lfs f31,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_82128B84:
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// lwz r8,8(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82128BA4:
	// rlwinm r6,r10,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bge cr6,0x82128bd0
	if (!ctx.cr6.lt) goto loc_82128BD0;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// b 0x82128bf0
	goto loc_82128BF0;
loc_82128BD0:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// ble cr6,0x82128bf4
	if (!ctx.cr6.gt) goto loc_82128BF4;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
loc_82128BF0:
	// bne cr6,0x82128ba4
	if (!ctx.cr6.eq) goto loc_82128BA4;
loc_82128BF4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82128BF8:
	// rlwinm r7,r11,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bge cr6,0x82128c24
	if (!ctx.cr6.lt) goto loc_82128C24;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// b 0x82128c44
	goto loc_82128C44;
loc_82128C24:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x82128c48
	if (!ctx.cr6.gt) goto loc_82128C48;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
loc_82128C44:
	// bne cr6,0x82128bf8
	if (!ctx.cr6.eq) goto loc_82128BF8;
loc_82128C48:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// bne cr6,0x82128c5c
	if (!ctx.cr6.eq) goto loc_82128C5C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82128C5C:
	// mullw r26,r11,r24
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// mullw r11,r10,r24
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bgt cr6,0x82128d04
	if (ctx.cr6.gt) goto loc_82128D04;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r28,r24,r24
	r28.s64 = int64_t(r24.s32) * int64_t(r24.s32);
	// rlwinm r27,r24,6,0,25
	r27.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
loc_82128C84:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x82128ce4
	goto loc_82128CE4;
loc_82128C90:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// beq cr6,0x82128ce0
	if (ctx.cr6.eq) goto loc_82128CE0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82128908
	ctx.lr = 0x82128CC4;
	sub_82128908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82128ce0
	if (ctx.cr0.eq) goto loc_82128CE0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82128ce0
	if (!ctx.cr6.lt) goto loc_82128CE0;
	// lhz r21,0(r31)
	r21.u64 = REX_LOAD_U16(r31.u32 + 0);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_82128CE0:
	// lhzu r11,2(r31)
	ea = 2 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
loc_82128CE4:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82128c90
	if (!ctx.cr6.eq) goto loc_82128C90;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bge cr6,0x82128d18
	if (!ctx.cr6.lt) goto loc_82128D18;
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
	// add r30,r27,r30
	r30.u64 = r27.u64 + r30.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// ble cr6,0x82128c84
	if (!ctx.cr6.gt) goto loc_82128C84;
loc_82128D04:
	// addic. r20,r20,-1
	ctx.xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble 0x82128d40
	if (!ctx.cr0.gt) goto loc_82128D40;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// b 0x82128b84
	goto loc_82128B84;
loc_82128D18:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x82128d24
	if (ctx.cr6.eq) goto loc_82128D24;
	// stfs f31,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r15.u32 + 0, temp.u32);
loc_82128D24:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x820e2028
	ctx.lr = 0x82128D38;
	sub_820E2028(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// b 0x82128d44
	goto loc_82128D44;
loc_82128D40:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82128D44:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_82131D00) {
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
	ctx.lr = 0x82131D08;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x82131D10;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// beq cr6,0x82131d50
	if (ctx.cr6.eq) goto loc_82131D50;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r30,r11,3440
	r30.s64 = ctx.r11.s64 + 3440;
	// addi r11,r8,3488
	ctx.r11.s64 = ctx.r8.s64 + 3488;
	// addi r29,r9,3424
	r29.s64 = ctx.r9.s64 + 3424;
	// addi r31,r10,3464
	r31.s64 = ctx.r10.s64 + 3464;
	// b 0x82131d70
	goto loc_82131D70;
loc_82131D50:
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r30,r8,3544
	r30.s64 = ctx.r8.s64 + 3544;
	// addi r11,r11,3616
	ctx.r11.s64 = ctx.r11.s64 + 3616;
	// addi r29,r9,3512
	r29.s64 = ctx.r9.s64 + 3512;
	// addi r31,r10,3584
	r31.s64 = ctx.r10.s64 + 3584;
loc_82131D70:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82131D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x82131D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82131dc0
	if (ctx.cr6.eq) goto loc_82131DC0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82131df4
	if (!ctx.cr6.eq) goto loc_82131DF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, f30.f64)));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// ble cr6,0x82131df0
	if (!ctx.cr6.gt) goto loc_82131DF0;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// b 0x82131dd8
	goto loc_82131DD8;
loc_82131DC0:
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, f28.f64);
	// bge cr6,0x82131df0
	if (!ctx.cr6.lt) goto loc_82131DF0;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
loc_82131DD8:
	// bctrl 
	ctx.lr = 0x82131DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x82131DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82131df4
	goto loc_82131DF4;
loc_82131DF0:
	// bctrl 
	ctx.lr = 0x82131DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x82131E00;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82134D40) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x82134D64;
	sub_821B0030(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// addi r8,r11,-8304
	ctx.r8.s64 = ctx.r11.s64 + -8304;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r9,8340
	ctx.r9.u64 = ctx.r9.u64 | 8340;
	// lis r7,85
	ctx.r7.s64 = 5570560;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// ori r7,r7,8356
	ctx.r7.u64 = ctx.r7.u64 | 8356;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f2,16200(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16200);
	ctx.f2.f64 = double(temp.f32);
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lfs f1,2340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x82134DA8;
	sub_821FF668(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82136340) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x821363a8
	if (ctx.cr6.eq) goto loc_821363A8;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// addi r7,r7,22000
	ctx.r7.s64 = ctx.r7.s64 + 22000;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r7,r10,10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r6
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lha r3,14(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// blr 
	return;
loc_821363A8:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r7,21824
	ctx.r7.s64 = ctx.r7.s64 + 21824;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhax r11,r8,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,22(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213EB28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,102
	ctx.r8.s64 = 102;
	// addi r6,r3,42
	ctx.r6.s64 = ctx.r3.s64 + 42;
loc_8213EB38:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8213EB44:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213eb8c
	if (ctx.cr6.eq) goto loc_8213EB8C;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// b 0x8213eb90
	goto loc_8213EB90;
loc_8213EB8C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8213EB90:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213ebb4
	if (ctx.cr6.eq) goto loc_8213EBB4;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stbx r5,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u8);
	// sthx r5,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u16);
loc_8213EBB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8213eb44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213EB44;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r8,162
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 162, ctx.xer);
	// blt cr6,0x8213eb38
	if (ctx.cr6.lt) goto loc_8213EB38;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821425D8) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x821425E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// li r22,-1
	r22.s64 = -1;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x82145404
	if (ctx.cr6.gt) goto loc_82145404;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-25328
	ctx.r12.s64 = ctx.r12.s64 + -25328;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,9760
	ctx.r12.s64 = ctx.r12.s64 + 9760;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82142620;
	case 1:
		goto loc_8214288C;
	case 2:
		goto loc_82142AF8;
	case 3:
		goto loc_82142F6C;
	case 4:
		goto loc_82143450;
	case 5:
		goto loc_8214360C;
	case 6:
		goto loc_82143A8C;
	case 7:
		goto loc_82143D00;
	case 8:
		goto loc_82144280;
	case 9:
		goto loc_82144680;
	case 10:
		goto loc_82145404;
	case 11:
		goto loc_821447A8;
	case 12:
		goto loc_82144A58;
	case 13:
		goto loc_82144C3C;
	case 14:
		goto loc_82145144;
	case 15:
		goto loc_8214526C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82142620:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r26,r11,22984
	r26.s64 = ctx.r11.s64 + 22984;
	// addi r29,r10,20388
	r29.s64 = ctx.r10.s64 + 20388;
	// li r27,0
	r27.s64 = 0;
	// lbz r11,22984(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22984);
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// li r30,3
	r30.s64 = 3;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82142700
	if (ctx.cr0.eq) goto loc_82142700;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x8214266C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x8214267C;
	sub_82132E40(ctx, base);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82142700
	if (!ctx.cr0.eq) goto loc_82142700;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stbx r27,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r23.u8);
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// stbx r30,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r30.u8);
	// subfe r10,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r8,r8,1024
	ctx.r8.u64 = ctx.r8.u64 | 67108864;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stwx r8,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82142704
	goto loc_82142704;
loc_82142700:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82142704:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821427bc
	if (ctx.cr0.eq) goto loc_821427BC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x82142730;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142740;
	sub_82132E40(ctx, base);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821427bc
	if (!ctx.cr0.eq) goto loc_821427BC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stbx r27,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r27.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r31.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
loc_821427BC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x821427E8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821427FC;
	sub_82132E40(ctx, base);
	// lbz r11,1(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142870
	if (!ctx.cr0.eq) goto loc_82142870;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// stbx r23,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r23.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82142870:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r23
	r22.u64 = r23.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_8214288C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r27,r11,22984
	r27.s64 = ctx.r11.s64 + 22984;
	// addi r29,r10,20388
	r29.s64 = ctx.r10.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82142968
	if (ctx.cr0.eq) goto loc_82142968;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821428D4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821428E4;
	sub_82132E40(ctx, base);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82142968
	if (!ctx.cr0.eq) goto loc_82142968;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r23,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r23.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// stbx r23,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r23.u8);
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stbx r30,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r30.u8);
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// b 0x8214296c
	goto loc_8214296C;
loc_82142968:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8214296C:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82142a24
	if (ctx.cr0.eq) goto loc_82142A24;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82142998;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x821429A8;
	sub_82132E40(ctx, base);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82142a24
	if (!ctx.cr0.eq) goto loc_82142A24;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r23.u8);
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r31,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r31.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
loc_82142A24:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82142A50;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142A64;
	sub_82132E40(ctx, base);
	// lbz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142adc
	if (!ctx.cr0.eq) goto loc_82142ADC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// li r27,0
	r27.s64 = 0;
	// stbx r31,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82142ADC:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r31
	r22.u64 = r31.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82142AF8:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r26,r11,22984
	r26.s64 = ctx.r11.s64 + 22984;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// addi r29,r10,20388
	r29.s64 = ctx.r10.s64 + 20388;
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82142c70
	if (ctx.cr0.eq) goto loc_82142C70;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142B40;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82142B50;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x82142B60;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142B70;
	sub_82132E40(ctx, base);
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142bf0
	if (!ctx.cr0.eq) goto loc_82142BF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// stbx r31,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r23.u8);
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82142bf4
	goto loc_82142BF4;
loc_82142BF0:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82142BF4:
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142c74
	if (!ctx.cr0.eq) goto loc_82142C74;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stbx r31,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r31.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82142c74
	goto loc_82142C74;
loc_82142C70:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82142C74:
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82142d2c
	if (ctx.cr0.eq) goto loc_82142D2C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142CA4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82142CB4;
	sub_82132E40(ctx, base);
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142d2c
	if (!ctx.cr0.eq) goto loc_82142D2C;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stbx r31,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r30.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r31.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82142D2C:
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// li r27,0
	r27.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82142e98
	if (ctx.cr0.eq) goto loc_82142E98;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142D60;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82142D70;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142D80;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82132e40
	ctx.lr = 0x82142D94;
	sub_82132E40(ctx, base);
	// lbz r11,10(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 10);
	// li r22,10
	r22.s64 = 10;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142e0c
	if (!ctx.cr0.eq) goto loc_82142E0C;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stbx r22,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r22.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r23,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r23.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82142E0C:
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142e84
	if (!ctx.cr0.eq) goto loc_82142E84;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stbx r31,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r30.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r31.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82142E84:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lbz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82142e98
	if (!ctx.cr0.eq) goto loc_82142E98;
	// stb r23,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, r23.u8);
loc_82142E98:
	// lbz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82142EC8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82142EDC;
	sub_82132E40(ctx, base);
	// lbz r11,3(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82142f50
	if (!ctx.cr0.eq) goto loc_82142F50;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stbx r30,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r30.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82142F50:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r30
	r22.u64 = r30.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82142F6C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r25,r11,22984
	r25.s64 = ctx.r11.s64 + 22984;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// addi r29,r10,20388
	r29.s64 = ctx.r10.s64 + 20388;
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82143044
	if (ctx.cr0.eq) goto loc_82143044;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82142FB4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82142FC4;
	sub_82132E40(ctx, base);
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143044
	if (!ctx.cr0.eq) goto loc_82143044;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// stbx r30,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r23.u8);
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82143048
	goto loc_82143048;
loc_82143044:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82143048:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82143198
	if (ctx.cr0.eq) goto loc_82143198;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82143078;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82143088;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82143098;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x821430A8;
	sub_82132E40(ctx, base);
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143120
	if (!ctx.cr0.eq) goto loc_82143120;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r30.u8);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143120:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143198
	if (!ctx.cr0.eq) goto loc_82143198;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r30,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143198:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// li r27,0
	r27.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821432c0
	if (ctx.cr0.eq) goto loc_821432C0;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r10,r11,23000
	ctx.r10.s64 = ctx.r11.s64 + 23000;
	// lwz r9,23912(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 23912);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
loc_821431D4:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821431f8
	if (ctx.cr6.lt) goto loc_821431F8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,804
	ctx.r7.s64 = ctx.r10.s64 + 804;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x821431d4
	if (!ctx.cr6.gt) goto loc_821431D4;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_821431F8:
	// cmpwi cr6,r8,72
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 72, ctx.xer);
	// blt cr6,0x821432c0
	if (ctx.cr6.lt) goto loc_821432C0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x821432c0
	if (!ctx.cr6.eq) goto loc_821432C0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x8214321C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82132e40
	ctx.lr = 0x82143230;
	sub_82132E40(ctx, base);
	// lbz r11,11(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 11);
	// li r26,11
	r26.s64 = 11;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821432a8
	if (!ctx.cr0.eq) goto loc_821432A8;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821432A8:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,11(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821432c0
	if (!ctx.cr0.eq) goto loc_821432C0;
	// stb r23,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, r23.u8);
loc_821432C0:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// li r26,4
	r26.s64 = 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214337c
	if (ctx.cr0.eq) goto loc_8214337C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x821432F4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82132e40
	ctx.lr = 0x82143304;
	sub_82132E40(ctx, base);
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214337c
	if (!ctx.cr0.eq) goto loc_8214337C;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r30,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r26.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_8214337C:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x821433AC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82132e40
	ctx.lr = 0x821433C0;
	sub_82132E40(ctx, base);
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143434
	if (!ctx.cr0.eq) goto loc_82143434;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r23,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r23.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143434:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82143450:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r28,r10,22984
	r28.s64 = ctx.r10.s64 + 22984;
	// addi r31,r11,20388
	r31.s64 = ctx.r11.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82143530
	if (ctx.cr0.eq) goto loc_82143530;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82132e40
	ctx.lr = 0x82143494;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821434A4;
	sub_82132E40(ctx, base);
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82143530
	if (!ctx.cr0.eq) goto loc_82143530;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r31,188
	ctx.r7.s64 = r31.s64 + 188;
	// addi r10,r31,188
	ctx.r10.s64 = r31.s64 + 188;
	// addi r8,r31,188
	ctx.r8.s64 = r31.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r29,2
	r29.s64 = 2;
	// stbx r10,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r23,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r23.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r29,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r29.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// b 0x82143534
	goto loc_82143534;
loc_82143530:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82143534:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82143560;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x82143574;
	sub_82132E40(ctx, base);
	// lbz r11,5(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 5);
	// li r26,5
	r26.s64 = 5;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821435f0
	if (!ctx.cr0.eq) goto loc_821435F0;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,188
	ctx.r6.s64 = r31.s64 + 188;
	// addi r8,r31,188
	ctx.r8.s64 = r31.s64 + 188;
	// addi r10,r31,188
	ctx.r10.s64 = r31.s64 + 188;
	// addi r11,r31,188
	ctx.r11.s64 = r31.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stbx r10,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r23.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821435F0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_8214360C:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// li r26,5
	r26.s64 = 5;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821436ec
	if (ctx.cr0.eq) goto loc_821436EC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x82143658;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82143668;
	sub_82132E40(ctx, base);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821436ec
	if (!ctx.cr0.eq) goto loc_821436EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// stbx r26,r5,r6
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r5,r7
	REX_STORE_U8(ctx.r5.u32 + ctx.r7.u32, r23.u8);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r5,r8
	REX_STORE_U8(ctx.r5.u32 + ctx.r8.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r5,r4
	REX_STORE_U8(ctx.r5.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// b 0x821436f0
	goto loc_821436F0;
loc_821436EC:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821436F0:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821437a8
	if (ctx.cr0.eq) goto loc_821437A8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x8214371C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x8214372C;
	sub_82132E40(ctx, base);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821437a8
	if (!ctx.cr0.eq) goto loc_821437A8;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
loc_821437A8:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821438fc
	if (ctx.cr0.eq) goto loc_821438FC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x821437D4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x821437E4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x821437F4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82132e40
	ctx.lr = 0x82143804;
	sub_82132E40(ctx, base);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82143880
	if (!ctx.cr0.eq) goto loc_82143880;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
loc_82143880:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821438fc
	if (!ctx.cr0.eq) goto loc_821438FC;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r10,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
loc_821438FC:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821439b4
	if (ctx.cr0.eq) goto loc_821439B4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x82143928;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x82143938;
	sub_82132E40(ctx, base);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821439b4
	if (!ctx.cr0.eq) goto loc_821439B4;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r26.u8);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r30.u8);
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r10,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
loc_821439B4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x821439E0;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82132e40
	ctx.lr = 0x821439F4;
	sub_82132E40(ctx, base);
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
	// li r26,6
	r26.s64 = 6;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143a70
	if (!ctx.cr0.eq) goto loc_82143A70;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r27,0
	r27.s64 = 0;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r23,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r23.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143A70:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82143A8C:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
	// li r26,6
	r26.s64 = 6;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82143b6c
	if (ctx.cr0.eq) goto loc_82143B6C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82132e40
	ctx.lr = 0x82143AD8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82143AE8;
	sub_82132E40(ctx, base);
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82143b6c
	if (!ctx.cr0.eq) goto loc_82143B6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r23.u8);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
	// b 0x82143b70
	goto loc_82143B70;
loc_82143B6C:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82143B70:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82143c28
	if (ctx.cr0.eq) goto loc_82143C28;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82132e40
	ctx.lr = 0x82143B9C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82143BAC;
	sub_82132E40(ctx, base);
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82143c28
	if (!ctx.cr0.eq) goto loc_82143C28;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 6);
loc_82143C28:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x82143C54;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82143C68;
	sub_82132E40(ctx, base);
	// lbz r11,7(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 7);
	// li r26,7
	r26.s64 = 7;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143ce4
	if (!ctx.cr0.eq) goto loc_82143CE4;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r10,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r23.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143CE4:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82143D00:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r24,r10,22984
	r24.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// lbz r10,7(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 7);
	// li r26,7
	r26.s64 = 7;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82143e7c
	if (ctx.cr0.eq) goto loc_82143E7C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82143D4C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82143D5C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x82143D6C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82143D7C;
	sub_82132E40(ctx, base);
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143dfc
	if (!ctx.cr0.eq) goto loc_82143DFC;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r23.u8);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r31.u8);
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82143e00
	goto loc_82143E00;
loc_82143DFC:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82143E00:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143e80
	if (!ctx.cr0.eq) goto loc_82143E80;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82143e80
	goto loc_82143E80;
loc_82143E7C:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82143E80:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// li r27,0
	r27.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82143ff4
	if (ctx.cr0.eq) goto loc_82143FF4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82143EB4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82132e40
	ctx.lr = 0x82143EC8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82143EDC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82143EEC;
	sub_82132E40(ctx, base);
	// lbz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 12);
	// li r25,12
	r25.s64 = 12;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143f64
	if (!ctx.cr0.eq) goto loc_82143F64;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r25,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r25.u8);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143F64:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143fdc
	if (!ctx.cr0.eq) goto loc_82143FDC;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82143FDC:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r25
	r22.u64 = r25.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82143ff4
	if (!ctx.cr0.eq) goto loc_82143FF4;
	// stb r23,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, r23.u8);
loc_82143FF4:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821440ac
	if (ctx.cr0.eq) goto loc_821440AC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82144024;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82144034;
	sub_82132E40(ctx, base);
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821440ac
	if (!ctx.cr0.eq) goto loc_821440AC;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821440AC:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82144168
	if (ctx.cr0.eq) goto loc_82144168;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x821440DC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x821440EC;
	sub_82132E40(ctx, base);
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144168
	if (!ctx.cr0.eq) goto loc_82144168;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r10,5
	ctx.r10.s64 = 5;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r10,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144168:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821441a8
	if (ctx.cr0.eq) goto loc_821441A8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82144198;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x821441A8;
	sub_82132E40(ctx, base);
loc_821441A8:
	// lbz r11,7(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82132e40
	ctx.lr = 0x821441D8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82132e40
	ctx.lr = 0x821441EC;
	sub_82132E40(ctx, base);
	// lbz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 8);
	// li r26,8
	r26.s64 = 8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144264
	if (!ctx.cr0.eq) goto loc_82144264;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r23,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r23.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144264:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82144280:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r25,r10,22984
	r25.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// lbz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 8);
	// li r26,8
	r26.s64 = 8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214435c
	if (ctx.cr0.eq) goto loc_8214435C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82132e40
	ctx.lr = 0x821442CC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821442DC;
	sub_82132E40(ctx, base);
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214435c
	if (!ctx.cr0.eq) goto loc_8214435C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r23.u8);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82144360
	goto loc_82144360;
loc_8214435C:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82144360:
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82144418
	if (ctx.cr0.eq) goto loc_82144418;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82132e40
	ctx.lr = 0x82144390;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x821443A0;
	sub_82132E40(ctx, base);
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144418
	if (!ctx.cr0.eq) goto loc_82144418;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144418:
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,59
	ctx.r11.s64 = ctx.r11.s64 + 59;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821444d0
	if (ctx.cr0.eq) goto loc_821444D0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82132e40
	ctx.lr = 0x82144448;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82144458;
	sub_82132E40(ctx, base);
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821444d0
	if (!ctx.cr0.eq) goto loc_821444D0;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_821444D0:
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821445a8
	if (ctx.cr0.eq) goto loc_821445A8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82144504;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82132e40
	ctx.lr = 0x82144518;
	sub_82132E40(ctx, base);
	// lbz r11,9(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 9);
	// li r26,9
	r26.s64 = 9;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144590
	if (!ctx.cr0.eq) goto loc_82144590;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r23,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r23.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144590:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,9(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821445a8
	if (!ctx.cr0.eq) goto loc_821445A8;
	// stb r23,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, r23.u8);
loc_821445A8:
	// lbz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82132e40
	ctx.lr = 0x821445D8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82132e40
	ctx.lr = 0x821445EC;
	sub_82132E40(ctx, base);
	// lbz r11,14(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 14);
	// li r26,14
	r26.s64 = 14;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144664
	if (!ctx.cr0.eq) goto loc_82144664;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r27,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r27.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144664:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82144680:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// li r26,9
	r26.s64 = 9;
	// lbz r11,9(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 9);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82144760
	if (ctx.cr0.eq) goto loc_82144760;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82132e40
	ctx.lr = 0x821446C8;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821446D8;
	sub_82132E40(ctx, base);
	// lbz r11,9(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 9);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82144760
	if (!ctx.cr0.eq) goto loc_82144760;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r10,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,9(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 9);
	// b 0x82144764
	goto loc_82144764;
loc_82144760:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82144764:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82132e40
	ctx.lr = 0x82144790;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x821447A0;
	sub_82132E40(ctx, base);
	// lbz r11,9(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 9);
	// b 0x82145390
	goto loc_82145390;
loc_821447A8:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// li r26,11
	r26.s64 = 11;
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82144928
	if (ctx.cr0.eq) goto loc_82144928;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82132e40
	ctx.lr = 0x821447F0;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82144800;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x82144810;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82144820;
	sub_82132E40(ctx, base);
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821448a8
	if (!ctx.cr0.eq) goto loc_821448A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r10,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
	// b 0x821448ac
	goto loc_821448AC;
loc_821448A8:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821448AC:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8214492c
	if (!ctx.cr0.eq) goto loc_8214492C;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r30.u8);
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r10,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
	// b 0x8214492c
	goto loc_8214492C;
loc_82144928:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8214492C:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821449e4
	if (ctx.cr0.eq) goto loc_821449E4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82132e40
	ctx.lr = 0x82144958;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82144968;
	sub_82132E40(ctx, base);
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821449e4
	if (!ctx.cr0.eq) goto loc_821449E4;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
loc_821449E4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82132e40
	ctx.lr = 0x82144A10;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82144A20;
	sub_82132E40(ctx, base);
	// lbz r11,11(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 11);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// b 0x821453c0
	goto loc_821453C0;
loc_82144A58:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// lbz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 12);
	// li r25,12
	r25.s64 = 12;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82144b38
	if (ctx.cr0.eq) goto loc_82144B38;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82132e40
	ctx.lr = 0x82144AA4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82144AB4;
	sub_82132E40(ctx, base);
	// lbz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 12);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82144b38
	if (!ctx.cr0.eq) goto loc_82144B38;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r25,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r25.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r23.u8);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 12);
	// b 0x82144b3c
	goto loc_82144B3C;
loc_82144B38:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82144B3C:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,59
	ctx.r10.s64 = ctx.r10.s64 + 59;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82144bf4
	if (ctx.cr0.eq) goto loc_82144BF4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82132e40
	ctx.lr = 0x82144B68;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82144B78;
	sub_82132E40(ctx, base);
	// lbz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 12);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82144bf4
	if (!ctx.cr0.eq) goto loc_82144BF4;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r25,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r25.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 12);
loc_82144BF4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82144c20
	if (!ctx.cr0.eq) goto loc_82144C20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
loc_82144C20:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r22,13
	r22.s64 = 13;
	// lbz r10,13(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,13(r11)
	REX_STORE_U8(ctx.r11.u32 + 13, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82144C3C:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r25,r10,22984
	r25.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r26,4
	r26.s64 = 4;
	// li r23,1
	r23.s64 = 1;
	// li r31,2
	r31.s64 = 2;
	// lbz r10,13(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 13);
	// li r30,3
	r30.s64 = 3;
	// li r27,13
	r27.s64 = 13;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82144e54
	if (ctx.cr0.eq) goto loc_82144E54;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82132e40
	ctx.lr = 0x82144C8C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82144C9C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x82144CAC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82144CBC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82132e40
	ctx.lr = 0x82144CCC;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82132e40
	ctx.lr = 0x82144CDC;
	sub_82132E40(ctx, base);
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144d5c
	if (!ctx.cr0.eq) goto loc_82144D5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r27,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r23.u8);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82144d60
	goto loc_82144D60;
loc_82144D5C:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82144D60:
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144dd8
	if (!ctx.cr0.eq) goto loc_82144DD8;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144DD8:
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144e58
	if (!ctx.cr0.eq) goto loc_82144E58;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r26.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x82144e58
	goto loc_82144E58;
loc_82144E54:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82144E58:
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,59
	ctx.r11.s64 = ctx.r11.s64 + 59;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82144f18
	if (ctx.cr0.eq) goto loc_82144F18;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82132e40
	ctx.lr = 0x82144E88;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82132e40
	ctx.lr = 0x82144E9C;
	sub_82132E40(ctx, base);
	// lbz r11,7(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 7);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144f18
	if (!ctx.cr0.eq) goto loc_82144F18;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r10,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r26,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r26.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144F18:
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145068
	if (ctx.cr0.eq) goto loc_82145068;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82132e40
	ctx.lr = 0x82144F48;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x82144F58;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82144F68;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82132e40
	ctx.lr = 0x82144F78;
	sub_82132E40(ctx, base);
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82144ff0
	if (!ctx.cr0.eq) goto loc_82144FF0;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r23,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r23.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82144FF0:
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82145068
	if (!ctx.cr0.eq) goto loc_82145068;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r30,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r30.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82145068:
	// lbz r11,13(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 13);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82132e40
	ctx.lr = 0x82145098;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82132e40
	ctx.lr = 0x821450AC;
	sub_82132E40(ctx, base);
	// lbz r11,15(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 15);
	// li r26,15
	r26.s64 = 15;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82145128
	if (!ctx.cr0.eq) goto loc_82145128;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// li r27,0
	r27.s64 = 0;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stbx r27,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r27.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r27,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r27.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r23,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r23.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82145128:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r22,r26
	r22.u64 = r26.u64;
	// lbz r10,15(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// stb r23,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, r23.u8);
	// b 0x82145404
	goto loc_82145404;
loc_82145144:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// li r26,14
	r26.s64 = 14;
	// lbz r11,14(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 14);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82145224
	if (ctx.cr0.eq) goto loc_82145224;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82132e40
	ctx.lr = 0x8214518C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x8214519C;
	sub_82132E40(ctx, base);
	// lbz r11,14(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 14);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82145224
	if (!ctx.cr0.eq) goto loc_82145224;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r10,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,14(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 14);
	// b 0x82145228
	goto loc_82145228;
loc_82145224:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82145228:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82132e40
	ctx.lr = 0x82145254;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x82145264;
	sub_82132E40(ctx, base);
	// lbz r11,14(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 14);
	// b 0x82145390
	goto loc_82145390;
loc_8214526C:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r10,22984
	r27.s64 = ctx.r10.s64 + 22984;
	// addi r29,r11,20388
	r29.s64 = ctx.r11.s64 + 20388;
	// li r31,2
	r31.s64 = 2;
	// li r30,3
	r30.s64 = 3;
	// li r26,15
	r26.s64 = 15;
	// lbz r11,15(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 15);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214534c
	if (ctx.cr0.eq) goto loc_8214534C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82132e40
	ctx.lr = 0x821452B4;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82132e40
	ctx.lr = 0x821452C4;
	sub_82132E40(ctx, base);
	// lbz r11,15(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 15);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8214534c
	if (!ctx.cr0.eq) goto loc_8214534C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r29,188
	ctx.r7.s64 = r29.s64 + 188;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r5,r29,188
	ctx.r5.s64 = r29.s64 + 188;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r26,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r10,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stbx r31,r6,r8
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r31.u8);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stbx r30,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, r30.u8);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lbz r11,15(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 15);
	// b 0x82145350
	goto loc_82145350;
loc_8214534C:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82145350:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145404
	if (ctx.cr0.eq) goto loc_82145404;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82132e40
	ctx.lr = 0x8214537C;
	sub_82132E40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82132e40
	ctx.lr = 0x8214538C;
	sub_82132E40(ctx, base);
	// lbz r11,15(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 15);
loc_82145390:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82145404
	if (!ctx.cr0.eq) goto loc_82145404;
	// addi r8,r29,188
	ctx.r8.s64 = r29.s64 + 188;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,188
	ctx.r6.s64 = r29.s64 + 188;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r26,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, r26.u8);
	// stbx r31,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, r31.u8);
loc_821453C0:
	// addi r11,r29,188
	ctx.r11.s64 = r29.s64 + 188;
	// addi r10,r29,188
	ctx.r10.s64 = r29.s64 + 188;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stbx r31,r7,r5
	REX_STORE_U8(ctx.r7.u32 + ctx.r5.u32, r31.u8);
	// stbx r30,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, r30.u8);
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82145404:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82211568) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12412(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12412);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822117B0) {
	REX_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r4,10456(r3)
	REX_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211D98) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10890);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822121D8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
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

DEFINE_REX_FUNC(sub_82212E80) {
	REX_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82212e94
	if (!ctx.cr0.eq) goto loc_82212E94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82212eac
	goto loc_82212EAC;
loc_82212E94:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82212ea8
	if (!ctx.cr6.eq) goto loc_82212EA8;
	// ori r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 32769;
	// b 0x82212eac
	goto loc_82212EAC;
loc_82212EA8:
	// ori r11,r11,49155
	ctx.r11.u64 = ctx.r11.u64 | 49155;
loc_82212EAC:
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r11,10684(r3)
	REX_STORE_U32(ctx.r3.u32 + 10684, ctx.r11.u32);
	// stw r10,10368(r3)
	REX_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// addi r9,r11,27412
	ctx.r9.s64 = ctx.r11.s64 + 27412;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,27388
	ctx.r4.s64 = ctx.r10.s64 + 27388;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | ctx.r12.u64;
	// std r8,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r11,27412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27412);
	// stw r11,13052(r3)
	REX_STORE_U32(ctx.r3.u32 + 13052, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13056(r3)
	REX_STORE_U32(ctx.r3.u32 + 13056, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,13060(r3)
	REX_STORE_U32(ctx.r3.u32 + 13060, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,13064(r3)
	REX_STORE_U32(ctx.r3.u32 + 13064, ctx.r11.u32);
	// b 0x82212de0
	sub_82212DE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82215B28) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215b50
	if (!ctx.cr6.eq) goto loc_82215B50;
	// bl 0x82215ab0
	ctx.lr = 0x82215B4C;
	sub_82215AB0(ctx, base);
	// b 0x82215b6c
	goto loc_82215B6C;
loc_82215B50:
	// bl 0x82215870
	ctx.lr = 0x82215B54;
	sub_82215870(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215b6c
	if (!ctx.cr0.eq) goto loc_82215B6C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x823cd250
	ctx.lr = 0x82215B6C;
	sub_823CD250(ctx, base);
loc_82215B6C:
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

DEFINE_REX_FUNC(sub_822173C0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8221741c
	if (ctx.cr6.eq) goto loc_8221741C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,27984(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 27984);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822173f0
	if (!ctx.cr6.lt) goto loc_822173F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12192);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82217434
	goto loc_82217434;
loc_822173F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,27980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27980);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,27976(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27976);
	ctx.f0.f64 = double(temp.f32);
	// lfd f2,27968(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 27968);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82217414;
	sub_822D5B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x82217460
	goto loc_82217460;
loc_8221741C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,27960(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 27960);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8221743c
	if (!ctx.cr6.lt) goto loc_8221743C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16316);
	ctx.f0.f64 = double(temp.f32);
loc_82217434:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x82217460
	goto loc_82217460;
loc_8221743C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,27952(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27952);
	// bl 0x822d5b48
	ctx.lr = 0x82217448;
	sub_822D5B48(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,27944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27944);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27980);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
loc_82217460:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221AD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8221AD88;
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r30,r11,310
	r30.u64 = ctx.r11.u64 | 310;
	// bne cr6,0x8221add4
	if (!ctx.cr6.eq) goto loc_8221ADD4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8221add4
	if (ctx.cr6.eq) goto loc_8221ADD4;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8221adcc
	if (!ctx.cr6.eq) goto loc_8221ADCC;
	// bl 0x82217980
	ctx.lr = 0x8221ADC4;
	sub_82217980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8221addc
	goto loc_8221ADDC;
loc_8221ADCC:
	// bl 0x82217938
	ctx.lr = 0x8221ADD0;
	sub_82217938(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8221ADD4:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bne cr6,0x8221ade8
	if (!ctx.cr6.eq) goto loc_8221ADE8;
loc_8221ADDC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82217808
	ctx.lr = 0x8221ADE4;
	sub_82217808(ctx, base);
	// b 0x8221adf0
	goto loc_8221ADF0;
loc_8221ADE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82217718
	ctx.lr = 0x8221ADF0;
	sub_82217718(ctx, base);
loc_8221ADF0:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221D118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x8221D120;
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
loc_8221D128:
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bge cr6,0x8221d1f8
	if (!ctx.cr6.lt) goto loc_8221D1F8;
	// addi r4,r27,-1
	ctx.r4.s64 = r27.s64 + -1;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_8221D140:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// lhz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + r29.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r3,r3,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r31,r31,3
	r31.u64 = __builtin_rotateleft32(r31.u32, 3);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8221D180:
	// lwz r26,-4(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8221d1b8
	if (!ctx.cr6.lt) goto loc_8221D1B8;
	// lwz r26,4(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8221d1b8
	if (!ctx.cr6.gt) goto loc_8221D1B8;
	// lwz r26,0(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x8221d1b8
	if (!ctx.cr6.lt) goto loc_8221D1B8;
	// lwz r26,8(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// ble cr6,0x8221d1b8
	if (!ctx.cr6.gt) goto loc_8221D1B8;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
loc_8221D1B8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x8221d180
	if (!ctx.cr6.eq) goto loc_8221D180;
	// rlwinm r9,r6,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// clrlwi r8,r6,3
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// dcbf r9,r7
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// blt cr6,0x8221d140
	if (ctx.cr6.lt) goto loc_8221D140;
loc_8221D1F8:
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221d128
	if (!ctx.cr6.eq) goto loc_8221D128;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82221F48) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82221b78
	ctx.lr = 0x82221F7C;
	sub_82221B78(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// bl 0x82215b80
	ctx.lr = 0x82222008;
	sub_82215B80(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r9,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82226458) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x822264f8
	if (!ctx.cr6.gt) goto loc_822264F8;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8222649C:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x8222649c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222649C;
loc_822264F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82226520
	if (ctx.cr6.eq) goto loc_82226520;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82226504:
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82226504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82226504;
loc_82226520:
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222E018) {
	REX_FUNC_PROLOGUE();
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// addi r11,r3,11512
	ctx.r11.s64 = ctx.r3.s64 + 11512;
	// lwz r9,4396(r10)
	ctx.r9.u64 = REX_MM_LOAD_U32(ctx.r10.u32 + 4396);
	// stw r9,11520(r3)
	REX_STORE_U32(ctx.r3.u32 + 11520, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = REX_QUERY_TIMEBASE();
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,11524(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 11524);
	// lwz r7,11520(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 11520);
	// stw r9,11516(r3)
	REX_STORE_U32(ctx.r3.u32 + 11516, ctx.r9.u32);
	// lwz r6,11024(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r5,11548(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 11548);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r6,112(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 112);
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stw r8,11528(r3)
	REX_STORE_U32(ctx.r3.u32 + 11528, ctx.r8.u32);
	// lwz r8,11024(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r8,112(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r8,11532(r3)
	REX_STORE_U32(ctx.r3.u32 + 11532, ctx.r8.u32);
	// lwz r8,16964(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16964);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r9,r9,10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(10));
	// stw r7,11524(r3)
	REX_STORE_U32(ctx.r3.u32 + 11524, ctx.r7.u32);
	// stw r8,11512(r3)
	REX_STORE_U32(ctx.r3.u32 + 11512, ctx.r8.u32);
	// stw r9,11536(r3)
	REX_STORE_U32(ctx.r3.u32 + 11536, ctx.r9.u32);
	// lwz r9,11024(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r8,116(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,11560(r3)
	REX_STORE_U32(ctx.r3.u32 + 11560, ctx.r9.u32);
	// beq cr6,0x8222e0ec
	if (ctx.cr6.eq) goto loc_8222E0EC;
	// lbz r9,11070(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 11070);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8222e0ec
	if (ctx.cr0.eq) goto loc_8222E0EC;
	// lwz r9,11024(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,3676(r10)
	ctx.r10.u64 = REX_MM_LOAD_U32(ctx.r10.u32 + 3676);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,120(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// beq cr6,0x8222e0d4
	if (ctx.cr6.eq) goto loc_8222E0D4;
	// lwz r9,11024(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,120(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// b 0x8222e0d8
	goto loc_8222E0D8;
loc_8222E0D4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8222E0D8:
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
loc_8222E0EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,11024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233E50) {
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
	ctx.lr = 0x82233E58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x824d477c
	ctx.lr = 0x82233E70;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82233eec
	if (!ctx.cr0.eq) goto loc_82233EEC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x824d3ecc
	ctx.lr = 0x82233EB0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82233ec0
	if (!ctx.cr0.lt) goto loc_82233EC0;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x82233ee4
	goto loc_82233EE4;
loc_82233EC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82233ee0
	if (!ctx.cr6.eq) goto loc_82233EE0;
	// bl 0x8220a878
	ctx.lr = 0x82233ECC;
	sub_8220A878(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82233ee4
	goto loc_82233EE4;
loc_82233EE0:
	// li r31,997
	r31.s64 = 997;
loc_82233EE4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d431c
	ctx.lr = 0x82233EEC;
	__imp__ObDereferenceObject(ctx, base);
loc_82233EEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82235120) {
	REX_FUNC_PROLOGUE();
	// lhz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8223513c
	if (!ctx.cr6.gt) goto loc_8223513C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8223513C:
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82235768) {
	REX_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824d486c
	__imp__NetDll_sendto(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82236340) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8223637c
	if (!ctx.cr6.lt) goto loc_8223637C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x8223639c
	goto loc_8223639C;
loc_8223637C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223638C;
	sub_822D4FA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8223639C:
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

DEFINE_REX_FUNC(sub_82236EB0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823cd980
	ctx.lr = 0x82236EE0;
	sub_823CD980(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8223b1d0
	ctx.lr = 0x82236EF0;
	sub_8223B1D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82236f10
	if (!ctx.cr0.lt) goto loc_82236F10;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82236F10:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r11,r30,44
	ctx.r11.s64 = r30.s64 + 44;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82236f2c
	if (ctx.cr6.eq) goto loc_82236F2C;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82236f30
	goto loc_82236F30;
loc_82236F2C:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82236F30:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
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

DEFINE_REX_FUNC(sub_82238D20) {
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
	ctx.lr = 0x82238D28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	r26.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x824d438c
	ctx.lr = 0x82238D4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cd980
	ctx.lr = 0x82238D5C;
	sub_823CD980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82238300
	ctx.lr = 0x82238D68;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82238d7c
	if (!ctx.cr0.eq) goto loc_82238D7C;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x82238e14
	goto loc_82238E14;
loc_82238D7C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8223dd68
	ctx.lr = 0x82238D94;
	sub_8223DD68(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82238e14
	if (ctx.cr0.lt) goto loc_82238E14;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r11,-5413
	ctx.r11.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r10,-1057
	ctx.r10.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r11,r11,61168
	ctx.r11.u64 = ctx.r11.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r10,r10,221
	ctx.r10.u64 = ctx.r10.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// and r9,r31,r12
	ctx.r9.u64 = r31.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82238e14
	if (ctx.cr6.eq) goto loc_82238E14;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,84
	ctx.r11.s64 = r30.s64 + 84;
loc_82238DD8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82238df8
	if (ctx.cr6.eq) goto loc_82238DF8;
	// lwz r9,212(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 212);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// rlwinm r9,r9,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82238e0c
	if (ctx.cr6.eq) goto loc_82238E0C;
loc_82238DF8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82238dd8
	if (ctx.cr6.lt) goto loc_82238DD8;
	// b 0x82238e14
	goto loc_82238E14;
loc_82238E0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	REX_STORE_U32(r30.u32 + 288, ctx.r11.u32);
loc_82238E14:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238E1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8223C6A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223C820) {
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
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_8223C834:
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
	// bne 0x8223c834
	if (!ctx.cr0.eq) goto loc_8223C834;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223c878
	if (!ctx.cr6.eq) goto loc_8223C878;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c878
	if (ctx.cr6.eq) goto loc_8223C878;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223C878:
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

DEFINE_REX_FUNC(sub_822405A8) {
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
	// bl 0x822d4e58
	ctx.lr = 0x822405B0;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7904(r1)
	ea = -7904 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x822405f0
	if (ctx.cr6.lt) goto loc_822405F0;
	// beq cr6,0x822405e8
	if (ctx.cr6.eq) goto loc_822405E8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x822405e0
	if (ctx.cr6.lt) goto loc_822405E0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,7904
	ctx.r1.s64 = ctx.r1.s64 + 7904;
	// b 0x822d4ea8
	return;
loc_822405E0:
	// li r30,32000
	r30.s64 = 32000;
	// b 0x822405f4
	goto loc_822405F4;
loc_822405E8:
	// li r30,24000
	r30.s64 = 24000;
	// b 0x822405f4
	goto loc_822405F4;
loc_822405F0:
	// li r30,16000
	r30.s64 = 16000;
loc_822405F4:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkhsb128 v62,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// li r8,64
	ctx.r8.s64 = 64;
	// vupklsb128 v61,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v60,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// lvx128 v59,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v57,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v56,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// lvx128 v55,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v54,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vupkhsb128 v53,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s16), simde_mm_load_si128((simde__m128i*)ctx.v59.s16))));
	// lvx128 v40,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v51,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// vcsxwfp128 v52,v61,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vupkhsb128 v50,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v49,v56,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vupklsb128 v48,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v47,v54,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vupkhsb128 v46,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,128
	ctx.r3.s64 = 128;
	// vcsxwfp128 v45,v53,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// li r11,144
	ctx.r11.s64 = 144;
	// vcsxwfp128 v44,v51,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v43,v50,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// li r10,160
	ctx.r10.s64 = 160;
	// vcsxwfp128 v42,v48,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// li r9,176
	ctx.r9.s64 = 176;
	// vcsxwfp128 v41,v46,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,208
	ctx.r7.s64 = 208;
	// lvx128 v39,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v37,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v36,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v35,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v33,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v32,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// vupklsb128 v63,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// addi r28,r1,208
	r28.s64 = ctx.r1.s64 + 208;
	// stvx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v62,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v40.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16))));
	// stvx128 v49,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v61,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// stvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v60,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v39.s16), simde_mm_load_si128((simde__m128i*)ctx.v39.s16))));
	// vupklsb128 v59,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s16)));
	// stvx128 v45,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v58,v38,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)ctx.v38.s16))));
	// stvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v57,v38,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s16)));
	// stvx128 v43,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v56,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16))));
	// stvx128 v42,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v55,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// stvx128 v41,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v54,v36,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v36.s16), simde_mm_load_si128((simde__m128i*)ctx.v36.s16))));
	// vupklsb128 v53,v36,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s16)));
	// vupkhsb128 v52,v35,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s16), simde_mm_load_si128((simde__m128i*)ctx.v35.s16))));
	// vupklsb128 v51,v35,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vupkhsb128 v50,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v34.s16), simde_mm_load_si128((simde__m128i*)ctx.v34.s16))));
	// vupklsb128 v49,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s16)));
	// vupkhsb128 v48,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v33.s16))));
	// vupklsb128 v47,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s16)));
	// vupkhsb128 v46,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16))));
	// vcsxwfp128 v44,v63,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vupklsb128 v45,v32,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s16)));
	// li r6,224
	ctx.r6.s64 = 224;
	// vcsxwfp128 v43,v62,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// li r4,240
	ctx.r4.s64 = 240;
	// vcsxwfp128 v42,v61,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// li r3,256
	ctx.r3.s64 = 256;
	// vcsxwfp128 v41,v60,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// li r11,272
	ctx.r11.s64 = 272;
	// vcsxwfp128 v40,v59,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// vcsxwfp128 v39,v58,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v38,v57,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// lvx128 v57,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v56,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// lvx128 v56,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v36,v55,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// lvx128 v55,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v35,v54,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// lvx128 v54,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v34,v53,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// vcsxwfp128 v33,v52,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// vcsxwfp128 v32,v51,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// vcsxwfp128 v63,v50,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// addi r28,r1,288
	r28.s64 = ctx.r1.s64 + 288;
	// vcsxwfp128 v62,v49,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// addi r27,r1,304
	r27.s64 = ctx.r1.s64 + 304;
	// vcsxwfp128 v61,v48,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// addi r26,r1,320
	r26.s64 = ctx.r1.s64 + 320;
	// vcsxwfp128 v60,v47,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// addi r25,r1,336
	r25.s64 = ctx.r1.s64 + 336;
	// vcsxwfp128 v59,v46,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// addi r24,r1,352
	r24.s64 = ctx.r1.s64 + 352;
	// vcsxwfp128 v58,v45,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// addi r23,r1,368
	r23.s64 = ctx.r1.s64 + 368;
	// addi r22,r1,384
	r22.s64 = ctx.r1.s64 + 384;
	// vupkhsb128 v53,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// addi r21,r1,400
	r21.s64 = ctx.r1.s64 + 400;
	// vupklsb128 v51,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// addi r20,r1,416
	r20.s64 = ctx.r1.s64 + 416;
	// vupkhsb128 v50,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// addi r19,r1,432
	r19.s64 = ctx.r1.s64 + 432;
	// vupklsb128 v49,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// addi r18,r1,448
	r18.s64 = ctx.r1.s64 + 448;
	// vupkhsb128 v48,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// vupklsb128 v47,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// vupkhsb128 v46,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stvx128 v44,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,288
	ctx.r10.s64 = 288;
	// stvx128 v43,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,304
	ctx.r9.s64 = 304;
	// stvx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v40,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,336
	ctx.r7.s64 = 336;
	// stvx128 v39,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,368
	r28.s64 = 368;
	// lvx128 v52,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,352
	ctx.r10.s64 = 352;
	// stvx128 v38,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,384
	r27.s64 = 384;
	// stvx128 v37,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v38,v53,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// lvx128 v45,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v36,v51,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// lvx128 v41,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v44,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s16)));
	// vupkhsb128 v42,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16))));
	// li r9,400
	ctx.r9.s64 = 400;
	// vupklsb128 v40,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// li r8,416
	ctx.r8.s64 = 416;
	// vupkhsb128 v39,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// vupklsb128 v37,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// vcsxwfp128 v34,v50,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vupkhsb128 v35,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// vcsxwfp128 v32,v49,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vupklsb128 v33,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// vupkhsb128 v63,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// vcsxwfp128 v62,v48,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vupklsb128 v61,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vcsxwfp128 v60,v47,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vcsxwfp128 v59,v46,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v56,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v44,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// lvx128 v47,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v42,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v46,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v40,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// lvx128 v45,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v39,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvx128 v44,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v37,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// vcsxwfp128 v52,v35,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// vcsxwfp128 v51,v33,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// vcsxwfp128 v50,v63,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// vcsxwfp128 v49,v61,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// addi r26,r1,624
	r26.s64 = ctx.r1.s64 + 624;
	// addi r25,r1,640
	r25.s64 = ctx.r1.s64 + 640;
	// vupkhsb128 v48,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// addi r24,r1,656
	r24.s64 = ctx.r1.s64 + 656;
	// vupklsb128 v43,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// addi r28,r1,672
	r28.s64 = ctx.r1.s64 + 672;
	// vupkhsb128 v42,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v47.s16))));
	// addi r27,r1,688
	r27.s64 = ctx.r1.s64 + 688;
	// vupklsb128 v41,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s16)));
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// vupkhsb128 v40,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16))));
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// stvx128 v38,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stvx128 v36,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// vupklsb128 v39,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// addi r23,r1,768
	r23.s64 = ctx.r1.s64 + 768;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r22,432
	r22.s64 = 432;
	// vupkhsb128 v38,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stvx128 v32,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v36,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// stvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v35,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v44.s16), simde_mm_load_si128((simde__m128i*)ctx.v44.s16))));
	// stvx128 v59,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v34,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// lvx128 v37,r5,r22
	ea = (ctx.r5.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v33,v48,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// stvx128 v58,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// vcsxwfp128 v62,v43,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v61,v42,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// li r11,464
	ctx.r11.s64 = 464;
	// li r10,480
	ctx.r10.s64 = 480;
	// vcsxwfp128 v60,v41,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// li r9,496
	ctx.r9.s64 = 496;
	// vupkhsb128 v32,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16))));
	// li r8,512
	ctx.r8.s64 = 512;
	// vupklsb128 v63,v37,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// lvx128 v58,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,528
	ctx.r7.s64 = 528;
	// li r6,544
	ctx.r6.s64 = 544;
	// vcsxwfp128 v59,v40,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)));
	// li r3,560
	ctx.r3.s64 = 560;
	// vupkhsb128 v55,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16))));
	// li r28,576
	r28.s64 = 576;
	// vupklsb128 v53,v58,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// addi r27,r1,800
	r27.s64 = ctx.r1.s64 + 800;
	// vcsxwfp128 v57,v39,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// addi r26,r1,816
	r26.s64 = ctx.r1.s64 + 816;
	// lvx128 v46,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// lvx128 v44,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// lvx128 v43,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// lvx128 v42,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,880
	ctx.r8.s64 = ctx.r1.s64 + 880;
	// lvx128 v41,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// lvx128 v40,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,912
	ctx.r6.s64 = ctx.r1.s64 + 912;
	// lvx128 v39,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r28,r1,944
	r28.s64 = ctx.r1.s64 + 944;
	// vcsxwfp128 v56,v38,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vcsxwfp128 v54,v36,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v35,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// vcsxwfp128 v51,v34,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// stvx128 v62,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v50,v32,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// addi r27,r1,976
	r27.s64 = ctx.r1.s64 + 976;
	// vcsxwfp128 v49,v63,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// stvx128 v61,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v55,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// addi r26,r1,992
	r26.s64 = ctx.r1.s64 + 992;
	// vcsxwfp128 v47,v53,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// stvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,592
	ctx.r11.s64 = 592;
	// stvx128 v59,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v38,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v38.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16))));
	// vupklsb128 v37,v46,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// li r10,608
	ctx.r10.s64 = 608;
	// vupkhsb128 v36,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16))));
	// li r9,624
	ctx.r9.s64 = 624;
	// stvx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v35,v45,v96
	simde_mm_store_si128((simde__m128i*)ctx.v35.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// lvx128 v34,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v33,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v44.s16), simde_mm_load_si128((simde__m128i*)ctx.v44.s16))));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v32,v44,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v63,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16))));
	// stvx128 v51,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v62,v43,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// stvx128 v50,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v61,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16))));
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v60,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// stvx128 v48,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v59,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// stvx128 v47,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v58,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vupkhsb128 v57,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v40.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16))));
	// vupklsb128 v56,v40,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// vupkhsb128 v55,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v39.s16), simde_mm_load_si128((simde__m128i*)ctx.v39.s16))));
	// lvx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupklsb128 v53,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s16)));
	// lvx128 v52,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsb128 v51,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v34.s16), simde_mm_load_si128((simde__m128i*)ctx.v34.s16))));
	// vupklsb128 v50,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s16)));
	// vcsxwfp128 v49,v38,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vupkhsb128 v48,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v47,v37,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vupklsb128 v46,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v45,v36,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vupkhsb128 v44,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16))));
	// vcsxwfp128 v43,v35,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vupklsb128 v42,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v41,v33,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v40,v32,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// addi r8,r1,1008
	ctx.r8.s64 = ctx.r1.s64 + 1008;
	// vcsxwfp128 v39,v63,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// addi r7,r1,1024
	ctx.r7.s64 = ctx.r1.s64 + 1024;
	// vcsxwfp128 v38,v62,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// vcsxwfp128 v37,v61,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// addi r5,r1,1056
	ctx.r5.s64 = ctx.r1.s64 + 1056;
	// vcsxwfp128 v36,v60,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// vcsxwfp128 v35,v59,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// vcsxwfp128 v34,v58,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// vcsxwfp128 v33,v57,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// vcsxwfp128 v32,v56,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// vcsxwfp128 v63,v55,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// addi r28,r1,1152
	r28.s64 = ctx.r1.s64 + 1152;
	// vcsxwfp128 v62,v53,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// addi r27,r1,1168
	r27.s64 = ctx.r1.s64 + 1168;
	// vcsxwfp128 v61,v51,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// addi r26,r1,1184
	r26.s64 = ctx.r1.s64 + 1184;
	// vcsxwfp128 v60,v50,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// addi r25,r1,1200
	r25.s64 = ctx.r1.s64 + 1200;
	// vcsxwfp128 v59,v48,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// addi r24,r1,1216
	r24.s64 = ctx.r1.s64 + 1216;
	// vcsxwfp128 v58,v46,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// addi r23,r1,1232
	r23.s64 = ctx.r1.s64 + 1232;
	// vcsxwfp128 v57,v44,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// addi r22,r1,1248
	r22.s64 = ctx.r1.s64 + 1248;
	// vcsxwfp128 v56,v42,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// addi r21,r1,1264
	r21.s64 = ctx.r1.s64 + 1264;
	// addi r20,r1,1280
	r20.s64 = ctx.r1.s64 + 1280;
	// stvx128 v49,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,1296
	r19.s64 = ctx.r1.s64 + 1296;
	// stvx128 v47,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,1312
	r18.s64 = ctx.r1.s64 + 1312;
	// stvx128 v45,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,1328
	r17.s64 = ctx.r1.s64 + 1328;
	// stvx128 v43,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,1344
	r16.s64 = ctx.r1.s64 + 1344;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,1360
	ctx.r8.s64 = ctx.r1.s64 + 1360;
	// stvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,320
	ctx.r7.s64 = 320;
	// stvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stvx128 v37,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v36,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,2640
	ctx.r4.s64 = ctx.r1.s64 + 2640;
	// stvx128 v35,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// stvx128 v34,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822413a0
	ctx.lr = 0x82240C4C;
	sub_822413A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82240c6c
	if (!ctx.cr6.eq) goto loc_82240C6C;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,1360
	ctx.r6.s64 = ctx.r1.s64 + 1360;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x82242150
	ctx.lr = 0x82240C6C;
	sub_82242150(ctx, base);
loc_82240C6C:
	// addi r1,r1,7904
	ctx.r1.s64 = ctx.r1.s64 + 7904;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8227EAA8) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227eae0
	if (ctx.cr6.eq) goto loc_8227EAE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EAE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227EAE0:
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227eb00
	if (ctx.cr6.eq) goto loc_8227EB00;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EB00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227EB00:
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

DEFINE_REX_FUNC(sub_82280110) {
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
	ctx.lr = 0x82280118;
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
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r30,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r30.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// sth r30,68(r31)
	REX_STORE_U16(r31.u32 + 68, r30.u16);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x82280170;
	sub_822D5870(ctx, base);
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// sth r30,56(r31)
	REX_STORE_U16(r31.u32 + 56, r30.u16);
	// sth r30,48(r31)
	REX_STORE_U16(r31.u32 + 48, r30.u16);
	// sth r30,58(r31)
	REX_STORE_U16(r31.u32 + 58, r30.u16);
	// beq cr6,0x822801b0
	if (ctx.cr6.eq) goto loc_822801B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822801B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822801B0:
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82284B48) {
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
	// bl 0x82215e78
	ctx.lr = 0x82284B6C;
	sub_82215E78(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284b84
	if (ctx.cr6.eq) goto loc_82284B84;
	// bl 0x82216cc8
	ctx.lr = 0x82284B7C;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82284B84:
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

DEFINE_REX_FUNC(sub_82285C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822878A8) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82287938
	if (ctx.cr6.lt) goto loc_82287938;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x82287938
	if (!ctx.cr6.lt) goto loc_82287938;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,7872
	ctx.r11.s64 = ctx.r11.s64 + 7872;
	// bne cr6,0x8228790c
	if (!ctx.cr6.eq) goto loc_8228790C;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82287940
	goto loc_82287940;
loc_8228790C:
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82287940
	goto loc_82287940;
loc_82287938:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82287940:
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

DEFINE_REX_FUNC(sub_82289DE0) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82289DFC:
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
	// bne 0x82289dfc
	if (!ctx.cr0.eq) goto loc_82289DFC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82289e3c
	if (!ctx.cr6.eq) goto loc_82289E3C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82289e3c
	if (ctx.cr6.eq) goto loc_82289E3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82285260
	ctx.lr = 0x82289E34;
	sub_82285260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82289E3C;
	sub_82255B70(ctx, base);
loc_82289E3C:
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

DEFINE_REX_FUNC(sub_8228C1F0) {
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
	ctx.lr = 0x8228C1F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228c2b0
	if (!ctx.cr6.eq) goto loc_8228C2B0;
	// addi r27,r3,100
	r27.s64 = ctx.r3.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228C218;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,72(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228c2a8
	if (ctx.cr6.eq) goto loc_8228C2A8;
	// lis r28,-32163
	r28.s64 = -2107834368;
	// lwz r10,31372(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 31372);
loc_8228C22C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r29,68(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8228c2a8
	if (ctx.cr6.eq) goto loc_8228C2A8;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8228c2a8
	if (ctx.cr6.eq) goto loc_8228C2A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228c29c
	if (!ctx.cr6.eq) goto loc_8228C29C;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c27c
	if (ctx.cr6.eq) goto loc_8228C27C;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
loc_8228C27C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228b750
	ctx.lr = 0x8228C288;
	sub_8228B750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228b2b0
	ctx.lr = 0x8228C290;
	sub_8228B2B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228C298;
	sub_82255B70(ctx, base);
	// lwz r10,31372(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 31372);
loc_8228C29C:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8228c22c
	if (!ctx.cr6.eq) goto loc_8228C22C;
loc_8228C2A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228C2B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8228C2B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82290980) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v31{};
	uint32_t ea{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,22336
	ctx.r11.s64 = ctx.r11.s64 + 22336;
	// addi r9,r9,22256
	ctx.r9.s64 = ctx.r9.s64 + 22256;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r10,22240
	ctx.r10.s64 = ctx.r10.s64 + 22240;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r8,22272
	ctx.r11.s64 = ctx.r8.s64 + 22272;
	// vspltw128 v60,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v13,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v4,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v1,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v5,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v7,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v31,v61,1
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v2,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vspltw128 v3,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v8,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v9,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v10,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v11,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vrfin128 v12,v60
	simde_mm_store_ps(ctx.v12.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v60.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vnmsubfp v0,v13,v12,v1
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v1.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v63,v0,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v63,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v13,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v13,v31,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v12,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v2,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v3,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v4,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v0,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v5,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v6,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v0,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v7,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v8,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v0,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v12,v9,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v13,v10,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v1,v11,v0,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82297E90) {
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
	ctx.lr = 0x82297E98;
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// stw r11,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
	// bl 0x822958e0
	ctx.lr = 0x82297ECC;
	sub_822958E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x822d4fa0
	ctx.lr = 0x82297EE0;
	sub_822D4FA0(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r31,1
	r31.s64 = 1;
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
loc_82297EEC:
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
loc_82297EF0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82297d88
	ctx.lr = 0x82297EF8;
	sub_82297D88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82297f48
	if (ctx.cr0.eq) goto loc_82297F48;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295928
	ctx.lr = 0x82297F0C;
	sub_82295928(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82297fe8
	if (ctx.cr0.eq) goto loc_82297FE8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x82297F24;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82297F34;
	sub_822D4FA0(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295a50
	ctx.lr = 0x82297F40;
	sub_82295A50(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82297ef0
	goto loc_82297EF0;
loc_82297F48:
	// ld r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// stdu r11,8(r27)
	ea = 8 + r27.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	r27.u32 = ea;
	// beq cr6,0x82297f98
	if (ctx.cr6.eq) goto loc_82297F98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82297fa0
	if (ctx.cr6.eq) goto loc_82297FA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295928
	ctx.lr = 0x82297F70;
	sub_82295928(ctx, base);
	// addi r29,r3,-32
	r29.s64 = ctx.r3.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x82297F84;
	sub_822D4FA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x82295a50
	ctx.lr = 0x82297F94;
	sub_82295A50(ctx, base);
	// b 0x82297ef0
	goto loc_82297EF0;
loc_82297F98:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82297fa4
	if (!ctx.cr6.eq) goto loc_82297FA4;
loc_82297FA0:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82297FA4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x82297FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82297fec
	if (ctx.cr0.lt) goto loc_82297FEC;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r31,1
	r31.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ld r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// bne cr6,0x82297eec
	if (!ctx.cr6.eq) goto loc_82297EEC;
	// b 0x82297fec
	goto loc_82297FEC;
loc_82297FE8:
	// li r29,-8
	r29.s64 = -8;
loc_82297FEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295900
	ctx.lr = 0x82297FF4;
	sub_82295900(ctx, base);
	// lwz r3,496(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x822d7b58
	ctx.lr = 0x82297FFC;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8229E984) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229E9B0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229e9c4
	if (!ctx.cr0.eq) goto loc_8229E9C4;
loc_8229E9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229E9C4:
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229e9bc
	if (ctx.cr6.eq) goto loc_8229E9BC;
	// b 0x8229dec0
	sub_8229DEC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229F210) {
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
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229f250
	if (!ctx.cr6.eq) goto loc_8229F250;
	// li r3,12076
	ctx.r3.s64 = 12076;
	// bl 0x822c80d0
	ctx.lr = 0x8229F238;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8229f248
	if (ctx.cr0.eq) goto loc_8229F248;
	// bl 0x8229f1b8
	ctx.lr = 0x8229F244;
	sub_8229F1B8(ctx, base);
	// b 0x8229f24c
	goto loc_8229F24C;
loc_8229F248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229F24C:
	// stw r3,31456(r31)
	REX_STORE_U32(r31.u32 + 31456, ctx.r3.u32);
loc_8229F250:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_822A0160) {
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
	ctx.lr = 0x822A0168;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x822a01e8
	if (!ctx.cr6.gt) goto loc_822A01E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r3
	r27.u64 = r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8229fea0
	ctx.lr = 0x822A01AC;
	sub_8229FEA0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x8229fea0
	ctx.lr = 0x822A01C0;
	sub_8229FEA0(ctx, base);
	// subf r29,r29,r28
	r29.u64 = r28.u64 - r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.u64 = r28.u64 - r26.u64;
	// bl 0x8229fea0
	ctx.lr = 0x822A01D8;
	sub_8229FEA0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x822a01ec
	goto loc_822A01EC;
loc_822A01E8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_822A01EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8229fea0
	ctx.lr = 0x822A01F4;
	sub_8229FEA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822A3080) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A3088;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822c80d0
	ctx.lr = 0x822A3098;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a30a8
	if (ctx.cr0.eq) goto loc_822A30A8;
	// bl 0x8229d5f8
	ctx.lr = 0x822A30A4;
	sub_8229D5F8(ctx, base);
	// b 0x822a30ac
	goto loc_822A30AC;
loc_822A30A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A30AC:
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8229dec0
	ctx.lr = 0x822A30BC;
	sub_8229DEC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8229deb8
	ctx.lr = 0x822A30C8;
	sub_8229DEB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// clrlwi r6,r29,16
	ctx.r6.u64 = r29.u32 & 0xFFFF;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A30EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, ctx.r10.u32);
	// stw r10,80(r8)
	REX_STORE_U32(ctx.r8.u32 + 80, ctx.r10.u32);
	// stw r9,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r9.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A5290) {
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
	// bl 0x822d4e74
	ctx.lr = 0x822A5298;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f18
	ctx.lr = 0x822A52A0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a52d0
	if (ctx.cr6.eq) goto loc_822A52D0;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a52d0
	if (ctx.cr6.eq) goto loc_822A52D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a5614
	goto loc_822A5614;
loc_822A52D0:
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822c80d0
	ctx.lr = 0x822A52D8;
	sub_822C80D0(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a52ec
	if (ctx.cr0.eq) goto loc_822A52EC;
	// bl 0x822a2f80
	ctx.lr = 0x822A52E8;
	sub_822A2F80(ctx, base);
	// b 0x822a52f0
	goto loc_822A52F0;
loc_822A52EC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822A52F0:
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822a3958
	ctx.lr = 0x822A5310;
	sub_822A3958(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x8229e9d8
	ctx.lr = 0x822A531C;
	sub_8229E9D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r10,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r10.u32);
	// stw r10,80(r9)
	REX_STORE_U32(ctx.r9.u32 + 80, ctx.r10.u32);
	// stw r26,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, r26.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f0,136(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f0,140(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822A5368;
	sub_822C80D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f28,23032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23032);
	f28.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,23028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 23028);
	f24.f64 = double(temp.f32);
	// lfs f29,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	f29.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// li r24,16
	r24.s64 = 16;
	// lfs f31,23024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 23024);
	f31.f64 = double(temp.f32);
	// addi r27,r3,2
	r27.s64 = ctx.r3.s64 + 2;
	// lfs f26,16372(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16372);
	f26.f64 = double(temp.f32);
	// lfs f27,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f27.f64 = double(temp.f32);
loc_822A53AC:
	// mr r25,r27
	r25.u64 = r27.u64;
	// li r23,16
	r23.s64 = 16;
loc_822A53B4:
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r29,r25,-1023
	r29.s64 = r25.s64 + -1023;
loc_822A53BC:
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r10.s64 = r30.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// subfic r10,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fmuls f25,f0,f26
	f25.f64 = double(float(ctx.f0.f64 * f26.f64));
	// fmuls f23,f13,f26
	f23.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmuls f22,f12,f26
	f22.f64 = double(float(ctx.f12.f64 * f26.f64));
	// bl 0x822d6060
	ctx.lr = 0x822A5438;
	sub_822D6060(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fmadds f23,f0,f29,f23
	f23.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f23.f64)));
	// bl 0x822d6060
	ctx.lr = 0x822A5458;
	sub_822D6060(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fmadds f21,f0,f29,f25
	f21.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f25.f64)));
	// bl 0x822d6060
	ctx.lr = 0x822A5478;
	sub_822D6060(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fmadds f22,f0,f29,f22
	f22.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f22.f64)));
	// bl 0x822d6060
	ctx.lr = 0x822A5498;
	sub_822D6060(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fmuls f23,f23,f24
	ctx.fpscr.disableFlushMode();
	f23.f64 = double(float(f23.f64 * f24.f64));
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fmadds f25,f0,f29,f25
	f25.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f25.f64)));
	// bl 0x822d4d68
	ctx.lr = 0x822A54C0;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsqrts f13,f21
	ctx.f13.f64 = double(float(sqrt(f21.f64)));
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fmuls f23,f0,f13
	f23.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x822d4c88
	ctx.lr = 0x822A54D4;
	sub_822D4C88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsqrts f13,f21
	ctx.f13.f64 = double(float(sqrt(f21.f64)));
	// fmuls f22,f22,f24
	f22.f64 = double(float(f22.f64 * f24.f64));
	// fmuls f21,f0,f13
	f21.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x822d4d68
	ctx.lr = 0x822A54EC;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsqrts f13,f25
	ctx.f13.f64 = double(float(sqrt(f25.f64)));
	// fmuls f20,f0,f13
	f20.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x822d4c88
	ctx.lr = 0x822A5500;
	sub_822D4C88(ctx, base);
	// fmuls f0,f23,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f23.f64 * f28.f64));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f13,f20,f28
	ctx.f13.f64 = double(float(f20.f64 * f28.f64));
	// fmuls f12,f21,f28
	ctx.f12.f64 = double(float(f21.f64 * f28.f64));
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsqrts f10,f25
	ctx.f10.f64 = double(float(sqrt(f25.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lbz r11,143(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// stfd f0,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// fmuls f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lbz r10,143(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 143);
	// stb r10,1022(r29)
	REX_STORE_U8(r29.u32 + 1022, ctx.r10.u8);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lbz r9,151(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// stb r9,1021(r29)
	REX_STORE_U8(r29.u32 + 1021, ctx.r9.u8);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lbz r8,151(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 151);
	// stb r8,1023(r29)
	REX_STORE_U8(r29.u32 + 1023, ctx.r8.u8);
	// stbu r11,1024(r29)
	ea = 1024 + r29.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r29.u32 = ea;
	// blt cr6,0x822a53bc
	if (ctx.cr6.lt) goto loc_822A53BC;
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r25,r25,64
	r25.s64 = r25.s64 + 64;
	// bne 0x822a53b4
	if (!ctx.cr0.eq) goto loc_822A53B4;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x822a53ac
	if (!ctx.cr0.eq) goto loc_822A53AC;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822c80d0
	ctx.lr = 0x822A5588;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a5598
	if (ctx.cr0.eq) goto loc_822A5598;
	// bl 0x8229d5f8
	ctx.lr = 0x822A5594;
	sub_8229D5F8(ctx, base);
	// b 0x822a559c
	goto loc_822A559C;
loc_822A5598:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822A559C:
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A55C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8229e878
	ctx.lr = 0x822A55E0;
	sub_8229E878(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r26,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r26.u32);
	// stw r26,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r26.u32);
	// stw r26,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r26.u32);
	// beq cr6,0x822a5610
	if (ctx.cr6.eq) goto loc_822A5610;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822A5610;
	sub_822C80A8(ctx, base);
loc_822A5610:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822A5614:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f64
	ctx.lr = 0x822A5620;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822B68B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822b68e0
	if (ctx.cr6.lt) goto loc_822B68E0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// blr 
	return;
loc_822B68D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
loc_822B68E0:
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b68d4
	if (!ctx.cr6.eq) goto loc_822B68D4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B85B0) {
	REX_FUNC_PROLOGUE();
	// b 0x822c4b70
	sub_822C4B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B85F0) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,256(r11)
	REX_STORE_U8(ctx.r11.u32 + 256, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B8668) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822b8684
	if (!ctx.cr6.gt) goto loc_822B8684;
loc_822B867C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822B8684:
	// bge cr6,0x822b8690
	if (!ctx.cr6.lt) goto loc_822B8690;
loc_822B8688:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822B8690:
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822b867c
	if (ctx.cr6.gt) goto loc_822B867C;
	// blt cr6,0x822b8688
	if (ctx.cr6.lt) goto loc_822B8688;
	// lbz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822b867c
	if (ctx.cr6.gt) goto loc_822B867C;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9830) {
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
	ctx.lr = 0x822B984C;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9860
	if (!ctx.cr0.eq) goto loc_822B9860;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b98c8
	if (ctx.cr0.eq) goto loc_822B98C8;
loc_822B9860:
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
	// addi r7,r11,376
	ctx.r7.s64 = ctx.r11.s64 + 376;
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
	// stfs f0,6020(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r6,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r6.u8);
loc_822B98C8:
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

DEFINE_REX_FUNC(sub_822BBE70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f7
	ctx.f5.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f4,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f13,f8,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmuls f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f13,f4,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f11,f5,f6,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f11.f64)));
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bbee4
	if (!ctx.cr6.gt) goto loc_822BBEE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BBEE4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C1BC0) {
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
	// bl 0x822bbb08
	ctx.lr = 0x822C1BDC;
	sub_822BBB08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// addi r11,r11,24280
	ctx.r11.s64 = ctx.r11.s64 + 24280;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19272
	ctx.r11.s64 = ctx.r9.s64 + -19272;
	// addi r10,r10,27816
	ctx.r10.s64 = ctx.r10.s64 + 27816;
	// lis r8,-32212
	ctx.r8.s64 = -2111045632;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// lis r6,-32212
	ctx.r6.s64 = -2111045632;
	// addi r9,r8,-19272
	ctx.r9.s64 = ctx.r8.s64 + -19272;
	// addi r10,r7,-2800
	ctx.r10.s64 = ctx.r7.s64 + -2800;
	// addi r11,r6,-2800
	ctx.r11.s64 = ctx.r6.s64 + -2800;
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// lis r3,-32220
	ctx.r3.s64 = -2111569920;
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// addi r11,r3,27816
	ctx.r11.s64 = ctx.r3.s64 + 27816;
	// li r30,4
	r30.s64 = 4;
	// addi r9,r5,-2160
	ctx.r9.s64 = ctx.r5.s64 + -2160;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// addi r10,r4,27816
	ctx.r10.s64 = ctx.r4.s64 + 27816;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822C4F30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822160e0
	sub_822160E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C5928) {
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
	ctx.lr = 0x822C5930;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,9216
	ctx.r9.s64 = 603979776;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// addi r4,r8,23328
	ctx.r4.s64 = ctx.r8.s64 + 23328;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stb r10,176(r31)
	REX_STORE_U8(r31.u32 + 176, ctx.r10.u8);
	// stb r11,177(r31)
	REX_STORE_U8(r31.u32 + 177, ctx.r11.u8);
	// stb r11,260(r31)
	REX_STORE_U8(r31.u32 + 260, ctx.r11.u8);
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// stb r11,259(r31)
	REX_STORE_U8(r31.u32 + 259, ctx.r11.u8);
	// stb r11,258(r31)
	REX_STORE_U8(r31.u32 + 258, ctx.r11.u8);
	// stb r11,257(r31)
	REX_STORE_U8(r31.u32 + 257, ctx.r11.u8);
	// stb r11,256(r31)
	REX_STORE_U8(r31.u32 + 256, ctx.r11.u8);
	// bl 0x822d4fa0
	ctx.lr = 0x822C59D4;
	sub_822D4FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822c5658
	ctx.lr = 0x822C59F8;
	sub_822C5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822C6BC0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822aac90
	ctx.lr = 0x822C6BDC;
	sub_822AAC90(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822c6bf8
	if (ctx.cr0.eq) goto loc_822C6BF8;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822c6c0c
	goto loc_822C6C0C;
loc_822C6BF8:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,31464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
loc_822C6C0C:
	// bctrl 
	ctx.lr = 0x822C6C10;
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

DEFINE_REX_FUNC(sub_822C8198) {
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
	ctx.lr = 0x822C81A0;
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
	// bl 0x822c80d8
	ctx.lr = 0x822C81B4;
	sub_822C80D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c81c4
	if (!ctx.cr0.eq) goto loc_822C81C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c8358
	goto loc_822C8358;
loc_822C81C4:
	// lbz r29,3(r30)
	r29.u64 = REX_LOAD_U8(r30.u32 + 3);
	// bl 0x822c9130
	ctx.lr = 0x822C81CC;
	sub_822C9130(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addic r9,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r9.s64 = r29.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c81f4
	if (ctx.cr6.eq) goto loc_822C81F4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C81EC;
	sub_822C9160(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C81F4;
	sub_822C9160(ctx, base);
loc_822C81F4:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r8,r30,16
	ctx.r8.s64 = r30.s64 + 16;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// subfc r9,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// blt cr6,0x822c8284
	if (ctx.cr6.lt) goto loc_822C8284;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 12);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822c82bc
	if (ctx.cr0.eq) goto loc_822C82BC;
	// b 0x822c82b4
	goto loc_822C82B4;
loc_822C8284:
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 12);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822c82bc
	if (ctx.cr0.eq) goto loc_822C82BC;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_822C82B4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_822C82BC:
	// lbz r29,3(r30)
	r29.u64 = REX_LOAD_U8(r30.u32 + 3);
	// bl 0x822c9130
	ctx.lr = 0x822C82C4;
	sub_822C9130(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addic r9,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r9.s64 = r29.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c8338
	if (ctx.cr6.eq) goto loc_822C8338;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c8338
	if (!ctx.cr6.gt) goto loc_822C8338;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_822C82EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C82F8;
	sub_822C9160(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822c8310
	if (ctx.cr6.lt) goto loc_822C8310;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C8310;
	sub_822C9160(ctx, base);
loc_822C8310:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c8324
	if (ctx.cr6.eq) goto loc_822C8324;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C8324;
	sub_822C9160(ctx, base);
loc_822C8324:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c82ec
	if (ctx.cr6.lt) goto loc_822C82EC;
loc_822C8338:
	// bl 0x822c9130
	ctx.lr = 0x822C833C;
	sub_822C9130(ctx, base);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c8354
	if (ctx.cr6.eq) goto loc_822C8354;
	// bl 0x822c9130
	ctx.lr = 0x822C8350;
	sub_822C9130(ctx, base);
	// stb r3,3(r30)
	REX_STORE_U8(r30.u32 + 3, ctx.r3.u8);
loc_822C8354:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C8358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CE588) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce5a8
	if (ctx.cr6.eq) goto loc_822CE5A8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8220aa00
	ctx.lr = 0x822CE5A8;
	sub_8220AA00(ctx, base);
loc_822CE5A8:
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

DEFINE_REX_FUNC(sub_822CE9B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CE9B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ce9d8
	if (!ctx.cr6.eq) goto loc_822CE9D8;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x822cea1c
	goto loc_822CEA1C;
loc_822CE9D8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE9F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lbz r31,3(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CEA18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822CEA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D1270;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d12a4
	if (ctx.cr6.eq) goto loc_822D12A4;
	// lhz r29,16(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 16);
loc_822D12A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D12B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1F08) {
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
	// bl 0x822d18b8
	ctx.lr = 0x822D1F24;
	sub_822D18B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1f34
	if (!ctx.cr0.eq) goto loc_822D1F34;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d1f84
	goto loc_822D1F84;
loc_822D1F34:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,25
	ctx.r4.s64 = r31.s64 + 25;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,29(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 29);
	// bctrl 
	ctx.lr = 0x822D1F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D1F84:
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

DEFINE_REX_FUNC(sub_822D3BE0) {
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
	ctx.lr = 0x822D3BE8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x822d18b8
	ctx.lr = 0x822D3C08;
	sub_822D18B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3e40
	if (ctx.cr0.eq) goto loc_822D3E40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1f08
	ctx.lr = 0x822D3C18;
	sub_822D1F08(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822d3c34
	if (ctx.cr0.eq) goto loc_822D3C34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822d2bd0
	ctx.lr = 0x822D3C2C;
	sub_822D2BD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3e40
	if (ctx.cr0.eq) goto loc_822D3E40;
loc_822D3C34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1c50
	ctx.lr = 0x822D3C3C;
	sub_822D1C50(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822d3c54
	if (ctx.cr6.eq) goto loc_822D3C54;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_822D3C54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1ba0
	ctx.lr = 0x822D3C5C;
	sub_822D1BA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3e20
	if (ctx.cr0.eq) goto loc_822D3E20;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3c78
	if (ctx.cr0.eq) goto loc_822D3C78;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0d90
	ctx.lr = 0x822D3C78;
	sub_822D0D90(ctx, base);
loc_822D3C78:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d38e0
	ctx.lr = 0x822D3C80;
	sub_822D38E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0de0
	ctx.lr = 0x822D3C88;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d3e14
	if (ctx.cr0.eq) goto loc_822D3E14;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x822d3d9c
	if (ctx.cr6.eq) goto loc_822D3D9C;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x822d3d48
	if (ctx.cr6.eq) goto loc_822D3D48;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x822d3cf8
	if (ctx.cr6.eq) goto loc_822D3CF8;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x822d3cbc
	if (ctx.cr6.eq) goto loc_822D3CBC;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// bne cr6,0x822d3e40
	if (!ctx.cr6.eq) goto loc_822D3E40;
	// b 0x822d3e28
	goto loc_822D3E28;
loc_822D3CBC:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822d2700
	ctx.lr = 0x822D3CCC;
	sub_822D2700(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d3e40
	if (!ctx.cr0.eq) goto loc_822D3E40;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0b78
	ctx.lr = 0x822D3CF4;
	sub_822D0B78(ctx, base);
	// b 0x822d3d8c
	goto loc_822D3D8C;
loc_822D3CF8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x822d3d0c
	if (ctx.cr6.gt) goto loc_822D3D0C;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0d90
	ctx.lr = 0x822D3D0C;
	sub_822D0D90(ctx, base);
loc_822D3D0C:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822d0c08
	ctx.lr = 0x822D3D18;
	sub_822D0C08(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bge cr6,0x822d3e40
	if (!ctx.cr6.lt) goto loc_822D3E40;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822d3e40
	if (!ctx.cr6.lt) goto loc_822D3E40;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x822d0d90
	ctx.lr = 0x822D3D38;
	sub_822D0D90(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,256(r10)
	REX_STORE_U8(ctx.r10.u32 + 256, ctx.r11.u8);
	// b 0x822d3e40
	goto loc_822D3E40;
loc_822D3D48:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0cd8
	ctx.lr = 0x822D3D54;
	sub_822D0CD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3e40
	if (!ctx.cr0.eq) goto loc_822D3E40;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d3e40
	if (!ctx.cr0.eq) goto loc_822D3E40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2ce8
	ctx.lr = 0x822D3D8C;
	sub_822D2CE8(ctx, base);
loc_822D3D8C:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0d90
	ctx.lr = 0x822D3D98;
	sub_822D0D90(ctx, base);
	// b 0x822d3e40
	goto loc_822D3E40;
loc_822D3D9C:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822d2700
	ctx.lr = 0x822D3DAC;
	sub_822D2700(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d3e40
	if (!ctx.cr0.eq) goto loc_822D3E40;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0b78
	ctx.lr = 0x822D3DD4;
	sub_822D0B78(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822d0d90
	ctx.lr = 0x822D3DE0;
	sub_822D0D90(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d2ce8
	ctx.lr = 0x822D3DEC;
	sub_822D2CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1e98
	ctx.lr = 0x822D3DF4;
	sub_822D1E98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmuls f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822d3e40
	goto loc_822D3E40;
loc_822D3E14:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822d3e40
	if (!ctx.cr6.eq) goto loc_822D3E40;
	// b 0x822d3e30
	goto loc_822D3E30;
loc_822D3E20:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3e30
	if (ctx.cr0.eq) goto loc_822D3E30;
loc_822D3E28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1718
	ctx.lr = 0x822D3E30;
	sub_822D1718(ctx, base);
loc_822D3E30:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x822d3e40
	if (ctx.cr6.gt) goto loc_822D3E40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1718
	ctx.lr = 0x822D3E40;
	sub_822D1718(ctx, base);
loc_822D3E40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savevmx_111) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_16) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_99) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DB8D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r3,31864(r11)
	REX_STORE_U32(ctx.r11.u32 + 31864, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBA28) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822e1b00
	ctx.lr = 0x822DBA48;
	sub_822E1B00(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822dba74
	if (!ctx.cr0.eq) goto loc_822DBA74;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dba74
	if (ctx.cr6.eq) goto loc_822DBA74;
	// bl 0x822db6c0
	ctx.lr = 0x822DBA60;
	sub_822DB6C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822dba74
	if (ctx.cr0.eq) goto loc_822DBA74;
	// bl 0x822db6c0
	ctx.lr = 0x822DBA6C;
	sub_822DB6C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822DBA74:
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

DEFINE_REX_FUNC(sub_822DE658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822DE660;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32172
	r30.s64 = -2108424192;
	// lis r11,-17600
	ctx.r11.s64 = -1153433600;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r31,r11,58958
	r31.u64 = ctx.r11.u64 | 58958;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,-2144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -2144);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x822de694
	if (ctx.cr6.eq) goto loc_822DE694;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stw r11,-2140(r10)
	REX_STORE_U32(ctx.r10.u32 + -2140, ctx.r11.u32);
	// b 0x822de6f0
	goto loc_822DE6F0;
loc_822DE694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ce2b0
	ctx.lr = 0x822DE69C;
	sub_823CE2B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// xor r29,r10,r11
	r29.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x823cd280
	ctx.lr = 0x822DE6AC;
	sub_823CD280(ctx, base);
	// xor r29,r3,r29
	r29.u64 = ctx.r3.u64 ^ r29.u64;
	// bl 0x822094c8
	ctx.lr = 0x822DE6B4;
	sub_822094C8(ctx, base);
	// xor r29,r3,r29
	r29.u64 = ctx.r3.u64 ^ r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82208828
	ctx.lr = 0x822DE6C0;
	sub_82208828(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ r29.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x822de6e0
	if (!ctx.cr6.eq) goto loc_822DE6E0;
	// lis r11,-17600
	ctx.r11.s64 = -1153433600;
	// ori r11,r11,58959
	ctx.r11.u64 = ctx.r11.u64 | 58959;
loc_822DE6E0:
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// stw r11,-2144(r30)
	REX_STORE_U32(r30.u32 + -2144, ctx.r11.u32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r10,-2140(r9)
	REX_STORE_U32(ctx.r9.u32 + -2140, ctx.r10.u32);
loc_822DE6F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822E1BC8) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822e1c00
	if (ctx.cr0.eq) goto loc_822E1C00;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822e1be4
	if (!ctx.cr6.eq) goto loc_822E1BE4;
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x822e1c00
	goto loc_822E1C00;
loc_822E1BE4:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822e1bf4
	if (!ctx.cr6.eq) goto loc_822E1BF4;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x822e1c00
	goto loc_822E1C00;
loc_822E1BF4:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x822e1c00
	if (!ctx.cr6.eq) goto loc_822E1C00;
	// li r11,256
	ctx.r11.s64 = 256;
loc_822E1C00:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e1c0c
	if (ctx.cr0.eq) goto loc_822E1C0C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_822E1C0C:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e1c18
	if (ctx.cr0.eq) goto loc_822E1C18;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_822E1C18:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e1c24
	if (ctx.cr0.eq) goto loc_822E1C24;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_822E1C24:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e1c30
	if (ctx.cr0.eq) goto loc_822E1C30;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_822E1C30:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e1c3c
	if (ctx.cr0.eq) goto loc_822E1C3C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_822E1C3C:
	// oris r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 524288;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E75C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822E76D8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E7708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e772c
	if (ctx.cr6.lt) goto loc_822E772C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e7720
	if (!ctx.cr6.eq) goto loc_822E7720;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822E7720:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822E772C:
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

DEFINE_REX_FUNC(sub_822E9BC8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFFFFF;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822EA628) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822EA630;
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
	ctx.lr = 0x822EA64C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ea708
	if (ctx.cr6.lt) goto loc_822EA708;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x823cd118
	ctx.lr = 0x822EA668;
	sub_823CD118(ctx, base);
	// stw r3,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ea680
	if (!ctx.cr6.eq) goto loc_822EA680;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x822ea708
	goto loc_822EA708;
loc_822EA680:
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
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r8,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r8.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea6b0
	if (ctx.cr6.eq) goto loc_822EA6B0;
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
loc_822EA6B0:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ea6d4
	if (ctx.cr6.eq) goto loc_822EA6D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA6D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822EA6D4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822ea708
	if (ctx.cr6.lt) goto loc_822EA708;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ea700
	if (ctx.cr6.eq) goto loc_822EA700;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA6FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822EA700:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x822ea71c
	if (!ctx.cr6.lt) goto loc_822EA71C;
loc_822EA708:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EA71C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EA71C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822ED738) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822EDA48) {
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
	ctx.lr = 0x822EDA50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822edacc
	if (ctx.cr6.lt) goto loc_822EDACC;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// std r30,56(r31)
	REX_STORE_U64(r31.u32 + 56, r30.u64);
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// std r28,64(r31)
	REX_STORE_U64(r31.u32 + 64, r28.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,116(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EDACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EDACC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822F12C8) {
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
	ctx.lr = 0x822F12D0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,-26272
	ctx.r10.s64 = ctx.r11.s64 + -26272;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f1504
	if (ctx.cr6.eq) goto loc_822F1504;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x822f1504
	if (ctx.cr6.lt) goto loc_822F1504;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bgt cr6,0x822f1504
	if (ctx.cr6.gt) goto loc_822F1504;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822f1504
	if (ctx.cr6.eq) goto loc_822F1504;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f9490
	ctx.lr = 0x822F132C;
	sub_822F9490(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F134C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f134c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F134C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r7,608(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822fb530
	ctx.lr = 0x822F136C;
	sub_822FB530(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addic r10,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// subfe r8,r10,r28
	temp.u8 = (~ctx.r10.u32 + r28.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r11,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// li r29,1
	r29.s64 = 1;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r7,r9,-26244
	ctx.r7.s64 = ctx.r9.s64 + -26244;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x822f04b8
	ctx.lr = 0x822F13AC;
	sub_822F04B8(ctx, base);
	// stw r3,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f13c4
	if (!ctx.cr6.eq) goto loc_822F13C4;
	// lis r30,-32688
	r30.s64 = -2142240768;
	// ori r30,r30,186
	r30.u64 = r30.u64 | 186;
	// b 0x822f14bc
	goto loc_822F14BC;
loc_822F13C4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822f9308
	ctx.lr = 0x822F13D4;
	sub_822F9308(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-184
	ctx.r5.s64 = ctx.r11.s64 + -184;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822f8fa8
	ctx.lr = 0x822F13F8;
	sub_822F8FA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// stw r29,636(r31)
	REX_STORE_U32(r31.u32 + 636, r29.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// addi r5,r11,-184
	ctx.r5.s64 = ctx.r11.s64 + -184;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822f8fa8
	ctx.lr = 0x822F1420;
	sub_822F8FA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,-184
	ctx.r5.s64 = ctx.r10.s64 + -184;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822f8fa8
	ctx.lr = 0x822F144C;
	sub_822F8FA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,-184
	ctx.r5.s64 = ctx.r10.s64 + -184;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822f8fa8
	ctx.lr = 0x822F1478;
	sub_822F8FA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// li r11,5
	ctx.r11.s64 = 5;
	// cntlzw r10,r25
	ctx.r10.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ef138
	ctx.lr = 0x822F14B0;
	sub_822EF138(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f14f4
	if (!ctx.cr6.lt) goto loc_822F14F4;
loc_822F14BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f14f4
	if (ctx.cr6.eq) goto loc_822F14F4;
	// bl 0x822fb3c0
	ctx.lr = 0x822F14CC;
	sub_822FB3C0(ctx, base);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f14e4
	if (!ctx.cr6.eq) goto loc_822F14E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
loc_822F14E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822f94e8
	ctx.lr = 0x822F14F4;
	sub_822F94E8(ctx, base);
loc_822F14F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0588
	ctx.lr = 0x822F14FC;
	sub_822F0588(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ecc
	return;
loc_822F1504:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822FB178) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822fb1b8
	if (!ctx.cr6.gt) goto loc_822FB1B8;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822fb1a4
	if (!ctx.cr6.eq) goto loc_822FB1A4;
loc_822FB198:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_822FB1A4:
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// subf r8,r10,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fb198
	if (ctx.cr6.gt) goto loc_822FB198;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
loc_822FB1B8:
	// bge cr6,0x822fb1d8
	if (!ctx.cr6.lt) goto loc_822FB1D8;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822fb198
	if (ctx.cr6.eq) goto loc_822FB198;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x822fb198
	if (ctx.cr6.gt) goto loc_822FB198;
loc_822FB1D8:
	// std r4,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FF7C0) {
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
	// bl 0x822ff578
	ctx.lr = 0x822FF7DC;
	sub_822FF578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ff830
	if (ctx.cr6.lt) goto loc_822FF830;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x822FF7F8;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r10,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r10.u32);
	// stw r9,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r9.u32);
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// stw r10,696(r31)
	REX_STORE_U32(r31.u32 + 696, ctx.r10.u32);
loc_822FF830:
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

DEFINE_REX_FUNC(sub_82302088) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x82302090;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823027f8
	if (ctx.cr6.eq) goto loc_823027F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r21,1
	r21.s64 = 1;
	// li r22,4
	r22.s64 = 4;
	// li r19,2
	r19.s64 = 2;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// li r24,6
	r24.s64 = 6;
	// lfs f29,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f29.f64 = double(temp.f32);
	// li r18,5
	r18.s64 = 5;
	// li r20,8
	r20.s64 = 8;
	// li r23,-1
	r23.s64 = -1;
loc_823020E8:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823027ec
	if (ctx.cr6.gt) goto loc_823027EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823021a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823021A0;
	// bdzf 4*cr6+eq,0x823021c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823021C8;
	// bdzf 4*cr6+eq,0x823027ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823027EC;
	// bdzf 4*cr6+eq,0x8230227c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230227C;
	// bne cr6,0x82302340
	if (!ctx.cr6.eq) goto loc_82302340;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231c018
	ctx.lr = 0x82302118;
	sub_8231C018(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bne cr6,0x82302178
	if (!ctx.cr6.eq) goto loc_82302178;
	// stw r21,36(r29)
	REX_STORE_U32(r29.u32 + 36, r21.u32);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// sth r25,150(r29)
	REX_STORE_U16(r29.u32 + 150, r25.u16);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x82302158
	if (ctx.cr6.gt) goto loc_82302158;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x823027ec
	goto loc_823027EC;
loc_82302158:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r22,56(r29)
	REX_STORE_U32(r29.u32 + 56, r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823027ec
	if (ctx.cr6.eq) goto loc_823027EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82302174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823027ec
	goto loc_823027EC;
loc_82302178:
	// stw r19,36(r29)
	REX_STORE_U32(r29.u32 + 36, r19.u32);
	// sth r25,150(r29)
	REX_STORE_U16(r29.u32 + 150, r25.u16);
	// stb r25,145(r29)
	REX_STORE_U8(r29.u32 + 145, r25.u8);
	// stw r24,72(r29)
	REX_STORE_U32(r29.u32 + 72, r24.u32);
	// sth r25,148(r29)
	REX_STORE_U16(r29.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r29)
	REX_STORE_U32(r29.u32 + 76, r25.u32);
	// stw r25,200(r29)
	REX_STORE_U32(r29.u32 + 200, r25.u32);
	// stw r25,208(r29)
	REX_STORE_U32(r29.u32 + 208, r25.u32);
	// b 0x823027ec
	goto loc_823027EC;
loc_823021A0:
	// lwz r11,508(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 508);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823021B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
	// stw r18,36(r29)
	REX_STORE_U32(r29.u32 + 36, r18.u32);
	// b 0x823027ec
	goto loc_823027EC;
loc_823021C8:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82302274
	if (!ctx.cr6.lt) goto loc_82302274;
loc_823021E0:
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82302228
	if (ctx.cr6.eq) goto loc_82302228;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8231fb48
	ctx.lr = 0x8230221C;
	sub_8231FB48(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
loc_82302228:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stb r25,145(r29)
	REX_STORE_U8(r29.u32 + 145, r25.u8);
	// stw r24,72(r29)
	REX_STORE_U32(r29.u32 + 72, r24.u32);
	// sth r25,148(r29)
	REX_STORE_U16(r29.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r29)
	REX_STORE_U32(r29.u32 + 76, r25.u32);
	// stw r25,200(r29)
	REX_STORE_U32(r29.u32 + 200, r25.u32);
	// stw r25,208(r29)
	REX_STORE_U32(r29.u32 + 208, r25.u32);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823021e0
	if (ctx.cr6.lt) goto loc_823021E0;
loc_82302274:
	// stw r22,36(r29)
	REX_STORE_U32(r29.u32 + 36, r22.u32);
	// b 0x823027ec
	goto loc_823027EC;
loc_8230227C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823027e8
	if (!ctx.cr6.gt) goto loc_823027E8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82302294:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82302300
	if (ctx.cr6.eq) goto loc_82302300;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823201f8
	ctx.lr = 0x823022C8;
	sub_823201F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8230231c
	if (!ctx.cr6.eq) goto loc_8230231C;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82315a58
	ctx.lr = 0x823022FC;
	sub_82315A58(ctx, base);
	// b 0x8230231c
	goto loc_8230231C;
loc_82302300:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82302318;
	sub_822D5870(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_8230231C:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82302294
	if (ctx.cr6.lt) goto loc_82302294;
	// b 0x823027e8
	goto loc_823027E8;
loc_82302340:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823023b0
	if (!ctx.cr6.eq) goto loc_823023B0;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823023b0
	if (ctx.cr6.eq) goto loc_823023B0;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82302360:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82302394
	if (ctx.cr6.eq) goto loc_82302394;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r4,36(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82315a58
	ctx.lr = 0x82302394;
	sub_82315A58(ctx, base);
loc_82302394:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82302360
	if (ctx.cr6.lt) goto loc_82302360;
loc_823023B0:
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x8231ad48
	ctx.lr = 0x823023B8;
	sub_8231AD48(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230248c
	if (ctx.cr6.eq) goto loc_8230248C;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_823023D0:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82302418
	if (ctx.cr6.eq) goto loc_82302418;
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,52(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82302408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
	// b 0x82302470
	goto loc_82302470;
loc_82302418:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230243c
	if (ctx.cr6.eq) goto loc_8230243C;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sraw r11,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x82302460
	goto loc_82302460;
loc_8230243C:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// beq cr6,0x8230245c
	if (ctx.cr6.eq) goto loc_8230245C;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82302460
	goto loc_82302460;
loc_8230245C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82302460:
	// lwz r3,56(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82302470;
	sub_822D5870(ctx, base);
loc_82302470:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x823023d0
	if (ctx.cr6.lt) goto loc_823023D0;
loc_8230248C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82301ff0
	ctx.lr = 0x82302494;
	sub_82301FF0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x823024AC;
	sub_8231AE30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x823024B8;
	sub_8231AE30(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// mr r27,r21
	r27.u64 = r21.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82302520
	if (!ctx.cr6.gt) goto loc_82302520;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_823024DC:
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8230251c
	if (!ctx.cr6.eq) goto loc_8230251C;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x823024dc
	if (ctx.cr6.lt) goto loc_823024DC;
	// b 0x82302520
	goto loc_82302520;
loc_8230251C:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82302520:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823025dc
	if (!ctx.cr6.gt) goto loc_823025DC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x823025dc
	if (!ctx.cr6.eq) goto loc_823025DC;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823025dc
	if (ctx.cr6.eq) goto loc_823025DC;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82302548:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 108);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82302598
	if (!ctx.cr6.eq) goto loc_82302598;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82302598;
	sub_822D5870(ctx, base);
loc_82302598:
	// sth r23,202(r31)
	REX_STORE_U16(r31.u32 + 202, r23.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82317070
	ctx.lr = 0x823025B4;
	sub_82317070(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823027f8
	if (ctx.cr6.lt) goto loc_823027F8;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82302548
	if (ctx.cr6.lt) goto loc_82302548;
loc_823025DC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82302658
	if (!ctx.cr6.eq) goto loc_82302658;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82302658
	if (ctx.cr6.eq) goto loc_82302658;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_823025FC:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r7,472(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 472);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r3,120(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 120);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8230263C;
	sub_822D5870(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// lhz r5,34(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823025fc
	if (ctx.cr6.lt) goto loc_823025FC;
loc_82302658:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8230266c
	if (ctx.cr6.eq) goto loc_8230266C;
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823027e8
	if (ctx.cr6.eq) goto loc_823027E8;
loc_8230266C:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823027e8
	if (ctx.cr6.eq) goto loc_823027E8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82302680:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x823026ac
	if (!ctx.cr6.eq) goto loc_823026AC;
	// lfs f31,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	f31.f64 = double(temp.f32);
	// b 0x823026c8
	goto loc_823026C8;
loc_823026AC:
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f29,f12
	f31.f64 = double(float(f29.f64 / ctx.f12.f64));
loc_823026C8:
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82302730
	if (ctx.cr6.eq) goto loc_82302730;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r10,332(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 332);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,328(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// subf. r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble 0x82302730
	if (!ctx.cr0.gt) goto loc_82302730;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82302720:
	// stfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f30,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82302720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82302720;
loc_82302730:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82302748
	if (!ctx.cr6.eq) goto loc_82302748;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823027cc
	if (!ctx.cr6.gt) goto loc_823027CC;
loc_82302748:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82302784
	if (!ctx.cr6.gt) goto loc_82302784;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d5870
	ctx.lr = 0x82302784;
	sub_822D5870(ctx, base);
loc_82302784:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,496(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 496);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lhz r6,114(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 114);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 120);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r9,440(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x823027CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823027CC:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82302680
	if (ctx.cr6.lt) goto loc_82302680;
loc_823027E8:
	// stw r20,36(r29)
	REX_STORE_U32(r29.u32 + 36, r20.u32);
loc_823027EC:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823020e8
	if (!ctx.cr6.eq) goto loc_823020E8;
loc_823027F8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823264B0) {
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
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// bl 0x82337370
	ctx.lr = 0x823264E4;
	sub_82337370(ctx, base);
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x82326008
	ctx.lr = 0x823264F8;
	sub_82326008(ctx, base);
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

DEFINE_REX_FUNC(sub_82327AB8) {
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
	// bl 0x82314498
	ctx.lr = 0x82327AD4;
	sub_82314498(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x82314498
	ctx.lr = 0x82327ADC;
	sub_82314498(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x82314498
	ctx.lr = 0x82327AE4;
	sub_82314498(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82314498
	ctx.lr = 0x82327AEC;
	sub_82314498(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82314498
	ctx.lr = 0x82327AF4;
	sub_82314498(ctx, base);
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

DEFINE_REX_FUNC(sub_82328978) {
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
	ctx.lr = 0x82328980;
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
	// beq cr6,0x823289e0
	if (ctx.cr6.eq) goto loc_823289E0;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823289d8
	if (ctx.cr6.eq) goto loc_823289D8;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// blt cr6,0x823289d8
	if (ctx.cr6.lt) goto loc_823289D8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44100
	ctx.r9.u64 = ctx.r10.u64 | 44100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823289e0
	if (ctx.cr6.lt) goto loc_823289E0;
loc_823289D8:
	// li r14,0
	r14.s64 = 0;
	// b 0x823289e4
	goto loc_823289E4;
loc_823289E0:
	// mr r14,r17
	r14.u64 = r17.u64;
loc_823289E4:
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x82328a30
	if (!ctx.cr6.eq) goto loc_82328A30;
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
	// b 0x82328a34
	goto loc_82328A34;
loc_82328A30:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82328A34:
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
loc_82328A48:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bgt cr6,0x82328a5c
	if (ctx.cr6.gt) goto loc_82328A5C;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82328A5C:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// bge cr6,0x82328c2c
	if (!ctx.cr6.lt) goto loc_82328C2C;
	// lbz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82328c20
	if (!ctx.cr6.eq) goto loc_82328C20;
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
	// bgt cr6,0x82328aa0
	if (ctx.cr6.gt) goto loc_82328AA0;
loc_82328A90:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82328a90
	if (!ctx.cr6.gt) goto loc_82328A90;
loc_82328AA0:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x82328ac0
	if (ctx.cr6.eq) goto loc_82328AC0;
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
	// b 0x82328c14
	goto loc_82328C14;
loc_82328AC0:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82328ad4
	if (ctx.cr6.lt) goto loc_82328AD4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82328AD4:
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
	// blt cr6,0x82328af0
	if (ctx.cr6.lt) goto loc_82328AF0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_82328AF0:
	// slw r11,r30,r26
	ctx.r11.u64 = r26.u8 & 0x20 ? 0 : (r30.u32 << (r26.u8 & 0x3F));
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// blt cr6,0x82328b04
	if (ctx.cr6.lt) goto loc_82328B04;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82328B04:
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
	// bgt cr6,0x82328b30
	if (ctx.cr6.gt) goto loc_82328B30;
loc_82328B20:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82328b20
	if (!ctx.cr6.gt) goto loc_82328B20;
loc_82328B30:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bne cr6,0x82328b54
	if (!ctx.cr6.eq) goto loc_82328B54;
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x82328830
	ctx.lr = 0x82328B40;
	sub_82328830(ctx, base);
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
	// b 0x82328c14
	goto loc_82328C14;
loc_82328B54:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// ble cr6,0x82328b74
	if (!ctx.cr6.gt) goto loc_82328B74;
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
	// b 0x82328b7c
	goto loc_82328B7C;
loc_82328B74:
	// subfic r11,r26,6
	ctx.xer.ca = r26.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - r26.u64;
	// slw r31,r8,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
loc_82328B7C:
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x82328830
	ctx.lr = 0x82328B84;
	sub_82328830(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// bl 0x82328830
	ctx.lr = 0x82328B94;
	sub_82328830(ctx, base);
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
loc_82328C14:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
loc_82328C20:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x82328a48
	goto loc_82328A48;
loc_82328C2C:
	// clrlwi r28,r25,24
	r28.u64 = r25.u32 & 0xFF;
	// addic. r11,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r11.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82328c9c
	if (!ctx.cr0.gt) goto loc_82328C9C;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82328C44:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x82328c70
	if (ctx.cr6.eq) goto loc_82328C70;
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
	// bl 0x82328830
	ctx.lr = 0x82328C68;
	sub_82328830(ctx, base);
	// stfsx f1,r31,r16
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + r16.u32, temp.u32);
	// b 0x82328c90
	goto loc_82328C90;
loc_82328C70:
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
loc_82328C90:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82328c44
	if (!ctx.cr0.eq) goto loc_82328C44;
loc_82328C9C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82328cb8
	if (ctx.cr6.eq) goto loc_82328CB8;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + r16.u64;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
loc_82328CB8:
	// stb r25,0(r15)
	REX_STORE_U8(r15.u32 + 0, r25.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8233FD40) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823a6718
	ctx.lr = 0x8233FD5C;
	sub_823A6718(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x823a6718
	ctx.lr = 0x8233FD64;
	sub_823A6718(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x823a6718
	ctx.lr = 0x8233FD6C;
	sub_823A6718(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x823a6718
	ctx.lr = 0x8233FD74;
	sub_823A6718(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8232ea30
	ctx.lr = 0x8233FD7C;
	sub_8232EA30(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233fd9c
	if (ctx.cr6.eq) goto loc_8233FD9C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fd9c
	if (ctx.cr6.eq) goto loc_8233FD9C;
	// bl 0x8233d4c0
	ctx.lr = 0x8233FD94;
	sub_8233D4C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8233FD9C:
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

DEFINE_REX_FUNC(sub_823416B8) {
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
	ctx.lr = 0x823416C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,31
	r28.u64 = ctx.r4.u32 & 0x1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82341714
	if (ctx.cr6.eq) goto loc_82341714;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r27,r10,1,63
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// bge 0x82341704
	if (!ctx.cr0.lt) goto loc_82341704;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341704;
	sub_823380C8(ctx, base);
loc_82341704:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r27,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_82341714:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x82341810
	if (!ctx.cr6.lt) goto loc_82341810;
	// subf r11,r28,r29
	ctx.r11.u64 = r29.u64 - r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_8234172C:
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
	// bge 0x82341754
	if (!ctx.cr0.lt) goto loc_82341754;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341754;
	sub_823380C8(ctx, base);
loc_82341754:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823417ec
	if (ctx.cr6.eq) goto loc_823417EC;
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
	// bge 0x82341784
	if (!ctx.cr0.lt) goto loc_82341784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82341784;
	sub_823380C8(ctx, base);
loc_82341784:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823417a0
	if (ctx.cr6.eq) goto loc_823417A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// b 0x823417fc
	goto loc_823417FC;
loc_823417A0:
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
	// bge 0x823417c8
	if (!ctx.cr0.lt) goto loc_823417C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823417C8;
	sub_823380C8(ctx, base);
loc_823417C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// beq cr6,0x823417e0
	if (ctx.cr6.eq) goto loc_823417E0;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// b 0x823417f8
	goto loc_823417F8;
loc_823417E0:
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// b 0x823417fc
	goto loc_823417FC;
loc_823417EC:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_823417F8:
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_823417FC:
	// stw r8,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x8234172c
	if (!ctx.cr0.eq) goto loc_8234172C;
loc_82341810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82350B90) {
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
	ctx.lr = 0x82350B98;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r18,316(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r17,320(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,1764(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// lwz r28,40(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r24,0(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r21,28(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// lwz r20,32(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r14,24(r10)
	r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r16,4(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x822d5870
	ctx.lr = 0x82350C08;
	sub_822D5870(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r15,3
	r15.s64 = 3;
	// ori r26,r11,32768
	r26.u64 = ctx.r11.u64 | 32768;
loc_82350C14:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82350c2c
	if (!ctx.cr6.eq) goto loc_82350C2C;
	// li r30,0
	r30.s64 = 0;
	// stw r15,20(r31)
	REX_STORE_U32(r31.u32 + 20, r15.u32);
	// b 0x82350d50
	goto loc_82350D50;
loc_82350C2C:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82350d18
	if (ctx.cr6.lt) goto loc_82350D18;
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
	// bge cr6,0x82350d10
	if (!ctx.cr6.lt) goto loc_82350D10;
loc_82350C78:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82350ca4
	if (ctx.cr6.lt) goto loc_82350CA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82350C94;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82350c78
	if (ctx.cr6.eq) goto loc_82350C78;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82350d50
	goto loc_82350D50;
loc_82350CA4:
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
loc_82350D10:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82350d50
	goto loc_82350D50;
loc_82350D18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82350D20;
	sub_82337F50(ctx, base);
loc_82350D20:
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
	// bl 0x82337f50
	ctx.lr = 0x82350D38;
	sub_82337F50(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82350d20
	if (ctx.cr6.lt) goto loc_82350D20;
loc_82350D50:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82351484
	if (!ctx.cr6.eq) goto loc_82351484;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(r31.s32, r16.s32, ctx.xer);
	// beq cr6,0x82350dcc
	if (ctx.cr6.eq) goto loc_82350DCC;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bge cr6,0x82351484
	if (!ctx.cr6.lt) goto loc_82351484;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(r31.u32, r19.u32, ctx.xer);
	// blt cr6,0x82350d84
	if (ctx.cr6.lt) goto loc_82350D84;
	// li r25,1
	r25.s64 = 1;
loc_82350D84:
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lbzx r28,r31,r20
	r28.u64 = REX_LOAD_U8(r31.u32 + r20.u32);
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
	// bge 0x82350dac
	if (!ctx.cr0.lt) goto loc_82350DAC;
	// bl 0x823380c8
	ctx.lr = 0x82350DAC;
	sub_823380C8(ctx, base);
loc_82350DAC:
	// lbzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r21.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82350dc4
	if (ctx.cr6.eq) goto loc_82350DC4;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x823513b0
	goto loc_823513B0;
loc_82350DC4:
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x823513b0
	goto loc_823513B0;
loc_82350DCC:
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
	// bge 0x82350df0
	if (!ctx.cr0.lt) goto loc_82350DF0;
	// bl 0x823380c8
	ctx.lr = 0x82350DF0;
	sub_823380C8(ctx, base);
loc_82350DF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82350fcc
	if (!ctx.cr6.eq) goto loc_82350FCC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82351484
	if (!ctx.cr6.eq) goto loc_82351484;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82350e1c
	if (!ctx.cr6.eq) goto loc_82350E1C;
	// li r30,0
	r30.s64 = 0;
	// stw r15,20(r31)
	REX_STORE_U32(r31.u32 + 20, r15.u32);
	// b 0x82350f40
	goto loc_82350F40;
loc_82350E1C:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82350f08
	if (ctx.cr6.lt) goto loc_82350F08;
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
	// bge cr6,0x82350f00
	if (!ctx.cr6.lt) goto loc_82350F00;
loc_82350E68:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82350e94
	if (ctx.cr6.lt) goto loc_82350E94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82350E84;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82350e68
	if (ctx.cr6.eq) goto loc_82350E68;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82350f40
	goto loc_82350F40;
loc_82350E94:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_82350F00:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82350f40
	goto loc_82350F40;
loc_82350F08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82350F10;
	sub_82337F50(ctx, base);
loc_82350F10:
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
	// bl 0x82337f50
	ctx.lr = 0x82350F28;
	sub_82337F50(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82350f10
	if (ctx.cr6.lt) goto loc_82350F10;
loc_82350F40:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82351484
	if (!ctx.cr6.eq) goto loc_82351484;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// beq cr6,0x82351484
	if (ctx.cr6.eq) goto loc_82351484;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x82351484
	if (!ctx.cr6.lt) goto loc_82351484;
	// lbzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r21.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// lbzx r28,r11,r20
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x82350f88
	if (ctx.cr6.lt) goto loc_82350F88;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r25,1
	r25.s64 = 1;
	// b 0x82350f8c
	goto loc_82350F8C;
loc_82350F88:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82350F8C:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x82350fbc
	if (!ctx.cr0.lt) goto loc_82350FBC;
	// bl 0x823380c8
	ctx.lr = 0x82350FBC;
	sub_823380C8(ctx, base);
loc_82350FBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823513b0
	if (ctx.cr6.eq) goto loc_823513B0;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x823513b0
	goto loc_823513B0;
loc_82350FCC:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// bge 0x82350ff4
	if (!ctx.cr0.lt) goto loc_82350FF4;
	// bl 0x823380c8
	ctx.lr = 0x82350FF4;
	sub_823380C8(ctx, base);
loc_82350FF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823511d0
	if (!ctx.cr6.eq) goto loc_823511D0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82351484
	if (!ctx.cr6.eq) goto loc_82351484;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82351020
	if (!ctx.cr6.eq) goto loc_82351020;
	// li r30,0
	r30.s64 = 0;
	// stw r15,20(r31)
	REX_STORE_U32(r31.u32 + 20, r15.u32);
	// b 0x82351144
	goto loc_82351144;
loc_82351020:
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8235110c
	if (ctx.cr6.lt) goto loc_8235110C;
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
	// bge cr6,0x82351104
	if (!ctx.cr6.lt) goto loc_82351104;
loc_8235106C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82351098
	if (ctx.cr6.lt) goto loc_82351098;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82351088;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8235106c
	if (ctx.cr6.eq) goto loc_8235106C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82351144
	goto loc_82351144;
loc_82351098:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_82351104:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82351144
	goto loc_82351144;
loc_8235110C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82351114;
	sub_82337F50(ctx, base);
loc_82351114:
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
	// bl 0x82337f50
	ctx.lr = 0x8235112C;
	sub_82337F50(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82351114
	if (ctx.cr6.lt) goto loc_82351114;
loc_82351144:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82351484
	if (!ctx.cr6.eq) goto loc_82351484;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// beq cr6,0x82351484
	if (ctx.cr6.eq) goto loc_82351484;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x82351484
	if (!ctx.cr6.lt) goto loc_82351484;
	// lbzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r21.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// lbzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x8235118c
	if (ctx.cr6.lt) goto loc_8235118C;
	// lbzx r10,r31,r14
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r14.u32);
	// li r25,1
	r25.s64 = 1;
	// b 0x82351194
	goto loc_82351194;
loc_8235118C:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
loc_82351194:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
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
	// bge 0x823511c0
	if (!ctx.cr0.lt) goto loc_823511C0;
	// bl 0x823380c8
	ctx.lr = 0x823511C0;
	sub_823380C8(ctx, base);
loc_823511C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823513b0
	if (ctx.cr6.eq) goto loc_823513B0;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x823513b0
	goto loc_823513B0;
loc_823511D0:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// bge 0x823511f8
	if (!ctx.cr0.lt) goto loc_823511F8;
	// bl 0x823380c8
	ctx.lr = 0x823511F8;
	sub_823380C8(ctx, base);
loc_823511F8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82351270
	if (!ctx.cr6.lt) goto loc_82351270;
loc_82351218:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351270
	if (ctx.cr6.eq) goto loc_82351270;
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
	// bge 0x82351260
	if (!ctx.cr0.lt) goto loc_82351260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351260;
	sub_823380C8(ctx, base);
loc_82351260:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82351218
	if (ctx.cr6.gt) goto loc_82351218;
loc_82351270:
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
	// bge 0x823512a8
	if (!ctx.cr0.lt) goto loc_823512A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823512A8;
	sub_823380C8(ctx, base);
loc_823512A8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x823512d0
	if (!ctx.cr0.lt) goto loc_823512D0;
	// bl 0x823380c8
	ctx.lr = 0x823512D0;
	sub_823380C8(ctx, base);
loc_823512D0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,12
	r30.s64 = 12;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x82351344
	if (!ctx.cr6.lt) goto loc_82351344;
loc_823512EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351344
	if (ctx.cr6.eq) goto loc_82351344;
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
	// bge 0x82351334
	if (!ctx.cr0.lt) goto loc_82351334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82351334;
	sub_823380C8(ctx, base);
loc_82351334:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823512ec
	if (ctx.cr6.gt) goto loc_823512EC;
loc_82351344:
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
	// bge 0x8235137c
	if (!ctx.cr0.lt) goto loc_8235137C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235137C;
	sub_823380C8(ctx, base);
loc_8235137C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r30,2047
	ctx.cr6.compare<int32_t>(r30.s32, 2047, ctx.xer);
	// ble cr6,0x8235138c
	if (!ctx.cr6.gt) goto loc_8235138C;
	// addi r31,r30,-4096
	r31.s64 = r30.s64 + -4096;
loc_8235138C:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x823513b0
	if (!ctx.cr0.lt) goto loc_823513B0;
	// bl 0x823380c8
	ctx.lr = 0x823513B0;
	sub_823380C8(ctx, base);
loc_823513B0:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82351484
	if (!ctx.cr6.eq) goto loc_82351484;
	// add r11,r28,r23
	ctx.r11.u64 = r28.u64 + r23.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82351484
	if (!ctx.cr6.lt) goto loc_82351484;
	// lwz r10,1832(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1832);
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823513fc
	if (ctx.cr6.eq) goto loc_823513FC;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_823513FC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x8235141c
	if (!ctx.cr6.eq) goto loc_8235141C;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lwz r9,1764(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// lwz r8,308(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 308);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x82351470
	goto loc_82351470;
loc_8235141C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x8235143c
	if (!ctx.cr6.eq) goto loc_8235143C;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lwz r9,1764(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// lwz r8,312(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 312);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x82351470
	goto loc_82351470;
loc_8235143C:
	// lwz r8,1764(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1764);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8235145c
	if (!ctx.cr6.gt) goto loc_8235145C;
	// lbzx r9,r11,r22
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// mullw r10,r31,r18
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r18.s32);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r6,r10,r17
	ctx.r6.u64 = ctx.r10.u64 + r17.u64;
	// b 0x8235146c
	goto loc_8235146C;
loc_8235145C:
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// mullw r9,r31,r18
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r18.s32);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r6,r17,r9
	ctx.r6.u64 = ctx.r9.u64 - r17.u64;
loc_8235146C:
	// stwx r6,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
loc_82351470:
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82351490
	if (!ctx.cr6.eq) goto loc_82351490;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82350c14
	goto loc_82350C14;
loc_82351484:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82351490:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1944(r27)
	REX_STORE_U32(r27.u32 + 1944, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82377F08) {
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
	ctx.lr = 0x82377F10;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r22,340(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r23,332(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r11,5308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5308);
	// clrlwi r4,r6,28
	ctx.r4.u64 = ctx.r6.u32 & 0xF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r11,r9
	r29.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r26.s32, ctx.xer);
	// add r27,r6,r10
	r27.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srawi r24,r27,3
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7) != 0);
	r24.s64 = r27.s32 >> 3;
	// subfic r3,r22,0
	ctx.xer.ca = r22.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - r22.u64;
	// subf r10,r11,r27
	ctx.r10.u64 = r27.u64 - ctx.r11.u64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r29
	r31.u64 = r29.u64;
	// rlwinm r11,r11,0,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r25,r11,20
	r25.s64 = ctx.r11.s64 + 20;
	// bge cr6,0x8237800c
	if (!ctx.cr6.lt) goto loc_8237800C;
	// subf r6,r5,r26
	ctx.r6.u64 = r26.u64 - ctx.r5.u64;
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// subf r30,r29,r9
	r30.u64 = ctx.r9.u64 - r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
loc_82377F88:
	// lbz r28,0(r7)
	r28.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r20,r1,96
	r20.s64 = ctx.r1.s64 + 96;
	// addi r18,r1,96
	r18.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r31.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r19,r1,80
	r19.s64 = ctx.r1.s64 + 80;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + r31.u64;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lvx128 v13,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stvx128 v0,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82377fec
	if (!ctx.cr6.gt) goto loc_82377FEC;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82377FDC:
	// lbz r28,0(r7)
	r28.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// stbx r28,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82377fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377FDC;
loc_82377FEC:
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + r23.u64;
	// stvx128 v0,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// stvx128 v13,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82377f88
	if (!ctx.cr0.eq) goto loc_82377F88;
loc_8237800C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82378074
	if (ctx.cr6.eq) goto loc_82378074;
	// mullw r11,r25,r23
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// subf r30,r11,r29
	r30.u64 = r29.u64 - ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r24,3,0,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF0;
	// bl 0x822091c8
	ctx.lr = 0x82378030;
	sub_822091C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82378074
	if (!ctx.cr6.gt) goto loc_82378074;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_8237803C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82378068
	if (!ctx.cr6.gt) goto loc_82378068;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82378058:
	// lvlx128 v63,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82378058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82378058;
loc_82378068:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// bne 0x8237803c
	if (!ctx.cr0.eq) goto loc_8237803C;
loc_82378074:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x823780f0
	if (ctx.cr6.eq) goto loc_823780F0;
	// subf r29,r23,r31
	r29.u64 = r31.u64 - r23.u64;
	// rlwinm r28,r24,3,0,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// neg r11,r26
	ctx.r11.s64 = static_cast<int64_t>(-r26.u64);
	// beq cr6,0x82378098
	if (ctx.cr6.eq) goto loc_82378098;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x8237809c
	goto loc_8237809C;
loc_82378098:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8237809C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x822091c8
	ctx.lr = 0x823780B0;
	sub_822091C8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823780f0
	if (!ctx.cr6.gt) goto loc_823780F0;
loc_823780B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823780e4
	if (!ctx.cr6.gt) goto loc_823780E4;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823780D4:
	// lvlx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823780d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823780D4;
loc_823780E4:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r23
	r31.u64 = r31.u64 + r23.u64;
	// bne 0x823780b8
	if (!ctx.cr0.eq) goto loc_823780B8;
loc_823780F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8237ED78) {
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
	ctx.lr = 0x8237ED80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r3,4084
	ctx.r11.s64 = ctx.r3.s64 + 4084;
	// li r7,-3
	ctx.r7.s64 = -3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r27,8
	r27.s64 = 8;
loc_8237EDA4:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stw r10,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r5,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x8237ede8
	if (ctx.cr6.gt) goto loc_8237EDE8;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r10,14820(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 14820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237edf4
	if (ctx.cr6.eq) goto loc_8237EDF4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x8237edf4
	if (ctx.cr6.gt) goto loc_8237EDF4;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8237edf0
	goto loc_8237EDF0;
loc_8237EDE8:
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8237EDF0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8237EDF4:
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// bgt cr6,0x8237ee30
	if (ctx.cr6.gt) goto loc_8237EE30;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r9,14820(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8237ee3c
	if (ctx.cr6.eq) goto loc_8237EE3C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8237ee3c
	if (ctx.cr6.gt) goto loc_8237EE3C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8237ee38
	goto loc_8237EE38;
loc_8237EE30:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8237EE38:
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8237EE3C:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bdnz 0x8237eda4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237EDA4;
	// addi r29,r28,4068
	r29.s64 = r28.s64 + 4068;
	// addi r30,r28,6688
	r30.s64 = r28.s64 + 6688;
	// li r31,62
	r31.s64 = 62;
loc_8237EE58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82399070
	ctx.lr = 0x8237EE64;
	sub_82399070(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8237ee58
	if (!ctx.cr0.eq) goto loc_8237EE58;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r11,r28,5356
	ctx.r11.s64 = r28.s64 + 5356;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8237EE84:
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r10,15536(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// blt cr6,0x8237eeac
	if (ctx.cr6.lt) goto loc_8237EEAC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8237eec4
	goto loc_8237EEC4;
loc_8237EEAC:
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// subf r8,r6,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8237EEC4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bgt cr6,0x8237eef8
	if (ctx.cr6.gt) goto loc_8237EEF8;
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// lwz r9,14820(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8237ef04
	if (ctx.cr6.eq) goto loc_8237EF04;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8237ef04
	if (ctx.cr6.gt) goto loc_8237EF04;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8237ef00
	goto loc_8237EF00;
loc_8237EEF8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8237EF00:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8237EF04:
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r10,15536(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// blt cr6,0x8237ef28
	if (ctx.cr6.lt) goto loc_8237EF28;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x8237ef40
	goto loc_8237EF40;
loc_8237EF28:
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
loc_8237EF40:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8237ef74
	if (ctx.cr6.gt) goto loc_8237EF74;
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// lwz r9,14820(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8237ef80
	if (ctx.cr6.eq) goto loc_8237EF80;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8237ef80
	if (ctx.cr6.gt) goto loc_8237EF80;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8237ef7c
	goto loc_8237EF7C;
loc_8237EF74:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8237EF7C:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8237EF80:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x8237ee84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237EE84;
	// addi r29,r28,5348
	r29.s64 = r28.s64 + 5348;
	// addi r30,r28,10784
	r30.s64 = r28.s64 + 10784;
	// li r31,62
	r31.s64 = 62;
loc_8237EF98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82399070
	ctx.lr = 0x8237EFA4;
	sub_82399070(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8237ef98
	if (!ctx.cr0.eq) goto loc_8237EF98;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8238B280) {
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
	ctx.lr = 0x8238B288;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,3744(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r9,220(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,3776(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r30,3836(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// lwz r27,616(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 616);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,3780(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r29,3840(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// lwz r28,3760(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,204(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// srawi r25,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r25.s64 = ctx.r3.s32 >> 1;
	// lwz r3,3832(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r27,616(r28)
	REX_STORE_U32(r28.u32 + 616, r27.u32);
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// mullw r8,r25,r8
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r24,r4,r8
	r24.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r29,r5,r11
	r29.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r27,r6,r11
	r27.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r25,r7,r8
	r25.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8238b3a4
	if (!ctx.cr6.gt) goto loc_8238B3A4;
loc_8238B31C:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x822091c8
	ctx.lr = 0x8238B330;
	sub_822091C8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822091c8
	ctx.lr = 0x8238B34C;
	sub_822091C8(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822091c8
	ctx.lr = 0x8238B36C;
	sub_822091C8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822091c8
	ctx.lr = 0x8238B388;
	sub_822091C8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8238b31c
	if (ctx.cr6.lt) goto loc_8238B31C;
loc_8238B3A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8238ECC0) {
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
	ctx.lr = 0x8238ECC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8238ed48
	if (!ctx.cr6.lt) goto loc_8238ED48;
loc_8238ECF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ed48
	if (ctx.cr6.eq) goto loc_8238ED48;
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
	// bge 0x8238ed38
	if (!ctx.cr0.lt) goto loc_8238ED38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238ED38;
	sub_823380C8(ctx, base);
loc_8238ED38:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238ecf0
	if (ctx.cr6.gt) goto loc_8238ECF0;
loc_8238ED48:
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
	// bge 0x8238ed80
	if (!ctx.cr0.lt) goto loc_8238ED80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238ED80;
	sub_823380C8(ctx, base);
loc_8238ED80:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x8238ee3c
	if (!ctx.cr6.eq) goto loc_8238EE3C;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8238edfc
	if (!ctx.cr6.lt) goto loc_8238EDFC;
loc_8238EDA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238edfc
	if (ctx.cr6.eq) goto loc_8238EDFC;
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
	// bge 0x8238edec
	if (!ctx.cr0.lt) goto loc_8238EDEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238EDEC;
	sub_823380C8(ctx, base);
loc_8238EDEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238eda4
	if (ctx.cr6.gt) goto loc_8238EDA4;
loc_8238EDFC:
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
	// bge 0x8238ee34
	if (!ctx.cr0.lt) goto loc_8238EE34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8238EE34;
	sub_823380C8(ctx, base);
loc_8238EE34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8238ee48
	goto loc_8238EE48;
loc_8238EE3C:
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
loc_8238EE48:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8238ee58
	if (!ctx.cr6.eq) goto loc_8238EE58;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_8238EE58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82393EF8) {
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
	ctx.lr = 0x82393F00;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r24,r6,-2
	r24.s64 = ctx.r6.s64 + -2;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// lbz r8,2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// addi r28,r4,2
	r28.s64 = ctx.r4.s64 + 2;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r31,3(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// addi r27,r4,3
	r27.s64 = ctx.r4.s64 + 3;
	// mulli r7,r7,14
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(14));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r31,r10
	ctx.r7.u64 = r31.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r7,11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82393fc8
	if (!ctx.cr6.gt) goto loc_82393FC8;
	// addi r10,r24,-3
	ctx.r10.s64 = r24.s64 + -3;
	// addi r26,r4,-1
	r26.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r4,-2
	r25.s64 = ctx.r4.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82393F78:
	// lbzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzx r30,r26,r11
	r30.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// lbzx r7,r25,r11
	ctx.r7.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r27,r11
	r31.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r7,r7,11
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// srawi r10,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 7;
	// stwu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82393f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393F78;
loc_82393FC8:
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r30,r24,2,0,29
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r4,-3(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r11,r29,14
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(14));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r7,r9,11
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stwx r10,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, ctx.r10.u32);
	// ble cr6,0x82394068
	if (!ctx.cr6.gt) goto loc_82394068;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82394038:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82394050
	if (!ctx.cr6.gt) goto loc_82394050;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82394050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r31,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r31.u8);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stbx r11,r8,r3
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x82394038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394038;
loc_82394068:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82395C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82395cac
	if (ctx.cr6.lt) goto loc_82395CAC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82395cb0
	goto loc_82395CB0;
loc_82395CAC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82395CB0:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82395cc0
	if (!ctx.cr6.gt) goto loc_82395CC0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82395ccc
	goto loc_82395CCC;
loc_82395CC0:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82395ccc
	if (!ctx.cr6.gt) goto loc_82395CCC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82395CCC:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82395cdc
	if (!ctx.cr6.gt) goto loc_82395CDC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82395ce8
	goto loc_82395CE8;
loc_82395CDC:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82395ce8
	if (!ctx.cr6.gt) goto loc_82395CE8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82395CE8:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82395cf8
	if (!ctx.cr6.gt) goto loc_82395CF8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82395d04
	goto loc_82395D04;
loc_82395CF8:
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82395d04
	if (!ctx.cr6.gt) goto loc_82395D04;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82395D04:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82395d14
	if (!ctx.cr6.gt) goto loc_82395D14;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82395d20
	goto loc_82395D20;
loc_82395D14:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82395d20
	if (!ctx.cr6.gt) goto loc_82395D20;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82395D20:
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subfc r10,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r9,r9,r11
	ctx.r9.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82397B58) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82397b98
	if (ctx.cr6.eq) goto loc_82397B98;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82397b98
	if (!ctx.cr6.eq) goto loc_82397B98;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233ff78
	ctx.lr = 0x82397B90;
	sub_8233FF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82397B98:
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

DEFINE_REX_FUNC(sub_82399070) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// neg r7,r11
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v60,v62,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsplth v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vsplth v11,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,48
	ctx.r6.s64 = 48;
	// stvx128 v60,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A1E30) {
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
	ctx.lr = 0x823A1E38;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823a211c
	if (ctx.cr6.eq) goto loc_823A211C;
	// li r9,8
	ctx.r9.s64 = 8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x823a1f94
	if (ctx.cr6.eq) goto loc_823A1F94;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_823A1E60:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r5,-8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// add r6,r31,r4
	ctx.r6.u64 = r31.u64 + ctx.r4.u64;
	// lbz r30,-2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r30,r5
	ctx.r5.u64 = r30.u64 + ctx.r5.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a1ec4
	if (!ctx.cr6.eq) goto loc_823A1EC4;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x823a1eec
	goto loc_823A1EEC;
loc_823A1EC4:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_823A1EEC:
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r31,3(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r31,r4
	ctx.r6.u64 = r31.u64 + ctx.r4.u64;
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r30,r5
	ctx.r5.u64 = r30.u64 + ctx.r5.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a1f54
	if (!ctx.cr6.eq) goto loc_823A1F54;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x823a1f7c
	goto loc_823A1F7C;
loc_823A1F54:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_823A1F7C:
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x823a1e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1E60;
	// b 0x822d4ecc
	return;
loc_823A1F94:
	// subf r8,r6,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r6.u64;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// addi r27,r8,-2
	r27.s64 = ctx.r8.s64 + -2;
loc_823A1FA0:
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,-2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r31,r5,r9
	r31.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// lwz r30,-8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r6,r31,r5
	ctx.r6.u64 = r31.u64 + ctx.r5.u64;
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r29,r30
	ctx.r5.u64 = r29.u64 + r30.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a2028
	if (!ctx.cr6.eq) goto loc_823A2028;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x823a2050
	goto loc_823A2050;
loc_823A2028:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_823A2050:
	// stwx r9,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r31,20(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r29,12(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r26,r4,r6
	r26.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// srawi r6,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r6.s64 = r30.s32 >> 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r30,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r30.s64 = r26.s32 >> 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r30,r31
	ctx.r8.u64 = r30.u64 + r31.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// or r31,r8,r9
	r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// or r4,r31,r6
	ctx.r4.u64 = r31.u64 | ctx.r6.u64;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a20dc
	if (!ctx.cr6.eq) goto loc_823A20DC;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x823a2104
	goto loc_823A2104;
loc_823A20DC:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_823A2104:
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r28,r28,r7
	r28.u64 = r28.u64 + ctx.r7.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x823a1fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A1FA0;
	// b 0x822d4ecc
	return;
loc_823A211C:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823a22a0
	if (ctx.cr6.eq) goto loc_823A22A0;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
loc_823A2130:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbzx r28,r6,r7
	r28.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lbz r29,1(r6)
	r29.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r31,2(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// add r26,r9,r28
	r26.u64 = ctx.r9.u64 + r28.u64;
	// lbz r8,3(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r30,1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r25,r5,r31
	r25.u64 = ctx.r5.u64 + r31.u64;
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r31,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r31.s64 = r26.s32 >> 1;
	// lwz r29,-4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// srawi r5,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r5.s64 = r30.s32 >> 1;
	// lwz r30,-8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// srawi r9,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r9.s64 = r25.s32 >> 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// or r29,r8,r9
	r29.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// or r30,r29,r5
	r30.u64 = r29.u64 | ctx.r5.u64;
	// or r30,r30,r31
	r30.u64 = r30.u64 | r31.u64;
	// rlwinm r30,r30,0,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a21b4
	if (!ctx.cr6.eq) goto loc_823A21B4;
	// rlwinm r31,r31,8,0,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x823a21c8
	goto loc_823A21C8;
loc_823A21B4:
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// rotlwi r31,r31,8
	r31.u64 = __builtin_rotateleft32(r31.u32, 8);
	// lbzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
loc_823A21C8:
	// or r5,r31,r5
	ctx.r5.u64 = r31.u64 | ctx.r5.u64;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r9,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lbz r30,6(r6)
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r28,16(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r8,5(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,4(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,7(r6)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lwz r30,12(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// lwz r29,20(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// srawi r9,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r9.s64 = r31.s32 >> 1;
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// or r30,r8,r9
	r30.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// or r31,r30,r6
	r31.u64 = r30.u64 | ctx.r6.u64;
	// or r31,r31,r5
	r31.u64 = r31.u64 | ctx.r5.u64;
	// rlwinm r31,r31,0,0,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823a2260
	if (!ctx.cr6.eq) goto loc_823A2260;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x823a2274
	goto loc_823A2274;
loc_823A2260:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// lbzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
loc_823A2274:
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// bdnz 0x823a2130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A2130;
	// b 0x822d4ecc
	return;
loc_823A22A0:
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
loc_823A22A8:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r30,1(r6)
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbzx r31,r6,r7
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lbz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r31,2(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r5,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r5.u8);
	// lbz r31,2(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lwz r4,12(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lwz r5,16(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lbz r31,4(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r5,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbz r31,4(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,5(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lwz r4,20(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lwz r5,24(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,6(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r5,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// lbz r5,6(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,7(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r8,7(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// lwz r4,28(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stb r5,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// lbz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 8);
	// lbz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwzu r11,32(r9)
	ea = 32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stb r8,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bdnz 0x823a22a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A22A8;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823BEF40) {
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
	ctx.lr = 0x823BEF48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// lis r9,21849
	ctx.r9.s64 = 1431896064;
	// ori r5,r11,13392
	ctx.r5.u64 = ctx.r11.u64 | 13392;
	// lis r7,22870
	ctx.r7.s64 = 1498808320;
	// lis r6,12593
	ctx.r6.s64 = 825294848;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lis r4,12849
	ctx.r4.s64 = 842072064;
	// lis r31,22101
	r31.s64 = 1448411136;
	// lis r30,12338
	r30.s64 = 808583168;
	// ori r8,r10,21849
	ctx.r8.u64 = ctx.r10.u64 | 21849;
	// ori r10,r9,22105
	ctx.r10.u64 = ctx.r9.u64 | 22105;
	// ori r9,r7,22869
	ctx.r9.u64 = ctx.r7.u64 | 22869;
	// ori r26,r6,13392
	r26.u64 = ctx.r6.u64 | 13392;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r4,22105
	ctx.r6.u64 = ctx.r4.u64 | 22105;
	// ori r28,r31,22857
	r28.u64 = r31.u64 | 22857;
	// li r29,1
	r29.s64 = 1;
	// ori r30,r30,13385
	r30.u64 = r30.u64 | 13385;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x823befe0
	if (ctx.cr6.gt) goto loc_823BEFE0;
	// beq cr6,0x823befd8
	if (ctx.cr6.eq) goto loc_823BEFD8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823befc8
	if (ctx.cr6.gt) goto loc_823BEFC8;
	// beq cr6,0x823befd8
	if (ctx.cr6.eq) goto loc_823BEFD8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf008
	if (ctx.cr6.eq) goto loc_823BF008;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823bf008
	if (ctx.cr6.eq) goto loc_823BF008;
	// b 0x823bf00c
	goto loc_823BF00C;
loc_823BEFC8:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x823befd8
	if (ctx.cr6.eq) goto loc_823BEFD8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823bf00c
	if (!ctx.cr6.eq) goto loc_823BF00C;
loc_823BEFD8:
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// b 0x823bf00c
	goto loc_823BF00C;
loc_823BEFE0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bgt cr6,0x823bf000
	if (ctx.cr6.gt) goto loc_823BF000;
	// beq cr6,0x823befd8
	if (ctx.cr6.eq) goto loc_823BEFD8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823bf008
	if (ctx.cr6.eq) goto loc_823BF008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823bf008
	if (ctx.cr6.eq) goto loc_823BF008;
	// b 0x823bf00c
	goto loc_823BF00C;
loc_823BF000:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823bf00c
	if (!ctx.cr6.eq) goto loc_823BF00C;
loc_823BF008:
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_823BF00C:
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r31,r11,22094
	r31.u64 = ctx.r11.u64 | 22094;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x823bf07c
	if (ctx.cr6.gt) goto loc_823BF07C;
	// beq cr6,0x823bf058
	if (ctx.cr6.eq) goto loc_823BF058;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823bf048
	if (ctx.cr6.gt) goto loc_823BF048;
	// beq cr6,0x823bf058
	if (ctx.cr6.eq) goto loc_823BF058;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf0ac
	if (ctx.cr6.eq) goto loc_823BF0AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823bf0ac
	if (ctx.cr6.eq) goto loc_823BF0AC;
	// b 0x823bf05c
	goto loc_823BF05C;
loc_823BF048:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x823bf058
	if (ctx.cr6.eq) goto loc_823BF058;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823bf05c
	if (!ctx.cr6.eq) goto loc_823BF05C;
loc_823BF058:
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
loc_823BF05C:
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf0b4
	if (ctx.cr6.eq) goto loc_823BF0B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823bf0b4
	if (ctx.cr6.eq) goto loc_823BF0B4;
	// stw r29,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, r29.u32);
	// b 0x823bf0cc
	goto loc_823BF0CC;
loc_823BF07C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823bf09c
	if (ctx.cr6.gt) goto loc_823BF09C;
	// beq cr6,0x823bf0ac
	if (ctx.cr6.eq) goto loc_823BF0AC;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823bf058
	if (ctx.cr6.eq) goto loc_823BF058;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823bf0ac
	if (ctx.cr6.eq) goto loc_823BF0AC;
	// b 0x823bf05c
	goto loc_823BF05C;
loc_823BF09C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x823bf058
	if (ctx.cr6.eq) goto loc_823BF058;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823bf05c
	if (!ctx.cr6.eq) goto loc_823BF05C;
loc_823BF0AC:
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// b 0x823bf05c
	goto loc_823BF05C;
loc_823BF0B4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x823bf0c8
	if (ctx.cr6.gt) goto loc_823BF0C8;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_823BF0C8:
	// stw r11,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_823BF0CC:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,14516(r3)
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,14520(r3)
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r7.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x823bf114
	if (ctx.cr6.gt) goto loc_823BF114;
	// beq cr6,0x823bf124
	if (ctx.cr6.eq) goto loc_823BF124;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x823bf124
	if (ctx.cr6.eq) goto loc_823BF124;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x823bf134
	if (!ctx.cr6.eq) goto loc_823BF134;
	// lwz r11,14516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x823bf12c
	goto loc_823BF12C;
loc_823BF114:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823bf124
	if (ctx.cr6.eq) goto loc_823BF124;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x823bf134
	if (!ctx.cr6.eq) goto loc_823BF134;
loc_823BF124:
	// lwz r11,14516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_823BF12C:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14524(r3)
	REX_STORE_U32(ctx.r3.u32 + 14524, ctx.r9.u32);
loc_823BF134:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf150
	if (ctx.cr6.eq) goto loc_823BF150;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823bf150
	if (ctx.cr6.eq) goto loc_823BF150;
	// stw r29,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, r29.u32);
	// b 0x823bf168
	goto loc_823BF168;
loc_823BF150:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x823bf164
	if (ctx.cr6.gt) goto loc_823BF164;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_823BF164:
	// stw r11,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
loc_823BF168:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,14480(r3)
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,14484(r3)
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r7.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x823bf1c4
	if (ctx.cr6.gt) goto loc_823BF1C4;
	// beq cr6,0x823bf1d4
	if (ctx.cr6.eq) goto loc_823BF1D4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x823bf1d4
	if (ctx.cr6.eq) goto loc_823BF1D4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x823bf1b8
	if (ctx.cr6.eq) goto loc_823BF1B8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823bf1e4
	if (!ctx.cr6.eq) goto loc_823BF1E4;
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// stw r11,14488(r3)
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r11.u32);
	// b 0x823bf1e4
	goto loc_823BF1E4;
loc_823BF1B8:
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x823bf1dc
	goto loc_823BF1DC;
loc_823BF1C4:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823bf1d4
	if (ctx.cr6.eq) goto loc_823BF1D4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x823bf1e4
	if (!ctx.cr6.eq) goto loc_823BF1E4;
loc_823BF1D4:
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_823BF1DC:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14488(r3)
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r9.u32);
loc_823BF1E4:
	// lwz r11,14600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x823bf1f8
	if (!ctx.cr6.eq) goto loc_823BF1F8;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_823BF1F8:
	// lwz r11,14596(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x823bf20c
	if (!ctx.cr6.eq) goto loc_823BF20C;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_823BF20C:
	// lwz r11,14592(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bf21c
	if (!ctx.cr6.eq) goto loc_823BF21C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
loc_823BF21C:
	// lwz r4,14588(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14588);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823bf22c
	if (!ctx.cr6.eq) goto loc_823BF22C;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_823BF22C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x823bdc28
	ctx.lr = 0x823BF234;
	sub_823BDC28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823C4C50) {
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
	ctx.lr = 0x823C4C58;
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
	// ble cr6,0x823c4c98
	if (!ctx.cr6.gt) goto loc_823C4C98;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_823C4C78:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823C4C88;
	sub_822D4FA0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// bne 0x823c4c78
	if (!ctx.cr0.eq) goto loc_823C4C78;
loc_823C4C98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823C6338) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823C6340;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// rlwinm r9,r6,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// mullw r11,r6,r17
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r17.s32);
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r31,16
	r31.s64 = 16;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823c6428
	if (!ctx.cr6.gt) goto loc_823C6428;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// mr r25,r31
	r25.u64 = r31.u64;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r3,1
	r26.s64 = ctx.r3.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_823C63C0:
	// addi r28,r7,-1
	r28.s64 = ctx.r7.s64 + -1;
	// lvrx128 v63,r25,r7
	temp.u32 = r25.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r4,16
	r27.s64 = ctx.r4.s64 + 16;
	// vor128 v11,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvrx128 v61,r31,r28
	temp.u32 = r31.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r28
	temp.u32 = r28.u32;
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
	// vsrah v3,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v11,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmrghb v1,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v31,v12,v11
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v1,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvrx v1,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v1.u8[i]);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stvlx v31,0,r27
	ea = r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v31.u8[15 - i]);
	// stvrx v31,r27,r31
	ea = r27.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v31.u8[i]);
	// bdnz 0x823c63c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C63C0;
loc_823C6428:
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r18.s32, ctx.xer);
	// bge cr6,0x823c6478
	if (!ctx.cr6.lt) goto loc_823C6478;
	// subf r4,r11,r18
	ctx.r4.u64 = r18.u64 - ctx.r11.u64;
	// add r7,r26,r30
	ctx.r7.u64 = r26.u64 + r30.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r27,r5,1
	r27.s64 = ctx.r5.s64 + 1;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823C6450:
	// lbzx r9,r3,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + r30.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// rlwinm r9,r4,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0xFF;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823c6450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C6450;
loc_823C6478:
	// lbzx r9,r3,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + r30.u32);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r4,324(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// add r27,r30,r17
	r27.u64 = r30.u64 + r17.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// stb r9,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// bge cr6,0x823c67e8
	if (!ctx.cr6.lt) goto loc_823C67E8;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subfic r10,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_823C64B0:
	// rlwinm r10,r18,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFE0;
	// li r30,0
	r30.s64 = 0;
	// li r19,1
	r19.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c667c
	if (!ctx.cr6.gt) goto loc_823C667C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// add r4,r29,r8
	ctx.r4.u64 = r29.u64 + ctx.r8.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r27,1
	ctx.r5.s64 = r27.s64 + 1;
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// subf r28,r6,r15
	r28.u64 = r15.u64 - ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r26,r6,r29
	r26.u64 = r29.u64 - ctx.r6.u64;
	// subf r25,r6,r4
	r25.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r24,r29,r15
	r24.u64 = r15.u64 - r29.u64;
	// subf r23,r29,r4
	r23.u64 = ctx.r4.u64 - r29.u64;
	// addi r19,r30,1
	r19.s64 = r30.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r20,r31
	r20.u64 = r31.u64;
loc_823C650C:
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lvlx128 v59,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r31,r5
	temp.u32 = r31.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r22,r24,r7
	r22.u64 = r24.u64 + ctx.r7.u64;
	// vor128 v11,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v57,r24,r7
	temp.u32 = r24.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r21,r28,r10
	r21.u64 = r28.u64 + ctx.r10.u64;
	// lvlx128 v56,r28,r10
	temp.u32 = r28.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// lvlx128 v55,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lvrx128 v54,r31,r4
	temp.u32 = r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r31,r22
	temp.u32 = r31.u32 + r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r26,r10
	ctx.r4.u64 = r26.u64 + ctx.r10.u64;
	// vor128 v10,v57,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v52,r20,r21
	temp.u32 = r20.u32 + r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// add r22,r25,r10
	r22.u64 = r25.u64 + ctx.r10.u64;
	// vmrglb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v3,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v2,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v31,v10,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v30,v3,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v2,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v28,v1,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v27,v31,v10
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v9,v9
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus v6,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v25,v8,v8
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v26,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v7,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v23,v25,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v22,v0,v7
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v21,v0,v7
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx v7,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvrx v7,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v7.u8[i]);
	// add r3,r23,r7
	ctx.r3.u64 = r23.u64 + ctx.r7.u64;
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// vor v7,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v21.u8));
	// stvrx v12,r10,r31
	ea = ctx.r10.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// vor v12,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vaddshs v31,v5,v5
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v3,v24,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v20,v7,v7
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v19,v12,v12
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v18,v27,v7
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v28,v12
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
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
	// vaddshs v7,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v11,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v1,v10,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v51,v12,v14
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v25,v31,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v30,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v8,v25
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvlx128 v51,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// vpkshus128 v50,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// stvrx128 v51,r7,r31
	ea = ctx.r7.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// vpkshus128 v49,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v22,v9,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsrah v21,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v50,r26,r10
	ea = r26.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvrx128 v50,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// stvlx128 v49,r23,r7
	ea = r23.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stvrx128 v49,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v49.u8[i]);
	// vpkshus128 v48,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// stvlx128 v48,r25,r10
	ea = r25.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvrx128 v48,r22,r31
	ea = r22.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// bdnz 0x823c650c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C650C;
loc_823C667C:
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r18.s32, ctx.xer);
	// bge cr6,0x823c6770
	if (!ctx.cr6.lt) goto loc_823C6770;
	// subf r7,r11,r18
	ctx.r7.u64 = r18.u64 - ctx.r11.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r29,r8
	ctx.r10.u64 = r29.u64 + ctx.r8.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// add r7,r19,r27
	ctx.r7.u64 = r19.u64 + r27.u64;
	// rlwinm r5,r3,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r22,r10,r4
	r22.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r21,r15,1
	r21.s64 = r15.s64 + 1;
	// addi r20,r6,1
	r20.s64 = ctx.r6.s64 + 1;
	// add r19,r22,r8
	r19.u64 = r22.u64 + ctx.r8.u64;
	// addi r28,r7,-1
	r28.s64 = ctx.r7.s64 + -1;
	// subf r18,r6,r15
	r18.u64 = r15.u64 - ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r17,r6,r29
	r17.u64 = r29.u64 - ctx.r6.u64;
	// subf r16,r6,r10
	r16.u64 = ctx.r10.u64 - ctx.r6.u64;
loc_823C66C4:
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r14,r30,r27
	r14.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// lbzu r10,1(r28)
	ea = 1 + r28.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r4,r21,r11
	ctx.r4.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// rotlwi r24,r14,1
	r24.u64 = __builtin_rotateleft32(r14.u32, 1);
	// add r10,r10,r14
	ctx.r10.u64 = ctx.r10.u64 + r14.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbzx r26,r7,r18
	r26.u64 = REX_LOAD_U8(ctx.r7.u32 + r18.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rotlwi r25,r4,1
	r25.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stbx r14,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, r14.u8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r26,r26,1
	r26.u64 = __builtin_rotateleft32(r26.u32, 1);
	// rlwinm r23,r10,1,15,30
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// stbx r10,r20,r11
	REX_STORE_U8(r20.u32 + ctx.r11.u32, ctx.r10.u8);
	// add r26,r4,r26
	r26.u64 = ctx.r4.u64 + r26.u64;
	// add r25,r3,r25
	r25.u64 = ctx.r3.u64 + r25.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// add r24,r14,r24
	r24.u64 = r14.u64 + r24.u64;
	// add r5,r10,r23
	ctx.r5.u64 = ctx.r10.u64 + r23.u64;
	// add r26,r26,r14
	r26.u64 = r26.u64 + r14.u64;
	// add r25,r25,r10
	r25.u64 = r25.u64 + ctx.r10.u64;
	// add r4,r24,r4
	ctx.r4.u64 = r24.u64 + ctx.r4.u64;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r26,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r26.s64 = r26.s32 >> 2;
	// srawi r5,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	ctx.r5.s64 = r25.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// clrlwi r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stbx r26,r7,r17
	REX_STORE_U8(ctx.r7.u32 + r17.u32, r26.u8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r5,r22,r11
	REX_STORE_U8(r22.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r3,r19,r11
	REX_STORE_U8(r19.u32 + ctx.r11.u32, ctx.r3.u8);
	// mr r25,r14
	r25.u64 = r14.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r7,r16
	REX_STORE_U8(ctx.r7.u32 + r16.u32, ctx.r10.u8);
	// bdnz 0x823c66c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C66C4;
	// lwz r17,308(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r18,284(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
loc_823C6770:
	// lbzx r7,r11,r15
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + r15.u32);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// lbzx r26,r30,r27
	r26.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r30,r26,1
	r30.u64 = __builtin_rotateleft32(r26.u32, 1);
	// add r28,r10,r3
	r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r3,r26,r30
	ctx.r3.u64 = r26.u64 + r30.u64;
	// stbx r26,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, r26.u8);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r7,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r7.s64 = r28.s32 >> 2;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stbx r7,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r7.u8);
	// stb r7,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r7.u8);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r3,r4,r8
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r3.u8);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r27,r27,r17
	r27.u64 = r27.u64 + r17.u64;
	// bne 0x823c64b0
	if (!ctx.cr0.eq) goto loc_823C64B0;
loc_823C67E8:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823C67F8;
	sub_822D4FA0(ctx, base);
	// lbzx r10,r15,r18
	ctx.r10.u64 = REX_LOAD_U8(r15.u32 + r18.u32);
	// add r11,r29,r18
	ctx.r11.u64 = r29.u64 + r18.u64;
	// stbx r10,r29,r18
	REX_STORE_U8(r29.u32 + r18.u32, ctx.r10.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E2338) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E2340;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2368
	if (ctx.cr6.eq) goto loc_823E2368;
	// bl 0x823dc0b0
	ctx.lr = 0x823E2364;
	sub_823DC0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823E2368:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823e7070
	ctx.lr = 0x823E2390;
	sub_823E7070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E2510) {
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
	// bl 0x822d4e78
	ctx.lr = 0x823E2518;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
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
	// beq cr6,0x823e254c
	if (ctx.cr6.eq) goto loc_823E254C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E2548;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823E254C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2568
	if (ctx.cr6.eq) goto loc_823E2568;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E2564;
	sub_823DC0B0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_823E2568:
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
	// lfs f31,1996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
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
	// bne 0x823e25d0
	if (!ctx.cr0.eq) goto loc_823E25D0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e25d8
	goto loc_823E25D8;
loc_823E25D0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E25D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2630
	if (ctx.cr6.eq) goto loc_823E2630;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f12,-10496(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -10496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-10488(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -10488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -10492);
	ctx.f0.f64 = double(temp.f32);
loc_823E2600:
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
	// blt cr6,0x823e2600
	if (ctx.cr6.lt) goto loc_823E2600;
loc_823E2630:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2648
	if (ctx.cr6.eq) goto loc_823E2648;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E2648;
	sub_823DC658(ctx, base);
loc_823E2648:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e2858
	if (!ctx.cr6.gt) goto loc_823E2858;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r27,r28
	r29.u64 = r28.u64 - r27.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lfd f8,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r24,-32255
	r24.s64 = -2113863680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f9,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// lfs f12,-30028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -30028);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,21104(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 21104);
	ctx.f7.f64 = double(temp.f32);
loc_823E26B0:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
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
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x823e27d8
	if (ctx.cr6.eq) goto loc_823E27D8;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r28,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r28.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
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
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_823E27D8:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823e27e8
	if (ctx.cr6.lt) goto loc_823E27E8;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823E27E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e2800
	if (!ctx.cr6.gt) goto loc_823E2800;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x823e2804
	if (ctx.cr6.lt) goto loc_823E2804;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x823e2804
	goto loc_823E2804;
loc_823E2800:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823E2804:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823e2814
	if (ctx.cr6.lt) goto loc_823E2814;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823E2814:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e282c
	if (!ctx.cr6.gt) goto loc_823E282C;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x823e2830
	if (ctx.cr6.lt) goto loc_823E2830;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x823e2830
	goto loc_823E2830;
loc_823E282C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823E2830:
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwux r11,r29,r27
	ea = r29.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e26b0
	if (ctx.cr6.lt) goto loc_823E26B0;
loc_823E2858:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823EB1C0) {
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
	ctx.lr = 0x823EB1C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 10);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// bne 0x823eb440
	if (!ctx.cr0.eq) goto loc_823EB440;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823eb3e8
	if (ctx.cr6.eq) goto loc_823EB3E8;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823eb30c
	if (ctx.cr6.eq) goto loc_823EB30C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lhz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb2cc
	if (ctx.cr6.lt) goto loc_823EB2CC;
	// beq cr6,0x823eb280
	if (ctx.cr6.eq) goto loc_823EB280;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823eb4b8
	if (!ctx.cr6.lt) goto loc_823EB4B8;
	// lhz r11,2(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb274
	if (ctx.cr6.lt) goto loc_823EB274;
	// beq cr6,0x823eb268
	if (ctx.cr6.eq) goto loc_823EB268;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb25c
	if (ctx.cr6.lt) goto loc_823EB25C;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
loc_823EB250:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32648
	r31.s64 = ctx.r11.s64 + -32648;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB25C:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32424
	r31.s64 = ctx.r11.s64 + -32424;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB268:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32568
	r31.s64 = ctx.r11.s64 + -32568;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB274:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32648
	r31.s64 = ctx.r11.s64 + -32648;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB280:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb2c0
	if (ctx.cr6.lt) goto loc_823EB2C0;
	// beq cr6,0x823eb2b4
	if (ctx.cr6.eq) goto loc_823EB2B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb2a8
	if (ctx.cr6.lt) goto loc_823EB2A8;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32728
	r31.s64 = ctx.r11.s64 + -32728;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB2A8:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32768
	r31.s64 = ctx.r11.s64 + -32768;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB2B4:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32680
	r31.s64 = ctx.r11.s64 + 32680;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB2C0:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32768
	r31.s64 = ctx.r11.s64 + -32768;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB2CC:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb300
	if (ctx.cr6.lt) goto loc_823EB300;
	// beq cr6,0x823eb474
	if (ctx.cr6.eq) goto loc_823EB474;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb2f4
	if (ctx.cr6.lt) goto loc_823EB2F4;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32576
	r31.s64 = ctx.r11.s64 + 32576;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB2F4:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32488
	r31.s64 = ctx.r11.s64 + 32488;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB300:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32448
	r31.s64 = ctx.r11.s64 + 32448;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB30C:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb3a8
	if (ctx.cr6.lt) goto loc_823EB3A8;
	// beq cr6,0x823eb368
	if (ctx.cr6.eq) goto loc_823EB368;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823eb4b8
	if (!ctx.cr6.lt) goto loc_823EB4B8;
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb35c
	if (ctx.cr6.lt) goto loc_823EB35C;
	// beq cr6,0x823eb350
	if (ctx.cr6.eq) goto loc_823EB350;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb344
	if (ctx.cr6.lt) goto loc_823EB344;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// b 0x823eb498
	goto loc_823EB498;
loc_823EB344:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32232
	r31.s64 = ctx.r11.s64 + 32232;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB350:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32088
	r31.s64 = ctx.r11.s64 + 32088;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB35C:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32368
	r31.s64 = ctx.r11.s64 + 32368;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB368:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb39c
	if (ctx.cr6.lt) goto loc_823EB39C;
	// beq cr6,0x823eb390
	if (ctx.cr6.eq) goto loc_823EB390;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb4a4
	if (ctx.cr6.lt) goto loc_823EB4A4;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32008
	r31.s64 = ctx.r11.s64 + 32008;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB390:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31920
	r31.s64 = ctx.r11.s64 + 31920;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB39C:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31880
	r31.s64 = ctx.r11.s64 + 31880;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB3A8:
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb3dc
	if (ctx.cr6.lt) goto loc_823EB3DC;
	// beq cr6,0x823eb4b0
	if (ctx.cr6.eq) goto loc_823EB4B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb3d0
	if (ctx.cr6.lt) goto loc_823EB3D0;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31776
	r31.s64 = ctx.r11.s64 + 31776;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB3D0:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31688
	r31.s64 = ctx.r11.s64 + 31688;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB3DC:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31648
	r31.s64 = ctx.r11.s64 + 31648;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB3E8:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb434
	if (ctx.cr6.lt) goto loc_823EB434;
	// beq cr6,0x823eb428
	if (ctx.cr6.eq) goto loc_823EB428;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823eb41c
	if (ctx.cr6.lt) goto loc_823EB41C;
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32288
	r31.s64 = ctx.r11.s64 + -32288;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB41C:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32080
	r31.s64 = ctx.r11.s64 + -32080;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB428:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32216
	r31.s64 = ctx.r11.s64 + -32216;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB434:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r31,r11,-32288
	r31.s64 = ctx.r11.s64 + -32288;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB440:
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823eb480
	if (ctx.cr6.eq) goto loc_823EB480;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823eb4b8
	if (!ctx.cr6.eq) goto loc_823EB4B8;
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb474
	if (ctx.cr6.lt) goto loc_823EB474;
	// beq cr6,0x823eb2a8
	if (ctx.cr6.eq) goto loc_823EB2A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823eb4b8
	if (!ctx.cr6.lt) goto loc_823EB4B8;
	// b 0x823eb250
	goto loc_823EB250;
loc_823EB474:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32448
	r31.s64 = ctx.r11.s64 + 32448;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB480:
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eb4b0
	if (ctx.cr6.lt) goto loc_823EB4B0;
	// beq cr6,0x823eb4a4
	if (ctx.cr6.eq) goto loc_823EB4A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823eb4b8
	if (!ctx.cr6.lt) goto loc_823EB4B8;
loc_823EB498:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32368
	r31.s64 = ctx.r11.s64 + 32368;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB4A4:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31880
	r31.s64 = ctx.r11.s64 + 31880;
	// b 0x823eb4b8
	goto loc_823EB4B8;
loc_823EB4B0:
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,31648
	r31.s64 = ctx.r11.s64 + 31648;
loc_823EB4B8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x823cd118
	ctx.lr = 0x823EB4C4;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823eb4ec
	if (ctx.cr0.eq) goto loc_823EB4EC;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823e74d8
	ctx.lr = 0x823EB4E4;
	sub_823E74D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823eb4f0
	goto loc_823EB4F0;
loc_823EB4EC:
	// li r31,0
	r31.s64 = 0;
loc_823EB4F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb51c
	if (ctx.cr6.eq) goto loc_823EB51C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eb528
	ctx.lr = 0x823EB500;
	sub_823EB528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge 0x823eb520
	if (!ctx.cr0.lt) goto loc_823EB520;
	// bl 0x823e7960
	ctx.lr = 0x823EB510;
	sub_823E7960(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823EB51C;
	sub_823CD250(ctx, base);
loc_823EB51C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EB520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F5F40) {
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
	ctx.lr = 0x823F5F48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// li r25,14
	r25.s64 = 14;
	// li r27,0
	r27.s64 = 0;
loc_823F5F5C:
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x823f5f70
	if (ctx.cr6.lt) goto loc_823F5F70;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x823f5f94
	if (ctx.cr6.lt) goto loc_823F5F94;
loc_823F5F70:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r25.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r26,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r26.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F5F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5F94:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x823f601c
	if (!ctx.cr6.eq) goto loc_823F601C;
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f5fd8
	if (ctx.cr6.eq) goto loc_823F5FD8;
loc_823F5FA8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f5fcc
	if (ctx.cr6.eq) goto loc_823F5FCC;
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5FCC:
	// lwz r30,44(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823f5fa8
	if (!ctx.cr6.eq) goto loc_823F5FA8;
loc_823F5FD8:
	// lwz r30,72(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r27,68(r31)
	REX_STORE_U32(r31.u32 + 68, r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f6018
	if (ctx.cr6.eq) goto loc_823F6018;
loc_823F5FE8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f600c
	if (ctx.cr6.eq) goto loc_823F600C;
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F600C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F600C:
	// lwz r30,44(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823f5fe8
	if (!ctx.cr6.eq) goto loc_823F5FE8;
loc_823F6018:
	// stw r27,72(r31)
	REX_STORE_U32(r31.u32 + 72, r27.u32);
loc_823F601C:
	// addi r11,r26,15
	ctx.r11.s64 = r26.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f606c
	if (ctx.cr6.eq) goto loc_823F606C;
loc_823F6034:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823f9ed8
	ctx.lr = 0x823F6054;
	sub_823F9ED8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x823f6034
	if (!ctx.cr6.eq) goto loc_823F6034;
loc_823F606C:
	// addi r11,r26,13
	ctx.r11.s64 = r26.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f60bc
	if (ctx.cr6.eq) goto loc_823F60BC;
loc_823F6084:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823f9ed8
	ctx.lr = 0x823F60A4;
	sub_823F9ED8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// bne cr6,0x823f6084
	if (!ctx.cr6.eq) goto loc_823F6084;
loc_823F60BC:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge 0x823f5f5c
	if (!ctx.cr0.lt) goto loc_823F5F5C;
	// li r5,84
	ctx.r5.s64 = 84;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f9ed8
	ctx.lr = 0x823F60D4;
	sub_823F9ED8(ctx, base);
	// stw r27,4(r28)
	REX_STORE_U32(r28.u32 + 4, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8229a710
	ctx.lr = 0x823F60E0;
	sub_8229A710(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823FB0A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823FB0B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,432(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fb10c
	if (!ctx.cr6.eq) goto loc_823FB10C;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FB108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_823FB10C:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fb22c
	if (!ctx.cr6.gt) goto loc_823FB22C;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
loc_823FB12C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lhz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fb238
	if (ctx.cr6.eq) goto loc_823FB238;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fb238
	if (ctx.cr6.lt) goto loc_823FB238;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823fb1ac
	if (ctx.cr6.eq) goto loc_823FB1AC;
	// li r29,1
	r29.s64 = 1;
loc_823FB1AC:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r5,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823fb1c8
	if (ctx.cr6.eq) goto loc_823FB1C8;
	// li r29,1
	r29.s64 = 1;
loc_823FB1C8:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823fb1e0
	if (ctx.cr6.eq) goto loc_823FB1E0;
	// li r29,1
	r29.s64 = 1;
loc_823FB1E0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823fb1f8
	if (ctx.cr6.eq) goto loc_823FB1F8;
	// li r29,1
	r29.s64 = 1;
loc_823FB1F8:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823fb210
	if (ctx.cr6.eq) goto loc_823FB210;
	// li r29,1
	r29.s64 = 1;
loc_823FB210:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// addi r6,r6,84
	ctx.r6.s64 = ctx.r6.s64 + 84;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fb12c
	if (ctx.cr6.lt) goto loc_823FB12C;
loc_823FB22C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823FB238:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82402B38) {
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
	ctx.lr = 0x82402B40;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r4,80(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// li r30,8
	r30.s64 = 8;
	// addi r29,r11,128
	r29.s64 = ctx.r11.s64 + 128;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82402B64:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// beq cr6,0x82402cf4
	if (ctx.cr6.eq) goto loc_82402CF4;
	// lhz r8,-80(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -80);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82402be0
	if (!ctx.cr6.eq) goto loc_82402BE0;
	// lhz r4,-64(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402be0
	if (!ctx.cr6.eq) goto loc_82402BE0;
	// lhz r4,-48(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402be0
	if (!ctx.cr6.eq) goto loc_82402BE0;
	// lhz r4,-16(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402be0
	if (!ctx.cr6.eq) goto loc_82402BE0;
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402be0
	if (!ctx.cr6.eq) goto loc_82402BE0;
	// lhz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82402be0
	if (!ctx.cr6.eq) goto loc_82402BE0;
	// lhz r8,-96(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -96);
	// lhz r5,-96(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -96);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r8,r4,r3
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-32(r9)
	REX_STORE_U32(ctx.r9.u32 + -32, ctx.r5.u32);
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r5,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r5.u32);
	// b 0x82402cf0
	goto loc_82402CF0;
loc_82402BE0:
	// lhz r3,-80(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -80);
	// lhz r5,-48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -48);
	// lhz r4,-48(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -48);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r31,-16(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -16);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,-16(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -16);
	// mullw r24,r3,r8
	r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lhz r8,-64(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -64);
	// lhz r27,0(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,-64(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + -64);
	// lhz r25,0(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r23,-96(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + -96);
	// lhz r3,-96(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -96);
	// lhz r21,16(r10)
	r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r22,16(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// extsh r20,r8
	r20.s64 = ctx.r8.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// extsh r26,r26
	r26.s64 = r26.s16;
	// mullw r31,r31,r28
	r31.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// mulli r8,r4,7373
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(7373));
	// mulli r5,r24,20995
	ctx.r5.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(20995));
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r28,r23
	r28.s64 = r23.s16;
	// mullw r27,r27,r25
	r27.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// extsh r23,r21
	r23.s64 = r21.s16;
	// mullw r26,r26,r20
	r26.s64 = int64_t(r26.s32) * int64_t(r20.s32);
	// add r21,r5,r8
	r21.u64 = ctx.r5.u64 + ctx.r8.u64;
	// extsh r25,r22
	r25.s64 = r22.s16;
	// mullw r5,r3,r28
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// mulli r22,r31,11893
	r22.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(11893));
	// mulli r4,r4,17799
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(17799));
	// mulli r28,r26,15137
	r28.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(15137));
	// mulli r27,r27,6270
	r27.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(6270));
	// mulli r31,r31,4926
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(4926));
	// mullw r25,r25,r23
	r25.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// subf r3,r4,r22
	ctx.r3.u64 = r22.u64 - ctx.r4.u64;
	// subf r4,r27,r28
	ctx.r4.u64 = r28.u64 - r27.u64;
	// mulli r8,r24,8697
	ctx.r8.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(8697));
	// subf r31,r31,r21
	r31.u64 = r21.u64 - r31.u64;
	// mulli r28,r25,4176
	r28.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(4176));
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// add r27,r3,r8
	r27.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r3,r28,r31
	ctx.r3.u64 = r31.u64 - r28.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mulli r28,r25,1730
	r28.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(1730));
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r31,r8,r3
	r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r5,r28,r27
	ctx.r5.u64 = r27.u64 - r28.u64;
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r31,r31,2048
	r31.s64 = r31.s64 + 2048;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r4,r8,2048
	ctx.r4.s64 = ctx.r8.s64 + 2048;
	// srawi r8,r31,12
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 12;
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// addi r31,r5,2048
	r31.s64 = ctx.r5.s64 + 2048;
	// stw r8,-32(r9)
	REX_STORE_U32(ctx.r9.u32 + -32, ctx.r8.u32);
	// srawi r5,r4,12
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 12;
	// srawi r8,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 12;
	// srawi r4,r31,12
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFF) != 0);
	ctx.r4.s64 = r31.s32 >> 12;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r4,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
loc_82402CF0:
	// stw r5,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r5.u32);
loc_82402CF4:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bdnz 0x82402b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402B64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82402D1C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82402d98
	if (!ctx.cr6.eq) goto loc_82402D98;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82402d98
	if (!ctx.cr6.eq) goto loc_82402D98;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82402d98
	if (!ctx.cr6.eq) goto loc_82402D98;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82402d98
	if (!ctx.cr6.eq) goto loc_82402D98;
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82402d98
	if (!ctx.cr6.eq) goto loc_82402D98;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82402d98
	if (!ctx.cr6.eq) goto loc_82402D98;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r6,r8,22
	ctx.r6.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + r29.u32);
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// stb r5,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r5,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r5,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// b 0x82402e60
	goto loc_82402E60;
loc_82402D98:
	// lwz r27,48(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mulli r6,r31,20995
	ctx.r6.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20995));
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r26,28(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mulli r8,r9,7373
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(7373));
	// mulli r4,r4,6270
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(6270));
	// mulli r26,r26,15137
	r26.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(15137));
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mulli r25,r30,4926
	r25.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(4926));
	// rlwinm r6,r5,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// subf r5,r4,r26
	ctx.r5.u64 = r26.u64 - ctx.r4.u64;
	// subf r4,r25,r8
	ctx.r4.u64 = ctx.r8.u64 - r25.u64;
	// mulli r26,r27,4176
	r26.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(4176));
	// mulli r25,r9,17799
	r25.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(17799));
	// mulli r30,r30,11893
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(11893));
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - r26.u64;
	// mulli r9,r31,8697
	ctx.r9.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(8697));
	// subf r30,r25,r30
	r30.u64 = r30.u64 - r25.u64;
	// add r26,r8,r4
	r26.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// add r31,r26,r3
	r31.u64 = r26.u64 + ctx.r3.u64;
	// mulli r30,r27,1730
	r30.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(1730));
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// srawi r31,r31,19
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFF) != 0);
	r31.s64 = r31.s32 >> 19;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r6,r31,22
	ctx.r6.u64 = r31.u32 & 0x3FF;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r5,r4,19
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 19;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r4,r6,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + r29.u32);
	// srawi r8,r8,19
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 19;
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// srawi r5,r9,19
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 19;
	// clrlwi r9,r8,22
	ctx.r9.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r8,r5,22
	ctx.r8.u64 = ctx.r5.u32 & 0x3FF;
	// stb r4,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// lbzx r6,r6,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + r29.u32);
	// stb r6,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// stb r5,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbzx r4,r8,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
loc_82402E60:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bdnz 0x82402d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402D1C;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_824115C0) {
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
	// bl 0x822d4e70
	ctx.lr = 0x824115C8;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f14
	ctx.lr = 0x824115D0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241189c
	if (ctx.cr6.eq) goto loc_8241189C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241189c
	if (ctx.cr6.eq) goto loc_8241189C;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f21,f0
	f21.f64 = double(float(ctx.f0.f64));
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lfs f24,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f24.f64 = double(temp.f32);
	// li r3,16
	ctx.r3.s64 = 16;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f26,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f26.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// frsp f22,f13
	f22.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f22,f21
	f27.f64 = double(float(f22.f64 / f21.f64));
	// fdivs f19,f24,f27
	f19.f64 = double(float(f24.f64 / f27.f64));
	// beq cr6,0x824116ac
	if (ctx.cr6.eq) goto loc_824116AC;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82411660:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 - f24.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + f27.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bdnz 0x82411660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411660;
loc_824116AC:
	// bl 0x822c80d0
	ctx.lr = 0x824116B0;
	sub_822C80D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8241189c
	if (ctx.cr0.eq) goto loc_8241189C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,4
	r31.s64 = 4;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f25,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f25.f64 = double(temp.f32);
	// fmr f28,f25
	f28.f64 = f25.f64;
	// beq cr6,0x82411890
	if (ctx.cr6.eq) goto loc_82411890;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f20,-24724(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24724);
	f20.f64 = double(temp.f32);
loc_824116E0:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r25,r31
	r25.u64 = r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r24,r31,r28
	r24.u64 = r31.u64 + r28.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f23,f0
	f23.f64 = double(float(ctx.f0.f64));
loc_82411704:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fsubs f29,f0,f24
	f29.f64 = double(float(ctx.f0.f64 - f24.f64));
	// fmuls f30,f29,f27
	f30.f64 = double(float(f29.f64 * f27.f64));
	// fadds f31,f30,f27
	f31.f64 = double(float(f30.f64 + f27.f64));
	// bne cr6,0x82411748
	if (!ctx.cr6.eq) goto loc_82411748;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(f30.f64, f25.f64);
	// bge cr6,0x8241173c
	if (!ctx.cr6.lt) goto loc_8241173C;
	// fmr f30,f25
	f30.f64 = f25.f64;
loc_8241173C:
	// fcmpu cr6,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f22.f64);
	// ble cr6,0x82411748
	if (!ctx.cr6.gt) goto loc_82411748;
	// fmr f31,f22
	f31.f64 = f22.f64;
loc_82411748:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822d6130
	ctx.lr = 0x82411750;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82411854
	if (!ctx.cr6.lt) goto loc_82411854;
	// subf r8,r23,r10
	ctx.r8.u64 = ctx.r10.u64 - r23.u64;
loc_82411780:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 + f26.f64));
	// bge cr6,0x82411798
	if (!ctx.cr6.lt) goto loc_82411798;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + r23.u64;
	// b 0x824117a8
	goto loc_824117A8;
loc_82411798:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bge cr6,0x824117a8
	if (!ctx.cr6.lt) goto loc_824117A8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_824117A8:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x824117d0
	if (ctx.cr6.eq) goto loc_824117D0;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f20.f64);
	// ble cr6,0x824117c8
	if (!ctx.cr6.gt) goto loc_824117C8;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_824117C8:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	f28.f64 = f25.f64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_824117D0:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// bge cr6,0x824117dc
	if (!ctx.cr6.lt) goto loc_824117DC;
	// fmr f12,f30
	ctx.f12.f64 = f30.f64;
loc_824117DC:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x824117e8
	if (!ctx.cr6.gt) goto loc_824117E8;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_824117E8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82411814
	if (!ctx.cr6.eq) goto loc_82411814;
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f25.f64);
	// bge cr6,0x82411800
	if (!ctx.cr6.lt) goto loc_82411800;
	// fmr f0,f26
	ctx.f0.f64 = f26.f64;
	// b 0x8241181c
	goto loc_8241181C;
loc_82411800:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f26.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// blt cr6,0x82411814
	if (ctx.cr6.lt) goto loc_82411814;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
	// b 0x8241181c
	goto loc_8241181C;
loc_82411814:
	// fadds f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmsubs f0,f0,f19,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, -f29.f64)));
loc_8241181C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82411828
	if (ctx.cr6.eq) goto loc_82411828;
	// fsubs f0,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 - ctx.f0.f64));
loc_82411828:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmadds f28,f13,f0,f28
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f28.f64)));
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82411780
	if (ctx.cr6.lt) goto loc_82411780;
loc_82411854:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x82411704
	if (ctx.cr6.lt) goto loc_82411704;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f20.f64);
	// ble cr6,0x82411878
	if (!ctx.cr6.gt) goto loc_82411878;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_82411878:
	// subf r11,r25,r31
	ctx.r11.u64 = r31.u64 - r25.u64;
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	f28.f64 = f25.f64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x824116e0
	if (ctx.cr6.lt) goto loc_824116E0;
loc_82411890:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x824118a0
	goto loc_824118A0;
loc_8241189C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824118A0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f60
	ctx.lr = 0x824118AC;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8241B418) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241b530
	if (!ctx.cr6.lt) goto loc_8241B530;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30112(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f12,-7220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7220);
	ctx.f12.f64 = double(temp.f32);
loc_8241B484:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,30,2,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241b484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B484;
loc_8241B530:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b54c
	if (ctx.cr6.eq) goto loc_8241B54C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241B54C;
	sub_82413D40(ctx, base);
loc_8241B54C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b568
	if (ctx.cr6.eq) goto loc_8241B568;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B568;
	sub_82414110(ctx, base);
loc_8241B568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241ED58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241ED60;
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
	// bne cr6,0x8241ed9c
	if (!ctx.cr6.eq) goto loc_8241ED9C;
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
	// li r7,1262
	ctx.r7.s64 = 1262;
	// bl 0x8240e308
	ctx.lr = 0x8241ED9C;
	sub_8240E308(ctx, base);
loc_8241ED9C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241EDA8;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8241ee0c
	if (!ctx.cr6.eq) goto loc_8241EE0C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241edcc
	if (ctx.cr6.eq) goto loc_8241EDCC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241EDCC;
	sub_8240E930(ctx, base);
loc_8241EDCC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ee04
	if (ctx.cr6.eq) goto loc_8241EE04;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241ee04
	if (ctx.cr6.eq) goto loc_8241EE04;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x8241EE04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241EE04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241ee64
	goto loc_8241EE64;
loc_8241EE0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241ee28
	if (ctx.cr6.eq) goto loc_8241EE28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241EE28;
	sub_8240E930(ctx, base);
loc_8241EE28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ee60
	if (ctx.cr6.eq) goto loc_8241EE60;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241ee60
	if (ctx.cr6.eq) goto loc_8241EE60;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,18
	ctx.r6.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x8241EE60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241EE60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241EE64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82421160) {
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
	ctx.lr = 0x82421168;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824211a4
	if (!ctx.cr6.eq) goto loc_824211A4;
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
	// li r7,3546
	ctx.r7.s64 = 3546;
	// bl 0x8240e308
	ctx.lr = 0x824211A4;
	sub_8240E308(ctx, base);
loc_824211A4:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412bf8
	ctx.lr = 0x824211B0;
	sub_82412BF8(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824211f4
	if (ctx.cr6.eq) goto loc_824211F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824211f4
	if (ctx.cr6.eq) goto loc_824211F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x824211CC;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,69
	ctx.r6.s64 = 69;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// bctrl 
	ctx.lr = 0x824211F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824211F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82422E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82422E18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,58
	ctx.r11.s64 = ctx.r4.s64 + 58;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r31,r11,r3
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82422e5c
	if (!ctx.cr6.eq) goto loc_82422E5C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-17024
	ctx.r6.s64 = ctx.r11.s64 + -17024;
	// addi r5,r10,-16848
	ctx.r5.s64 = ctx.r10.s64 + -16848;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82422E5C;
	sub_8240E308(ctx, base);
loc_82422E5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82422E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422ed0
	if (ctx.cr0.eq) goto loc_82422ED0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82422ed0
	if (!ctx.cr6.eq) goto loc_82422ED0;
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// lwz r8,944(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 944);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82422EA8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r10,r9,r7
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82422ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82422EA8;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
loc_82422ED0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82428188) {
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
	// bl 0x82427798
	ctx.lr = 0x824281A0;
	sub_82427798(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-5692
	ctx.r11.s64 = ctx.r11.s64 + -5692;
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

DEFINE_REX_FUNC(sub_82428A58) {
	REX_FUNC_PROLOGUE();
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// ori r10,r10,66
	ctx.r10.u64 = ctx.r10.u64 | 66;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r5,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// b 0x824228e0
	sub_824228E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82428DD8) {
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
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82428a88
	ctx.lr = 0x82428DFC;
	sub_82428A88(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-3272
	ctx.r10.s64 = ctx.r10.s64 + -3272;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stb r11,28(r30)
	REX_STORE_U8(r30.u32 + 28, ctx.r11.u8);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82429AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429AC0;
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
	// bl 0x82412d18
	ctx.lr = 0x82429ADC;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x82429afc
	if (ctx.cr0.eq) goto loc_82429AFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428ba0
	ctx.lr = 0x82429AF8;
	sub_82428BA0(ctx, base);
	// b 0x82429b00
	goto loc_82429B00;
loc_82429AFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429B00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242AE18) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x8242AE20;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8242b2d4
	if (ctx.cr6.eq) goto loc_8242B2D4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8242b2d4
	if (ctx.cr6.eq) goto loc_8242B2D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8242ae74
	if (ctx.cr6.eq) goto loc_8242AE74;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242AE5C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242ae5c
	if (!ctx.cr0.eq) goto loc_8242AE5C;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8242b2d4
	if (!ctx.cr6.eq) goto loc_8242B2D4;
loc_8242AE74:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8242ae9c
	if (ctx.cr6.eq) goto loc_8242AE9C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242AE84:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242ae84
	if (!ctx.cr0.eq) goto loc_8242AE84;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8242b2d4
	if (!ctx.cr6.eq) goto loc_8242B2D4;
loc_8242AE9C:
	// cmplwi cr6,r23,63
	ctx.cr6.compare<uint32_t>(r23.u32, 63, ctx.xer);
	// beq cr6,0x8242aeac
	if (ctx.cr6.eq) goto loc_8242AEAC;
	// cmplwi cr6,r23,1551
	ctx.cr6.compare<uint32_t>(r23.u32, 1551, ctx.xer);
	// bne cr6,0x8242aebc
	if (!ctx.cr6.eq) goto loc_8242AEBC;
loc_8242AEAC:
	// cmplwi cr6,r22,63
	ctx.cr6.compare<uint32_t>(r22.u32, 63, ctx.xer);
	// beq cr6,0x8242aec4
	if (ctx.cr6.eq) goto loc_8242AEC4;
	// cmplwi cr6,r22,1551
	ctx.cr6.compare<uint32_t>(r22.u32, 1551, ctx.xer);
	// beq cr6,0x8242aec4
	if (ctx.cr6.eq) goto loc_8242AEC4;
loc_8242AEBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8242aec8
	goto loc_8242AEC8;
loc_8242AEC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8242AEC8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8242aed8
	if (ctx.cr6.eq) goto loc_8242AED8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8242aedc
	if (!ctx.cr6.eq) goto loc_8242AEDC;
loc_8242AED8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8242AEDC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242af40
	if (ctx.cr6.eq) goto loc_8242AF40;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822d5870
	ctx.lr = 0x8242AEF8;
	sub_822D5870(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bge cr6,0x8242af08
	if (!ctx.cr6.lt) goto loc_8242AF08;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8242AF08:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8242af38
	if (!ctx.cr6.gt) goto loc_8242AF38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_8242AF24:
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r11,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r24.u32, temp.u32);
	// bdnz 0x8242af24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242AF24;
loc_8242AF38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8242b2dc
	goto loc_8242B2DC;
loc_8242AF40:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// bne cr6,0x8242af8c
	if (!ctx.cr6.eq) goto loc_8242AF8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// ble cr6,0x8242af38
	if (!ctx.cr6.gt) goto loc_8242AF38;
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 4, temp.u32);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// ble cr6,0x8242af38
	if (!ctx.cr6.gt) goto loc_8242AF38;
	// addi r10,r24,8
	ctx.r10.s64 = r24.s64 + 8;
	// addic. r11,r27,-2
	ctx.xer.ca = r27.u32 > 1;
	ctx.r11.s64 = r27.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8242af38
	if (ctx.cr0.eq) goto loc_8242AF38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242AF80:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242af80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242AF80;
	// b 0x8242af38
	goto loc_8242AF38;
loc_8242AF8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,30140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30140);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,16788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,24672(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24672);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,29440(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29440);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f10,-23944(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23944);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lfs f9,-24428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24428);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,29356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29356);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,27892(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27892);
	ctx.f7.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f6,16184(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16184);
	ctx.f6.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f5,-18468(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18468);
	ctx.f5.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r25,0
	r25.s64 = 0;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x823cd118
	ctx.lr = 0x8242B02C;
	sub_823CD118(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8242b048
	if (ctx.cr0.eq) goto loc_8242B048;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823cd118
	ctx.lr = 0x8242B040;
	sub_823CD118(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8242b054
	if (!ctx.cr0.eq) goto loc_8242B054;
loc_8242B048:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8242b2b4
	goto loc_8242B2B4;
loc_8242B054:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r25,-4
	ctx.r9.s64 = r25.s64 + -4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r8,r26,-4
	ctx.r8.s64 = r26.s64 + -4;
loc_8242B064:
	// and. r7,r29,r23
	ctx.r7.u64 = r29.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8242b080
	if (ctx.cr0.eq) goto loc_8242B080;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// beq cr6,0x8242b1e0
	if (ctx.cr6.eq) goto loc_8242B1E0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
loc_8242B080:
	// and. r7,r29,r22
	ctx.r7.u64 = r29.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8242b09c
	if (ctx.cr0.eq) goto loc_8242B09C;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// beq cr6,0x8242b1e0
	if (ctx.cr6.eq) goto loc_8242B1E0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
loc_8242B09C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// blt cr6,0x8242b064
	if (ctx.cr6.lt) goto loc_8242B064;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// bge cr6,0x8242b0dc
	if (!ctx.cr6.lt) goto loc_8242B0DC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// lis r9,-15436
	ctx.r9.s64 = -1011613696;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x8242b0dc
	if (ctx.cr0.eq) goto loc_8242B0DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242B0D4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242b0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B0D4;
loc_8242B0DC:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// bge cr6,0x8242b108
	if (!ctx.cr6.lt) goto loc_8242B108;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r30,r27
	ctx.r11.u64 = r27.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// lis r9,-15436
	ctx.r9.s64 = -1011613696;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x8242b108
	if (ctx.cr0.eq) goto loc_8242B108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242B100:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242b100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B100;
loc_8242B108:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242a900
	ctx.lr = 0x8242B120;
	sub_8242A900(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8242b2b4
	if (ctx.cr0.lt) goto loc_8242B2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f11,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// bge cr6,0x8242b158
	if (!ctx.cr6.lt) goto loc_8242B158;
loc_8242B14C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8242b27c
	if (!ctx.cr6.lt) goto loc_8242B27C;
loc_8242B158:
	// and. r11,r7,r23
	ctx.r11.u64 = ctx.r7.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242b174
	if (ctx.cr0.eq) goto loc_8242B174;
	// and. r10,r7,r22
	ctx.r10.u64 = ctx.r7.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8242b174
	if (ctx.cr0.eq) goto loc_8242B174;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + r24.u32, temp.u32);
loc_8242B174:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242b194
	if (!ctx.cr6.eq) goto loc_8242B194;
	// and. r10,r7,r22
	ctx.r10.u64 = ctx.r7.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8242b18c
	if (ctx.cr0.eq) goto loc_8242B18C;
	// rlwinm. r10,r7,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8242b2ac
	if (ctx.cr0.eq) goto loc_8242B2AC;
loc_8242B18C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242b27c
	if (ctx.cr6.eq) goto loc_8242B27C;
loc_8242B194:
	// and. r11,r7,r22
	ctx.r11.u64 = ctx.r7.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242b27c
	if (!ctx.cr0.eq) goto loc_8242B27C;
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242b2ac
	if (ctx.cr0.eq) goto loc_8242B2AC;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8242b1ec
	if (!ctx.cr6.eq) goto loc_8242B1EC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8242b27c
	if (!ctx.cr6.gt) goto loc_8242B27C;
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
loc_8242B1D4:
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B1D4;
	// b 0x8242b27c
	goto loc_8242B27C;
loc_8242B1E0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8242b2b4
	goto loc_8242B2B4;
loc_8242B1EC:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// ble cr6,0x8242b27c
	if (!ctx.cr6.gt) goto loc_8242B27C;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_8242B218:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8242b270
	if (!ctx.cr6.gt) goto loc_8242B270;
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
loc_8242B240:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8242b258
	if (!ctx.cr6.eq) goto loc_8242B258;
	// fdivs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// b 0x8242b264
	goto loc_8242B264;
loc_8242B258:
	// lfsx f10,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fdivs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_8242B264:
	// stfsx f10,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + r24.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8242b240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B240;
loc_8242B270:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// bne 0x8242b218
	if (!ctx.cr0.eq) goto loc_8242B218;
loc_8242B27C:
	// and. r11,r7,r23
	ctx.r11.u64 = ctx.r7.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242b288
	if (ctx.cr0.eq) goto loc_8242B288;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8242B288:
	// and. r11,r7,r22
	ctx.r11.u64 = ctx.r7.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242b294
	if (ctx.cr0.eq) goto loc_8242B294;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
loc_8242B294:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 11, ctx.xer);
	// blt cr6,0x8242b14c
	if (ctx.cr6.lt) goto loc_8242B14C;
	// b 0x8242b2b4
	goto loc_8242B2B4;
loc_8242B2AC:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16385
	r31.u64 = r31.u64 | 16385;
loc_8242B2B4:
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cd250
	ctx.lr = 0x8242B2C0;
	sub_823CD250(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823cd250
	ctx.lr = 0x8242B2CC;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8242b2dc
	goto loc_8242B2DC;
loc_8242B2D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8242B2DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82440CB8) {
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
	ctx.lr = 0x82440CC0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82440cf4
	if (ctx.cr6.eq) goto loc_82440CF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82440ed4
	goto loc_82440ED4;
loc_82440CF4:
	// bl 0x82451d48
	ctx.lr = 0x82440CF8;
	sub_82451D48(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82440d14
	if (ctx.cr6.eq) goto loc_82440D14;
	// cmplwi cr6,r26,20000
	ctx.cr6.compare<uint32_t>(r26.u32, 20000, ctx.xer);
	// blt cr6,0x82440d14
	if (ctx.cr6.lt) goto loc_82440D14;
	// cmplwi cr6,r26,48000
	ctx.cr6.compare<uint32_t>(r26.u32, 48000, ctx.xer);
	// ble cr6,0x82440d20
	if (!ctx.cr6.gt) goto loc_82440D20;
loc_82440D14:
	// lis r25,-30569
	r25.s64 = -2003369984;
	// ori r25,r25,1
	r25.u64 = r25.u64 | 1;
	// b 0x82440ed0
	goto loc_82440ED0;
loc_82440D20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82453d38
	ctx.lr = 0x82440D2C;
	sub_82453D38(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r10,7712
	ctx.r3.s64 = ctx.r10.s64 + 7712;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x82440D58;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bne 0x82440d6c
	if (!ctx.cr0.eq) goto loc_82440D6C;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
loc_82440D6C:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// blt cr6,0x82440ed0
	if (ctx.cr6.lt) goto loc_82440ED0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8245c1c0
	ctx.lr = 0x82440D88;
	sub_8245C1C0(ctx, base);
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82456218
	ctx.lr = 0x82440DAC;
	sub_82456218(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,220(r31)
	REX_STORE_U32(r31.u32 + 220, r27.u32);
	// stw r27,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f11,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,2344(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// li r8,27
	ctx.r8.s64 = 27;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f12,-23932(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23932);
	ctx.f12.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r18,80(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r18.u32);
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// stw r26,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r26.u32);
	// stw r24,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r23.u32);
	// stw r22,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r22.u32);
	// stw r21,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r21.u32);
	// stw r20,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r20.u32);
	// stw r19,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r19.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82456240
	ctx.lr = 0x82440EA4;
	sub_82456240(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// bl 0x824409c0
	ctx.lr = 0x82440EB0;
	sub_824409C0(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x822d4fa0
	ctx.lr = 0x82440EC0;
	sub_822D4FA0(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82440ED0;
	sub_822D4FA0(ctx, base);
loc_82440ED0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82440ED4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8244D4C8) {
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
	// bl 0x822d4e50
	ctx.lr = 0x8244D4D0;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r23,0
	r23.s64 = 0;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r17,24(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r18,4(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// lwz r16,28(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r22,r4,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x8244d578
	if (ctx.cr6.eq) goto loc_8244D578;
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f10,12(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f9,16(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f8,20(r7)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r7.u32 + 20, temp.u32);
loc_8244D578:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lfs f8,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// bge cr6,0x8244d6fc
	if (!ctx.cr6.lt) goto loc_8244D6FC;
	// addi r31,r11,3
	r31.s64 = ctx.r11.s64 + 3;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// addi r29,r11,2
	r29.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r31,2,0,29
	r24.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-5
	r28.s64 = ctx.r11.s64 + -5;
	// addi r27,r11,-6
	r27.s64 = ctx.r11.s64 + -6;
	// rlwinm r21,r30,2,0,29
	r21.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r5,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r4,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r29,2,0,29
	r20.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r10,r24
	r29.u64 = r24.u64 - ctx.r10.u64;
	// subf r24,r10,r21
	r24.u64 = r21.u64 - ctx.r10.u64;
	// subf r4,r10,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r5,r10,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r31,r10,r26
	r31.u64 = r26.u64 - ctx.r10.u64;
	// subf r30,r10,r25
	r30.u64 = r25.u64 - ctx.r10.u64;
	// subf r21,r10,r20
	r21.u64 = r20.u64 - ctx.r10.u64;
	// subf r20,r10,r28
	r20.u64 = r28.u64 - ctx.r10.u64;
	// subf r19,r10,r27
	r19.u64 = r27.u64 - ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r5,r7
	r25.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r26,r4,r7
	r26.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r27,r31,r7
	r27.u64 = r31.u64 + ctx.r7.u64;
	// add r28,r30,r7
	r28.u64 = r30.u64 + ctx.r7.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// add r30,r24,r7
	r30.u64 = r24.u64 + ctx.r7.u64;
	// add r31,r21,r7
	r31.u64 = r21.u64 + ctx.r7.u64;
	// add r4,r20,r7
	ctx.r4.u64 = r20.u64 + ctx.r7.u64;
	// add r5,r19,r7
	ctx.r5.u64 = r19.u64 + ctx.r7.u64;
loc_8244D628:
	// cmplw cr6,r23,r16
	ctx.cr6.compare<uint32_t>(r23.u32, r16.u32, ctx.xer);
	// bge cr6,0x8244d88c
	if (!ctx.cr6.lt) goto loc_8244D88C;
	// lfsux f11,r30,r10
	ctx.fpscr.disableFlushMode();
	ea = r30.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	r30.u32 = ea;
	// addi r23,r23,6
	r23.s64 = r23.s64 + 6;
	// lfsux f7,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	r31.u32 = ea;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// fsubs f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfsux f12,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// lfs f7,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsux f10,r28,r10
	ea = r28.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f10.f64 = double(temp.f32);
	r28.u32 = ea;
	// fsubs f31,f7,f12
	f31.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfsux f6,r29,r10
	ea = r29.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	r29.u32 = ea;
	// lfsux f13,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f1,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfsux f9,r26,r10
	ea = r26.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	r26.u32 = ea;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfsux f7,r27,r10
	ea = r27.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	r27.u32 = ea;
	// lfsux f6,r25,r10
	ea = r25.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	r25.u32 = ea;
	// fsubs f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fmadds f4,f4,f0,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f3,f3,f0,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f13,f31,f0,f12
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f4,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f12,f7,f0,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfsu f3,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f11,f6,f0,f2
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x8244d6f4
	if (ctx.cr6.lt) goto loc_8244D6F4;
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// addi r25,r25,24
	r25.s64 = r25.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
loc_8244D6F4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8244d628
	if (ctx.cr6.lt) goto loc_8244D628;
loc_8244D6FC:
	// cmplw cr6,r23,r16
	ctx.cr6.compare<uint32_t>(r23.u32, r16.u32, ctx.xer);
	// bge cr6,0x8244d88c
	if (!ctx.cr6.lt) goto loc_8244D88C;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// addi r31,r11,3
	r31.s64 = ctx.r11.s64 + 3;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// addi r29,r11,2
	r29.s64 = ctx.r11.s64 + 2;
	// addi r28,r11,-5
	r28.s64 = ctx.r11.s64 + -5;
	// addi r27,r11,-6
	r27.s64 = ctx.r11.s64 + -6;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r29,2,0,29
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r15,r28,2,0,29
	r15.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r14,r27,2,0,29
	r14.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,64
	r26.s64 = ctx.r11.s64 + 64;
	// subf r30,r10,r9
	r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r29,r10,r8
	r29.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r28,r10,r5
	r28.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r27,r10,r4
	r27.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r21,r10,r31
	r21.u64 = r31.u64 - ctx.r10.u64;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r20,r10,r25
	r20.u64 = r25.u64 - ctx.r10.u64;
	// subf r19,r10,r24
	r19.u64 = r24.u64 - ctx.r10.u64;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r10,r15
	r31.u64 = r15.u64 - ctx.r10.u64;
	// subf r4,r10,r14
	ctx.r4.u64 = r14.u64 - ctx.r10.u64;
	// add r24,r30,r6
	r24.u64 = r30.u64 + ctx.r6.u64;
	// add r25,r29,r6
	r25.u64 = r29.u64 + ctx.r6.u64;
	// add r26,r28,r6
	r26.u64 = r28.u64 + ctx.r6.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r27,r27,r6
	r27.u64 = r27.u64 + ctx.r6.u64;
	// add r28,r21,r6
	r28.u64 = r21.u64 + ctx.r6.u64;
	// add r29,r20,r6
	r29.u64 = r20.u64 + ctx.r6.u64;
	// add r30,r19,r6
	r30.u64 = r19.u64 + ctx.r6.u64;
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
loc_8244D7B4:
	// lfsux f11,r29,r10
	ctx.fpscr.disableFlushMode();
	ea = r29.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	r29.u32 = ea;
	// addi r23,r23,6
	r23.s64 = r23.s64 + 6;
	// lfsux f9,r30,r10
	ea = r30.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	r30.u32 = ea;
	// lfsux f10,r27,r10
	ea = r27.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f10.f64 = double(temp.f32);
	r27.u32 = ea;
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfsux f7,r28,r10
	ea = r28.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	r28.u32 = ea;
	// lfsux f13,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f3,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfsux f12,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r31.u32 = ea;
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f1,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsux f9,r25,r10
	ea = r25.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	r25.u32 = ea;
	// fsubs f3,f1,f12
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lfsux f7,r26,r10
	ea = r26.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	r26.u32 = ea;
	// fsubs f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f31,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	f31.f64 = double(temp.f32);
	// lfsux f7,r24,r10
	ea = r24.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	r24.u32 = ea;
	// fsubs f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 - f31.f64));
	// fmadds f6,f6,f0,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f4,f4,f0,f10
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f2,f2,f0,f13
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f13,f3,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f6,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f4,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f12,f1,f0,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f11,f7,f0,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, f31.f64)));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// dcbt r0,r5
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x8244d884
	if (ctx.cr6.lt) goto loc_8244D884;
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// addi r25,r25,24
	r25.s64 = r25.s64 + 24;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
loc_8244D884:
	// cmplw cr6,r23,r16
	ctx.cr6.compare<uint32_t>(r23.u32, r16.u32, ctx.xer);
	// blt cr6,0x8244d7b4
	if (ctx.cr6.lt) goto loc_8244D7B4;
loc_8244D88C:
	// addi r10,r17,-6
	ctx.r10.s64 = r17.s64 + -6;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8244d89c
	if (!ctx.cr6.lt) goto loc_8244D89C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8244D89C:
	// subf r10,r17,r11
	ctx.r10.u64 = ctx.r11.u64 - r17.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r8,r17
	ctx.r8.s64 = static_cast<int64_t>(-r17.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244d96c
	if (!ctx.cr6.lt) goto loc_8244D96C;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244d930
	if (ctx.cr6.lt) goto loc_8244D930;
	// add r9,r11,r17
	ctx.r9.u64 = ctx.r11.u64 + r17.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r17,2
	ctx.r5.s64 = r17.s64 + 2;
	// addi r4,r17,3
	ctx.r4.s64 = r17.s64 + 3;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_8244D8F4:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r5,r11
	r31.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r30,r4,r11
	r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r31,r7
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r30,r7
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x8244d8f4
	if (ctx.cr6.lt) goto loc_8244D8F4;
loc_8244D930:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244d96c
	if (!ctx.cr6.lt) goto loc_8244D96C;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + r17.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r5,r9,-4
	ctx.r5.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8244D960:
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
	// bdnz 0x8244d960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244D960;
loc_8244D96C:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244d9e4
	if (ctx.cr6.lt) goto loc_8244D9E4;
	// subfic r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r10.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r8,r11,r17
	ctx.r8.u64 = ctx.r11.u64 + r17.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r17,2
	ctx.r5.s64 = r17.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r4,r17,3
	ctx.r4.s64 = r17.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_8244D9AC:
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
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
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
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
	// lfsx f12,r8,r6
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r3,r6
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244d9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244D9AC;
loc_8244D9E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8244da0c
	if (!ctx.cr6.lt) goto loc_8244DA0C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + r17.u64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5428
	ctx.lr = 0x8244DA0C;
	sub_822D5428(ctx, base);
loc_8244DA0C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82469C18) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r31,0
	r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82469cb4
	if (ctx.cr6.eq) goto loc_82469CB4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82469c78
	if (ctx.cr6.eq) goto loc_82469C78;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82469c60
	if (ctx.cr6.eq) goto loc_82469C60;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82469cb8
	goto loc_82469CB8;
loc_82469C60:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r10,-29820
	ctx.r3.s64 = ctx.r10.s64 + -29820;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82469b98
	ctx.lr = 0x82469C74;
	sub_82469B98(ctx, base);
	// b 0x82469cb8
	goto loc_82469CB8;
loc_82469C78:
	// subfic r11,r6,24
	ctx.xer.ca = ctx.r6.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - ctx.r6.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82469c9c
	if (ctx.cr6.lt) goto loc_82469C9C;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r9,-29820
	ctx.r3.s64 = ctx.r9.s64 + -29820;
	// bl 0x82469b98
	ctx.lr = 0x82469C98;
	sub_82469B98(ctx, base);
	// b 0x82469cb8
	goto loc_82469CB8;
loc_82469C9C:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// sraw r4,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r4.s64 = ctx.r10.s32 >> temp.u32;
	// addi r3,r8,-29820
	ctx.r3.s64 = ctx.r8.s64 + -29820;
	// bl 0x82469b98
	ctx.lr = 0x82469CB0;
	sub_82469B98(ctx, base);
	// b 0x82469cb8
	goto loc_82469CB8;
loc_82469CB4:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_82469CB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82469cc4
	if (ctx.cr6.eq) goto loc_82469CC4;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82469CC4:
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

DEFINE_REX_FUNC(sub_8246D5A8) {
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
	ctx.lr = 0x8246D5B0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r25,1
	r25.s64 = 1;
	// li r26,2
	r26.s64 = 2;
	// li r27,3
	r27.s64 = 3;
	// li r28,4
	r28.s64 = 4;
loc_8246D5D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8246d5d4
	if (ctx.cr6.gt) goto loc_8246D5D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8246d6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246D6A0;
	// bdzf 4*cr6+eq,0x8246d6bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246D6BC;
	// bdzf 4*cr6+eq,0x8246d6d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246D6D8;
	// bdzf 4*cr6+eq,0x8246d6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246D6F4;
	// bne cr6,0x8246d714
	if (!ctx.cr6.eq) goto loc_8246D714;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823253a8
	ctx.lr = 0x8246D60C;
	sub_823253A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8246d648
	if (!ctx.cr6.eq) goto loc_8246D648;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82319a70
	ctx.lr = 0x8246D638;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// b 0x8246d5d4
	goto loc_8246D5D4;
loc_8246D648:
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8246d66c
	if (!ctx.cr6.eq) goto loc_8246D66C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82319a70
	ctx.lr = 0x8246D65C;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// b 0x8246d5d4
	goto loc_8246D5D4;
loc_8246D66C:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x8246d68c
	if (!ctx.cr6.eq) goto loc_8246D68C;
	// bl 0x82319a70
	ctx.lr = 0x8246D67C;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// b 0x8246d5d4
	goto loc_8246D5D4;
loc_8246D68C:
	// bl 0x82319a70
	ctx.lr = 0x8246D690;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// b 0x8246d5d4
	goto loc_8246D5D4;
loc_8246D6A0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D6B0;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// b 0x8246d740
	goto loc_8246D740;
loc_8246D6BC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D6CC;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// b 0x8246d740
	goto loc_8246D740;
loc_8246D6D8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D6E8;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// b 0x8246d740
	goto loc_8246D740;
loc_8246D6F4:
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D704;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_8246D714:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246D724;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d754
	if (ctx.cr6.lt) goto loc_8246D754;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_8246D740:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8246D754:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82473590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82473598;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824735d4
	if (ctx.cr6.eq) goto loc_824735D4;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824735CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824735e4
	if (ctx.cr0.lt) goto loc_824735E4;
loc_824735D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
	// bne cr6,0x824735e4
	if (!ctx.cr6.eq) goto loc_824735E4;
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
loc_824735E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82473E20) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82473E28;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// lwz r27,48(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r26,88(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// li r25,0
	r25.s64 = 0;
	// li r28,-1
	r28.s64 = -1;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// rlwinm r4,r27,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82473e58
	if (!ctx.cr6.gt) goto loc_82473E58;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82473E58:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r31,r11,7712
	r31.s64 = ctx.r11.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x82473E74;
	sub_8242C3B0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x82473e88
	if (!ctx.cr0.eq) goto loc_82473E88;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82473ec4
	goto loc_82473EC4;
loc_82473E88:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// rlwinm r4,r26,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82473e98
	if (!ctx.cr6.gt) goto loc_82473E98;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82473E98:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8242c3b0
	ctx.lr = 0x82473EAC;
	sub_8242C3B0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82473EC4:
	// lwz r8,40(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82473f30
	if (ctx.cr6.eq) goto loc_82473F30;
	// addi r9,r24,-4
	ctx.r9.s64 = r24.s64 + -4;
loc_82473ED8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82473f30
	if (ctx.cr6.lt) goto loc_82473F30;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82473ef8
	if (ctx.cr6.eq) goto loc_82473EF8;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82473efc
	goto loc_82473EFC;
loc_82473EF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82473EFC:
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lhz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r7,r6,r7
	ctx.r7.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// stwu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,116(r29)
	REX_STORE_U32(r29.u32 + 116, ctx.r11.u32);
	// blt cr6,0x82473ed8
	if (ctx.cr6.lt) goto loc_82473ED8;
loc_82473F30:
	// lwz r8,80(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82473f94
	if (ctx.cr6.eq) goto loc_82473F94;
	// addi r9,r25,-4
	ctx.r9.s64 = r25.s64 + -4;
loc_82473F44:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82473fc4
	if (ctx.cr6.lt) goto loc_82473FC4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82473f64
	if (ctx.cr6.eq) goto loc_82473F64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82473f68
	goto loc_82473F68;
loc_82473F64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82473F68:
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lhz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// divwu r11,r11,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82473f44
	if (ctx.cr6.lt) goto loc_82473F44;
loc_82473F94:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82473fc4
	if (ctx.cr6.lt) goto loc_82473FC4;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82473FC4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82473fd4
	if (ctx.cr6.eq) goto loc_82473FD4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82473600
	ctx.lr = 0x82473FD4;
	sub_82473600(ctx, base);
loc_82473FD4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82473fe4
	if (ctx.cr6.eq) goto loc_82473FE4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82473600
	ctx.lr = 0x82473FE4;
	sub_82473600(ctx, base);
loc_82473FE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8247C648) {
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
	ctx.lr = 0x8247C650;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8247c68c
	if (ctx.cr6.eq) goto loc_8247C68C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c68c
	if (ctx.cr6.eq) goto loc_8247C68C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8247c698
	if (!ctx.cr6.eq) goto loc_8247C698;
loc_8247C67C:
	// bl 0x822db6c0
	ctx.lr = 0x8247C680;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247C68C;
	sub_822D6910(ctx, base);
loc_8247C68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247C690:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822d4ec8
	return;
loc_8247C698:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247c67c
	if (ctx.cr6.eq) goto loc_8247C67C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r25
	ctx.r11.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8247c67c
	if (ctx.cr6.gt) goto loc_8247C67C;
	// mullw r27,r25,r24
	r27.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// bl 0x822dcb08
	ctx.lr = 0x8247C6C0;
	sub_822DCB08(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247c860
	if (ctx.cr6.eq) goto loc_8247C860;
	// bl 0x822dcb08
	ctx.lr = 0x8247C6D0;
	sub_822DCB08(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247c860
	if (ctx.cr6.eq) goto loc_8247C860;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247c6f4
	if (ctx.cr0.eq) goto loc_8247C6F4;
	// lwz r26,24(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 24);
	// b 0x8247c6f8
	goto loc_8247C6F8;
loc_8247C6F4:
	// li r26,4096
	r26.s64 = 4096;
loc_8247C6F8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8247c8a4
	if (ctx.cr6.eq) goto loc_8247C8A4;
loc_8247C700:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// andi. r10,r11,264
	ctx.r10.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247c760
	if (ctx.cr0.eq) goto loc_8247C760;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8247c760
	if (ctx.cr6.eq) goto loc_8247C760;
	// blt cr6,0x8247c83c
	if (ctx.cr6.lt) goto loc_8247C83C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x8247c72c
	if (!ctx.cr6.lt) goto loc_8247C72C;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8247C72C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8247C73C;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r31,r29,r31
	r31.u64 = r31.u64 - r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r28,r29,r28
	r28.u64 = r29.u64 + r28.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x8247c830
	goto loc_8247C830;
loc_8247C760:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x8247c7fc
	if (ctx.cr6.lt) goto loc_8247C7FC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8247c780
	if (ctx.cr6.eq) goto loc_8247C780;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e1da0
	ctx.lr = 0x8247C778;
	sub_822E1DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247c854
	if (!ctx.cr0.eq) goto loc_8247C854;
loc_8247C780:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8247c7a0
	if (ctx.cr6.eq) goto loc_8247C7A0;
	// divwu r11,r31,r26
	ctx.r11.u64 = uint32_t(r26.u32 ? r31.u32 / r26.u32 : 0);
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r29,r11,r31
	r29.u64 = r31.u64 - ctx.r11.u64;
	// b 0x8247c7a4
	goto loc_8247C7A4;
loc_8247C7A0:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8247C7A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e15a8
	ctx.lr = 0x8247C7AC;
	sub_822E15A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822e13a0
	ctx.lr = 0x8247C7B8;
	sub_822E13A0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247c7e0
	if (ctx.cr6.eq) goto loc_8247C7E0;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bgt cr6,0x8247c7d0
	if (ctx.cr6.gt) goto loc_8247C7D0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8247C7D0:
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bge cr6,0x8247c830
	if (!ctx.cr6.lt) goto loc_8247C830;
loc_8247C7E0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// divwu r3,r10,r25
	ctx.r3.u64 = uint32_t(r25.u32 ? ctx.r10.u32 / r25.u32 : 0);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x8247c690
	goto loc_8247C690;
loc_8247C7FC:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822da948
	ctx.lr = 0x8247C80C;
	sub_822DA948(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247c854
	if (ctx.cr6.eq) goto loc_8247C854;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// bgt cr6,0x8247c830
	if (ctx.cr6.gt) goto loc_8247C830;
	// li r26,1
	r26.s64 = 1;
loc_8247C830:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8247c700
	if (!ctx.cr6.eq) goto loc_8247C700;
	// b 0x8247c8a4
	goto loc_8247C8A4;
loc_8247C83C:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// divwu r3,r10,r25
	ctx.r3.u64 = uint32_t(r25.u32 ? ctx.r10.u32 / r25.u32 : 0);
loc_8247C84C:
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x8247c690
	goto loc_8247C690;
loc_8247C854:
	// subf r11,r31,r27
	ctx.r11.u64 = r27.u64 - r31.u64;
	// divwu r3,r11,r25
	ctx.r3.u64 = uint32_t(r25.u32 ? ctx.r11.u32 / r25.u32 : 0);
	// b 0x8247c84c
	goto loc_8247C84C;
loc_8247C860:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8247c8a4
	if (ctx.cr6.eq) goto loc_8247C8A4;
loc_8247C868:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(r31.u32, 255, ctx.xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// blt cr6,0x8247c878
	if (ctx.cr6.lt) goto loc_8247C878;
	// li r30,255
	r30.s64 = 255;
loc_8247C878:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4fa0
	ctx.lr = 0x8247C888;
	sub_822D4FA0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x823cd328
	ctx.lr = 0x8247C89C;
	sub_823CD328(ctx, base);
	// subf. r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8247c868
	if (!ctx.cr0.eq) goto loc_8247C868;
loc_8247C8A4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x8247c690
	goto loc_8247C690;
}

DEFINE_REX_FUNC(sub_82491828) {
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
	ctx.lr = 0x82491830;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r29,50(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,0(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r31,348(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// srawi r26,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r26.s64 = r29.s32 >> 1;
	// beq cr6,0x82491874
	if (ctx.cr6.eq) goto loc_82491874;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r28
	r25.u64 = r28.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82491878
	if (ctx.cr6.eq) goto loc_82491878;
loc_82491874:
	// li r25,1
	r25.s64 = 1;
loc_82491878:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82491890
	if (ctx.cr6.eq) goto loc_82491890;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,336(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x82491890;
	sub_82490DA8(ctx, base);
loc_82491890:
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// beq cr6,0x82491940
	if (ctx.cr6.eq) goto loc_82491940;
	// lwz r10,-24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -24);
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82491940
	if (ctx.cr6.eq) goto loc_82491940;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x824918d8
	if (!ctx.cr6.lt) goto loc_824918D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82491934
	goto loc_82491934;
loc_824918D8:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,90(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// sth r5,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_82491934:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82491940:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82491abc
	if (!ctx.cr6.eq) goto loc_82491ABC;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r29,r24
	ctx.r11.u64 = r24.u64 - r29.u64;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r9,r27
	ctx.r6.u64 = r27.u64 - ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824919f8
	if (ctx.cr6.eq) goto loc_824919F8;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x82491988
	if (!ctx.cr6.lt) goto loc_82491988;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x824919e4
	goto loc_824919E4;
loc_82491988:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,86(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_824919E4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_824919F8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// beq cr6,0x82491abc
	if (ctx.cr6.eq) goto loc_82491ABC;
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82491a18
	if (ctx.cr6.eq) goto loc_82491A18;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x82491a20
	goto loc_82491A20;
loc_82491A18:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_82491A20:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82491abc
	if (ctx.cr6.eq) goto loc_82491ABC;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x82491a4c
	if (!ctx.cr6.lt) goto loc_82491A4C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82491aa8
	goto loc_82491AA8;
loc_82491A4C:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_82491AA8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_82491ABC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x82491b68
	if (ctx.cr6.lt) goto loc_82491B68;
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r28,r5
	ctx.r11.u64 = ctx.r5.u64 - r28.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r28,r7
	ctx.r9.u64 = ctx.r7.u64 - r28.u64;
	// subf r8,r27,r4
	ctx.r8.u64 = ctx.r4.u64 - r27.u64;
	// subf r26,r6,r4
	r26.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r27,r6
	r25.u64 = ctx.r6.u64 - r27.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r26,r26,r8
	r26.u64 = r26.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r25,r8
	ctx.r8.u64 = r25.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r26.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r25,r9,r8
	r25.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// andc r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 & ~r26.u64;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// andc r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ~r25.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x82491b88
	goto loc_82491B88;
loc_82491B68:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_82491B88:
	// lhz r6,62(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 62);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r5,64(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 64);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lhz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 68);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r6,66(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 66);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// and r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ctx.r4.u64;
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add r6,r24,r29
	ctx.r6.u64 = r24.u64 + r29.u64;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r5,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r4,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r4.u16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_824AB170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,1104
	ctx.r10.s64 = 1104;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v1,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x824a9810
	sub_824A9810(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824AB970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824AB978;
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x824a9408
	ctx.lr = 0x824AB99C;
	sub_824A9408(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a9ce0
	ctx.lr = 0x824AB9B8;
	sub_824A9CE0(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824ABC30) {
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
	// bl 0x822d4e50
	ctx.lr = 0x824ABC38;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x824ac0e0
	if (ctx.cr6.eq) goto loc_824AC0E0;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x824abf1c
	if (ctx.cr6.eq) goto loc_824ABF1C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824abeac
	if (!ctx.cr6.gt) goto loc_824ABEAC;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r4,-48
	ctx.r4.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	r15.s64 = 144;
	// li r16,192
	r16.s64 = 192;
	// li r17,240
	r17.s64 = 240;
	// li r18,-80
	r18.s64 = -80;
	// li r19,-32
	r19.s64 = -32;
	// li r20,64
	r20.s64 = 64;
	// li r21,112
	r21.s64 = 112;
	// li r22,160
	r22.s64 = 160;
	// li r23,208
	r23.s64 = 208;
	// li r24,256
	r24.s64 = 256;
loc_824ABCD4:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r8,r9
	r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v62,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r9
	r27.u64 = r31.u64 + ctx.r9.u64;
	// add r29,r30,r9
	r29.u64 = r30.u64 + ctx.r9.u64;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r8
	r28.u64 = r28.u64 + ctx.r8.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r9
	r25.u64 = r29.u64 + ctx.r9.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
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
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x824abcd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ABCD4;
	// lwz r29,1068(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824ABEAC:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824ac1a0
	if (!ctx.cr6.gt) goto loc_824AC1A0;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r9
	r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824ABEE0:
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r7.u16);
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824abee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ABEE0;
	// b 0x824ac1a0
	goto loc_824AC1A0;
loc_824ABF1C:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r4,4
	ctx.r4.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r1,64
	ctx.r8.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824AC0A0:
	// lbzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzux r31,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r3,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r3.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r7,96(r8)
	ea = 96 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x824ac0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AC0A0;
	// b 0x824ac1a0
	goto loc_824AC1A0;
loc_824AC0E0:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v58,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v54,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v30,v55,v53,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v12,v28
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v25,v11,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v10,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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
	// stvx128 v22,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824AC1A0:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r4,1060(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lvx128 v1,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a9f80
	ctx.lr = 0x824AC1B8;
	sub_824A9F80(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x822d4ea0
	return;
}

