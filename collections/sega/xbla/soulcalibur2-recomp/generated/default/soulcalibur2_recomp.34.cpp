#include "soulcalibur2_funcs.34.h"

DEFINE_REX_FUNC(sub_820E1850) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0ec8
	ctx.lr = 0x820E186C;
	sub_820E0EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1528
	ctx.lr = 0x820E1878;
	sub_820E1528(ctx, base);
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

DEFINE_REX_FUNC(sub_820E6950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stfs f1,-700(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -700, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6B50) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r5,18
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(18));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31616
	ctx.r10.s64 = ctx.r10.s64 + 31616;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E75D8) {
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
	// lbz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820e7630
	if (ctx.cr0.eq) goto loc_820E7630;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7614
	if (ctx.cr6.eq) goto loc_820E7614;
	// bl 0x82282a68
	ctx.lr = 0x820E7610;
	sub_82282A68(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_820E7614:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7628
	if (ctx.cr6.eq) goto loc_820E7628;
	// bl 0x82288be8
	ctx.lr = 0x820E7624;
	sub_82288BE8(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_820E7628:
	// bl 0x822889e8
	ctx.lr = 0x820E762C;
	sub_822889E8(ctx, base);
	// bl 0x822541a0
	ctx.lr = 0x820E7630;
	sub_822541A0(ctx, base);
loc_820E7630:
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

DEFINE_REX_FUNC(sub_820EB8C8) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eb9a0
	if (ctx.cr6.eq) goto loc_820EB9A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r10,10140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 10140);
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// lfs f13,16628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,20144(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f1,20396(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20396);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x820eb954
	if (ctx.cr6.lt) goto loc_820EB954;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// b 0x820eb958
	goto loc_820EB958;
loc_820EB954:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f13.f64;
loc_820EB958:
	// lwz r10,10140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 10140);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f30,20404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20404);
	f30.f64 = double(temp.f32);
	// bl 0x82200750
	ctx.lr = 0x820EB970;
	sub_82200750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200758
	ctx.lr = 0x820EB97C;
	sub_82200758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x821a3a28
	ctx.lr = 0x820EB988;
	sub_821A3A28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16624);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820EB998;
	sub_82200818(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_820EB9A0:
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

DEFINE_REX_FUNC(sub_820F2778) {
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
	// addi r11,r11,17240
	ctx.r11.s64 = ctx.r11.s64 + 17240;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x820f27a4
	if (ctx.cr0.eq) goto loc_820F27A4;
	// bl 0x822c80a8
	ctx.lr = 0x820F27A4;
	sub_822C80A8(ctx, base);
loc_820F27A4:
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

DEFINE_REX_FUNC(sub_820F3560) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820f35c4
	if (!ctx.cr6.eq) goto loc_820F35C4;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x820f35c0
	if (ctx.cr6.eq) goto loc_820F35C0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x820f35b8
	if (ctx.cr6.eq) goto loc_820F35B8;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x820f35e4
	if (ctx.cr6.eq) goto loc_820F35E4;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x820f35c4
	if (!ctx.cr6.eq) goto loc_820F35C4;
	// b 0x820f35e4
	goto loc_820F35E4;
loc_820F35B8:
	// li r31,11
	r31.s64 = 11;
	// b 0x820f35e8
	goto loc_820F35E8;
loc_820F35C0:
	// li r4,10
	ctx.r4.s64 = 10;
loc_820F35C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r11,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r4
	r31.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(r31.s32, 12, ctx.xer);
	// blt cr6,0x820f35e8
	if (ctx.cr6.lt) goto loc_820F35E8;
loc_820F35E4:
	// li r31,12
	r31.s64 = 12;
loc_820F35E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820fa0f8
	ctx.lr = 0x820F35F4;
	sub_820FA0F8(ctx, base);
	// stw r31,8344(r30)
	REX_STORE_U32(r30.u32 + 8344, r31.u32);
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

DEFINE_REX_FUNC(sub_820F9390) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6352(r3)
	REX_STORE_U32(ctx.r3.u32 + 6352, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F9418) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lhz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 592);
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bgt cr6,0x820f9480
	if (ctx.cr6.gt) goto loc_820F9480;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bge cr6,0x820f94dc
	if (!ctx.cr6.lt) goto loc_820F94DC;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x820f9468
	if (ctx.cr6.gt) goto loc_820F9468;
	// beq cr6,0x820f94dc
	if (ctx.cr6.eq) goto loc_820F94DC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x820f94d8
	if (ctx.cr6.lt) goto loc_820F94D8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// ble cr6,0x820f94dc
	if (!ctx.cr6.gt) goto loc_820F94DC;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x820f94d8
	if (!ctx.cr6.gt) goto loc_820F94D8;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// ble cr6,0x820f94dc
	if (!ctx.cr6.gt) goto loc_820F94DC;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
loc_820F9460:
	// beq cr6,0x820f94dc
	if (ctx.cr6.eq) goto loc_820F94DC;
	// b 0x820f94d8
	goto loc_820F94D8;
loc_820F9468:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// blt cr6,0x820f94d8
	if (ctx.cr6.lt) goto loc_820F94D8;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// ble cr6,0x820f94dc
	if (!ctx.cr6.gt) goto loc_820F94DC;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// b 0x820f9460
	goto loc_820F9460;
loc_820F9480:
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bgt cr6,0x820f94c0
	if (ctx.cr6.gt) goto loc_820F94C0;
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// bge cr6,0x820f94dc
	if (!ctx.cr6.lt) goto loc_820F94DC;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x820f94d8
	if (ctx.cr6.lt) goto loc_820F94D8;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// ble cr6,0x820f94dc
	if (!ctx.cr6.gt) goto loc_820F94DC;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// ble cr6,0x820f94d8
	if (!ctx.cr6.gt) goto loc_820F94D8;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// ble cr6,0x820f94dc
	if (!ctx.cr6.gt) goto loc_820F94DC;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// ble cr6,0x820f94d8
	if (!ctx.cr6.gt) goto loc_820F94D8;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// b 0x820f94d4
	goto loc_820F94D4;
loc_820F94C0:
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x820f94dc
	if (ctx.cr6.eq) goto loc_820F94DC;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// ble cr6,0x820f94d8
	if (!ctx.cr6.gt) goto loc_820F94D8;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
loc_820F94D4:
	// ble cr6,0x820f94dc
	if (!ctx.cr6.gt) goto loc_820F94DC;
loc_820F94D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F94DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FCD58) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCD84;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fcd9c
	if (!ctx.cr0.eq) goto loc_820FCD9C;
	// li r5,2112
	ctx.r5.s64 = 2112;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCD9C;
	sub_820F8D58(ctx, base);
loc_820FCD9C:
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

DEFINE_REX_FUNC(sub_820FDEB0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x820fed80
	ctx.lr = 0x820FDECC;
	sub_820FED80(ctx, base);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x820fdf30
	if (ctx.cr6.gt) goto loc_820FDF30;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820fdf00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDF00;
	// bdzf 4*cr6+eq,0x820fdf08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDF08;
	// bdzf 4*cr6+eq,0x820fdf10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDF10;
	// bdzf 4*cr6+eq,0x820fdf18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDF18;
	// bdzf 4*cr6+eq,0x820fdf20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDF20;
	// bdzf 4*cr6+eq,0x820fdf30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDF30;
	// bne cr6,0x820fdf28
	if (!ctx.cr6.eq) goto loc_820FDF28;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF00:
	// li r11,5120
	ctx.r11.s64 = 5120;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF08:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF10:
	// li r11,6144
	ctx.r11.s64 = 6144;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF18:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF20:
	// li r11,10240
	ctx.r11.s64 = 10240;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF28:
	// li r11,9216
	ctx.r11.s64 = 9216;
	// b 0x820fdf34
	goto loc_820FDF34;
loc_820FDF30:
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_820FDF34:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82100038) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82100068
	if (ctx.cr0.eq) goto loc_82100068;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82100254
	goto loc_82100254;
loc_82100068:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,22320
	r31.s64 = ctx.r11.s64 + 22320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82100080;
	sub_822D5870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21804
	ctx.r4.s64 = ctx.r11.s64 + 21804;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82100094;
	sub_822D55F8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8210009C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210009c
	if (!ctx.cr6.eq) goto loc_8210009C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ble cr6,0x821000c8
	if (!ctx.cr6.gt) goto loc_821000C8;
	// li r8,256
	ctx.r8.s64 = 256;
loc_821000C8:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,344(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 344);
	// ble cr6,0x821001d4
	if (!ctx.cr6.gt) goto loc_821001D4;
loc_821000E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821000f8
	if (!ctx.cr6.gt) goto loc_821000F8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lbz r10,-1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// beq cr6,0x821001c8
	if (ctx.cr6.eq) goto loc_821001C8;
loc_821000F8:
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// ble cr6,0x82100118
	if (!ctx.cr6.gt) goto loc_82100118;
	// cmplwi cr6,r10,123
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 123, ctx.xer);
	// bge cr6,0x82100118
	if (!ctx.cr6.lt) goto loc_82100118;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
loc_82100118:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x82100140
	if (ctx.cr6.eq) goto loc_82100140;
	// cmplwi cr6,r9,224
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 224, ctx.xer);
	// blt cr6,0x821001c8
	if (ctx.cr6.lt) goto loc_821001C8;
	// cmplwi cr6,r9,254
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 254, ctx.xer);
	// bge cr6,0x821001c8
	if (!ctx.cr6.lt) goto loc_821001C8;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x821001c4
	goto loc_821001C4;
loc_82100140:
	// addi r10,r9,-224
	ctx.r10.s64 = ctx.r9.s64 + -224;
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bgt cr6,0x821001ac
	if (ctx.cr6.gt) goto loc_821001AC;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,26336
	ctx.r12.s64 = ctx.r12.s64 + 26336;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// nop 
	// addi r12,r12,372
	ctx.r12.s64 = ctx.r12.s64 + 372;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82100174;
	case 1:
		goto loc_82100174;
	case 2:
		goto loc_82100174;
	case 3:
		goto loc_821001AC;
	case 4:
		goto loc_82100174;
	case 5:
		goto loc_821001AC;
	case 6:
		goto loc_821001AC;
	case 7:
		goto loc_8210017C;
	case 8:
		goto loc_82100184;
	case 9:
		goto loc_82100184;
	case 10:
		goto loc_82100184;
	case 11:
		goto loc_82100184;
	case 12:
		goto loc_8210018C;
	case 13:
		goto loc_8210018C;
	case 14:
		goto loc_8210018C;
	case 15:
		goto loc_8210018C;
	case 16:
		goto loc_821001AC;
	case 17:
		goto loc_82100194;
	case 18:
		goto loc_8210019C;
	case 19:
		goto loc_8210019C;
	case 20:
		goto loc_8210019C;
	case 21:
		goto loc_821001AC;
	case 22:
		goto loc_8210019C;
	case 23:
		goto loc_821001AC;
	case 24:
		goto loc_821001AC;
	case 25:
		goto loc_821001A4;
	case 26:
		goto loc_821001A4;
	case 27:
		goto loc_821001A4;
	case 28:
		goto loc_821001A4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82100174:
	// li r10,65
	ctx.r10.s64 = 65;
	// b 0x821001c4
	goto loc_821001C4;
loc_8210017C:
	// li r10,67
	ctx.r10.s64 = 67;
	// b 0x821001c4
	goto loc_821001C4;
loc_82100184:
	// li r10,69
	ctx.r10.s64 = 69;
	// b 0x821001c4
	goto loc_821001C4;
loc_8210018C:
	// li r10,73
	ctx.r10.s64 = 73;
	// b 0x821001c4
	goto loc_821001C4;
loc_82100194:
	// li r10,78
	ctx.r10.s64 = 78;
	// b 0x821001c4
	goto loc_821001C4;
loc_8210019C:
	// li r10,79
	ctx.r10.s64 = 79;
	// b 0x821001c4
	goto loc_821001C4;
loc_821001A4:
	// li r10,85
	ctx.r10.s64 = 85;
	// b 0x821001c4
	goto loc_821001C4;
loc_821001AC:
	// cmplwi cr6,r9,224
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 224, ctx.xer);
	// blt cr6,0x821001c8
	if (ctx.cr6.lt) goto loc_821001C8;
	// cmplwi cr6,r9,254
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 254, ctx.xer);
	// bge cr6,0x821001c8
	if (!ctx.cr6.lt) goto loc_821001C8;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
loc_821001C4:
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
loc_821001C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821000e0
	if (ctx.cr6.lt) goto loc_821000E0;
loc_821001D4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x821001e4
	if (ctx.cr6.eq) goto loc_821001E4;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82100250
	if (!ctx.cr6.eq) goto loc_82100250;
loc_821001E4:
	// addic. r9,r8,-3
	ctx.xer.ca = ctx.r8.u32 > 2;
	ctx.r9.s64 = ctx.r8.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x82100250
	if (!ctx.cr0.gt) goto loc_82100250;
	// li r8,32
	ctx.r8.s64 = 32;
loc_821001F4:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,-1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82100244
	if (!ctx.cr6.eq) goto loc_82100244;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,65
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65, ctx.xer);
	// bne cr6,0x82100244
	if (!ctx.cr6.eq) goto loc_82100244;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r7,84
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 84, ctx.xer);
	// bne cr6,0x82100244
	if (!ctx.cr6.eq) goto loc_82100244;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82100244
	if (!ctx.cr6.eq) goto loc_82100244;
	// li r7,97
	ctx.r7.s64 = 97;
	// stb r8,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// li r6,116
	ctx.r6.s64 = 116;
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_82100244:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821001f4
	if (ctx.cr6.lt) goto loc_821001F4;
loc_82100250:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82100254:
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

DEFINE_REX_FUNC(sub_8210FD28) {
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
	ctx.lr = 0x8210FD30;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
	// mulli r11,r10,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r28,3
	r28.s64 = 3;
	// li r29,12
	r29.s64 = 12;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210fd8c
	if (ctx.cr0.eq) goto loc_8210FD8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d8790
	ctx.lr = 0x8210FD6C;
	sub_821D8790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8210fd8c
	if (!ctx.cr0.eq) goto loc_8210FD8C;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,124(r31)
	REX_STORE_U32(r31.u32 + 124, r28.u32);
	// stb r11,23882(r9)
	REX_STORE_U8(ctx.r9.u32 + 23882, ctx.r11.u8);
	// stb r29,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, r29.u8);
loc_8210FD8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1840(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,28904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28904);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8210fe1c
	if (!ctx.cr6.eq) goto loc_8210FE1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d8790
	ctx.lr = 0x8210FDC8;
	sub_821D8790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8210fde0
	if (ctx.cr0.eq) goto loc_8210FDE0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// b 0x8210fe50
	goto loc_8210FE50;
loc_8210FDE0:
	// lfs f0,1840(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,28900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821afa50
	ctx.lr = 0x8210FE18;
	sub_821AFA50(ctx, base);
	// lfs f0,1840(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
loc_8210FE1C:
	// fdivs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lfs f0,28896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28896);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8210fe50
	if (!ctx.cr6.gt) goto loc_8210FE50;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stb r29,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, r29.u8);
	// stw r28,124(r31)
	REX_STORE_U32(r31.u32 + 124, r28.u32);
loc_8210FE50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82114B98) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82114C18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x82114c28
	if (ctx.cr6.lt) goto loc_82114C28;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82114C28:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// mulli r11,r3,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12));
	// addi r10,r10,23968
	ctx.r10.s64 = ctx.r10.s64 + 23968;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82114b28
	sub_82114B28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821159D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,24020(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24020);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821159e8
	if (!ctx.cr6.eq) goto loc_821159E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24020(r11)
	REX_STORE_U32(ctx.r11.u32 + 24020, ctx.r10.u32);
loc_821159E8:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// stb r11,1824(r10)
	REX_STORE_U8(ctx.r10.u32 + 1824, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821163A8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,84(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x821163d8
	if (!ctx.cr6.eq) goto loc_821163D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// b 0x82116408
	goto loc_82116408;
loc_821163D8:
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// bne cr6,0x821163ec
	if (!ctx.cr6.eq) goto loc_821163EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,31496
	ctx.r4.s64 = ctx.r11.s64 + 31496;
	// b 0x82116408
	goto loc_82116408;
loc_821163EC:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82116410
	if (!ctx.cr6.eq) goto loc_82116410;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,31484
	ctx.r4.s64 = ctx.r11.s64 + 31484;
loc_82116408:
	// bl 0x822d55f8
	ctx.lr = 0x8211640C;
	sub_822D55F8(ctx, base);
	// b 0x8211641c
	goto loc_8211641C;
loc_82116410:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,31468
	ctx.r4.s64 = ctx.r11.s64 + 31468;
	// bl 0x822d55f8
	ctx.lr = 0x8211641C;
	sub_822D55F8(ctx, base);
loc_8211641C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,31456
	ctx.r6.s64 = ctx.r10.s64 + 31456;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82116444;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82116488
	if (ctx.cr0.eq) goto loc_82116488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f5,31452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31452);
	ctx.f5.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f4,31448(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31448);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,2028(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2028);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// lfs f1,15632(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82115fd8
	ctx.lr = 0x82116488;
	sub_82115FD8(ctx, base);
loc_82116488:
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_821188F0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82207ec8
	ctx.lr = 0x82118910;
	sub_82207EC8(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8211A120) {
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
	// bl 0x822d4e78
	ctx.lr = 0x8211A128;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f34
	ctx.lr = 0x8211A130;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,-32044(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32044);
	// bl 0x82208828
	ctx.lr = 0x8211A148;
	sub_82208828(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821f0998
	ctx.lr = 0x8211A164;
	sub_821F0998(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211a188
	if (ctx.cr0.eq) goto loc_8211A188;
	// lha r11,16(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 16));
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,20,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xC00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF3FF);
	// sth r11,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r11.u16);
	// b 0x8211a574
	goto loc_8211A574;
loc_8211A188:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8211a224
	if (!ctx.cr0.eq) goto loc_8211A224;
	// bl 0x821fedc8
	ctx.lr = 0x8211A1A8;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2360);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211a224
	if (!ctx.cr6.lt) goto loc_8211A224;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,29428(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 29428);
	// bl 0x8211eba8
	ctx.lr = 0x8211A1C8;
	sub_8211EBA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821fedc8
	ctx.lr = 0x8211A1D0;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f31,f1,f0,f13
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x821fee08
	ctx.lr = 0x8211A1E8;
	sub_821FEE08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r30,208
	ctx.r7.s64 = r30.s64 + 208;
	// lfs f13,2348(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,28724(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28724);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f6,2016(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2016);
	ctx.f6.f64 = double(temp.f32);
	// bl 0x8211dfe0
	ctx.lr = 0x8211A224;
	sub_8211DFE0(ctx, base);
loc_8211A224:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f27,f30
	ctx.fpscr.disableFlushMode();
	f27.f64 = f30.f64;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// ori r8,r11,3708
	ctx.r8.u64 = ctx.r11.u64 | 3708;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lis r31,-32173
	r31.s64 = -2108489728;
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r25,44(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwzx r26,r9,r8
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211a2b0
	if (ctx.cr0.eq) goto loc_8211A2B0;
	// lbz r11,103(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211a2b0
	if (ctx.cr0.eq) goto loc_8211A2B0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r28,508(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 508);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x821fa860
	ctx.lr = 0x8211A284;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r27,508(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 508);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x821fa860
	ctx.lr = 0x8211A2A0;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lfs f27,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f27.f64 = double(temp.f32);
loc_8211A2B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8211a300
	if (ctx.cr6.eq) goto loc_8211A300;
	// lbz r11,103(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211a300
	if (ctx.cr0.eq) goto loc_8211A300;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r29,508(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 508);
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// bl 0x821fa860
	ctx.lr = 0x8211A2D4;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r27,508(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 508);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x821fa860
	ctx.lr = 0x8211A2F0;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lfs f29,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f29.f64 = double(temp.f32);
loc_8211A300:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f28,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f28.f64 = double(temp.f32);
	// beq cr6,0x8211a364
	if (ctx.cr6.eq) goto loc_8211A364;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8211a33c
	if (ctx.cr6.eq) goto loc_8211A33C;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// fadds f29,f29,f27
	f29.f64 = double(float(f29.f64 + f27.f64));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x820e2028
	ctx.lr = 0x8211A338;
	sub_820E2028(ctx, base);
	// b 0x8211a428
	goto loc_8211A428;
loc_8211A33C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	f29.f64 = f27.f64;
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x8211a38c
	goto loc_8211A38C;
loc_8211A364:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8211a394
	if (ctx.cr6.eq) goto loc_8211A394;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_8211A38C:
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// b 0x8211a428
	goto loc_8211A428;
loc_8211A394:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8211a40c
	if (ctx.cr6.eq) goto loc_8211A40C;
	// lbz r11,103(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211a40c
	if (ctx.cr0.eq) goto loc_8211A40C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r29,508(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 508);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x821fa860
	ctx.lr = 0x8211A3B8;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// lwz r31,508(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 508);
	// bl 0x821fa860
	ctx.lr = 0x8211A3F8;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f29,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f29.f64 = double(temp.f32);
	// b 0x8211a428
	goto loc_8211A428;
loc_8211A40C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f30,104(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// fmr f29,f28
	f29.f64 = f28.f64;
	// stfs f31,108(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
loc_8211A428:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(f29.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211A440;
	sub_82204AE0(ctx, base);
	// stfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 112, temp.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8211A458;
	sub_82202070(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8211a540
	if (ctx.cr6.gt) goto loc_8211A540;
	// bl 0x821fef70
	ctx.lr = 0x8211A478;
	sub_821FEF70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f30.f64 = double(temp.f32);
	// lfs f29,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	f29.f64 = double(temp.f32);
	// fmadds f1,f1,f30,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f29.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211A490;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f13,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f0,f13
	f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821fef70
	ctx.lr = 0x8211A4A0;
	sub_821FEF70(ctx, base);
	// fmadds f1,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f29.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211A4A8;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f13,244(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821fef70
	ctx.lr = 0x8211A4B8;
	sub_821FEF70(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,224(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// fadds f10,f0,f27
	ctx.f10.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f12,228(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f11,232(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// lfs f0,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r8,-31116
	ctx.r6.s64 = ctx.r8.s64 + -31116;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r4,777
	ctx.r4.s64 = 777;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f30,f28,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, f28.f64, ctx.f0.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821f7d50
	ctx.lr = 0x8211A518;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211a534
	if (ctx.cr0.eq) goto loc_8211A534;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwz r6,128(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lwz r5,116(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 116);
	// bl 0x82119810
	ctx.lr = 0x8211A534;
	sub_82119810(ctx, base);
loc_8211A534:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
	// b 0x8211a570
	goto loc_8211A570;
loc_8211A540:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lha r9,64(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 64));
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8211a570
	if (!ctx.cr6.lt) goto loc_8211A570;
	// bl 0x821fedc8
	ctx.lr = 0x8211A55C;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19788);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211a570
	if (!ctx.cr6.lt) goto loc_8211A570;
	// stw r24,132(r30)
	REX_STORE_U32(r30.u32 + 132, r24.u32);
loc_8211A570:
	// stw r24,140(r30)
	REX_STORE_U32(r30.u32 + 140, r24.u32);
loc_8211A574:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x8211A580;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8212A858) {
	REX_FUNC_PROLOGUE();
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212a89c
	if (ctx.cr6.eq) goto loc_8212A89C;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8212A878:
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x8212a878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212A878;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8212a89c
	if (ctx.cr6.eq) goto loc_8212A89C;
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_8212A89C:
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8212A8B8:
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x8212a8b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212A8B8;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212BE90) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82203138
	ctx.lr = 0x8212BEAC;
	sub_82203138(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82203138
	ctx.lr = 0x8212BEB4;
	sub_82203138(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82203138
	ctx.lr = 0x8212BEBC;
	sub_82203138(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82203138
	ctx.lr = 0x8212BEC4;
	sub_82203138(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82203138
	ctx.lr = 0x8212BECC;
	sub_82203138(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82203138
	ctx.lr = 0x8212BED4;
	sub_82203138(ctx, base);
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82203138
	ctx.lr = 0x8212BEDC;
	sub_82203138(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23056
	ctx.r9.s64 = ctx.r10.s64 + -23056;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r11,-23056(r10)
	REX_STORE_U32(ctx.r10.u32 + -23056, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8212bf14
	if (!ctx.cr6.eq) goto loc_8212BF14;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212aaf0
	ctx.lr = 0x8212BF0C;
	sub_8212AAF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212aaf0
	ctx.lr = 0x8212BF14;
	sub_8212AAF0(ctx, base);
loc_8212BF14:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// bl 0x822034e0
	ctx.lr = 0x8212BF20;
	sub_822034E0(ctx, base);
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

DEFINE_REX_FUNC(sub_8212DD18) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x8212DD20;
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r31,98(r3)
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 98));
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r28,-1
	r28.s64 = -1;
	// extsb r18,r10
	r18.s64 = ctx.r10.s8;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(r31.s32, 24, ctx.xer);
	// bne cr6,0x8212dd5c
	if (!ctx.cr6.eq) goto loc_8212DD5C;
loc_8212DD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8212e2f8
	goto loc_8212E2F8;
loc_8212DD5C:
	// rlwinm. r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212dd6c
	if (ctx.cr0.eq) goto loc_8212DD6C;
loc_8212DD64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212e2f8
	goto loc_8212E2F8;
loc_8212DD6C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// blt cr6,0x8212e2f4
	if (ctx.cr6.lt) goto loc_8212E2F4;
	// cmpwi cr6,r21,191
	ctx.cr6.compare<int32_t>(r21.s32, 191, ctx.xer);
	// bgt cr6,0x8212e2f4
	if (ctx.cr6.gt) goto loc_8212E2F4;
	// rlwinm. r11,r17,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// beq 0x8212de30
	if (ctx.cr0.eq) goto loc_8212DE30;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ddac
	if (ctx.cr6.eq) goto loc_8212DDAC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8212DD9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8218efb0
	ctx.lr = 0x8212DDA8;
	sub_8218EFB0(ctx, base);
	// b 0x8212dd54
	goto loc_8212DD54;
loc_8212DDAC:
	// cmpwi cr6,r17,16384
	ctx.cr6.compare<int32_t>(r17.s32, 16384, ctx.xer);
	// beq cr6,0x8212de28
	if (ctx.cr6.eq) goto loc_8212DE28;
	// cmpwi cr6,r17,16385
	ctx.cr6.compare<int32_t>(r17.s32, 16385, ctx.xer);
	// beq cr6,0x8212de18
	if (ctx.cr6.eq) goto loc_8212DE18;
	// cmpwi cr6,r17,16386
	ctx.cr6.compare<int32_t>(r17.s32, 16386, ctx.xer);
	// bne cr6,0x8212dd54
	if (!ctx.cr6.eq) goto loc_8212DD54;
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-30028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8212de04
	if (ctx.cr6.lt) goto loc_8212DE04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8212de08
	if (!ctx.cr6.gt) goto loc_8212DE08;
loc_8212DE04:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8212DE08:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8218ed88
	ctx.lr = 0x8212DE14;
	sub_8218ED88(ctx, base);
	// b 0x8212dd54
	goto loc_8212DD54;
loc_8212DE18:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8218ed80
	ctx.lr = 0x8212DE24;
	sub_8218ED80(ctx, base);
	// b 0x8212dd54
	goto loc_8212DD54;
loc_8212DE28:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// b 0x8212dd9c
	goto loc_8212DD9C;
loc_8212DE30:
	// addi r16,r11,432
	r16.s64 = ctx.r11.s64 + 432;
	// lwz r11,76(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212dd54
	if (!ctx.cr6.eq) goto loc_8212DD54;
	// lhz r11,30(r16)
	ctx.r11.u64 = REX_LOAD_U16(r16.u32 + 30);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8212de60
	if (!ctx.cr6.eq) goto loc_8212DE60;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8212cf78
	ctx.lr = 0x8212DE5C;
	sub_8212CF78(ctx, base);
	// b 0x8212e2f8
	goto loc_8212E2F8;
loc_8212DE60:
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r17,4106
	ctx.cr6.compare<int32_t>(r17.s32, 4106, ctx.xer);
	// rlwinm r20,r18,2,0,29
	r20.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8212dfac
	if (!ctx.cr6.gt) goto loc_8212DFAC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r17,-8203
	ctx.r10.s64 = r17.s64 + -8203;
	// addi r11,r11,-22992
	ctx.r11.s64 = ctx.r11.s64 + -22992;
	// rlwinm r9,r31,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwzx r11,r20,r11
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8212dd64
	if (!ctx.cr6.eq) goto loc_8212DD64;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-23008
	ctx.r11.s64 = ctx.r11.s64 + -23008;
	// lwzx r8,r20,r11
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8212dd64
	if (ctx.cr6.eq) goto loc_8212DD64;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8212DEB4:
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x8212deb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212DEB4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20220
	ctx.r11.s64 = ctx.r11.s64 + 20220;
	// lwzx r11,r20,r11
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8212dd64
	if (!ctx.cr6.eq) goto loc_8212DD64;
loc_8212DEDC:
	// lwz r10,40(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8212dfe8
	if (!ctx.cr6.eq) goto loc_8212DFE8;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r11,-22936
	ctx.r11.s64 = ctx.r11.s64 + -22936;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r10,r10,-22944
	ctx.r10.s64 = ctx.r10.s64 + -22944;
	// addi r9,r9,-22952
	ctx.r9.s64 = ctx.r9.s64 + -22952;
	// addi r29,r18,1
	r29.s64 = r18.s64 + 1;
	// lwzx r31,r20,r11
	r31.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// lwzx r30,r20,r10
	r30.u64 = REX_LOAD_U32(r20.u32 + ctx.r10.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// lfsx f31,r20,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r9.u32);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8212dfa4
	if (!ctx.cr6.gt) goto loc_8212DFA4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8212dfa4
	if (ctx.cr6.lt) goto loc_8212DFA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212a348
	ctx.lr = 0x8212DF2C;
	sub_8212A348(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8212dfa4
	if (!ctx.cr6.lt) goto loc_8212DFA4;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// bl 0x8212c610
	ctx.lr = 0x8212DF50;
	sub_8212C610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// sth r3,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r3.u16);
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// sth r19,154(r1)
	REX_STORE_U16(ctx.r1.u32 + 154, r19.u16);
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r3,r9,15284
	ctx.r3.s64 = ctx.r9.s64 + 15284;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82203fe0
	ctx.lr = 0x8212DF94;
	sub_82203FE0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8212dfa4
	if (!ctx.cr0.eq) goto loc_8212DFA4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8217a600
	ctx.lr = 0x8212DFA4;
	sub_8217A600(ctx, base);
loc_8212DFA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8212e2f8
	goto loc_8212E2F8;
loc_8212DFAC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-22980
	ctx.r11.s64 = ctx.r11.s64 + -22980;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r20,r11
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// beq cr6,0x8212dedc
	if (ctx.cr6.eq) goto loc_8212DEDC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r11,-22960(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -22960);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212dd64
	if (ctx.cr0.eq) goto loc_8212DD64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8212DFE4;
	sub_8212BC38(ctx, base);
	// b 0x8212dd64
	goto loc_8212DD64;
loc_8212DFE8:
	// lhz r11,2(r16)
	ctx.r11.u64 = REX_LOAD_U16(r16.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8212e03c
	if (!ctx.cr6.eq) goto loc_8212E03C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8212e004
	if (ctx.cr6.eq) goto loc_8212E004;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8212e03c
	if (!ctx.cr6.eq) goto loc_8212E03C;
loc_8212E004:
	// lwz r11,5464(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212e03c
	if (!ctx.cr6.gt) goto loc_8212E03C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8212e034
	if (!ctx.cr6.gt) goto loc_8212E034;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8212e03c
	if (!ctx.cr6.eq) goto loc_8212E03C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10488(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 10488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8212dd54
	if (ctx.cr6.lt) goto loc_8212DD54;
loc_8212E034:
	// li r17,4106
	r17.s64 = 4106;
	// mr r21,r19
	r21.u64 = r19.u64;
loc_8212E03C:
	// cmpwi cr6,r17,2
	ctx.cr6.compare<int32_t>(r17.s32, 2, ctx.xer);
	// blt cr6,0x8212e090
	if (ctx.cr6.lt) goto loc_8212E090;
	// cmpwi cr6,r17,3
	ctx.cr6.compare<int32_t>(r17.s32, 3, ctx.xer);
	// ble cr6,0x8212e054
	if (!ctx.cr6.gt) goto loc_8212E054;
	// cmpwi cr6,r17,5
	ctx.cr6.compare<int32_t>(r17.s32, 5, ctx.xer);
	// bne cr6,0x8212e090
	if (!ctx.cr6.eq) goto loc_8212E090;
loc_8212E054:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82129e90
	ctx.lr = 0x8212E064;
	sub_82129E90(ctx, base);
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
	// ble cr6,0x8212e090
	if (!ctx.cr6.gt) goto loc_8212E090;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8212dd18
	ctx.lr = 0x8212E08C;
	sub_8212DD18(ctx, base);
	// b 0x8212e2f8
	goto loc_8212E2F8;
loc_8212E090:
	// clrlwi r24,r17,20
	r24.u64 = r17.u32 & 0xFFF;
	// cmpwi cr6,r24,16
	ctx.cr6.compare<int32_t>(r24.s32, 16, ctx.xer);
	// bge cr6,0x8212dd64
	if (!ctx.cr6.lt) goto loc_8212DD64;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lfs f13,672(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-9760
	ctx.r11.s64 = ctx.r11.s64 + -9760;
	// mulli r28,r24,50
	r28.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(50));
	// lfs f0,16372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f30.f64)));
	// lwzx r27,r30,r11
	r27.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// add r31,r28,r27
	r31.u64 = r28.u64 + r27.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r23,r18,1
	r23.s64 = r18.s64 + 1;
	// li r29,-1
	r29.s64 = -1;
	// mr r26,r19
	r26.u64 = r19.u64;
	// lbz r10,49(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 49);
	// lfs f13,2376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2376);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// extsb r25,r10
	r25.s64 = ctx.r10.s8;
	// bgt cr6,0x8212e0f8
	if (ctx.cr6.gt) goto loc_8212E0F8;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// b 0x8212e0fc
	goto loc_8212E0FC;
loc_8212E0F8:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f13.f64;
loc_8212E0FC:
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(r25.s32, 32, ctx.xer);
	// bne cr6,0x8212e134
	if (!ctx.cr6.eq) goto loc_8212E134;
	// lwz r11,348(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212e120
	if (!ctx.cr6.eq) goto loc_8212E120;
	// lha r3,98(r22)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r22.u32 + 98));
	// bl 0x821c9150
	ctx.lr = 0x8212E118;
	sub_821C9150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212e128
	if (!ctx.cr0.eq) goto loc_8212E128;
loc_8212E120:
	// li r25,2
	r25.s64 = 2;
	// b 0x8212e134
	goto loc_8212E134;
loc_8212E128:
	// lbz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 48);
	// li r25,1
	r25.s64 = 1;
	// extsb r26,r11
	r26.s64 = ctx.r11.s8;
loc_8212E134:
	// li r11,48
	ctx.r11.s64 = 48;
	// lbz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 48);
	// divw r11,r21,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r21.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r21.s32 / ctx.r11.s32 : 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8212e2e8
	if (!ctx.cr6.lt) goto loc_8212E2E8;
	// cmpwi cr6,r21,47
	ctx.cr6.compare<int32_t>(r21.s32, 47, ctx.xer);
	// bgt cr6,0x8212e180
	if (ctx.cr6.gt) goto loc_8212E180;
	// cmpwi cr6,r17,4106
	ctx.cr6.compare<int32_t>(r17.s32, 4106, ctx.xer);
	// ble cr6,0x8212e16c
	if (!ctx.cr6.gt) goto loc_8212E16C;
	// mr r29,r21
	r29.u64 = r21.u64;
	// b 0x8212e1d0
	goto loc_8212E1D0;
loc_8212E16C:
	// add r11,r28,r26
	ctx.r11.u64 = r28.u64 + r26.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lbzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r21.u32);
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// b 0x8212e1d0
	goto loc_8212E1D0;
loc_8212E180:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r11,r11,-9584
	ctx.r11.s64 = ctx.r11.s64 + -9584;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8212e2e8
	if (ctx.cr0.eq) goto loc_8212E2E8;
loc_8212E198:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bne cr6,0x8212e1c4
	if (!ctx.cr6.eq) goto loc_8212E1C4;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r24.s32, ctx.xer);
	// bne cr6,0x8212e1c4
	if (!ctx.cr6.eq) goto loc_8212E1C4;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// extsb r29,r10
	r29.s64 = ctx.r10.s8;
loc_8212E1C4:
	// lbzu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8212e198
	if (!ctx.cr0.eq) goto loc_8212E198;
loc_8212E1D0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8212e2e8
	if (ctx.cr6.lt) goto loc_8212E2E8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8212a348
	ctx.lr = 0x8212E1E4;
	sub_8212A348(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8212e2e8
	if (!ctx.cr6.lt) goto loc_8212E2E8;
	// cmpwi cr6,r17,8203
	ctx.cr6.compare<int32_t>(r17.s32, 8203, ctx.xer);
	// blt cr6,0x8212e208
	if (ctx.cr6.lt) goto loc_8212E208;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-23000
	ctx.r11.s64 = ctx.r11.s64 + -23000;
	// lwzx r11,r20,r11
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212e2e8
	if (!ctx.cr6.eq) goto loc_8212E2E8;
loc_8212E208:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// bl 0x8212c610
	ctx.lr = 0x8212E224;
	sub_8212C610(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r3,184(r1)
	REX_STORE_U16(ctx.r1.u32 + 184, ctx.r3.u16);
	// stfs f30,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// stw r25,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r29,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r19,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r19.u32);
	// addi r3,r10,15284
	ctx.r3.s64 = ctx.r10.s64 + 15284;
	// sth r19,186(r1)
	REX_STORE_U16(ctx.r1.u32 + 186, r19.u16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x82203fe0
	ctx.lr = 0x8212E260;
	sub_82203FE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8212e288
	if (!ctx.cr0.eq) goto loc_8212E288;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// bne cr6,0x8212e280
	if (!ctx.cr6.eq) goto loc_8212E280;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
	// stwx r10,r20,r11
	REX_STORE_U32(r20.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8212E280:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8217a600
	ctx.lr = 0x8212E288;
	sub_8217A600(ctx, base);
loc_8212E288:
	// lhz r11,72(r16)
	ctx.r11.u64 = REX_LOAD_U16(r16.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8212e2cc
	if (!ctx.cr6.eq) goto loc_8212E2CC;
	// lbz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-22936
	ctx.r10.s64 = ctx.r10.s64 + -22936;
	// addi r9,r9,-22944
	ctx.r9.s64 = ctx.r9.s64 + -22944;
	// addi r8,r8,-22952
	ctx.r8.s64 = ctx.r8.s64 + -22952;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r25.u32);
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r29.u32);
	// stfsx f31,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// bl 0x8212a068
	ctx.lr = 0x8212E2CC;
	sub_8212A068(ctx, base);
loc_8212E2CC:
	// cmpwi cr6,r17,4106
	ctx.cr6.compare<int32_t>(r17.s32, 4106, ctx.xer);
	// bne cr6,0x8212e2ec
	if (!ctx.cr6.eq) goto loc_8212E2EC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-27724
	ctx.r11.s64 = ctx.r11.s64 + -27724;
	// stwx r10,r20,r11
	REX_STORE_U32(r20.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x8212e2ec
	goto loc_8212E2EC;
loc_8212E2E8:
	// li r31,-1
	r31.s64 = -1;
loc_8212E2EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8212e2f8
	goto loc_8212E2F8;
loc_8212E2F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8212E2F8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8214D6E0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x8214D6E8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f2c
	ctx.lr = 0x8214D6F0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,15620(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15620);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,28228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28228);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r27,1
	r27.s64 = 1;
	// lfs f27,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f27.f64 = double(temp.f32);
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r27,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, r27.u16);
	// lfs f26,16836(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16836);
	f26.f64 = double(temp.f32);
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// lfs f25,-19168(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -19168);
	f25.f64 = double(temp.f32);
	// lfs f30,-19172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19172);
	f30.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stfs f27,120(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x8214d7d4
	if (ctx.cr6.eq) goto loc_8214D7D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8214d7c8
	if (!ctx.cr6.gt) goto loc_8214D7C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8214d7b4
	if (!ctx.cr6.gt) goto loc_8214D7B4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214d798
	if (ctx.cr6.eq) goto loc_8214D798;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8214d7c8
	if (!ctx.cr6.eq) goto loc_8214D7C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f3,28668(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28668);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-31132(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-19176(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19176);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8214d7e4
	goto loc_8214D7E4;
loc_8214D798:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f3,32252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32252);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-30436(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30436);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-19180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19180);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8214d7e4
	goto loc_8214D7E4;
loc_8214D7B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,-30440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30440);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8214d7e0
	goto loc_8214D7E0;
loc_8214D7C8:
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f26.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// b 0x8214d7e0
	goto loc_8214D7E0;
loc_8214D7D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// lfs f3,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f3.f64 = double(temp.f32);
loc_8214D7E0:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
loc_8214D7E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// bl 0x822028c8
	ctx.lr = 0x8214D7F0;
	sub_822028C8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r30,112
	ctx.r10.s64 = r30.s64 + 112;
	// li r29,0
	r29.s64 = 0;
	// li r28,2
	r28.s64 = 2;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r8,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r8.u32);
	// lfs f29,2344(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	f29.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,-19192
	r26.s64 = ctx.r11.s64 + -19192;
	// lfs f28,-19184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19184);
	f28.f64 = double(temp.f32);
loc_8214D838:
	// stfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne cr6,0x8214d854
	if (!ctx.cr6.eq) goto loc_8214D854;
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x8214d858
	goto loc_8214D858;
loc_8214D854:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8214D858:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x821675c0
	ctx.lr = 0x8214D87C;
	sub_821675C0(ctx, base);
	// addi r11,r29,23
	ctx.r11.s64 = r29.s64 + 23;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r31.u32);
	// beq 0x8214d904
	if (ctx.cr0.eq) goto loc_8214D904;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x822028c8
	ctx.lr = 0x8214D8A8;
	sub_822028C8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// addi r8,r31,144
	ctx.r8.s64 = r31.s64 + 144;
	// stb r9,186(r31)
	REX_STORE_U8(r31.u32 + 186, ctx.r9.u8);
	// cntlzw r10,r29
	ctx.r10.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stb r9,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r9.u8);
	// stb r28,106(r31)
	REX_STORE_U8(r31.u32 + 106, r28.u8);
	// stb r28,107(r31)
	REX_STORE_U8(r31.u32 + 107, r28.u8);
	// sth r27,18(r31)
	REX_STORE_U16(r31.u32 + 18, r27.u16);
	// stb r10,189(r31)
	REX_STORE_U8(r31.u32 + 189, ctx.r10.u8);
	// stb r27,109(r31)
	REX_STORE_U8(r31.u32 + 109, r27.u8);
loc_8214D904:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// blt cr6,0x8214d838
	if (ctx.cr6.lt) goto loc_8214D838;
	// bl 0x821fee88
	ctx.lr = 0x8214D914;
	sub_821FEE88(ctx, base);
	// stfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8214D91C;
	sub_821FEEC8(ctx, base);
	// stfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// bl 0x821fef70
	ctx.lr = 0x8214D924;
	sub_821FEF70(ctx, base);
	// stfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// bl 0x822d6060
	ctx.lr = 0x8214D92C;
	sub_822D6060(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// divw r11,r3,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,15
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(15));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r11.u32);
	// bl 0x822d6060
	ctx.lr = 0x8214D948;
	sub_822D6060(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// stb r27,61(r30)
	REX_STORE_U8(r30.u32 + 61, r27.u8);
	// divw r11,r3,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,30
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(30));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f78
	ctx.lr = 0x8214D970;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8215D378) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D4E8) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D518) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D730) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x821dce30
	ctx.lr = 0x8215D74C;
	sub_821DCE30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215d760
	if (!ctx.cr6.eq) goto loc_8215D760;
loc_8215D758:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215d7a4
	goto loc_8215D7A4;
loc_8215D760:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,74
	ctx.r3.s64 = 74;
	// bl 0x821dce30
	ctx.lr = 0x8215D76C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d758
	if (ctx.cr6.eq) goto loc_8215D758;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d780
	if (!ctx.cr6.eq) goto loc_8215D780;
	// li r31,2
	r31.s64 = 2;
loc_8215D780:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x821dce30
	ctx.lr = 0x8215D78C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d758
	if (ctx.cr6.eq) goto loc_8215D758;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d7a0
	if (!ctx.cr6.eq) goto loc_8215D7A0;
	// li r31,2
	r31.s64 = 2;
loc_8215D7A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215D7A4:
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

DEFINE_REX_FUNC(sub_821610E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x8215fc38
	sub_8215FC38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82161350) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82161384
	if (!ctx.cr6.gt) goto loc_82161384;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8216139c
	goto loc_8216139C;
loc_82161384:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8216139C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82165B50) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x82165B58;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x82165B60;
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// beq 0x82165bd0
	if (ctx.cr0.eq) goto loc_82165BD0;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
loc_82165BD0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82165be8
	if (ctx.cr0.eq) goto loc_82165BE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f12,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82165c04
	goto loc_82165C04;
loc_82165BE8:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82165c0c
	if (ctx.cr0.eq) goto loc_82165C0C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,16172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,2012(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
loc_82165C04:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82165C0C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82165c24
	if (!ctx.cr6.lt) goto loc_82165C24;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82165c34
	goto loc_82165C34;
loc_82165C24:
	// fsubs f12,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82165c34
	if (!ctx.cr6.gt) goto loc_82165C34;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82165C34:
	// fctiwz f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwa r10,116(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 116));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// bne cr6,0x82165c68
	if (!ctx.cr6.eq) goto loc_82165C68;
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,400
	r28.s64 = ctx.r1.s64 + 400;
	// b 0x82165c6c
	goto loc_82165C6C;
loc_82165C68:
	// addi r28,r30,270
	r28.s64 = r30.s64 + 270;
loc_82165C6C:
	// fadds f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f0,f12
	ctx.f0.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// ble cr6,0x82165ce4
	if (!ctx.cr6.gt) goto loc_82165CE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// beq 0x82165ca4
	if (ctx.cr0.eq) goto loc_82165CA4;
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821621e8
	ctx.lr = 0x82165CA0;
	sub_821621E8(ctx, base);
	// b 0x82165cb0
	goto loc_82165CB0;
loc_82165CA4:
	// stfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82162f78
	ctx.lr = 0x82165CB0;
	sub_82162F78(ctx, base);
loc_82165CB0:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// ld r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U64(r29.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82162460
	ctx.lr = 0x82165CE0;
	sub_82162460(ctx, base);
	// b 0x82165d38
	goto loc_82165D38;
loc_82165CE4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// beq 0x82165cfc
	if (ctx.cr0.eq) goto loc_82165CFC;
	// stfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x821621e8
	ctx.lr = 0x82165CF8;
	sub_821621E8(ctx, base);
	// b 0x82165d08
	goto loc_82165D08;
loc_82165CFC:
	// stfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82162f78
	ctx.lr = 0x82165D08;
	sub_82162F78(ctx, base);
loc_82165D08:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// ld r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U64(r29.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82162460
	ctx.lr = 0x82165D38;
	sub_82162460(ctx, base);
loc_82165D38:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x82165D44;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8216DF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8216DF70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r30,25
	r30.s64 = 25;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8216DF90:
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8216DFA0;
	sub_822D4FA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bne 0x8216df90
	if (!ctx.cr0.eq) goto loc_8216DF90;
	// addi r11,r31,15
	ctx.r11.s64 = r31.s64 + 15;
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8216ED68) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,31764
	ctx.r8.s64 = ctx.r10.s64 + 31764;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// beq cr6,0x8216edbc
	if (ctx.cr6.eq) goto loc_8216EDBC;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stb r8,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r8.u8);
loc_8216EDBC:
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r9,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r9.u8);
	// stb r9,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r9.u8);
	// stb r9,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r9.u8);
	// bne cr6,0x8216ede0
	if (!ctx.cr6.eq) goto loc_8216EDE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_8216EDE0:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8216edf8
	if (!ctx.cr6.eq) goto loc_8216EDF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_8216EDF8:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8216ee10
	if (!ctx.cr6.eq) goto loc_8216EE10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_8216EE10:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8216ee28
	if (!ctx.cr6.eq) goto loc_8216EE28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_8216EE28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lfs f2,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f8,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f5,2332(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f4.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// bl 0x821065b0
	ctx.lr = 0x8216EE78;
	sub_821065B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82173C18) {
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
	ctx.lr = 0x82173C20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// li r22,-1
	r22.s64 = -1;
	// li r24,0
	r24.s64 = 0;
	// li r26,0
	r26.s64 = 0;
loc_82173C50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821b30e0
	ctx.lr = 0x82173C58;
	sub_821B30E0(ctx, base);
	// bl 0x821dcfb8
	ctx.lr = 0x82173C5C;
	sub_821DCFB8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82173c68
	if (ctx.cr6.lt) goto loc_82173C68;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_82173C68:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,21
	ctx.cr6.compare<int32_t>(r26.s32, 21, ctx.xer);
	// blt cr6,0x82173c50
	if (ctx.cr6.lt) goto loc_82173C50;
	// clrlwi r3,r30,24
	ctx.r3.u64 = r30.u32 & 0xFF;
	// bl 0x821b3110
	ctx.lr = 0x82173C7C;
	sub_821B3110(ctx, base);
	// lbz r11,303(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 303);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stb r29,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// stb r28,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, r28.u8);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r27,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, r27.u8);
	// stb r10,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// beq cr6,0x82173cbc
	if (ctx.cr6.eq) goto loc_82173CBC;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,89
	ctx.r3.s64 = ctx.r1.s64 + 89;
	// bl 0x822d5428
	ctx.lr = 0x82173CB8;
	sub_822D5428(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
loc_82173CBC:
	// addi r9,r1,89
	ctx.r9.s64 = ctx.r1.s64 + 89;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,99
	ctx.r10.s64 = 99;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// ble cr6,0x82173cdc
	if (!ctx.cr6.gt) goto loc_82173CDC;
	// stb r10,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
loc_82173CDC:
	// lbz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// ble cr6,0x82173cf0
	if (!ctx.cr6.gt) goto loc_82173CF0;
	// li r11,59
	ctx.r11.s64 = 59;
	// stb r11,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
loc_82173CF0:
	// lbz r11,103(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// ble cr6,0x82173d00
	if (!ctx.cr6.gt) goto loc_82173D00;
	// stb r10,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
loc_82173D00:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82173d1c
	if (!ctx.cr6.gt) goto loc_82173D1C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82173D1C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82173a58
	ctx.lr = 0x82173D28;
	sub_82173A58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(r25.s32, 6, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(r25.s32, 7, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(r25.s32, 8, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,9
	ctx.cr6.compare<int32_t>(r25.s32, 9, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// beq cr6,0x82173d8c
	if (ctx.cr6.eq) goto loc_82173D8C;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(r25.s32, 10, ctx.xer);
	// beq cr6,0x82173d8c
	if (ctx.cr6.eq) goto loc_82173D8C;
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(r25.s32, 11, ctx.xer);
	// beq cr6,0x82173d8c
	if (ctx.cr6.eq) goto loc_82173D8C;
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(r25.s32, 12, ctx.xer);
	// bne cr6,0x82173f08
	if (!ctx.cr6.eq) goto loc_82173F08;
loc_82173D8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82173dbc
	if (!ctx.cr6.gt) goto loc_82173DBC;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82173DA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82173dbc
	if (ctx.cr6.eq) goto loc_82173DBC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r24.s32, ctx.xer);
	// blt cr6,0x82173da0
	if (ctx.cr6.lt) goto loc_82173DA0;
loc_82173DBC:
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r24.s32, ctx.xer);
	// beq cr6,0x82173e88
	if (ctx.cr6.eq) goto loc_82173E88;
	// mulli r11,r7,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82173f08
	if (ctx.cr6.lt) goto loc_82173F08;
	// ble cr6,0x82173de4
	if (!ctx.cr6.gt) goto loc_82173DE4;
	// li r31,0
	r31.s64 = 0;
	// b 0x82173e00
	goto loc_82173E00;
loc_82173DE4:
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82173bc0
	ctx.lr = 0x82173DF4;
	sub_82173BC0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r24
	r31.u64 = ctx.r11.u64 & r24.u64;
loc_82173E00:
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82173f08
	if (ctx.cr6.gt) goto loc_82173F08;
	// mulli r11,r31,28
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
loc_82173E14:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82173e3c
	if (ctx.cr6.lt) goto loc_82173E3C;
	// bgt cr6,0x82173ee8
	if (ctx.cr6.gt) goto loc_82173EE8;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82173bc0
	ctx.lr = 0x82173E34;
	sub_82173BC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82173ee8
	if (!ctx.cr0.eq) goto loc_82173EE8;
loc_82173E3C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82173e14
	if (!ctx.cr6.gt) goto loc_82173E14;
	// b 0x82173f08
	goto loc_82173F08;
loc_82173E50:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82173e80
	if (!ctx.cr6.gt) goto loc_82173E80;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82173E64:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82173e80
	if (ctx.cr6.eq) goto loc_82173E80;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r24.s32, ctx.xer);
	// blt cr6,0x82173e64
	if (ctx.cr6.lt) goto loc_82173E64;
loc_82173E80:
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r24.s32, ctx.xer);
	// bne cr6,0x82173e90
	if (!ctx.cr6.eq) goto loc_82173E90;
loc_82173E88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82173f28
	goto loc_82173F28;
loc_82173E90:
	// mulli r11,r7,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82173bc0
	ctx.lr = 0x82173EA8;
	sub_82173BC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82173f08
	if (ctx.cr0.eq) goto loc_82173F08;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82173f08
	if (ctx.cr6.lt) goto loc_82173F08;
	// addi r5,r30,21
	ctx.r5.s64 = r30.s64 + 21;
loc_82173EC0:
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82173bc0
	ctx.lr = 0x82173ECC;
	sub_82173BC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82173ee8
	if (!ctx.cr0.eq) goto loc_82173EE8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r5,r5,28
	ctx.r5.s64 = ctx.r5.s64 + 28;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82173ec0
	if (!ctx.cr6.gt) goto loc_82173EC0;
	// b 0x82173f08
	goto loc_82173F08;
loc_82173EE8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82173f04
	if (!ctx.cr6.eq) goto loc_82173F04;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82173b60
	ctx.lr = 0x82173F04;
	sub_82173B60(ctx, base);
loc_82173F04:
	// mr r22,r31
	r22.u64 = r31.u64;
loc_82173F08:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82173f24
	if (!ctx.cr6.eq) goto loc_82173F24;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// blt cr6,0x82173f24
	if (ctx.cr6.lt) goto loc_82173F24;
	// lwz r11,8236(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8236);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8236(r23)
	REX_STORE_U32(r23.u32 + 8236, ctx.r11.u32);
loc_82173F24:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82173F28:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8217DAB0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x8217DAB8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f38
	ctx.lr = 0x8217DAC0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dc68
	if (ctx.cr6.eq) goto loc_8217DC68;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dc68
	if (ctx.cr6.eq) goto loc_8217DC68;
	// bl 0x8217d9b0
	ctx.lr = 0x8217DAE4;
	sub_8217D9B0(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,212(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 212);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r26,40
	r26.s64 = 40;
	// addi r30,r10,16
	r30.s64 = ctx.r10.s64 + 16;
	// lwz r11,29428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29428);
	// lwz r31,208(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 208);
	// addi r10,r11,184
	ctx.r10.s64 = ctx.r11.s64 + 184;
	// lwz r10,184(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// lfs f29,28440(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28440);
	f29.f64 = double(temp.f32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,16704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16704);
	f28.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_8217DB44:
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8217dc54
	if (!ctx.cr6.eq) goto loc_8217DC54;
	// lbz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 14);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lbz r9,13(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 13);
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,56(r30)
	REX_STORE_U16(r30.u32 + 56, ctx.r11.u16);
	// bl 0x82177820
	ctx.lr = 0x8217DB70;
	sub_82177820(ctx, base);
	// addi r28,r31,36
	r28.s64 = r31.s64 + 36;
	// addi r5,r29,240
	ctx.r5.s64 = r29.s64 + 240;
	// lfs f1,236(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8217DB88;
	sub_820E20B0(ctx, base);
	// addi r27,r31,52
	r27.s64 = r31.s64 + 52;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,236(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8217DBA0;
	sub_820E20B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8217DBB0;
	sub_820E1B70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8217DBC0;
	sub_820E1B70(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217dbfc
	if (ctx.cr6.lt) goto loc_8217DBFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,60(r30)
	REX_STORE_U8(r30.u32 + 60, ctx.r11.u8);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
loc_8217DBFC:
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmadds f0,f0,f29,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f28.f64)));
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
loc_8217DC54:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// bne 0x8217db44
	if (!ctx.cr0.eq) goto loc_8217DB44;
	// b 0x8217dc78
	goto loc_8217DC78;
loc_8217DC68:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_8217DC78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f84
	ctx.lr = 0x8217DC84;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821821A8) {
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
	// bl 0x822cbbd8
	ctx.lr = 0x821821C0;
	sub_822CBBD8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4336
	ctx.r10.s64 = ctx.r10.s64 + -4336;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r9,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,540(r31)
	REX_STORE_U8(r31.u32 + 540, ctx.r11.u8);
	// bl 0x822d5870
	ctx.lr = 0x821821F0;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_82182F00) {
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
	ctx.lr = 0x82182F08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addis r26,r30,4
	r26.s64 = r30.s64 + 262144;
	// addis r25,r30,4
	r25.s64 = r30.s64 + 262144;
	// addi r26,r26,2560
	r26.s64 = r26.s64 + 2560;
	// addi r25,r25,2564
	r25.s64 = r25.s64 + 2564;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82182f90
	if (ctx.cr0.eq) goto loc_82182F90;
	// addis r27,r3,4
	r27.s64 = ctx.r3.s64 + 262144;
	// addi r27,r27,2612
	r27.s64 = r27.s64 + 2612;
loc_82182F48:
	// mulli r11,r31,4136
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(4136));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821825c8
	ctx.lr = 0x82182F5C;
	sub_821825C8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,26
	r31.u64 = ctx.r11.u32 & 0x3F;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82182f48
	if (!ctx.cr6.eq) goto loc_82182F48;
loc_82182F90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821854B8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,492(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 492);
	// b 0x82189ce8
	sub_82189CE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82185990) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,101(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 101);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,1428(r1)
	REX_STORE_U32(ctx.r1.u32 + 1428, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82185a00
	if (ctx.cr0.eq) goto loc_82185A00;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821859c8
	if (ctx.cr6.eq) goto loc_821859C8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821859d0
	if (!ctx.cr6.eq) goto loc_821859D0;
loc_821859C8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821859D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187bd8
	ctx.lr = 0x821859D8;
	sub_82187BD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82185a00
	if (!ctx.cr0.eq) goto loc_82185A00;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82184a00
	ctx.lr = 0x821859EC;
	sub_82184A00(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,1428
	ctx.r5.s64 = ctx.r1.s64 + 1428;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821855a0
	ctx.lr = 0x82185A00;
	sub_821855A0(ctx, base);
loc_82185A00:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82187CA0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82187E38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82187E40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// b 0x82187e70
	goto loc_82187E70;
loc_82187E54:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82187E70:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82187e54
	if (!ctx.cr6.eq) goto loc_82187E54;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821886E0) {
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
	// bl 0x82188318
	ctx.lr = 0x82188700;
	sub_82188318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82188710
	if (!ctx.cr0.eq) goto loc_82188710;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82188748
	goto loc_82188748;
loc_82188710:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82185298
	ctx.lr = 0x8218871C;
	sub_82185298(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218873c
	if (!ctx.cr0.eq) goto loc_8218873C;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// b 0x82188748
	goto loc_82188748;
loc_8218873C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82188748:
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

DEFINE_REX_FUNC(sub_82189D20) {
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
	// lbz r11,868(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 868);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82189d64
	if (ctx.cr0.eq) goto loc_82189D64;
	// lbz r11,869(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 869);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82189d64
	if (ctx.cr6.eq) goto loc_82189D64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82189D58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82189d68
	goto loc_82189D68;
loc_82189D64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82189D68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C0D8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30580(r10)
	REX_STORE_U32(ctx.r10.u32 + 30580, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218CAB8) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,30580(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218cb04
	if (ctx.cr6.eq) goto loc_8218CB04;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30520
	ctx.r9.s64 = ctx.r11.s64 + 30520;
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r31,-32480(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// stw r11,-32480(r30)
	REX_STORE_U32(r30.u32 + -32480, ctx.r11.u32);
	// bl 0x821f8230
	ctx.lr = 0x8218CB00;
	sub_821F8230(ctx, base);
	// stw r31,-32480(r30)
	REX_STORE_U32(r30.u32 + -32480, r31.u32);
loc_8218CB04:
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

DEFINE_REX_FUNC(sub_8218E5C0) {
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
	ctx.lr = 0x8218E5C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// addi r10,r10,30520
	ctx.r10.s64 = ctx.r10.s64 + 30520;
	// ld r11,2556(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 2556);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r8,2548
	ctx.r4.s64 = ctx.r8.s64 + 2548;
	// lwzx r26,r9,r10
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x822d55f8
	ctx.lr = 0x8218E610;
	sub_822D55F8(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8218E630;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218e64c
	if (ctx.cr0.eq) goto loc_8218E64C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8218e650
	goto loc_8218E650;
loc_8218E64C:
	// li r31,0
	r31.s64 = 0;
loc_8218E650:
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218e668
	if (ctx.cr0.eq) goto loc_8218E668;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e668
	if (ctx.cr6.eq) goto loc_8218E668;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7c80
	ctx.lr = 0x8218E668;
	sub_821F7C80(ctx, base);
loc_8218E668:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82190D00) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x82190D08;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f24
	ctx.lr = 0x82190D10;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// fmr f25,f4
	f25.f64 = ctx.f4.f64;
	// addi r20,r11,432
	r20.s64 = ctx.r11.s64 + 432;
	// fmr f24,f5
	f24.f64 = ctx.f5.f64;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// lwz r11,344(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 344);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// lwz r10,1856(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r17,r10,0,29,29
	r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// beq cr6,0x82190d60
	if (ctx.cr6.eq) goto loc_82190D60;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82190d60
	if (ctx.cr6.eq) goto loc_82190D60;
	// clrlwi r18,r18,1
	r18.u64 = r18.u32 & 0x7FFFFFFF;
loc_82190D60:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r28,r11,30804
	r28.s64 = ctx.r11.s64 + 30804;
	// beq cr6,0x82190dcc
	if (ctx.cr6.eq) goto loc_82190DCC;
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f12,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82190d98
	if (!ctx.cr6.gt) goto loc_82190D98;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82190D98:
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm. r11,r18,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82190db8
	if (ctx.cr0.eq) goto loc_82190DB8;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x82190dcc
	goto loc_82190DCC;
loc_82190DB8:
	// fadd f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-17960(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -17960);
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82190DCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f29.f64 = double(temp.f32);
	// lfs f23,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f23.f64 = double(temp.f32);
	// fnmsubs f26,f13,f29,f30
	f26.f64 = double(float(-std::fma(ctx.f13.f64, f29.f64, -f30.f64)));
	// fnmsubs f31,f0,f29,f2
	f31.f64 = double(float(-std::fma(ctx.f0.f64, f29.f64, -ctx.f2.f64)));
	// fcmpu cr6,f3,f23
	ctx.cr6.compare(ctx.f3.f64, f23.f64);
	// bge cr6,0x82190df4
	if (!ctx.cr6.lt) goto loc_82190DF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,2860(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f3.f64 = double(temp.f32);
loc_82190DF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,-30660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30660);
	f27.f64 = double(temp.f32);
	// fmuls f28,f3,f27
	f28.f64 = double(float(ctx.f3.f64 * f27.f64));
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x821f8c30
	ctx.lr = 0x82190E08;
	sub_821F8C30(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x821fe068
	ctx.lr = 0x82190E10;
	sub_821FE068(ctx, base);
	// stfd f28,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f28.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// addi r3,r11,-23788
	ctx.r3.s64 = ctx.r11.s64 + -23788;
	// bl 0x821eacb0
	ctx.lr = 0x82190E28;
	sub_821EACB0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82190fb8
	if (ctx.cr6.eq) goto loc_82190FB8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r22,r18,0,0,0
	r22.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x80000000;
	// mr r29,r21
	r29.u64 = r21.u64;
	// addi r31,r31,140
	r31.s64 = r31.s64 + 140;
	// addi r27,r11,2852
	r27.s64 = ctx.r11.s64 + 2852;
	// addi r26,r10,-7568
	r26.s64 = ctx.r10.s64 + -7568;
	// addi r24,r9,26656
	r24.s64 = ctx.r9.s64 + 26656;
	// addi r25,r8,26976
	r25.s64 = ctx.r8.s64 + 26976;
loc_82190E6C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82190ee8
	if (ctx.cr6.eq) goto loc_82190EE8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82190e90
	if (ctx.cr6.eq) goto loc_82190E90;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82190f9c
	if (ctx.cr6.eq) goto loc_82190F9C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821f96b8
	ctx.lr = 0x82190E90;
	sub_821F96B8(ctx, base);
loc_82190E90:
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r18,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82190ec4
	if (ctx.cr0.eq) goto loc_82190EC4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmadds f2,f0,f29,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f31.f64)));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821f9730
	ctx.lr = 0x82190EC0;
	sub_821F9730(ctx, base);
	// b 0x82190f94
	goto loc_82190F94;
loc_82190EC4:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f26,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f26.u64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821f96b8
	ctx.lr = 0x82190EE4;
	sub_821F96B8(ctx, base);
	// b 0x82190f94
	goto loc_82190F94;
loc_82190EE8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82190f04
	if (ctx.cr6.eq) goto loc_82190F04;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82190f9c
	if (ctx.cr6.eq) goto loc_82190F9C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82190F04;
	sub_821EACB0(ctx, base);
loc_82190F04:
	// rlwinm. r11,r18,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82190f70
	if (ctx.cr0.eq) goto loc_82190F70;
	// extsw r11,r23
	ctx.r11.s64 = r23.s32;
	// fmr f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f25.f64;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfd f25,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f25.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfd f25,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f25.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f4,f25
	ctx.f4.f64 = f25.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f3,f25
	ctx.f3.f64 = f25.f64;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmadds f0,f13,f24,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f0.f64)));
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82190F6C;
	sub_821EAF80(ctx, base);
	// b 0x82190f94
	goto loc_82190F94;
loc_82190F70:
	// stfd f26,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f26.u64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82190F94;
	sub_821EACB0(ctx, base);
loc_82190F94:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
loc_82190F9C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r30,r31,-128
	r30.s64 = r31.s64 + -128;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,-128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82190e6c
	if (!ctx.cr6.eq) goto loc_82190E6C;
loc_82190FB8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82191194
	if (ctx.cr6.eq) goto loc_82191194;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8219101c
	if (!ctx.cr6.eq) goto loc_8219101C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82190fd8
	if (ctx.cr6.eq) goto loc_82190FD8;
	// li r30,-1
	r30.s64 = -1;
	// b 0x82190fe0
	goto loc_82190FE0;
loc_82190FD8:
	// lis r30,-1
	r30.s64 = -65536;
	// ori r30,r30,255
	r30.u64 = r30.u64 | 255;
loc_82190FE0:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r31,-1
	r31.s64 = -1;
	// lfs f13,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2332(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// b 0x82191070
	goto loc_82191070;
loc_8219101C:
	// li r30,-1
	r30.s64 = -1;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82191030
	if (ctx.cr6.eq) goto loc_82191030;
	// li r31,-1
	r31.s64 = -1;
	// b 0x82191038
	goto loc_82191038;
loc_82191030:
	// lis r31,-1
	r31.s64 = -65536;
	// ori r31,r31,255
	r31.u64 = r31.u64 | 255;
loc_82191038:
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	ctx.f11.f64 = double(temp.f32);
	// fadds f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f12,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f12.f64 = double(temp.f32);
	// fadds f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,2332(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f9
	ctx.f0.f64 = double(float(f30.f64 - ctx.f9.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82191070:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f3,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(f28.f64 * f27.f64));
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f10,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r6,-15404
	ctx.r9.s64 = ctx.r6.s64 + -15404;
	// fsubs f2,f31,f10
	ctx.f2.f64 = double(float(f31.f64 - ctx.f10.f64));
	// bl 0x82102518
	ctx.lr = 0x82191090;
	sub_82102518(ctx, base);
	// lwz r4,344(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 344);
	// rlwinm. r11,r18,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,113
	ctx.r3.s64 = 113;
	// beq 0x8219111c
	if (ctx.cr0.eq) goto loc_8219111C;
	// bl 0x820e68b8
	ctx.lr = 0x821910A4;
	sub_820E68B8(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// addi r29,r11,2840
	r29.s64 = ctx.r11.s64 + 2840;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821f96b8
	ctx.lr = 0x821910E0;
	sub_821F96B8(ctx, base);
	// li r3,114
	ctx.r3.s64 = 114;
	// lwz r4,344(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821910EC;
	sub_820E68B8(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821f96b8
	ctx.lr = 0x82191118;
	sub_821F96B8(ctx, base);
	// b 0x82191194
	goto loc_82191194;
loc_8219111C:
	// bl 0x820e68b8
	ctx.lr = 0x82191120;
	sub_820E68B8(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// addi r29,r11,2840
	r29.s64 = ctx.r11.s64 + 2840;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x8219115C;
	sub_821EACB0(ctx, base);
	// li r3,114
	ctx.r3.s64 = 114;
	// lwz r4,344(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82191168;
	sub_820E68B8(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x82191194;
	sub_821EACB0(ctx, base);
loc_82191194:
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bl 0x821fe068
	ctx.lr = 0x8219119C;
	sub_821FE068(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d4f70
	ctx.lr = 0x821911A8;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_821A5760) {
	REX_FUNC_PROLOGUE();
	// stw r4,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A5908) {
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
	ctx.lr = 0x821A5910;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f34
	ctx.lr = 0x821A5918;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r27,1644(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// ble cr6,0x821a596c
	if (!ctx.cr6.gt) goto loc_821A596C;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// subf r28,r6,r5
	r28.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_821A5950:
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1df8
	ctx.lr = 0x821A5960;
	sub_820E1DF8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x821a5950
	if (!ctx.cr0.eq) goto loc_821A5950;
loc_821A596C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e01b0
	ctx.lr = 0x821A5974;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0810
	ctx.lr = 0x821A5984;
	sub_820E0810(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821a52e8
	ctx.lr = 0x821A5990;
	sub_821A52E8(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821a59c4
	if (!ctx.cr6.gt) goto loc_821A59C4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r25,12
	ctx.r11.s64 = r25.s64 + 12;
	// lfs f0,2384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
loc_821A59A8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821a59c4
	if (!ctx.cr6.lt) goto loc_821A59C4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(r26.s32, r31.s32, ctx.xer);
	// blt cr6,0x821a59a8
	if (ctx.cr6.lt) goto loc_821A59A8;
loc_821A59C4:
	// subf r11,r26,r31
	ctx.r11.u64 = r31.u64 - r26.u64;
	// extsw r10,r26
	ctx.r10.s64 = r26.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addic. r24,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r24.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// fdivs f29,f31,f0
	f29.f64 = double(float(f31.f64 / ctx.f0.f64));
	// fdivs f28,f31,f13
	f28.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmr f31,f30
	f31.f64 = f30.f64;
	// ble 0x821a5b30
	if (!ctx.cr0.gt) goto loc_821A5B30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f27.f64 = double(temp.f32);
loc_821A5A1C:
	// rlwinm r31,r30,4,0,27
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r29,r31,r25
	r29.u64 = r31.u64 + r25.u64;
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x821A5A38;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x821A5A48;
	sub_820E1DF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a6ae8
	ctx.lr = 0x821A5A50;
	sub_821A6AE8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x821A5A60;
	sub_820E1CF8(ctx, base);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// bge cr6,0x821a5a70
	if (!ctx.cr6.lt) goto loc_821A5A70;
	// fadds f31,f29,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f29.f64 + f31.f64));
	// b 0x821a5a74
	goto loc_821A5A74;
loc_821A5A70:
	// fsubs f31,f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - f28.f64));
loc_821A5A74:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x821a5aa0
	if (!ctx.cr6.eq) goto loc_821A5AA0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x821A5A8C;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x820e1b70
	ctx.lr = 0x821A5A9C;
	sub_820E1B70(ctx, base);
	// b 0x821a5ae4
	goto loc_821A5AE4;
loc_821A5AA0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1bf0
	ctx.lr = 0x821A5AAC;
	sub_820E1BF0(ctx, base);
	// add r4,r31,r23
	ctx.r4.u64 = r31.u64 + r23.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e20b0
	ctx.lr = 0x821A5AC0;
	sub_820E20B0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1b70
	ctx.lr = 0x821A5AD0;
	sub_820E1B70(ctx, base);
	// add r4,r31,r22
	ctx.r4.u64 = r31.u64 + r22.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e20b0
	ctx.lr = 0x821A5AE4;
	sub_820E20B0(ctx, base);
loc_821A5AE4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cf8
	ctx.lr = 0x821A5AF4;
	sub_820E1CF8(ctx, base);
	// add r28,r31,r23
	r28.u64 = r31.u64 + r23.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x820e1bf0
	ctx.lr = 0x821A5B08;
	sub_820E1BF0(ctx, base);
	// add r11,r31,r22
	ctx.r11.u64 = r31.u64 + r22.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820e1b70
	ctx.lr = 0x821A5B1C;
	sub_820E1B70(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 28, temp.u32);
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(r30.s32, r24.s32, ctx.xer);
	// blt cr6,0x821a5a1c
	if (ctx.cr6.lt) goto loc_821A5A1C;
loc_821A5B30:
	// stfs f30,12(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r23.u32 + 12, temp.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f80
	ctx.lr = 0x821A5B40;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821AFDC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r3,-9952(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9952);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFEF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bne cr6,0x821aff08
	if (!ctx.cr6.eq) goto loc_821AFF08;
	// lwz r11,456(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 456);
loc_821AFF08:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821aff18
	if (ctx.cr6.lt) goto loc_821AFF18;
	// beq cr6,0x821aff38
	if (ctx.cr6.eq) goto loc_821AFF38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFF18:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// lwz r10,828(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 828);
	// addis r3,r10,-20
	ctx.r3.s64 = ctx.r10.s64 + -1310720;
	// addi r3,r3,-8192
	ctx.r3.s64 = ctx.r3.s64 + -8192;
loc_821AFF2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,456(r9)
	REX_STORE_U32(ctx.r9.u32 + 456, ctx.r11.u32);
	// blr 
	return;
loc_821AFF38:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// lwz r10,828(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 828);
	// addis r3,r10,-10
	ctx.r3.s64 = ctx.r10.s64 + -655360;
	// addi r3,r3,-4096
	ctx.r3.s64 = ctx.r3.s64 + -4096;
	// b 0x821aff2c
	goto loc_821AFF2C;
}

DEFINE_REX_FUNC(sub_821B1618) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r3,-9812(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9812);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1868) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f0,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821b18c8
	if (ctx.cr6.gt) goto loc_821B18C8;
	// li r4,30
	ctx.r4.s64 = 30;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821afa50
	ctx.lr = 0x821B18B8;
	sub_821AFA50(ctx, base);
	// bl 0x821e0c00
	ctx.lr = 0x821B18BC;
	sub_821E0C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b18c8
	if (ctx.cr0.eq) goto loc_821B18C8;
	// bl 0x821afbf0
	ctx.lr = 0x821B18C8;
	sub_821AFBF0(ctx, base);
loc_821B18C8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821B18DC;
	sub_821D6210(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821b193c
	if (ctx.cr6.eq) goto loc_821B193C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c708
	ctx.lr = 0x821B18F0;
	sub_8212C708(ctx, base);
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b192c
	if (ctx.cr0.eq) goto loc_821B192C;
	// bl 0x82136518
	ctx.lr = 0x821B1900;
	sub_82136518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b192c
	if (ctx.cr0.eq) goto loc_821B192C;
	// li r3,16
	ctx.r3.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821B1914;
	sub_8212BC38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x8212eb40
	ctx.lr = 0x821B1928;
	sub_8212EB40(ctx, base);
	// b 0x821b193c
	goto loc_821B193C;
loc_821B192C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212ef78
	ctx.lr = 0x821B193C;
	sub_8212EF78(ctx, base);
loc_821B193C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_821B7D30) {
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
	ctx.lr = 0x821B7D38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b7dfc
	if (!ctx.cr6.eq) goto loc_821B7DFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821B7D74;
	sub_8212F220(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821B7D80;
	sub_821D6210(ctx, base);
	// lhz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b7dac
	if (!ctx.cr6.eq) goto loc_821B7DAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x820f1090
	ctx.lr = 0x821B7DA4;
	sub_820F1090(ctx, base);
	// bl 0x821b1c28
	ctx.lr = 0x821B7DA8;
	sub_821B1C28(ctx, base);
	// b 0x821b7dd8
	goto loc_821B7DD8;
loc_821B7DAC:
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821b7dc0
	if (!ctx.cr6.eq) goto loc_821B7DC0;
	// bl 0x820eeed8
	ctx.lr = 0x821B7DBC;
	sub_820EEED8(ctx, base);
	// b 0x821b7dd8
	goto loc_821B7DD8;
loc_821B7DC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820f1090
	ctx.lr = 0x821B7DD8;
	sub_820F1090(ctx, base);
loc_821B7DD8:
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r11,r11,38527
	ctx.r11.u64 = ctx.r11.u64 | 38527;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// bl 0x821d17d8
	ctx.lr = 0x821B7DE8;
	sub_821D17D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d6ff0
	ctx.lr = 0x821B7DF0;
	sub_821D6FF0(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821d6ff0
	ctx.lr = 0x821B7DFC;
	sub_821D6FF0(ctx, base);
loc_821B7DFC:
	// lwz r11,476(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 476);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,76(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 76);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r27,r11,r10
	r27.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bne cr6,0x821b8108
	if (!ctx.cr6.eq) goto loc_821B8108;
	// lha r11,30(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 30));
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b8090
	if (ctx.cr6.eq) goto loc_821B8090;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821b8068
	if (ctx.cr6.eq) goto loc_821B8068;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821b8014
	if (ctx.cr6.eq) goto loc_821B8014;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821b7e68
	if (ctx.cr6.eq) goto loc_821B7E68;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// lhz r11,74(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// lbz r11,18(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b80b8
	if (!ctx.cr0.eq) goto loc_821B80B8;
	// b 0x821b80a8
	goto loc_821B80A8;
loc_821B7E68:
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d63a0
	ctx.lr = 0x821B7E70;
	sub_821D63A0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,23240
	r31.s64 = ctx.r11.s64 + 23240;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7e9c
	if (!ctx.cr0.eq) goto loc_821B7E9C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 428);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b7ea0
	if (ctx.cr0.eq) goto loc_821B7EA0;
loc_821B7E9C:
	// bl 0x821d5cd0
	ctx.lr = 0x821B7EA0;
	sub_821D5CD0(ctx, base);
loc_821B7EA0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821b8104
	if (!ctx.cr6.eq) goto loc_821B8104;
	// lhz r11,74(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,156
	ctx.r3.s64 = r29.s64 + 156;
	// bl 0x821e1a68
	ctx.lr = 0x821B7EC0;
	sub_821E1A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b8104
	if (ctx.cr0.eq) goto loc_821B8104;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b7ee8
	if (!ctx.cr0.eq) goto loc_821B7EE8;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// and. r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b7f74
	if (ctx.cr0.eq) goto loc_821B7F74;
loc_821B7EE8:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b7f24
	if (ctx.cr0.eq) goto loc_821B7F24;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,5464(r30)
	REX_STORE_U32(r30.u32 + 5464, ctx.r11.u32);
	// stw r9,5464(r10)
	REX_STORE_U32(ctx.r10.u32 + 5464, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821B7F24:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// lbzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b8104
	if (ctx.cr0.eq) goto loc_821B8104;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r11,3704
	ctx.r8.u64 = ctx.r11.u64 | 3704;
	// ori r7,r10,9160
	ctx.r7.u64 = ctx.r10.u64 | 9160;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// stwx r11,r30,r7
	REX_STORE_U32(r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// stw r9,5464(r10)
	REX_STORE_U32(ctx.r10.u32 + 5464, ctx.r9.u32);
	// b 0x821b8104
	goto loc_821B8104;
loc_821B7F74:
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// and. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b7f8c
	if (!ctx.cr0.eq) goto loc_821B7F8C;
	// lwz r9,400(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 400);
	// and. r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b7fb4
	if (ctx.cr0.eq) goto loc_821B7FB4;
loc_821B7F8C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// lha r11,22(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 22));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b7fac
	if (ctx.cr0.lt) goto loc_821B7FAC;
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// b 0x821b800c
	goto loc_821B800C;
loc_821B7FAC:
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// b 0x821b800c
	goto loc_821B800C;
loc_821B7FB4:
	// lwz r9,144(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 144);
	// and. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b7fe4
	if (!ctx.cr0.eq) goto loc_821B7FE4;
	// lwz r9,428(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 428);
	// and. r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b7fe4
	if (!ctx.cr0.eq) goto loc_821B7FE4;
	// lwz r9,280(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 280);
	// and. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b7fe4
	if (!ctx.cr0.eq) goto loc_821B7FE4;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// and. r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b7fec
	if (ctx.cr0.eq) goto loc_821B7FEC;
loc_821B7FE4:
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// b 0x821b8008
	goto loc_821B8008;
loc_821B7FEC:
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8004
	if (!ctx.cr0.eq) goto loc_821B8004;
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 568);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b80cc
	if (ctx.cr0.eq) goto loc_821B80CC;
loc_821B8004:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
loc_821B8008:
	// li r10,4
	ctx.r10.s64 = 4;
loc_821B800C:
	// stw r10,5464(r11)
	REX_STORE_U32(ctx.r11.u32 + 5464, ctx.r10.u32);
	// b 0x821b8104
	goto loc_821B8104;
loc_821B8014:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// lhz r11,74(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,156
	ctx.r3.s64 = r29.s64 + 156;
	// bl 0x821e1a68
	ctx.lr = 0x821B8038;
	sub_821E1A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b8058
	if (ctx.cr0.eq) goto loc_821B8058;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r9,r10,9160
	ctx.r9.u64 = ctx.r10.u64 | 9160;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,5464(r30)
	REX_STORE_U32(r30.u32 + 5464, ctx.r10.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
loc_821B8058:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// stw r11,488(r29)
	REX_STORE_U32(r29.u32 + 488, ctx.r11.u32);
	// stw r11,476(r29)
	REX_STORE_U32(r29.u32 + 476, ctx.r11.u32);
	// b 0x821b8104
	goto loc_821B8104;
loc_821B8068:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// lhz r11,74(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,156
	ctx.r3.s64 = r29.s64 + 156;
	// bl 0x821e1a68
	ctx.lr = 0x821B808C;
	sub_821E1A68(ctx, base);
	// b 0x821b8104
	goto loc_821B8104;
loc_821B8090:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
	// lhz r11,74(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b8104
	if (!ctx.cr0.eq) goto loc_821B8104;
loc_821B80A8:
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,17772
	ctx.r3.s64 = ctx.r11.s64 + 17772;
	// bl 0x821e19b0
	ctx.lr = 0x821B80B8;
	sub_821E19B0(ctx, base);
loc_821B80B8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,156
	ctx.r3.s64 = r29.s64 + 156;
	// bl 0x821e1a68
	ctx.lr = 0x821B80C4;
	sub_821E1A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b8104
	if (ctx.cr0.eq) goto loc_821B8104;
loc_821B80CC:
	// lwz r11,5464(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b8104
	if (!ctx.cr6.eq) goto loc_821B8104;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,9160
	ctx.r11.u64 = ctx.r11.u64 | 9160;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b8104
	if (!ctx.cr6.eq) goto loc_821B8104;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r9,r10,9160
	ctx.r9.u64 = ctx.r10.u64 | 9160;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,5464(r30)
	REX_STORE_U32(r30.u32 + 5464, ctx.r10.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
loc_821B8104:
	// bl 0x821b6c50
	ctx.lr = 0x821B8108;
	sub_821B6C50(ctx, base);
loc_821B8108:
	// lwa r11,168(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r29.u32 + 168));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,-9828(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9828);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821C77E8) {
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
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821be318
	ctx.lr = 0x821C780C;
	sub_821BE318(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 92);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,656(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 656, temp.u32);
	// beq cr6,0x821c7854
	if (ctx.cr6.eq) goto loc_821C7854;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x821c7858
	if (!ctx.cr6.eq) goto loc_821C7858;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,11020(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 11020, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,11012(r31)
	REX_STORE_U32(r31.u32 + 11012, ctx.r10.u32);
	// lhz r9,594(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 594);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x821c784c
	if (!ctx.cr6.eq) goto loc_821C784C;
	// li r10,2
	ctx.r10.s64 = 2;
loc_821C784C:
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// b 0x821c7860
	goto loc_821C7860;
loc_821C7854:
	// stfs f0,11020(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 11020, temp.u32);
loc_821C7858:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11012(r31)
	REX_STORE_U32(r31.u32 + 11012, ctx.r11.u32);
loc_821C7860:
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

DEFINE_REX_FUNC(sub_821C91F0) {
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
	// lha r11,90(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 90));
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821c9218
	if (ctx.cr6.eq) goto loc_821C9218;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x821c9220
	if (!ctx.cr6.eq) goto loc_821C9220;
loc_821C9218:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c9254
	goto loc_821C9254;
loc_821C9220:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge cr6,0x821c9230
	if (!ctx.cr6.lt) goto loc_821C9230;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821C9230:
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// lha r4,100(r3)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 100));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-17520
	ctx.r9.s64 = ctx.r9.s64 + -17520;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhax r31,r10,r9
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// bl 0x82135908
	ctx.lr = 0x821C924C;
	sub_82135908(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_821C9254:
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

DEFINE_REX_FUNC(sub_821CA9D0) {
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
	ctx.lr = 0x821CA9D8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f11,5492(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5492);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,5488(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// ble cr6,0x821caa20
	if (!ctx.cr6.gt) goto loc_821CAA20;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_821CAA20:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lhz r11,74(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cab9c
	if (!ctx.cr0.eq) goto loc_821CAB9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// beq cr6,0x821cab9c
	if (ctx.cr6.eq) goto loc_821CAB9C;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821caa58
	if (!ctx.cr6.eq) goto loc_821CAA58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-23604(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23604);
	f31.f64 = double(temp.f32);
loc_821CAA58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// lfs f12,5500(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5500);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// lfs f10,5504(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5504);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 - f31.f64));
	// stfs f13,5488(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5488, temp.u32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,5500(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 5500, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f11,5468(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// stfs f10,5504(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 5504, temp.u32);
	// blt cr6,0x821caa98
	if (ctx.cr6.lt) goto loc_821CAA98;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821CAA98:
	// stfs f0,5504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5504, temp.u32);
	// lhz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821caaf8
	if (!ctx.cr6.eq) goto loc_821CAAF8;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r11,22(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 22);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821caad4
	if (ctx.cr6.eq) goto loc_821CAAD4;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f2,5568(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5568);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,22960
	ctx.r3.s64 = ctx.r11.s64 + 22960;
	// bl 0x821090c0
	ctx.lr = 0x821CAAD4;
	sub_821090C0(ctx, base);
loc_821CAAD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16536(r31)
	REX_STORE_U32(r31.u32 + 16536, ctx.r10.u32);
	// lfs f13,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821caaf4
	if (!ctx.cr6.lt) goto loc_821CAAF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821CAAF4:
	// stfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
loc_821CAAF8:
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cab78
	if (ctx.cr0.eq) goto loc_821CAB78;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r8,r11,76
	ctx.r8.s64 = ctx.r11.s64 + 76;
	// mulli r7,r10,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cab78
	if (ctx.cr0.eq) goto loc_821CAB78;
	// mulli r9,r10,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(284));
	// addi r8,r11,76
	ctx.r8.s64 = ctx.r11.s64 + 76;
	// addi r7,r11,572
	ctx.r7.s64 = ctx.r11.s64 + 572;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r6,-9496
	ctx.r9.s64 = ctx.r6.s64 + -9496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_821CAB78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821d8db8
	ctx.lr = 0x821CAB84;
	sub_821D8DB8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821cab9c
	if (ctx.cr6.eq) goto loc_821CAB9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c8f80
	ctx.lr = 0x821CAB9C;
	sub_821C8F80(ctx, base);
loc_821CAB9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821D5188) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,13128
	ctx.r5.s64 = ctx.r11.s64 + 13128;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r31,r11,-8896
	r31.s64 = ctx.r11.s64 + -8896;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_821D51B8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821d49c0
	ctx.lr = 0x821D51C0;
	sub_821D49C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d51ec
	if (ctx.cr0.eq) goto loc_821D51EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,0,18,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// rlwinm r11,r9,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_821D51EC:
	// addi r6,r6,136
	ctx.r6.s64 = ctx.r6.s64 + 136;
	// addi r11,r5,272
	ctx.r11.s64 = ctx.r5.s64 + 272;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d51b8
	if (ctx.cr6.lt) goto loc_821D51B8;
	// lbz r11,1888(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1888);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r8,r10,-7176
	ctx.r8.s64 = ctx.r10.s64 + -7176;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821d529c
	if (!ctx.cr6.eq) goto loc_821D529C;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bgt cr6,0x821d5250
	if (ctx.cr6.gt) goto loc_821D5250;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x821d5270
	if (!ctx.cr6.lt) goto loc_821D5270;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d5270
	if (ctx.cr6.eq) goto loc_821D5270;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821d5274
	if (!ctx.cr6.gt) goto loc_821D5274;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x821d5270
	if (!ctx.cr6.gt) goto loc_821D5270;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// b 0x821d526c
	goto loc_821D526C;
loc_821D5250:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821d5270
	if (ctx.cr6.eq) goto loc_821D5270;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x821d5270
	if (ctx.cr6.eq) goto loc_821D5270;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x821d5274
	if (!ctx.cr6.gt) goto loc_821D5274;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
loc_821D526C:
	// bgt cr6,0x821d5274
	if (ctx.cr6.gt) goto loc_821D5274;
loc_821D5270:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821D5274:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d529c
	if (ctx.cr0.eq) goto loc_821D529C;
	// lwz r9,40(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821d5290
	if (!ctx.cr6.eq) goto loc_821D5290;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r9.u32);
loc_821D5290:
	// li r30,1
	r30.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x821d52a0
	goto loc_821D52A0;
loc_821D529C:
	// lwz r9,40(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
loc_821D52A0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,3393(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3393);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d52ec
	if (ctx.cr0.eq) goto loc_821D52EC;
	// lwz r10,2980(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// addi r11,r11,2984
	ctx.r11.s64 = ctx.r11.s64 + 2984;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d52ec
	if (!ctx.cr6.eq) goto loc_821D52EC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d52ec
	if (ctx.cr6.eq) goto loc_821D52EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x821d1ed0
	ctx.lr = 0x821D52E8;
	sub_821D1ED0(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_821D52EC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821d52fc
	if (ctx.cr6.eq) goto loc_821D52FC;
	// bl 0x821d4fe8
	ctx.lr = 0x821D52F8;
	sub_821D4FE8(ctx, base);
	// b 0x821d531c
	goto loc_821D531C;
loc_821D52FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d5318
	if (ctx.cr6.eq) goto loc_821D5318;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x821dd7a0
	ctx.lr = 0x821D5318;
	sub_821DD7A0(ctx, base);
loc_821D5318:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D531C:
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

DEFINE_REX_FUNC(sub_821DCC10) {
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
	// addi r11,r11,15124
	ctx.r11.s64 = ctx.r11.s64 + 15124;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DCC3C;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dcc4c
	if (ctx.cr0.eq) goto loc_821DCC4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821DCC4C;
	sub_822C80A8(ctx, base);
loc_821DCC4C:
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

DEFINE_REX_FUNC(sub_821DD670) {
	REX_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x821dd5d8
	sub_821DD5D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DD798) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDAC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821DDAD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821ddb5c
	if (ctx.cr6.lt) goto loc_821DDB5C;
	// bne cr6,0x821ddb08
	if (!ctx.cr6.eq) goto loc_821DDB08;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x821c5838
	ctx.lr = 0x821DDAFC;
	sub_821C5838(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821ddb9c
	if (ctx.cr0.eq) goto loc_821DDB9C;
loc_821DDB08:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821ddb28
	if (!ctx.cr6.lt) goto loc_821DDB28;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x821c5800
	ctx.lr = 0x821DDB24;
	sub_821C5800(ctx, base);
	// b 0x821ddb44
	goto loc_821DDB44;
loc_821DDB28:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lfs f0,-19172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_821DDB44:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// b 0x821ddb9c
	goto loc_821DDB9C;
loc_821DDB5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821dcf00
	ctx.lr = 0x821DDB6C;
	sub_821DCF00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821ca270
	ctx.lr = 0x821DDB80;
	sub_821CA270(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_821DDB9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821E1CE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1d48
	if (!ctx.cr0.eq) goto loc_821E1D48;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1d48
	if (!ctx.cr0.eq) goto loc_821E1D48;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e1d48
	if (!ctx.cr6.eq) goto loc_821E1D48;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e1d20
	if (ctx.cr6.lt) goto loc_821E1D20;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e1d48
	if (!ctx.cr6.gt) goto loc_821E1D48;
loc_821E1D20:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1d48
	if (!ctx.cr0.eq) goto loc_821E1D48;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_821E1D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E27F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e283c
	if (!ctx.cr0.eq) goto loc_821E283C;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e283c
	if (!ctx.cr0.eq) goto loc_821E283C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x821e2834
	if (ctx.cr6.eq) goto loc_821E2834;
	// cmpwi cr6,r11,166
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 166, ctx.xer);
	// beq cr6,0x821e2834
	if (ctx.cr6.eq) goto loc_821E2834;
	// cmpwi cr6,r11,206
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 206, ctx.xer);
	// bne cr6,0x821e283c
	if (!ctx.cr6.eq) goto loc_821E283C;
loc_821E2834:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E283C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2FD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,16460
	ctx.r11.s64 = ctx.r11.s64 + 16460;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E31F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821E3200;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,30
	ctx.r8.s64 = 30;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,2980(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// bl 0x82208c40
	ctx.lr = 0x821E323C;
	sub_82208C40(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822c80d0
	ctx.lr = 0x821E3244;
	sub_822C80D0(ctx, base);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82209740
	ctx.lr = 0x821E3264;
	sub_82209740(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e32b8
	if (ctx.cr6.eq) goto loc_821E32B8;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_821E327C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x821e32a0
	if (ctx.cr6.eq) goto loc_821E32A0;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// beq cr6,0x821e32a0
	if (ctx.cr6.eq) goto loc_821E32A0;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm. r9,r9,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821e32b4
	if (ctx.cr0.eq) goto loc_821E32B4;
	// li r29,1
	r29.s64 = 1;
loc_821E32A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821e327c
	if (ctx.cr6.lt) goto loc_821E327C;
	// b 0x821e32b8
	goto loc_821E32B8;
loc_821E32B4:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821E32B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821e32c8
	if (ctx.cr6.eq) goto loc_821E32C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821E32C8;
	sub_822C80A8(ctx, base);
loc_821E32C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821E79D0) {
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
	ctx.lr = 0x821E79D8;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x821e79f4
	if (!ctx.cr6.eq) goto loc_821E79F4;
loc_821E79F4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,-32032
	r28.s64 = ctx.r11.s64 + -32032;
	// addi r3,r28,332
	ctx.r3.s64 = r28.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821E7A08;
	sub_821F1818(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stw r29,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r27.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// ble cr6,0x821e7a64
	if (!ctx.cr6.gt) goto loc_821E7A64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821E7A64:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r28,332
	ctx.r3.s64 = r28.s64 + 332;
	// bl 0x821f1840
	ctx.lr = 0x821E7A70;
	sub_821F1840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821E9CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r11,r11,-528
	ctx.r11.s64 = ctx.r11.s64 + -528;
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EADD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r7,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821eae98
	if (!ctx.cr0.eq) goto loc_821EAE98;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821eae1c
	if (!ctx.cr6.eq) goto loc_821EAE1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// b 0x821eae44
	goto loc_821EAE44;
loc_821EAE1C:
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r6,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
loc_821EAE44:
	// stfd f4,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,17184
	ctx.r3.s64 = ctx.r11.s64 + 17184;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821EAE70;
	sub_821EACB0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x821eaa48
	ctx.lr = 0x821EAE8C;
	sub_821EAA48(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x821fe738
	ctx.lr = 0x821EAE98;
	sub_821FE738(ctx, base);
loc_821EAE98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED9D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-180
	ctx.r9.s64 = ctx.r11.s64 + -180;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f1,-4(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// stfs f0,-180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -180, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF138) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,17472
	ctx.r11.s64 = ctx.r11.s64 + 17472;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821ef164
	if (ctx.cr0.eq) goto loc_821EF164;
	// bl 0x822c80a8
	ctx.lr = 0x821EF164;
	sub_822C80A8(ctx, base);
loc_821EF164:
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

DEFINE_REX_FUNC(sub_821F0280) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_821F02C0:
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f02c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F02C0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F1D70) {
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
	// clrlwi. r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f1dac
	if (ctx.cr0.eq) goto loc_821F1DAC;
	// lfs f4,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a1038
	ctx.lr = 0x821F1DAC;
	sub_822A1038(ctx, base);
loc_821F1DAC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a26b8
	ctx.lr = 0x821F1DB8;
	sub_822A26B8(ctx, base);
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

DEFINE_REX_FUNC(sub_821F2DE8) {
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
	// addi r11,r11,18448
	ctx.r11.s64 = ctx.r11.s64 + 18448;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822aac40
	ctx.lr = 0x821F2E14;
	sub_822AAC40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2e24
	if (ctx.cr0.eq) goto loc_821F2E24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821F2E24;
	sub_822C80A8(ctx, base);
loc_821F2E24:
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

DEFINE_REX_FUNC(sub_821F5040) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x821F5048;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,84
	ctx.r10.s64 = 84;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,82
	ctx.r9.s64 = 82;
	// li r31,80
	r31.s64 = 80;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822b8838
	ctx.lr = 0x821F5094;
	sub_822B8838(ctx, base);
	// li r11,77
	ctx.r11.s64 = 77;
	// li r9,69
	ctx.r9.s64 = 69;
	// stb r31,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r31.u8);
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x822b8838
	ctx.lr = 0x821F50C8;
	sub_822B8838(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f54c4
	if (!ctx.cr6.gt) goto loc_821F54C4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,1023
	ctx.r8.s64 = 67043328;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r25,0
	r25.s64 = 0;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// ori r24,r8,65535
	r24.u64 = ctx.r8.u64 | 65535;
	// li r23,-1
	r23.s64 = -1;
	// addi r22,r11,23304
	r22.s64 = ctx.r11.s64 + 23304;
	// addi r21,r10,23316
	r21.s64 = ctx.r10.s64 + 23316;
loc_821F5100:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f54b0
	if (ctx.cr6.eq) goto loc_821F54B0;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822b41c0
	ctx.lr = 0x821F5128;
	sub_822B41C0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821f5158
	if (!ctx.cr6.gt) goto loc_821F5158;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821F5158:
	// bl 0x822c80d0
	ctx.lr = 0x821F515C;
	sub_822C80D0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821f5174
	if (!ctx.cr6.gt) goto loc_821F5174;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821F5174:
	// bl 0x822c80d0
	ctx.lr = 0x821F5178;
	sub_822C80D0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// divwu r29,r10,r11
	r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822ad068
	ctx.lr = 0x821F5198;
	sub_822AD068(ctx, base);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mulli r3,r29,12
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821f51b0
	if (!ctx.cr6.gt) goto loc_821F51B0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821F51B0:
	// bl 0x822c80d0
	ctx.lr = 0x821F51B4;
	sub_822C80D0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,68(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// ble cr6,0x821f53a8
	if (!ctx.cr6.gt) goto loc_821F53A8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F51DC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_821F51E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,64(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 64);
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f5388
	if (ctx.cr0.eq) goto loc_821F5388;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f524c
	if (!ctx.cr6.eq) goto loc_821F524C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_821F524C:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x821f52ac
	if (!ctx.cr6.eq) goto loc_821F52AC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
loc_821F52AC:
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x821f52d0
	if (!ctx.cr6.eq) goto loc_821F52D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
loc_821F52D0:
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bne cr6,0x821f5304
	if (!ctx.cr6.eq) goto loc_821F5304;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
loc_821F5304:
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bne cr6,0x821f5338
	if (!ctx.cr6.eq) goto loc_821F5338;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
loc_821F5338:
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bne cr6,0x821f536c
	if (!ctx.cr6.eq) goto loc_821F536C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stb r4,48(r10)
	REX_STORE_U8(ctx.r10.u32 + 48, ctx.r4.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,49(r10)
	REX_STORE_U8(ctx.r10.u32 + 49, ctx.r8.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,50(r10)
	REX_STORE_U8(ctx.r10.u32 + 50, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,51(r10)
	REX_STORE_U8(ctx.r10.u32 + 51, ctx.r8.u8);
loc_821F536C:
	// addi r10,r7,68
	ctx.r10.s64 = ctx.r7.s64 + 68;
	// lbzx r8,r7,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + r22.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lbzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r21.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821F5388:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// blt cr6,0x821f51e0
	if (ctx.cr6.lt) goto loc_821F51E0;
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f51dc
	if (ctx.cr6.lt) goto loc_821F51DC;
loc_821F53A8:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq cr6,0x821f5400
	if (ctx.cr6.eq) goto loc_821F5400;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,-2
	r30.s64 = ctx.r11.s64 + -2;
loc_821F53C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 4);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lhzu r10,6(r30)
	ea = 6 + r30.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x822ad9c0
	ctx.lr = 0x821F53F4;
	sub_822AD9C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bne 0x821f53c0
	if (!ctx.cr0.eq) goto loc_821F53C0;
loc_821F5400:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,204(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r27.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821f5434
	if (!ctx.cr6.gt) goto loc_821F5434;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821F5434:
	// bl 0x822c80d0
	ctx.lr = 0x821F5438;
	sub_822C80D0(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// rlwinm r3,r27,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821f544c
	if (!ctx.cr6.gt) goto loc_821F544C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821F544C:
	// bl 0x822c80d0
	ctx.lr = 0x821F5450;
	sub_822C80D0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// beq cr6,0x821f54b0
	if (ctx.cr6.eq) goto loc_821F54B0;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_821F5468:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822b5a40
	ctx.lr = 0x821F547C;
	sub_822B5A40(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r3,752
	ctx.r10.s64 = ctx.r3.s64 + 752;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x821f3f40
	ctx.lr = 0x821F549C;
	sub_821F3F40(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x821f5468
	if (ctx.cr6.lt) goto loc_821F5468;
loc_821F54B0:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r25,r25,24
	r25.s64 = r25.s64 + 24;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5100
	if (ctx.cr6.lt) goto loc_821F5100;
loc_821F54C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8220A948) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824d42ec
	ctx.lr = 0x8220A964;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a994
	if (ctx.cr0.lt) goto loc_8220A994;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220a98c
	if (!ctx.cr6.eq) goto loc_8220A98C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r3,r3,611
	ctx.r3.u64 = ctx.r3.u64 | 611;
loc_8220A98C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8220a9a0
	if (!ctx.cr6.lt) goto loc_8220A9A0;
loc_8220A994:
	// bl 0x8220c390
	ctx.lr = 0x8220A998;
	sub_8220C390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220a9a4
	goto loc_8220A9A4;
loc_8220A9A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8220A9A4:
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

DEFINE_REX_FUNC(sub_8220D0F0) {
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
	ctx.lr = 0x8220D0F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8220d124
	if (!ctx.cr6.gt) goto loc_8220D124;
loc_8220D11C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220d668
	goto loc_8220D668;
loc_8220D124:
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.r9.u64 = REX_LOAD_U8(r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// beq 0x8220d1dc
	if (ctx.cr0.eq) goto loc_8220D1DC;
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8220c920
	ctx.lr = 0x8220D17C;
	sub_8220C920(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8220d11c
	if (ctx.cr0.eq) goto loc_8220D11C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8220cbb0
	ctx.lr = 0x8220D1A0;
	sub_8220CBB0(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r28,5(r3)
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x8220d2ac
	if (!ctx.cr6.lt) goto loc_8220D2AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220cfb8
	ctx.lr = 0x8220D1C4;
	sub_8220CFB8(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// b 0x8220d668
	goto loc_8220D668;
loc_8220D1DC:
	// lbz r28,5(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220d11c
	if (!ctx.cr0.eq) goto loc_8220D11C;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x8220d11c
	if (ctx.cr6.lt) goto loc_8220D11C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220d25c
	if (!ctx.cr6.eq) goto loc_8220D25C;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220d25c
	if (!ctx.cr6.eq) goto loc_8220D25C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220d25c
	if (!ctx.cr6.eq) goto loc_8220D25C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8220d25c
	if (!ctx.cr6.lt) goto loc_8220D25C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
loc_8220D25C:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220d298
	if (ctx.cr0.eq) goto loc_8220D298;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x8220d288
	if (ctx.cr0.eq) goto loc_8220D288;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x8220d288
	if (!ctx.cr6.gt) goto loc_8220D288;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8220D288:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x824d43fc
	ctx.lr = 0x8220D298;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8220D298:
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_8220D2AC:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// lbz r9,6(r27)
	ctx.r9.u64 = REX_LOAD_U8(r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// subf r24,r9,r10
	r24.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bgt cr6,0x8220d2d8
	if (ctx.cr6.gt) goto loc_8220D2D8;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8220D2D8:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220d310
	if (ctx.cr0.eq) goto loc_8220D310;
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// std r10,-16(r9)
	REX_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,-8(r9)
	REX_STORE_U64(ctx.r9.u32 + -8, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8220D310:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d368
	if (!ctx.cr6.eq) goto loc_8220D368;
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.u64 = ctx.r9.u64 - r23.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	REX_STORE_U8(r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	REX_STORE_U8(r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r11.u16);
	// bne 0x8220d350
	if (!ctx.cr0.eq) goto loc_8220D350;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x8220d634
	goto loc_8220D634;
loc_8220D350:
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r27,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r27.u32);
	// b 0x8220d634
	goto loc_8220D634;
loc_8220D368:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - r23.u64;
	// sth r9,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r10,6(r27)
	REX_STORE_U8(r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 4);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// beq 0x8220d3f8
	if (ctx.cr0.eq) goto loc_8220D3F8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r31.u32);
	// stb r28,5(r31)
	REX_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x8220d44c
	if (ctx.cr6.lt) goto loc_8220D44C;
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x8220d3ec
	goto loc_8220D3EC;
loc_8220D3DC:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8220d5fc
	if (!ctx.cr6.gt) goto loc_8220D5FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8220D3EC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220d3dc
	if (!ctx.cr6.eq) goto loc_8220D3DC;
	// b 0x8220d5fc
	goto loc_8220D5FC;
loc_8220D3F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lbz r28,5(r29)
	r28.u64 = REX_LOAD_U8(r29.u32 + 5);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220d47c
	if (ctx.cr0.eq) goto loc_8220D47C;
	// andi. r11,r10,239
	ctx.r11.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x8220d454
	if (!ctx.cr6.lt) goto loc_8220D454;
loc_8220D44C:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x8220d59c
	goto loc_8220D59C;
loc_8220D454:
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x8220d470
	goto loc_8220D470;
loc_8220D460:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8220d5fc
	if (!ctx.cr6.gt) goto loc_8220D5FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8220D470:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220d460
	if (!ctx.cr6.eq) goto loc_8220D460;
	// b 0x8220d5fc
	goto loc_8220D5FC;
loc_8220D47C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r9,r29,8
	ctx.r9.s64 = r29.s64 + 8;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220d4dc
	if (!ctx.cr6.eq) goto loc_8220D4DC;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220d4dc
	if (!ctx.cr6.eq) goto loc_8220D4DC;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220d4dc
	if (!ctx.cr6.eq) goto loc_8220D4DC;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8220d4dc
	if (!ctx.cr6.lt) goto loc_8220D4DC;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
loc_8220D4DC:
	// lbz r11,5(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220d518
	if (ctx.cr0.eq) goto loc_8220D518;
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x8220d508
	if (ctx.cr0.eq) goto loc_8220D508;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x8220d508
	if (!ctx.cr6.gt) goto loc_8220D508;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8220D508:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x824d43fc
	ctx.lr = 0x8220D518;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8220D518:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r28,5(r31)
	REX_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x8220d628
	if (ctx.cr6.gt) goto loc_8220D628;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r5,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// bne 0x8220d568
	if (!ctx.cr0.eq) goto loc_8220D568;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x8220d57c
	goto loc_8220D57C;
loc_8220D568:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r31.u32);
loc_8220D57C:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x8220d5d8
	if (!ctx.cr6.lt) goto loc_8220D5D8;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_8220D59C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220d5fc
	if (!ctx.cr6.eq) goto loc_8220D5FC;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x8220d5fc
	goto loc_8220D5FC;
loc_8220D5D8:
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// b 0x8220d5f4
	goto loc_8220D5F4;
loc_8220D5E4:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8220d5fc
	if (!ctx.cr6.gt) goto loc_8220D5FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8220D5F4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220d5e4
	if (!ctx.cr6.eq) goto loc_8220D5E4;
loc_8220D5FC:
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
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// b 0x8220d634
	goto loc_8220D634;
loc_8220D628:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8220cfb8
	ctx.lr = 0x8220D634;
	sub_8220CFB8(ctx, base);
loc_8220D634:
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220d658
	if (ctx.cr0.eq) goto loc_8220D658;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// ble cr6,0x8220d658
	if (!ctx.cr6.gt) goto loc_8220D658;
	// add r11,r24,r27
	ctx.r11.u64 = r24.u64 + r27.u64;
	// subf r5,r24,r23
	ctx.r5.u64 = r23.u64 - r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822d5870
	ctx.lr = 0x8220D658;
	sub_822D5870(ctx, base);
loc_8220D658:
	// lbz r11,5(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 28) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	REX_STORE_U8(r27.u32 + 5, ctx.r11.u8);
loc_8220D668:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82226020) {
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
	ctx.lr = 0x82226028;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r29,r6,-29872
	r29.s64 = ctx.r6.s64 + -29872;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x82226080;
	sub_822D4FA0(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// li r8,9
	ctx.r8.s64 = 9;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x822260B4;
	sub_822D4FA0(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,8448
	ctx.r8.u64 = ctx.r8.u64 | 8448;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,8851
	ctx.r5.s64 = 8851;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r30,0
	r30.s64 = 0;
	// ori r3,r3,8708
	ctx.r3.u64 = ctx.r3.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r22,8
	r22.s64 = 524288;
	// lis r29,1
	r29.s64 = 65536;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r28,768
	r28.s64 = 768;
	// li r27,8978
	r27.s64 = 8978;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// li r26,8205
	r26.s64 = 8205;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// li r25,8704
	r25.s64 = 8704;
	// li r24,0
	r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r23,8832
	r23.s64 = 8832;
	// li r21,8962
	r21.s64 = 8962;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// li r6,8712
	ctx.r6.s64 = 8712;
	// ori r22,r22,8
	r22.u64 = r22.u64 | 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// li r4,8452
	ctx.r4.s64 = 8452;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r20,2
	r20.s64 = 131072;
	// li r19,0
	r19.s64 = 0;
	// ori r20,r20,8320
	r20.u64 = r20.u64 | 8320;
	// li r18,0
	r18.s64 = 0;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// lis r17,16
	r17.s64 = 1048576;
	// ori r29,r17,16
	r29.u64 = r17.u64 | 16;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_8222E110) {
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
	// addi r3,r3,11512
	ctx.r3.s64 = ctx.r3.s64 + 11512;
	// bl 0x8222dc68
	ctx.lr = 0x8222E12C;
	sub_8222DC68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222e13c
	if (ctx.cr0.eq) goto loc_8222E13C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222e018
	ctx.lr = 0x8222E13C;
	sub_8222E018(ctx, base);
loc_8222E13C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24460
	ctx.r3.s64 = r31.s64 + 24460;
	// bl 0x824d445c
	ctx.lr = 0x8222E14C;
	__imp__KeSetEvent(ctx, base);
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

DEFINE_REX_FUNC(sub_8222EBD8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-6152
	r31.s64 = ctx.r11.s64 + -6152;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6450
	ctx.lr = 0x8222EC00;
	sub_822D6450(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,262(r31)
	REX_STORE_U8(r31.u32 + 262, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82230B58) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82230bc0
	if (!ctx.cr6.eq) goto loc_82230BC0;
	// lhz r11,10376(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82230c18
	if (!ctx.cr0.eq) goto loc_82230C18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-17372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-17376(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82230c10
	goto loc_82230C10;
loc_82230BC0:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,1,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7E;
	// addi r10,r10,27512
	ctx.r10.s64 = ctx.r10.s64 + 27512;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82230c18
	if (!ctx.cr0.eq) goto loc_82230C18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-17376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,-17372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82230C10:
	// or r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 | r31.u64;
	// b 0x82230c24
	goto loc_82230C24;
loc_82230C18:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82230af0
	ctx.lr = 0x82230C20;
	sub_82230AF0(ctx, base);
	// rlwinm r11,r3,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FF;
loc_82230C24:
	// lbz r10,10562(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 10562);
	// lwz r9,10560(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 10560);
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// stw r3,10796(r30)
	REX_STORE_U32(r30.u32 + 10796, ctx.r3.u32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r9,6,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x800;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10792(r30)
	REX_STORE_U32(r30.u32 + 10792, ctx.r11.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// std r11,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82236570) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82236594
	if (!ctx.cr6.lt) goto loc_82236594;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_82236594:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236A18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,-5780(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -5780);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82236a3c
	if (ctx.cr6.eq) goto loc_82236A3C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82236A3C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236E80) {
	REX_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82236ea0
	if (!ctx.cr6.eq) goto loc_82236EA0;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-23804
	ctx.r11.s64 = ctx.r11.s64 + -23804;
	// b 0x82236ea8
	goto loc_82236EA8;
loc_82236EA0:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
loc_82236EA8:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822379C8) {
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
	ctx.lr = 0x822379D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// bl 0x823cd118
	ctx.lr = 0x822379FC;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82237a84
	if (ctx.cr0.eq) goto loc_82237A84;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r11,r11,-23892
	ctx.r11.s64 = ctx.r11.s64 + -23892;
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bne cr6,0x82237a5c
	if (!ctx.cr6.eq) goto loc_82237A5C;
	// lwz r4,72(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82237a64
	if (ctx.cr6.eq) goto loc_82237A64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82237a64
	goto loc_82237A64;
loc_82237A5C:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r11.u8);
loc_82237A64:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823cd118
	ctx.lr = 0x82237A78;
	sub_823CD118(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82237a98
	if (!ctx.cr0.eq) goto loc_82237A98;
loc_82237A84:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// bl 0x822375e0
	ctx.lr = 0x82237A94;
	sub_822375E0(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82237A98:
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8223A368) {
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
	ctx.lr = 0x8223A370;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r25,0
	r25.s64 = 0;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8223a400
	if (ctx.cr6.eq) goto loc_8223A400;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r3,36
	r31.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	r27.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_8223A39C:
	// lwz r29,-20(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r27,r30
	REX_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8223a3e4
	if (ctx.cr6.eq) goto loc_8223A3E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A3DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// b 0x8223a3e8
	goto loc_8223A3E8;
loc_8223A3E4:
	// stw r25,0(r30)
	REX_STORE_U32(r30.u32 + 0, r25.u32);
loc_8223A3E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223a39c
	if (ctx.cr6.lt) goto loc_8223A39C;
loc_8223A400:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8223C6C8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// bl 0x8242bb10
	ctx.lr = 0x8223C6EC;
	sub_8242BB10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-6576
	ctx.r11.s64 = ctx.r11.s64 + -6576;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823cd980
	ctx.lr = 0x8223C710;
	sub_823CD980(ctx, base);
	// addi r3,r31,2100
	ctx.r3.s64 = r31.s64 + 2100;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823cd980
	ctx.lr = 0x8223C720;
	sub_823CD980(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,2120(r31)
	REX_STORE_U32(r31.u32 + 2120, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,2124(r31)
	REX_STORE_U32(r31.u32 + 2124, r30.u32);
	// stw r30,2128(r31)
	REX_STORE_U32(r31.u32 + 2128, r30.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2116, temp.u32);
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

DEFINE_REX_FUNC(sub_82240538) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x822415c8
	ctx.lr = 0x8224054C;
	sub_822415C8(ctx, base);
	// bl 0x82241340
	ctx.lr = 0x82240550;
	sub_82241340(ctx, base);
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

DEFINE_REX_FUNC(sub_82241C40) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x82241C48;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-10880
	ctx.r9.s64 = ctx.r11.s64 + -10880;
	// lis r7,-32161
	ctx.r7.s64 = -2107703296;
	// lis r3,-32161
	ctx.r3.s64 = -2107703296;
	// addi r11,r8,-10944
	ctx.r11.s64 = ctx.r8.s64 + -10944;
	// lis r29,-32172
	r29.s64 = -2108424192;
	// lis r30,-32172
	r30.s64 = -2108424192;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// lis r31,-32172
	r31.s64 = -2108424192;
	// addi r3,r3,-12896
	ctx.r3.s64 = ctx.r3.s64 + -12896;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r7,r7,-12864
	ctx.r7.s64 = ctx.r7.s64 + -12864;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,-10848
	r29.s64 = r29.s64 + -10848;
	// addi r26,r30,-13596
	r26.s64 = r30.s64 + -13596;
	// addi r8,r8,-10976
	ctx.r8.s64 = ctx.r8.s64 + -10976;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,-13940
	r31.s64 = r31.s64 + -13940;
	// extsh r30,r9
	r30.s64 = ctx.r9.s16;
	// lfsx f13,r4,r7
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lwzx r26,r10,r26
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r25,r10,r8
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lwzx r27,r10,r31
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// li r29,32
	r29.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82241f30
	if (!ctx.cr6.gt) goto loc_82241F30;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
loc_82241CDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x82241e48
	if (ctx.cr6.lt) goto loc_82241E48;
	// addi r31,r25,-3
	r31.s64 = r25.s64 + -3;
loc_82241CF8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r10,-76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82241d40
	if (ctx.cr6.eq) goto loc_82241D40;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82241d2c
	if (!ctx.cr6.gt) goto loc_82241D2C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82241D2C:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82241d3c
	if (ctx.cr6.gt) goto loc_82241D3C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82241d40
	if (!ctx.cr6.lt) goto loc_82241D40;
loc_82241D3C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82241D40:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82241d90
	if (ctx.cr6.eq) goto loc_82241D90;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82241d7c
	if (!ctx.cr6.gt) goto loc_82241D7C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82241D7C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82241d8c
	if (ctx.cr6.gt) goto loc_82241D8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82241d90
	if (!ctx.cr6.lt) goto loc_82241D90;
loc_82241D8C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82241D90:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82241de0
	if (ctx.cr6.eq) goto loc_82241DE0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82241dcc
	if (!ctx.cr6.gt) goto loc_82241DCC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82241DCC:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82241ddc
	if (ctx.cr6.gt) goto loc_82241DDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82241de0
	if (!ctx.cr6.lt) goto loc_82241DE0;
loc_82241DDC:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82241DE0:
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82241e30
	if (ctx.cr6.eq) goto loc_82241E30;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82241e1c
	if (!ctx.cr6.gt) goto loc_82241E1C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82241E1C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82241e2c
	if (ctx.cr6.gt) goto loc_82241E2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82241e30
	if (!ctx.cr6.lt) goto loc_82241E30;
loc_82241E2C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82241E30:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// blt cr6,0x82241cf8
	if (ctx.cr6.lt) goto loc_82241CF8;
loc_82241E48:
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r25.s32, ctx.xer);
	// bge cr6,0x82241eb0
	if (!ctx.cr6.lt) goto loc_82241EB0;
	// subf r10,r7,r25
	ctx.r10.u64 = r25.u64 - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82241E58:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r10,-76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82241ea0
	if (ctx.cr6.eq) goto loc_82241EA0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82241e8c
	if (!ctx.cr6.gt) goto loc_82241E8C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82241E8C:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82241e9c
	if (ctx.cr6.gt) goto loc_82241E9C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82241ea0
	if (!ctx.cr6.lt) goto loc_82241EA0;
loc_82241E9C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82241EA0:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82241e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241E58;
loc_82241EB0:
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r7,r11,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,4,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// sraw r7,r10,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// subf. r11,r10,r29
	ctx.r11.u64 = r29.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sraw r10,r7,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// slw r10,r7,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt 0x82241f0c
	if (ctx.cr0.lt) goto loc_82241F0C;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x82241f28
	goto loc_82241F28;
loc_82241F0C:
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + r28.u64;
	// subfic r29,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	r29.u64 = static_cast<uint64_t>(32) - ctx.r8.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// slw r28,r10,r29
	r28.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
loc_82241F28:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x82241cdc
	if (!ctx.cr0.eq) goto loc_82241CDC;
loc_82241F30:
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8224E0E8) {
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
	// beq cr6,0x8224e104
	if (ctx.cr6.eq) goto loc_8224E104;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8224b138
	ctx.lr = 0x8224E104;
	sub_8224B138(ctx, base);
loc_8224E104:
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

DEFINE_REX_FUNC(sub_8224E890) {
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
	// bl 0x822578a8
	ctx.lr = 0x8224E8B8;
	sub_822578A8(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822469c0
	ctx.lr = 0x8224E8C8;
	sub_822469C0(ctx, base);
	// bl 0x8224da00
	ctx.lr = 0x8224E8CC;
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

DEFINE_REX_FUNC(sub_822511B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822511C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8224da00
	ctx.lr = 0x822511D8;
	sub_8224DA00(ctx, base);
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822512cc
	if (ctx.cr6.eq) goto loc_822512CC;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r29,r11,23872
	r29.s64 = ctx.r11.s64 + 23872;
loc_822511EC:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82251248
	if (ctx.cr6.eq) goto loc_82251248;
	// lwz r10,544(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 544);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82251248
	if (!ctx.cr6.lt) goto loc_82251248;
	// rlwinm r8,r11,25,7,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r8,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82251248
	if (!ctx.cr6.eq) goto loc_82251248;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82251248
	if (!ctx.cr6.eq) goto loc_82251248;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82251248:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82251250:
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
	// bne 0x82251250
	if (!ctx.cr0.eq) goto loc_82251250;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,32(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822511b8
	ctx.lr = 0x8225127C;
	sub_822511B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82251284:
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
	// bne 0x82251284
	if (!ctx.cr0.eq) goto loc_82251284;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822512c4
	if (ctx.cr0.eq) goto loc_822512C4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822512c4
	if (!ctx.cr6.eq) goto loc_822512C4;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8224d778
	ctx.lr = 0x822512C4;
	sub_8224D778(ctx, base);
loc_822512C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822511ec
	if (!ctx.cr6.eq) goto loc_822511EC;
loc_822512CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82256020) {
	REX_FUNC_PROLOGUE();
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x822596e0
	sub_822596E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82256228) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// lwz r4,23556(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 23556);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82255c88
	ctx.lr = 0x82256254;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256270
	if (!ctx.cr0.eq) goto loc_82256270;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822d7b58
	ctx.lr = 0x82256264;
	sub_822D7B58(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822562a4
	goto loc_822562A4;
loc_82256270:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x8225caf0
	ctx.lr = 0x82256298;
	sub_8225CAF0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822d7b58
	ctx.lr = 0x822562A0;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822562A4:
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

DEFINE_REX_FUNC(sub_82257378) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822573a8
	if (!ctx.cr6.eq) goto loc_822573A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822573dc
	goto loc_822573DC;
loc_822573A8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r4,23544(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x822573BC;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822573d0
	if (!ctx.cr0.eq) goto loc_822573D0;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822573dc
	goto loc_822573DC;
loc_822573D0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8225c550
	ctx.lr = 0x822573DC;
	sub_8225C550(ctx, base);
loc_822573DC:
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

DEFINE_REX_FUNC(sub_82259B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82259B68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_82259B78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82259c20
	goto loc_82259C20;
loc_82259B80:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82259b98
	if (ctx.cr6.eq) goto loc_82259B98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257bf8
	ctx.lr = 0x82259B90;
	sub_82257BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259c1c
	if (ctx.cr0.eq) goto loc_82259C1C;
loc_82259B98:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82259bb0
	if (ctx.cr6.eq) goto loc_82259BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ee88
	ctx.lr = 0x82259BA8;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259c1c
	if (ctx.cr0.eq) goto loc_82259C1C;
loc_82259BB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257c40
	ctx.lr = 0x82259BBC;
	sub_82257C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259c1c
	if (!ctx.cr0.eq) goto loc_82259C1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259BCC;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82247078
	ctx.lr = 0x82259BE0;
	sub_82247078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259BE8;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224da00
	ctx.lr = 0x82259BF0;
	sub_8224DA00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259c08
	if (ctx.cr6.eq) goto loc_82259C08;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259c54
	if (ctx.cr6.eq) goto loc_82259C54;
loc_82259C08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259C10;
	sub_822469C0(ctx, base);
	// bl 0x82259908
	ctx.lr = 0x82259C14;
	sub_82259908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259c5c
	if (!ctx.cr0.eq) goto loc_82259C5C;
loc_82259C1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82259C20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82256a80
	ctx.lr = 0x82259C28;
	sub_82256A80(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82259b80
	if (!ctx.cr6.eq) goto loc_82259B80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82256918
	ctx.lr = 0x82259C40;
	sub_82256918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259c68
	if (ctx.cr6.eq) goto loc_82259C68;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x82259b78
	goto loc_82259B78;
loc_82259C54:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82259c78
	goto loc_82259C78;
loc_82259C5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259C64;
	sub_822469C0(ctx, base);
	// b 0x82259c78
	goto loc_82259C78;
loc_82259C68:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82259970
	ctx.lr = 0x82259C78;
	sub_82259970(ctx, base);
loc_82259C78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225DC50) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DC6C;
	sub_8225DA70(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225E240) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,2007
	ctx.r4.s64 = 2007;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E25C;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E268;
	sub_8227C2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225EC20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e318
	ctx.lr = 0x8225EC44;
	sub_8225E318(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EC50;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225ec60
	if (!ctx.cr0.lt) goto loc_8225EC60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225ec70
	goto loc_8225EC70;
loc_8225EC60:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8225EC70:
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

DEFINE_REX_FUNC(sub_82260E08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82256918
	ctx.lr = 0x82260E34;
	sub_82256918(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82260e48
	if (!ctx.cr6.eq) goto loc_82260E48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260e74
	goto loc_82260E74;
loc_82260E48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82260E50;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8225df48
	ctx.lr = 0x82260E68;
	sub_8225DF48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8224db90
	ctx.lr = 0x82260E74;
	sub_8224DB90(ctx, base);
loc_82260E74:
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

DEFINE_REX_FUNC(sub_82264EB0) {
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
	ctx.lr = 0x82264EB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82265024
	if (ctx.cr6.eq) goto loc_82265024;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82264ee0
	if (ctx.cr6.eq) goto loc_82264EE0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// b 0x82264eec
	goto loc_82264EEC;
loc_82264EE0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82258590
	ctx.lr = 0x82264EE8;
	sub_82258590(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82264EEC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x82264EF4;
	sub_8225EE88(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82257270
	ctx.lr = 0x82264F04;
	sub_82257270(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82264fb4
	if (ctx.cr6.eq) goto loc_82264FB4;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8225d180
	ctx.lr = 0x82264F34;
	sub_8225D180(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82264fb4
	if (ctx.cr6.lt) goto loc_82264FB4;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82264fb4
	if (ctx.cr6.lt) goto loc_82264FB4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82264f9c
	if (ctx.cr6.eq) goto loc_82264F9C;
	// ble cr6,0x82264f68
	if (!ctx.cr6.gt) goto loc_82264F68;
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82264f9c
	if (ctx.cr0.lt) goto loc_82264F9C;
loc_82264F68:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r8,r9,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r9.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r5
	ctx.r10.u64 = uint32_t((ctx.r5.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r10.s32 / ctx.r5.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_82264F9C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82257318
	ctx.lr = 0x82264FB4;
	sub_82257318(ctx, base);
loc_82264FB4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82265024
	if (ctx.cr6.eq) goto loc_82265024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,512
	ctx.r4.s64 = ctx.r11.s64 + 512;
	// bl 0x82256ea0
	ctx.lr = 0x82264FD0;
	sub_82256EA0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82265024
	if (ctx.cr6.eq) goto loc_82265024;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8225d180
	ctx.lr = 0x82264FF8;
	sub_8225D180(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82265024
	if (ctx.cr6.lt) goto loc_82265024;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82265024
	if (ctx.cr6.lt) goto loc_82265024;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82257318
	ctx.lr = 0x82265024;
	sub_82257318(ctx, base);
loc_82265024:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8226C9B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226C9C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226ca28
	if (!ctx.cr6.eq) goto loc_8226CA28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226c9ec
	if (!ctx.cr6.eq) goto loc_8226C9EC;
	// li r30,1
	r30.s64 = 1;
	// b 0x8226ca04
	goto loc_8226CA04;
loc_8226C9EC:
	// rlwinm. r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8226ca18
	if (!ctx.cr0.gt) goto loc_8226CA18;
	// lis r11,195
	ctx.r11.s64 = 12779520;
	// ori r11,r11,3120
	ctx.r11.u64 = ctx.r11.u64 | 3120;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226ca18
	if (!ctx.cr6.lt) goto loc_8226CA18;
loc_8226CA04:
	// mulli r4,r30,168
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(168));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x8226CA10;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226ca20
	if (!ctx.cr0.eq) goto loc_8226CA20;
loc_8226CA18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226ca58
	goto loc_8226CA58;
loc_8226CA20:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8226CA28:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,168
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(168));
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226ca48
	if (ctx.cr0.eq) goto loc_8226CA48;
	// li r5,168
	ctx.r5.s64 = 168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8226CA48;
	sub_822D4FA0(ctx, base);
loc_8226CA48:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8226CA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226EF40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226EF48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b70
	ctx.lr = 0x8226EF5C;
	sub_82255B70(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// beq cr6,0x8226ef9c
	if (ctx.cr6.eq) goto loc_8226EF9C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82255b48
	ctx.lr = 0x8226EF74;
	sub_82255B48(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226ef8c
	if (!ctx.cr0.eq) goto loc_8226EF8C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226efa4
	goto loc_8226EFA4;
loc_8226EF8C:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// sth r29,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r29.u16);
loc_8226EF9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226EFA4;
	sub_8226B6F8(ctx, base);
loc_8226EFA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822708C0) {
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
	ctx.lr = 0x822708C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82270940
	if (ctx.cr6.eq) goto loc_82270940;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82270928
	if (ctx.cr6.eq) goto loc_82270928;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82270910
	if (ctx.cr6.eq) goto loc_82270910;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82270ac0
	if (!ctx.cr6.eq) goto loc_82270AC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r11,-3560
	r28.s64 = ctx.r11.s64 + -3560;
	// addi r29,r10,1136
	r29.s64 = ctx.r10.s64 + 1136;
	// b 0x82270950
	goto loc_82270950;
loc_82270910:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r30,72(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r11,-3584
	r28.s64 = ctx.r11.s64 + -3584;
	// addi r29,r10,1104
	r29.s64 = ctx.r10.s64 + 1104;
	// b 0x82270954
	goto loc_82270954;
loc_82270928:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r30,72(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r11,-3516
	r28.s64 = ctx.r11.s64 + -3516;
	// addi r29,r10,1076
	r29.s64 = ctx.r10.s64 + 1076;
	// b 0x82270954
	goto loc_82270954;
loc_82270940:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r11,-3532
	r28.s64 = ctx.r11.s64 + -3532;
	// addi r29,r10,1052
	r29.s64 = ctx.r10.s64 + 1052;
loc_82270950:
	// lwz r30,76(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 76);
loc_82270954:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82270a60
	if (ctx.cr6.eq) goto loc_82270A60;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x822d6a10
	ctx.lr = 0x8227098C;
	sub_822D6A10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8226cb10
	ctx.lr = 0x8227099C;
	sub_8226CB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822709c0
	if (!ctx.cr0.eq) goto loc_822709C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822709A8:
	// bl 0x82255b70
	ctx.lr = 0x822709AC;
	sub_82255B70(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82255b70
	ctx.lr = 0x822709B4;
	sub_82255B70(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82270ac4
	goto loc_82270AC4;
loc_822709C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r27,r11,-4480
	r27.s64 = ctx.r11.s64 + -4480;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822703f8
	ctx.lr = 0x822709D8;
	sub_822703F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6a10
	ctx.lr = 0x822709E0;
	sub_822D6A10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8226cb10
	ctx.lr = 0x822709F0;
	sub_8226CB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82270a00
	if (!ctx.cr0.eq) goto loc_82270A00;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x822709a8
	goto loc_822709A8;
loc_82270A00:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822703f8
	ctx.lr = 0x82270A10;
	sub_822703F8(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82257378
	ctx.lr = 0x82270A24;
	sub_82257378(ctx, base);
	// lwz r27,104(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82257378
	ctx.lr = 0x82270A38;
	sub_82257378(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82255b70
	ctx.lr = 0x82270A40;
	sub_82255B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82270A48;
	sub_82255B70(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82270a60
	if (ctx.cr6.lt) goto loc_82270A60;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82270a88
	if (!ctx.cr6.lt) goto loc_82270A88;
loc_82270A60:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82257378
	ctx.lr = 0x82270A70;
	sub_82257378(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257378
	ctx.lr = 0x82270A80;
	sub_82257378(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82270A88:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82270acc
	if (ctx.cr6.lt) goto loc_82270ACC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82270acc
	if (ctx.cr6.lt) goto loc_82270ACC;
	// li r30,1
	r30.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257318
	ctx.lr = 0x82270AB4;
	sub_82257318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82270ac4
	if (ctx.cr0.lt) goto loc_82270AC4;
	// stw r30,4(r25)
	REX_STORE_U32(r25.u32 + 4, r30.u32);
loc_82270AC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82270AC4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
loc_82270ACC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82257318
	ctx.lr = 0x82270AE8;
	sub_82257318(ctx, base);
	// b 0x82270ac4
	goto loc_82270AC4;
}

DEFINE_REX_FUNC(sub_82279FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227A000;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227a058
	if (ctx.cr6.eq) goto loc_8227A058;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227a04c
	if (!ctx.cr6.gt) goto loc_8227A04C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8227A02C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8227cf00
	ctx.lr = 0x8227A038;
	sub_8227CF00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227a02c
	if (ctx.cr6.lt) goto loc_8227A02C;
loc_8227A04C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x8227A054;
	sub_82255B70(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_8227A058:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227B688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_8227B68C:
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
	// bne 0x8227b68c
	if (!ctx.cr0.eq) goto loc_8227B68C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227C3F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227C3F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227c444
	if (!ctx.cr6.eq) goto loc_8227C444;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82257038
	ctx.lr = 0x8227C424;
	sub_82257038(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227c4ac
	if (ctx.cr6.eq) goto loc_8227C4AC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwimi r4,r30,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227bfa0
	ctx.lr = 0x8227C440;
	sub_8227BFA0(ctx, base);
	// b 0x8227c454
	goto loc_8227C454;
loc_8227C444:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227c028
	ctx.lr = 0x8227C454;
	sub_8227C028(ctx, base);
loc_8227C454:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227c4ac
	if (ctx.cr6.eq) goto loc_8227C4AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227acf8
	ctx.lr = 0x8227C468;
	sub_8227ACF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x8224a348
	ctx.lr = 0x8227C478;
	sub_8224A348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8227c494
	if (!ctx.cr0.lt) goto loc_8227C494;
loc_8227C480:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227b2c8
	ctx.lr = 0x8227C48C;
	sub_8227B2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8227c4b0
	goto loc_8227C4B0;
loc_8227C494:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8224a1a8
	ctx.lr = 0x8227C4A8;
	sub_8224A1A8(ctx, base);
	// b 0x8227c480
	goto loc_8227C480;
loc_8227C4AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227C4B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227E628) {
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
	ctx.lr = 0x8227E630;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8227e660
	if (ctx.cr0.eq) goto loc_8227E660;
loc_8227E650:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr. r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227e650
	if (!ctx.cr0.eq) goto loc_8227E650;
loc_8227E660:
	// rlwinm r30,r11,2,25,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// li r29,0
	r29.s64 = 0;
	// lwzx r31,r30,r27
	r31.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// b 0x8227e68c
	goto loc_8227E68C;
loc_8227E670:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822d7938
	ctx.lr = 0x8227E67C;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227e698
	if (ctx.cr0.eq) goto loc_8227E698;
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8227E68C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227e670
	if (!ctx.cr6.eq) goto loc_8227E670;
	// b 0x8227e6c0
	goto loc_8227E6C0;
loc_8227E698:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8227e6ac
	if (!ctx.cr6.eq) goto loc_8227E6AC;
	// stwx r11,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, ctx.r11.u32);
	// b 0x8227e6b0
	goto loc_8227E6B0;
loc_8227E6AC:
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
loc_8227E6B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e3f8
	ctx.lr = 0x8227E6B8;
	sub_8227E3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227E6C0;
	sub_82255B70(ctx, base);
loc_8227E6C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8227FDF8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x8227FE18;
	sub_82255B70(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227FE28;
	sub_82255B70(ctx, base);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
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

DEFINE_REX_FUNC(sub_82280E38) {
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
	ctx.lr = 0x82280E40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r31,r4,16
	r31.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// beq cr6,0x82280e64
	if (ctx.cr6.eq) goto loc_82280E64;
	// cmplwi cr6,r31,12288
	ctx.cr6.compare<uint32_t>(r31.u32, 12288, ctx.xer);
	// bne cr6,0x82280e78
	if (!ctx.cr6.eq) goto loc_82280E78;
loc_82280E64:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82280ff0
	if (ctx.cr6.eq) goto loc_82280FF0;
	// cmplwi cr6,r11,12288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// beq cr6,0x82280ff0
	if (ctx.cr6.eq) goto loc_82280FF0;
loc_82280E78:
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,44
	ctx.cr6.compare<uint32_t>(r30.u32, 44, ctx.xer);
	// beq cr6,0x82280eac
	if (ctx.cr6.eq) goto loc_82280EAC;
	// cmplwi cr6,r30,65292
	ctx.cr6.compare<uint32_t>(r30.u32, 65292, ctx.xer);
	// beq cr6,0x82280eac
	if (ctx.cr6.eq) goto loc_82280EAC;
	// cmplwi cr6,r30,46
	ctx.cr6.compare<uint32_t>(r30.u32, 46, ctx.xer);
	// beq cr6,0x82280eac
	if (ctx.cr6.eq) goto loc_82280EAC;
	// cmplwi cr6,r30,65294
	ctx.cr6.compare<uint32_t>(r30.u32, 65294, ctx.xer);
	// beq cr6,0x82280eac
	if (ctx.cr6.eq) goto loc_82280EAC;
	// cmplwi cr6,r30,58
	ctx.cr6.compare<uint32_t>(r30.u32, 58, ctx.xer);
	// beq cr6,0x82280eac
	if (ctx.cr6.eq) goto loc_82280EAC;
	// cmplwi cr6,r30,65306
	ctx.cr6.compare<uint32_t>(r30.u32, 65306, ctx.xer);
	// bne cr6,0x82280ed4
	if (!ctx.cr6.eq) goto loc_82280ED4;
loc_82280EAC:
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(r31.u32, 48, ctx.xer);
	// blt cr6,0x82280ebc
	if (ctx.cr6.lt) goto loc_82280EBC;
	// cmplwi cr6,r31,57
	ctx.cr6.compare<uint32_t>(r31.u32, 57, ctx.xer);
	// ble cr6,0x82280ecc
	if (!ctx.cr6.gt) goto loc_82280ECC;
loc_82280EBC:
	// cmplwi cr6,r31,65296
	ctx.cr6.compare<uint32_t>(r31.u32, 65296, ctx.xer);
	// blt cr6,0x82280ed4
	if (ctx.cr6.lt) goto loc_82280ED4;
	// cmplwi cr6,r31,65305
	ctx.cr6.compare<uint32_t>(r31.u32, 65305, ctx.xer);
	// bgt cr6,0x82280ed4
	if (ctx.cr6.gt) goto loc_82280ED4;
loc_82280ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82280ff4
	goto loc_82280FF4;
loc_82280ED4:
	// cmplwi cr6,r30,8217
	ctx.cr6.compare<uint32_t>(r30.u32, 8217, ctx.xer);
	// bne cr6,0x82280ee4
	if (!ctx.cr6.eq) goto loc_82280EE4;
	// cmplwi cr6,r31,12352
	ctx.cr6.compare<uint32_t>(r31.u32, 12352, ctx.xer);
	// bge cr6,0x82280ff0
	if (!ctx.cr6.lt) goto loc_82280FF0;
loc_82280EE4:
	// li r27,0
	r27.s64 = 0;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stb r27,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// stb r27,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// stb r27,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r27.u8);
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// bl 0x82280db8
	ctx.lr = 0x82280F04;
	sub_82280DB8(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82280ecc
	if (!ctx.cr0.eq) goto loc_82280ECC;
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82280db8
	ctx.lr = 0x82280F20;
	sub_82280DB8(ctx, base);
	// rlwinm. r11,r29,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280f30
	if (ctx.cr0.eq) goto loc_82280F30;
	// rlwinm. r11,r29,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82280f50
	if (!ctx.cr0.eq) goto loc_82280F50;
loc_82280F30:
	// rlwinm. r11,r29,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280f40
	if (ctx.cr0.eq) goto loc_82280F40;
	// rlwinm. r11,r29,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82280f50
	if (!ctx.cr0.eq) goto loc_82280F50;
loc_82280F40:
	// rlwinm. r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280fa0
	if (ctx.cr0.eq) goto loc_82280FA0;
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280fa0
	if (ctx.cr0.eq) goto loc_82280FA0;
loc_82280F50:
	// cmplwi cr6,r31,4352
	ctx.cr6.compare<uint32_t>(r31.u32, 4352, ctx.xer);
	// blt cr6,0x82280f60
	if (ctx.cr6.lt) goto loc_82280F60;
	// cmplwi cr6,r31,4607
	ctx.cr6.compare<uint32_t>(r31.u32, 4607, ctx.xer);
	// ble cr6,0x82280f80
	if (!ctx.cr6.gt) goto loc_82280F80;
loc_82280F60:
	// cmplwi cr6,r31,12592
	ctx.cr6.compare<uint32_t>(r31.u32, 12592, ctx.xer);
	// blt cr6,0x82280f70
	if (ctx.cr6.lt) goto loc_82280F70;
	// cmplwi cr6,r31,12687
	ctx.cr6.compare<uint32_t>(r31.u32, 12687, ctx.xer);
	// ble cr6,0x82280f80
	if (!ctx.cr6.gt) goto loc_82280F80;
loc_82280F70:
	// cmplwi cr6,r31,44032
	ctx.cr6.compare<uint32_t>(r31.u32, 44032, ctx.xer);
	// blt cr6,0x82280fa0
	if (ctx.cr6.lt) goto loc_82280FA0;
	// cmplwi cr6,r31,55203
	ctx.cr6.compare<uint32_t>(r31.u32, 55203, ctx.xer);
	// bgt cr6,0x82280fa0
	if (ctx.cr6.gt) goto loc_82280FA0;
loc_82280F80:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// beq cr6,0x82280f90
	if (ctx.cr6.eq) goto loc_82280F90;
	// cmplwi cr6,r30,12288
	ctx.cr6.compare<uint32_t>(r30.u32, 12288, ctx.xer);
	// bne cr6,0x82280fc8
	if (!ctx.cr6.eq) goto loc_82280FC8;
loc_82280F90:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82280ff4
	goto loc_82280FF4;
loc_82280FA0:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// beq cr6,0x82280f90
	if (ctx.cr6.eq) goto loc_82280F90;
	// cmplwi cr6,r30,12288
	ctx.cr6.compare<uint32_t>(r30.u32, 12288, ctx.xer);
	// beq cr6,0x82280f90
	if (ctx.cr6.eq) goto loc_82280F90;
	// cmplwi cr6,r30,12352
	ctx.cr6.compare<uint32_t>(r30.u32, 12352, ctx.xer);
	// blt cr6,0x82280fc0
	if (ctx.cr6.lt) goto loc_82280FC0;
	// cmplwi cr6,r30,61440
	ctx.cr6.compare<uint32_t>(r30.u32, 61440, ctx.xer);
	// blt cr6,0x82280f90
	if (ctx.cr6.lt) goto loc_82280F90;
loc_82280FC0:
	// cmplwi cr6,r30,65382
	ctx.cr6.compare<uint32_t>(r30.u32, 65382, ctx.xer);
	// bge cr6,0x82280f90
	if (!ctx.cr6.lt) goto loc_82280F90;
loc_82280FC8:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82280fe4
	if (ctx.cr0.eq) goto loc_82280FE4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82280fe8
	if (ctx.cr0.eq) goto loc_82280FE8;
loc_82280FE4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82280FE8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82280ff4
	goto loc_82280FF4;
loc_82280FF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82280FF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82288EE8) {
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
	// bne cr6,0x82288f08
	if (!ctx.cr6.eq) goto loc_82288F08;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82288f20
	goto loc_82288F20;
loc_82288F08:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288F20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289A88) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,8004
	ctx.r11.s64 = ctx.r11.s64 + 8004;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82288258
	ctx.lr = 0x82289AB4;
	sub_82288258(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,7232
	ctx.r11.s64 = ctx.r11.s64 + 7232;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82289ad0
	if (ctx.cr0.eq) goto loc_82289AD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82289AD0;
	sub_82255B70(ctx, base);
loc_82289AD0:
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

DEFINE_REX_FUNC(sub_8228B428) {
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
	ctx.lr = 0x8228B430;
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
	// beq cr6,0x8228b50c
	if (ctx.cr6.eq) goto loc_8228B50C;
	// addi r27,r3,100
	r27.s64 = ctx.r3.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228B450;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8228B46C:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8228b4dc
	goto loc_8228B4DC;
loc_8228B474:
	// lwz r3,96(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 96);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8228b4f8
	if (ctx.cr0.lt) goto loc_8228B4F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b4d8
	if (!ctx.cr6.eq) goto loc_8228B4D8;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8228B4D8:
	// lwz r30,60(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 60);
loc_8228B4DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8228b474
	if (!ctx.cr6.eq) goto loc_8228B474;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(r26.s32, 17, ctx.xer);
	// blt cr6,0x8228b46c
	if (ctx.cr6.lt) goto loc_8228B46C;
	// b 0x8228b504
	goto loc_8228B504;
loc_8228B4F8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8228B504:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228B50C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8228B50C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82290510) {
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
loc_82290544:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82290544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82290544;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,12772
	ctx.r11.s64 = ctx.r11.s64 + 12772;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822919A8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82294128
	sub_82294128(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82292098) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x822920B8;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822920e0
	if (ctx.cr0.eq) goto loc_822920E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82295468
	ctx.lr = 0x822920D4;
	sub_82295468(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822920e4
	goto loc_822920E4;
loc_822920E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822920E4:
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

DEFINE_REX_FUNC(sub_82293048) {
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
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
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
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82226380
	ctx.lr = 0x82293084;
	sub_82226380(ctx, base);
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

DEFINE_REX_FUNC(sub_82293EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82293EC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,20
	r29.s64 = ctx.r3.s64 + 20;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82295b18
	ctx.lr = 0x82293EE8;
	sub_82295B18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82293f70
	if (ctx.cr0.lt) goto loc_82293F70;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82293f64
	if (ctx.cr6.lt) goto loc_82293F64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82295d28
	ctx.lr = 0x82293F10;
	sub_82295D28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82293f68
	if (ctx.cr0.lt) goto loc_82293F68;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,30836
	ctx.r10.s64 = 2020868096;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// ori r10,r10,29798
	ctx.r10.u64 = ctx.r10.u64 | 29798;
	// rlwimi r11,r9,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,83(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r8,r11,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82293f54
	if (!ctx.cr6.eq) goto loc_82293F54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82293c88
	ctx.lr = 0x82293F50;
	sub_82293C88(ctx, base);
	// b 0x82293f80
	goto loc_82293F80;
loc_82293F54:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82293f78
	if (ctx.cr6.eq) goto loc_82293F78;
loc_82293F64:
	// li r31,-1
	r31.s64 = -1;
loc_82293F68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82295dd8
	ctx.lr = 0x82293F70;
	sub_82295DD8(ctx, base);
loc_82293F70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82293f80
	goto loc_82293F80;
loc_82293F78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822939e8
	ctx.lr = 0x82293F80;
	sub_822939E8(ctx, base);
loc_82293F80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822982B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822982dc
	if (!ctx.cr6.eq) goto loc_822982DC;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x822d4fa0
	sub_822D4FA0(ctx, base);
	return;
loc_822982DC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x8229832c
	if (ctx.cr6.gt) goto loc_8229832C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// srawi r8,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 12;
	// srawi r7,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 12;
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229830C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8229830c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229830C;
	// blr 
	return;
loc_8229832C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addic. r10,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82298394
	if (!ctx.cr6.lt) goto loc_82298394;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8229835C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8229835c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229835C;
	// blr 
	return;
loc_82298394:
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822983B0:
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r3,r4
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822983b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822983B0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F3D8) {
	REX_FUNC_PROLOGUE();
	// ld r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8229F3E0:
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8229f400
	if (!ctx.cr6.eq) goto loc_8229F400;
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// ld r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// cmpld cr6,r10,r7
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r7.u64, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8229f404
	if (ctx.cr6.eq) goto loc_8229F404;
loc_8229F400:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8229F404:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229f454
	if (!ctx.cr0.eq) goto loc_8229F454;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8229f420
	if (!ctx.cr6.eq) goto loc_8229F420;
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// ld r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
loc_8229F420:
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8229f42c
	if (ctx.cr6.lt) goto loc_8229F42C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8229F42C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229f440
	if (ctx.cr0.eq) goto loc_8229F440;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8229f444
	goto loc_8229F444;
loc_8229F440:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8229F444:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229f3e0
	if (!ctx.cr6.eq) goto loc_8229F3E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229F454:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A0858) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A0860;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r31.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822a0898
	if (ctx.cr0.eq) goto loc_822A0898;
	// li r30,0
	r30.s64 = 0;
loc_822A0880:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822b8d20
	ctx.lr = 0x822A088C;
	sub_822B8D20(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822a0880
	if (!ctx.cr0.eq) goto loc_822A0880;
loc_822A0898:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822A08AC;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A2298) {
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
	ctx.lr = 0x822A22A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	r28.s64 = 1;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stb r28,228(r3)
	REX_STORE_U8(ctx.r3.u32 + 228, r28.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,31456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31456);
	// bl 0x8229e7c8
	ctx.lr = 0x822A22BC;
	sub_8229E7C8(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a2324
	if (!ctx.cr6.eq) goto loc_822A2324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1688
	ctx.lr = 0x822A22D0;
	sub_822A1688(ctx, base);
	// addi r29,r31,188
	r29.s64 = r31.s64 + 188;
	// li r30,2
	r30.s64 = 2;
loc_822A22D8:
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822c80d0
	ctx.lr = 0x822A22E0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a22f0
	if (ctx.cr0.eq) goto loc_822A22F0;
	// bl 0x8229d5f8
	ctx.lr = 0x822A22EC;
	sub_8229D5F8(ctx, base);
	// b 0x822a22f4
	goto loc_822A22F4;
loc_822A22F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A22F4:
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,18
	ctx.r7.s64 = 18;
	// lwz r6,324(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A231C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822a22d8
	if (!ctx.cr0.eq) goto loc_822A22D8;
loc_822A2324:
	// lwz r4,220(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82211a30
	ctx.lr = 0x822A2330;
	sub_82211A30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,22808
	r29.s64 = ctx.r11.s64 + 22808;
loc_822A233C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a23b8
	if (ctx.cr6.eq) goto loc_822A23B8;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x822a2378
	if (!ctx.cr6.eq) goto loc_822A2378;
	// lbz r11,245(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 245);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a236c
	if (ctx.cr0.eq) goto loc_822A236C;
	// lwz r4,368(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 368);
	// b 0x822a2370
	goto loc_822A2370;
loc_822A236C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A2370:
	// bl 0x822101c0
	ctx.lr = 0x822A2374;
	sub_822101C0(ctx, base);
	// b 0x822a23b8
	goto loc_822A23B8;
loc_822A2378:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822a23b8
	if (ctx.cr6.eq) goto loc_822A23B8;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x822a23a0
	if (!ctx.cr6.eq) goto loc_822A23A0;
	// lbz r11,246(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 246);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822108e8
	ctx.lr = 0x822A239C;
	sub_822108E8(ctx, base);
	// b 0x822a23b8
	goto loc_822A23B8;
loc_822A23A0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lbz r4,244(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A23B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A23B8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,22
	ctx.cr6.compare<uint32_t>(r30.u32, 22, ctx.xer);
	// blt cr6,0x822a233c
	if (ctx.cr6.lt) goto loc_822A233C;
	// lbz r4,282(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 282);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82211780
	ctx.lr = 0x822A23D0;
	sub_82211780(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// stb r28,1541(r11)
	REX_STORE_U8(ctx.r11.u32 + 1541, r28.u8);
	// lbz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 248);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a2414
	if (ctx.cr0.eq) goto loc_822A2414;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82212488
	ctx.lr = 0x822A2414;
	sub_82212488(ctx, base);
loc_822A2414:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82212de0
	ctx.lr = 0x822A2458;
	sub_82212DE0(ctx, base);
	// lbz r11,245(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 245);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a2470
	if (ctx.cr0.eq) goto loc_822A2470;
	// lwz r4,368(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 368);
	// b 0x822a2474
	goto loc_822A2474;
loc_822A2470:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A2474:
	// bl 0x822101c0
	ctx.lr = 0x822A2478;
	sub_822101C0(ctx, base);
	// lbz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a248c
	if (ctx.cr0.eq) goto loc_822A248C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822A248C:
	// lbz r11,373(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 373);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a249c
	if (ctx.cr0.eq) goto loc_822A249C;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
loc_822A249C:
	// lbz r11,374(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 374);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a24ac
	if (ctx.cr0.eq) goto loc_822A24AC;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_822A24AC:
	// lbz r11,375(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 375);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a24bc
	if (ctx.cr0.eq) goto loc_822A24BC;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_822A24BC:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210e88
	ctx.lr = 0x822A24C4;
	sub_82210E88(ctx, base);
	// lbz r4,376(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 376);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210928
	ctx.lr = 0x822A24D0;
	sub_82210928(ctx, base);
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 380);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210be8
	ctx.lr = 0x822A24DC;
	sub_82210BE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822105e8
	ctx.lr = 0x822A24E8;
	sub_822105E8(ctx, base);
	// lwz r4,392(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210378
	ctx.lr = 0x822A24F4;
	sub_82210378(ctx, base);
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 396);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210408
	ctx.lr = 0x822A2500;
	sub_82210408(ctx, base);
	// lwz r4,400(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210508
	ctx.lr = 0x822A250C;
	sub_82210508(ctx, base);
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 404);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210578
	ctx.lr = 0x822A2518;
	sub_82210578(ctx, base);
	// lwz r4,384(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822102e8
	ctx.lr = 0x822A2524;
	sub_822102E8(ctx, base);
	// lwz r4,388(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210498
	ctx.lr = 0x822A2530;
	sub_82210498(ctx, base);
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822106e0
	ctx.lr = 0x822A253C;
	sub_822106E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r4,87(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// bl 0x82210680
	ctx.lr = 0x822A2560;
	sub_82210680(ctx, base);
	// lwz r4,416(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 416);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210958
	ctx.lr = 0x822A256C;
	sub_82210958(ctx, base);
	// lwz r4,420(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210a08
	ctx.lr = 0x822A2578;
	sub_82210A08(ctx, base);
	// lwz r4,424(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210ba8
	ctx.lr = 0x822A2584;
	sub_82210BA8(ctx, base);
	// lwz r4,428(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 428);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210bc8
	ctx.lr = 0x822A2590;
	sub_82210BC8(ctx, base);
	// lwz r4,432(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210a38
	ctx.lr = 0x822A259C;
	sub_82210A38(ctx, base);
	// lwz r4,436(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210a70
	ctx.lr = 0x822A25A8;
	sub_82210A70(ctx, base);
	// lwz r4,440(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210aa8
	ctx.lr = 0x822A25B4;
	sub_82210AA8(ctx, base);
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822101f0
	ctx.lr = 0x822A25C0;
	sub_822101F0(ctx, base);
	// lwz r4,444(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822117b0
	ctx.lr = 0x822A25CC;
	sub_822117B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82211748
	ctx.lr = 0x822A25D8;
	sub_82211748(ctx, base);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lfs f4,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ca298
	ctx.lr = 0x822A25F0;
	sub_822CA298(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B1188) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b11ac
	if (ctx.cr6.eq) goto loc_822B11AC;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x822b11b0
	goto loc_822B11B0;
loc_822B11AC:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_822B11B0:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b11d4
	if (ctx.cr6.eq) goto loc_822B11D4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822b11d8
	goto loc_822B11D8;
loc_822B11D4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B11D8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B37B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b37d4
	if (ctx.cr6.lt) goto loc_822B37D4;
	// lfs f13,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b37dc
	if (!ctx.cr6.gt) goto loc_822B37DC;
loc_822B37D4:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x822b37e0
	goto loc_822B37E0;
loc_822B37DC:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_822B37E0:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b37fc
	if (ctx.cr6.lt) goto loc_822B37FC;
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822b3804
	if (!ctx.cr6.gt) goto loc_822B3804;
loc_822B37FC:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x822b3808
	goto loc_822B3808;
loc_822B3804:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_822B3808:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822b3828
	if (ctx.cr6.lt) goto loc_822B3828;
	// lfs f0,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822b3828
	if (ctx.cr6.gt) goto loc_822B3828;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822B3828:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B7690) {
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
	ctx.lr = 0x822B7698;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r30,452(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 452);
	// bl 0x822a99c0
	ctx.lr = 0x822B76BC;
	sub_822A99C0(ctx, base);
	// add r28,r3,r31
	r28.u64 = ctx.r3.u64 + r31.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r24,193(r28)
	REX_STORE_U8(r28.u32 + 193, r24.u8);
	// lbz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822b76e0
	if (!ctx.cr0.eq) goto loc_822B76E0;
loc_822B76D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b784c
	goto loc_822B784C;
loc_822B76E0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x822b7704
	if (ctx.cr6.lt) goto loc_822B7704;
	// beq cr6,0x822b76fc
	if (ctx.cr6.eq) goto loc_822B76FC;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x822b7710
	if (!ctx.cr6.lt) goto loc_822B7710;
	// lbz r11,149(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 149);
	// b 0x822b7708
	goto loc_822B7708;
loc_822B76FC:
	// lbz r11,147(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 147);
	// b 0x822b7708
	goto loc_822B7708;
loc_822B7704:
	// lbz r11,166(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 166);
loc_822B7708:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b76d8
	if (ctx.cr0.eq) goto loc_822B76D8;
loc_822B7710:
	// addi r30,r31,188
	r30.s64 = r31.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822aa9e0
	ctx.lr = 0x822B7728;
	sub_822AA9E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r3,193(r28)
	REX_STORE_U8(r28.u32 + 193, ctx.r3.u8);
	// beq 0x822b76d8
	if (ctx.cr0.eq) goto loc_822B76D8;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r31
	r25.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b6e80
	ctx.lr = 0x822B774C;
	sub_822B6E80(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b778c
	if (ctx.cr6.eq) goto loc_822B778C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b778c
	if (!ctx.cr6.eq) goto loc_822B778C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_822B778C:
	// stb r24,193(r28)
	REX_STORE_U8(r28.u32 + 193, r24.u8);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7848
	if (ctx.cr0.eq) goto loc_822B7848;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_822B77AC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b77cc
	if (!ctx.cr0.eq) goto loc_822B77CC;
loc_822B77C4:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x822b77f0
	goto loc_822B77F0;
loc_822B77CC:
	// clrlwi. r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b77dc
	if (ctx.cr0.eq) goto loc_822B77DC;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b77c4
	if (ctx.cr0.eq) goto loc_822B77C4;
loc_822B77DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b77ec
	if (ctx.cr6.eq) goto loc_822B77EC;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// b 0x822b77f0
	goto loc_822B77F0;
loc_822B77EC:
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_822B77F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b7838
	if (ctx.cr0.eq) goto loc_822B7838;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,124
	ctx.r5.s64 = r30.s64 + 124;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822aa9e0
	ctx.lr = 0x822B780C;
	sub_822AA9E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r3,120(r30)
	REX_STORE_U8(r30.u32 + 120, ctx.r3.u8);
	// beq 0x822b783c
	if (ctx.cr0.eq) goto loc_822B783C;
	// addi r11,r30,140
	ctx.r11.s64 = r30.s64 + 140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ad9c0
	ctx.lr = 0x822B782C;
	sub_822AD9C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,193(r28)
	REX_STORE_U8(r28.u32 + 193, ctx.r11.u8);
	// b 0x822b783c
	goto loc_822B783C;
loc_822B7838:
	// stb r24,120(r30)
	REX_STORE_U8(r30.u32 + 120, r24.u8);
loc_822B783C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x822b77ac
	if (!ctx.cr0.eq) goto loc_822B77AC;
loc_822B7848:
	// lbz r3,193(r28)
	ctx.r3.u64 = REX_LOAD_U8(r28.u32 + 193);
loc_822B784C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822BF790) {
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
	// bl 0x822d4e54
	ctx.lr = 0x822BF798;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f24
	ctx.lr = 0x822BF7A0;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf7dc
	if (ctx.cr6.eq) goto loc_822BF7DC;
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
	// beq 0x822bf7e0
	if (ctx.cr0.eq) goto loc_822BF7E0;
loc_822BF7DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BF7E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c00fc
	if (ctx.cr0.eq) goto loc_822C00FC;
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf810
	if (ctx.cr6.eq) goto loc_822BF810;
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
	// beq 0x822bf814
	if (ctx.cr0.eq) goto loc_822BF814;
loc_822BF810:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BF814:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c00fc
	if (ctx.cr0.eq) goto loc_822C00FC;
	// lwz r31,28(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 28);
	// lfs f0,60(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	f31.f64 = double(temp.f32);
	// lwz r19,24(r17)
	r19.u64 = REX_LOAD_U32(r17.u32 + 24);
	// lfs f30,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfs f29,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	f29.f64 = double(temp.f32);
	// lfs f27,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	f27.f64 = double(temp.f32);
	// lfs f26,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	f26.f64 = double(temp.f32);
	// lfs f25,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	f25.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x822bfb50
	if (ctx.cr6.eq) goto loc_822BFB50;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821f3f40
	ctx.lr = 0x822BF858;
	sub_821F3F40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f28,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
	// lfs f23,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f23.f64 = double(temp.f32);
	// stfs f28,352(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f28,356(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f28,360(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f23,364(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822BF884;
	sub_821F3F40(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822ca328
	ctx.lr = 0x822BF890;
	sub_822CA328(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// fsubs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f27.f64));
	// fsubs f13,f30,f26
	ctx.f13.f64 = double(float(f30.f64 - f26.f64));
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// fsubs f12,f29,f25
	ctx.f12.f64 = double(float(f29.f64 - f25.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822BF8AC:
	// lfs f11,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,-44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f10,f9,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f11,f7,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822bf8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BF8AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r26,48(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f27,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lfs f26,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f26.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f25,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f25.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfs f24,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	f24.f64 = double(temp.f32);
	// lfs f31,1452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	f31.f64 = double(temp.f32);
	// stfs f27,128(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfs f26,132(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// stfs f25,136(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f24,140(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x822bfa64
	if (ctx.cr6.eq) goto loc_822BFA64;
	// lwz r25,44(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,56(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r31,0
	r31.s64 = 0;
loc_822BF93C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822bf958
	if (ctx.cr6.eq) goto loc_822BF958;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822bf968
	goto loc_822BF968;
loc_822BF958:
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r9,18(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
loc_822BF968:
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// mulli r8,r10,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lfsx f0,r8,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + r30.u64;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
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
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f10,220(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f6,244(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f5,248(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f4,252(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x822bbbb8
	ctx.lr = 0x822BF9F8;
	sub_822BBBB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - f26.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f30,f30
	ctx.f11.f64 = double(float(f30.f64 * f30.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - f27.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f29,f29,f11
	ctx.f11.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f11.f64)));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f31,f31,f11
	ctx.f11.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f11.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822bfa44
	if (!ctx.cr6.gt) goto loc_822BFA44;
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
loc_822BFA44:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x822bf93c
	if (ctx.cr6.lt) goto loc_822BF93C;
	// stfs f29,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822BFA64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,132(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f25,88(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f24,92(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f27,112(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f26
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f26.f64)));
	// stfs f25,120(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f0,f13,f0,f26
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f26.f64)));
	// stfs f24,124(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822bbef0
	ctx.lr = 0x822BFAAC;
	sub_822BBEF0(ctx, base);
	// lfs f0,128(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r17.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 - ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 - ctx.f12.f64));
	// lfs f9,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x822c00fc
	if (!ctx.cr6.lt) goto loc_822C00FC;
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f9,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x822bfb0c
	if (!ctx.cr6.lt) goto loc_822BFB0C;
	// fmr f10,f23
	ctx.f10.f64 = f23.f64;
loc_822BFB0C:
	// fabs f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x822bfb1c
	if (!ctx.cr6.lt) goto loc_822BFB1C;
	// fmr f11,f23
	ctx.f11.f64 = f23.f64;
loc_822BFB1C:
	// fdivs f11,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lfs f10,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
loc_822BFB24:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,4(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 4, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,12(r16)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r16.u32 + 12, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f12,0(r16)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// stfs f0,8(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 8, temp.u32);
	// stw r17,188(r15)
	REX_STORE_U32(r15.u32 + 188, r17.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r15,188(r17)
	REX_STORE_U32(r17.u32 + 188, r15.u32);
	// b 0x822c0100
	goto loc_822C0100;
loc_822BFB50:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x822c00fc
	if (ctx.cr6.eq) goto loc_822C00FC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821f3f40
	ctx.lr = 0x822BFB64;
	sub_821F3F40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f24.f64 = double(temp.f32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f24,428(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f0,0(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// stfs f0,4(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 4, temp.u32);
	// stfs f0,8(r16)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r16.u32 + 8, temp.u32);
	// stfs f24,12(r16)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r16.u32 + 12, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822BFBA0;
	sub_821F3F40(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822ca328
	ctx.lr = 0x822BFBAC;
	sub_822CA328(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// fsubs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f27.f64));
	// fsubs f13,f30,f26
	ctx.f13.f64 = double(float(f30.f64 - f26.f64));
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// fsubs f12,f29,f25
	ctx.f12.f64 = double(float(f29.f64 - f25.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822BFBC8:
	// lfs f11,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,-44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f10,f9,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f11,f11,f7,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f11,f8,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822bfbc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BFBC8;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
	// lfs f27,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f27.f64 = double(temp.f32);
	// lfs f26,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f26.f64 = double(temp.f32);
	// lfs f25,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	f25.f64 = double(temp.f32);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f26,136(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f25,140(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFC28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bfc48
	if (ctx.cr0.eq) goto loc_822BFC48;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFC44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bfc54
	goto loc_822BFC54;
loc_822BFC48:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b28
	ctx.lr = 0x822BFC54;
	sub_822B3B28(ctx, base);
loc_822BFC54:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFC6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bfc8c
	if (ctx.cr0.eq) goto loc_822BFC8C;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFC88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bfc98
	goto loc_822BFC98;
loc_822BFC8C:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b38
	ctx.lr = 0x822BFC98;
	sub_822B3B38(ctx, base);
loc_822BFC98:
	// lwz r9,112(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 112);
	// lfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f31.f64 = double(temp.f32);
	// lwz r11,124(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 124);
	// lfs f30,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// lwz r10,120(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 120);
	// lfs f29,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f29.f64 = double(temp.f32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r30,88(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// li r20,0
	r20.s64 = 0;
	// lwz r28,40(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// srawi. r18,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r18.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x822c000c
	if (ctx.cr0.eq) goto loc_822C000C;
loc_822BFCCC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b41b0
	ctx.lr = 0x822BFCD8;
	sub_822B41B0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822bfe40
	if (!ctx.cr6.eq) goto loc_822BFE40;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x822bfff4
	if (!ctx.cr6.lt) goto loc_822BFFF4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r21
	r31.u64 = ctx.r11.u64 + r21.u64;
loc_822BFD08:
	// lhz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lhz r10,-2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + -2);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
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
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
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
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
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
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822BFDB0;
	sub_822A5AC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822a5ac8
	ctx.lr = 0x822BFDBC;
	sub_822A5AC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822a5ac8
	ctx.lr = 0x822BFDC8;
	sub_822A5AC8(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822bbbb8
	ctx.lr = 0x822BFDE0;
	sub_822BBBB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(f31.f64 * f31.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - f26.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f30,f30,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f11.f64)));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f29,f29,f11
	ctx.f11.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f11.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822bfe2c
	if (!ctx.cr6.gt) goto loc_822BFE2C;
	// lfs f11,300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f11.f64 = double(temp.f32);
	// fmr f29,f12
	f29.f64 = ctx.f12.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_822BFE2C:
	// addi r26,r26,3
	r26.s64 = r26.s64 + 3;
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// blt cr6,0x822bfd08
	if (ctx.cr6.lt) goto loc_822BFD08;
	// b 0x822bfff4
	goto loc_822BFFF4;
loc_822BFE40:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822bfff4
	if (!ctx.cr6.eq) goto loc_822BFFF4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bge cr6,0x822bfff4
	if (!ctx.cr6.lt) goto loc_822BFFF4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r31,-1
	r25.s64 = r31.s64 + -1;
	// addi r26,r31,-2
	r26.s64 = r31.s64 + -2;
	// add r24,r11,r21
	r24.u64 = ctx.r11.u64 + r21.u64;
loc_822BFE74:
	// lhz r8,0(r24)
	ctx.r8.u64 = REX_LOAD_U16(r24.u32 + 0);
	// cmplwi cr6,r8,32767
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32767, ctx.xer);
	// bne cr6,0x822bfe98
	if (!ctx.cr6.eq) goto loc_822BFE98;
	// li r23,0
	r23.s64 = 0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x822bffdc
	goto loc_822BFFDC;
loc_822BFE98:
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne 0x822bfeb0
	if (!ctx.cr0.eq) goto loc_822BFEB0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822BFEB0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lhzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// bne cr6,0x822bfed0
	if (!ctx.cr6.eq) goto loc_822BFED0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_822BFED0:
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r28,r8
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lhzx r9,r9,r21
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r21.u32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mullw r11,r9,r28
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
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
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822BFF60;
	sub_822A5AC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a5ac8
	ctx.lr = 0x822BFF6C;
	sub_822A5AC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822a5ac8
	ctx.lr = 0x822BFF78;
	sub_822A5AC8(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822bbbb8
	ctx.lr = 0x822BFF90;
	sub_822BBBB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(f31.f64 * f31.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - f26.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f30,f30,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f11.f64)));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f29,f29,f11
	ctx.f11.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f11.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x822bffdc
	if (!ctx.cr6.gt) goto loc_822BFFDC;
	// lfs f11,284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// fmr f29,f12
	f29.f64 = ctx.f12.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_822BFFDC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// blt cr6,0x822bfe74
	if (ctx.cr6.lt) goto loc_822BFE74;
loc_822BFFF4:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplw cr6,r20,r18
	ctx.cr6.compare<uint32_t>(r20.u32, r18.u32, ctx.xer);
	// blt cr6,0x822bfccc
	if (ctx.cr6.lt) goto loc_822BFCCC;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822C000C:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c0038
	if (!ctx.cr0.eq) goto loc_822C0038;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b30
	ctx.lr = 0x822C0030;
	sub_822B3B30(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b3b40
	ctx.lr = 0x822C0038;
	sub_822B3B40(ctx, base);
loc_822C0038:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,132(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f26,88(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f25,92(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f27
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f27.f64)));
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f0,f13,f0,f27
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f27.f64)));
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822bbef0
	ctx.lr = 0x822C0080;
	sub_822BBEF0(ctx, base);
	// lfs f0,128(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r17.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(f29.f64 - ctx.f12.f64));
	// lfs f9,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x822c00fc
	if (!ctx.cr6.lt) goto loc_822C00FC;
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f9,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x822c00e0
	if (!ctx.cr6.lt) goto loc_822C00E0;
	// fmr f10,f24
	ctx.f10.f64 = f24.f64;
loc_822C00E0:
	// fabs f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x822c00f0
	if (!ctx.cr6.lt) goto loc_822C00F0;
	// fmr f11,f24
	ctx.f11.f64 = f24.f64;
loc_822C00F0:
	// fdivs f11,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lfs f10,284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// b 0x822bfb24
	goto loc_822BFB24;
loc_822C00FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C0100:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f70
	ctx.lr = 0x822C010C;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_822D8E50) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x822d98f0
	sub_822D98F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D9108) {
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
	ctx.lr = 0x822D9110;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d914c
	if (!ctx.cr6.eq) goto loc_822D914C;
	// bl 0x822db6c0
	ctx.lr = 0x822D913C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D9148;
	sub_822D6910(ctx, base);
	// b 0x822d91d4
	goto loc_822D91D4;
loc_822D914C:
	// bl 0x82246ca8
	ctx.lr = 0x822D9150;
	sub_82246CA8(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dba28
	ctx.lr = 0x822D915C;
	sub_822DBA28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822d91bc
	if (ctx.cr0.eq) goto loc_822D91BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6f00
	ctx.lr = 0x822D9170;
	sub_822D6F00(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x822d918c
	if (!ctx.cr6.eq) goto loc_822D918C;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_822D918C:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-28552
	ctx.r5.s64 = ctx.r11.s64 + -28552;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cd368
	ctx.lr = 0x822D91AC;
	sub_823CD368(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d91d8
	if (!ctx.cr0.eq) goto loc_822D91D8;
	// bl 0x822098c8
	ctx.lr = 0x822D91B8;
	sub_822098C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822D91BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822D91C4;
	sub_822D98F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822d91d4
	if (ctx.cr6.eq) goto loc_822D91D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822db730
	ctx.lr = 0x822D91D4;
	sub_822DB730(ctx, base);
loc_822D91D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D91D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822DBB90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DC568) {
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
	// beq cr6,0x822dc594
	if (ctx.cr6.eq) goto loc_822DC594;
	// ble cr6,0x822dc5a0
	if (!ctx.cr6.gt) goto loc_822DC5A0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x822dc5a0
	if (ctx.cr6.gt) goto loc_822DC5A0;
	// bl 0x822db6c0
	ctx.lr = 0x822DC58C;
	sub_822DB6C0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x822dc59c
	goto loc_822DC59C;
loc_822DC594:
	// bl 0x822db6c0
	ctx.lr = 0x822DC598;
	sub_822DB6C0(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
loc_822DC59C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822DC5A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DF800) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x822dbb00
	ctx.lr = 0x822DF814;
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

DEFINE_REX_FUNC(sub_822DFCA8) {
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
	// stb r4,127(r31)
	REX_STORE_U8(r31.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfd1c
	if (ctx.cr6.eq) goto loc_822DFD1C;
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dfd1c
	if (!ctx.cr6.eq) goto loc_822DFD1C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfd1c
	if (ctx.cr6.eq) goto loc_822DFD1C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfd1c
	if (ctx.cr6.eq) goto loc_822DFD1C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DFD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822dfd1c
	goto loc_822DFD1C;
loc_822DFD1C:
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E1E38) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e1e5c
	if (!ctx.cr6.eq) goto loc_822E1E5C;
	// bl 0x822e1eb8
	ctx.lr = 0x822E1E58;
	sub_822E1EB8(ctx, base);
	// b 0x822e1e9c
	goto loc_822E1E9C;
loc_822E1E5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1da0
	ctx.lr = 0x822E1E64;
	sub_822E1DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e1e74
	if (ctx.cr0.eq) goto loc_822E1E74;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e1e9c
	goto loc_822E1E9C;
loc_822E1E74:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1e98
	if (ctx.cr0.eq) goto loc_822E1E98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E1E88;
	sub_822E15A8(ctx, base);
	// bl 0x822e6140
	ctx.lr = 0x822E1E8C;
	sub_822E6140(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x822e1e9c
	goto loc_822E1E9C;
loc_822E1E98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E1E9C:
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

DEFINE_REX_FUNC(sub_822E7418) {
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
	ctx.lr = 0x822E7420;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822e7464
	if (!ctx.cr6.eq) goto loc_822E7464;
	// bl 0x822db6f8
	ctx.lr = 0x822E7444;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E7450;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e7560
	goto loc_822E7560;
loc_822E7464:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822e747c
	if (ctx.cr6.lt) goto loc_822E747C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e74a0
	if (ctx.cr6.lt) goto loc_822E74A0;
loc_822E747C:
	// bl 0x822db6f8
	ctx.lr = 0x822E7480;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E748C;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_822E7490:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E7498;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e7560
	goto loc_822E7560;
loc_822E74A0:
	// srawi r11,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = r30.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-11584
	r28.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r30,27
	ctx.r11.u64 = r30.u32 & 0x1F;
	// mulli r29,r11,72
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e747c
	if (ctx.cr0.eq) goto loc_822E747C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r26,-1
	r26.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= r25.u32;
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// subfze. r11,r26
	temp.u8 = ~r26.u32 + ctx.xer.ca < ~r26.u32;
	ctx.r11.u64 = ~r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e74fc
	if (!ctx.cr0.eq) goto loc_822E74FC;
	// bl 0x822db6f8
	ctx.lr = 0x822E74E8;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E74F4;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x822e7490
	goto loc_822E7490;
loc_822E74FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e5be0
	ctx.lr = 0x822E7504;
	sub_822E5BE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7534
	if (ctx.cr0.eq) goto loc_822E7534;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6df8
	ctx.lr = 0x822E752C;
	sub_822E6DF8(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x822e7550
	goto loc_822E7550;
loc_822E7534:
	// bl 0x822db6c0
	ctx.lr = 0x822E7538;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x822E7544;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
loc_822E7550:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x822e7588
	ctx.lr = 0x822E755C;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E7588(ctx, base);
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_822E7560:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822ECEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,-5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5000, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x822ecee4
	if (ctx.cr6.gt) goto loc_822ECEE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822ecef8
	if (ctx.cr6.gt) goto loc_822ECEF8;
loc_822ECEE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822ecf08
	if (ctx.cr6.lt) goto loc_822ECF08;
loc_822ECEF8:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822ECF08:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822ED6B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED6D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ed6e8
	if (ctx.cr6.eq) goto loc_822ED6E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ED6E0:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x822ed700
	goto loc_822ED700;
loc_822ED6E8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822ed6e0
	if (ctx.cr6.gt) goto loc_822ED6E0;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_822ED700:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822ED718;
	sub_822D4FA0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822F0EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822F0EC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822f0f1c
	if (!ctx.cr6.eq) goto loc_822F0F1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F0F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0fa0
	if (ctx.cr6.lt) goto loc_822F0FA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ef588
	ctx.lr = 0x822F0F14;
	sub_822EF588(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822F0F1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x822f9900
	ctx.lr = 0x822F0F28;
	sub_822F9900(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0f40
	if (ctx.cr6.eq) goto loc_822F0F40;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f0fa0
	if (ctx.cr6.eq) goto loc_822F0FA0;
loc_822F0F40:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f0c00
	ctx.lr = 0x822F0F50;
	sub_822F0C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0fa0
	if (ctx.cr6.lt) goto loc_822F0FA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F0F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0fa0
	if (ctx.cr6.lt) goto loc_822F0FA0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f9900
	ctx.lr = 0x822F0F8C;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0fa0
	if (ctx.cr6.lt) goto loc_822F0FA0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822F0FA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822F4E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F4E10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822f4e78
	if (ctx.cr6.gt) goto loc_822F4E78;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f4e60
	if (ctx.cr6.eq) goto loc_822F4E60;
	// bdz 0x822f4e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F4E6C;
	// bdz 0x822f4e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822F4E78;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// b 0x822f4e80
	goto loc_822F4E80;
loc_822F4E60:
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r29,76(r31)
	REX_STORE_U32(r31.u32 + 76, r29.u32);
	// b 0x822f4e80
	goto loc_822F4E80;
loc_822F4E6C:
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x822f4e80
	goto loc_822F4E80;
loc_822F4E78:
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
loc_822F4E80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4E94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822F8C20) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F8C30) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F91B0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x822f9244
	if (ctx.cr6.lt) goto loc_822F9244;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// bge cr6,0x822f9244
	if (!ctx.cr6.lt) goto loc_822F9244;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f921c
	if (!ctx.cr6.eq) goto loc_822F921C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,182
	ctx.r3.u64 = ctx.r3.u64 | 182;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822F921C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F9234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822F9244:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB6D0) {
	REX_FUNC_PROLOGUE();
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x822d5870
	sub_822D5870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FB7A0) {
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
	ctx.lr = 0x822FB7A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// ld r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpld cr6,r7,r5
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r5.u64, ctx.xer);
	// ble cr6,0x822fb7e8
	if (!ctx.cr6.gt) goto loc_822FB7E8;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_822FB7E8:
	// clrlwi r28,r11,16
	r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(r28.u32, 512, ctx.xer);
	// ble cr6,0x822fb7f8
	if (!ctx.cr6.gt) goto loc_822FB7F8;
	// li r28,512
	r28.s64 = 512;
loc_822FB7F8:
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd118
	ctx.lr = 0x822FB80C;
	sub_823CD118(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fb820
	if (!ctx.cr6.eq) goto loc_822FB820;
	// li r23,5
	r23.s64 = 5;
	// b 0x822fb89c
	goto loc_822FB89C;
loc_822FB820:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d5870
	ctx.lr = 0x822FB830;
	sub_822D5870(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822fb890
	if (ctx.cr6.eq) goto loc_822FB890;
loc_822FB83C:
	// subf r29,r31,r28
	r29.u64 = r28.u64 - r31.u64;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// ble cr6,0x822fb84c
	if (!ctx.cr6.gt) goto loc_822FB84C;
	// li r29,128
	r29.s64 = 128;
loc_822FB84C:
	// ld r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 0);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FB868;
	sub_822EC1E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x822fb898
	if (!ctx.cr6.eq) goto loc_822FB898;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822FB884;
	sub_822D4FA0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x822fb83c
	if (ctx.cr6.lt) goto loc_822FB83C;
loc_822FB890:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x822fb8bc
	if (ctx.cr6.eq) goto loc_822FB8BC;
loc_822FB898:
	// li r23,3
	r23.s64 = 3;
loc_822FB89C:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822fb8bc
	if (ctx.cr6.eq) goto loc_822FB8BC;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd250
	ctx.lr = 0x822FB8B8;
	sub_823CD250(ctx, base);
	// li r27,0
	r27.s64 = 0;
loc_822FB8BC:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// ld r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r8.u64);
	// sth r31,0(r24)
	REX_STORE_U16(r24.u32 + 0, r31.u16);
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82305250) {
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
	// lwz r11,444(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 444);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823052ec
	if (ctx.cr6.eq) goto loc_823052EC;
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r6,432(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 432);
	// lwz r5,428(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 428);
	// lwz r9,304(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82317978
	ctx.lr = 0x82305298;
	sub_82317978(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,304(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 304);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ble cr6,0x823052d8
	if (!ctx.cr6.gt) goto loc_823052D8;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823052B4:
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823052c4
	if (!ctx.cr6.gt) goto loc_823052C4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823052C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823052b4
	if (ctx.cr6.lt) goto loc_823052B4;
loc_823052D8:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_823052EC:
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

DEFINE_REX_FUNC(sub_823078F0) {
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
	ctx.lr = 0x823078F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82307944
	if (ctx.cr6.eq) goto loc_82307944;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82307944
	if (ctx.cr6.eq) goto loc_82307944;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82307944
	if (ctx.cr6.eq) goto loc_82307944;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82307944
	if (ctx.cr6.eq) goto loc_82307944;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82307954
	if (!ctx.cr6.eq) goto loc_82307954;
loc_82307944:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_82307954:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x823079b8
	if (ctx.cr6.lt) goto loc_823079B8;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r7,3(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r9,1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_823079B8:
	// li r29,0
	r29.s64 = 0;
loc_823079BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82307a18
	if (!ctx.cr6.eq) goto loc_82307A18;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823079EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82307a7c
	if (ctx.cr6.lt) goto loc_82307A7C;
	// ld r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U64(r27.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
loc_82307A18:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// extsb r9,r29
	ctx.r9.s64 = r29.s8;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r5
	r29.s64 = ctx.r5.s8;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi r8,r29,24
	ctx.r8.u64 = r29.u32 & 0xFF;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// extsb r25,r6
	r25.s64 = ctx.r6.s8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x823079bc
	if (ctx.cr6.lt) goto loc_823079BC;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82307A7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8230FF20) {
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
	ctx.lr = 0x8230FF28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8230ff50
	if (!ctx.cr6.eq) goto loc_8230FF50;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8230FF50:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823100c4
	if (!ctx.cr6.eq) goto loc_823100C4;
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// li r29,5
	r29.s64 = 5;
	// ori r28,r11,6
	r28.u64 = ctx.r11.u64 | 6;
	// li r27,14
	r27.s64 = 14;
loc_8230FF6C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x8230ff6c
	if (ctx.cr6.gt) goto loc_8230FF6C;
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-112
	ctx.r12.s64 = ctx.r12.s64 + -112;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8230FFDC;
	case 1:
		goto loc_8230FFDC;
	case 2:
		goto loc_8230FFDC;
	case 3:
		goto loc_8230FFDC;
	case 4:
		goto loc_8230FFF4;
	case 5:
		goto loc_8231003C;
	case 6:
		goto loc_8231003C;
	case 7:
		goto loc_8231003C;
	case 8:
		goto loc_8231003C;
	case 9:
		goto loc_8231003C;
	case 10:
		goto loc_8231003C;
	case 11:
		goto loc_8231003C;
	case 12:
		goto loc_8231003C;
	case 13:
		goto loc_8231003C;
	case 14:
		goto loc_82310024;
	case 15:
		goto loc_82310024;
	case 16:
		goto loc_82310024;
	case 17:
		goto loc_82310080;
	case 18:
		goto loc_823100BC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8230FFDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230db00
	ctx.lr = 0x8230FFE4;
	sub_8230DB00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230ff6c
	if (!ctx.cr6.lt) goto loc_8230FF6C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8230FFF4:
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822f91b0
	ctx.lr = 0x8231000C;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823100c4
	if (ctx.cr6.lt) goto loc_823100C4;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r28.s32, ctx.xer);
	// bne cr6,0x823100b0
	if (!ctx.cr6.eq) goto loc_823100B0;
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// b 0x8230ff6c
	goto loc_8230FF6C;
loc_82310024:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230c1b8
	ctx.lr = 0x8231002C;
	sub_8230C1B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8230ff6c
	if (!ctx.cr6.lt) goto loc_8230FF6C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8231003C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230edb0
	ctx.lr = 0x82310044;
	sub_8230EDB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823100c4
	if (ctx.cr6.lt) goto loc_823100C4;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82310064
	if (!ctx.cr6.eq) goto loc_82310064;
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230ff6c
	if (ctx.cr6.eq) goto loc_8230FF6C;
loc_82310064:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823100c4
	if (ctx.cr6.eq) goto loc_823100C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_82310080:
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822f9260
	ctx.lr = 0x823100A8;
	sub_822F9260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823100c4
	if (ctx.cr6.lt) goto loc_823100C4;
loc_823100B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823100BC:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
loc_823100C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823123F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312470
	if (ctx.cr6.eq) goto loc_82312470;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82312408:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82312454
	if (ctx.cr6.eq) goto loc_82312454;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x82312438
	if (ctx.cr6.lt) goto loc_82312438;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82312448
	if (ctx.cr6.lt) goto loc_82312448;
	// b 0x82312454
	goto loc_82312454;
loc_82312438:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x82312454
	if (!ctx.cr6.gt) goto loc_82312454;
loc_82312448:
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82312454:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x82312470
	if (ctx.cr6.lt) goto loc_82312470;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82312408
	if (!ctx.cr6.eq) goto loc_82312408;
loc_82312470:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82313880) {
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
	ctx.lr = 0x82313888;
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
	// beq cr6,0x823139b4
	if (ctx.cr6.eq) goto loc_823139B4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_823138AC:
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
	// blt cr6,0x823138fc
	if (ctx.cr6.lt) goto loc_823138FC;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x823138d4
	if (ctx.cr6.gt) goto loc_823138D4;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x823138f0
	if (ctx.cr6.gt) goto loc_823138F0;
loc_823138D4:
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
	// bne cr6,0x823138ac
	if (!ctx.cr6.eq) goto loc_823138AC;
	// b 0x823138fc
	goto loc_823138FC;
loc_823138F0:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_823138FC:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823139b4
	if (ctx.cr6.eq) goto loc_823139B4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823139b4
	if (ctx.cr6.eq) goto loc_823139B4;
loc_82313914:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823139b4
	if (ctx.cr6.eq) goto loc_823139B4;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r30.u64, ctx.xer);
	// bgt cr6,0x823139a4
	if (ctx.cr6.gt) goto loc_823139A4;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r30
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, r30.u64, ctx.xer);
	// ble cr6,0x823139a4
	if (!ctx.cr6.gt) goto loc_823139A4;
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
	// ble cr6,0x8231396c
	if (!ctx.cr6.gt) goto loc_8231396C;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_8231396C:
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
	// bl 0x822d4fa0
	ctx.lr = 0x82313984;
	sub_822D4FA0(ctx, base);
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
	// beq cr6,0x823139b4
	if (ctx.cr6.eq) goto loc_823139B4;
loc_823139A4:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82313914
	if (!ctx.cr6.eq) goto loc_82313914;
loc_823139B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82319550) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,212(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 212);
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r6,704(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 704);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823195d0
	if (ctx.cr6.eq) goto loc_823195D0;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_823195D0:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r10,r11,-22768
	ctx.r10.s64 = ctx.r11.s64 + -22768;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82320178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82320180;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lhz r5,174(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 174);
	// bl 0x82328808
	ctx.lr = 0x823201A0;
	sub_82328808(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x823201e8
	if (!ctx.cr6.gt) goto loc_823201E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823201AC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,632(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 632);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// lwz r6,-4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// srawi r9,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 6;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// blt cr6,0x823201ac
	if (ctx.cr6.lt) goto loc_823201AC;
loc_823201E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82322A98) {
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
	ctx.lr = 0x82322AA0;
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
	// beq cr6,0x82322ad0
	if (ctx.cr6.eq) goto loc_82322AD0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82322c58
	if (ctx.cr6.eq) goto loc_82322C58;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
loc_82322AD0:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322c48
	if (!ctx.cr6.lt) goto loc_82322C48;
	// addi r25,r31,224
	r25.s64 = r31.s64 + 224;
loc_82322AE8:
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
	// bl 0x8246e538
	ctx.lr = 0x82322B10;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82322da8
	if (ctx.cr6.lt) goto loc_82322DA8;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322c10
	if (ctx.cr6.eq) goto loc_82322C10;
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
loc_82322B3C:
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
	// bgt cr6,0x82322b68
	if (ctx.cr6.gt) goto loc_82322B68;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82322B68:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82322bfc
	if (!ctx.cr6.lt) goto loc_82322BFC;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82322b88
	if (ctx.cr6.lt) goto loc_82322B88;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82322B88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82319780
	ctx.lr = 0x82322B98;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82322da8
	if (ctx.cr6.lt) goto loc_82322DA8;
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
	// beq cr6,0x82322bd4
	if (ctx.cr6.eq) goto loc_82322BD4;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r11.u8);
	// b 0x82322be4
	goto loc_82322BE4;
loc_82322BD4:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r10.u32);
loc_82322BE4:
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
	// b 0x82322b3c
	goto loc_82322B3C;
loc_82322BFC:
	// lwz r11,304(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 304);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82322c14
	if (!ctx.cr6.lt) goto loc_82322C14;
	// stbx r24,r8,r26
	REX_STORE_U8(ctx.r8.u32 + r26.u32, r24.u8);
	// b 0x82322c14
	goto loc_82322C14;
loc_82322C10:
	// stw r24,36(r28)
	REX_STORE_U32(r28.u32 + 36, r24.u32);
loc_82322C14:
	// lwz r11,400(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 400);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r10,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r10.u16);
	// lhz r9,150(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 150);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r7.u16);
	// lhz r6,34(r27)
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82322ae8
	if (ctx.cr6.lt) goto loc_82322AE8;
loc_82322C48:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// sth r24,150(r31)
	REX_STORE_U16(r31.u32 + 150, r24.u16);
	// sth r24,152(r31)
	REX_STORE_U16(r31.u32 + 152, r24.u16);
loc_82322C58:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322da8
	if (!ctx.cr6.lt) goto loc_82322DA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-15272
	r26.s64 = ctx.r11.s64 + -15272;
loc_82322C74:
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
	// beq cr6,0x82322d7c
	if (ctx.cr6.eq) goto loc_82322D7C;
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322d7c
	if (ctx.cr6.eq) goto loc_82322D7C;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82322ce4
	if (!ctx.cr6.eq) goto loc_82322CE4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82322CC4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82322da8
	if (ctx.cr6.lt) goto loc_82322DA8;
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
loc_82322CE4:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322d7c
	if (!ctx.cr6.lt) goto loc_82322D7C;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_82322CFC:
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
	// bl 0x82325c30
	ctx.lr = 0x82322D14;
	sub_82325C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82322da8
	if (ctx.cr6.lt) goto loc_82322DA8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82319a70
	ctx.lr = 0x82322D28;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82322da8
	if (ctx.cr6.lt) goto loc_82322DA8;
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
	// lhz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 152);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r6.u16);
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82322cfc
	if (ctx.cr6.lt) goto loc_82322CFC;
loc_82322D7C:
	// sth r24,152(r31)
	REX_STORE_U16(r31.u32 + 152, r24.u16);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r9.u16);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r27)
	ctx.r8.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82322c74
	if (ctx.cr6.lt) goto loc_82322C74;
loc_82322DA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8232EC00) {
	REX_FUNC_PROLOGUE();
	// ld r11,3632(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8232ec54
	if (!ctx.cr6.eq) goto loc_8232EC54;
	// lwz r11,14836(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ec54
	if (ctx.cr6.eq) goto loc_8232EC54;
	// lwz r11,20680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ec44
	if (ctx.cr6.eq) goto loc_8232EC44;
	// lwz r11,20684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ec44
	if (ctx.cr6.eq) goto loc_8232EC44;
	// lwz r11,21776(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ec54
	if (ctx.cr6.eq) goto loc_8232EC54;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8232EC44:
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8232EC54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82331C88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82331c98
	if (!ctx.cr6.eq) goto loc_82331C98;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_82331C98:
	// lwz r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82331cc8
	if (ctx.cr6.eq) goto loc_82331CC8;
	// lwz r10,15364(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82331cc8
	if (!ctx.cr6.eq) goto loc_82331CC8;
	// lwz r10,15432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82331cc8
	if (!ctx.cr6.eq) goto loc_82331CC8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_82331CC8:
	// lwz r10,15536(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bge cr6,0x82331cec
	if (!ctx.cr6.lt) goto loc_82331CEC;
	// lwz r10,14888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14888);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82331d1c
	if (ctx.cr6.eq) goto loc_82331D1C;
	// lwz r10,14912(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14912);
	// lwz r11,14916(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// b 0x82331d24
	goto loc_82331D24;
loc_82331CEC:
	// lwz r10,21888(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21888);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82331d1c
	if (!ctx.cr6.eq) goto loc_82331D1C;
	// lwz r10,14836(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82331d1c
	if (!ctx.cr6.gt) goto loc_82331D1C;
	// ld r10,3632(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// ble cr6,0x82331d1c
	if (!ctx.cr6.gt) goto loc_82331D1C;
	// lwz r10,22084(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22084);
	// lwz r11,22088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// b 0x82331d24
	goto loc_82331D24;
loc_82331D1C:
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
loc_82331D24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82331d30
	if (ctx.cr6.eq) goto loc_82331D30;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82331D30:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82331d3c
	if (ctx.cr6.eq) goto loc_82331D3C;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82331D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823376F0) {
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
	ctx.lr = 0x823376F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r30,8(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r29,12(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// beq cr6,0x8233773c
	if (ctx.cr6.eq) goto loc_8233773C;
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82337740
	goto loc_82337740;
loc_8233773C:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82337740:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337754
	if (ctx.cr6.eq) goto loc_82337754;
	// lwz r26,16(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82337758
	goto loc_82337758;
loc_82337754:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_82337758:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r25,r11,3
	r25.u64 = ctx.r11.u64 | 3;
	// ori r24,r10,182
	r24.u64 = ctx.r10.u64 | 182;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// ble cr6,0x823377ac
	if (!ctx.cr6.gt) goto loc_823377AC;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,144
	ctx.r5.u64 = ctx.r5.u64 | 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f91b0
	ctx.lr = 0x82337790;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823377b0
	if (!ctx.cr6.lt) goto loc_823377B0;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x823377a8
	if (ctx.cr6.eq) goto loc_823377A8;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x823378c0
	if (!ctx.cr6.eq) goto loc_823378C0;
loc_823377A8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
loc_823377AC:
	// bne cr6,0x823378b8
	if (!ctx.cr6.eq) goto loc_823378B8;
loc_823377B0:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// ble cr6,0x823377f4
	if (!ctx.cr6.gt) goto loc_823377F4;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,160
	ctx.r5.u64 = ctx.r5.u64 | 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f91b0
	ctx.lr = 0x823377DC;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823377fc
	if (!ctx.cr6.lt) goto loc_823377FC;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x823377f4
	if (ctx.cr6.eq) goto loc_823377F4;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x823378c0
	if (!ctx.cr6.eq) goto loc_823378C0;
loc_823377F4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823378b8
	if (!ctx.cr6.eq) goto loc_823378B8;
loc_823377FC:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,176
	ctx.r5.u64 = ctx.r5.u64 | 176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f91b0
	ctx.lr = 0x82337818;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823378c0
	if (ctx.cr6.lt) goto loc_823378C0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// bne cr6,0x823378b8
	if (!ctx.cr6.eq) goto loc_823378B8;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823378b8
	if (!ctx.cr6.eq) goto loc_823378B8;
	// cmplwi cr6,r21,12
	ctx.cr6.compare<uint32_t>(r21.u32, 12, ctx.xer);
	// bne cr6,0x823378b8
	if (!ctx.cr6.eq) goto loc_823378B8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// ori r5,r5,112
	ctx.r5.u64 = ctx.r5.u64 | 112;
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f91b0
	ctx.lr = 0x8233788C;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823378c0
	if (ctx.cr6.lt) goto loc_823378C0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,31,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFFFFF;
	// stw r8,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_823378B8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_823378C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82342B80) {
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
	ctx.lr = 0x82342B88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4040(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4040);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82342bb0
	if (!ctx.cr6.eq) goto loc_82342BB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r10,4036(r3)
	REX_STORE_U32(ctx.r3.u32 + 4036, ctx.r10.u32);
	// b 0x82342e8c
	goto loc_82342E8C;
loc_82342BB0:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// stw r29,476(r27)
	REX_STORE_U32(r27.u32 + 476, r29.u32);
	// stw r29,4036(r27)
	REX_STORE_U32(r27.u32 + 4036, r29.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82342be4
	if (!ctx.cr0.lt) goto loc_82342BE4;
	// bl 0x823380c8
	ctx.lr = 0x82342BE4;
	sub_823380C8(ctx, base);
loc_82342BE4:
	// stw r31,284(r27)
	REX_STORE_U32(r27.u32 + 284, r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82342e9c
	if (ctx.cr6.eq) goto loc_82342E9C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82342c64
	if (!ctx.cr6.lt) goto loc_82342C64;
loc_82342C0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342c64
	if (ctx.cr6.eq) goto loc_82342C64;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x82342c54
	if (!ctx.cr0.lt) goto loc_82342C54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342C54;
	sub_823380C8(ctx, base);
loc_82342C54:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82342c0c
	if (ctx.cr6.gt) goto loc_82342C0C;
loc_82342C64:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82342c9c
	if (!ctx.cr0.lt) goto loc_82342C9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342C9C;
	sub_823380C8(ctx, base);
loc_82342C9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82342cb0
	if (!ctx.cr6.eq) goto loc_82342CB0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,4036(r27)
	REX_STORE_U32(r27.u32 + 4036, ctx.r11.u32);
	// b 0x82342e74
	goto loc_82342E74;
loc_82342CB0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82342d84
	if (!ctx.cr6.eq) goto loc_82342D84;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82342d28
	if (!ctx.cr6.lt) goto loc_82342D28;
loc_82342CD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342d28
	if (ctx.cr6.eq) goto loc_82342D28;
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
	// bge 0x82342d18
	if (!ctx.cr0.lt) goto loc_82342D18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342D18;
	sub_823380C8(ctx, base);
loc_82342D18:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82342cd0
	if (ctx.cr6.gt) goto loc_82342CD0;
loc_82342D28:
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
	// bge 0x82342d60
	if (!ctx.cr0.lt) goto loc_82342D60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342D60;
	sub_823380C8(ctx, base);
loc_82342D60:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// beq cr6,0x82342d78
	if (ctx.cr6.eq) goto loc_82342D78;
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// stw r10,4036(r27)
	REX_STORE_U32(r27.u32 + 4036, ctx.r10.u32);
	// b 0x82342e74
	goto loc_82342E74;
loc_82342D78:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4036(r27)
	REX_STORE_U32(r27.u32 + 4036, ctx.r11.u32);
	// b 0x82342e74
	goto loc_82342E74;
loc_82342D84:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x82342e40
	if (!ctx.cr6.eq) goto loc_82342E40;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82342df8
	if (!ctx.cr6.lt) goto loc_82342DF8;
loc_82342DA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342df8
	if (ctx.cr6.eq) goto loc_82342DF8;
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
	// bge 0x82342de8
	if (!ctx.cr0.lt) goto loc_82342DE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342DE8;
	sub_823380C8(ctx, base);
loc_82342DE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82342da0
	if (ctx.cr6.gt) goto loc_82342DA0;
loc_82342DF8:
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
	// bge 0x82342e30
	if (!ctx.cr0.lt) goto loc_82342E30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342E30;
	sub_823380C8(ctx, base);
loc_82342E30:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// stw r10,4036(r27)
	REX_STORE_U32(r27.u32 + 4036, ctx.r10.u32);
	// b 0x82342e74
	goto loc_82342E74;
loc_82342E40:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bne cr6,0x82342e74
	if (!ctx.cr6.eq) goto loc_82342E74;
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
	// bge 0x82342e70
	if (!ctx.cr0.lt) goto loc_82342E70;
	// bl 0x823380c8
	ctx.lr = 0x82342E70;
	sub_823380C8(ctx, base);
loc_82342E70:
	// stw r31,476(r27)
	REX_STORE_U32(r27.u32 + 476, r31.u32);
loc_82342E74:
	// lwz r11,476(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342e8c
	if (!ctx.cr6.eq) goto loc_82342E8C;
	// lwz r11,4036(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342e9c
	if (ctx.cr6.eq) goto loc_82342E9C;
loc_82342E8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8238ecc0
	ctx.lr = 0x82342E98;
	sub_8238ECC0(ctx, base);
	// stw r3,4044(r27)
	REX_STORE_U32(r27.u32 + 4044, ctx.r3.u32);
loc_82342E9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82359E28) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82359E30;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r25,1
	r25.s64 = 1;
	// rlwinm r26,r11,0,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subf r28,r10,r6
	r28.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble cr6,0x8235a1d0
	if (!ctx.cr6.gt) goto loc_8235A1D0;
	// li r29,12
	r29.s64 = 12;
loc_82359E58:
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// lbzx r30,r10,r11
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82359e7c
	if (!ctx.cr6.eq) goto loc_82359E7C;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stwx r27,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// b 0x8235a1c0
	goto loc_8235A1C0;
loc_82359E7C:
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(r30.u32, 255, ctx.xer);
	// bne cr6,0x8235a140
	if (!ctx.cr6.eq) goto loc_8235A140;
	// lwz r9,68(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r11,r29,-12
	ctx.r11.s64 = r29.s64 + -12;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r9,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 20;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82359ed0
	if (ctx.cr0.lt) goto loc_82359ED0;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82359ed0
	if (!ctx.cr6.lt) goto loc_82359ED0;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x82359ed4
	goto loc_82359ED4;
loc_82359ED0:
	// stbx r27,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, r27.u8);
loc_82359ED4:
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82359f28
	if (ctx.cr0.lt) goto loc_82359F28;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82359f28
	if (!ctx.cr6.lt) goto loc_82359F28;
	// lwz r9,64(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stb r9,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// b 0x82359f30
	goto loc_82359F30;
loc_82359F28:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r27.u8);
loc_82359F30:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82359f80
	if (ctx.cr0.lt) goto loc_82359F80;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82359f80
	if (!ctx.cr6.lt) goto loc_82359F80;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r11.u8);
	// b 0x82359f88
	goto loc_82359F88;
loc_82359F80:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r27.u8);
loc_82359F88:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// srawi r11,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 20;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82359fd4
	if (ctx.cr0.lt) goto loc_82359FD4;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82359fd4
	if (!ctx.cr6.lt) goto loc_82359FD4;
	// lwz r9,64(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r10,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r10.u8);
	// b 0x82359fdc
	goto loc_82359FDC;
loc_82359FD4:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r27.u8);
loc_82359FDC:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8235a02c
	if (ctx.cr0.lt) goto loc_8235A02C;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235a02c
	if (!ctx.cr6.lt) goto loc_8235A02C;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,4(r6)
	REX_STORE_U8(ctx.r6.u32 + 4, ctx.r11.u8);
	// b 0x8235a034
	goto loc_8235A034;
loc_8235A02C:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r27.u8);
loc_8235A034:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8235a084
	if (ctx.cr0.lt) goto loc_8235A084;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235a084
	if (!ctx.cr6.lt) goto loc_8235A084;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,5(r6)
	REX_STORE_U8(ctx.r6.u32 + 5, ctx.r11.u8);
	// b 0x8235a08c
	goto loc_8235A08C;
loc_8235A084:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r27.u8);
loc_8235A08C:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8235a0dc
	if (ctx.cr0.lt) goto loc_8235A0DC;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235a0dc
	if (!ctx.cr6.lt) goto loc_8235A0DC;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,6(r6)
	REX_STORE_U8(ctx.r6.u32 + 6, ctx.r11.u8);
	// b 0x8235a0e4
	goto loc_8235A0E4;
loc_8235A0DC:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, r27.u8);
loc_8235A0E4:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8235a134
	if (ctx.cr0.lt) goto loc_8235A134;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235a134
	if (!ctx.cr6.lt) goto loc_8235A134;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,7(r6)
	REX_STORE_U8(ctx.r6.u32 + 7, ctx.r11.u8);
	// b 0x8235a1c0
	goto loc_8235A1C0;
loc_8235A134:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, r27.u8);
	// b 0x8235a1c0
	goto loc_8235A1C0;
loc_8235A140:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r8,r29,-12
	ctx.r8.s64 = r29.s64 + -12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8235A158:
	// and r11,r30,r31
	ctx.r11.u64 = r30.u64 & r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a1ac
	if (ctx.cr6.eq) goto loc_8235A1AC;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8235a1ac
	if (ctx.cr0.lt) goto loc_8235A1AC;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235a1ac
	if (!ctx.cr6.lt) goto loc_8235A1AC;
	// lwz r24,64(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r24,r8
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r10,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x8235a1b0
	goto loc_8235A1B0;
loc_8235A1AC:
	// stbx r27,r6,r9
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, r27.u8);
loc_8235A1B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// bdnz 0x8235a158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235A158;
loc_8235A1C0:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r26.s32, ctx.xer);
	// blt cr6,0x82359e58
	if (ctx.cr6.lt) goto loc_82359E58;
loc_8235A1D0:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// beq cr6,0x8235a268
	if (ctx.cr6.eq) goto loc_8235A268;
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// lbzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// bge cr6,0x8235a268
	if (!ctx.cr6.lt) goto loc_8235A268;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235A1F8:
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// slw r8,r25,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a250
	if (ctx.cr6.eq) goto loc_8235A250;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8235a250
	if (ctx.cr0.lt) goto loc_8235A250;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8235a250
	if (!ctx.cr6.lt) goto loc_8235A250;
	// lwz r8,64(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r10,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u8);
	// b 0x8235a254
	goto loc_8235A254;
loc_8235A250:
	// stbx r27,r7,r3
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, r27.u8);
loc_8235A254:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235a1f8
	if (ctx.cr6.lt) goto loc_8235A1F8;
loc_8235A268:
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823681B8) {
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
	ctx.lr = 0x823681C0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r19,0
	r19.s64 = 0;
	// mr r23,r19
	r23.u64 = r19.u64;
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// lwz r10,140(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r26,r11,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r21,272(r25)
	r21.u64 = REX_LOAD_U32(r25.u32 + 272);
	// rlwinm r22,r10,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,22344(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 22344);
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r24,r22,r26
	r24.s64 = int64_t(r22.s32) * int64_t(r26.s32);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rldicl r20,r9,1,63
	r20.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// bge 0x8236821c
	if (!ctx.cr0.lt) goto loc_8236821C;
	// bl 0x823380c8
	ctx.lr = 0x8236821C;
	sub_823380C8(ctx, base);
loc_8236821C:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r29,2
	r29.s64 = 2;
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82368290
	if (!ctx.cr6.lt) goto loc_82368290;
loc_82368238:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368290
	if (ctx.cr6.eq) goto loc_82368290;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x82368280
	if (!ctx.cr0.lt) goto loc_82368280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82368280;
	sub_823380C8(ctx, base);
loc_82368280:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82368238
	if (ctx.cr6.gt) goto loc_82368238;
loc_82368290:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x823682c8
	if (!ctx.cr0.lt) goto loc_823682C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823682C8;
	sub_823380C8(ctx, base);
loc_823682C8:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x823685b4
	if (ctx.cr6.eq) goto loc_823685B4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// beq cr6,0x82368494
	if (ctx.cr6.eq) goto loc_82368494;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// beq cr6,0x82368478
	if (ctx.cr6.eq) goto loc_82368478;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368308
	if (!ctx.cr0.lt) goto loc_82368308;
	// bl 0x823380c8
	ctx.lr = 0x82368308;
	sub_823380C8(ctx, base);
loc_82368308:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82368434
	if (ctx.cr6.eq) goto loc_82368434;
	// clrlwi r31,r24,31
	r31.u64 = r24.u32 & 0x1;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r23,r28
	r23.u64 = r28.u64;
	// beq cr6,0x82368354
	if (ctx.cr6.eq) goto loc_82368354;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8236834c
	if (!ctx.cr0.lt) goto loc_8236834C;
	// bl 0x823380c8
	ctx.lr = 0x8236834C;
	sub_823380C8(ctx, base);
loc_8236834C:
	// stb r29,0(r30)
	REX_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82368354:
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// bge cr6,0x82368744
	if (!ctx.cr6.lt) goto loc_82368744;
	// subf r11,r31,r24
	ctx.r11.u64 = r24.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8236836C:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368394
	if (!ctx.cr0.lt) goto loc_82368394;
	// bl 0x823380c8
	ctx.lr = 0x82368394;
	sub_823380C8(ctx, base);
loc_82368394:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8236841c
	if (ctx.cr6.eq) goto loc_8236841C;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x823683c4
	if (!ctx.cr0.lt) goto loc_823683C4;
	// bl 0x823380c8
	ctx.lr = 0x823683C4;
	sub_823380C8(ctx, base);
loc_823683C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823683d8
	if (ctx.cr6.eq) goto loc_823683D8;
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x82368424
	goto loc_82368424;
loc_823683D8:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368400
	if (!ctx.cr0.lt) goto loc_82368400;
	// bl 0x823380c8
	ctx.lr = 0x82368400;
	sub_823380C8(ctx, base);
loc_82368400:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82368414
	if (ctx.cr6.eq) goto loc_82368414;
	// stb r19,0(r30)
	REX_STORE_U8(r30.u32 + 0, r19.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x82368424
	goto loc_82368424;
loc_82368414:
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x82368420
	goto loc_82368420;
loc_8236841C:
	// stb r19,0(r30)
	REX_STORE_U8(r30.u32 + 0, r19.u8);
loc_82368420:
	// stbu r19,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r19.u8);
	r30.u32 = ea;
loc_82368424:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8236836c
	if (!ctx.cr0.eq) goto loc_8236836C;
	// b 0x82368744
	goto loc_82368744;
loc_82368434:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x8236845c
	if (!ctx.cr0.lt) goto loc_8236845C;
	// bl 0x823380c8
	ctx.lr = 0x8236845C;
	sub_823380C8(ctx, base);
loc_8236845C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82368744
	if (ctx.cr6.eq) goto loc_82368744;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r23,1
	r23.s64 = 1;
	// bl 0x82367110
	ctx.lr = 0x82368474;
	sub_82367110(ctx, base);
	// b 0x82368744
	goto loc_82368744;
loc_82368478:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82367110
	ctx.lr = 0x82368484;
	sub_82367110(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368744
	if (ctx.cr6.eq) goto loc_82368744;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_82368494:
	// clrlwi r29,r24,31
	r29.u64 = r24.u32 & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823684d0
	if (ctx.cr6.eq) goto loc_823684D0;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x823684c8
	if (!ctx.cr0.lt) goto loc_823684C8;
	// bl 0x823380c8
	ctx.lr = 0x823684C8;
	sub_823380C8(ctx, base);
loc_823684C8:
	// stb r31,0(r30)
	REX_STORE_U8(r30.u32 + 0, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823684D0:
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(r29.s32, r24.s32, ctx.xer);
	// bge cr6,0x82368744
	if (!ctx.cr6.lt) goto loc_82368744;
	// subf r11,r29,r24
	ctx.r11.u64 = r24.u64 - r29.u64;
	// li r28,1
	r28.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_823684EC:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368514
	if (!ctx.cr0.lt) goto loc_82368514;
	// bl 0x823380c8
	ctx.lr = 0x82368514;
	sub_823380C8(ctx, base);
loc_82368514:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8236859c
	if (ctx.cr6.eq) goto loc_8236859C;
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368544
	if (!ctx.cr0.lt) goto loc_82368544;
	// bl 0x823380c8
	ctx.lr = 0x82368544;
	sub_823380C8(ctx, base);
loc_82368544:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82368558
	if (ctx.cr6.eq) goto loc_82368558;
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x823685a4
	goto loc_823685A4;
loc_82368558:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368580
	if (!ctx.cr0.lt) goto loc_82368580;
	// bl 0x823380c8
	ctx.lr = 0x82368580;
	sub_823380C8(ctx, base);
loc_82368580:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82368594
	if (ctx.cr6.eq) goto loc_82368594;
	// stb r19,0(r30)
	REX_STORE_U8(r30.u32 + 0, r19.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x823685a4
	goto loc_823685A4;
loc_82368594:
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x823685a0
	goto loc_823685A0;
loc_8236859C:
	// stb r19,0(r30)
	REX_STORE_U8(r30.u32 + 0, r19.u8);
loc_823685A0:
	// stbu r19,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r19.u8);
	r30.u32 = ea;
loc_823685A4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x823684ec
	if (!ctx.cr0.eq) goto loc_823684EC;
	// b 0x82368744
	goto loc_82368744;
loc_823685B4:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x823685dc
	if (!ctx.cr0.lt) goto loc_823685DC;
	// bl 0x823380c8
	ctx.lr = 0x823685DC;
	sub_823380C8(ctx, base);
loc_823685DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82368694
	if (ctx.cr6.eq) goto loc_82368694;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82368744
	if (!ctx.cr6.gt) goto loc_82368744;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_823685F0:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x82368618
	if (!ctx.cr0.lt) goto loc_82368618;
	// bl 0x823380c8
	ctx.lr = 0x82368618;
	sub_823380C8(ctx, base);
loc_82368618:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8236866c
	if (ctx.cr6.eq) goto loc_8236866C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82368684
	if (!ctx.cr6.gt) goto loc_82368684;
	// subf r28,r26,r30
	r28.u64 = r30.u64 - r26.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82368630:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82368658
	if (!ctx.cr0.lt) goto loc_82368658;
	// bl 0x823380c8
	ctx.lr = 0x82368658;
	sub_823380C8(ctx, base);
loc_82368658:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stbux r11,r28,r26
	ea = r28.u32 + r26.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r28.u32 = ea;
	// bne 0x82368630
	if (!ctx.cr0.eq) goto loc_82368630;
	// b 0x82368684
	goto loc_82368684;
loc_8236866C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82368684
	if (!ctx.cr6.gt) goto loc_82368684;
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_8236867C:
	// stbux r19,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	REX_STORE_U8(ea, r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8236867c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236867C;
loc_82368684:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x823685f0
	if (!ctx.cr0.eq) goto loc_823685F0;
	// b 0x82368744
	goto loc_82368744;
loc_82368694:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82368744
	if (!ctx.cr6.gt) goto loc_82368744;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_823686A0:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// bge 0x823686c8
	if (!ctx.cr0.lt) goto loc_823686C8;
	// bl 0x823380c8
	ctx.lr = 0x823686C8;
	sub_823380C8(ctx, base);
loc_823686C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8236871c
	if (ctx.cr6.eq) goto loc_8236871C;
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82368738
	if (!ctx.cr6.gt) goto loc_82368738;
loc_823686DC:
	// lwz r3,84(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82368704
	if (!ctx.cr0.lt) goto loc_82368704;
	// bl 0x823380c8
	ctx.lr = 0x82368704;
	sub_823380C8(ctx, base);
loc_82368704:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// stbx r11,r30,r31
	REX_STORE_U8(r30.u32 + r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// blt cr6,0x823686dc
	if (ctx.cr6.lt) goto loc_823686DC;
	// b 0x82368738
	goto loc_82368738;
loc_8236871C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82368738
	if (!ctx.cr6.gt) goto loc_82368738;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_8236872C:
	// stbx r19,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r19.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8236872c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236872C;
loc_82368738:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x823686a0
	if (!ctx.cr0.eq) goto loc_823686A0;
loc_82368744:
	// lwz r10,22344(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 22344);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823687f4
	if (ctx.cr6.eq) goto loc_823687F4;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82368828
	if (!ctx.cr6.gt) goto loc_82368828;
loc_8236875C:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823687e4
	if (!ctx.cr6.gt) goto loc_823687E4;
	// subfic r8,r26,1
	ctx.xer.ca = r26.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - r26.u64;
loc_8236876C:
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823687bc
	if (ctx.cr0.eq) goto loc_823687BC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82368788
	if (!ctx.cr6.eq) goto loc_82368788;
	// lbz r11,-1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x823687c0
	goto loc_823687C0;
loc_82368788:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823687a0
	if (!ctx.cr6.eq) goto loc_823687A0;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x823687c0
	goto loc_823687C0;
loc_823687A0:
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// lbz r4,-1(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823687c0
	if (ctx.cr6.eq) goto loc_823687C0;
loc_823687BC:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_823687C0:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x8236876c
	if (ctx.cr6.lt) goto loc_8236876C;
loc_823687E4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r22.s32, ctx.xer);
	// blt cr6,0x8236875c
	if (ctx.cr6.lt) goto loc_8236875C;
	// b 0x82368828
	goto loc_82368828;
loc_823687F4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82368828
	if (ctx.cr6.eq) goto loc_82368828;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82368828
	if (!ctx.cr6.gt) goto loc_82368828;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8236880C:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8236880c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236880C;
loc_82368828:
	// lwz r11,140(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 140);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,136(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 136);
	// li r22,3
	r22.s64 = 3;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lwz r20,22344(r25)
	r20.u64 = REX_LOAD_U32(r25.u32 + 22344);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r24,r10,32768
	r24.u64 = ctx.r10.u64 | 32768;
	// subf r23,r7,r9
	r23.u64 = ctx.r9.u64 - ctx.r7.u64;
	// ble 0x82368c84
	if (!ctx.cr0.gt) goto loc_82368C84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
loc_82368860:
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82368a94
	if (!ctx.cr6.gt) goto loc_82368A94;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82368870:
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368a28
	if (!ctx.cr6.eq) goto loc_82368A28;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = r25.u32 > 4294944947;
	ctx.r11.s64 = r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82368898
	if (!ctx.cr0.eq) goto loc_82368898;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// b 0x823689c0
	goto loc_823689C0;
loc_82368898:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82368984
	if (ctx.cr6.lt) goto loc_82368984;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8236897c
	if (!ctx.cr6.lt) goto loc_8236897C;
loc_823688E4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82368910
	if (ctx.cr6.lt) goto loc_82368910;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82368900;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823688e4
	if (ctx.cr6.eq) goto loc_823688E4;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x823689bc
	goto loc_823689BC;
loc_82368910:
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
loc_8236897C:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x823689bc
	goto loc_823689BC;
loc_82368984:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8236898C;
	sub_82337F50(ctx, base);
loc_8236898C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82337f50
	ctx.lr = 0x823689A4;
	sub_82337F50(ctx, base);
	// add r10,r29,r24
	ctx.r10.u64 = r29.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8236898c
	if (ctx.cr6.lt) goto loc_8236898C;
loc_823689BC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_823689C0:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// rlwimi r9,r11,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r8,r10,31,0,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r21
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwimi r4,r7,31,0,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x80000000) | (ctx.r4.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r4,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r4.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwimi r10,r6,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82368a80
	goto loc_82368A80;
loc_82368A28:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// oris r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 2147483648;
	// stwx r5,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r5.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r21
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// oris r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 2147483648;
loc_82368A80:
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// stwx r10,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r10.u32);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(r27.s32, r23.s32, ctx.xer);
	// blt cr6,0x82368870
	if (ctx.cr6.lt) goto loc_82368870;
loc_82368A94:
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368c68
	if (ctx.cr6.eq) goto loc_82368C68;
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368c30
	if (!ctx.cr6.eq) goto loc_82368C30;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = r25.u32 > 4294944947;
	ctx.r11.s64 = r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82368acc
	if (!ctx.cr0.eq) goto loc_82368ACC;
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// b 0x82368bf0
	goto loc_82368BF0;
loc_82368ACC:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82368bb8
	if (ctx.cr6.lt) goto loc_82368BB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82368bb0
	if (!ctx.cr6.lt) goto loc_82368BB0;
loc_82368B18:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82368b44
	if (ctx.cr6.lt) goto loc_82368B44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82368B34;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82368b18
	if (ctx.cr6.eq) goto loc_82368B18;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82368bf0
	goto loc_82368BF0;
loc_82368B44:
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
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
loc_82368BB0:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82368bf0
	goto loc_82368BF0;
loc_82368BB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82368BC0;
	sub_82337F50(ctx, base);
loc_82368BC0:
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
	ctx.lr = 0x82368BD8;
	sub_82337F50(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82368bc0
	if (ctx.cr6.lt) goto loc_82368BC0;
loc_82368BF0:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r9.s64 = r30.s32 >> 2;
	// add r8,r27,r11
	ctx.r8.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwimi r7,r30,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r7,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r7.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwimi r5,r9,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r5,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r5.u32);
	// b 0x82368c68
	goto loc_82368C68;
loc_82368C30:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r9.u32);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// oris r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 2147483648;
	// stwx r6,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r6.u32);
loc_82368C68:
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// bne 0x82368860
	if (!ctx.cr0.eq) goto loc_82368860;
loc_82368C84:
	// lwz r11,140(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 140);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368fd8
	if (ctx.cr6.eq) goto loc_82368FD8;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82368e44
	if (!ctx.cr6.gt) goto loc_82368E44;
	// addi r11,r23,-1
	ctx.r11.s64 = r23.s64 + -1;
	// mr r28,r21
	r28.u64 = r21.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// rlwinm r26,r27,1,0,30
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82368CB4:
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368e20
	if (!ctx.cr6.eq) goto loc_82368E20;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = r25.u32 > 4294944947;
	ctx.r11.s64 = r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82368cdc
	if (!ctx.cr0.eq) goto loc_82368CDC;
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// b 0x82368e00
	goto loc_82368E00;
loc_82368CDC:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82368dc8
	if (ctx.cr6.lt) goto loc_82368DC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82368dc0
	if (!ctx.cr6.lt) goto loc_82368DC0;
loc_82368D28:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82368d54
	if (ctx.cr6.lt) goto loc_82368D54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82368D44;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82368d28
	if (ctx.cr6.eq) goto loc_82368D28;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82368e00
	goto loc_82368E00;
loc_82368D54:
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
loc_82368DC0:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82368e00
	goto loc_82368E00;
loc_82368DC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82368DD0;
	sub_82337F50(ctx, base);
loc_82368DD0:
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
	ctx.lr = 0x82368DE8;
	sub_82337F50(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82368dd0
	if (ctx.cr6.lt) goto loc_82368DD0;
loc_82368E00:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r9,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r9.u32);
	// b 0x82368e38
	goto loc_82368E38;
loc_82368E20:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r8,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r8.u32);
loc_82368E38:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// bne 0x82368cb4
	if (!ctx.cr0.eq) goto loc_82368CB4;
loc_82368E44:
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368fd8
	if (ctx.cr6.eq) goto loc_82368FD8;
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368fc0
	if (!ctx.cr6.eq) goto loc_82368FC0;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addic. r11,r25,22348
	ctx.xer.ca = r25.u32 > 4294944947;
	ctx.r11.s64 = r25.s64 + 22348;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82368e78
	if (!ctx.cr0.eq) goto loc_82368E78;
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// b 0x82368f9c
	goto loc_82368F9C;
loc_82368E78:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82368f64
	if (ctx.cr6.lt) goto loc_82368F64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82368f5c
	if (!ctx.cr6.lt) goto loc_82368F5C;
loc_82368EC4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82368ef0
	if (ctx.cr6.lt) goto loc_82368EF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82368EE0;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82368ec4
	if (ctx.cr6.eq) goto loc_82368EC4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82368f9c
	goto loc_82368F9C;
loc_82368EF0:
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
loc_82368F5C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82368f9c
	goto loc_82368F9C;
loc_82368F64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82368F6C;
	sub_82337F50(ctx, base);
loc_82368F6C:
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
	ctx.lr = 0x82368F84;
	sub_82337F50(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82368f6c
	if (ctx.cr6.lt) goto loc_82368F6C;
loc_82368F9C:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwimi r10,r30,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r10,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_82368FC0:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r9.u32);
loc_82368FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823A6358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823A6360;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a63bc
	if (!ctx.cr6.gt) goto loc_823A63BC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_823A636C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823a63a8
	if (!ctx.cr6.gt) goto loc_823A63A8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r30,r5,r3
	r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r29,r5,r7
	r29.u64 = ctx.r7.u64 - ctx.r5.u64;
loc_823A6384:
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
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823a6384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A6384;
loc_823A63A8:
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
	// bne 0x823a636c
	if (!ctx.cr0.eq) goto loc_823A636C;
loc_823A63BC:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823A7440) {
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
	ctx.lr = 0x823A7448;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// lwz r26,1776(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,1780(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mullw r11,r27,r5
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r24,r11,r4
	r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x823a74a4
	if (!ctx.cr6.eq) goto loc_823A74A4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823a74a0
	if (ctx.cr6.eq) goto loc_823A74A0;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwz r10,21968(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823a74a4
	if (ctx.cr6.eq) goto loc_823A74A4;
loc_823A74A0:
	// li r28,1
	r28.s64 = 1;
loc_823A74A4:
	// lwz r11,20684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a74d8
	if (ctx.cr6.eq) goto loc_823A74D8;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,1780(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// bl 0x8236d928
	ctx.lr = 0x823A74D4;
	sub_8236D928(ctx, base);
	// b 0x823a7500
	goto loc_823A7500;
loc_823A74D8:
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823a3e40
	ctx.lr = 0x823A7500;
	sub_823A3E40(ctx, base);
loc_823A7500:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823a7610
	if (ctx.cr6.eq) goto loc_823A7610;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x823a7610
	if (!ctx.cr6.eq) goto loc_823A7610;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r8,r27,r24
	ctx.r8.u64 = r24.u64 - r27.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + r26.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r4,-2(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// lhzx r6,r5,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + r26.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhzx r7,r5,r25
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + r25.u32);
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x823a755c
	if (!ctx.cr6.eq) goto loc_823A755C;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// b 0x823a7588
	goto loc_823A7588;
loc_823A755C:
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lhz r5,-2(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r3,r4,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r4.u64;
	// srawi r9,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xor r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// xor r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_823A7588:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x823a75a0
	if (!ctx.cr6.gt) goto loc_823A75A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
loc_823A75A0:
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x823a75c8
	if (!ctx.cr6.eq) goto loc_823A75C8;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// b 0x823a75ec
	goto loc_823A75EC;
loc_823A75C8:
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// srawi r4,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 31;
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_823A75EC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
loc_823A7610:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823B0A90) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltisw v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_set1_epi32(int(0x0)));
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823b07b0
	sub_823B07B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B0AC0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B0BB0) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0bf8
	if (ctx.cr6.eq) goto loc_823B0BF8;
	// bl 0x8233d4c0
	ctx.lr = 0x823B0BD4;
	sub_8233D4C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
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
loc_823B0BF8:
	// li r11,1
	ctx.r11.s64 = 1;
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

DEFINE_REX_FUNC(sub_823B11C8) {
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
	ctx.lr = 0x823B11D0;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,52(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r31,64(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r7,r11,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r29,r8,r30
	r29.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// mullw r26,r10,r30
	r26.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r26,1
	ctx.r8.u64 = __builtin_rotateleft32(r26.u32, 1);
	// divw r23,r7,r30
	r23.u64 = uint32_t((r30.s32 && !(ctx.r7.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r7.s32 / r30.s32 : 0);
	// rotlwi r9,r29,1
	ctx.r9.u64 = __builtin_rotateleft32(r29.u32, 1);
	// rlwinm r24,r11,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r7,r23,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r25,r11,r8
	r25.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// andc r22,r30,r10
	r22.u64 = r30.u64 & ~ctx.r10.u64;
	// mullw r28,r24,r4
	r28.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// srawi r21,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r21.s64 = r30.s32 >> 1;
	// mullw r10,r30,r4
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// divw r30,r29,r11
	r30.u64 = uint32_t((ctx.r11.s32 && !(r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r29.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r26,r26,r11
	r26.u64 = uint32_t((ctx.r11.s32 && !(r26.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r26.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r8,r28,r6
	ctx.r8.u64 = r28.u64 + ctx.r6.u64;
	// twlgei r25,-1
	if (r25.s32 == -1 || r25.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r22,-1
	if (r22.s32 == -1 || r22.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r25,r21
	temp.s64 = r21.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r21.u32;
	r25.s64 = temp.s64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// and r6,r7,r23
	ctx.r6.u64 = ctx.r7.u64 & r23.u64;
	// bge cr6,0x823b1314
	if (!ctx.cr6.lt) goto loc_823B1314;
	// subf r29,r4,r5
	r29.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_823B1284:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823b12d4
	if (!ctx.cr6.gt) goto loc_823B12D4;
	// addi r31,r8,2
	r31.s64 = ctx.r8.s64 + 2;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_823B1298:
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// clrlwi r23,r11,25
	r23.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// subfic r9,r23,128
	ctx.xer.ca = r23.u32 <= 128;
	ctx.r9.u64 = static_cast<uint64_t>(128) - r23.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r22,r7,r8
	r22.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lbzx r21,r31,r7
	r21.u64 = REX_LOAD_U8(r31.u32 + ctx.r7.u32);
	// mullw r7,r22,r9
	ctx.r7.s64 = int64_t(r22.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r21,r23
	ctx.r9.s64 = int64_t(r21.s32) * int64_t(r23.s32);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1298;
loc_823B12D4:
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b1308
	if (!ctx.cr6.lt) goto loc_823B1308;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_823B12E4:
	// srawi r7,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 6;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823b12e4
	if (ctx.cr6.lt) goto loc_823B12E4;
loc_823B1308:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// bne 0x823b1284
	if (!ctx.cr0.eq) goto loc_823B1284;
loc_823B1314:
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r30,r25,r4
	r30.s64 = int64_t(r25.s32) * int64_t(ctx.r4.s32);
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823b13cc
	if (!ctx.cr6.lt) goto loc_823B13CC;
	// subf r29,r4,r5
	r29.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_823B1348:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823b1398
	if (!ctx.cr6.gt) goto loc_823B1398;
	// addi r31,r9,4
	r31.s64 = ctx.r9.s64 + 4;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_823B135C:
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subfic r23,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	r23.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r21,r31,r8
	r21.u64 = REX_LOAD_U8(r31.u32 + ctx.r8.u32);
	// lbzx r22,r8,r9
	r22.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mullw r7,r21,r7
	ctx.r7.s64 = int64_t(r21.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r22,r23
	ctx.r8.s64 = int64_t(r22.s32) * int64_t(r23.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b135c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B135C;
loc_823B1398:
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// bge cr6,0x823b13c0
	if (!ctx.cr6.lt) goto loc_823B13C0;
	// subf r8,r26,r25
	ctx.r8.u64 = r25.u64 - r26.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823B13A8:
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// lbzx r8,r7,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823b13a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B13A8;
loc_823B13C0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// bne 0x823b1348
	if (!ctx.cr0.eq) goto loc_823B1348;
loc_823B13CC:
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bge cr6,0x823b1484
	if (!ctx.cr6.lt) goto loc_823B1484;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_823B1400:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823b1450
	if (!ctx.cr6.gt) goto loc_823B1450;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_823B1414:
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r3,r8,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subfic r8,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r8.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r31,r3,r9
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r3,r5,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// mullw r8,r31,r8
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r7,r3,r7
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1414;
loc_823B1450:
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// bge cr6,0x823b1478
	if (!ctx.cr6.lt) goto loc_823B1478;
	// subf r8,r26,r25
	ctx.r8.u64 = r25.u64 - r26.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823B1460:
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// lbzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stbu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823b1460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1460;
loc_823B1478:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// bne 0x823b1400
	if (!ctx.cr0.eq) goto loc_823B1400;
loc_823B1484:
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_823C0DD0) {
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
	ctx.lr = 0x823C0DD8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,340(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// srawi r11,r14,31
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r14.s32 >> 31;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r27,r14
	r27.u64 = r14.u64;
	// xor r10,r14,r11
	ctx.r10.u64 = r14.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c0e08
	if (ctx.cr6.eq) goto loc_823C0E08;
	// srawi r27,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r27.s64 = r14.s32 >> 1;
loc_823C0E08:
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// srawi r11,r24,31
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r24.s32 >> 31;
	// mr r28,r24
	r28.u64 = r24.u64;
	// xor r10,r24,r11
	ctx.r10.u64 = r24.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c0e28
	if (ctx.cr6.eq) goto loc_823C0E28;
	// srawi r28,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r28.s64 = r24.s32 >> 1;
loc_823C0E28:
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r17,324(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// subf r31,r9,r11
	r31.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r20,r7,16,0,15
	r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// divw r10,r31,r26
	ctx.r10.u64 = uint32_t((r26.s32 && !(r31.s32 == INT32_MIN && r26.s32 == -1)) ? r31.s32 / r26.s32 : 0);
	// subf r25,r9,r20
	r25.u64 = r20.u64 - ctx.r9.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rotlwi r30,r25,1
	r30.u64 = __builtin_rotateleft32(r25.u32, 1);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// lis r29,0
	r29.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r29,r29,32768
	r29.u64 = r29.u64 | 32768;
	// addi r23,r17,-1
	r23.s64 = r17.s64 + -1;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// andc r30,r23,r9
	r30.u64 = r23.u64 & ~ctx.r9.u64;
	// andc r31,r26,r31
	r31.u64 = r26.u64 & ~r31.u64;
	// subf r15,r29,r11
	r15.u64 = ctx.r11.u64 - r29.u64;
	// twllei r26,0
	if (r26.s32 == 0 || r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r9,r25,r23
	ctx.r9.u64 = uint32_t((r23.s32 && !(r25.s32 == INT32_MIN && r23.s32 == -1)) ? r25.s32 / r23.s32 : 0);
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r30,-1
	if (r30.s32 == -1 || r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r31,-1
	if (r31.s32 == -1 || r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r19,r27,1,0,30
	r19.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r28,1,0,30
	r22.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r21,r29
	r21.u64 = r29.u64;
	// cmpw cr6,r15,r29
	ctx.cr6.compare<int32_t>(r15.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c0f24
	if (ctx.cr6.lt) goto loc_823C0F24;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwz r27,364(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r18,r10,1,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// subf r23,r29,r11
	r23.u64 = ctx.r11.u64 - r29.u64;
loc_823C0EC0:
	// srawi r30,r21,17
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1FFFF) != 0);
	r30.s64 = r21.s32 >> 17;
	// li r31,0
	r31.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(r23.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c0f14
	if (ctx.cr6.lt) goto loc_823C0F14;
	// mullw r28,r30,r16
	r28.s64 = int64_t(r30.s32) * int64_t(r16.s32);
	// add r26,r28,r6
	r26.u64 = r28.u64 + ctx.r6.u64;
	// addi r25,r27,1
	r25.s64 = r27.s64 + 1;
	// rlwinm r24,r9,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C0EE4:
	// srawi r30,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	r30.s64 = ctx.r11.s32 >> 17;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// lbzx r30,r26,r30
	r30.u64 = REX_LOAD_U8(r26.u32 + r30.u32);
	// lbzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stbx r30,r25,r31
	REX_STORE_U8(r25.u32 + r31.u32, r30.u8);
	// stbx r4,r27,r31
	REX_STORE_U8(r27.u32 + r31.u32, ctx.r4.u8);
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// ble cr6,0x823c0ee4
	if (!ctx.cr6.gt) goto loc_823C0EE4;
	// lwz r24,348(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_823C0F14:
	// add r21,r18,r21
	r21.u64 = r18.u64 + r21.u64;
	// add r27,r27,r19
	r27.u64 = r27.u64 + r19.u64;
	// cmpw cr6,r21,r15
	ctx.cr6.compare<int32_t>(r21.s32, r15.s32, ctx.xer);
	// ble cr6,0x823c0ec0
	if (!ctx.cr6.gt) goto loc_823C0EC0;
loc_823C0F24:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c0f58
	if (!ctx.cr6.eq) goto loc_823C0F58;
	// clrlwi r11,r17,30
	ctx.r11.u64 = r17.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c0f58
	if (!ctx.cr6.eq) goto loc_823C0F58;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823c06f0
	ctx.lr = 0x823C0F50;
	sub_823C06F0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_823C0F58:
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpw cr6,r15,r29
	ctx.cr6.compare<int32_t>(r15.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c0fe4
	if (ctx.cr6.lt) goto loc_823C0FE4;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r25,r14,1,0,30
	r25.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + r20.u64;
	// subf r27,r29,r8
	r27.u64 = ctx.r8.u64 - r29.u64;
loc_823C0F7C:
	// add r11,r26,r10
	ctx.r11.u64 = r26.u64 + ctx.r10.u64;
	// srawi r7,r26,16
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = r26.s32 >> 16;
	// srawi r30,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r30.s64 = ctx.r11.s32 >> 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// blt cr6,0x823c0fd4
	if (ctx.cr6.lt) goto loc_823C0FD4;
	// lwz r6,308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r28,r3,r14
	r28.u64 = ctx.r3.u64 + r14.u64;
	// mullw r31,r7,r6
	r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r30,r6
	ctx.r7.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_823C0FB0:
	// srawi r7,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// lbzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r7.u32);
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// stbx r6,r3,r8
	REX_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r6.u8);
	// stbx r7,r28,r8
	REX_STORE_U8(r28.u32 + ctx.r8.u32, ctx.r7.u8);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// ble cr6,0x823c0fb0
	if (!ctx.cr6.gt) goto loc_823C0FB0;
loc_823C0FD4:
	// add r26,r5,r26
	r26.u64 = ctx.r5.u64 + r26.u64;
	// add r3,r25,r3
	ctx.r3.u64 = r25.u64 + ctx.r3.u64;
	// cmpw cr6,r26,r15
	ctx.cr6.compare<int32_t>(r26.s32, r15.s32, ctx.xer);
	// ble cr6,0x823c0f7c
	if (!ctx.cr6.gt) goto loc_823C0F7C;
loc_823C0FE4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823C6810) {
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
	ctx.lr = 0x823C6818;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r28,r8,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r4,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r4.u32);
	// add r31,r4,r8
	r31.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r28,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r28.u32);
	// rlwinm r8,r6,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r14,r11,r4
	r14.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r21,r28,r4
	r21.u64 = r28.u64 + ctx.r4.u64;
	// stw r9,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r29,0
	r29.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823c6980
	if (!ctx.cr6.gt) goto loc_823C6980;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// rlwinm r29,r27,4,0,27
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r24,r29,1
	r24.s64 = r29.s64 + 1;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_823C68A0:
	// addi r27,r5,-1
	r27.s64 = ctx.r5.s64 + -1;
	// lvrx128 v63,r23,r5
	temp.u32 = r23.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r8,-32
	r26.s64 = ctx.r8.s64 + -32;
	// vor128 v10,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r25,r8,-16
	r25.s64 = ctx.r8.s64 + -16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lvrx128 v61,r7,r27
	temp.u32 = ctx.r7.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrglb v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r27,r8,16
	r27.s64 = ctx.r8.s64 + 16;
	// vaddshs v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v8,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v1,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v31,v5,v9
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v30,v4,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v4,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v27,v31,v11
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v26,v30,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v25,v8,v2
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v24,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v10,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vpkshus v11,v22,v21
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vpkshus v9,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vmrghb v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v10,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v18,v8,v10
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmrglb v17,v8,v10
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmrghb v16,v12,v11
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v15,v12,v11
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v18,0,r26
	ea = r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvrx v18,r26,r7
	ea = r26.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v18.u8[i]);
	// stvlx v17,0,r25
	ea = r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvrx v17,r25,r7
	ea = r25.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v17.u8[i]);
	// stvlx v16,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvrx v16,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v16.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx v15,0,r27
	ea = r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvrx v15,r27,r7
	ea = r27.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v15.u8[i]);
	// bdnz 0x823c68a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C68A0;
loc_823C6980:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823c6a14
	if (!ctx.cr6.lt) goto loc_823C6A14;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r8,r24,r3
	ctx.r8.u64 = r24.u64 + ctx.r3.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r24,r4,1
	r24.s64 = ctx.r4.s64 + 1;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r23,r4,2
	r23.s64 = ctx.r4.s64 + 2;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r22,r4,3
	r22.s64 = ctx.r4.s64 + 3;
	// addi r26,r8,-1
	r26.s64 = ctx.r8.s64 + -1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823C69B0:
	// lbzx r19,r29,r3
	r19.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbzu r27,1(r26)
	ea = 1 + r26.u32;
	r27.u64 = REX_LOAD_U8(ea);
	r26.u32 = ea;
	// rotlwi r25,r19,1
	r25.u64 = __builtin_rotateleft32(r19.u32, 1);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rotlwi r27,r27,1
	r27.u64 = __builtin_rotateleft32(r27.u32, 1);
	// add r25,r19,r25
	r25.u64 = r19.u64 + r25.u64;
	// stbx r19,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, r19.u8);
	// add r27,r5,r27
	r27.u64 = ctx.r5.u64 + r27.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// add r25,r25,r5
	r25.u64 = r25.u64 + ctx.r5.u64;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + r19.u64;
	// add r8,r27,r8
	ctx.r8.u64 = r27.u64 + ctx.r8.u64;
	// srawi r27,r25,2
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3) != 0);
	r27.s64 = r25.s32 >> 2;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// clrlwi r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r27,r24,r11
	REX_STORE_U8(r24.u32 + ctx.r11.u32, r27.u8);
	// stbx r5,r23,r11
	REX_STORE_U8(r23.u32 + ctx.r11.u32, ctx.r5.u8);
	// mr r25,r19
	r25.u64 = r19.u64;
	// stbx r8,r22,r11
	REX_STORE_U8(r22.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c69b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C69B0;
loc_823C6A14:
	// lbzx r29,r29,r3
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r15,r3,r20
	r15.u64 = ctx.r3.u64 + r20.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// stbx r29,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, r29.u8);
	// stb r29,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, r29.u8);
	// stb r29,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, r29.u8);
	// stb r29,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, r29.u8);
	// bge cr6,0x823c7254
	if (!ctx.cr6.lt) goto loc_823C7254;
	// subf r11,r5,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r5.u64;
	// addi r8,r21,2
	ctx.r8.s64 = r21.s64 + 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r5,r31,r21
	ctx.r5.u64 = r21.u64 - r31.u64;
	// stw r8,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r8.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r5.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r10.u32);
loc_823C6A60:
	// rlwinm r10,r6,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// li r25,0
	r25.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c6f8c
	if (!ctx.cr6.gt) goto loc_823C6F8C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r3,r15,1
	ctx.r3.s64 = r15.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r14,16
	ctx.r5.s64 = r14.s64 + 16;
	// rlwinm r25,r11,4,0,27
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// addi r6,r25,1
	ctx.r6.s64 = r25.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// subf r26,r30,r31
	r26.u64 = r31.u64 - r30.u64;
	// stw r6,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r6.u32);
	// subf r24,r30,r9
	r24.u64 = ctx.r9.u64 - r30.u64;
	// subf r23,r30,r14
	r23.u64 = r14.u64 - r30.u64;
	// subf r22,r30,r4
	r22.u64 = ctx.r4.u64 - r30.u64;
	// subf r21,r31,r9
	r21.u64 = ctx.r9.u64 - r31.u64;
	// subf r20,r31,r14
	r20.u64 = r14.u64 - r31.u64;
	// subf r19,r31,r4
	r19.u64 = ctx.r4.u64 - r31.u64;
	// subf r18,r14,r9
	r18.u64 = ctx.r9.u64 - r14.u64;
	// subf r17,r14,r4
	r17.u64 = ctx.r4.u64 - r14.u64;
	// subf r16,r4,r9
	r16.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C6AD4:
	// addi r30,r3,-1
	r30.s64 = ctx.r3.s64 + -1;
	// lvlx128 v59,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r9,16
	ctx.r9.s64 = 16;
	// vor128 v8,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// addi r29,r10,-32
	r29.s64 = ctx.r10.s64 + -32;
	// addi r28,r10,-16
	r28.s64 = ctx.r10.s64 + -16;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r10,16
	r27.s64 = ctx.r10.s64 + 16;
	// lvrx128 v56,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v57,v56
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v54,r7,r30
	temp.u32 = ctx.r7.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v12,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrglb v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvrx128 v53,r9,r29
	temp.u32 = ctx.r9.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v49,r9,r28
	temp.u32 = ctx.r9.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v2,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvlx128 v52,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v51,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r7,r27
	temp.u32 = ctx.r7.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// vaddshs v3,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvlx128 v48,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrglb v1,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v4,v8
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v30,v11,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v29,v7,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v7,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v26,v6,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v29,v9
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v24,v10,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v23,v28,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v22,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v10,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v5,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v3,v51,v49
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vpkshus v9,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vor128 v24,v48,v50
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vpkshus v11,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmrghb v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v7,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v6,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v10,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v9,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v4,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v5,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v23,v6,v6
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v12,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmrglb v11,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vmrghb v10,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v21,v4,v4
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v9,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v22,v5,v5
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v8,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v7,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v3,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v25,v13,v24
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v17,v8,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrghb v31,v13,v11
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v16,v7,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v30,v13,v11
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v29,v13,v10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v20,v3,v3
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrglb v28,v13,v10
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v27,v13,v9
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v26,v13,v9
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v24,v13,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r6,r1,-320
	ctx.r6.s64 = ctx.r1.s64 + -320;
	// vaddshs v14,v24,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// addi r29,r1,-288
	r29.s64 = ctx.r1.s64 + -288;
	// vaddshs v15,v25,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v18,v26,v26
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// addi r30,r1,-256
	r30.s64 = ctx.r1.s64 + -256;
	// vor128 v47,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// addi r28,r1,-272
	r28.s64 = ctx.r1.s64 + -272;
	// vor128 v46,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// std r15,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, r15.u64);
	// stvx128 v14,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-304
	ctx.r6.s64 = ctx.r1.s64 + -304;
	// vaddshs v9,v23,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v15,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r6.u32);
	// vaddshs v13,v22,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v18,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// vaddshs v19,v29,v29
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// vaddshs v14,v9,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stw r29,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, r29.u32);
	// vaddshs v15,v13,v7
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r27,r1,-320
	r27.s64 = ctx.r1.s64 + -320;
	// vaddshs v18,v27,v27
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// std r11,-344(r1)
	REX_STORE_U64(ctx.r1.u32 + -344, ctx.r11.u64);
	// stvx128 v19,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v28,v28
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsrah v13,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r30,r8,-48
	r30.s64 = ctx.r8.s64 + -48;
	// vsrah v15,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// std r31,-360(r1)
	REX_STORE_U64(ctx.r1.u32 + -360, r31.u64);
	// stvx128 v18,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v43,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// stvx128 v19,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v42,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// std r25,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r25.u64);
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// vpkshus128 v45,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// vaddshs v14,v30,v30
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r28,r1,-272
	r28.s64 = ctx.r1.s64 + -272;
	// vaddshs v23,v23,v17
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// addi r25,r1,-304
	r25.s64 = ctx.r1.s64 + -304;
	// vaddshs v9,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v19,v2,v2
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stw r9,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r9.u32);
	// vaddshs v13,v20,v14
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// addi r29,r8,-32
	r29.s64 = ctx.r8.s64 + -32;
	// lvx128 v12,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v21,v4
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v18,v1,v1
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r9,r26,r10
	ctx.r9.u64 = r26.u64 + ctx.r10.u64;
	// lwz r15,-384(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// vor128 v44,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vaddshs v15,v19,v2
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r6,r4,r16
	ctx.r6.u64 = ctx.r4.u64 + r16.u64;
	// vaddshs v20,v20,v31
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// lwz r27,-392(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// vaddshs v10,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v12,v12,v24
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// lvx128 v11,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// stvlx128 v45,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// vaddshs v11,v11,v25
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvrx128 v45,r30,r7
	ea = r30.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v45.u8[i]);
	// addi r30,r1,-224
	r30.s64 = ctx.r1.s64 + -224;
	// lvx128 v25,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v22,v16
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v10,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v15,v15,v29
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v23,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v11,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v23,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-192
	r27.s64 = ctx.r1.s64 + -192;
	// vaddshs v12,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// stvx128 v20,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// vor128 v39,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor128 v40,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// lvx128 v24,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v10,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r27,r8,r19
	r27.u64 = ctx.r8.u64 + r19.u64;
	// vaddshs v15,v31,v31
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvx128 v22,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v9,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v22,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v12,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lwz r28,-400(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// vsrah v11,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v38,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vpkshus128 v37,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// lvx128 v9,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r5,r17
	r30.u64 = ctx.r5.u64 + r17.u64;
	// vsrah v9,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v34,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v13,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stw r30,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, r30.u32);
	// vaddshs v19,v19,v23
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v18,v18,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// addi r30,r5,-16
	r30.s64 = ctx.r5.s64 + -16;
	// vaddshs v16,v16,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v12,v25,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsrah v19,v19,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v17,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v15,v31
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsrah v2,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v32,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v30,v14,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v14,v23,v29
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v29,v20,v26
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus128 v36,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v10,v21,v15
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v1,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v22,v28
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsrah v1,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v21,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v21,v27
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsrah v11,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v10,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v37,r0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// vaddshs v7,v10,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vpkshus128 v35,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvrx128 v37,r29,r7
	ea = r29.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// stvlx128 v36,r26,r10
	ea = r26.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// vaddshs v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vpkshus128 v33,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx128 v36,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// add r9,r18,r5
	ctx.r9.u64 = r18.u64 + ctx.r5.u64;
	// stvlx128 v34,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvrx128 v34,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v34.u8[i]);
	// vsrah v27,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r29,r10,r22
	r29.u64 = ctx.r10.u64 + r22.u64;
	// vor128 v1,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// lwz r28,-392(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// stvlx128 v35,r4,r16
	ea = ctx.r4.u32 + r16.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// vor128 v2,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// stvrx128 v35,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// vaddshs v31,v6,v8
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvlx128 v33,r18,r5
	ea = r18.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// add r6,r20,r8
	ctx.r6.u64 = r20.u64 + ctx.r8.u64;
	// stvrx128 v33,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v33.u8[i]);
	// add r9,r24,r10
	ctx.r9.u64 = r24.u64 + ctx.r10.u64;
	// stvlx128 v32,r24,r10
	ea = r24.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// vaddshs v23,v3,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v22,v4,v17
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stw r29,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, r29.u32);
	// vaddshs v21,v1,v15
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vpkshus128 v63,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v20,v2,v14
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// stvrx128 v32,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v32.u8[i]);
	// add r9,r21,r8
	ctx.r9.u64 = r21.u64 + ctx.r8.u64;
	// vsrah v19,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v24,v40,v40
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// stw r27,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, r27.u32);
	// vor128 v25,v41,v41
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvlx128 v63,r21,r8
	ea = r21.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vsrah v18,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v63,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// vsrah v15,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r9,r23,r10
	ctx.r9.u64 = r23.u64 + ctx.r10.u64;
	// vaddshs v17,v24,v29
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// ld r11,-344(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -344);
	// vaddshs v16,v25,v28
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// ld r31,-360(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -360);
	// vsrah v14,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsrah v8,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r25,-336(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// vsrah v7,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r15,-352(r1)
	r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// vsrah v6,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// vsrah v5,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v61,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vor128 v12,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vpkshus128 v60,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vor128 v11,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// stvlx128 v62,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vor128 v10,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vpkshus128 v59,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvrx128 v62,r30,r7
	ea = r30.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// vor128 v9,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vor128 v13,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// stvlx128 v61,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r23,r10
	ea = r23.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// lwz r9,-384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// stvlx128 v59,r20,r8
	ea = r20.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// lwz r6,-392(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// stvlx v12,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stvlx v11,r5,r17
	ea = ctx.r5.u32 + r17.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// stvrx v11,r28,r7
	ea = r28.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// stvlx v10,r10,r22
	ea = ctx.r10.u32 + r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx v10,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// stvlx v9,r8,r19
	ea = ctx.r8.u32 + r19.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvrx v9,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// bdnz 0x823c6ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C6AD4;
	// lwz r28,-364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r9,-372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r30,-380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r4,-388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// lwz r8,-376(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// lwz r5,-368(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
loc_823C6F8C:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823c717c
	if (!ctx.cr6.lt) goto loc_823C717C;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r19,r30,1
	r19.s64 = r30.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r10,r4,r15
	ctx.r10.u64 = ctx.r4.u64 + r15.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C6FB4:
	// addi r9,r19,1
	ctx.r9.s64 = r19.s64 + 1;
	// lbzx r18,r25,r15
	r18.u64 = REX_LOAD_U8(r25.u32 + r15.u32);
	// lbzu r4,1(r24)
	ea = 1 + r24.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	r24.u32 = ea;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rotlwi r3,r18,1
	ctx.r3.u64 = __builtin_rotateleft32(r18.u32, 1);
	// lbzx r6,r19,r11
	ctx.r6.u64 = REX_LOAD_U8(r19.u32 + ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rotlwi r4,r4,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lbzx r27,r9,r11
	r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r9,r19,2
	ctx.r9.s64 = r19.s64 + 2;
	// add r26,r18,r3
	r26.u64 = r18.u64 + ctx.r3.u64;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r3,r5,r26
	ctx.r3.u64 = ctx.r5.u64 + r26.u64;
	// add r5,r5,r18
	ctx.r5.u64 = ctx.r5.u64 + r18.u64;
	// lbzx r22,r9,r11
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r9,r31,r30
	ctx.r9.u64 = r30.u64 - r31.u64;
	// add r20,r4,r18
	r20.u64 = ctx.r4.u64 + r18.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// lbzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// add r21,r29,r4
	r21.u64 = r29.u64 + ctx.r4.u64;
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// add r23,r9,r5
	r23.u64 = ctx.r9.u64 + ctx.r5.u64;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// add r4,r23,r18
	ctx.r4.u64 = r23.u64 + r18.u64;
	// add r9,r21,r5
	ctx.r9.u64 = r21.u64 + ctx.r5.u64;
	// srawi r23,r20,2
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x3) != 0);
	r23.s64 = r20.s32 >> 2;
	// mr r28,r27
	r28.u64 = r27.u64;
	// rotlwi r3,r27,1
	ctx.r3.u64 = __builtin_rotateleft32(r27.u32, 1);
	// srawi r21,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	r21.s64 = ctx.r4.s32 >> 2;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r27.s64 = ctx.r9.s32 >> 2;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// stbx r21,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, r21.u8);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// add r20,r28,r3
	r20.u64 = r28.u64 + ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r3,r20,r4
	ctx.r3.u64 = r20.u64 + ctx.r4.u64;
	// stbx r6,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// mr r27,r22
	r27.u64 = r22.u64;
	// rotlwi r22,r22,1
	r22.u64 = __builtin_rotateleft32(r22.u32, 1);
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// srawi r6,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 2;
	// clrlwi r3,r23,16
	ctx.r3.u64 = r23.u32 & 0xFFFF;
	// add r23,r27,r22
	r23.u64 = r27.u64 + r22.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stbx r6,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r23,r23,r3
	r23.u64 = r23.u64 + ctx.r3.u64;
	// addi r9,r31,3
	ctx.r9.s64 = r31.s64 + 3;
	// srawi r6,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r6.s64 = r23.s32 >> 2;
	// rlwinm r23,r5,1,15,30
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FFFE;
	// add r22,r30,r18
	r22.u64 = r30.u64 + r18.u64;
	// add r8,r5,r23
	ctx.r8.u64 = ctx.r5.u64 + r23.u64;
	// stbx r6,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// srawi r6,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r6.s64 = r22.s32 >> 1;
	// lwz r9,-372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// add r23,r8,r29
	r23.u64 = ctx.r8.u64 + r29.u64;
	// add r29,r5,r29
	r29.u64 = ctx.r5.u64 + r29.u64;
	// subf r8,r31,r9
	ctx.r8.u64 = ctx.r9.u64 - r31.u64;
	// add r22,r4,r28
	r22.u64 = ctx.r4.u64 + r28.u64;
	// add r21,r3,r27
	r21.u64 = ctx.r3.u64 + r27.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stbx r6,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// srawi r29,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r29.s64 = r22.s32 >> 1;
	// srawi r26,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r26.s64 = r21.s32 >> 1;
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// stbx r6,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// clrlwi r22,r30,24
	r22.u64 = r30.u32 & 0xFF;
	// srawi r23,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	r23.s64 = r23.s32 >> 2;
	// rlwinm r30,r3,1,15,30
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// clrlwi r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	// subf r6,r31,r14
	ctx.r6.u64 = r14.u64 - r31.u64;
	// stbx r29,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r29.u8);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// clrlwi r23,r23,24
	r23.u64 = r23.u32 & 0xFF;
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// clrlwi r29,r5,24
	r29.u64 = ctx.r5.u32 & 0xFF;
	// lwz r5,-368(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// clrlwi r27,r4,24
	r27.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stbx r26,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r26.u8);
	// rlwinm r8,r4,1,15,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// stbx r22,r10,r6
	REX_STORE_U8(ctx.r10.u32 + ctx.r6.u32, r22.u8);
	// addi r6,r14,1
	ctx.r6.s64 = r14.s64 + 1;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// addi r8,r14,2
	ctx.r8.s64 = r14.s64 + 2;
	// srawi r28,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	r28.s64 = r28.s32 >> 2;
	// stbx r23,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, r23.u8);
	// srawi r6,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r6.s64 = r30.s32 >> 2;
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// stbx r30,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r30.u8);
	// addi r8,r14,3
	ctx.r8.s64 = r14.s64 + 3;
	// lwz r30,-380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// stbx r6,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// lwz r8,-376(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// stbx r18,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r18.u8);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// stbx r27,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r27.u8);
	// stbx r29,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, r29.u8);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stbx r3,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c6fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C6FB4;
	// lwz r28,-364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
loc_823C717C:
	// lbzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lbzx r25,r25,r15
	r25.u64 = REX_LOAD_U8(r25.u32 + r15.u32);
	// add r26,r5,r11
	r26.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r24,-396(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// rotlwi r29,r3,1
	r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r23,68(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// rotlwi r27,r25,1
	r27.u64 = __builtin_rotateleft32(r25.u32, 1);
	// add r29,r4,r29
	r29.u64 = ctx.r4.u64 + r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r4,r27,r4
	ctx.r4.u64 = r27.u64 + ctx.r4.u64;
	// srawi r29,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r29.s64 = r29.s32 >> 2;
	// srawi r27,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r27.s64 = ctx.r3.s32 >> 1;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// clrlwi r21,r27,24
	r21.u64 = r27.u32 & 0xFF;
	// clrlwi r22,r29,24
	r22.u64 = r29.u32 & 0xFF;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r11,r14
	r29.u64 = ctx.r11.u64 + r14.u64;
	// stbx r22,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, r22.u8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stb r22,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r22.u8);
	// add r4,r26,r31
	ctx.r4.u64 = r26.u64 + r31.u64;
	// stb r22,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r22.u8);
	// stb r22,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, r22.u8);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// stbx r21,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r21.u8);
	// addic. r27,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r27.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// stb r21,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, r21.u8);
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// stb r21,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, r21.u8);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// stb r21,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r21.u8);
	// stbx r10,r11,r14
	REX_STORE_U8(ctx.r11.u32 + r14.u32, ctx.r10.u8);
	// mr r26,r25
	r26.u64 = r25.u64;
	// stb r10,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r10.u8);
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// stb r10,2(r29)
	REX_STORE_U8(r29.u32 + 2, ctx.r10.u8);
	// add r15,r15,r23
	r15.u64 = r15.u64 + r23.u64;
	// stb r10,3(r29)
	REX_STORE_U8(r29.u32 + 3, ctx.r10.u8);
	// add r14,r28,r14
	r14.u64 = r28.u64 + r14.u64;
	// stw r27,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, r27.u32);
	// stw r30,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, r30.u32);
	// stw r9,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r9.u32);
	// stw r8,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r8.u32);
	// stb r25,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r25.u8);
	// stb r25,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, r25.u8);
	// stb r25,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, r25.u8);
	// stb r25,3(r4)
	REX_STORE_U8(ctx.r4.u32 + 3, r25.u8);
	// bne 0x823c6a60
	if (!ctx.cr0.eq) goto loc_823C6A60;
loc_823C7254:
	// rlwinm r11,r6,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823c72cc
	if (!ctx.cr6.gt) goto loc_823C72CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// subf r8,r31,r9
	ctx.r8.u64 = ctx.r9.u64 - r31.u64;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r31,r14
	ctx.r5.u64 = r14.u64 - r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
loc_823C7294:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvlx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r8,r11
	r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r27,r5,r11
	r27.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lvrx128 v57,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v56,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvlx128 v56,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvrx128 v56,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// stvlx128 v56,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvrx128 v56,r28,r7
	ea = r28.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// stvlx128 v56,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v56,r27,r7
	ea = r27.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// bdnz 0x823c7294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7294;
loc_823C72CC:
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823c7308
	if (!ctx.cr6.lt) goto loc_823C7308;
	// subf r10,r3,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// subf r8,r31,r30
	ctx.r8.u64 = r30.u64 - r31.u64;
	// subf r7,r31,r9
	ctx.r7.u64 = ctx.r9.u64 - r31.u64;
	// subf r6,r31,r14
	ctx.r6.u64 = r14.u64 - r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_823C72F0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c72f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C72F0;
loc_823C7308:
	// lbzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r30.u32);
	// stbx r11,r29,r31
	REX_STORE_U8(r29.u32 + r31.u32, ctx.r11.u8);
	// stbx r11,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r29,r14
	REX_STORE_U8(r29.u32 + r14.u32, ctx.r11.u8);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8240ACB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8240acfc
	if (ctx.cr6.eq) goto loc_8240ACFC;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r31,r11,30,2,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x8240ad0c
	goto loc_8240AD0C;
loc_8240ACFC:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r31,r11,0,0,26
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_8240AD0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,22352
	ctx.r11.s64 = ctx.r11.s64 + 22352;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rotlwi r30,r11,1
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x823ce008
	ctx.lr = 0x8240AD2C;
	sub_823CE008(ctx, base);
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,1880
	ctx.r3.s64 = ctx.r11.s64 + 1880;
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

DEFINE_REX_FUNC(sub_8240F710) {
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
	ctx.lr = 0x8240F718;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240f754
	if (ctx.cr0.eq) goto loc_8240F754;
loc_8240F748:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8240f8b4
	goto loc_8240F8B4;
loc_8240F754:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,68(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r5,64(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240f748
	if (!ctx.cr0.eq) goto loc_8240F748;
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addis r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -438304768;
	// addic. r10,r10,-82
	ctx.xer.ca = ctx.r10.u32 > 81;
	ctx.r10.s64 = ctx.r10.s64 + -82;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240f7b4
	if (ctx.cr0.eq) goto loc_8240F7B4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8240f8bc
	if (ctx.cr6.eq) goto loc_8240F8BC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8240f8bc
	if (ctx.cr6.eq) goto loc_8240F8BC;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// beq cr6,0x8240f7b4
	if (ctx.cr6.eq) goto loc_8240F7B4;
	// cmplwi cr6,r10,41
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 41, ctx.xer);
	// bne cr6,0x8240f748
	if (!ctx.cr6.eq) goto loc_8240F748;
loc_8240F7B4:
	// li r10,8
	ctx.r10.s64 = 8;
loc_8240F7B8:
	// lwz r6,4(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 4);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r30,r8,30,2,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,76(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mullw r8,r7,r5
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,64(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r29,96(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r28,100(r6)
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r27,76(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 76);
	// lwz r24,60(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// lwz r23,104(r6)
	r23.u64 = REX_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r22,112(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r6,r28,r27
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// mullw r31,r3,r31
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// rlwinm r29,r24,30,2,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// mullw r3,r29,r10
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r30,r10
	ctx.r4.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r23,30,2,31
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r24,r31,r10
	r24.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// add r28,r6,r5
	r28.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r27,r8,r7
	r27.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// ble cr6,0x8240f8b0
	if (!ctx.cr6.gt) goto loc_8240F8B0;
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
loc_8240F844:
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240f890
	if (ctx.cr6.eq) goto loc_8240F890;
loc_8240F858:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8240F868;
	sub_822D4FA0(ctx, base);
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r7,96(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r29,r8,r29
	r29.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240f858
	if (ctx.cr6.lt) goto loc_8240F858;
loc_8240F890:
	// lwz r7,100(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r8,100(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,112(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// add r28,r7,r28
	r28.u64 = ctx.r7.u64 + r28.u64;
	// add r27,r8,r27
	r27.u64 = ctx.r8.u64 + r27.u64;
	// cmplw cr6,r25,r6
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8240f844
	if (ctx.cr6.lt) goto loc_8240F844;
loc_8240F8B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240F8B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8240F8BC:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8240f7b8
	goto loc_8240F7B8;
}

DEFINE_REX_FUNC(sub_82416B58) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82416B60;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82416b98
	if (ctx.cr6.eq) goto loc_82416B98;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82416B94;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82416B98:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82416bb4
	if (ctx.cr6.eq) goto loc_82416BB4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82416BB0;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82416BB4:
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
	// fmr f29,f31
	f29.f64 = f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r24,r9,r5
	r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82416c20
	if (!ctx.cr0.eq) goto loc_82416C20;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82416c28
	goto loc_82416C28;
loc_82416C20:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82416C28:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82416c40
	if (ctx.cr6.eq) goto loc_82416C40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82416C40;
	sub_823DC658(ctx, base);
loc_82416C40:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82416f08
	if (!ctx.cr6.gt) goto loc_82416F08;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f10,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f0,-13044(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,2028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2028);
	ctx.f6.f64 = double(temp.f32);
loc_82416CA4:
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
	// beq cr6,0x82416e54
	if (ctx.cr6.eq) goto loc_82416E54;
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
loc_82416E54:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82416e64
	if (ctx.cr6.lt) goto loc_82416E64;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82416E64:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82416e7c
	if (!ctx.cr6.gt) goto loc_82416E7C;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x82416e80
	if (ctx.cr6.lt) goto loc_82416E80;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x82416e80
	goto loc_82416E80;
loc_82416E7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82416E80:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82416e90
	if (ctx.cr6.lt) goto loc_82416E90;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82416E90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82416ea8
	if (!ctx.cr6.gt) goto loc_82416EA8;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x82416eac
	if (ctx.cr6.lt) goto loc_82416EAC;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x82416eac
	goto loc_82416EAC;
loc_82416EA8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82416EAC:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82416ebc
	if (ctx.cr6.lt) goto loc_82416EBC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82416EBC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82416ed4
	if (!ctx.cr6.gt) goto loc_82416ED4;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x82416ed8
	if (ctx.cr6.lt) goto loc_82416ED8;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x82416ed8
	goto loc_82416ED8;
loc_82416ED4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82416ED8:
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stwux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82416ca4
	if (ctx.cr6.lt) goto loc_82416CA4;
loc_82416F08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82420FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-18736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82421368) {
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
	ctx.lr = 0x82421370;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824213b0
	if (!ctx.cr6.eq) goto loc_824213B0;
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
	// li r7,3654
	ctx.r7.s64 = 3654;
	// bl 0x8240e308
	ctx.lr = 0x824213B0;
	sub_8240E308(ctx, base);
loc_824213B0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412c68
	ctx.lr = 0x824213C0;
	sub_82412C68(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82421408
	if (ctx.cr6.eq) goto loc_82421408;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421408
	if (ctx.cr6.eq) goto loc_82421408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x824213DC;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,288(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// bctrl 
	ctx.lr = 0x82421408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421408:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824245F0) {
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
	ctx.lr = 0x824245F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,172(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82424674
	if (ctx.cr6.eq) goto loc_82424674;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82424674
	if (ctx.cr0.eq) goto loc_82424674;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// beq 0x8242465c
	if (ctx.cr0.eq) goto loc_8242465C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-17024
	ctx.r6.s64 = ctx.r11.s64 + -17024;
	// addi r5,r10,-15632
	ctx.r5.s64 = ctx.r10.s64 + -15632;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,2813
	ctx.r7.s64 = 2813;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8242465C;
	sub_8240E308(ctx, base);
loc_8242465C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x8242a1c0
	ctx.lr = 0x82424668;
	sub_8242A1C0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// b 0x82424688
	goto loc_82424688;
loc_82424674:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r11,-17044(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -17044);
loc_82424688:
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423d10
	ctx.lr = 0x824246A0;
	sub_82423D10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82427F80) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x82427F88;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82427798
	ctx.lr = 0x82427F9C;
	sub_82427798(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r11,r11,-5692
	ctx.r11.s64 = ctx.r11.s64 + -5692;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r5,r10,12048
	ctx.r5.s64 = ctx.r10.s64 + 12048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1536(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// lwz r25,2736(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 2736);
	// bl 0x82420c88
	ctx.lr = 0x82427FC4;
	sub_82420C88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// addi r24,r11,-4992
	r24.s64 = ctx.r11.s64 + -4992;
	// addi r23,r10,16880
	r23.s64 = ctx.r10.s64 + 16880;
	// addi r22,r9,8424
	r22.s64 = ctx.r9.s64 + 8424;
	// addi r21,r8,-6064
	r21.s64 = ctx.r8.s64 + -6064;
	// beq cr6,0x8242802c
	if (ctx.cr6.eq) goto loc_8242802C;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(r28.s32, 13, ctx.xer);
	// beq cr6,0x82428024
	if (ctx.cr6.eq) goto loc_82428024;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// beq cr6,0x8242801c
	if (ctx.cr6.eq) goto loc_8242801C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,757
	ctx.r7.s64 = 757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82428014;
	sub_8240E308(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8242803c
	goto loc_8242803C;
loc_8242801C:
	// addi r10,r24,8
	ctx.r10.s64 = r24.s64 + 8;
	// b 0x82428030
	goto loc_82428030;
loc_82428024:
	// addi r10,r24,24
	ctx.r10.s64 = r24.s64 + 24;
	// b 0x82428030
	goto loc_82428030;
loc_8242802C:
	// addi r10,r24,16
	ctx.r10.s64 = r24.s64 + 16;
loc_82428030:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8242803C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-5496
	ctx.r10.s64 = ctx.r10.s64 + -5496;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r25
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824280d8
	if (!ctx.cr6.eq) goto loc_824280D8;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 172);
	// bl 0x824247f8
	ctx.lr = 0x8242806C;
	sub_824247F8(ctx, base);
	// lwz r30,1452(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82412d18
	ctx.lr = 0x82428080;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x824280a4
	if (ctx.cr0.eq) goto loc_824280A4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82428dd8
	ctx.lr = 0x8242809C;
	sub_82428DD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824280a8
	goto loc_824280A8;
loc_824280A4:
	// li r30,0
	r30.s64 = 0;
loc_824280A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 164);
	// bl 0x82429bf8
	ctx.lr = 0x824280B4;
	sub_82429BF8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824288c8
	ctx.lr = 0x824280C4;
	sub_824288C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82427208
	ctx.lr = 0x824280D0;
	sub_82427208(ctx, base);
	// stwx r30,r26,r25
	REX_STORE_U32(r26.u32 + r25.u32, r30.u32);
	// b 0x824280dc
	goto loc_824280DC;
loc_824280D8:
	// lwz r29,28(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_824280DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82429ab8
	ctx.lr = 0x824280E8;
	sub_82429AB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824288c8
	ctx.lr = 0x824280F8;
	sub_824288C8(ctx, base);
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// beq cr6,0x8242813c
	if (ctx.cr6.eq) goto loc_8242813C;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(r28.s32, 13, ctx.xer);
	// beq cr6,0x82428134
	if (ctx.cr6.eq) goto loc_82428134;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// beq cr6,0x8242812c
	if (ctx.cr6.eq) goto loc_8242812C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,788
	ctx.r7.s64 = 788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82428128;
	sub_8240E308(ctx, base);
	// b 0x82428150
	goto loc_82428150;
loc_8242812C:
	// addi r10,r24,12
	ctx.r10.s64 = r24.s64 + 12;
	// b 0x82428140
	goto loc_82428140;
loc_82428134:
	// addi r10,r24,28
	ctx.r10.s64 = r24.s64 + 28;
	// b 0x82428140
	goto loc_82428140;
loc_8242813C:
	// addi r10,r24,20
	ctx.r10.s64 = r24.s64 + 20;
loc_82428140:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_82428150:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824288c8
	ctx.lr = 0x82428160;
	sub_824288C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82427208
	ctx.lr = 0x8242816C;
	sub_82427208(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 164);
	// bl 0x82429bb0
	ctx.lr = 0x82428178;
	sub_82429BB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8242E390) {
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
	ctx.lr = 0x8242E398;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,488
	r28.s64 = ctx.r3.s64 + 488;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x8242bbb8
	ctx.lr = 0x8242E3B8;
	sub_8242BBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8242e438
	if (ctx.cr0.eq) goto loc_8242E438;
	// addi r30,r29,496
	r30.s64 = r29.s64 + 496;
loc_8242E3C4:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242e3e4
	if (ctx.cr6.eq) goto loc_8242E3E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82438e18
	ctx.lr = 0x8242E3E0;
	sub_82438E18(ctx, base);
	// b 0x8242e418
	goto loc_8242E418;
loc_8242E3E4:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8242e400
	goto loc_8242E400;
loc_8242E3F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8242e40c
	if (ctx.cr6.eq) goto loc_8242E40C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8242E400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e3f0
	if (!ctx.cr6.eq) goto loc_8242E3F0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8242E40C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82443938
	ctx.lr = 0x8242E418;
	sub_82443938(ctx, base);
loc_8242E418:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8242E420;
	sub_82473600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x8242bbb8
	ctx.lr = 0x8242E430;
	sub_8242BBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242e3c4
	if (!ctx.cr0.eq) goto loc_8242E3C4;
loc_8242E438:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x824d4b9c
	ctx.lr = 0x8242E444;
	__imp__XAudioGetVoiceCategoryVolume(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,536(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8242e488
	if (ctx.cr6.eq) goto loc_8242E488;
	// lwz r31,520(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 520);
	// stfs f0,536(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 536, temp.u32);
	// b 0x8242e480
	goto loc_8242E480;
loc_8242E460:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242e478
	if (ctx.cr6.eq) goto loc_8242E478;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8242e47c
	goto loc_8242E47C;
loc_8242E478:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8242E47C:
	// bl 0x824353d0
	ctx.lr = 0x8242E480;
	sub_824353D0(ctx, base);
loc_8242E480:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8242e460
	if (!ctx.cr6.eq) goto loc_8242E460;
loc_8242E488:
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r30,r29,112
	r30.s64 = r29.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,576(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242e4e8
	if (ctx.cr6.eq) goto loc_8242E4E8;
	// lwz r31,568(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 568);
loc_8242E4B0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242e4c8
	if (ctx.cr6.eq) goto loc_8242E4C8;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8242e4cc
	goto loc_8242E4CC;
loc_8242E4C8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8242E4CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e4e8
	if (ctx.cr6.eq) goto loc_8242E4E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8242e4b0
	goto loc_8242E4B0;
loc_8242E4E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242E4FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8243bf98
	ctx.lr = 0x8242E500;
	sub_8243BF98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82435B40) {
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
	// addi r30,r3,228
	r30.s64 = ctx.r3.s64 + 228;
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
	// bl 0x8242bbb8
	ctx.lr = 0x82435B70;
	sub_8242BBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82435bc0
	if (ctx.cr0.eq) goto loc_82435BC0;
	// addi r31,r31,188
	r31.s64 = r31.s64 + 188;
loc_82435B7C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x82435b98
	goto loc_82435B98;
loc_82435B84:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82435ba0
	if (ctx.cr6.eq) goto loc_82435BA0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82435B98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82435b84
	if (!ctx.cr6.eq) goto loc_82435B84;
loc_82435BA0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82443938
	ctx.lr = 0x82435BAC;
	sub_82443938(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242bbb8
	ctx.lr = 0x82435BB8;
	sub_8242BBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82435b7c
	if (!ctx.cr0.eq) goto loc_82435B7C;
loc_82435BC0:
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

DEFINE_REX_FUNC(sub_82437738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82437740;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82437768
	if (ctx.cr6.eq) goto loc_82437768;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x824377c8
	goto loc_824377C8;
loc_82437768:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d5870
	ctx.lr = 0x82437780;
	sub_822D5870(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r11,r11,-12280
	ctx.r11.s64 = ctx.r11.s64 + -12280;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r10,r10,-29184
	ctx.r10.s64 = ctx.r10.s64 + -29184;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247c1f0
	ctx.lr = 0x824377B8;
	sub_8247C1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824377c8
	if (ctx.cr0.lt) goto loc_824377C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_824377C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82438D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82438D80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8243bf98
	ctx.lr = 0x82438D8C;
	sub_8243BF98(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// li r28,0
	r28.s64 = 0;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82438dbc
	if (!ctx.cr6.gt) goto loc_82438DBC;
loc_82438DA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 336);
	// bl 0x8243bc50
	ctx.lr = 0x82438DAC;
	sub_8243BC50(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82438da0
	if (ctx.cr6.lt) goto loc_82438DA0;
loc_82438DBC:
	// stw r28,340(r31)
	REX_STORE_U32(r31.u32 + 340, r28.u32);
	// addi r29,r31,404
	r29.s64 = r31.s64 + 404;
	// stw r28,332(r31)
	REX_STORE_U32(r31.u32 + 332, r28.u32);
	// b 0x82438de4
	goto loc_82438DE4;
loc_82438DCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824351e8
	ctx.lr = 0x82438DDC;
	sub_824351E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x82438DE4;
	sub_82473600(ctx, base);
loc_82438DE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824344e8
	ctx.lr = 0x82438DEC;
	sub_824344E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82438dcc
	if (!ctx.cr0.eq) goto loc_82438DCC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8243A398) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r9,14(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x8243a3c8
	if (ctx.cr6.eq) goto loc_8243A3C8;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x8243a3c8
	if (ctx.cr6.eq) goto loc_8243A3C8;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x8243a3c8
	if (ctx.cr6.eq) goto loc_8243A3C8;
	// addi r11,r9,-32
	ctx.r11.s64 = ctx.r9.s64 + -32;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8243A3C8:
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x8243a420
	if (!ctx.cr6.eq) goto loc_8243A420;
	// lhz r11,18(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243a410
	if (ctx.cr0.eq) goto loc_8243A410;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8243a410
	if (ctx.cr6.eq) goto loc_8243A410;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8243a410
	if (ctx.cr6.eq) goto loc_8243A410;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x8243a410
	if (ctx.cr6.eq) goto loc_8243A410;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x8243a410
	if (ctx.cr6.eq) goto loc_8243A410;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
loc_8243A410:
	// subfc r8,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8243A420:
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243DCF8) {
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
	ctx.lr = 0x8243DD00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243dd24
	if (ctx.cr6.eq) goto loc_8243DD24;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243dd48
	goto loc_8243DD48;
loc_8243DD24:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x8243dd34
	if (ctx.cr6.lt) goto loc_8243DD34;
	// cmplwi cr6,r27,64
	ctx.cr6.compare<uint32_t>(r27.u32, 64, ctx.xer);
	// ble cr6,0x8243dd50
	if (!ctx.cr6.gt) goto loc_8243DD50;
loc_8243DD34:
	// lis r25,-30569
	r25.s64 = -2003369984;
	// ori r25,r25,1
	r25.u64 = r25.u64 | 1;
loc_8243DD3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243dbd8
	ctx.lr = 0x8243DD44;
	sub_8243DBD8(ctx, base);
loc_8243DD44:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8243DD48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8243DD50:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r26,-1
	r26.s64 = -1;
	// ori r28,r11,65535
	r28.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// ble cr6,0x8243dd6c
	if (!ctx.cr6.gt) goto loc_8243DD6C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8243DD6C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r30,r11,7712
	r30.s64 = ctx.r11.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243DD88;
	sub_8242C3B0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243dda0
	if (!ctx.cr0.eq) goto loc_8243DDA0;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x8243dd3c
	goto loc_8243DD3C;
loc_8243DDA0:
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8243DDB0;
	sub_822D5870(ctx, base);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ble cr6,0x8243ddc0
	if (!ctx.cr6.gt) goto loc_8243DDC0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8243DDC0:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// bl 0x8242c3b0
	ctx.lr = 0x8243DDD4;
	sub_8242C3B0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243ddec
	if (!ctx.cr0.eq) goto loc_8243DDEC;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x8243ddf8
	goto loc_8243DDF8;
loc_8243DDEC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8243DDF8;
	sub_822D5870(ctx, base);
loc_8243DDF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// blt cr6,0x8243dd3c
	if (ctx.cr6.lt) goto loc_8243DD3C;
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824525e8
	ctx.lr = 0x8243DE14;
	sub_824525E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lfs f13,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// b 0x8243dd44
	goto loc_8243DD44;
}

DEFINE_REX_FUNC(sub_82443200) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82443208;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82443274
	if (ctx.cr6.eq) goto loc_82443274;
loc_82443224:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824432b8
	if (ctx.cr6.lt) goto loc_824432B8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82443244
	if (ctx.cr6.eq) goto loc_82443244;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82443248
	goto loc_82443248;
loc_82443244:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82443248:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82443224
	if (!ctx.cr6.eq) goto loc_82443224;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824432b8
	if (ctx.cr6.lt) goto loc_824432B8;
loc_82443274:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82443298
	if (ctx.cr6.eq) goto loc_82443298;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82443298:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824432b8
	if (ctx.cr6.lt) goto loc_824432B8;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824432b8
	if (ctx.cr6.eq) goto loc_824432B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82442908
	ctx.lr = 0x824432B8;
	sub_82442908(ctx, base);
loc_824432B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8244A600) {
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
	ctx.lr = 0x8244A608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,500(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 500);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// bne cr6,0x8244a638
	if (!ctx.cr6.eq) goto loc_8244A638;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8244A638:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r29,0(r27)
	r29.u64 = REX_LOAD_U16(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244a660
	if (ctx.cr6.eq) goto loc_8244A660;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82449e88
	ctx.lr = 0x8244A658;
	sub_82449E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a6bc
	if (ctx.cr6.lt) goto loc_8244A6BC;
loc_8244A660:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244a1e8
	ctx.lr = 0x8244A66C;
	sub_8244A1E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a6bc
	if (ctx.cr6.lt) goto loc_8244A6BC;
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244a6bc
	if (!ctx.cr6.eq) goto loc_8244A6BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8244a6bc
	if (ctx.cr6.eq) goto loc_8244A6BC;
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// clrlwi r7,r29,16
	ctx.r7.u64 = r29.u32 & 0xFFFF;
	// lbz r5,201(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 201);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne cr6,0x8244a6b8
	if (!ctx.cr6.eq) goto loc_8244A6B8;
	// bl 0x8246b540
	ctx.lr = 0x8244A6AC;
	sub_8246B540(ctx, base);
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8244A6B8:
	// bl 0x8246aff0
	ctx.lr = 0x8244A6BC;
	sub_8246AFF0(ctx, base);
loc_8244A6BC:
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82450650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,21052(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82451458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,-25520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25520);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,27544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x824515c8
	if (ctx.cr6.lt) goto loc_824515C8;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8245148C:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x824514a0
	if (!ctx.cr6.lt) goto loc_824514A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824514ac
	goto loc_824514AC;
loc_824514A0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x824514ac
	if (!ctx.cr6.gt) goto loc_824514AC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_824514AC:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r6.s32 >> 16;
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r31,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r31.u8);
	// bge cr6,0x824514e8
	if (!ctx.cr6.lt) goto loc_824514E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824514f4
	goto loc_824514F4;
loc_824514E8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x824514f4
	if (!ctx.cr6.gt) goto loc_824514F4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_824514F4:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r6.s32 >> 16;
	// stb r7,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stb r31,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, r31.u8);
	// bge cr6,0x82451530
	if (!ctx.cr6.lt) goto loc_82451530;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8245153c
	goto loc_8245153C;
loc_82451530:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8245153c
	if (!ctx.cr6.gt) goto loc_8245153C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8245153C:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// stb r6,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r6.s32 >> 16;
	// stb r7,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// stb r31,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, r31.u8);
	// bge cr6,0x82451578
	if (!ctx.cr6.lt) goto loc_82451578;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451584
	goto loc_82451584;
loc_82451578:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451584
	if (!ctx.cr6.gt) goto loc_82451584;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451584:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 8;
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r6.s32 >> 16;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// stb r6,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r6.u8);
	// stb r7,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r7.u8);
	// stbu r31,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r11.u32 = ea;
	// blt cr6,0x8245148c
	if (ctx.cr6.lt) goto loc_8245148C;
loc_824515C8:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8245164c
	if (!ctx.cr6.lt) goto loc_8245164C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r10,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824515F0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82451604
	if (!ctx.cr6.lt) goto loc_82451604;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451610
	goto loc_82451610;
loc_82451604:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82451610
	if (!ctx.cr6.gt) goto loc_82451610;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82451610:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// srawi r6,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 16;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// stb r5,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r4,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// stbu r3,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824515f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824515F0;
loc_8245164C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C5A8) {
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
	// bl 0x8245c428
	ctx.lr = 0x8245C5C8;
	sub_8245C428(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245c60c
	if (ctx.cr0.eq) goto loc_8245C60C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c5f8
	if (ctx.cr6.eq) goto loc_8245C5F8;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x8245c5fc
	goto loc_8245C5FC;
loc_8245C5F8:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_8245C5FC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_8245C60C:
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

DEFINE_REX_FUNC(sub_8245D4C8) {
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
	ctx.lr = 0x8245D4E8;
	sub_82441768(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245d52c
	if (ctx.cr0.eq) goto loc_8245D52C;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d518
	if (ctx.cr6.eq) goto loc_8245D518;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x8245d51c
	goto loc_8245D51C;
loc_8245D518:
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
loc_8245D51C:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_8245D52C:
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

DEFINE_REX_FUNC(sub_8245E410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245E418;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82473d40
	ctx.lr = 0x8245E458;
	sub_82473D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245e490
	if (ctx.cr0.lt) goto loc_8245E490;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x8245e330
	ctx.lr = 0x8245E480;
	sub_8245E330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245e490
	if (ctx.cr0.lt) goto loc_8245E490;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8245E490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245F3A0) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8245f42c
	if (ctx.cr6.lt) goto loc_8245F42C;
	// beq cr6,0x8245f424
	if (ctx.cr6.eq) goto loc_8245F424;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8245f400
	if (ctx.cr6.lt) goto loc_8245F400;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// beq cr6,0x8245f3ec
	if (ctx.cr6.eq) goto loc_8245F3EC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8245f3e0
	if (ctx.cr6.lt) goto loc_8245F3E0;
	// bl 0x82475dc8
	ctx.lr = 0x8245F3DC;
	sub_82475DC8(ctx, base);
	// b 0x8245f430
	goto loc_8245F430;
loc_8245F3E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8245f3f4
	goto loc_8245F3F4;
loc_8245F3EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
loc_8245F3F4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F3FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8245f430
	goto loc_8245F430;
loc_8245F400:
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lwz r6,20(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8245f430
	goto loc_8245F430;
loc_8245F424:
	// bl 0x8245f320
	ctx.lr = 0x8245F428;
	sub_8245F320(ctx, base);
	// b 0x8245f430
	goto loc_8245F430;
loc_8245F42C:
	// bl 0x8245f2c8
	ctx.lr = 0x8245F430;
	sub_8245F2C8(ctx, base);
loc_8245F430:
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

DEFINE_REX_FUNC(sub_824602D0) {
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
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,11008
	ctx.r10.s64 = ctx.r10.s64 + 11008;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6144, ctx.xer);
	// beq cr6,0x82460370
	if (ctx.cr6.eq) goto loc_82460370;
	// li r9,6144
	ctx.r9.s64 = 6144;
loc_824602F8:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824602f8
	if (!ctx.cr0.eq) goto loc_824602F8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82460364
	if (ctx.cr6.eq) goto loc_82460364;
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplwi cr6,r10,6144
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6144, ctx.xer);
	// bne cr6,0x8246033c
	if (!ctx.cr6.eq) goto loc_8246033C;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82460340
	goto loc_82460340;
loc_8246033C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82460340:
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r3,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x82460370
	if (ctx.cr6.gt) goto loc_82460370;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// bl 0x822d4fa0
	ctx.lr = 0x8246035C;
	sub_822D4FA0(ctx, base);
	// lwsync 
	// b 0x82460370
	goto loc_82460370;
loc_82460364:
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r10,6660(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6660);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
loc_82460370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82464878) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82464930
	if (!ctx.cr6.gt) goto loc_82464930;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82464930
	if (!ctx.cr6.eq) goto loc_82464930;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82464920
	if (!ctx.cr6.gt) goto loc_82464920;
	// lwz r8,320(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,444(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824648B4:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// beq cr6,0x824648e8
	if (ctx.cr6.eq) goto loc_824648E8;
	// lwz r4,456(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r10,r10,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r11,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x82464900
	goto loc_82464900;
loc_824648E8:
	// lwz r4,448(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82464900
	if (ctx.cr6.eq) goto loc_82464900;
	// lwz r4,456(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
loc_82464900:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8246490c
	if (!ctx.cr6.gt) goto loc_8246490C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8246490C:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82464918
	if (!ctx.cr6.gt) goto loc_82464918;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82464918:
	// addi r9,r9,1776
	ctx.r9.s64 = ctx.r9.s64 + 1776;
	// bdnz 0x824648b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824648B4;
loc_82464920:
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
loc_82464930:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82468B00) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x82468B08;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f24
	ctx.lr = 0x82468B10;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82469008
	if (!ctx.cr6.eq) goto loc_82469008;
	// lwz r10,584(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lhz r31,122(r30)
	r31.u64 = REX_LOAD_U16(r30.u32 + 122);
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x82468b74
	if (!ctx.cr6.gt) goto loc_82468B74;
	// lhz r11,122(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 122);
	// extsh r10,r31
	ctx.r10.s64 = r31.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82469008
	if (!ctx.cr6.eq) goto loc_82469008;
loc_82468B74:
	// lhz r26,124(r30)
	r26.u64 = REX_LOAD_U16(r30.u32 + 124);
	// extsh r29,r31
	r29.s64 = r31.s16;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// lfs f29,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	f29.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f31,76(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 76);
	f31.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lfs f28,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	f28.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f27,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	f27.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f30,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82466908
	ctx.lr = 0x82468BB0;
	sub_82466908(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8231aa18
	ctx.lr = 0x82468BCC;
	sub_8231AA18(ctx, base);
	// extsh r7,r26
	ctx.r7.s64 = r26.s16;
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// addze. r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82468c3c
	if (!ctx.cr0.gt) goto loc_82468C3C;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82468C00:
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lfsx f0,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f12,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r4,r10
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// stfs f13,-4(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// bdnz 0x82468c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82468C00;
loc_82468C3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82468c9c
	if (!ctx.cr6.gt) goto loc_82468C9C;
	// addi r8,r3,-2
	ctx.r8.s64 = ctx.r3.s64 + -2;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82468C60:
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lfsx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r10,r4
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// stfs f13,-4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// bdnz 0x82468c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82468C60;
loc_82468C9C:
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82468cfc
	if (!ctx.cr6.gt) goto loc_82468CFC;
	// addi r8,r3,-3
	ctx.r8.s64 = ctx.r3.s64 + -3;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82468CC0:
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lfsx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r10,r4
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// stfs f13,-4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// bdnz 0x82468cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82468CC0;
loc_82468CFC:
	// li r5,3
	ctx.r5.s64 = 3;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x82468d5c
	if (!ctx.cr6.gt) goto loc_82468D5C;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82468D20:
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lfsx f0,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f12,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f12,r10,r4
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// stfs f13,-4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// bdnz 0x82468d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82468D20;
loc_82468D5C:
	// srawi r8,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r8.s64 = r29.s32 >> 1;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 56);
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r29.s32, ctx.xer);
	// ble cr6,0x82468dc4
	if (!ctx.cr6.gt) goto loc_82468DC4;
	// lhz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r6,r3,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r3.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// b 0x82468df8
	goto loc_82468DF8;
loc_82468DC4:
	// lhz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,82(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// subf r6,r29,r4
	ctx.r6.u64 = ctx.r4.u64 - r29.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
loc_82468DF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82468f74
	if (ctx.cr6.lt) goto loc_82468F74;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
loc_82468E08:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f10,f29
	ctx.f10.u64 = f29.u64 ^ 0x8000000000000000;
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f6,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f0,f30,f29,f27
	ctx.f0.f64 = double(float(-std::fma(f30.f64, f29.f64, -f27.f64)));
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f30,f31,f28
	ctx.f13.f64 = double(float(std::fma(f30.f64, f31.f64, f28.f64)));
	// lfs f1,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f26,f1,f31
	f26.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f28,f2,f31
	f28.f64 = double(float(ctx.f2.f64 * f31.f64));
	// lfs f4,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f27,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f27.f64 = double(temp.f32);
	// lfs f25,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	f25.f64 = double(temp.f32);
	// fmadds f11,f10,f8,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f29,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, ctx.f7.f64)));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f8,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fneg f24,f13
	f24.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f23,f0,f9
	f23.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f7,f13,f5,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f10,f10,f2,f26
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, f26.f64)));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f1,f1,f29,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f28.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f11,f24,f9,f12
	ctx.f11.f64 = double(float(std::fma(f24.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f8,f13,f8,f23
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, f23.f64)));
	// stfs f8,-4(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f13,f0,f30,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// lfs f9,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fnmsubs f0,f30,f12,f31
	ctx.f0.f64 = double(float(-std::fma(f30.f64, ctx.f12.f64, -f31.f64)));
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmadds f12,f24,f6,f5
	ctx.f12.f64 = double(float(std::fma(f24.f64, ctx.f6.f64, ctx.f5.f64)));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f8,f0,f4
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmadds f11,f13,f3,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f8.f64)));
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmadds f8,f13,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f6.f64)));
	// fmadds f13,f0,f30,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f2.f64)));
	// fmuls f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fnmsubs f0,f30,f12,f1
	ctx.f0.f64 = double(float(-std::fma(f30.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmadds f6,f10,f9,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f6,8(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f5,-12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f1,f10,f4,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f7.f64)));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// fmuls f10,f0,f25
	ctx.f10.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fmuls f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f8,f0,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f6,f2,f25,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, f25.f64, ctx.f9.f64)));
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f4,f2,f5,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f8.f64)));
	// stfs f4,12(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmadds f7,f13,f27,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, ctx.f10.f64)));
	// stfs f7,-12(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fmuls f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f29,f0,f30,f12
	f29.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f12.f64)));
	// fmadds f1,f13,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f2.f64)));
	// stfs f1,-12(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// fnmsubs f31,f30,f13,f11
	f31.f64 = double(float(-std::fma(f30.f64, ctx.f13.f64, -ctx.f11.f64)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// blt cr6,0x82468e08
	if (ctx.cr6.lt) goto loc_82468E08;
loc_82468F74:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8246934c
	if (!ctx.cr6.lt) goto loc_8246934C;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82468F8C:
	// lfsx f12,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f29
	ctx.f11.u64 = f29.u64 ^ 0x8000000000000000;
	// lfsx f10,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmadds f0,f30,f31,f28
	ctx.f0.f64 = double(float(std::fma(f30.f64, f31.f64, f28.f64)));
	// fnmsubs f13,f30,f29,f27
	ctx.f13.f64 = double(float(-std::fma(f30.f64, f29.f64, -f27.f64)));
	// fmr f28,f29
	f28.f64 = f29.f64;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fmadds f3,f11,f10,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsx f3,r9,r10
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// fmadds f2,f12,f29,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, ctx.f7.f64)));
	// stfsx f2,r8,r11
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fmadds f1,f6,f29,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f5.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f11,f8,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82468f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82468F8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f70
	ctx.lr = 0x82469004;
	// b 0x822d4ed0
	return;
loc_82469008:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8246934c
	if (!ctx.cr6.gt) goto loc_8246934C;
	// li r27,0
	r27.s64 = 0;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82469018:
	// lwz r7,584(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 584);
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r30,122(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 122);
	// lfs f30,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	f30.f64 = double(temp.f32);
	// lhz r26,124(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 124);
	// lfs f29,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	f29.f64 = double(temp.f32);
	// extsh r29,r30
	r29.s64 = r30.s16;
	// lfs f28,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	f28.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f27,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	f27.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lfs f31,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	f31.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x82466908
	ctx.lr = 0x82469070;
	sub_82466908(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8231aa18
	ctx.lr = 0x8246908C;
	sub_8231AA18(ctx, base);
	// extsh r4,r26
	ctx.r4.s64 = r26.s16;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r30.s64 = temp.s64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82469120
	if (ctx.cr6.lt) goto loc_82469120;
	// addi r3,r30,-3
	ctx.r3.s64 = r30.s64 + -3;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_824690B0:
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r26,r8,-4
	r26.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// stfs f0,-4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f12,r6,r10
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsx f10,r8,r10
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lfs f8,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsu f7,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsx f8,r5,r10
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x824690b0
	if (ctx.cr6.lt) goto loc_824690B0;
loc_82469120:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x82469160
	if (!ctx.cr6.lt) goto loc_82469160;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8246913C:
	// subf r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// bdnz 0x8246913c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246913C;
loc_82469160:
	// srawi r9,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r9.s64 = r29.s32 >> 1;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r29.s32, ctx.xer);
	// ble cr6,0x824691b4
	if (!ctx.cr6.gt) goto loc_824691B4;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r4,r6,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x824691e0
	goto loc_824691E0;
loc_824691B4:
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// subf r3,r29,r6
	ctx.r3.u64 = ctx.r6.u64 - r29.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
loc_824691E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x824692d4
	if (ctx.cr6.lt) goto loc_824692D4;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
loc_824691F0:
	// fnmsubs f0,f31,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(f31.f64, f30.f64, -f27.f64)));
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f31,f29,f28
	ctx.f13.f64 = double(float(std::fma(f31.f64, f29.f64, f28.f64)));
	// lfs f3,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * f29.f64));
	// fmuls f1,f3,f29
	ctx.f1.f64 = double(float(ctx.f3.f64 * f29.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f7,f30
	ctx.f7.u64 = f30.u64 ^ 0x8000000000000000;
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f28,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f28.f64 = double(temp.f32);
	// lfs f2,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// fmuls f27,f0,f10
	f27.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f4,f3,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f4.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fneg f26,f13
	f26.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f3,f7,f5,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f25,f0,f9
	f25.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmadds f1,f13,f9,f27
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f27.f64)));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmadds f13,f0,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f30.f64)));
	// fnmsubs f0,f31,f12,f29
	ctx.f0.f64 = double(float(-std::fma(f31.f64, ctx.f12.f64, -f29.f64)));
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmadds f5,f26,f10,f25
	ctx.f5.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, f25.f64)));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f1,f0,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmadds f13,f13,f6,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f4.f64)));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmadds f13,f0,f31,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f9.f64)));
	// fnmsubs f0,f31,f12,f7
	ctx.f0.f64 = double(float(-std::fma(f31.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmadds f10,f3,f8,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f8,f0,f28
	ctx.f8.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// fmadds f30,f0,f31,f12
	f30.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// fnmsubs f29,f31,f13,f11
	f29.f64 = double(float(-std::fma(f31.f64, ctx.f13.f64, -ctx.f11.f64)));
	// fmadds f5,f7,f2,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f8.f64)));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f6,f13,f28,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f9.f64)));
	// stfs f6,-12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x824691f0
	if (ctx.cr6.lt) goto loc_824691F0;
loc_824692D4:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8246932c
	if (!ctx.cr6.lt) goto loc_8246932C;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824692EC:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f30
	ctx.f11.u64 = f30.u64 ^ 0x8000000000000000;
	// lfs f10,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmadds f0,f31,f29,f28
	ctx.f0.f64 = double(float(std::fma(f31.f64, f29.f64, f28.f64)));
	// fnmsubs f13,f31,f30,f27
	ctx.f13.f64 = double(float(-std::fma(f31.f64, f30.f64, -f27.f64)));
	// fmr f28,f30
	f28.f64 = f30.f64;
	// fmr f27,f29
	f27.f64 = f29.f64;
	// fmadds f7,f11,f10,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsu f7,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f6,f12,f30,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f8.f64)));
	// stfsu f6,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// bdnz 0x824692ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824692EC;
loc_8246932C:
	// lhz r10,580(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 580);
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82469018
	if (ctx.cr6.lt) goto loc_82469018;
loc_8246934C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f70
	ctx.lr = 0x8246935C;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824A8918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824A8920;
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// vslh v12,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6648
	ctx.lr = 0x824A8968;
	sub_824A6648(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7450
	ctx.lr = 0x824A8980;
	sub_824A7450(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824AA2D8) {
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
	// b 0x824a9178
	sub_824A9178(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824AA508) {
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
	// bl 0x822d4e84
	ctx.lr = 0x824AA510;
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,16
	r30.s64 = ctx.r1.s64 + 16;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,64
	r29.s64 = ctx.r1.s64 + 64;
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r31,r3
	ctx.r9.u64 = r31.u64 + ctx.r3.u64;
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v60,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v12,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vmrghb v10,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vadduhm v5,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v1,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v31,v3,v11
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v30,v2,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v5,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v7,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v8,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v6,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824aa6b4
	if (!ctx.cr6.eq) goto loc_824AA6B4;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,208
	r30.s64 = ctx.r1.s64 + 208;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,256
	r29.s64 = ctx.r1.s64 + 256;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,304
	r28.s64 = ctx.r1.s64 + 304;
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,352
	r27.s64 = ctx.r1.s64 + 352;
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v53,v51,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v31,v52,v49,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v50,v48,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v11,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v10,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v3,v46,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vslh v2,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v30,v13,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vadduhm v29,v9,v12
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v28,v2,v12
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v27,v1,v11
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v31,v10
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v29,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v28,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v27,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v26,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// stvx128 v25,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824aa6b8
	goto loc_824AA6B8;
loc_824AA6B4:
	// blt cr6,0x824aa750
	if (ctx.cr6.lt) goto loc_824AA750;
loc_824AA6B8:
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,32
	ctx.r3.s64 = ctx.r1.s64 + 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824aa750
	if (!ctx.cr6.gt) goto loc_824AA750;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r29,r9,r4
	r29.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r10,r3,-48
	ctx.r10.s64 = ctx.r3.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824AA6EC:
	// lbzux r8,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzx r28,r29,r11
	r28.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// rotlwi r3,r8,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r28,1
	r31.u64 = __builtin_rotateleft32(r28.u32, 1);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// add r8,r28,r31
	ctx.r8.u64 = r28.u64 + r31.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + r28.u64;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r8.u16);
	// sthu r3,96(r10)
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x824aa6ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AA6EC;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// addi r8,r1,16
	ctx.r8.s64 = ctx.r1.s64 + 16;
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824AA750:
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// vslh v13,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// vslh v12,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// vslh v3,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vslh v2,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vaddshs v1,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v45,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v4,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// vslh v30,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// vslh v29,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,320
	r31.s64 = ctx.r1.s64 + 320;
	// vsldoi128 v31,v5,v45,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// addi r30,r1,368
	r30.s64 = ctx.r1.s64 + 368;
	// lvx128 v44,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,1104
	ctx.r8.s64 = 1104;
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v12,v6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v28,v6,v44,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// lvx128 v40,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v27,v7,v43,2
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v25,v4,v41,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v24,v9,v40,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vslh v22,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v3,v7
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v26,v8,v42,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vaddshs v17,v30,v4
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v39,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v29,v9
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v38,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v1,v31
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// lvx128 v12,r6,r8
	ea = (ctx.r6.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v2,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi128 v18,v10,v39,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vaddshs v0,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsldoi128 v16,v11,v38,2
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vaddshs v10,v21,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v11,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r7,48
	ctx.r7.s64 = 48;
	// vaddshs v9,v20,v27
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// li r6,96
	ctx.r6.s64 = 96;
	// vaddshs v8,v19,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// li r4,144
	ctx.r4.s64 = 144;
	// vaddshs v7,v17,v25
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// li r3,192
	ctx.r3.s64 = 192;
	// vaddshs v6,v15,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// li r11,240
	ctx.r11.s64 = 240;
	// vaddshs v5,v14,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// li r10,288
	ctx.r10.s64 = 288;
	// vaddshs v4,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// li r9,336
	ctx.r9.s64 = 336;
	// vaddshs v3,v11,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v2,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v1,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v7,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v6,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v27,v4,v12
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v26,v3,v12
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v19,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v24,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824B94D8) {
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
	ctx.lr = 0x824B94E0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,3976(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 3976);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r11,3,0,28
	r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// rlwinm r14,r11,4,0,27
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r15,r9,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x824b9584
	if (ctx.cr6.eq) goto loc_824B9584;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x824b9594
	goto loc_824B9594;
loc_824B9584:
	// li r28,0
	r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_824B9594:
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// beq cr6,0x824b9950
	if (ctx.cr6.eq) goto loc_824B9950;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x824b95bc
	goto loc_824B95BC;
loc_824B95B8:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824B95BC:
	// lwz r11,21940(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// beq cr6,0x824b9600
	if (ctx.cr6.eq) goto loc_824B9600;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824b95f8
	if (!ctx.cr6.lt) goto loc_824B95F8;
	// lwz r11,21972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824b95f8
	if (!ctx.cr6.eq) goto loc_824B95F8;
	// li r20,0
	r20.s64 = 0;
	// b 0x824b9610
	goto loc_824B9610;
loc_824B95F8:
	// li r20,1
	r20.s64 = 1;
	// b 0x824b9610
	goto loc_824B9610;
loc_824B9600:
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subfze r20,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	r20.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_824B9610:
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b9924
	if (ctx.cr6.eq) goto loc_824B9924;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r18,r28,3
	r18.s64 = r28.s64 + 3;
	// addi r17,r3,-2
	r17.s64 = ctx.r3.s64 + -2;
	// addi r16,r11,-2
	r16.s64 = ctx.r11.s64 + -2;
loc_824B9630:
	// add r11,r17,r21
	ctx.r11.u64 = r17.u64 + r21.u64;
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(r21.u32 + 0);
	// add r9,r16,r21
	ctx.r9.u64 = r16.u64 + r21.u64;
	// lbz r8,1(r21)
	ctx.r8.u64 = REX_LOAD_U8(r21.u32 + 1);
	// lbz r7,2(r21)
	ctx.r7.u64 = REX_LOAD_U8(r21.u32 + 2);
	// rlwinm r6,r10,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// lbz r5,3(r21)
	ctx.r5.u64 = REX_LOAD_U8(r21.u32 + 3);
	// extsb r27,r8
	r27.s64 = ctx.r8.s8;
	// extsb r24,r7
	r24.s64 = ctx.r7.s8;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r23,r5
	r23.s64 = ctx.r5.s8;
	// lbz r3,2(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r11,r4,25
	ctx.r11.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r26,r3,25
	r26.u64 = ctx.r3.u32 & 0x7F;
	// rlwinm r25,r3,0,0,24
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// bne cr6,0x824b97c0
	if (!ctx.cr6.eq) goto loc_824B97C0;
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824b9728
	if (!ctx.cr6.eq) goto loc_824B9728;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824b96d0
	if (ctx.cr6.eq) goto loc_824B96D0;
	// rlwinm r11,r27,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r6,r27,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x78;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824B96D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B96D0:
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B96F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824b9728
	if (!ctx.cr6.eq) goto loc_824B9728;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824b9728
	if (ctx.cr6.eq) goto loc_824B9728;
	// rlwinm r11,r26,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// rlwinm r6,r26,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// bctrl 
	ctx.lr = 0x824B9728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9728:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824b9750
	if (ctx.cr6.eq) goto loc_824B9750;
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9750:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824b9784
	if (ctx.cr6.eq) goto loc_824B9784;
	// rlwinm r11,r24,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// rlwinm r6,r24,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x3C;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x824B9784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9784:
	// lwz r11,15932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r18,r30
	ctx.r3.u64 = r18.u64 + r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B97A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824b98fc
	if (ctx.cr6.eq) goto loc_824B98FC;
	// rlwinm r11,r23,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r23,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3C;
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x824b98e4
	goto loc_824B98E4;
loc_824B97C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b97f0
	if (ctx.cr6.eq) goto loc_824B97F0;
	// rlwinm r10,r11,31,1,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r9,15928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// rlwinm r6,r11,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + r19.u64;
	// bctrl 
	ctx.lr = 0x824B97F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B97F0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824b9850
	if (!ctx.cr6.eq) goto loc_824B9850;
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824b9850
	if (!ctx.cr6.eq) goto loc_824B9850;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824b9850
	if (ctx.cr6.eq) goto loc_824B9850;
	// rlwinm r11,r26,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// rlwinm r6,r26,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// bctrl 
	ctx.lr = 0x824B9850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9850:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824b9878
	if (ctx.cr6.eq) goto loc_824B9878;
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9878:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824b988c
	if (ctx.cr6.eq) goto loc_824B988C;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// bne cr6,0x824b98ac
	if (!ctx.cr6.eq) goto loc_824B98AC;
loc_824B988C:
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B98AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B98AC:
	// lwz r11,15932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r18,r30
	ctx.r3.u64 = r18.u64 + r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B98C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b98dc
	if (ctx.cr6.eq) goto loc_824B98DC;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// bne cr6,0x824b98fc
	if (!ctx.cr6.eq) goto loc_824B98FC;
loc_824B98DC:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
loc_824B98E4:
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B98FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B98FC:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r21,r21,6
	r21.s64 = r21.s64 + 6;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b9630
	if (ctx.cr6.lt) goto loc_824B9630;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_824B9924:
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// blt cr6,0x824b95b8
	if (ctx.cr6.lt) goto loc_824B95B8;
loc_824B9950:
	// lwz r18,140(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r26,0
	r26.s64 = 0;
	// lwz r22,324(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,3976(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 3976);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// lwz r20,332(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r19,136(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 136);
	// beq cr6,0x824b9be0
	if (ctx.cr6.eq) goto loc_824B9BE0;
	// li r21,0
	r21.s64 = 0;
loc_824B9974:
	// lwz r11,21940(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b99d8
	if (ctx.cr6.eq) goto loc_824B99D8;
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824b99cc
	if (!ctx.cr6.lt) goto loc_824B99CC;
	// lwz r11,21972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + r21.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824b99cc
	if (!ctx.cr6.eq) goto loc_824B99CC;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r23,0
	r23.s64 = 0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824b99d0
	if (!ctx.cr6.lt) goto loc_824B99D0;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824b99d0
	if (!ctx.cr6.eq) goto loc_824B99D0;
	// li r24,0
	r24.s64 = 0;
	// b 0x824b99f8
	goto loc_824B99F8;
loc_824B99CC:
	// li r23,1
	r23.s64 = 1;
loc_824B99D0:
	// li r24,1
	r24.s64 = 1;
	// b 0x824b99f8
	goto loc_824B99F8;
loc_824B99D8:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// subfc r11,r9,r26
	ctx.xer.ca = r26.u32 >= ctx.r9.u32;
	ctx.r11.u64 = r26.u64 - ctx.r9.u64;
	// subfze r23,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r23.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r8,r26
	ctx.xer.ca = r26.u32 >= ctx.r8.u32;
	ctx.r11.u64 = r26.u64 - ctx.r8.u64;
	// subfze r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_824B99F8:
	// mr r30,r22
	r30.u64 = r22.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b9bc4
	if (ctx.cr6.eq) goto loc_824B9BC4;
	// subf r28,r22,r20
	r28.u64 = r20.u64 - r22.u64;
loc_824B9A0C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x824b9a5c
	if (!ctx.cr6.eq) goto loc_824B9A5C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,15928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824B9A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,15928(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824B9A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9A5C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x824b9af8
	if (!ctx.cr6.eq) goto loc_824B9AF8;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824b9aac
	if (ctx.cr6.eq) goto loc_824B9AAC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9AAC:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lbz r9,5(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824b9af8
	if (ctx.cr6.eq) goto loc_824B9AF8;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// lwz r9,15928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824B9AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9AF8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824b9b44
	if (ctx.cr6.eq) goto loc_824B9B44;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// addi r29,r11,-5
	r29.s64 = ctx.r11.s64 + -5;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9B24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,15932(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824B9B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9B44:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824b9b78
	if (ctx.cr6.eq) goto loc_824B9B78;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824B9B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9B78:
	// lbz r11,5(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 5);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824b9bb0
	if (ctx.cr6.eq) goto loc_824B9BB0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// lwz r9,15932(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824B9BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9BB0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,6
	r25.s64 = r25.s64 + 6;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(r27.u32, r19.u32, ctx.xer);
	// blt cr6,0x824b9a0c
	if (ctx.cr6.lt) goto loc_824B9A0C;
loc_824B9BC4:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// add r20,r11,r20
	r20.u64 = ctx.r11.u64 + r20.u64;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// blt cr6,0x824b9974
	if (ctx.cr6.lt) goto loc_824B9974;
loc_824B9BE0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

