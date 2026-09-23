#include "hydrothunder_funcs.80.h"

DEFINE_REX_FUNC(sub_821251B8) {
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
	// lwz r11,6116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821251f8
	if (ctx.cr6.eq) goto loc_821251F8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
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
	ctx.lr = 0x821251F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821251F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212520C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82125264
	if (ctx.cr0.eq) goto loc_82125264;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82125278
	if (ctx.cr6.eq) goto loc_82125278;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e710
	ctx.lr = 0x8212525C;
	sub_8212E710(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x823ecca8
	ctx.lr = 0x82125264;
	sub_823ECCA8(ctx, base);
loc_82125264:
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
loc_82125278:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// bl 0x823ec648
	ctx.lr = 0x82125288;
	sub_823EC648(ctx, base);
}

DEFINE_REX_FUNC(sub_8212C660) {
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
	ctx.lr = 0x8212C668;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r29,6124(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 6124);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8212c710
	if (ctx.cr6.eq) goto loc_8212C710;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212c710
	if (ctx.cr6.eq) goto loc_8212C710;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,-23788
	r27.s64 = ctx.r11.s64 + -23788;
	// b 0x8212c6a0
	goto loc_8212C6A0;
loc_8212C69C:
	// lwz r29,6124(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 6124);
loc_8212C6A0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82120600
	ctx.lr = 0x8212C6B0;
	sub_82120600(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121dd0
	ctx.lr = 0x8212C6C0;
	sub_82121DD0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8212c6d4
	if (ctx.cr6.lt) goto loc_8212C6D4;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8212c6d8
	goto loc_8212C6D8;
loc_8212C6D4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8212C6D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r30,40
	ctx.r5.s64 = r30.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8212C700;
	sub_82120AC0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212c69c
	if (!ctx.cr6.eq) goto loc_8212C69C;
loc_8212C710:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c764
	if (ctx.cr6.eq) goto loc_8212C764;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23772
	ctx.r4.s64 = ctx.r10.s64 + -23772;
	// lfs f0,556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,580(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,584(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212C764:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82134A38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12496
	ctx.r11.s64 = ctx.r11.s64 + -12496;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,10568(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 10568);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r11,r8,0,0,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// stw r11,10568(r10)
	REX_STORE_U32(ctx.r10.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136DB0) {
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
	ctx.lr = 0x82136DB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6060(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8212dd28
	ctx.lr = 0x82136DDC;
	sub_8212DD28(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x82136DE8;
	sub_82135FB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82136DF8;
	sub_826A1E70(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lbz r5,3(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 3);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 1);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lbz r8,2(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r7,28272
	ctx.r7.s64 = ctx.r7.s64 + 28272;
	// lwz r3,6060(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// stb r11,64(r26)
	REX_STORE_U8(r26.u32 + 64, ctx.r11.u8);
	// li r4,7
	ctx.r4.s64 = 7;
	// stb r5,67(r26)
	REX_STORE_U8(r26.u32 + 67, ctx.r5.u8);
	// lfs f1,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// stb r10,65(r26)
	REX_STORE_U8(r26.u32 + 65, ctx.r10.u8);
	// stb r8,66(r26)
	REX_STORE_U8(r26.u32 + 66, ctx.r8.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,68(r26)
	REX_STORE_U32(r26.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,72(r26)
	REX_STORE_U32(r26.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,76(r26)
	REX_STORE_U32(r26.u32 + 76, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,80(r26)
	REX_STORE_U32(r26.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82139a08
	ctx.lr = 0x82136E64;
	sub_82139A08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213C2D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8213C2F4;
	sub_82120600(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8213c8b8
	ctx.lr = 0x8213C308;
	sub_8213C8B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82120ac0
	ctx.lr = 0x8213C32C;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_82140A78) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,-15504
	ctx.r11.s64 = ctx.r11.s64 + -15504;
	// addi r10,r10,-15312
	ctx.r10.s64 = ctx.r10.s64 + -15312;
	// addi r9,r9,-15264
	ctx.r9.s64 = ctx.r9.s64 + -15264;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82144110
	ctx.lr = 0x82140ABC;
	sub_82144110(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140AD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140AF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82140b24
	if (ctx.cr6.eq) goto loc_82140B24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140B24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82140B24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,244(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x82140B38;
	sub_8269D1B8(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8269d1b8
	ctx.lr = 0x82140B40;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82140b78
	ctx.lr = 0x82140B48;
	sub_82140B78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82140b58
	if (ctx.cr0.eq) goto loc_82140B58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82140B58;
	sub_8269CE98(ctx, base);
loc_82140B58:
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

DEFINE_REX_FUNC(sub_82148DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82148DB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,1024
	r29.s64 = 1024;
	// addi r11,r11,-13364
	ctx.r11.s64 = ctx.r11.s64 + -13364;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x822f6338
	ctx.lr = 0x82148DE4;
	sub_822F6338(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82148DF8:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x82148df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82148DF8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r29,8188(r11)
	REX_STORE_U32(ctx.r11.u32 + 8188, r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stb r29,24(r31)
	REX_STORE_U8(r31.u32 + 24, r29.u8);
	// bl 0x821a6a80
	ctx.lr = 0x82148E30;
	sub_821A6A80(ctx, base);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82148E3C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82148ea0
	if (ctx.cr0.eq) goto loc_82148EA0;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x82148E64;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82148e88
	if (ctx.cr0.eq) goto loc_82148E88;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82148E88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82148EA0;
	sub_82120018(ctx, base);
loc_82148EA0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82148EB8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821507A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821507A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,73(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 73);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82150804
	goto loc_82150804;
loc_821507C0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821507a0
	ctx.lr = 0x821507CC;
	sub_821507A0(ctx, base);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821507E4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821507F4;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821507FC;
	sub_8269CE98(ctx, base);
	// lbz r11,73(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 73);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82150804:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821507c0
	if (ctx.cr0.eq) goto loc_821507C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821525A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821525A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821525C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82152660
	if (!ctx.cr0.gt) goto loc_82152660;
loc_821525D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821525E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821525FC;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152614;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82152630
	if (ctx.cr0.eq) goto loc_82152630;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82152628;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215266c
	if (ctx.cr0.eq) goto loc_8215266C;
loc_82152630:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82152640;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821525d0
	if (ctx.cr6.lt) goto loc_821525D0;
loc_82152660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82152664:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
loc_8215266C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8215267C;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82152664
	goto loc_82152664;
}

DEFINE_REX_FUNC(sub_82158FF8) {
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
	ctx.lr = 0x82159000;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f13,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f31,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x82159074;
	sub_823FBD18(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f6,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f7,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r30,256
	ctx.r9.s64 = r30.s64 + 256;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f4,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f11,20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// lfs f5,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f2,16(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,36(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f5,40(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f9,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f8,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f30,32(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	f30.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f6,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmadds f13,f5,f13,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f12,f4,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f11,f2,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmuls f8,f1,f31
	ctx.f8.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fmadds f13,f30,f10,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, ctx.f13.f64)));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// lfs f10,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r30,256
	ctx.r8.s64 = r30.s64 + 256;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f9,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f12,f9,f12,f11
	ctx.f12.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f0,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x821591a0
	if (ctx.cr6.lt) goto loc_821591A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821591A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82170190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82170198;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
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
	ctx.lr = 0x821701CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821701e4
	if (ctx.cr0.eq) goto loc_821701E4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8216fcc8
	ctx.lr = 0x821701E4;
	sub_8216FCC8(ctx, base);
loc_821701E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	ctx.lr = 0x82170208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82170220
	if (ctx.cr0.eq) goto loc_82170220;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x8216fcc8
	ctx.lr = 0x82170220;
	sub_8216FCC8(ctx, base);
loc_82170220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82173CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82173CC8;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f8,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// fsubs f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
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
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r30,r5,27,29,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// rlwinm r29,r4,27,29,29
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// mfcr r31
	r31.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r31.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r31.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r31.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r31.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r31.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r31.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r31.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r31.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r31.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r31.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r31.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r31.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r31.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r31.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r31.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r31.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r31.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r31.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r31.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r31.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r31.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r31.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r31.u64 |= ctx.cr5.so ? 0x100 : 0;
	r31.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r31.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r31.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r31.u64 |= ctx.cr6.so ? 0x10 : 0;
	r31.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r31.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r31.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r31.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r28,r31,27,29,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x4;
	// or r6,r30,r5
	ctx.r6.u64 = r30.u64 | ctx.r5.u64;
	// rlwinm r31,r31,30,29,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x4;
	// or r5,r29,r4
	ctx.r5.u64 = r29.u64 | ctx.r4.u64;
	// or r4,r28,r31
	ctx.r4.u64 = r28.u64 | r31.u64;
	// lfsx f0,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// lfsx f11,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f12,f11,f7,f8
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f7.f64 : ctx.f8.f64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfsx f13,r8,r5
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f13,f10,f9
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f11,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f11,f11,f5,f4
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f5.f64 : ctx.f4.f64;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82189858) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r7,r9,16592
	ctx.r7.s64 = ctx.r9.s64 + 16592;
	// lfs f9,15048(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82189AE0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r7,256
	ctx.r9.s64 = ctx.r7.s64 + 256;
	// lfs f12,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,224(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,228(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,260(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f11,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f13,f8,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f13.f64)));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
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
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lfsx f12,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f12,f12,f13,f10
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82189bb4
	if (!ctx.cr6.lt) goto loc_82189BB4;
	// lfs f11,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82189b68
	if (!ctx.cr6.gt) goto loc_82189B68;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_82189B68:
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x82189b84
	if (!ctx.cr6.gt) goto loc_82189B84;
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_82189B84:
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82189BB4:
	// lwz r9,96(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82189ae0
	if (ctx.cr6.lt) goto loc_82189AE0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82194B08) {
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
	ctx.lr = 0x82194B10;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x82194B18;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// addi r5,r9,-31732
	ctx.r5.s64 = ctx.r9.s64 + -31732;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194B60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194B90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	f31.f64 = double(temp.f32);
	// lwz r10,180(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwa r9,16(r11)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 16));
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwa r11,12(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 12));
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
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
	// fdivs f29,f31,f13
	f29.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fdivs f28,f31,f0
	f28.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82194BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194C18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwa r9,92(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// lfs f0,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82194CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lfs f12,160(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f29,f13
	ctx.f11.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 * ctx.f12.f64));
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f28,f13,f31
	ctx.f13.f64 = double(float(-std::fma(f28.f64, ctx.f13.f64, -f31.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + f31.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 - ctx.f12.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x82194E30;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821A9870) {
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
	ctx.lr = 0x821A9878;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r4,136(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bctrl 
	ctx.lr = 0x821A98AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A98C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A98DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stb r10,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173638
	ctx.lr = 0x821A9908;
	sub_82173638(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r27,68(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r23,r11,-25252
	r23.s64 = ctx.r11.s64 + -25252;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r28,6092(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// addi r22,r10,-25320
	r22.s64 = ctx.r10.s64 + -25320;
	// lwz r11,100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a993c
	if (ctx.cr6.gt) goto loc_821A993C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A993C;
	sub_821231D0(ctx, base);
loc_821A993C:
	// lwz r26,68(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r27,96(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a9960
	if (ctx.cr6.gt) goto loc_821A9960;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A9960;
	sub_821231D0(ctx, base);
loc_821A9960:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,68(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 68);
	// li r24,3
	r24.s64 = 3;
	// li r25,16
	r25.s64 = 16;
	// lwz r8,108(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 108);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,112(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,100(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// divw r7,r28,r24
	ctx.r7.u64 = uint32_t((r24.s32 && !(r28.s32 == INT32_MIN && r24.s32 == -1)) ? r28.s32 / r24.s32 : 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A99A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A99BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A99D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// addi r5,r30,64
	ctx.r5.s64 = r30.s64 + 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173638
	ctx.lr = 0x821A99E8;
	sub_82173638(ctx, base);
	// lwz r29,68(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r31,6092(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a9a0c
	if (ctx.cr6.gt) goto loc_821A9A0C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A9A0C;
	sub_821231D0(ctx, base);
loc_821A9A0C:
	// lwz r28,68(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r29,96(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a9a30
	if (ctx.cr6.gt) goto loc_821A9A30;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821A9A30;
	sub_821231D0(ctx, base);
loc_821A9A30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,68(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,108(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r31,112(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// lwz r6,100(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// divw r7,r31,r24
	ctx.r7.u64 = uint32_t((r24.s32 && !(r31.s32 == INT32_MIN && r24.s32 == -1)) ? r31.s32 / r24.s32 : 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A9A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821B7648) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,-112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -112);
	// lfs f31,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	f31.f64 = double(temp.f32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821B7680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
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

DEFINE_REX_FUNC(sub_821BB160) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15048
	ctx.r3.s64 = ctx.r11.s64 + -15048;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BB460) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BB468;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821BB478;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-19428
	ctx.r11.s64 = ctx.r11.s64 + -19428;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BB48C;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bb4b0
	if (ctx.cr0.eq) goto loc_821BB4B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BB4A8;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bb4b4
	goto loc_821BB4B4;
loc_821BB4B0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821BB4B4:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BB4C0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BB4C8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bb53c
	if (ctx.cr0.eq) goto loc_821BB53C;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19484
	ctx.r4.s64 = ctx.r11.s64 + -19484;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BB4EC;
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
	ctx.lr = 0x821BB500;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bb52c
	if (ctx.cr0.eq) goto loc_821BB52C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-18920
	ctx.r10.s64 = ctx.r10.s64 + -18920;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bb530
	goto loc_821BB530;
loc_821BB52C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BB530:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bb540
	goto loc_821BB540;
loc_821BB53C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BB540:
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
	ctx.lr = 0x821BB558;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BB560;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821bb598
	if (ctx.cr0.eq) goto loc_821BB598;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BB58C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bb59c
	goto loc_821BB59C;
loc_821BB598:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BB59C:
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
	ctx.lr = 0x821BB5B4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BB5BC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bb5ec
	if (ctx.cr0.eq) goto loc_821BB5EC;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BB5E0;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bb5f0
	goto loc_821BB5F0;
loc_821BB5EC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BB5F0:
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
	ctx.lr = 0x821BB608;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C55F8) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821C62F0) {
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
	// lwz r3,384(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-16528
	ctx.r11.s64 = ctx.r11.s64 + -16528;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-16488
	ctx.r10.s64 = ctx.r10.s64 + -16488;
	// addi r9,r9,-16480
	ctx.r9.s64 = ctx.r9.s64 + -16480;
	// addi r11,r8,-16476
	ctx.r11.s64 = ctx.r8.s64 + -16476;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x821c634c
	if (ctx.cr6.eq) goto loc_821C634C;
	// bl 0x821357c8
	ctx.lr = 0x821C634C;
	sub_821357C8(ctx, base);
loc_821C634C:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821e78e8
	ctx.lr = 0x821C6354;
	sub_821E78E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x82120ac0
	ctx.lr = 0x821C6364;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821C636C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c637c
	if (ctx.cr0.eq) goto loc_821C637C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C637C;
	sub_8269CE98(ctx, base);
loc_821C637C:
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

DEFINE_REX_FUNC(sub_821CAF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821CAF90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,156(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 156);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cafc4
	if (ctx.cr0.eq) goto loc_821CAFC4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,160(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 160);
	// lwz r3,6100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// bl 0x82168600
	ctx.lr = 0x821CAFBC;
	sub_82168600(ctx, base);
	// stb r30,156(r31)
	REX_STORE_U8(r31.u32 + 156, r30.u8);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
loc_821CAFC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821CE0F0) {
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
	ctx.lr = 0x821CE104;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce114
	if (ctx.cr0.eq) goto loc_821CE114;
	// bl 0x821ce128
	ctx.lr = 0x821CE110;
	sub_821CE128(ctx, base);
	// b 0x821ce118
	goto loc_821CE118;
loc_821CE114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CE118:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CFC20) {
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
	ctx.lr = 0x821CFC28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,194(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 194);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq 0x821cfd0c
	if (ctx.cr0.eq) goto loc_821CFD0C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CFC5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cfd0c
	if (ctx.cr0.eq) goto loc_821CFD0C;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x821CFC6C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821cfcc8
	if (ctx.cr0.eq) goto loc_821CFCC8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82178a50
	ctx.lr = 0x821CFC88;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x821CFC94;
	sub_8213BC98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f2,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217f8a0
	ctx.lr = 0x821CFCC0;
	sub_8217F8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cfccc
	goto loc_821CFCCC;
loc_821CFCC8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821CFCCC:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CFCD8;
	sub_821D3988(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cfcf0
	if (ctx.cr0.eq) goto loc_821CFCF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821CFCF0;
	sub_82120AC0(ctx, base);
loc_821CFCF0:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x821CFD08;
	sub_82120B20(ctx, base);
	// b 0x821cfd10
	goto loc_821CFD10;
loc_821CFD0C:
	// stb r29,194(r31)
	REX_STORE_U8(r31.u32 + 194, r29.u8);
loc_821CFD10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821D7E38) {
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
	ctx.lr = 0x821D7E40;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x821613d8
	ctx.lr = 0x821D7E5C;
	sub_821613D8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821d7ef8
	if (!ctx.cr6.gt) goto loc_821D7EF8;
	// lis r26,-32106
	r26.s64 = -2104098816;
loc_821D7E70:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d7ef8
	if (ctx.cr0.eq) goto loc_821D7EF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821D7E88;
	sub_82120AC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5c88
	ctx.lr = 0x821D7E94;
	sub_821A5C88(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821D7EA4;
	sub_821613D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x821D7EB0;
	sub_82154B70(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
	// bl 0x82124e10
	ctx.lr = 0x821D7EDC;
	sub_82124E10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821D7EEC;
	sub_82120AC0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// blt cr6,0x821d7e70
	if (ctx.cr6.lt) goto loc_821D7E70;
loc_821D7EF8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821DC550) {
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
	ctx.lr = 0x821DC558;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,12204
	ctx.r11.s64 = ctx.r11.s64 + 12204;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r5,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r5.u32);
	// stb r6,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r6.u8);
	// stw r5,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r5.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821DC5E4;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821dc614
	if (ctx.cr0.eq) goto loc_821DC614;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12148
	ctx.r4.s64 = ctx.r11.s64 + 12148;
	// bl 0x82120600
	ctx.lr = 0x821DC5FC;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r27,1
	r27.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x821DC610;
	sub_82191600(ctx, base);
	// b 0x821dc618
	goto loc_821DC618;
loc_821DC614:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821DC618:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821DC62C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dc644
	if (ctx.cr0.eq) goto loc_821DC644;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821DC644;
	sub_82120AC0(ctx, base);
loc_821DC644:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821E1BC0) {
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
	ctx.lr = 0x821E1BC8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r6,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r6.u32);
	// addi r30,r11,-24696
	r30.s64 = ctx.r11.s64 + -24696;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1BF0;
	sub_8215F338(ctx, base);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1C00;
	sub_8215F338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r24,-32242
	r24.s64 = -2113011712;
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r23,-32242
	r23.s64 = -2113011712;
	// lis r22,-32242
	r22.s64 = -2113011712;
	// addi r10,r23,13240
	ctx.r10.s64 = r23.s64 + 13240;
	// addi r9,r22,13408
	ctx.r9.s64 = r22.s64 + 13408;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r11,r24,13252
	ctx.r11.s64 = r24.s64 + 13252;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r25,-32242
	r25.s64 = -2113011712;
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lis r31,-32242
	r31.s64 = -2113011712;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r21,-32242
	r21.s64 = -2113011712;
	// lis r26,-32242
	r26.s64 = -2113011712;
	// lis r27,-32242
	r27.s64 = -2113011712;
	// lis r28,-32242
	r28.s64 = -2113011712;
	// lis r29,-32242
	r29.s64 = -2113011712;
	// lis r30,-32242
	r30.s64 = -2113011712;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r25,13268
	r25.s64 = r25.s64 + 13268;
	// addi r31,r31,13328
	r31.s64 = r31.s64 + 13328;
	// addi r3,r3,19476
	ctx.r3.s64 = ctx.r3.s64 + 19476;
	// stw r25,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// addi r4,r4,13312
	ctx.r4.s64 = ctx.r4.s64 + 13312;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// addi r7,r7,13296
	ctx.r7.s64 = ctx.r7.s64 + 13296;
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r8,r8,13200
	ctx.r8.s64 = ctx.r8.s64 + 13200;
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r24,r21,13396
	r24.s64 = r21.s64 + 13396;
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// addi r23,r26,13384
	r23.s64 = r26.s64 + 13384;
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// addi r22,r27,13372
	r22.s64 = r27.s64 + 13372;
	// addi r21,r28,13360
	r21.s64 = r28.s64 + 13360;
	// addi r20,r29,13348
	r20.s64 = r29.s64 + 13348;
	// addi r19,r30,13340
	r19.s64 = r30.s64 + 13340;
	// addi r18,r5,-17164
	r18.s64 = ctx.r5.s64 + -17164;
	// addi r17,r6,-17156
	r17.s64 = ctx.r6.s64 + -17156;
	// addi r16,r9,13192
	r16.s64 = ctx.r9.s64 + 13192;
	// addi r15,r10,-17296
	r15.s64 = ctx.r10.s64 + -17296;
	// addi r14,r11,-17344
	r14.s64 = ctx.r11.s64 + -17344;
loc_821E1CE8:
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821e1d10
	if (!ctx.cr6.eq) goto loc_821E1D10;
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
	// b 0x821e1d14
	goto loc_821E1D14;
loc_821E1D10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E1D14:
	// lwz r27,124(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821e21bc
	if (!ctx.cr6.lt) goto loc_821E21BC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821E1D28;
	sub_8215F1B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821e21d0
	ctx.lr = 0x821E1D38;
	sub_821E21D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1D48;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821E1D4C;
	sub_8215FA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1D5C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821E1D60;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x821E1D70;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e1dc8
	if (!ctx.cr0.eq) goto loc_821E1DC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8215f338
	ctx.lr = 0x821E1D84;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821e1d98
	if (!ctx.cr6.eq) goto loc_821E1D98;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821e1d9c
	goto loc_821E1D9C;
loc_821E1D98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E1D9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e21a0
	if (ctx.cr0.eq) goto loc_821E21A0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,508(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,484(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// bl 0x821e1bc0
	ctx.lr = 0x821E1DB8;
	sub_821E1BC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e21a0
	if (!ctx.cr0.eq) goto loc_821E21A0;
loc_821E1DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e21c0
	goto loc_821E21C0;
loc_821E1DC8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82125d00
	ctx.lr = 0x821E1DD4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e1e34
	if (!ctx.cr0.eq) goto loc_821E1E34;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1DEC;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215fb50
	ctx.lr = 0x821E1DF4;
	sub_8215FB50(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1E00;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215fb50
	ctx.lr = 0x821E1E08;
	sub_8215FB50(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821e1e1c
	if (ctx.cr6.lt) goto loc_821E1E1C;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821e1e20
	goto loc_821E1E20;
loc_821E1E1C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821E1E20:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// b 0x821e1e9c
	goto loc_821E1E9C;
loc_821E1E34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82125d00
	ctx.lr = 0x821E1E40;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e1ea8
	if (!ctx.cr0.eq) goto loc_821E1EA8;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x8215f338
	ctx.lr = 0x821E1E60;
	sub_8215F338(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x82166f38
	ctx.lr = 0x821E1E68;
	sub_82166F38(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1E74;
	sub_8215F338(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x82166f38
	ctx.lr = 0x821E1E7C;
	sub_82166F38(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821e1e90
	if (ctx.cr6.lt) goto loc_821E1E90;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821e1e94
	goto loc_821E1E94;
loc_821E1E90:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821E1E94:
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
loc_821E1E9C:
	// lwz r3,508(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82170190
	ctx.lr = 0x821E1EA4;
	sub_82170190(ctx, base);
	// b 0x821e21a0
	goto loc_821E21A0;
loc_821E1EA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82125d00
	ctx.lr = 0x821E1EB4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e1ed0
	if (ctx.cr0.eq) goto loc_821E1ED0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82125d00
	ctx.lr = 0x821E1EC8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e21a0
	if (!ctx.cr0.eq) goto loc_821E21A0;
loc_821E1ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x821E1EFC;
	sub_8215F338(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8215fb50
	ctx.lr = 0x821E1F04;
	sub_8215FB50(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1F10;
	sub_8215F338(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821672e8
	ctx.lr = 0x821E1F18;
	sub_821672E8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1F24;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821672e8
	ctx.lr = 0x821E1F2C;
	sub_821672E8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1F38;
	sub_8215F338(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x82167388
	ctx.lr = 0x821E1F40;
	sub_82167388(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1F4C;
	sub_8215F338(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82167388
	ctx.lr = 0x821E1F54;
	sub_82167388(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821E1F60;
	sub_8215F338(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82167388
	ctx.lr = 0x821E1F68;
	sub_82167388(ctx, base);
	// lwz r27,132(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x821e1f78
	if (!ctx.cr6.eq) goto loc_821E1F78;
	// li r27,1
	r27.s64 = 1;
loc_821E1F78:
	// lwz r25,144(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x821e1f88
	if (!ctx.cr6.eq) goto loc_821E1F88;
	// li r25,1
	r25.s64 = 1;
loc_821E1F88:
	// lwz r26,116(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// bne cr6,0x821e1f98
	if (!ctx.cr6.eq) goto loc_821E1F98;
	// li r26,2
	r26.s64 = 2;
loc_821E1F98:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821E1FA8;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8215f338
	ctx.lr = 0x821E1FB4;
	sub_8215F338(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x8215fba8
	ctx.lr = 0x821E1FBC;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq 0x821e21ac
	if (ctx.cr0.eq) goto loc_821E21AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821E1FD4;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82125d00
	ctx.lr = 0x821E1FE0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e20b4
	if (!ctx.cr0.eq) goto loc_821E20B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8215f338
	ctx.lr = 0x821E1FF4;
	sub_8215F338(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x8215fba8
	ctx.lr = 0x821E1FFC;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2020
	if (ctx.cr0.eq) goto loc_821E2020;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x8215f338
	ctx.lr = 0x821E2010;
	sub_8215F338(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x8215f3b8
	ctx.lr = 0x821E2018;
	sub_8215F3B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e2034
	if (!ctx.cr0.eq) goto loc_821E2034;
loc_821E2020:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8215f338
	ctx.lr = 0x821E202C;
	sub_8215F338(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x8215fba8
	ctx.lr = 0x821E2034;
	sub_8215FBA8(ctx, base);
loc_821E2034:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x821883a0
	ctx.lr = 0x821E2044;
	sub_821883A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e217c
	if (ctx.cr0.eq) goto loc_821E217C;
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821e2060
	if (!ctx.cr6.lt) goto loc_821E2060;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
loc_821E2060:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821e2074
	if (!ctx.cr6.lt) goto loc_821E2074;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_821E2074:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821e2088
	if (ctx.cr6.lt) goto loc_821E2088;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821e208c
	goto loc_821E208C;
loc_821E2088:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821E208C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,508(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x82170228
	ctx.lr = 0x821E20B0;
	sub_82170228(ctx, base);
	// b 0x821e217c
	goto loc_821E217C;
loc_821E20B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82125d00
	ctx.lr = 0x821E20C0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e217c
	if (!ctx.cr0.eq) goto loc_821E217C;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,-15312(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15312);
	// lwz r31,6040(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 6040);
	// bl 0x82120600
	ctx.lr = 0x821E20E0;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E20FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x821E2110;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e217c
	if (ctx.cr0.eq) goto loc_821E217C;
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821e212c
	if (!ctx.cr6.lt) goto loc_821E212C;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
loc_821E212C:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821e2140
	if (!ctx.cr6.lt) goto loc_821E2140;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_821E2140:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821e2154
	if (ctx.cr6.lt) goto loc_821E2154;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821e2158
	goto loc_821E2158;
loc_821E2154:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821E2158:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,508(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x82170228
	ctx.lr = 0x821E217C;
	sub_82170228(ctx, base);
loc_821E217C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821E218C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821E219C;
	sub_82120AC0(ctx, base);
	// lwz r27,124(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_821E21A0:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x821e1ce8
	goto loc_821E1CE8;
loc_821E21AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821E21B8;
	sub_82120AC0(ctx, base);
	// b 0x821e1dc0
	goto loc_821E1DC0;
loc_821E21BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E21C0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8220D3A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14260
	ctx.r3.s64 = ctx.r11.s64 + -14260;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220D9B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14244
	ctx.r3.s64 = ctx.r11.s64 + -14244;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220DE50) {
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
	// bl 0x822e84b8
	ctx.lr = 0x8220DE6C;
	sub_822E84B8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-31048
	ctx.r4.s64 = ctx.r10.s64 + -31048;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DEA4;
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

DEFINE_REX_FUNC(sub_82211F88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82212028
	if (ctx.cr0.eq) goto loc_82212028;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,116(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lfs f12,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,248
	ctx.r5.s64 = r31.s64 + 248;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f6,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f6,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f9,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,6096(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6096);
	// fmuls f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82136970
	ctx.lr = 0x82212028;
	sub_82136970(ctx, base);
loc_82212028:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221203C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8221C0E8) {
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
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r11,30316
	ctx.r5.s64 = ctx.r11.s64 + 30316;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8221C11C;
	sub_8216B6A8(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8221C134;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x8216bc98
	ctx.lr = 0x8221C144;
	sub_8216BC98(ctx, base);
	// stw r31,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r5,r11,-26896
	ctx.r5.s64 = ctx.r11.s64 + -26896;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8221C160;
	sub_8216B6A8(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8221C178;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r30,r11,-26576
	r30.s64 = ctx.r11.s64 + -26576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216bc98
	ctx.lr = 0x8221C18C;
	sub_8216BC98(ctx, base);
	// stw r31,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r5,r11,-26160
	ctx.r5.s64 = ctx.r11.s64 + -26160;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8216b6a8
	ctx.lr = 0x8221C1A8;
	sub_8216B6A8(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8216b6a8
	ctx.lr = 0x8221C1C0;
	sub_8216B6A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x8216bc98
	ctx.lr = 0x8221C1CC;
	sub_8216BC98(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
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

DEFINE_REX_FUNC(sub_82225998) {
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
	// lbz r11,752(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 752);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822259f0
	if (ctx.cr0.eq) goto loc_822259F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82126320
	ctx.lr = 0x822259C8;
	sub_82126320(ctx, base);
	// addi r4,r31,704
	ctx.r4.s64 = r31.s64 + 704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821262a8
	ctx.lr = 0x822259D4;
	sub_821262A8(ctx, base);
	// addi r4,r31,688
	ctx.r4.s64 = r31.s64 + 688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216cfa0
	ctx.lr = 0x822259E0;
	sub_8216CFA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,720
	ctx.r3.s64 = r31.s64 + 720;
	// bl 0x821d5bd0
	ctx.lr = 0x822259F0;
	sub_821D5BD0(ctx, base);
loc_822259F0:
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

DEFINE_REX_FUNC(sub_822280C0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x822280E0;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-23764
	ctx.r11.s64 = ctx.r11.s64 + -23764;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822280F4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228114
	if (ctx.cr0.eq) goto loc_82228114;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222810C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82228118
	goto loc_82228118;
loc_82228114:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82228118:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82228124;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8222812C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822281a4
	if (ctx.cr0.eq) goto loc_822281A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-19340
	ctx.r4.s64 = ctx.r10.s64 + -19340;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82228154;
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
	ctx.lr = 0x82228168;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228194
	if (ctx.cr0.eq) goto loc_82228194;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-32288
	ctx.r10.s64 = ctx.r10.s64 + -32288;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82228198
	goto loc_82228198;
loc_82228194:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82228198:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822281a8
	goto loc_822281A8;
loc_822281A4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822281A8:
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
	ctx.lr = 0x822281C0;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8222B7F8) {
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
	ctx.lr = 0x8222B80C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222b81c
	if (ctx.cr0.eq) goto loc_8222B81C;
	// bl 0x8222b6a0
	ctx.lr = 0x8222B818;
	sub_8222B6A0(ctx, base);
	// b 0x8222b820
	goto loc_8222B820;
loc_8222B81C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222D488) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,556(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lfs f11,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,568(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 568);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8222D4FC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x8222D50C;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_82233558) {
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
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223358c
	if (ctx.cr0.eq) goto loc_8223358C;
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822335d8
	if (ctx.cr6.eq) goto loc_822335D8;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x821e4728
	ctx.lr = 0x82233588;
	sub_821E4728(ctx, base);
	// b 0x822335d8
	goto loc_822335D8;
loc_8223358C:
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
	// bl 0x822335f0
	ctx.lr = 0x822335D8;
	sub_822335F0(ctx, base);
loc_822335D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237B70) {
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
	// lbz r11,376(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 376);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82237c3c
	if (ctx.cr0.eq) goto loc_82237C3C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82237c3c
	if (!ctx.cr6.gt) goto loc_82237C3C;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237bd8
	if (ctx.cr6.eq) goto loc_82237BD8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x82237BD4;
	sub_8215F338(ctx, base);
	// b 0x82237be0
	goto loc_82237BE0;
loc_82237BD8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_82237BE0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-18488
	ctx.r4.s64 = ctx.r11.s64 + -18488;
	// bl 0x8215f338
	ctx.lr = 0x82237BEC;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,20716
	ctx.r4.s64 = ctx.r11.s64 + 20716;
	// bl 0x8215f338
	ctx.lr = 0x82237BFC;
	sub_8215F338(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x8215fba8
	ctx.lr = 0x82237C04;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-18480
	ctx.r4.s64 = ctx.r11.s64 + -18480;
	// bl 0x8215f338
	ctx.lr = 0x82237C14;
	sub_8215F338(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// bl 0x8215fba8
	ctx.lr = 0x82237C1C;
	sub_8215FBA8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,19936
	ctx.r4.s64 = ctx.r11.s64 + 19936;
	// bl 0x8215f338
	ctx.lr = 0x82237C2C;
	sub_8215F338(ctx, base);
	// addi r4,r31,280
	ctx.r4.s64 = r31.s64 + 280;
	// bl 0x8215fba8
	ctx.lr = 0x82237C34;
	sub_8215FBA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,384(r31)
	REX_STORE_U8(r31.u32 + 384, ctx.r11.u8);
loc_82237C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822764c8
	ctx.lr = 0x82237C44;
	sub_822764C8(ctx, base);
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

DEFINE_REX_FUNC(sub_8223FED0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13452
	ctx.r3.s64 = ctx.r11.s64 + -13452;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82240368) {
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
	ctx.lr = 0x82240370;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r29,r3,3992
	r29.s64 = ctx.r3.s64 + 3992;
	// li r30,3
	r30.s64 = 3;
loc_82240384:
	// lwzu r3,-12(r29)
	ea = -12 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x8269d1b8
	ctx.lr = 0x8224038C;
	sub_8269D1B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82240384
	if (!ctx.cr0.lt) goto loc_82240384;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3908
	ctx.r3.s64 = r31.s64 + 3908;
	// bl 0x82120ac0
	ctx.lr = 0x822403A4;
	sub_82120AC0(ctx, base);
	// lwz r3,3880(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822403b4
	if (ctx.cr6.eq) goto loc_822403B4;
	// bl 0x8269ce98
	ctx.lr = 0x822403B4;
	sub_8269CE98(ctx, base);
loc_822403B4:
	// li r29,0
	r29.s64 = 0;
	// stw r29,3880(r31)
	REX_STORE_U32(r31.u32 + 3880, r29.u32);
	// stw r29,3884(r31)
	REX_STORE_U32(r31.u32 + 3884, r29.u32);
	// stw r29,3888(r31)
	REX_STORE_U32(r31.u32 + 3888, r29.u32);
	// lwz r3,3864(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822403d4
	if (ctx.cr6.eq) goto loc_822403D4;
	// bl 0x8269ce98
	ctx.lr = 0x822403D4;
	sub_8269CE98(ctx, base);
loc_822403D4:
	// stw r29,3864(r31)
	REX_STORE_U32(r31.u32 + 3864, r29.u32);
	// addi r30,r31,3848
	r30.s64 = r31.s64 + 3848;
	// stw r29,3868(r31)
	REX_STORE_U32(r31.u32 + 3868, r29.u32);
	// stw r29,3872(r31)
	REX_STORE_U32(r31.u32 + 3872, r29.u32);
	// lwz r28,3848(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8224041c
	if (!ctx.cr6.gt) goto loc_8224041C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_822403F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82240410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,304
	r27.s64 = r27.s64 + 304;
	// bne 0x822403f4
	if (!ctx.cr0.eq) goto loc_822403F4;
loc_8224041C:
	// lbz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82240430
	if (ctx.cr0.eq) goto loc_82240430;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x82240430;
	sub_8269D1B8(ctx, base);
loc_82240430:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,12(r30)
	REX_STORE_U8(r30.u32 + 12, ctx.r11.u8);
	// addi r3,r31,3816
	ctx.r3.s64 = r31.s64 + 3816;
	// bl 0x82120ac0
	ctx.lr = 0x82240454;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3788
	ctx.r3.s64 = r31.s64 + 3788;
	// bl 0x82120ac0
	ctx.lr = 0x82240464;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278050
	ctx.lr = 0x8224046C;
	sub_82278050(ctx, base);
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224047c
	if (ctx.cr0.eq) goto loc_8224047C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224047C;
	sub_8269CE98(ctx, base);
loc_8224047C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82246958) {
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
	ctx.lr = 0x82246960;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x8224697C;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,120(r31)
	REX_STORE_U32(r31.u32 + 120, r27.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-15220
	ctx.r11.s64 = ctx.r11.s64 + -15220;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// bl 0x822f6280
	ctx.lr = 0x822469A0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822469ec
	if (ctx.cr0.eq) goto loc_822469EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16848
	ctx.r4.s64 = ctx.r11.s64 + 16848;
	// bl 0x82120600
	ctx.lr = 0x822469B8;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x822469CC;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-11416
	ctx.r10.s64 = ctx.r10.s64 + -11416;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x822469f0
	goto loc_822469F0;
loc_822469EC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822469F0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82246A00;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246a18
	if (ctx.cr0.eq) goto loc_82246A18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82246A18;
	sub_82120AC0(ctx, base);
loc_82246A18:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82246A20;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246a40
	if (ctx.cr0.eq) goto loc_82246A40;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82246A38;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82246a44
	goto loc_82246A44;
loc_82246A40:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82246A44:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82246A50;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82246A58;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82246acc
	if (ctx.cr0.eq) goto loc_82246ACC;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82246A7C;
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
	ctx.lr = 0x82246A90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246abc
	if (ctx.cr0.eq) goto loc_82246ABC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,31416
	ctx.r10.s64 = ctx.r10.s64 + 31416;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82246ac0
	goto loc_82246AC0;
loc_82246ABC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82246AC0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82246ad0
	goto loc_82246AD0;
loc_82246ACC:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82246AD0:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82246AE8;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82252360) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-11740
	ctx.r11.s64 = ctx.r11.s64 + -11740;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x82252390;
	sub_8269D1B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822523a0
	if (ctx.cr0.eq) goto loc_822523A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822523A0;
	sub_8269CE98(ctx, base);
loc_822523A0:
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

DEFINE_REX_FUNC(sub_82253938) {
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
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82253980
	if (ctx.cr6.eq) goto loc_82253980;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82253980:
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

DEFINE_REX_FUNC(sub_82255600) {
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
	// bl 0x821bf1e8
	ctx.lr = 0x82255628;
	sub_821BF1E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// beq 0x8225563c
	if (ctx.cr0.eq) goto loc_8225563C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8225564c
	goto loc_8225564C;
loc_8225563C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// bge 0x82255650
	if (!ctx.cr0.lt) goto loc_82255650;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225564C:
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
loc_82255650:
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

DEFINE_REX_FUNC(sub_822576E0) {
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
	ctx.lr = 0x822576E8;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82289838
	ctx.lr = 0x822576FC;
	sub_82289838(ctx, base);
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 180);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257ad8
	if (ctx.cr6.eq) goto loc_82257AD8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r31,184(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6080(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6080);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225772C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// andc r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ~r31.u64;
	// rlwinm. r10,r10,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,184(r29)
	REX_STORE_U32(r29.u32 + 184, ctx.r11.u32);
	// beq 0x82257ad8
	if (ctx.cr0.eq) goto loc_82257AD8;
	// lwz r11,188(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 188);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r29,152
	ctx.r3.s64 = r29.s64 + 152;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,16568
	ctx.r4.s64 = ctx.r10.s64 + 16568;
	// stw r11,188(r29)
	REX_STORE_U32(r29.u32 + 188, ctx.r11.u32);
	// bl 0x82125d00
	ctx.lr = 0x8225775C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82257ad8
	if (!ctx.cr0.eq) goto loc_82257AD8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,188(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 188);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-10348
	ctx.r4.s64 = ctx.r11.s64 + -10348;
	// bl 0x826a0568
	ctx.lr = 0x82257778;
	sub_826A0568(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,18420
	ctx.r4.s64 = ctx.r11.s64 + 18420;
	// bl 0x82120600
	ctx.lr = 0x82257788;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x8213ae28
	ctx.lr = 0x82257798;
	sub_8213AE28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x822577AC;
	sub_82120AC0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x822577B8;
	sub_82120600(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82120b20
	ctx.lr = 0x822577CC;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822577DC;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82257ad8
	if (ctx.cr6.eq) goto loc_82257AD8;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 180);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82145710
	ctx.lr = 0x822577FC;
	sub_82145710(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r6,r11,-31968
	ctx.r6.s64 = ctx.r11.s64 + -31968;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x82179780
	ctx.lr = 0x82257834;
	sub_82179780(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28052
	ctx.r4.s64 = ctx.r11.s64 + -28052;
	// lwz r31,128(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 128);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82257af8
	ctx.lr = 0x8225786C;
	sub_82257AF8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28036
	ctx.r4.s64 = ctx.r11.s64 + -28036;
	// bl 0x82257af8
	ctx.lr = 0x82257880;
	sub_82257AF8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-28020
	ctx.r4.s64 = ctx.r11.s64 + -28020;
	// bl 0x82257af8
	ctx.lr = 0x82257894;
	sub_82257AF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lwz r11,468(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 468);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmsubs f7,f13,f31,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -ctx.f9.f64)));
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f9,f8,f8
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f9,f7,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f9.f64)));
	// fmadds f9,f10,f10,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fdivs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmsubs f7,f10,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fmsubs f6,f8,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmsubs f5,f0,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f4,f5,f5,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f4.f64)));
	// fmadds f4,f6,f6,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f4.f64)));
	// fsqrts f4,f4
	ctx.f4.f64 = double(float(sqrt(ctx.f4.f64)));
	// fdivs f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// fmuls f11,f4,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
loc_82257974:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82257974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82257974;
	// stfs f9,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821264e8
	ctx.lr = 0x822579B0;
	sub_821264E8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f30,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	f30.f64 = double(temp.f32);
	// addi r4,r11,-28004
	ctx.r4.s64 = ctx.r11.s64 + -28004;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x82257af8
	ctx.lr = 0x822579CC;
	sub_82257AF8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-27988
	ctx.r4.s64 = ctx.r11.s64 + -27988;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x82257af8
	ctx.lr = 0x822579E4;
	sub_82257AF8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-27972
	ctx.r4.s64 = ctx.r11.s64 + -27972;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x82257af8
	ctx.lr = 0x822579FC;
	sub_82257AF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dc4e0
	ctx.lr = 0x82257A04;
	sub_821DC4E0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82257ad4
	if (ctx.cr0.eq) goto loc_82257AD4;
	// lwz r11,188(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 188);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mulli r11,r11,50
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(50));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r28)
	REX_STORE_U64(r28.u32 + 88, ctx.r11.u64);
	// lwz r3,192(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82257ad4
	if (ctx.cr6.eq) goto loc_82257AD4;
	// bl 0x821dc4e0
	ctx.lr = 0x82257A48;
	sub_821DC4E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82257ad4
	if (ctx.cr0.eq) goto loc_82257AD4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-20932
	ctx.r4.s64 = ctx.r11.s64 + -20932;
	// bl 0x82120600
	ctx.lr = 0x82257A60;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd0c8
	ctx.lr = 0x82257A6C;
	sub_821DD0C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82257A80;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82257ad4
	if (ctx.cr6.eq) goto loc_82257AD4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd350
	ctx.lr = 0x82257A94;
	sub_821DD350(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257ad4
	if (ctx.cr0.eq) goto loc_82257AD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd3e0
	ctx.lr = 0x82257AA4;
	sub_821DD3E0(ctx, base);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x82145710
	ctx.lr = 0x82257AB8;
	sub_82145710(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82257ad4
	if (ctx.cr6.eq) goto loc_82257AD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82257AD4:
	// stw r30,192(r29)
	REX_STORE_U32(r29.u32 + 192, r30.u32);
loc_82257AD8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82278F98) {
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
	ctx.lr = 0x82278FC0;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82278FCC;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x82171fa0
	ctx.lr = 0x82278FD8;
	sub_82171FA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82278FE8;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_8227C0E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8227C0F0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227c184
	if (ctx.cr0.eq) goto loc_8227C184;
	// addi r30,r31,284
	r30.s64 = r31.s64 + 284;
	// beq cr6,0x8227c144
	if (ctx.cr6.eq) goto loc_8227C144;
loc_8227C130:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130d00
	ctx.lr = 0x8227C138;
	sub_82130D00(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227c130
	if (!ctx.cr6.eq) goto loc_8227C130;
loc_8227C144:
	// lwz r30,252(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8227c160
	if (ctx.cr6.eq) goto loc_8227C160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208770
	ctx.lr = 0x8227C158;
	sub_82208770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8227C160;
	sub_8269CE98(ctx, base);
loc_8227C160:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r10.u32);
	// stw r9,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// lfd f0,136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// stfd f0,160(r31)
	REX_STORE_U64(r31.u32 + 160, ctx.f0.u64);
	// b 0x8227c260
	goto loc_8227C260;
loc_8227C184:
	// beq cr6,0x8227c204
	if (ctx.cr6.eq) goto loc_8227C204;
	// addi r28,r31,284
	r28.s64 = r31.s64 + 284;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130d70
	ctx.lr = 0x8227C194;
	sub_82130D70(ctx, base);
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120780
	ctx.lr = 0x8227C1A0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227c204
	if (ctx.cr0.eq) goto loc_8227C204;
	// lwz r29,252(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8227c1c4
	if (ctx.cr6.eq) goto loc_8227C1C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82208770
	ctx.lr = 0x8227C1BC;
	sub_82208770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8227C1C4;
	sub_8269CE98(ctx, base);
loc_8227C1C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130d70
	ctx.lr = 0x8227C1CC;
	sub_82130D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x8227C1E0;
	sub_82120B20(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x8227C1E8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227c1fc
	if (ctx.cr0.eq) goto loc_8227C1FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82208610
	ctx.lr = 0x8227C1F8;
	sub_82208610(ctx, base);
	// b 0x8227c200
	goto loc_8227C200;
loc_8227C1FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227C200:
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
loc_8227C204:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227c260
	if (ctx.cr6.eq) goto loc_8227C260;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227c248
	if (ctx.cr0.eq) goto loc_8227C248;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227c260
	if (ctx.cr6.eq) goto loc_8227C260;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// b 0x8227c260
	goto loc_8227C260;
loc_8227C248:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,255
	ctx.r5.s64 = 255;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227C260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82286578) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-14152
	ctx.r11.s64 = ctx.r11.s64 + -14152;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x822865B0;
	sub_82120AC0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2256
	ctx.r10.s64 = ctx.r10.s64 + 2256;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// stw r8,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stb r7,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r7.u8);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stb r11,73(r31)
	REX_STORE_U8(r31.u32 + 73, ctx.r11.u8);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stb r11,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r11.u8);
	// stb r11,153(r31)
	REX_STORE_U8(r31.u32 + 153, ctx.r11.u8);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stb r11,160(r31)
	REX_STORE_U8(r31.u32 + 160, ctx.r11.u8);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// bl 0x8216fb28
	ctx.lr = 0x82286630;
	sub_8216FB28(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x8216fb28
	ctx.lr = 0x82286638;
	sub_8216FB28(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x8216fb28
	ctx.lr = 0x82286640;
	sub_8216FB28(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82286650;
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

DEFINE_REX_FUNC(sub_8228BB70) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BB9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228bbfc
	if (!ctx.cr0.eq) goto loc_8228BBFC;
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
	ctx.lr = 0x8228BBBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8228bbfc
	if (!ctx.cr6.eq) goto loc_8228BBFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// lwz r3,6268(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228BBF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8228bc04
	goto loc_8228BC04;
loc_8228BBFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228bc18
	ctx.lr = 0x8228BC04;
	sub_8228BC18(ctx, base);
loc_8228BC04:
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

DEFINE_REX_FUNC(sub_8228ED70) {
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
	ctx.lr = 0x8228ED78;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,6096(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6096);
	// beq cr6,0x8228eda8
	if (ctx.cr6.eq) goto loc_8228EDA8;
	// lwz r24,96(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x8228edac
	goto loc_8228EDAC;
loc_8228EDA8:
	// lwz r24,24(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8228EDAC:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228edc0
	if (ctx.cr6.eq) goto loc_8228EDC0;
	// lwz r29,96(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x8228edc4
	goto loc_8228EDC4;
loc_8228EDC0:
	// lwz r29,24(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8228EDC4:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228edd8
	if (ctx.cr6.eq) goto loc_8228EDD8;
	// lwz r25,96(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x8228eddc
	goto loc_8228EDDC;
loc_8228EDD8:
	// lwz r25,24(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8228EDDC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228edf0
	if (ctx.cr6.eq) goto loc_8228EDF0;
	// lwz r26,96(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x8228edf4
	goto loc_8228EDF4;
loc_8228EDF0:
	// lwz r26,24(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8228EDF4:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228ee08
	if (ctx.cr6.eq) goto loc_8228EE08;
	// lwz r27,96(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x8228ee0c
	goto loc_8228EE0C;
loc_8228EE08:
	// lwz r27,24(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8228EE0C:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EE28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228ee58
	if (ctx.cr6.eq) goto loc_8228EE58;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228EE58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8228eecc
	if (ctx.cr6.eq) goto loc_8228EECC;
	// lwa r10,16(r27)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r27.u32 + 16));
	// lfs f11,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,952(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,956(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 956);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(f31.f64 / ctx.f11.f64));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x8228EECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228EECC:
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228eee0
	if (ctx.cr0.eq) goto loc_8228EEE0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// b 0x8228ef18
	goto loc_8228EF18;
loc_8228EEE0:
	// lbz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228ef14
	if (ctx.cr0.eq) goto loc_8228EF14;
	// lbz r11,65(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228ef18
	if (ctx.cr0.eq) goto loc_8228EF18;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f13,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8228ef18
	if (ctx.cr6.lt) goto loc_8228EF18;
	// mr r29,r25
	r29.u64 = r25.u64;
	// b 0x8228ef18
	goto loc_8228EF18;
loc_8228EF14:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8228EF18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// beq cr6,0x8228efa4
	if (ctx.cr6.eq) goto loc_8228EFA4;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EF44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EF64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EF88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EFA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228EFA4:
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8228f028
	if (ctx.cr6.eq) goto loc_8228F028;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F00C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228F028:
	// lwa r10,12(r29)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r29.u32 + 12));
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,16(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r29.u32 + 16));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 / ctx.f0.f64));
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 / ctx.f12.f64));
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,708(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 708);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lfs f11,20(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f10,24(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f9,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f8,8(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// std r9,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fadds f9,f8,f6
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822B6F48) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x822B6F50;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 384);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b7650
	if (ctx.cr0.eq) goto loc_822B7650;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r3,336
	r30.s64 = ctx.r3.s64 + 336;
	// stb r29,372(r3)
	REX_STORE_U8(ctx.r3.u32 + 372, r29.u8);
	// addi r9,r30,16
	ctx.r9.s64 = r30.s64 + 16;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,356(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// stfs f31,360(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// stfs f31,364(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// stfs f31,368(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// lhz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 352);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// sth r11,352(r3)
	REX_STORE_U16(ctx.r3.u32 + 352, ctx.r11.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r29,384(r3)
	REX_STORE_U8(ctx.r3.u32 + 384, r29.u8);
	// blt cr6,0x822b764c
	if (ctx.cr6.lt) goto loc_822B764C;
	// beq cr6,0x822b755c
	if (ctx.cr6.eq) goto loc_822B755C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822b73a4
	if (ctx.cr6.lt) goto loc_822B73A4;
	// beq cr6,0x822b71fc
	if (ctx.cr6.eq) goto loc_822B71FC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822b764c
	if (!ctx.cr6.lt) goto loc_822B764C;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r3,64
	ctx.r7.s64 = ctx.r3.s64 + 64;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b7b78
	ctx.lr = 0x822B6FF8;
	sub_822B7B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b71d4
	if (ctx.cr0.eq) goto loc_822B71D4;
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// lfs f11,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// lfs f10,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f8,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f8,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f6,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f5,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f3,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r9,256(r31)
	REX_STORE_U64(r31.u32 + 256, ctx.r9.u64);
	// std r10,264(r31)
	REX_STORE_U64(r31.u32 + 264, ctx.r10.u64);
	// lfs f10,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	f30.f64 = double(temp.f32);
	// lfs f5,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	f29.f64 = double(temp.f32);
	// lfs f0,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f7,f12,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f29,f29,f30
	f29.f64 = double(float(f29.f64 * f30.f64));
	// fmuls f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * f30.f64));
	// fmuls f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 * ctx.f5.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// addi r9,r31,288
	ctx.r9.s64 = r31.s64 + 288;
	// fadds f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// addi r4,r31,352
	ctx.r4.s64 = r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r11.u64);
	// std r9,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r9.u64);
	// lfs f12,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
loc_822B71C4:
	// std r10,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r10.u64);
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
loc_822B71CC:
	// bl 0x822b6ea8
	ctx.lr = 0x822B71D0;
	sub_822B6EA8(ctx, base);
	// b 0x822b760c
	goto loc_822B760C;
loc_822B71D4:
	// lbz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 372);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822b764c
	if (!ctx.cr0.eq) goto loc_822B764C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,324(r31)
	REX_STORE_U8(r31.u32 + 324, ctx.r11.u8);
	// stfs f31,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// stfs f31,292(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stfs f31,296(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
	// stfs f31,300(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// b 0x822b7650
	goto loc_822B7650;
loc_822B71FC:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b7668
	ctx.lr = 0x822B7224;
	sub_822B7668(ctx, base);
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f12,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// lfs f11,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f10,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// lfs f9,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f6,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,256(r31)
	REX_STORE_U64(r31.u32 + 256, ctx.r10.u64);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,264(r31)
	REX_STORE_U64(r31.u32 + 264, ctx.r10.u64);
	// lfs f0,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f8,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f5,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r10,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r10.u64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,352
	ctx.r4.s64 = r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r31,288
	ctx.r9.s64 = r31.s64 + 288;
	// std r11,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r11.u64);
	// lfs f13,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r10.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r11.u64);
	// b 0x822b71cc
	goto loc_822B71CC;
loc_822B73A4:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r4,r31,352
	ctx.r4.s64 = r31.s64 + 352;
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lhz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 352);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f11,f13,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f11,f12,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// ble cr6,0x822b7428
	if (!ctx.cr6.gt) goto loc_822B7428;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x822b741c
	if (!ctx.cr6.lt) goto loc_822B741C;
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
	// b 0x822b7430
	goto loc_822B7430;
loc_822B741C:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// b 0x822b7430
	goto loc_822B7430;
loc_822B7428:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_822B7430:
	// sth r11,352(r31)
	REX_STORE_U16(r31.u32 + 352, ctx.r11.u16);
	// fsubs f13,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// stfs f31,28(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f8,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r31,288
	ctx.r9.s64 = r31.s64 + 288;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f10,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,264(r31)
	REX_STORE_U64(r31.u32 + 264, ctx.r10.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,256(r31)
	REX_STORE_U64(r31.u32 + 256, ctx.r11.u64);
	// lfs f9,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r10.u64);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r11.u64);
	// lfs f12,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// b 0x822b71c4
	goto loc_822B71C4;
loc_822B755C:
	// ld r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 96);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// ld r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 104);
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// ld r6,176(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 176);
	// addi r11,r5,16592
	ctx.r11.s64 = ctx.r5.s64 + 16592;
	// ld r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 184);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// std r10,256(r31)
	REX_STORE_U64(r31.u32 + 256, ctx.r10.u64);
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// std r8,264(r31)
	REX_STORE_U64(r31.u32 + 264, ctx.r8.u64);
	// addi r8,r31,288
	ctx.r8.s64 = r31.s64 + 288;
	// std r6,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r6.u64);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r4,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r4.u64);
	// lfs f11,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r11.u64);
	// stfs f31,20(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f31,24(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stb r29,36(r30)
	REX_STORE_U8(r30.u32 + 36, r29.u8);
	// stfs f31,28(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f31,24(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f31,28(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// stfs f31,32(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
loc_822B760C:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822b7640
	if (ctx.cr6.lt) goto loc_822B7640;
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822b7640
	if (ctx.cr6.lt) goto loc_822B7640;
	// lfs f0,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822b7640
	if (ctx.cr6.lt) goto loc_822B7640;
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x822b7644
	if (!ctx.cr6.lt) goto loc_822B7644;
loc_822B7640:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822B7644:
	// stb r11,324(r31)
	REX_STORE_U8(r31.u32 + 324, ctx.r11.u8);
	// b 0x822b7650
	goto loc_822B7650;
loc_822B764C:
	// stb r29,324(r31)
	REX_STORE_U8(r31.u32 + 324, r29.u8);
loc_822B7650:
	// lbz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 324);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EE668) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ee6ac
	if (!ctx.cr6.eq) goto loc_822EE6AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,15012
	ctx.r4.s64 = ctx.r11.s64 + 15012;
	// addi r3,r10,15048
	ctx.r3.s64 = ctx.r10.s64 + 15048;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x821231d0
	ctx.lr = 0x822EE6AC;
	sub_821231D0(ctx, base);
loc_822EE6AC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r10,60
	ctx.r10.s64 = 60;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divw r9,r8,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// divw r11,r9,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// divw r6,r11,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// blt cr6,0x822ee7c8
	if (ctx.cr6.lt) goto loc_822EE7C8;
	// beq cr6,0x822ee7a4
	if (ctx.cr6.eq) goto loc_822EE7A4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x822ee78c
	if (ctx.cr6.lt) goto loc_822EE78C;
	// beq cr6,0x822ee764
	if (ctx.cr6.eq) goto loc_822EE764;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(r30.u32, 5, ctx.xer);
	// blt cr6,0x822ee748
	if (ctx.cr6.lt) goto loc_822EE748;
	// beq cr6,0x822ee72c
	if (ctx.cr6.eq) goto loc_822EE72C;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(r30.u32, 7, ctx.xer);
	// bge cr6,0x822ee7f8
	if (!ctx.cr6.lt) goto loc_822EE7F8;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// divw r10,r8,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// addi r5,r9,15164
	ctx.r5.s64 = ctx.r9.s64 + 15164;
	// mulli r10,r10,1000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1000));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// b 0x822ee7b8
	goto loc_822EE7B8;
loc_822EE72C:
	// divw r10,r9,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// addi r5,r8,15156
	ctx.r5.s64 = ctx.r8.s64 + 15156;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// b 0x822ee7b8
	goto loc_822EE7B8;
loc_822EE748:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,28480
	ctx.r5.s64 = ctx.r10.s64 + 28480;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1a58
	ctx.lr = 0x822EE760;
	sub_826A1A58(ctx, base);
	// b 0x822ee7f8
	goto loc_822EE7F8;
loc_822EE764:
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// divw r9,r8,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// addi r5,r7,15140
	ctx.r5.s64 = ctx.r7.s64 + 15140;
	// mulli r9,r9,1000
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1000));
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_822EE77C:
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x822ee7ec
	goto loc_822EE7EC;
loc_822EE78C:
	// divw r8,r9,r7
	ctx.r8.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mulli r8,r8,100
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(100));
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r5,r7,15124
	ctx.r5.s64 = ctx.r7.s64 + 15124;
	// b 0x822ee77c
	goto loc_822EE77C;
loc_822EE7A4:
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// addi r5,r9,15116
	ctx.r5.s64 = ctx.r9.s64 + 15116;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_822EE7B8:
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1a58
	ctx.lr = 0x822EE7C4;
	sub_826A1A58(ctx, base);
	// b 0x822ee7f8
	goto loc_822EE7F8;
loc_822EE7C8:
	// divw r9,r6,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r6.s32 / ctx.r10.s32 : 0);
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r9,r9,60
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// mulli r8,r8,60
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(60));
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// subf r7,r9,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r5,r5,15100
	ctx.r5.s64 = ctx.r5.s64 + 15100;
	// divw r6,r6,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r6.s32 / ctx.r10.s32 : 0);
loc_822EE7EC:
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1a58
	ctx.lr = 0x822EE7F8;
	sub_826A1A58(ctx, base);
loc_822EE7F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822F9748) {
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
	ctx.lr = 0x822F9750;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// beq 0x822f995c
	if (ctx.cr0.eq) goto loc_822F995C;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f977c
	if (ctx.cr6.eq) goto loc_822F977C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f9780
	goto loc_822F9780;
loc_822F977C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F9780:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f979c
	if (ctx.cr6.eq) goto loc_822F979C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9798
	if (ctx.cr6.eq) goto loc_822F9798;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f979c
	goto loc_822F979C;
loc_822F9798:
	// li r28,0
	r28.s64 = 0;
loc_822F979C:
	// lhz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 100);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9898
	if (ctx.cr0.eq) goto loc_822F9898;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822f9820
	if (!ctx.cr6.gt) goto loc_822F9820;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_822F97CC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9810
	if (ctx.cr6.eq) goto loc_822F9810;
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f97ec
	if (ctx.cr6.eq) goto loc_822F97EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f97f0
	goto loc_822F97F0;
loc_822F97EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F97F0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822f9810
	if (!ctx.cr6.eq) goto loc_822F9810;
	// lhz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9810
	if (ctx.cr0.eq) goto loc_822F9810;
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f984c
	if (!ctx.cr0.eq) goto loc_822F984C;
loc_822F9810:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// blt cr6,0x822f97cc
	if (ctx.cr6.lt) goto loc_822F97CC;
loc_822F9820:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822f9950
	if (!ctx.cr6.gt) goto loc_822F9950;
loc_822F982C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f9884
	if (ctx.cr6.eq) goto loc_822F9884;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9854
	if (ctx.cr6.eq) goto loc_822F9854;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f9858
	goto loc_822F9858;
loc_822F984C:
	// li r3,82
	ctx.r3.s64 = 82;
	// b 0x822f9980
	goto loc_822F9980;
loc_822F9854:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F9858:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822f9884
	if (!ctx.cr6.eq) goto loc_822F9884;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9884
	if (ctx.cr0.eq) goto loc_822F9884;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822f9748
	ctx.lr = 0x822F987C;
	sub_822F9748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9980
	if (!ctx.cr0.eq) goto loc_822F9980;
loc_822F9884:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x822f982c
	if (ctx.cr6.lt) goto loc_822F982C;
	// b 0x822f9950
	goto loc_822F9950;
loc_822F9898:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822f98f0
	if (!ctx.cr6.gt) goto loc_822F98F0;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822F98B4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f98d8
	if (ctx.cr6.eq) goto loc_822F98D8;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822f98d8
	if (ctx.cr6.eq) goto loc_822F98D8;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,96(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// rlwinm. r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822f984c
	if (!ctx.cr0.eq) goto loc_822F984C;
loc_822F98D8:
	// lwz r7,168(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822f98b4
	if (ctx.cr6.lt) goto loc_822F98B4;
loc_822F98F0:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822f9950
	if (!ctx.cr6.gt) goto loc_822F9950;
	// li r31,0
	r31.s64 = 0;
loc_822F9900:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f9938
	if (ctx.cr6.eq) goto loc_822F9938;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f9938
	if (ctx.cr6.eq) goto loc_822F9938;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822f9748
	ctx.lr = 0x822F9930;
	sub_822F9748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9980
	if (!ctx.cr0.eq) goto loc_822F9980;
loc_822F9938:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f9900
	if (ctx.cr6.lt) goto loc_822F9900;
loc_822F9950:
	// sth r27,164(r28)
	REX_STORE_U16(r28.u32 + 164, r27.u16);
	// sth r26,166(r28)
	REX_STORE_U16(r28.u32 + 166, r26.u16);
	// b 0x822f997c
	goto loc_822F997C;
loc_822F995C:
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f984c
	if (!ctx.cr0.eq) goto loc_822F984C;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r27,164(r3)
	REX_STORE_U16(ctx.r3.u32 + 164, r27.u16);
	// sth r26,166(r3)
	REX_STORE_U16(ctx.r3.u32 + 166, r26.u16);
	// sth r10,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
loc_822F997C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F9980:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82309058) {
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
	ctx.lr = 0x82309060;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// clrlwi. r23,r6,24
	r23.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r26,-1
	r26.s64 = -1;
	// li r25,0
	r25.s64 = 0;
	// beq 0x82309090
	if (ctx.cr0.eq) goto loc_82309090;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r24,56(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82309094
	goto loc_82309094;
loc_82309090:
	// mr r24,r25
	r24.u64 = r25.u64;
loc_82309094:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823090a4
	if (ctx.cr6.eq) goto loc_823090A4;
	// lwz r29,8(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 8);
	// b 0x823090ac
	goto loc_823090AC;
loc_823090A4:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_823090AC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x823090e0
	if (!ctx.cr6.eq) goto loc_823090E0;
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823090e0
	if (!ctx.cr6.eq) goto loc_823090E0;
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823090e0
	if (!ctx.cr0.eq) goto loc_823090E0;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823090e0
	if (!ctx.cr0.eq) goto loc_823090E0;
	// mr r26,r25
	r26.u64 = r25.u64;
	// b 0x82309410
	goto loc_82309410;
loc_823090E0:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823090f8
	if (ctx.cr0.eq) goto loc_823090F8;
loc_823090EC:
	// li r3,85
	ctx.r3.s64 = 85;
	// stw r25,0(r22)
	REX_STORE_U32(r22.u32 + 0, r25.u32);
	// b 0x82309438
	goto loc_82309438;
loc_823090F8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8230917c
	if (ctx.cr0.eq) goto loc_8230917C;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// ble cr6,0x823090ec
	if (!ctx.cr6.gt) goto loc_823090EC;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82309118:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82309128
	if (ctx.cr6.eq) goto loc_82309128;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// b 0x82309130
	goto loc_82309130;
loc_82309128:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82309130:
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// ld r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8230916c
	if (!ctx.cr6.gt) goto loc_8230916C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82309160
	if (ctx.cr6.eq) goto loc_82309160;
	// lwz r6,136(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 136);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230916c
	if (ctx.cr6.lt) goto loc_8230916C;
loc_82309160:
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230916C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82309118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82309118;
	// b 0x82309408
	goto loc_82309408;
loc_8230917C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823092b0
	if (ctx.cr0.eq) goto loc_823092B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,1
	r28.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lfs f30,4928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4928);
	f30.f64 = double(temp.f32);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8230922c
	if (!ctx.cr6.gt) goto loc_8230922C;
loc_823091A0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x823091b8
	if (ctx.cr6.eq) goto loc_823091B8;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x823091c4
	goto loc_823091C4;
loc_823091B8:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_823091C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822fd3a8
	ctx.lr = 0x823091D0;
	sub_822FD3A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82309438
	if (!ctx.cr0.eq) goto loc_82309438;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82309204
	if (!ctx.cr6.lt) goto loc_82309204;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823091fc
	if (ctx.cr6.eq) goto loc_823091FC;
	// lwz r11,136(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 136);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82309204
	if (ctx.cr6.lt) goto loc_82309204;
loc_823091FC:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f0.f64;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82309204:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82309214
	if (!ctx.cr6.eq) goto loc_82309214;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// b 0x82309220
	goto loc_82309220;
loc_82309214:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82309220
	if (ctx.cr6.eq) goto loc_82309220;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82309220:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x823091a0
	if (ctx.cr6.lt) goto loc_823091A0;
loc_8230922C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82309408
	if (ctx.cr0.eq) goto loc_82309408;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82309408
	if (!ctx.cr6.gt) goto loc_82309408;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8230924C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8230925c
	if (ctx.cr6.eq) goto loc_8230925C;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// b 0x82309264
	goto loc_82309264;
loc_8230925C:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82309264:
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// ld r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823092a0
	if (!ctx.cr6.lt) goto loc_823092A0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82309294
	if (ctx.cr6.eq) goto loc_82309294;
	// lwz r6,136(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 136);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823092a0
	if (ctx.cr6.lt) goto loc_823092A0;
loc_82309294:
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823092A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8230924c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230924C;
	// b 0x82309408
	goto loc_82309408;
loc_823092B0:
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82309394
	if (ctx.cr0.eq) goto loc_82309394;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lfs f31,4928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4928);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82309338
	if (!ctx.cr6.gt) goto loc_82309338;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823092CC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823092dc
	if (ctx.cr6.eq) goto loc_823092DC;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// b 0x823092e4
	goto loc_823092E4;
loc_823092DC:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823092E4:
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fd3a8
	ctx.lr = 0x823092F4;
	sub_822FD3A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82309438
	if (!ctx.cr0.eq) goto loc_82309438;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82309328
	if (!ctx.cr6.lt) goto loc_82309328;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82309320
	if (ctx.cr6.eq) goto loc_82309320;
	// lwz r11,136(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 136);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82309328
	if (ctx.cr6.lt) goto loc_82309328;
loc_82309320:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_82309328:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// blt cr6,0x823092cc
	if (ctx.cr6.lt) goto loc_823092CC;
loc_82309338:
	// lwz r11,172(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230934c
	if (ctx.cr6.eq) goto loc_8230934C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309350
	goto loc_82309350;
loc_8230934C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82309350:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82309370
	if (ctx.cr6.eq) goto loc_82309370;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309368
	if (ctx.cr6.eq) goto loc_82309368;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309374
	goto loc_82309374;
loc_82309368:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x82309374
	goto loc_82309374;
loc_82309370:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82309374:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822fd3a8
	ctx.lr = 0x8230937C;
	sub_822FD3A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82309438
	if (!ctx.cr0.eq) goto loc_82309438;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82309408
	if (ctx.cr6.gt) goto loc_82309408;
	// b 0x823090ec
	goto loc_823090EC;
loc_82309394:
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// ble cr6,0x823090ec
	if (!ctx.cr6.gt) goto loc_823090EC;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823093A8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823093b8
	if (ctx.cr6.eq) goto loc_823093B8;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// b 0x823093c0
	goto loc_823093C0;
loc_823093B8:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823093C0:
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// ld r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823093fc
	if (!ctx.cr6.lt) goto loc_823093FC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823093f0
	if (ctx.cr6.eq) goto loc_823093F0;
	// lwz r6,136(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 136);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823093fc
	if (ctx.cr6.lt) goto loc_823093FC;
loc_823093F0:
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823093FC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823093a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823093A8;
loc_82309408:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// beq cr6,0x823090ec
	if (ctx.cr6.eq) goto loc_823090EC;
loc_82309410:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82309424
	if (ctx.cr6.eq) goto loc_82309424;
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// b 0x8230942c
	goto loc_8230942C;
loc_82309424:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8230942C:
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
loc_82309438:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823294A0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,29(r11)
	REX_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329648) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8232fbb0
	ctx.lr = 0x82329674;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823296f8
	if (!ctx.cr0.eq) goto loc_823296F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8232f230
	ctx.lr = 0x8232969C;
	sub_8232F230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823296f8
	if (!ctx.cr0.eq) goto loc_823296F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2d40
	ctx.lr = 0x823296AC;
	sub_826A2D40(ctx, base);
	// lwa r9,80(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 80));
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r11.u64);
loc_823296F8:
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

DEFINE_REX_FUNC(sub_8232EB68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232EB70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8232ec14
	if (!ctx.cr6.gt) goto loc_8232EC14;
loc_8232EB90:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232ebb4
	if (!ctx.cr0.lt) goto loc_8232EBB4;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232ebbc
	goto loc_8232EBBC;
loc_8232EBB4:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232EBBC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8232d480
	ctx.lr = 0x8232EBC8;
	sub_8232D480(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232ebf4
	if (!ctx.cr0.lt) goto loc_8232EBF4;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232ebfc
	goto loc_8232EBFC;
loc_8232EBF4:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232EBFC:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8232eb90
	if (ctx.cr6.lt) goto loc_8232EB90;
loc_8232EC14:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232ec34
	if (ctx.cr6.eq) goto loc_8232EC34;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x8232ec38
	goto loc_8232EC38;
loc_8232EC34:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8232EC38:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8232ec54
	if (!ctx.cr6.eq) goto loc_8232EC54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232d818
	ctx.lr = 0x8232EC48;
	sub_8232D818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232ec14
	if (ctx.cr0.eq) goto loc_8232EC14;
	// b 0x8232ef30
	goto loc_8232EF30;
loc_8232EC54:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8232ecd0
	if (!ctx.cr6.eq) goto loc_8232ECD0;
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ec78
	if (ctx.cr6.eq) goto loc_8232EC78;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ec7c
	goto loc_8232EC7C;
loc_8232EC78:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8232EC7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232eca8
	if (!ctx.cr6.eq) goto loc_8232ECA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e998
	ctx.lr = 0x8232EC8C;
	sub_8232E998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232d818
	ctx.lr = 0x8232EC9C;
	sub_8232D818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232ecd0
	if (ctx.cr0.eq) goto loc_8232ECD0;
	// b 0x8232ef30
	goto loc_8232EF30;
loc_8232ECA8:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ECBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ECD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232ECD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232eeb8
	if (!ctx.cr6.eq) goto loc_8232EEB8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232ed08
	if (!ctx.cr0.lt) goto loc_8232ED08;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232ed10
	goto loc_8232ED10;
loc_8232ED08:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232ED10:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ed28
	if (ctx.cr6.eq) goto loc_8232ED28;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ed2c
	goto loc_8232ED2C;
loc_8232ED28:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8232ED2C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8232ed44
	if (!ctx.cr6.eq) goto loc_8232ED44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e998
	ctx.lr = 0x8232ED3C;
	sub_8232E998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
loc_8232ED44:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ed60
	if (ctx.cr6.eq) goto loc_8232ED60;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ed64
	goto loc_8232ED64;
loc_8232ED60:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8232ED64:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8232edcc
	if (!ctx.cr6.eq) goto loc_8232EDCC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ed7c
	if (ctx.cr6.eq) goto loc_8232ED7C;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8232ed80
	goto loc_8232ED80;
loc_8232ED7C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_8232ED80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ed90
	if (ctx.cr6.eq) goto loc_8232ED90;
	// ld r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x8232ed94
	goto loc_8232ED94;
loc_8232ED90:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8232ED94:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EDAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232edcc
	if (ctx.cr6.eq) goto loc_8232EDCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232dac0
	ctx.lr = 0x8232EDC0;
	sub_8232DAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_8232EDCC:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232ee40
	if (!ctx.cr0.eq) goto loc_8232EE40;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232edfc
	if (ctx.cr6.eq) goto loc_8232EDFC;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ee00
	goto loc_8232EE00;
loc_8232EDFC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8232EE00:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8232ee24
	if (ctx.cr6.eq) goto loc_8232EE24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ee18
	if (ctx.cr6.eq) goto loc_8232EE18;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ee1c
	goto loc_8232EE1C;
loc_8232EE18:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8232EE1C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232ee40
	if (!ctx.cr6.eq) goto loc_8232EE40;
loc_8232EE24:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8232ee40
	if (!ctx.cr6.lt) goto loc_8232EE40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e998
	ctx.lr = 0x8232EE38;
	sub_8232E998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
loc_8232EE40:
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ee5c
	if (ctx.cr6.eq) goto loc_8232EE5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8232ee60
	goto loc_8232EE60;
loc_8232EE5C:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8232EE60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232ee80
	if (ctx.cr6.eq) goto loc_8232EE80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ee78
	if (ctx.cr6.eq) goto loc_8232EE78;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8232ee7c
	goto loc_8232EE7C;
loc_8232EE78:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8232EE7C:
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8232EE80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232dd68
	ctx.lr = 0x8232EE8C;
	sub_8232DD68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EEB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232ef30
	if (!ctx.cr0.eq) goto loc_8232EF30;
loc_8232EEB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232ef2c
	if (!ctx.cr6.eq) goto loc_8232EF2C;
loc_8232EEC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232eee4
	if (ctx.cr6.eq) goto loc_8232EEE4;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232eee8
	goto loc_8232EEE8;
loc_8232EEE4:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8232EEE8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8232ef04
	if (!ctx.cr6.eq) goto loc_8232EF04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232d818
	ctx.lr = 0x8232EEF8;
	sub_8232D818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232eec4
	if (ctx.cr0.eq) goto loc_8232EEC4;
	// b 0x8232ef30
	goto loc_8232EF30;
loc_8232EF04:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ef18
	if (ctx.cr6.eq) goto loc_8232EF18;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ef1c
	goto loc_8232EF1C;
loc_8232EF18:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8232EF1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232ef2c
	if (!ctx.cr6.eq) goto loc_8232EF2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8232EF2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232EF30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82353A58) {
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
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r30,296(r31)
	REX_STORE_U8(r31.u32 + 296, r30.u8);
	// beq cr6,0x82353ad0
	if (ctx.cr6.eq) goto loc_82353AD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353708
	ctx.lr = 0x82353A90;
	sub_82353708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353ad0
	if (!ctx.cr6.eq) goto loc_82353AD0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9840
	ctx.r5.s64 = ctx.r10.s64 + 9840;
	// li r6,170
	ctx.r6.s64 = 170;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82353ABC;
	sub_82330D00(ctx, base);
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 316);
	// bl 0x8233e770
	ctx.lr = 0x82353ACC;
	sub_8233E770(ctx, base);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
loc_82353AD0:
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

DEFINE_REX_FUNC(sub_82355128) {
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
	ctx.lr = 0x82355130;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r23,0
	r23.s64 = 0;
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// stw r5,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r5.u32);
	// addi r9,r1,220
	ctx.r9.s64 = ctx.r1.s64 + 220;
	// stw r23,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r23.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r7,20884(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20884);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stb r8,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bne cr6,0x82355194
	if (!ctx.cr6.eq) goto loc_82355194;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x82355188;
	sub_82354D88(ctx, base);
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_82355194:
	// cmpwi cr6,r22,256
	ctx.cr6.compare<int32_t>(r22.s32, 256, ctx.xer);
	// blt cr6,0x823551b4
	if (ctx.cr6.lt) goto loc_823551B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x823551A8;
	sub_82354D88(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_823551B4:
	// lwz r28,4360(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4360);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// bl 0x8233e7e0
	ctx.lr = 0x823551C4;
	sub_8233E7E0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82355214
	if (!ctx.cr6.gt) goto loc_82355214;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x823551f8
	if (ctx.cr6.eq) goto loc_823551F8;
	// bl 0x8233e820
	ctx.lr = 0x823551E0;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x823551EC;
	sub_82354D88(ctx, base);
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_823551F8:
	// bl 0x8233e820
	ctx.lr = 0x823551FC;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x82355208;
	sub_82354D88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_82355214:
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// addi r31,r11,9888
	r31.s64 = ctx.r11.s64 + 9888;
	// li r6,107
	ctx.r6.s64 = 107;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8235523C;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82355268
	if (!ctx.cr6.eq) goto loc_82355268;
loc_82355248:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e820
	ctx.lr = 0x82355250;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x8235525C;
	sub_82354D88(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_82355268:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(r21.s32, 3, ctx.xer);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// bne cr6,0x823552a4
	if (!ctx.cr6.eq) goto loc_823552A4;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// rlwinm r10,r22,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 12) & 0xFFFFF000;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lis r7,48
	ctx.r7.s64 = 3145728;
	// li r6,117
	ctx.r6.s64 = 117;
	// addi r4,r10,2048
	ctx.r4.s64 = ctx.r10.s64 + 2048;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82355298;
	sub_82330E40(ctx, base);
	// stw r3,276(r29)
	REX_STORE_U32(r29.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355248
	if (ctx.cr6.eq) goto loc_82355248;
loc_823552A4:
	// bl 0x823a9b20
	ctx.lr = 0x823552A8;
	sub_823A9B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,152
	ctx.r5.s64 = 152;
	// bl 0x826a1e70
	ctx.lr = 0x823552B8;
	sub_826A1E70(ctx, base);
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82355584
	if (!ctx.cr6.gt) goto loc_82355584;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// li r19,2
	r19.s64 = 2;
	// li r14,256
	r14.s64 = 256;
	// li r15,19216
	r15.s64 = 19216;
	// li r16,10
	r16.s64 = 10;
	// li r20,9
	r20.s64 = 9;
	// li r17,7
	r17.s64 = 7;
	// li r18,11
	r18.s64 = 11;
loc_823552E8:
	// lwz r11,468(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// stw r21,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r21.u32);
	// stw r19,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// stw r19,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r19.u32);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bne cr6,0x82355310
	if (!ctx.cr6.eq) goto loc_82355310;
	// li r11,29616
	ctx.r11.s64 = 29616;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x8235535c
	goto loc_8235535C;
loc_82355310:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(r21.s32, 3, ctx.xer);
	// bne cr6,0x82355324
	if (!ctx.cr6.eq) goto loc_82355324;
	// li r11,10688
	ctx.r11.s64 = 10688;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x8235535c
	goto loc_8235535C;
loc_82355324:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x82355338
	if (!ctx.cr6.eq) goto loc_82355338;
	// li r11,2248
	ctx.r11.s64 = 2248;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x8235535c
	goto loc_8235535C;
loc_82355338:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// bne cr6,0x8235534c
	if (!ctx.cr6.eq) goto loc_8235534C;
	// li r11,6072
	ctx.r11.s64 = 6072;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x8235535c
	goto loc_8235535C;
loc_8235534C:
	// cmpwi cr6,r21,5
	ctx.cr6.compare<int32_t>(r21.s32, 5, ctx.xer);
	// bne cr6,0x8235569c
	if (!ctx.cr6.eq) goto loc_8235569C;
	// stw r14,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r14.u32);
	// stw r15,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r15.u32);
loc_8235535C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82336400
	ctx.lr = 0x82355370;
	sub_82336400(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235559c
	if (!ctx.cr6.eq) goto loc_8235559C;
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r23,284(r31)
	REX_STORE_U32(r31.u32 + 284, r23.u32);
	// bne cr6,0x823553e8
	if (!ctx.cr6.eq) goto loc_823553E8;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r30,r31,10588
	r30.s64 = r31.s64 + 10588;
	// lwz r4,21632(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 21632);
	// lwz r3,21364(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 21364);
	// bl 0x82356898
	ctx.lr = 0x823553A8;
	sub_82356898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823555bc
	if (!ctx.cr6.eq) goto loc_823555BC;
	// li r5,116
	ctx.r5.s64 = 116;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x823ef2f8
	ctx.lr = 0x823553C4;
	sub_823EF2F8(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r10,r31,10880
	ctx.r10.s64 = r31.s64 + 10880;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r11,19136
	ctx.r9.s64 = ctx.r11.s64 + 19136;
	// stw r9,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r9.u32);
	// stw r16,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r16.u32);
	// stw r30,1216(r31)
	REX_STORE_U32(r31.u32 + 1216, r30.u32);
	// stw r10,264(r30)
	REX_STORE_U32(r30.u32 + 264, ctx.r10.u32);
	// b 0x82355518
	goto loc_82355518;
loc_823553E8:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(r21.s32, 3, ctx.xer);
	// bne cr6,0x8235543c
	if (!ctx.cr6.eq) goto loc_8235543C;
	// addi r30,r31,5468
	r30.s64 = r31.s64 + 5468;
	// bl 0x82379ef8
	ctx.lr = 0x823553F8;
	sub_82379EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82355408;
	sub_823EF2F8(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r31,5756
	ctx.r11.s64 = r31.s64 + 5756;
	// addi r9,r10,19136
	ctx.r9.s64 = ctx.r10.s64 + 19136;
	// stw r9,5584(r31)
	REX_STORE_U32(r31.u32 + 5584, ctx.r9.u32);
	// stw r20,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r20.u32);
	// stw r30,1216(r31)
	REX_STORE_U32(r31.u32 + 1216, r30.u32);
	// stw r11,5744(r31)
	REX_STORE_U32(r31.u32 + 5744, ctx.r11.u32);
	// lwz r11,276(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 276);
	// addi r8,r11,2047
	ctx.r8.s64 = ctx.r11.s64 + 2047;
	// rlwinm r11,r8,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF800;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + r25.u64;
	// stw r7,5792(r31)
	REX_STORE_U32(r31.u32 + 5792, ctx.r7.u32);
	// b 0x82355518
	goto loc_82355518;
loc_8235543C:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x82355490
	if (!ctx.cr6.eq) goto loc_82355490;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r30,r31,1884
	r30.s64 = r31.s64 + 1884;
	// lwz r4,21628(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 21628);
	// lwz r3,21364(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 21364);
	// bl 0x82356898
	ctx.lr = 0x8235545C;
	sub_82356898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823555fc
	if (!ctx.cr6.eq) goto loc_823555FC;
	// li r5,116
	ctx.r5.s64 = 116;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x823ef2f8
	ctx.lr = 0x82355478;
	sub_823EF2F8(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// stw r10,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// stw r17,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r17.u32);
	// b 0x82355514
	goto loc_82355514;
loc_82355490:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// bne cr6,0x823554e4
	if (!ctx.cr6.eq) goto loc_823554E4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r30,r31,5468
	r30.s64 = r31.s64 + 5468;
	// lwz r4,21636(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 21636);
	// lwz r3,21364(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 21364);
	// bl 0x82356898
	ctx.lr = 0x823554B0;
	sub_82356898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235563c
	if (!ctx.cr6.eq) goto loc_8235563C;
	// li r5,116
	ctx.r5.s64 = 116;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x823ef2f8
	ctx.lr = 0x823554CC;
	sub_823EF2F8(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// stw r10,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// stw r18,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r18.u32);
	// b 0x82355514
	goto loc_82355514;
loc_823554E4:
	// cmpwi cr6,r21,5
	ctx.cr6.compare<int32_t>(r21.s32, 5, ctx.xer);
	// bne cr6,0x8235567c
	if (!ctx.cr6.eq) goto loc_8235567C;
	// addi r30,r31,18652
	r30.s64 = r31.s64 + 18652;
	// bl 0x82375288
	ctx.lr = 0x823554F4;
	sub_82375288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x823ef2f8
	ctx.lr = 0x82355504;
	sub_823EF2F8(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r10,r11,19136
	ctx.r10.s64 = ctx.r11.s64 + 19136;
	// stw r10,18768(r31)
	REX_STORE_U32(r31.u32 + 18768, ctx.r10.u32);
	// stw r19,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r19.u32);
loc_82355514:
	// stw r30,1216(r31)
	REX_STORE_U32(r31.u32 + 1216, r30.u32);
loc_82355518:
	// lwz r11,1216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// addi r10,r31,472
	ctx.r10.s64 = r31.s64 + 472;
	// addi r9,r31,920
	ctx.r9.s64 = r31.s64 + 920;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r8,1216(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// stw r9,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r7,1216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// stw r23,188(r7)
	REX_STORE_U32(ctx.r7.u32 + 188, r23.u32);
	// lwz r11,1216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1216);
	// lwz r6,204(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// ori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 | 1;
	// stw r10,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r29,468(r31)
	REX_STORE_U32(r31.u32 + 468, r29.u32);
	// stw r26,908(r31)
	REX_STORE_U32(r31.u32 + 908, r26.u32);
	// bl 0x8235f3c0
	ctx.lr = 0x82355560;
	sub_8235F3C0(ctx, base);
	// add r9,r26,r29
	ctx.r9.u64 = r26.u64 + r29.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4096
	r25.s64 = r25.s64 + 4096;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(r26.s32, r22.s32, ctx.xer);
	// stb r23,16(r9)
	REX_STORE_U8(ctx.r9.u32 + 16, r23.u8);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stwx r31,r8,r24
	REX_STORE_U32(ctx.r8.u32 + r24.u32, r31.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// blt cr6,0x823552e8
	if (ctx.cr6.lt) goto loc_823552E8;
loc_82355584:
	// stw r22,8(r29)
	REX_STORE_U32(r29.u32 + 8, r22.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e820
	ctx.lr = 0x82355590;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_8235559C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e820
	ctx.lr = 0x823555A4;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x823555B0;
	sub_82354D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_823555BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823555dc
	if (ctx.cr6.eq) goto loc_823555DC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823555DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823555DC:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233e820
	ctx.lr = 0x823555E4;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x823555F0;
	sub_82354D88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_823555FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8235561c
	if (ctx.cr6.eq) goto loc_8235561C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235561C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235561C:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233e820
	ctx.lr = 0x82355624;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x82355630;
	sub_82354D88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_8235563C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8235565c
	if (ctx.cr6.eq) goto loc_8235565C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235565C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235565C:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8233e820
	ctx.lr = 0x82355664;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x82355670;
	sub_82354D88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_8235567C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8235569c
	if (ctx.cr6.eq) goto loc_8235569C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235569C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235569C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e820
	ctx.lr = 0x823556A4;
	sub_8233E820(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d88
	ctx.lr = 0x823556B0;
	sub_82354D88(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82380A70) {
	REX_FUNC_PROLOGUE();
	// lbz r10,645(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 645);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,688(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 688);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82380b24
	if (!ctx.cr6.eq) goto loc_82380B24;
	// lwz r9,640(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82380ad0
	if (!ctx.cr6.lt) goto loc_82380AD0;
	// lhz r9,2162(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 2162);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82380aac
	if (ctx.cr6.eq) goto loc_82380AAC;
	// lbz r9,644(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 644);
	// b 0x82380ab0
	goto loc_82380AB0;
loc_82380AAC:
	// lbz r9,628(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 628);
loc_82380AB0:
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r8.u32);
	// lwz r10,640(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82380b18
	if (ctx.cr6.lt) goto loc_82380B18;
	// b 0x82380b0c
	goto loc_82380B0C;
loc_82380AD0:
	// ble cr6,0x82380b18
	if (!ctx.cr6.gt) goto loc_82380B18;
	// lhz r9,2162(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 2162);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82380aec
	if (ctx.cr6.eq) goto loc_82380AEC;
	// lbz r9,644(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 644);
	// b 0x82380af0
	goto loc_82380AF0;
loc_82380AEC:
	// lbz r9,628(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 628);
loc_82380AF0:
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// lwz r10,640(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82380b18
	if (!ctx.cr6.lt) goto loc_82380B18;
loc_82380B0C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// stb r9,645(r3)
	REX_STORE_U8(ctx.r3.u32 + 645, ctx.r9.u8);
loc_82380B18:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_82380B24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238C3F8) {
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
	ctx.lr = 0x8238C400;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,2184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r6,788(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// li r23,0
	r23.s64 = 0;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,520(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// lwz r10,2180(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2180);
	// mr r16,r23
	r16.u64 = r23.u64;
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lbz r5,532(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 532);
	// rotlwi r7,r5,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add. r25,r8,r11
	r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8238cf68
	if (ctx.cr0.eq) goto loc_8238CF68;
	// lwz r11,528(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c488
	if (ctx.cr6.eq) goto loc_8238C488;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c480
	if (ctx.cr6.eq) goto loc_8238C480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2165(r26)
	REX_STORE_U8(r26.u32 + 2165, ctx.r11.u8);
	// b 0x8238cf68
	goto loc_8238CF68;
loc_8238C480:
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8238C488:
	// lwz r11,788(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 788);
	// mr r22,r23
	r22.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238cf68
	if (!ctx.cr6.gt) goto loc_8238CF68;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,218
	ctx.r6.s64 = 14286848;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lfs f30,15200(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15200);
	f30.f64 = double(temp.f32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lfs f31,19036(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19036);
	f31.f64 = double(temp.f32);
	// lfs f29,9768(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 9768);
	f29.f64 = double(temp.f32);
	// clrlwi r14,r4,24
	r14.u64 = ctx.r4.u32 & 0xFF;
	// li r15,8
	r15.s64 = 8;
	// li r17,64
	r17.s64 = 64;
	// ori r18,r6,30208
	r18.u64 = ctx.r6.u64 | 30208;
	// addi r20,r11,30952
	r20.s64 = ctx.r11.s64 + 30952;
	// addi r19,r10,32064
	r19.s64 = ctx.r10.s64 + 32064;
	// addi r21,r9,32120
	r21.s64 = ctx.r9.s64 + 32120;
loc_8238C4DC:
	// addi r11,r22,198
	ctx.r11.s64 = r22.s64 + 198;
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 4);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,28,4,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r27,r10,28
	r27.u64 = ctx.r10.u32 & 0xF;
	// lwzx r31,r9,r26
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8238c514
	if (!ctx.cr6.eq) goto loc_8238C514;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8238c518
	if (ctx.cr6.eq) goto loc_8238C518;
loc_8238C514:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8238C518:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c52c
	if (ctx.cr6.eq) goto loc_8238C52C;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// stw r19,448(r21)
	REX_STORE_U32(r21.u32 + 448, r19.u32);
loc_8238C52C:
	// lbz r10,1(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 1);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c548
	if (ctx.cr6.eq) goto loc_8238C548;
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// stb r11,592(r31)
	REX_STORE_U8(r31.u32 + 592, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238C548:
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c568
	if (ctx.cr6.eq) goto loc_8238C568;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8238c568
	if (ctx.cr6.eq) goto loc_8238C568;
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// stb r11,593(r31)
	REX_STORE_U8(r31.u32 + 593, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238C568:
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r9,1424(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 1424);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8238c588
	if (!ctx.cr6.lt) goto loc_8238C588;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r24,r10,2204
	r24.s64 = ctx.r10.s64 + 2204;
	// b 0x8238c58c
	goto loc_8238C58C;
loc_8238C588:
	// mr r24,r19
	r24.u64 = r19.u64;
loc_8238C58C:
	// lbz r10,600(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 600);
	// lwz r30,464(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r29,468(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bne cr6,0x8238c5bc
	if (!ctx.cr6.eq) goto loc_8238C5BC;
	// lbz r9,3(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + 3);
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// beq cr6,0x8238c5bc
	if (ctx.cr6.eq) goto loc_8238C5BC;
	// lwz r9,476(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(r29.u32, 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_8238C5BC:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// stb r11,600(r31)
	REX_STORE_U8(r31.u32 + 600, ctx.r11.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,476(r10)
	REX_STORE_U32(ctx.r10.u32 + 476, r23.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r23,460(r9)
	REX_STORE_U8(ctx.r9.u32 + 460, r23.u8);
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c690
	if (ctx.cr6.eq) goto loc_8238C690;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8238c690
	if (ctx.cr6.eq) goto loc_8238C690;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x8238c618
	if (!ctx.cr6.eq) goto loc_8238C618;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823c84a0
	ctx.lr = 0x8238C608;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c618
	if (ctx.cr6.eq) goto loc_8238C618;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// stw r19,448(r21)
	REX_STORE_U32(r21.u32 + 448, r19.u32);
loc_8238C618:
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,593(r31)
	REX_STORE_U8(r31.u32 + 593, ctx.r11.u8);
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c650
	if (ctx.cr6.eq) goto loc_8238C650;
	// lwzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mulli r8,r9,8363
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(8363));
	// divwu r7,r8,r10
	ctx.r7.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// stw r7,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r7.u32);
	// b 0x8238c658
	goto loc_8238C658;
loc_8238C650:
	// lwzx r10,r11,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// stw r10,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r10.u32);
loc_8238C658:
	// add r11,r22,r26
	ctx.r11.u64 = r22.u64 + r26.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1276(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1276);
	// stw r9,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r9.u32);
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8238c688
	if (ctx.cr6.eq) goto loc_8238C688;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8238c688
	if (ctx.cr6.eq) goto loc_8238C688;
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, ctx.r11.u32);
loc_8238C688:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r15,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, r15.u8);
loc_8238C690:
	// lbz r10,1(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238c6d0
	if (ctx.cr6.eq) goto loc_8238C6D0;
	// lbz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// stb r23,662(r31)
	REX_STORE_U8(r31.u32 + 662, r23.u8);
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bge cr6,0x8238c6c0
	if (!ctx.cr6.lt) goto loc_8238C6C0;
	// stb r23,646(r31)
	REX_STORE_U8(r31.u32 + 646, r23.u8);
loc_8238C6C0:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8238c6d0
	if (!ctx.cr6.lt) goto loc_8238C6D0;
	// stb r23,650(r31)
	REX_STORE_U8(r31.u32 + 650, r23.u8);
loc_8238C6D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,480(r11)
	REX_STORE_U32(ctx.r11.u32 + 480, r23.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,7
	ctx.r9.u64 = ctx.r10.u64 | 7;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lbz r11,2(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c700
	if (ctx.cr6.eq) goto loc_8238C700;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r9.u32);
loc_8238C700:
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8238c714
	if (!ctx.cr6.eq) goto loc_8238C714;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r23.u32);
loc_8238C714:
	// lbz r11,3(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 3);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x8238cddc
	if (ctx.cr6.gt) goto loc_8238CDDC;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14532
	ctx.r12.s64 = ctx.r12.s64 + -14532;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238C79C;
	case 1:
		goto loc_8238C7B0;
	case 2:
		goto loc_8238C7D8;
	case 3:
		goto loc_8238C830;
	case 4:
		goto loc_8238C904;
	case 5:
		goto loc_8238C960;
	case 6:
		goto loc_8238C9BC;
	case 7:
		goto loc_8238C9F8;
	case 8:
		goto loc_8238CA1C;
	case 9:
		goto loc_8238CAE8;
	case 10:
		goto loc_8238CAD4;
	case 11:
		goto loc_8238CA98;
	case 12:
		goto loc_8238CDDC;
	case 13:
		goto loc_8238CDDC;
	case 14:
		goto loc_8238CAFC;
	case 15:
		goto loc_8238CDDC;
	case 16:
		goto loc_8238CB48;
	case 17:
		goto loc_8238CB60;
	case 18:
		goto loc_8238CB84;
	case 19:
		goto loc_8238CDA4;
	case 20:
		goto loc_8238CD68;
	case 21:
		goto loc_8238CD8C;
	case 22:
		goto loc_8238CDDC;
	case 23:
		goto loc_8238CDBC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238C79C:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stw r11,2172(r26)
	REX_STORE_U32(r26.u32 + 2172, ctx.r11.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238C7B0:
	// lbz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + 4);
	// lwz r10,1408(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1408);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r23,2196(r26)
	REX_STORE_U32(r26.u32 + 2196, r23.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// stw r9,2200(r26)
	REX_STORE_U32(r26.u32 + 2200, ctx.r9.u32);
	// blt cr6,0x8238c7d0
	if (ctx.cr6.lt) goto loc_8238C7D0;
	// stw r23,2200(r26)
	REX_STORE_U32(r26.u32 + 2200, r23.u32);
loc_8238C7D0:
	// li r16,1
	r16.s64 = 1;
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238C7D8:
	// rlwinm r11,r28,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FC;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,2196(r26)
	REX_STORE_U32(r26.u32 + 2196, ctx.r11.u32);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// ble cr6,0x8238c800
	if (!ctx.cr6.gt) goto loc_8238C800;
	// stw r23,2196(r26)
	REX_STORE_U32(r26.u32 + 2196, r23.u32);
loc_8238C800:
	// clrlwi r11,r16,24
	ctx.r11.u64 = r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c818
	if (!ctx.cr6.eq) goto loc_8238C818;
	// lwz r11,2184(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r26)
	REX_STORE_U32(r26.u32 + 2200, ctx.r11.u32);
loc_8238C818:
	// lwz r11,1408(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1408);
	// lwz r10,2200(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 2200);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238cddc
	if (ctx.cr6.lt) goto loc_8238CDDC;
	// stw r23,2200(r26)
	REX_STORE_U32(r26.u32 + 2200, r23.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238C830:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c840
	if (ctx.cr6.eq) goto loc_8238C840;
	// stb r11,633(r31)
	REX_STORE_U8(r31.u32 + 633, ctx.r11.u8);
loc_8238C840:
	// lbz r11,633(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 633);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8238c868
	if (!ctx.cr6.eq) goto loc_8238C868;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// b 0x8238c884
	goto loc_8238C884;
loc_8238C868:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x8238c884
	if (!ctx.cr6.eq) goto loc_8238C884;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r8.u32);
loc_8238C884:
	// lhz r11,2162(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 2162);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238c8d8
	if (!ctx.cr6.eq) goto loc_8238C8D8;
	// lbz r10,633(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 633);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238c8b4
	if (!ctx.cr6.eq) goto loc_8238C8B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_8238C8B4:
	// lbz r11,633(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 633);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238c8d8
	if (!ctx.cr6.eq) goto loc_8238C8D8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r8.u32);
loc_8238C8D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x8238c8f0
	if (!ctx.cr6.gt) goto loc_8238C8F0;
	// stw r17,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r17.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238C8F0:
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8238cddc
	if (!ctx.cr6.lt) goto loc_8238CDDC;
	// stw r23,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r23.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238C904:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c914
	if (ctx.cr6.eq) goto loc_8238C914;
	// stb r11,628(r31)
	REX_STORE_U8(r31.u32 + 628, ctx.r11.u8);
loc_8238C914:
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x8238c938
	if (!ctx.cr6.eq) goto loc_8238C938;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
loc_8238C938:
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// bne cr6,0x8238cddc
	if (!ctx.cr6.eq) goto loc_8238CDDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238C960:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c970
	if (ctx.cr6.eq) goto loc_8238C970;
	// stb r11,628(r31)
	REX_STORE_U8(r31.u32 + 628, ctx.r11.u8);
loc_8238C970:
	// lbz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bne cr6,0x8238c994
	if (!ctx.cr6.eq) goto loc_8238C994;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwz r9,464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 464);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, ctx.r8.u32);
loc_8238C994:
	// lbz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bne cr6,0x8238cddc
	if (!ctx.cr6.eq) goto loc_8238CDDC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r9,464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 464);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, ctx.r8.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238C9BC:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c9cc
	if (ctx.cr6.eq) goto loc_8238C9CC;
	// stb r11,644(r31)
	REX_STORE_U8(r31.u32 + 644, ctx.r11.u8);
loc_8238C9CC:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8238cdd8
	goto loc_8238CDD8;
loc_8238C9F8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ca08
	if (ctx.cr6.eq) goto loc_8238CA08;
	// stb r28,647(r31)
	REX_STORE_U8(r31.u32 + 647, r28.u8);
loc_8238CA08:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stb r27,648(r31)
	REX_STORE_U8(r31.u32 + 648, r27.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CA1C:
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238ca3c
	if (ctx.cr6.eq) goto loc_8238CA3C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,663(r31)
	REX_STORE_U8(r31.u32 + 663, ctx.r10.u8);
	// stb r9,664(r31)
	REX_STORE_U8(r31.u32 + 664, ctx.r9.u8);
loc_8238CA3C:
	// lbz r11,663(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 663);
	// lbz r10,662(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 662);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238ca5c
	if (ctx.cr6.lt) goto loc_8238CA5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r9.u32);
loc_8238CA5C:
	// lbz r9,662(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 662);
	// lbz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 664);
	// lbz r10,663(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 663);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r8,662(r31)
	REX_STORE_U8(r31.u32 + 662, ctx.r8.u8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8238ca84
	if (ctx.cr6.lt) goto loc_8238CA84;
	// stb r23,662(r31)
	REX_STORE_U8(r31.u32 + 662, r23.u8);
loc_8238CA84:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CA98:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238caa8
	if (ctx.cr6.eq) goto loc_8238CAA8;
	// stb r11,633(r31)
	REX_STORE_U8(r31.u32 + 633, ctx.r11.u8);
loc_8238CAA8:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8238cdd8
	goto loc_8238CDD8;
loc_8238CAD4:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stb r11,633(r31)
	REX_STORE_U8(r31.u32 + 633, ctx.r11.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CAE8:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stb r11,665(r31)
	REX_STORE_U8(r31.u32 + 665, ctx.r11.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CAFC:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r9,12(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 12);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238cb3c
	if (ctx.cr6.lt) goto loc_8238CB3C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// b 0x8238cdd8
	goto loc_8238CDD8;
loc_8238CB3C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,488(r10)
	REX_STORE_U32(ctx.r10.u32 + 488, ctx.r11.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CB48:
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stb r28,635(r31)
	REX_STORE_U8(r31.u32 + 635, r28.u8);
	// stb r27,636(r31)
	REX_STORE_U8(r31.u32 + 636, r27.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CB60:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cb70
	if (ctx.cr6.eq) goto loc_8238CB70;
	// stb r28,652(r31)
	REX_STORE_U8(r31.u32 + 652, r28.u8);
loc_8238CB70:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stb r27,652(r31)
	REX_STORE_U8(r31.u32 + 652, r27.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CB84:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8238cddc
	if (ctx.cr6.gt) goto loc_8238CDDC;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13396
	ctx.r12.s64 = ctx.r12.s64 + -13396;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238CBE0;
	case 1:
		goto loc_8238CBF4;
	case 2:
		goto loc_8238CC0C;
	case 3:
		goto loc_8238CDDC;
	case 4:
		goto loc_8238CDDC;
	case 5:
		goto loc_8238CDDC;
	case 6:
		goto loc_8238CC1C;
	case 7:
		goto loc_8238CDDC;
	case 8:
		goto loc_8238CC3C;
	case 9:
		goto loc_8238CC68;
	case 10:
		goto loc_8238CDDC;
	case 11:
		goto loc_8238CCF4;
	case 12:
		goto loc_8238CD54;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238CBE0:
	// addi r5,r24,4
	ctx.r5.s64 = r24.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823c8940
	ctx.lr = 0x8238CBF0;
	sub_823C8940(ctx, base);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CBF4:
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,678(r31)
	REX_STORE_U8(r31.u32 + 678, ctx.r8.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CC0C:
	// lbz r11,678(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 678);
	// rlwimi r11,r27,4,20,27
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF00F);
	// stb r11,678(r31)
	REX_STORE_U8(r31.u32 + 678, ctx.r11.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CC1C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r27,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFF0;
	// stw r10,472(r11)
	REX_STORE_U32(ctx.r11.u32 + 472, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CC3C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x8238cc58
	if (!ctx.cr6.gt) goto loc_8238CC58;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r11,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// b 0x8238cdc4
	goto loc_8238CDC4;
loc_8238CC58:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r11,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// b 0x8238cdc4
	goto loc_8238CDC4;
loc_8238CC68:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238cc80
	if (!ctx.cr6.eq) goto loc_8238CC80;
	// lwz r11,2180(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2180);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CC80:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238cc94
	if (!ctx.cr6.eq) goto loc_8238CC94;
	// stw r10,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r10.u32);
	// b 0x8238cc9c
	goto loc_8238CC9C;
loc_8238CC94:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
loc_8238CC9C:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r10,528(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,2196(r26)
	REX_STORE_U32(r26.u32 + 2196, ctx.r11.u32);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r10,2180(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 2180);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8238cddc
	if (ctx.cr6.gt) goto loc_8238CDDC;
loc_8238CCCC:
	// lwz r10,2184(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 2184);
	// lwz r9,528(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 528);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r23,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r23.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,2180(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 2180);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8238cccc
	if (!ctx.cr6.gt) goto loc_8238CCCC;
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CCF4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r29.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r7,460(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r6,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r6,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r6.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r5,460(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r4,r4,0,31,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r4,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r4.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r10,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r10.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CD54:
	// lwz r11,2172(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2172);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,2188(r26)
	REX_STORE_U32(r26.u32 + 2188, ctx.r9.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CD68:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cd78
	if (ctx.cr6.eq) goto loc_8238CD78;
	// stb r28,647(r31)
	REX_STORE_U8(r31.u32 + 647, r28.u8);
loc_8238CD78:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cddc
	if (ctx.cr6.eq) goto loc_8238CDDC;
	// stb r27,648(r31)
	REX_STORE_U8(r31.u32 + 648, r27.u8);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CD8C:
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// stw r10,2156(r26)
	REX_STORE_U32(r26.u32 + 2156, ctx.r10.u32);
	// ble cr6,0x8238cddc
	if (!ctx.cr6.gt) goto loc_8238CDDC;
	// stw r17,2156(r26)
	REX_STORE_U32(r26.u32 + 2156, r17.u32);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CDA4:
	// lbz r4,4(r25)
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8238cddc
	if (ctx.cr6.lt) goto loc_8238CDDC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823c8638
	ctx.lr = 0x8238CDB8;
	sub_823C8638(ctx, base);
	// b 0x8238cddc
	goto loc_8238CDDC;
loc_8238CDBC:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
loc_8238CDC4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
loc_8238CDD8:
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
loc_8238CDDC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8238cf54
	if (ctx.cr6.eq) goto loc_8238CF54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8238ce0c
	if (!ctx.cr0.eq) goto loc_8238CE0C;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238CE0C:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238ce38
	if (ctx.cr6.eq) goto loc_8238CE38;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823c8798
	ctx.lr = 0x8238CE34;
	sub_823C8798(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238CE38:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238ce8c
	if (ctx.cr6.eq) goto loc_8238CE8C;
	// lwz r10,476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,2156(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 2156);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * f29.f64));
	// bl 0x8234bbc8
	ctx.lr = 0x8238CE88;
	sub_8234BBC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238CE8C:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238ced4
	if (ctx.cr6.eq) goto loc_8238CED4;
	// lwz r10,472(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// lfs f0,2148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 * f30.f64));
	// bl 0x8234be00
	ctx.lr = 0x8238CED0;
	sub_8234BE00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238CED4:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238cf24
	if (ctx.cr6.eq) goto loc_8238CF24;
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x8238cefc
	if (!ctx.cr6.lt) goto loc_8238CEFC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8238CEFC:
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r18,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(r18.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r18.s32 / ctx.r10.s32 : 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8234e480
	ctx.lr = 0x8238CF20;
	sub_8234E480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238CF24:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238cf54
	if (ctx.cr6.eq) goto loc_8238CF54;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8234f290
	ctx.lr = 0x8238CF40;
	sub_8234F290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x8238CF4C;
	sub_82334CA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r23,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, r23.u32);
loc_8238CF54:
	// lwz r11,788(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 788);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,5
	r25.s64 = r25.s64 + 5;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238c4dc
	if (ctx.cr6.lt) goto loc_8238C4DC;
loc_8238CF68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_823E3DE8) {
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
	ctx.lr = 0x823E3DF0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r24,-1
	r24.s64 = -1;
	// bl 0x823ef5f0
	ctx.lr = 0x823E3E14;
	sub_823EF5F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3E28;
	sub_823E2DA8(ctx, base);
	// lis r10,86
	ctx.r10.s64 = 5636096;
	// ori r9,r10,17218
	ctx.r9.u64 = ctx.r10.u64 | 17218;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823e4160
	if (!ctx.cr6.eq) goto loc_823E4160;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3E44;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3E54;
	sub_823E2DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x823e4160
	if (ctx.cr6.eq) goto loc_823E4160;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823e2eb8
	ctx.lr = 0x823E3E6C;
	sub_823E2EB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2eb8
	ctx.lr = 0x823E3E78;
	sub_823E2EB8(ctx, base);
	// add r11,r29,r3
	ctx.r11.u64 = r29.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x823e4160
	if (ctx.cr6.gt) goto loc_823E4160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3E90;
	sub_823E2DA8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823e3f50
	if (ctx.cr6.lt) goto loc_823E3F50;
	// beq cr6,0x823e3ea8
	if (ctx.cr6.eq) goto loc_823E3EA8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E3EA8:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3EB4;
	sub_823E2DA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82393a88
	ctx.lr = 0x823E3EC8;
	sub_82393A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823e40f8
	if (ctx.cr6.eq) goto loc_823E40F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e4028
	if (!ctx.cr6.gt) goto loc_823E4028;
loc_823E3EE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r3,r30,r11
	ctx.r3.u64 = ctx.r11.u64 - r30.u64;
	// bl 0x823e2eb8
	ctx.lr = 0x823E3EF0;
	sub_823E2EB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3EFC;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e4160
	if (ctx.cr6.eq) goto loc_823E4160;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823e3f3c
	if (!ctx.cr6.gt) goto loc_823E3F3C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E3F14:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823e3f3c
	if (!ctx.cr6.lt) goto loc_823E3F3C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x823e3f14
	if (ctx.cr6.lt) goto loc_823E3F14;
loc_823E3F3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e3ee4
	if (ctx.cr6.lt) goto loc_823E3EE4;
	// b 0x823e4028
	goto loc_823E4028;
loc_823E3F50:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82393a88
	ctx.lr = 0x823E3F60;
	sub_82393A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823e40f8
	if (ctx.cr6.eq) goto loc_823E40F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3F78;
	sub_823E2DA8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// beq cr6,0x823e3fe8
	if (ctx.cr6.eq) goto loc_823E3FE8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e4028
	if (!ctx.cr6.gt) goto loc_823E4028;
	// li r30,0
	r30.s64 = 0;
loc_823E3F94:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3FA0;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3fc4
	if (ctx.cr6.eq) goto loc_823E3FC4;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E3FB4;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e4160
	if (ctx.cr6.eq) goto loc_823E4160;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// b 0x823e3fc8
	goto loc_823E3FC8;
loc_823E3FC4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E3FC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e3f94
	if (ctx.cr6.lt) goto loc_823E3F94;
	// b 0x823e4028
	goto loc_823E4028;
loc_823E3FE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e4028
	if (!ctx.cr6.gt) goto loc_823E4028;
	// li r30,0
	r30.s64 = 0;
loc_823E3FF4:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E4000;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e4160
	if (ctx.cr6.eq) goto loc_823E4160;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e3ff4
	if (ctx.cr6.lt) goto loc_823E3FF4;
loc_823E4028:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E4034;
	sub_823E2DA8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// blt cr6,0x823e4178
	if (ctx.cr6.lt) goto loc_823E4178;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x823e4160
	if (!ctx.cr6.lt) goto loc_823E4160;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E4054;
	sub_823E2DA8(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E4064;
	sub_823E2DA8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E4074;
	sub_823E2DA8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E4088;
	sub_823E2DA8(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e4160
	if (ctx.cr6.eq) goto loc_823E4160;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823e40bc
	if (ctx.cr6.eq) goto loc_823E40BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823e40dc
	if (!ctx.cr6.eq) goto loc_823E40DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r28,r11,r10
	r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x823e40dc
	goto loc_823E40DC;
loc_823E40BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e40d0
	if (!ctx.cr6.eq) goto loc_823E40D0;
	// li r28,0
	r28.s64 = 0;
	// b 0x823e40dc
	goto loc_823E40DC;
loc_823E40D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e3110
	ctx.lr = 0x823E40D8;
	sub_823E3110(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_823E40DC:
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82393a88
	ctx.lr = 0x823E40EC;
	sub_82393A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x823e4114
	if (!ctx.cr6.eq) goto loc_823E4114;
loc_823E40F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r24,-139
	r24.s64 = -139;
	// bl 0x823e3518
	ctx.lr = 0x823E4108;
	sub_823E3518(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E4114:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823e4148
	if (!ctx.cr6.gt) goto loc_823E4148;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823E4124:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823e2da8
	ctx.lr = 0x823E4130;
	sub_823E2DA8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwx r3,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823e4124
	if (!ctx.cr0.eq) goto loc_823E4124;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
loc_823E4148:
	// beq cr6,0x823e4178
	if (ctx.cr6.eq) goto loc_823E4178;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823e4178
	if (!ctx.cr6.eq) goto loc_823E4178;
loc_823E4160:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e3518
	ctx.lr = 0x823E416C;
	sub_823E3518(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E4178:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823F05B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823F05C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x823f0620
	ctx.lr = 0x823F05D4;
	sub_823F0620(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
loc_823F05DC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793a94
	ctx.lr = 0x823F05F0;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f060c
	if (ctx.cr0.lt) goto loc_823F060C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x823f0614
	if (ctx.cr6.eq) goto loc_823F0614;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x823f05dc
	if (ctx.cr6.eq) goto loc_823F05DC;
	// b 0x823f0614
	goto loc_823F0614;
loc_823F060C:
	// bl 0x823f0020
	ctx.lr = 0x823F0610;
	sub_823F0020(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823F0614:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F5258) {
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
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f5be8
	ctx.lr = 0x823F527C;
	sub_823F5BE8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f5294
	if (ctx.cr0.eq) goto loc_823F5294;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,12284(r31)
	REX_STORE_U8(r31.u32 + 12284, ctx.r11.u8);
	// b 0x823f52b4
	goto loc_823F52B4;
loc_823F5294:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f52c0
	if (ctx.cr0.eq) goto loc_823F52C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12276(r31)
	REX_STORE_U32(r31.u32 + 12276, ctx.r11.u32);
	// stw r11,12284(r31)
	REX_STORE_U32(r31.u32 + 12284, ctx.r11.u32);
	// stw r11,12288(r31)
	REX_STORE_U32(r31.u32 + 12288, ctx.r11.u32);
	// stw r11,12292(r31)
	REX_STORE_U32(r31.u32 + 12292, ctx.r11.u32);
	// stw r11,12296(r31)
	REX_STORE_U32(r31.u32 + 12296, ctx.r11.u32);
loc_823F52B4:
	// stw r11,12280(r31)
	REX_STORE_U32(r31.u32 + 12280, ctx.r11.u32);
	// stw r11,12272(r31)
	REX_STORE_U32(r31.u32 + 12272, ctx.r11.u32);
	// stw r11,12268(r31)
	REX_STORE_U32(r31.u32 + 12268, ctx.r11.u32);
loc_823F52C0:
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

DEFINE_REX_FUNC(sub_823F8B90) {
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
	ctx.lr = 0x823F8B98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f91e8
	if (ctx.cr6.eq) goto loc_823F91E8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,0
	r27.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// addi r26,r11,12280
	r26.s64 = ctx.r11.s64 + 12280;
	// addi r28,r10,12484
	r28.s64 = ctx.r10.s64 + 12484;
loc_823F8BC8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r29,29
	ctx.r9.u64 = r29.u32 & 0x7;
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f8cb8
	if (!ctx.cr0.eq) goto loc_823F8CB8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r10,6636
	ctx.r6.s64 = ctx.r10.s64 + 6636;
	// addi r10,r11,9520
	ctx.r10.s64 = ctx.r11.s64 + 9520;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,9520(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 9520);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lhzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + r31.u32);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lbz r11,9520(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9520);
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f8ca8
	if (ctx.cr6.gt) goto loc_823F8CA8;
loc_823F8C3C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8c58
	if (ctx.cr6.lt) goto loc_823F8C58;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8C58:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8c3c
	if (!ctx.cr6.gt) goto loc_823F8C3C;
loc_823F8CA8:
	// lwz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2144);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x823f91c0
	goto loc_823F91C0;
loc_823F8CB8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lbzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r29.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// bge cr6,0x823f8ce4
	if (!ctx.cr6.lt) goto loc_823F8CE4;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f8d0c
	goto loc_823F8D0C;
loc_823F8CE4:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823f8d04
	if (!ctx.cr6.lt) goto loc_823F8D04;
	// rlwinm r11,r8,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f8d0c
	goto loc_823F8D0C;
loc_823F8D04:
	// rlwinm r11,r8,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F8D0C:
	// lbz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 24);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// bge cr6,0x823f8dec
	if (!ctx.cr6.lt) goto loc_823F8DEC;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r10,r9,1222
	ctx.r10.s64 = ctx.r9.s64 + 1222;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// lhzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + r31.u32);
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f8f60
	if (ctx.cr6.gt) goto loc_823F8F60;
loc_823F8D7C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8d98
	if (ctx.cr6.lt) goto loc_823F8D98;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8D98:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,2136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8d7c
	if (!ctx.cr6.gt) goto loc_823F8D7C;
	// b 0x823f8f60
	goto loc_823F8F60;
loc_823F8DEC:
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// rlwinm r9,r11,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r10,9783
	ctx.r9.s64 = ctx.r10.s64 + 9783;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lbz r24,9783(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 9783);
	// lhz r11,13798(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 13798);
	// subf r6,r24,r6
	ctx.r6.u64 = ctx.r6.u64 - r24.u64;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lbz r11,9783(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9783);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f8ea4
	if (ctx.cr6.gt) goto loc_823F8EA4;
loc_823F8E34:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8e50
	if (ctx.cr6.lt) goto loc_823F8E50;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8E50:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// rlwinm r5,r10,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8e34
	if (!ctx.cr6.gt) goto loc_823F8E34;
loc_823F8EA4:
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + r31.u64;
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r6,r7,8178
	ctx.r6.s64 = ctx.r7.s64 + 8178;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lbz r24,10214(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 10214);
	// addi r10,r11,10214
	ctx.r10.s64 = ctx.r11.s64 + 10214;
	// subf r10,r24,r4
	ctx.r10.u64 = ctx.r4.u64 - r24.u64;
	// lhzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r31.u32);
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lbz r11,10214(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10214);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f8f60
	if (ctx.cr6.gt) goto loc_823F8F60;
loc_823F8EF4:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8f10
	if (ctx.cr6.lt) goto loc_823F8F10;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8F10:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,2136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8ef4
	if (!ctx.cr6.gt) goto loc_823F8EF4;
loc_823F8F60:
	// lbzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r28.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823f90fc
	if (ctx.cr6.lt) goto loc_823F90FC;
	// ble cr6,0x823f9038
	if (!ctx.cr6.gt) goto loc_823F9038;
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// rlwinm r5,r8,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// extsb r24,r10
	r24.s64 = ctx.r10.s8;
	// slw r10,r30,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r6.u8 & 0x3F));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// extsb r6,r24
	ctx.r6.s64 = r24.s8;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lbzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f9038
	if (ctx.cr6.gt) goto loc_823F9038;
loc_823F8FCC:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8fe8
	if (ctx.cr6.lt) goto loc_823F8FE8;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8FE8:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r10,2136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8fcc
	if (!ctx.cr6.gt) goto loc_823F8FCC;
loc_823F9038:
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lbz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,8575
	ctx.r10.s64 = ctx.r10.s64 + 8575;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r4,17166(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 17166);
	// addi r10,r11,17166
	ctx.r10.s64 = ctx.r11.s64 + 17166;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// lhzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + r31.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lbz r11,17166(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17166);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f91b4
	if (ctx.cr6.gt) goto loc_823F91B4;
loc_823F908C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f90a8
	if (ctx.cr6.lt) goto loc_823F90A8;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F90A8:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,2136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f908c
	if (!ctx.cr6.gt) goto loc_823F908C;
	// b 0x823f91b4
	goto loc_823F91B4;
loc_823F90FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f91b4
	if (ctx.cr6.eq) goto loc_823F91B4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 24);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lbzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r28.u32);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x823f91b4
	if (ctx.cr6.gt) goto loc_823F91B4;
loc_823F9148:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f9164
	if (ctx.cr6.lt) goto loc_823F9164;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F9164:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,2136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f9148
	if (!ctx.cr6.gt) goto loc_823F9148;
loc_823F91B4:
	// lwz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2144);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_823F91C0:
	// stw r11,2144(r31)
	REX_STORE_U32(r31.u32 + 2144, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x823f91e0
	if (!ctx.cr6.eq) goto loc_823F91E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8578
	ctx.lr = 0x823F91D8;
	sub_823F8578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2161(r31)
	REX_STORE_U8(r31.u32 + 2161, ctx.r11.u8);
loc_823F91E0:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x823f8bc8
	if (ctx.cr6.lt) goto loc_823F8BC8;
loc_823F91E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8241DB90) {
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
	ctx.lr = 0x8241DB98;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r22,1
	r22.s64 = 1;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r21,0
	r21.s64 = 0;
	// stw r10,88(r4)
	REX_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// mr r25,r22
	r25.u64 = r22.u64;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x8241dbcc
	if (!ctx.cr6.eq) goto loc_8241DBCC;
	// li r25,2
	r25.s64 = 2;
loc_8241DBCC:
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241dc6c
	if (ctx.cr6.eq) goto loc_8241DC6C;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x8241dc48
	if (ctx.cr6.eq) goto loc_8241DC48;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x8241dc48
	if (ctx.cr6.eq) goto loc_8241DC48;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x8241dc48
	if (ctx.cr6.eq) goto loc_8241DC48;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8241dc48
	if (ctx.cr6.eq) goto loc_8241DC48;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x8241dc20
	if (ctx.cr6.eq) goto loc_8241DC20;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x8241dc20
	if (ctx.cr6.eq) goto loc_8241DC20;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x8241dc20
	if (ctx.cr6.eq) goto loc_8241DC20;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8241dc20
	if (ctx.cr6.eq) goto loc_8241DC20;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8241dc6c
	if (!ctx.cr6.eq) goto loc_8241DC6C;
loc_8241DC20:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241dc6c
	if (ctx.cr6.eq) goto loc_8241DC6C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241dc6c
	if (!ctx.cr6.eq) goto loc_8241DC6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2026
	ctx.r5.s64 = 2026;
	// addi r6,r11,-27488
	ctx.r6.s64 = ctx.r11.s64 + -27488;
	// b 0x8241dc54
	goto loc_8241DC54;
loc_8241DC48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2025
	ctx.r5.s64 = 2025;
	// addi r6,r11,-27568
	ctx.r6.s64 = ctx.r11.s64 + -27568;
loc_8241DC54:
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8241a4f0
	ctx.lr = 0x8241DC60;
	sub_8241A4F0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8241e55c
	goto loc_8241E55C;
loc_8241DC6C:
	// lwz r30,60(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 60);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-27648
	r28.s64 = ctx.r11.s64 + -27648;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241dd40
	if (ctx.cr6.eq) goto loc_8241DD40;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x8241dd40
	if (!ctx.cr6.eq) goto loc_8241DD40;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8241dca0
	if (!ctx.cr6.eq) goto loc_8241DCA0;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8241DCA0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241dcc8
	if (ctx.cr6.eq) goto loc_8241DCC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2014
	ctx.r5.s64 = 2014;
	// addi r6,r11,-27712
	ctx.r6.s64 = ctx.r11.s64 + -27712;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DCC4;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DCC8:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241dd40
	if (ctx.cr6.eq) goto loc_8241DD40;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8241dd24
	if (ctx.cr6.lt) goto loc_8241DD24;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8241dd24
	if (ctx.cr6.gt) goto loc_8241DD24;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8241dcf8
	if (!ctx.cr6.eq) goto loc_8241DCF8;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8241DCF8:
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241dd1c
	if (ctx.cr6.eq) goto loc_8241DD1C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DD18;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DD1C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8241dd40
	goto loc_8241DD40;
loc_8241DD24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2008
	ctx.r5.s64 = 2008;
	// addi r6,r11,-27800
	ctx.r6.s64 = ctx.r11.s64 + -27800;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DD3C;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DD40:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// lis r27,3328
	r27.s64 = 218103808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241de0c
	if (ctx.cr6.eq) goto loc_8241DE0C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x8241de0c
	if (!ctx.cr6.eq) goto loc_8241DE0C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8241dd70
	if (ctx.cr6.lt) goto loc_8241DD70;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8241dd80
	if (!ctx.cr6.gt) goto loc_8241DD80;
loc_8241DD70:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8241dd9c
	if (ctx.cr6.lt) goto loc_8241DD9C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8241dd9c
	if (ctx.cr6.gt) goto loc_8241DD9C;
loc_8241DD80:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2021
	ctx.r5.s64 = 2021;
	// addi r6,r11,-27852
	ctx.r6.s64 = ctx.r11.s64 + -27852;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DD98;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DD9C:
	// lwz r30,64(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 64);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8241ddb4
	if (!ctx.cr6.eq) goto loc_8241DDB4;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8241DDB4:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241dde4
	if (ctx.cr6.eq) goto loc_8241DDE4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8241dde4
	if (ctx.cr6.eq) goto loc_8241DDE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2019
	ctx.r5.s64 = 2019;
	// addi r6,r11,-27900
	ctx.r6.s64 = ctx.r11.s64 + -27900;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DDE0;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DDE4:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241de0c
	if (ctx.cr6.eq) goto loc_8241DE0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2020
	ctx.r5.s64 = 2020;
	// addi r6,r11,-27976
	ctx.r6.s64 = ctx.r11.s64 + -27976;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DE08;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DE0C:
	// addi r24,r26,68
	r24.s64 = r26.s64 + 68;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8241DE18:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241deb4
	if (ctx.cr6.eq) goto loc_8241DEB4;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r11,81
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// beq cr6,0x8241dea4
	if (ctx.cr6.eq) goto loc_8241DEA4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8241dea4
	if (ctx.cr6.eq) goto loc_8241DEA4;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x8241dea4
	if (ctx.cr6.eq) goto loc_8241DEA4;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8241de54
	if (!ctx.cr6.eq) goto loc_8241DE54;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8241DE54:
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241dea4
	if (ctx.cr6.eq) goto loc_8241DEA4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8241de70
	if (!ctx.cr6.eq) goto loc_8241DE70;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8241DE70:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241de94
	if (ctx.cr6.eq) goto loc_8241DE94;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DE90;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241DE94:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241dea4
	if (ctx.cr6.eq) goto loc_8241DEA4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8241DEA4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x8241de18
	if (ctx.cr6.lt) goto loc_8241DE18;
loc_8241DEB4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241da80
	ctx.lr = 0x8241DEC0;
	sub_8241DA80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241e55c
	if (ctx.cr0.lt) goto loc_8241E55C;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r30,48(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 48);
	// add r23,r25,r11
	r23.u64 = r25.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bne cr6,0x8241e008
	if (!ctx.cr6.eq) goto loc_8241E008;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8241def0
	if (ctx.cr6.lt) goto loc_8241DEF0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8241df00
	if (!ctx.cr6.gt) goto loc_8241DF00;
loc_8241DEF0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8241e008
	if (ctx.cr6.lt) goto loc_8241E008;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x8241e008
	if (ctx.cr6.gt) goto loc_8241E008;
loc_8241DF00:
	// lwz r10,72(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 72);
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// li r30,2
	r30.s64 = 2;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8241dfb8
	if (ctx.cr6.gt) goto loc_8241DFB8;
	// beq cr6,0x8241dfb0
	if (ctx.cr6.eq) goto loc_8241DFB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241dfa4
	if (ctx.cr6.eq) goto loc_8241DFA4;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241df9c
	if (ctx.cr6.eq) goto loc_8241DF9C;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241df94
	if (ctx.cr6.eq) goto loc_8241DF94;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241e004
	if (ctx.cr6.eq) goto loc_8241E004;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241df8c
	if (ctx.cr6.eq) goto loc_8241DF8C;
	// lis r8,1280
	ctx.r8.s64 = 83886080;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241e004
	if (ctx.cr6.eq) goto loc_8241E004;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_8241DF68:
	// bne cr6,0x8241e008
	if (!ctx.cr6.eq) goto loc_8241E008;
loc_8241DF6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2013
	ctx.r5.s64 = 2013;
	// addi r6,r11,-28028
	ctx.r6.s64 = ctx.r11.s64 + -28028;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241DF84;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
	// b 0x8241e008
	goto loc_8241E008;
loc_8241DF8C:
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// b 0x8241dfa8
	goto loc_8241DFA8;
loc_8241DF94:
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// b 0x8241dfa8
	goto loc_8241DFA8;
loc_8241DF9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8241dfa8
	goto loc_8241DFA8;
loc_8241DFA4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
loc_8241DFA8:
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x8241e008
	goto loc_8241E008;
loc_8241DFB0:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// b 0x8241dfa8
	goto loc_8241DFA8;
loc_8241DFB8:
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241e004
	if (ctx.cr6.eq) goto loc_8241E004;
	// lis r9,2304
	ctx.r9.s64 = 150994944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241df6c
	if (ctx.cr6.eq) goto loc_8241DF6C;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241df6c
	if (ctx.cr6.eq) goto loc_8241DF6C;
	// lis r9,2816
	ctx.r9.s64 = 184549376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241dffc
	if (ctx.cr6.eq) goto loc_8241DFFC;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241e004
	if (ctx.cr6.eq) goto loc_8241E004;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// b 0x8241df68
	goto loc_8241DF68;
loc_8241DFFC:
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x8241dfa8
	goto loc_8241DFA8;
loc_8241E004:
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_8241E008:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241e018
	if (ctx.cr6.eq) goto loc_8241E018;
	// oris r30,r30,16384
	r30.u64 = r30.u64 | 1073741824;
loc_8241E018:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241e028
	if (ctx.cr6.eq) goto loc_8241E028;
	// oris r30,r30,4096
	r30.u64 = r30.u64 | 268435456;
loc_8241E028:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8241e03c
	if (ctx.cr6.lt) goto loc_8241E03C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8241e04c
	if (!ctx.cr6.gt) goto loc_8241E04C;
loc_8241E03C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8241e058
	if (ctx.cr6.lt) goto loc_8241E058;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x8241e058
	if (ctx.cr6.gt) goto loc_8241E058;
loc_8241E04C:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
loc_8241E058:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x8241e074
	if (ctx.cr6.eq) goto loc_8241E074;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x8241e074
	if (ctx.cr6.eq) goto loc_8241E074;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x8241e080
	if (!ctx.cr6.eq) goto loc_8241E080;
loc_8241E074:
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 56);
	// rlwinm r11,r11,16,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
loc_8241E080:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x8241e0c8
	if (!ctx.cr6.eq) goto loc_8241E0C8;
	// lwz r10,56(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_8241E0C8:
	// lwz r10,60(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241e1f0
	if (ctx.cr6.eq) goto loc_8241E1F0;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// bne cr6,0x8241e1f0
	if (!ctx.cr6.eq) goto loc_8241E1F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241e128
	if (!ctx.cr6.eq) goto loc_8241E128;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241e128
	if (!ctx.cr6.eq) goto loc_8241E128;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x8241e120
	if (ctx.cr6.eq) goto loc_8241E120;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8241e120
	if (ctx.cr6.eq) goto loc_8241E120;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8241e128
	if (!ctx.cr6.eq) goto loc_8241E128;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// b 0x8241e124
	goto loc_8241E124;
loc_8241E120:
	// lis r11,7
	ctx.r11.s64 = 458752;
loc_8241E124:
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_8241E128:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// lwz r8,52(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 52);
	// rlwimi r9,r11,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,24(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// lwz r6,32(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r8,0,4,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00000;
	// lwz r5,40(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r7,21
	ctx.r9.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r6,0,12,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// beq cr6,0x8241e174
	if (ctx.cr6.eq) goto loc_8241E174;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_8241E174:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241e1f0
	if (ctx.cr6.eq) goto loc_8241E1F0;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r7,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r5,21
	ctx.r6.u64 = ctx.r5.u32 & 0x7FF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_8241E1F0:
	// lwz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241e25c
	if (ctx.cr6.eq) goto loc_8241E25C;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// bne cr6,0x8241e25c
	if (!ctx.cr6.eq) goto loc_8241E25C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r7,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r5,21
	ctx.r6.u64 = ctx.r5.u32 & 0x7FF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_8241E25C:
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x8241e2cc
	if (!ctx.cr6.eq) goto loc_8241E2CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8241E270:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8241e504
	if (ctx.cr6.eq) goto loc_8241E504;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x8241e2ac
	if (ctx.cr6.lt) goto loc_8241E2AC;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x8241e2ac
	if (ctx.cr6.gt) goto loc_8241E2AC;
	// lfd f0,24(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
loc_8241E2AC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// blt cr6,0x8241e270
	if (ctx.cr6.lt) goto loc_8241E270;
	// b 0x8241e504
	goto loc_8241E504;
loc_8241E2CC:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x8241e32c
	if (!ctx.cr6.eq) goto loc_8241E32C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8241E2DC:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8241e504
	if (ctx.cr6.eq) goto loc_8241E504;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8241e2fc
	if (ctx.cr6.eq) goto loc_8241E2FC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8241e30c
	if (!ctx.cr6.eq) goto loc_8241E30C;
loc_8241E2FC:
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
loc_8241E30C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// blt cr6,0x8241e2dc
	if (ctx.cr6.lt) goto loc_8241E2DC;
	// b 0x8241e504
	goto loc_8241E504;
loc_8241E32C:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8241e360
	if (!ctx.cr6.eq) goto loc_8241E360;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x8241e504
	goto loc_8241E504;
loc_8241E360:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r28,r11,-28092
	r28.s64 = ctx.r11.s64 + -28092;
loc_8241E370:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241e504
	if (ctx.cr6.eq) goto loc_8241E504;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8241e3d4
	if (!ctx.cr6.eq) goto loc_8241E3D4;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241e3d4
	if (!ctx.cr6.eq) goto loc_8241E3D4;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x8241e3cc
	if (ctx.cr6.eq) goto loc_8241E3CC;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8241e3cc
	if (ctx.cr6.eq) goto loc_8241E3CC;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x8241e3cc
	if (ctx.cr6.eq) goto loc_8241E3CC;
	// cmplwi cr6,r10,78
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 78, ctx.xer);
	// beq cr6,0x8241e3cc
	if (ctx.cr6.eq) goto loc_8241E3CC;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x8241e3cc
	if (ctx.cr6.eq) goto loc_8241E3CC;
	// cmplwi cr6,r10,79
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 79, ctx.xer);
	// bne cr6,0x8241e3d4
	if (!ctx.cr6.eq) goto loc_8241E3D4;
loc_8241E3CC:
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_8241E3D4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r10,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r8,0,4,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF000000;
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r9,r7,21
	ctx.r9.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r6,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// beq cr6,0x8241e420
	if (ctx.cr6.eq) goto loc_8241E420;
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
loc_8241E420:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241e4f4
	if (ctx.cr6.eq) goto loc_8241E4F4;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241e4a0
	if (!ctx.cr6.eq) goto loc_8241E4A0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8241e484
	if (!ctx.cr6.eq) goto loc_8241E484;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241e484
	if (!ctx.cr6.eq) goto loc_8241E484;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241e484
	if (!ctx.cr6.eq) goto loc_8241E484;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241e4f4
	if (ctx.cr6.eq) goto loc_8241E4F4;
loc_8241E484:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2007
	ctx.r5.s64 = 2007;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241E498;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
	// b 0x8241e4f4
	goto loc_8241E4F4;
loc_8241E4A0:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r7,r7,0,4,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 92);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r8,r6,21
	ctx.r8.u64 = ctx.r6.u32 & 0x7FF;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_8241E4F4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x8241e370
	if (ctx.cr6.lt) goto loc_8241E370;
loc_8241E504:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x8241e52c
	if (ctx.cr6.eq) goto loc_8241E52C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-28136
	ctx.r6.s64 = ctx.r11.s64 + -28136;
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241E528;
	sub_8241A4F0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(r31.u32 + 76, r22.u32);
loc_8241E52C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8241e540
	if (ctx.cr6.eq) goto loc_8241E540;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x8241e558
	goto loc_8241E558;
loc_8241E540:
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c3f0
	ctx.lr = 0x8241E54C;
	sub_8241C3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8241e558
	if (!ctx.cr0.lt) goto loc_8241E558;
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
loc_8241E558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E55C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824732D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824715b8
	ctx.lr = 0x824732FC;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824733ac
	if (ctx.cr0.lt) goto loc_824733AC;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// subfic r10,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,328(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 328);
	// and r30,r10,r8
	r30.u64 = ctx.r10.u64 & ctx.r8.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x82473348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824733ac
	if (ctx.cr0.lt) goto loc_824733AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// or r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 | r30.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824733ac
	if (ctx.cr0.lt) goto loc_824733AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824733ac
	if (ctx.cr0.lt) goto loc_824733AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824733A0;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824733ac
	if (ctx.cr0.lt) goto loc_824733AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824733AC:
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

DEFINE_REX_FUNC(sub_824775E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82477630
	if (ctx.cr6.gt) goto loc_82477630;
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,20528
	ctx.r10.s64 = 1345323008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28688
	ctx.r10.s64 = 1880096768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// b 0x82477658
	goto loc_82477658;
loc_82477630:
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28880
	ctx.r10.s64 = 1892679680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477664
	if (ctx.cr6.eq) goto loc_82477664;
	// lis r10,28928
	ctx.r10.s64 = 1895825408;
loc_82477658:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82477664:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82479370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,64(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8247939c
	if (!ctx.cr6.lt) goto loc_8247939C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8247939C:
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247C010) {
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
	ctx.lr = 0x8247C018;
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247c1f4
	if (ctx.cr6.eq) goto loc_8247C1F4;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247c1f4
	if (!ctx.cr6.eq) goto loc_8247C1F4;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r27,r11,0,0,11
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247c0b4
	if (!ctx.cr6.eq) goto loc_8247C0B4;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8247c090
	if (ctx.cr6.eq) goto loc_8247C090;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C074:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8247c090
	if (ctx.cr6.eq) goto loc_8247C090;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8247c074
	if (ctx.cr6.lt) goto loc_8247C074;
loc_8247C090:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c0a4
	if (ctx.cr6.eq) goto loc_8247C0A4;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
loc_8247C0A4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8247c1f8
	goto loc_8247C1F8;
loc_8247C0B4:
	// lis r25,8272
	r25.s64 = 542113792;
	// lis r26,8256
	r26.s64 = 541065216;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// beq cr6,0x8247c0cc
	if (ctx.cr6.eq) goto loc_8247C0CC;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bne cr6,0x8247c1f4
	if (!ctx.cr6.eq) goto loc_8247C1F4;
loc_8247C0CC:
	// lwz r28,12(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247c100
	if (ctx.cr6.eq) goto loc_8247C100;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247C0E4:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8247c100
	if (ctx.cr6.eq) goto loc_8247C100;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// blt cr6,0x8247c0e4
	if (ctx.cr6.lt) goto loc_8247C0E4;
loc_8247C100:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r31,16(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8247C114:
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r9,r11,r8
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r24,r3,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r24,r29
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + r29.u32);
	// lwz r24,4(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r24,r31
	r24.u64 = REX_LOAD_U32(r24.u32 + r31.u32);
	// lwz r24,4(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm. r24,r24,0,23,23
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8247c160
	if (ctx.cr0.eq) goto loc_8247C160;
	// lwz r24,8(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x8247c1c0
	if (ctx.cr6.eq) goto loc_8247C1C0;
loc_8247C160:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8247c114
	if (ctx.cr6.lt) goto loc_8247C114;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bne cr6,0x8247c1f4
	if (!ctx.cr6.eq) goto loc_8247C1F4;
	// add r10,r28,r7
	ctx.r10.u64 = r28.u64 + ctx.r7.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247c1f4
	if (!ctx.cr6.eq) goto loc_8247C1F4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c1b4
	if (ctx.cr6.eq) goto loc_8247C1B4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f0,8312(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
loc_8247C1B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8247c1f8
	goto loc_8247C1F8;
loc_8247C1C0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8247c1f8
	if (ctx.cr6.eq) goto loc_8247C1F8;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// lfd f13,0(r5)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// bne cr6,0x8247c1e4
	if (!ctx.cr6.eq) goto loc_8247C1E4;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// b 0x8247c1f8
	goto loc_8247C1F8;
loc_8247C1E4:
	// lfd f12,0(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// stfd f0,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// b 0x8247c1f8
	goto loc_8247C1F8;
loc_8247C1F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8247C1F8:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82494D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82494D50;
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824009e0
	ctx.lr = 0x82494D90;
	sub_824009E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r10,28576
	ctx.r6.s64 = ctx.r10.s64 + 28576;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82494DB0;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82495950) {
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
	ctx.lr = 0x82495958;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82495980
	if (!ctx.cr6.eq) goto loc_82495980;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82495d68
	goto loc_82495D68;
loc_82495980:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82495994
	if (!ctx.cr6.eq) goto loc_82495994;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,-7136
	r27.s64 = ctx.r11.s64 + -7136;
	// b 0x82495d1c
	goto loc_82495D1C;
loc_82495994:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82495ccc
	if (ctx.cr6.eq) goto loc_82495CCC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82495c34
	if (ctx.cr6.eq) goto loc_82495C34;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x824959bc
	if (ctx.cr6.eq) goto loc_824959BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-11784
	r27.s64 = ctx.r11.s64 + -11784;
	// b 0x82495d1c
	goto loc_82495D1C;
loc_824959BC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824959d4
	if (ctx.cr0.eq) goto loc_824959D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-11792
	ctx.r6.s64 = ctx.r11.s64 + -11792;
	// b 0x824959dc
	goto loc_824959DC;
loc_824959D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r11,-26856
	ctx.r6.s64 = ctx.r11.s64 + -26856;
loc_824959DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,53
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53, ctx.xer);
	// bgt cr6,0x82495bd8
	if (ctx.cr6.gt) goto loc_82495BD8;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,-15352
	ctx.r12.s64 = ctx.r12.s64 + -15352;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// nop 
	// addi r12,r12,23056
	ctx.r12.s64 = ctx.r12.s64 + 23056;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82495A10;
	case 1:
		goto loc_82495A1C;
	case 2:
		goto loc_82495A1C;
	case 3:
		goto loc_82495A1C;
	case 4:
		goto loc_82495A1C;
	case 5:
		goto loc_82495A1C;
	case 6:
		goto loc_82495A28;
	case 7:
		goto loc_82495A28;
	case 8:
		goto loc_82495A28;
	case 9:
		goto loc_82495A28;
	case 10:
		goto loc_82495A34;
	case 11:
		goto loc_82495A40;
	case 12:
		goto loc_82495A34;
	case 13:
		goto loc_82495A4C;
	case 14:
		goto loc_82495A58;
	case 15:
		goto loc_82495A64;
	case 16:
		goto loc_82495A58;
	case 17:
		goto loc_82495A70;
	case 18:
		goto loc_82495A7C;
	case 19:
		goto loc_82495A88;
	case 20:
		goto loc_82495A7C;
	case 21:
		goto loc_82495A94;
	case 22:
		goto loc_82495AA0;
	case 23:
		goto loc_82495AAC;
	case 24:
		goto loc_82495AB8;
	case 25:
		goto loc_82495AC4;
	case 26:
		goto loc_82495AF4;
	case 27:
		goto loc_82495AD0;
	case 28:
		goto loc_82495B00;
	case 29:
		goto loc_82495ADC;
	case 30:
		goto loc_82495AE8;
	case 31:
		goto loc_82495B0C;
	case 32:
		goto loc_82495B18;
	case 33:
		goto loc_82495B30;
	case 34:
		goto loc_82495B3C;
	case 35:
		goto loc_82495B48;
	case 36:
		goto loc_82495B54;
	case 37:
		goto loc_82495B60;
	case 38:
		goto loc_82495BD8;
	case 39:
		goto loc_82495B24;
	case 40:
		goto loc_82495BD8;
	case 41:
		goto loc_82495BD8;
	case 42:
		goto loc_82495B6C;
	case 43:
		goto loc_82495B78;
	case 44:
		goto loc_82495B84;
	case 45:
		goto loc_82495B90;
	case 46:
		goto loc_82495B9C;
	case 47:
		goto loc_82495BA8;
	case 48:
		goto loc_82495BD8;
	case 49:
		goto loc_82495BD8;
	case 50:
		goto loc_82495BD8;
	case 51:
		goto loc_82495BB4;
	case 52:
		goto loc_82495BC0;
	case 53:
		goto loc_82495BCC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82495A10:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7044
	ctx.r7.s64 = ctx.r11.s64 + -7044;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A1C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r11,-24588
	ctx.r7.s64 = ctx.r11.s64 + -24588;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A28:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11800
	ctx.r7.s64 = ctx.r11.s64 + -11800;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7144
	ctx.r7.s64 = ctx.r11.s64 + -7144;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A40:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11808
	ctx.r7.s64 = ctx.r11.s64 + -11808;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A4C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11816
	ctx.r7.s64 = ctx.r11.s64 + -11816;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A58:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11828
	ctx.r7.s64 = ctx.r11.s64 + -11828;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11840
	ctx.r7.s64 = ctx.r11.s64 + -11840;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A70:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11856
	ctx.r7.s64 = ctx.r11.s64 + -11856;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11868
	ctx.r7.s64 = ctx.r11.s64 + -11868;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A88:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11880
	ctx.r7.s64 = ctx.r11.s64 + -11880;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495A94:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11896
	ctx.r7.s64 = ctx.r11.s64 + -11896;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-14976
	ctx.r7.s64 = ctx.r11.s64 + -14976;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7152
	ctx.r7.s64 = ctx.r11.s64 + -7152;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7160
	ctx.r7.s64 = ctx.r11.s64 + -7160;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AC4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11908
	ctx.r7.s64 = ctx.r11.s64 + -11908;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AD0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11920
	ctx.r7.s64 = ctx.r11.s64 + -11920;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495ADC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11932
	ctx.r7.s64 = ctx.r11.s64 + -11932;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AE8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11944
	ctx.r7.s64 = ctx.r11.s64 + -11944;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495AF4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11960
	ctx.r7.s64 = ctx.r11.s64 + -11960;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B00:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11976
	ctx.r7.s64 = ctx.r11.s64 + -11976;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B0C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11988
	ctx.r7.s64 = ctx.r11.s64 + -11988;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B18:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12008
	ctx.r7.s64 = ctx.r11.s64 + -12008;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B24:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12016
	ctx.r7.s64 = ctx.r11.s64 + -12016;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7068
	ctx.r7.s64 = ctx.r11.s64 + -7068;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B3C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12028
	ctx.r7.s64 = ctx.r11.s64 + -12028;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B48:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12040
	ctx.r7.s64 = ctx.r11.s64 + -12040;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B54:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12052
	ctx.r7.s64 = ctx.r11.s64 + -12052;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12064
	ctx.r7.s64 = ctx.r11.s64 + -12064;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7268
	ctx.r7.s64 = ctx.r11.s64 + -7268;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7284
	ctx.r7.s64 = ctx.r11.s64 + -7284;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12080
	ctx.r7.s64 = ctx.r11.s64 + -12080;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B90:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12096
	ctx.r7.s64 = ctx.r11.s64 + -12096;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495B9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,-7316
	ctx.r7.s64 = ctx.r11.s64 + -7316;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495BA8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12108
	ctx.r7.s64 = ctx.r11.s64 + -12108;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495BB4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12120
	ctx.r7.s64 = ctx.r11.s64 + -12120;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495BC0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12132
	ctx.r7.s64 = ctx.r11.s64 + -12132;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495BCC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-12148
	ctx.r7.s64 = ctx.r11.s64 + -12148;
	// b 0x82495be0
	goto loc_82495BE0;
loc_82495BD8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r11,-11784
	ctx.r7.s64 = ctx.r11.s64 + -11784;
loc_82495BE0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82495c20
	if (ctx.cr6.eq) goto loc_82495C20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82495c08
	if (ctx.cr6.eq) goto loc_82495C08;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,19204
	ctx.r5.s64 = ctx.r11.s64 + 19204;
	// b 0x82495d18
	goto loc_82495D18;
loc_82495C08:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r5,r11,-12160
	ctx.r5.s64 = ctx.r11.s64 + -12160;
	// bl 0x82404168
	ctx.lr = 0x82495C1C;
	sub_82404168(ctx, base);
	// b 0x82495d1c
	goto loc_82495D1C;
loc_82495C20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r11,30444
	ctx.r5.s64 = ctx.r11.s64 + 30444;
	// bl 0x82404168
	ctx.lr = 0x82495C30;
	sub_82404168(ctx, base);
	// b 0x82495d1c
	goto loc_82495D1C;
loc_82495C34:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// b 0x82495c48
	goto loc_82495C48;
loc_82495C40:
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
loc_82495C48:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82495c40
	if (ctx.cr6.eq) goto loc_82495C40;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82495950
	ctx.lr = 0x82495C60;
	sub_82495950(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82495d1c
	if (!ctx.cr6.eq) goto loc_82495D1C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-12168
	r28.s64 = ctx.r11.s64 + -12168;
loc_82495C78:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r29,r30,r11
	r29.u64 = r30.u64 + ctx.r11.u64;
	// subfic r4,r30,255
	ctx.xer.ca = r30.u32 <= 255;
	ctx.r4.u64 = static_cast<uint64_t>(255) - r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82404168
	ctx.lr = 0x82495C94;
	sub_82404168(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82495C98:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82495c98
	if (!ctx.cr6.eq) goto loc_82495C98;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82495c78
	if (ctx.cr6.eq) goto loc_82495C78;
	// b 0x82495d1c
	goto loc_82495D1C;
loc_82495CCC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824956c8
	ctx.lr = 0x82495CD8;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82495cec
	if (ctx.cr0.eq) goto loc_82495CEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-11792
	r30.s64 = ctx.r11.s64 + -11792;
	// b 0x82495cf4
	goto loc_82495CF4;
loc_82495CEC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
loc_82495CF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82495868
	ctx.lr = 0x82495D00;
	sub_82495868(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r11,-12184
	ctx.r5.s64 = ctx.r11.s64 + -12184;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82495D18:
	// bl 0x82404168
	ctx.lr = 0x82495D1C;
	sub_82404168(ctx, base);
loc_82495D1C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82495D20:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82495d20
	if (!ctx.cr6.eq) goto loc_82495D20;
	// subf r10,r27,r11
	ctx.r10.u64 = ctx.r11.u64 - r27.u64;
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82495d4c
	if (!ctx.cr6.gt) goto loc_82495D4C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82495D4C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82495D5C;
	sub_826A1E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r11,r31,r25
	REX_STORE_U8(r31.u32 + r25.u32, ctx.r11.u8);
loc_82495D68:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824B8B08) {
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
	// lwz r4,560(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824b8b7c
	if (ctx.cr6.eq) goto loc_824B8B7C;
	// lwz r5,548(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b8b7c
	if (ctx.cr6.eq) goto loc_824B8B7C;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824b8b4c
	if (ctx.cr6.eq) goto loc_824B8B4C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b8b8c
	goto loc_824B8B8C;
loc_824B8B4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b8688
	ctx.lr = 0x824B8B54;
	sub_824B8688(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65533
	ctx.r4.u64 = ctx.r4.u64 | 65533;
	// bl 0x824715b8
	ctx.lr = 0x824B8B64;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b8b8c
	if (ctx.cr0.lt) goto loc_824B8B8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824B8B74;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b8b8c
	if (ctx.cr0.lt) goto loc_824B8B8C;
loc_824B8B7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 552);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b8688
	ctx.lr = 0x824B8B8C;
	sub_824B8688(ctx, base);
loc_824B8B8C:
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

DEFINE_REX_FUNC(sub_824BD3D0) {
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
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824bd44c
	if (!ctx.cr6.lt) goto loc_824BD44C;
	// lwz r8,260(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bd44c
	if (ctx.cr0.eq) goto loc_824BD44C;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824bd44c
	if (ctx.cr6.eq) goto loc_824BD44C;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BD410:
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x824bd440
	if (!ctx.cr6.eq) goto loc_824BD440;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824bd410
	if (ctx.cr6.lt) goto loc_824BD410;
	// b 0x824bd44c
	goto loc_824BD44C;
loc_824BD440:
	// bl 0x824bc1a0
	ctx.lr = 0x824BD444;
	sub_824BC1A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd450
	if (ctx.cr0.lt) goto loc_824BD450;
loc_824BD44C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BD450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BFE28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,440(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 440);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r10,-904
	ctx.r9.s64 = ctx.r10.s64 + -904;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C01C0) {
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
	ctx.lr = 0x824C01C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// ori r10,r11,51696
	ctx.r10.u64 = ctx.r11.u64 | 51696;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// divwu. r31,r10,r5
	r31.u64 = uint32_t(ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0);
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// bgt 0x824c0210
	if (ctx.cr0.gt) goto loc_824C0210;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,70
	ctx.r10.s64 = 70;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C0210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C0210:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x824c021c
	if (ctx.cr6.lt) goto loc_824C021C;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_824C021C:
	// stw r31,80(r30)
	REX_STORE_U32(r30.u32 + 80, r31.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824bfec8
	ctx.lr = 0x824C0230;
	sub_824BFEC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824c0290
	if (ctx.cr6.eq) goto loc_824C0290;
loc_824C0240:
	// subf r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c0250
	if (ctx.cr6.lt) goto loc_824C0250;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_824C0250:
	// mullw r5,r31,r28
	ctx.r5.s64 = int64_t(r31.s32) * int64_t(r28.s32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824c00a0
	ctx.lr = 0x824C0260;
	sub_824C00A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824c0288
	if (ctx.cr6.eq) goto loc_824C0288;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_824C027C:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// bdnz 0x824c027c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C027C;
loc_824C0288:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x824c0240
	if (ctx.cr6.lt) goto loc_824C0240;
loc_824C0290:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824C3FA8) {
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
	ctx.lr = 0x824C3FB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1440(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1440);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// ble cr6,0x824c3ffc
	if (!ctx.cr6.gt) goto loc_824C3FFC;
loc_824C3FC8:
	// lwz r28,1440(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 1440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,1436(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82442258
	ctx.lr = 0x824C3FE0;
	sub_82442258(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c628
	ctx.lr = 0x824C3FF0;
	sub_8243C628(ctx, base);
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824c3fc8
	if (ctx.cr6.gt) goto loc_824C3FC8;
loc_824C3FFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824c4028
	if (ctx.cr6.eq) goto loc_824C4028;
	// lwz r29,1436(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82442258
	ctx.lr = 0x824C4018;
	sub_82442258(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c628
	ctx.lr = 0x824C4028;
	sub_8243C628(ctx, base);
loc_824C4028:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c3400
	ctx.lr = 0x824C4030;
	sub_824C3400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824c4090
	if (ctx.cr0.eq) goto loc_824C4090;
	// lbz r11,1548(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1548);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4050
	if (ctx.cr0.eq) goto loc_824C4050;
	// lwz r10,1372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c4064
	if (ctx.cr0.eq) goto loc_824C4064;
loc_824C4050:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c4078
	if (!ctx.cr6.eq) goto loc_824C4078;
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c4078
	if (ctx.cr0.eq) goto loc_824C4078;
loc_824C4064:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// bl 0x8243c4a8
	ctx.lr = 0x824C4074;
	sub_8243C4A8(ctx, base);
	// b 0x824c4088
	goto loc_824C4088;
loc_824C4078:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// bl 0x8243c460
	ctx.lr = 0x824C4088;
	sub_8243C460(ctx, base);
loc_824C4088:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c4094
	goto loc_824C4094;
loc_824C4090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C4094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824C7618) {
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
	// lwz r31,428(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824c7658
	if (ctx.cr6.eq) goto loc_824C7658;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C7654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824c76a0
	goto loc_824C76A0;
loc_824C7658:
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c768c
	if (ctx.cr6.eq) goto loc_824C768C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,29808
	ctx.r10.s64 = ctx.r11.s64 + 29808;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x824c70c0
	ctx.lr = 0x824C767C;
	sub_824C70C0(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// b 0x824c7698
	goto loc_824C7698;
loc_824C768C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r10,r11,29640
	ctx.r10.s64 = ctx.r11.s64 + 29640;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_824C7698:
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_824C76A0:
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

DEFINE_REX_FUNC(sub_824CAFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r31,0
	r31.s64 = 0;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824cb0c4
	if (!ctx.cr6.gt) goto loc_824CB0C4;
	// subf r5,r7,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_824CB004:
	// lwzx r11,r5,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r9,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r9.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq 0x824cb088
	if (ctx.cr0.eq) goto loc_824CB088;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824CB048:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x824cb048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CB048;
loc_824CB088:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r6,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lwz r6,316(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824cb004
	if (ctx.cr6.lt) goto loc_824CB004;
loc_824CB0C4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D1EA8) {
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
	ctx.lr = 0x824D1EB0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r9,40(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi r27,r10,26
	r27.u64 = ctx.r10.u32 & 0x3F;
	// lwz r8,48(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// addi r11,r11,7816
	ctx.r11.s64 = ctx.r11.s64 + 7816;
	// lwz r10,28(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r27,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lbzx r25,r7,r11
	r25.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,23,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x3;
	// rlwinm r24,r10,1,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// bl 0x822d1a98
	ctx.lr = 0x824D1F18;
	sub_822D1A98(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r11,r29,r9
	ctx.r11.u64 = ctx.r9.u64 - r29.u64;
	// subf r10,r29,r8
	ctx.r10.u64 = ctx.r8.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// bne cr6,0x824d1fc8
	if (!ctx.cr6.eq) goto loc_824D1FC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// slw r7,r11,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x824d1f78
	if (!ctx.cr6.gt) goto loc_824D1F78;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bgt cr6,0x824d1f8c
	if (ctx.cr6.gt) goto loc_824D1F8C;
loc_824D1F78:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824d1f8c
	if (ctx.cr0.eq) goto loc_824D1F8C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// b 0x824d1f9c
	goto loc_824D1F9C;
loc_824D1F8C:
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_824D1F9C:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1608
	ctx.lr = 0x824D1FBC;
	sub_822D1608(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r11,15,18,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x3FE0;
	// b 0x824d20e8
	goto loc_824D20E8;
loc_824D1FC8:
	// subf r11,r29,r9
	ctx.r11.u64 = ctx.r9.u64 - r29.u64;
	// subf r10,r29,r8
	ctx.r10.u64 = ctx.r8.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824d1ffc
	if (ctx.cr6.lt) goto loc_824D1FFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824D1FFC:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r9,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824d2054
	if (ctx.cr6.lt) goto loc_824D2054;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824d2054
	if (ctx.cr0.eq) goto loc_824D2054;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_824D2030:
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// bne cr6,0x824d205c
	if (!ctx.cr6.eq) goto loc_824D205C;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// b 0x824d2060
	goto loc_824D2060;
loc_824D2054:
	// li r23,0
	r23.s64 = 0;
	// b 0x824d2030
	goto loc_824D2030;
loc_824D205C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824D2060:
	// subf r8,r28,r7
	ctx.r8.u64 = ctx.r7.u64 - r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r28,r6
	ctx.r7.u64 = ctx.r6.u64 - r28.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// addc r6,r5,r6
	ctx.xer.ca = ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32;
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// xoris r5,r10,32768
	ctx.r5.u64 = ctx.r10.u64 ^ 2147483648;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - r28.u64;
	// addc r5,r4,r5
	ctx.xer.ca = ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32;
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// xoris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r10,r10,r4
	ctx.xer.ca = ctx.r10.u32 + ctx.r4.u32 < ctx.r10.u32;
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// slw r9,r11,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r11,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1608
	ctx.lr = 0x824D20E4;
	sub_822D1608(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824D20E8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824d20f4
	if (ctx.cr6.eq) goto loc_824D20F4;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
loc_824D20F4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824d2104
	if (ctx.cr6.eq) goto loc_824D2104;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
loc_824D2104:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824d2110
	if (ctx.cr6.eq) goto loc_824D2110;
	// stw r24,0(r20)
	REX_STORE_U32(r20.u32 + 0, r24.u32);
loc_824D2110:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824d211c
	if (ctx.cr6.eq) goto loc_824D211C;
	// stw r23,0(r19)
	REX_STORE_U32(r19.u32 + 0, r23.u32);
loc_824D211C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824DE0A8) {
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
	ctx.lr = 0x824DE0B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,18060
	r31.s64 = ctx.r11.s64 + 18060;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_824DE0D0:
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
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bne cr6,0x824de0f4
	if (!ctx.cr6.eq) goto loc_824DE0F4;
	// stwcx. r28,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824de0d0
	if (!ctx.cr0.eq) goto loc_824DE0D0;
	// b 0x824de0fc
	goto loc_824DE0FC;
loc_824DE0F4:
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
loc_824DE0FC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x824de140
	goto loc_824DE140;
loc_824DE104:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ecca8
	ctx.lr = 0x824DE10C;
	sub_823ECCA8(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
loc_824DE110:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x824de134
	if (!ctx.cr6.eq) goto loc_824DE134;
	// stwcx. r28,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824de110
	if (!ctx.cr0.eq) goto loc_824DE110;
	// b 0x824de13c
	goto loc_824DE13C;
loc_824DE134:
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_824DE13C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_824DE140:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824de104
	if (ctx.cr6.eq) goto loc_824DE104;
	// lis r29,-32120
	r29.s64 = -2105016320;
	// lwz r11,18096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 18096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824de160
	if (!ctx.cr6.eq) goto loc_824DE160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793894
	ctx.lr = 0x824DE160;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_824DE160:
	// lwz r11,18096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 18096);
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,18096(r29)
	REX_STORE_U32(r29.u32 + 18096, ctx.r11.u32);
loc_824DE170:
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
	// stwcx. r30,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824de170
	if (!ctx.cr0.eq) goto loc_824DE170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938a4
	ctx.lr = 0x824DE190;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824edab0
	ctx.lr = 0x824DE19C;
	sub_824EDAB0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938b4
	ctx.lr = 0x824DE1A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
loc_824DE1AC:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x824de1d0
	if (!ctx.cr6.eq) goto loc_824DE1D0;
	// stwcx. r28,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824de1ac
	if (!ctx.cr0.eq) goto loc_824DE1AC;
	// b 0x824de214
	goto loc_824DE214;
loc_824DE1D0:
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// b 0x824de214
	goto loc_824DE214;
loc_824DE1DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ecca8
	ctx.lr = 0x824DE1E4;
	sub_823ECCA8(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
loc_824DE1E8:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x824de20c
	if (!ctx.cr6.eq) goto loc_824DE20C;
	// stwcx. r28,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824de1e8
	if (!ctx.cr0.eq) goto loc_824DE1E8;
	// b 0x824de214
	goto loc_824DE214;
loc_824DE20C:
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_824DE214:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824de1dc
	if (ctx.cr6.eq) goto loc_824DE1DC;
	// lwz r11,18096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 18096);
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,18096(r29)
	REX_STORE_U32(r29.u32 + 18096, ctx.r11.u32);
	// lwz r11,18096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 18096);
loc_824DE234:
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
	// stwcx. r30,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824de234
	if (!ctx.cr0.eq) goto loc_824DE234;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824EF3E0) {
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
	ctx.lr = 0x824EF3E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r9,-26424
	r27.s64 = ctx.r9.s64 + -26424;
	// addi r26,r10,-26736
	r26.s64 = ctx.r10.s64 + -26736;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef41c
	if (!ctx.cr6.eq) goto loc_824EF41C;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ef428
	goto loc_824EF428;
loc_824EF41C:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ef4a0
	if (!ctx.cr6.eq) goto loc_824EF4A0;
loc_824EF428:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,2964
	ctx.r7.s64 = 2964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF440;
	sub_824EA978(ctx, base);
	// b 0x824ef4a0
	goto loc_824EF4A0;
loc_824EF444:
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ef45c
	if (ctx.cr6.eq) goto loc_824EF45C;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ef474
	if (!ctx.cr6.eq) goto loc_824EF474;
loc_824EF45C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,2973
	ctx.r7.s64 = 2973;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF474;
	sub_824EA978(ctx, base);
loc_824EF474:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ee070
	ctx.lr = 0x824EF47C;
	sub_824EE070(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bctrl 
	ctx.lr = 0x824EF494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EF4A0;
	sub_825A28C0(ctx, base);
loc_824EF4A0:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824ef444
	if (!ctx.cr6.eq) goto loc_824EF444;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x824ef4bc
	if (ctx.cr0.eq) goto loc_824EF4BC;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EF4BC;
	sub_825A28C0(ctx, base);
loc_824EF4BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef4e4
	if (!ctx.cr6.eq) goto loc_824EF4E4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825a2758
	ctx.lr = 0x824EF4D0;
	sub_825A2758(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824EF4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824EF4E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F6FC8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r8,r9,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824F6FE0:
	// rlwinm r7,r9,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824f6fe0
	if (ctx.cr6.lt) goto loc_824F6FE0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F77B8) {
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
	ctx.lr = 0x824F77C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824f784c
	if (ctx.cr6.eq) goto loc_824F784C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r30,r11,25,25,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(r30.u32, 96, ctx.xer);
	// blt cr6,0x824f77fc
	if (ctx.cr6.lt) goto loc_824F77FC;
	// cmplwi cr6,r30,102
	ctx.cr6.compare<uint32_t>(r30.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824f7800
	if (!ctx.cr6.gt) goto loc_824F7800;
loc_824F77FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F7800:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f784c
	if (ctx.cr0.eq) goto loc_824F784C;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(r30.u32, 96, ctx.xer);
	// bne cr6,0x824f7838
	if (!ctx.cr6.eq) goto loc_824F7838;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x824F7828;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// lhzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f7848
	if (!ctx.cr0.eq) goto loc_824F7848;
loc_824F7838:
	// cmplwi cr6,r30,97
	ctx.cr6.compare<uint32_t>(r30.u32, 97, ctx.xer);
	// beq cr6,0x824f7848
	if (ctx.cr6.eq) goto loc_824F7848;
	// cmplwi cr6,r30,99
	ctx.cr6.compare<uint32_t>(r30.u32, 99, ctx.xer);
	// bne cr6,0x824f784c
	if (!ctx.cr6.eq) goto loc_824F784C;
loc_824F7848:
	// li r28,1
	r28.s64 = 1;
loc_824F784C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// rlwimi r11,r10,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r9,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82501B70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82501B78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x82501ba4
	if (ctx.cr6.lt) goto loc_82501BA4;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82501ba8
	if (!ctx.cr6.gt) goto loc_82501BA8;
loc_82501BA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82501BA8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82501bbc
	if (!ctx.cr0.eq) goto loc_82501BBC;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82501bc0
	if (!ctx.cr6.eq) goto loc_82501BC0;
loc_82501BBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82501BC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501c78
	if (!ctx.cr0.eq) goto loc_82501C78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82501a80
	ctx.lr = 0x82501BD0;
	sub_82501A80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82501bf4
	if (ctx.cr0.eq) goto loc_82501BF4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82501bf4
	if (ctx.cr6.eq) goto loc_82501BF4;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82501bf4
	if (ctx.cr6.eq) goto loc_82501BF4;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82501c78
	if (!ctx.cr6.eq) goto loc_82501C78;
loc_82501BF4:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82501c7c
	if (!ctx.cr6.eq) goto loc_82501C7C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82501C00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82501c7c
	if (ctx.cr6.eq) goto loc_82501C7C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501c20
	if (ctx.cr0.eq) goto loc_82501C20;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82501c24
	if (ctx.cr0.eq) goto loc_82501C24;
loc_82501C20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501C24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501c70
	if (ctx.cr0.eq) goto loc_82501C70;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x82501c4c
	if (ctx.cr6.lt) goto loc_82501C4C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82501c50
	if (!ctx.cr6.gt) goto loc_82501C50;
loc_82501C4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501C50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501c70
	if (ctx.cr0.eq) goto loc_82501C70;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501c78
	if (!ctx.cr0.eq) goto loc_82501C78;
loc_82501C70:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82501c00
	goto loc_82501C00;
loc_82501C78:
	// li r29,1
	r29.s64 = 1;
loc_82501C7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8250AC20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250AC28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8250AC3C;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwimi r11,r31,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8250AC54;
	sub_8250A620(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8250CDE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250CDF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250CE18;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffc30
	ctx.lr = 0x8250CE30;
	sub_824FFC30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825117D8) {
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
	ctx.lr = 0x825117E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x824f7678
	ctx.lr = 0x825117F4;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = r25.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r23,1
	r23.s64 = 1;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825118cc
	if (!ctx.cr0.eq) goto loc_825118CC;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825118cc
	if (ctx.cr0.eq) goto loc_825118CC;
loc_8251183C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14464
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14464, ctx.xer);
	// bne cr6,0x825118b0
	if (!ctx.cr6.eq) goto loc_825118B0;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82511858:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825118b0
	if (ctx.cr6.eq) goto loc_825118B0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825118a8
	if (ctx.cr6.eq) goto loc_825118A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511884
	if (!ctx.cr0.eq) goto loc_82511884;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82511888
	if (ctx.cr0.eq) goto loc_82511888;
loc_82511884:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82511888:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825118a8
	if (ctx.cr0.eq) goto loc_825118A8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825118a8
	if (!ctx.cr0.eq) goto loc_825118A8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82510ab0
	ctx.lr = 0x825118A8;
	sub_82510AB0(ctx, base);
loc_825118A8:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82511858
	goto loc_82511858;
loc_825118B0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825118cc
	if (!ctx.cr0.eq) goto loc_825118CC;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251183c
	if (!ctx.cr6.eq) goto loc_8251183C;
loc_825118CC:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825119a4
	if (ctx.cr0.eq) goto loc_825119A4;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825119a4
	if (!ctx.cr0.eq) goto loc_825119A4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825119a4
	if (ctx.cr0.eq) goto loc_825119A4;
loc_825118F0:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511988
	if (!ctx.cr0.eq) goto loc_82511988;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82511988
	if (ctx.cr0.eq) goto loc_82511988;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82511948
	if (ctx.cr6.eq) goto loc_82511948;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82511948
	if (ctx.cr6.eq) goto loc_82511948;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82511948
	if (ctx.cr6.eq) goto loc_82511948;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82511948
	if (ctx.cr6.eq) goto loc_82511948;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82511948
	if (ctx.cr6.eq) goto loc_82511948;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8251194c
	if (!ctx.cr6.eq) goto loc_8251194C;
loc_82511948:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8251194C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511988
	if (ctx.cr0.eq) goto loc_82511988;
	// rlwinm. r11,r10,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511988
	if (!ctx.cr0.eq) goto loc_82511988;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x82511968;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82511978
	if (ctx.cr6.eq) goto loc_82511978;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82511988
	if (!ctx.cr6.eq) goto loc_82511988;
loc_82511978:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82510ab0
	ctx.lr = 0x82511988;
	sub_82510AB0(ctx, base);
loc_82511988:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825119a4
	if (!ctx.cr0.eq) goto loc_825119A4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825118f0
	if (!ctx.cr6.eq) goto loc_825118F0;
loc_825119A4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511b5c
	if (!ctx.cr0.eq) goto loc_82511B5C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82511b5c
	if (ctx.cr0.eq) goto loc_82511B5C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
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
	// lwzx r29,r10,r4
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82511a18
	if (!ctx.cr0.eq) goto loc_82511A18;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	ctx.lr = 0x82511A18;
	sub_824E4308(ctx, base);
loc_82511A18:
	// lwz r30,28(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825119a4
	if (!ctx.cr0.eq) goto loc_825119A4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82511a68
	if (ctx.cr6.eq) goto loc_82511A68;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82511a68
	if (ctx.cr6.eq) goto loc_82511A68;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82511a68
	if (ctx.cr6.eq) goto loc_82511A68;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82511a68
	if (ctx.cr6.eq) goto loc_82511A68;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82511a68
	if (ctx.cr6.eq) goto loc_82511A68;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82511a6c
	if (!ctx.cr6.eq) goto loc_82511A6C;
loc_82511A68:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82511A6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511b00
	if (ctx.cr0.eq) goto loc_82511B00;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511b00
	if (ctx.cr0.eq) goto loc_82511B00;
	// lwz r31,4(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511b00
	if (!ctx.cr0.eq) goto loc_82511B00;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82511b00
	if (ctx.cr0.eq) goto loc_82511B00;
loc_82511A94:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r23,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511ae8
	if (ctx.cr0.eq) goto loc_82511AE8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82510ba0
	ctx.lr = 0x82511AE8;
	sub_82510BA0(ctx, base);
loc_82511AE8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511b00
	if (!ctx.cr0.eq) goto loc_82511B00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82511a94
	if (!ctx.cr6.eq) goto loc_82511A94;
loc_82511B00:
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_82511B04:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825119a4
	if (ctx.cr6.eq) goto loc_825119A4;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82511b54
	if (ctx.cr6.eq) goto loc_82511B54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511b30
	if (!ctx.cr0.eq) goto loc_82511B30;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82511b34
	if (ctx.cr0.eq) goto loc_82511B34;
loc_82511B30:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82511B34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511b54
	if (ctx.cr0.eq) goto loc_82511B54;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511b54
	if (!ctx.cr0.eq) goto loc_82511B54;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82510ab0
	ctx.lr = 0x82511B54;
	sub_82510AB0(ctx, base);
loc_82511B54:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82511b04
	goto loc_82511B04;
loc_82511B5C:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511ecc
	if (ctx.cr0.eq) goto loc_82511ECC;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511eb8
	if (!ctx.cr0.eq) goto loc_82511EB8;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82511eb8
	if (ctx.cr0.eq) goto loc_82511EB8;
loc_82511B80:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511e9c
	if (!ctx.cr0.eq) goto loc_82511E9C;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82511e9c
	if (ctx.cr0.eq) goto loc_82511E9C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x82511c98
	if (!ctx.cr6.eq) goto loc_82511C98;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82551c00
	ctx.lr = 0x82511BB8;
	sub_82551C00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511c98
	if (ctx.cr0.eq) goto loc_82511C98;
	// lwz r30,64(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 64);
	// b 0x82511c90
	goto loc_82511C90;
loc_82511BC8:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511bdc
	if (ctx.cr0.eq) goto loc_82511BDC;
	// li r31,0
	r31.s64 = 0;
	// b 0x82511be8
	goto loc_82511BE8;
loc_82511BDC:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_82511BE8:
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r29,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511c5c
	if (!ctx.cr0.eq) goto loc_82511C5C;
	// rlwinm r11,r29,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82511c2c
	if (ctx.cr6.eq) goto loc_82511C2C;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82511c2c
	if (ctx.cr6.eq) goto loc_82511C2C;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82511c2c
	if (ctx.cr6.eq) goto loc_82511C2C;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82511c2c
	if (ctx.cr6.eq) goto loc_82511C2C;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82511c2c
	if (ctx.cr6.eq) goto loc_82511C2C;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82511c30
	if (!ctx.cr6.eq) goto loc_82511C30;
loc_82511C2C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82511C30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511c54
	if (ctx.cr0.eq) goto loc_82511C54;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x82511C44;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82511c98
	if (ctx.cr6.eq) goto loc_82511C98;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82511c98
	if (ctx.cr6.eq) goto loc_82511C98;
loc_82511C54:
	// oris r11,r29,2048
	ctx.r11.u64 = r29.u64 | 134217728;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82511C5C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511c70
	if (!ctx.cr0.eq) goto loc_82511C70;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_82511C70:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r11.u32);
	// bl 0x82510d78
	ctx.lr = 0x82511C8C;
	sub_82510D78(ctx, base);
	// lwz r30,64(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 64);
loc_82511C90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82511bc8
	if (!ctx.cr6.eq) goto loc_82511BC8;
loc_82511C98:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82511cb4
	if (ctx.cr6.eq) goto loc_82511CB4;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bne cr6,0x82511cb8
	if (!ctx.cr6.eq) goto loc_82511CB8;
loc_82511CB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82511CB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511e9c
	if (ctx.cr0.eq) goto loc_82511E9C;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511e9c
	if (!ctx.cr0.eq) goto loc_82511E9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82511CE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82511d44
	if (ctx.cr6.eq) goto loc_82511D44;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511d38
	if (!ctx.cr0.eq) goto loc_82511D38;
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511d40
	if (!ctx.cr0.eq) goto loc_82511D40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82511d34
	if (!ctx.cr6.eq) goto loc_82511D34;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82511d38
	goto loc_82511D38;
loc_82511D34:
	// bl 0x825c6a10
	ctx.lr = 0x82511D38;
	sub_825C6A10(ctx, base);
loc_82511D38:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x82511ce0
	goto loc_82511CE0;
loc_82511D40:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82511D44:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511e9c
	if (!ctx.cr0.eq) goto loc_82511E9C;
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82511D54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82511d90
	if (ctx.cr6.eq) goto loc_82511D90;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82511d84
	if (!ctx.cr0.eq) goto loc_82511D84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82511d84
	if (ctx.cr6.eq) goto loc_82511D84;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82511d8c
	if (!ctx.cr6.eq) goto loc_82511D8C;
loc_82511D84:
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82511d54
	goto loc_82511D54;
loc_82511D8C:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82511D90:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511e9c
	if (ctx.cr0.eq) goto loc_82511E9C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82511D9C:
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511e00
	if (!ctx.cr0.eq) goto loc_82511E00;
	// lwz r11,32(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511e00
	if (ctx.cr0.eq) goto loc_82511E00;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82511df4
	if (ctx.cr6.eq) goto loc_82511DF4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82511df4
	if (ctx.cr6.eq) goto loc_82511DF4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82511df4
	if (ctx.cr6.eq) goto loc_82511DF4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82511df4
	if (ctx.cr6.eq) goto loc_82511DF4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82511df4
	if (ctx.cr6.eq) goto loc_82511DF4;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82511df8
	if (!ctx.cr6.eq) goto loc_82511DF8;
loc_82511DF4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82511DF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511e18
	if (!ctx.cr0.eq) goto loc_82511E18;
loc_82511E00:
	// lwz r8,52(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82511d9c
	if (!ctx.cr6.eq) goto loc_82511D9C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x82511E18;
	sub_824E4368(ctx, base);
loc_82511E18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82511e9c
	if (ctx.cr6.eq) goto loc_82511E9C;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82511e80
	if (ctx.cr6.eq) goto loc_82511E80;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511e80
	if (!ctx.cr0.eq) goto loc_82511E80;
	// b 0x82511e74
	goto loc_82511E74;
loc_82511E40:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82511e54
	if (ctx.cr0.eq) goto loc_82511E54;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82511e60
	goto loc_82511E60;
loc_82511E54:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
loc_82511E60:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511e88
	if (!ctx.cr0.eq) goto loc_82511E88;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82511e80
	if (ctx.cr6.eq) goto loc_82511E80;
loc_82511E74:
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82511e40
	if (!ctx.cr6.eq) goto loc_82511E40;
loc_82511E80:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82511e18
	goto loc_82511E18;
loc_82511E88:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82510e48
	ctx.lr = 0x82511E9C;
	sub_82510E48(ctx, base);
loc_82511E9C:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511eb8
	if (!ctx.cr0.eq) goto loc_82511EB8;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82511b80
	if (!ctx.cr6.eq) goto loc_82511B80;
loc_82511EB8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511ecc
	if (!ctx.cr0.eq) goto loc_82511ECC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825119a4
	if (!ctx.cr0.eq) goto loc_825119A4;
loc_82511ECC:
	// lwz r10,976(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 976);
	// addi r11,r24,972
	ctx.r11.s64 = r24.s64 + 972;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r26,976(r24)
	REX_STORE_U32(r24.u32 + 976, r26.u32);
loc_82511EDC:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r25,0
	r25.s64 = 0;
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
	// b 0x825121a0
	goto loc_825121A0;
loc_82511EFC:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511f2c
	if (ctx.cr0.eq) goto loc_82511F2C;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511f20
	if (ctx.cr0.eq) goto loc_82511F20;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r11,r26,16
	ctx.r11.s64 = r26.s64 + 16;
	// b 0x82511f34
	goto loc_82511F34;
loc_82511F20:
	// lwz r10,28(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 28);
	// addi r11,r26,24
	ctx.r11.s64 = r26.s64 + 24;
	// b 0x82511f34
	goto loc_82511F34;
loc_82511F2C:
	// lwz r10,36(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 36);
	// addi r11,r26,32
	ctx.r11.s64 = r26.s64 + 32;
loc_82511F34:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82511f44
	if (ctx.cr0.eq) goto loc_82511F44;
	// li r28,0
	r28.s64 = 0;
	// b 0x82511f50
	goto loc_82511F50;
loc_82511F44:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r10,-40
	r28.s64 = ctx.r10.s64 + -40;
loc_82511F50:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x82512194
	goto loc_82512194;
loc_82511F58:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12416
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12416, ctx.xer);
	// bne cr6,0x82511ffc
	if (!ctx.cr6.eq) goto loc_82511FFC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82511F80;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-24
	ctx.r11.s64 = r28.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82511ffc
	if (ctx.cr0.eq) goto loc_82511FFC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511ffc
	if (!ctx.cr0.eq) goto loc_82511FFC;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_82511FA4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82511ffc
	if (ctx.cr6.eq) goto loc_82511FFC;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511ff4
	if (ctx.cr0.eq) goto loc_82511FF4;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r10,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82511ff4
	if (!ctx.cr0.eq) goto loc_82511FF4;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
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
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82511ff4
	if (ctx.cr6.eq) goto loc_82511FF4;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82511FF4:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82511fa4
	goto loc_82511FA4;
loc_82511FFC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512128
	if (ctx.cr0.eq) goto loc_82512128;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8251200C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82512058
	if (ctx.cr6.eq) goto loc_82512058;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r10,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82512050
	if (!ctx.cr0.eq) goto loc_82512050;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
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
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82512050
	if (ctx.cr6.eq) goto loc_82512050;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82512050:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8251200c
	goto loc_8251200C;
loc_82512058:
	// lwz r29,52(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 52);
	// b 0x82512120
	goto loc_82512120;
loc_82512060:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251211c
	if (!ctx.cr0.eq) goto loc_8251211C;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8251211c
	if (ctx.cr0.eq) goto loc_8251211C;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r31,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251211c
	if (!ctx.cr0.eq) goto loc_8251211C;
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x825120c0
	if (ctx.cr6.eq) goto loc_825120C0;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x825120c0
	if (ctx.cr6.eq) goto loc_825120C0;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x825120c0
	if (ctx.cr6.eq) goto loc_825120C0;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x825120c0
	if (ctx.cr6.eq) goto loc_825120C0;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x825120c0
	if (ctx.cr6.eq) goto loc_825120C0;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825120c4
	if (!ctx.cr6.eq) goto loc_825120C4;
loc_825120C0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_825120C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251211c
	if (ctx.cr0.eq) goto loc_8251211C;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825120DC;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// lwz r10,40(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251211c
	if (!ctx.cr0.eq) goto loc_8251211C;
	// oris r11,r31,4096
	ctx.r11.u64 = r31.u64 | 268435456;
	// mr r25,r23
	r25.u64 = r23.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8251211C:
	// lwz r29,52(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 52);
loc_82512120:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82512060
	if (!ctx.cr6.eq) goto loc_82512060;
loc_82512128:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82512144
	if (!ctx.cr0.eq) goto loc_82512144;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82511f58
	if (!ctx.cr0.eq) goto loc_82511F58;
loc_82512144:
	// addi r10,r26,16
	ctx.r10.s64 = r26.s64 + 16;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8251219c
	if (ctx.cr6.eq) goto loc_8251219C;
	// addi r11,r26,24
	ctx.r11.s64 = r26.s64 + 24;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82512178
	if (ctx.cr6.eq) goto loc_82512178;
	// lwz r9,28(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82512178
	if (!ctx.cr0.eq) goto loc_82512178;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82512184
	goto loc_82512184;
loc_82512178:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82512184:
	// bne 0x8251219c
	if (!ctx.cr0.eq) goto loc_8251219C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r11,-40
	r28.s64 = ctx.r11.s64 + -40;
loc_82512194:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82511f58
	if (!ctx.cr6.eq) goto loc_82511F58;
loc_8251219C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
loc_825121A0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825121b8
	if (!ctx.cr0.eq) goto loc_825121B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// bne cr6,0x82511efc
	if (!ctx.cr6.eq) goto loc_82511EFC;
loc_825121B8:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825121cc
	if (ctx.cr0.eq) goto loc_825121CC;
	// lwz r10,40(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 40);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r10.u32);
loc_825121CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82511edc
	if (!ctx.cr6.eq) goto loc_82511EDC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82585CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82585CD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82585CF4;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82585D04;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82585D10;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwimi r10,r9,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
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
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825898C0) {
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
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7678
	ctx.lr = 0x825898F4;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589940
	if (!ctx.cr0.eq) goto loc_82589940;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589940
	if (ctx.cr0.eq) goto loc_82589940;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8258994c
	if (!ctx.cr6.gt) goto loc_8258994C;
loc_82589940:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82589948;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258994C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
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

DEFINE_REX_FUNC(sub_8259D968) {
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
	ctx.lr = 0x8259D970;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r27,r10,r6
	r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x8259da50
	goto loc_8259DA50;
loc_8259D994:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8259da34
	if (!ctx.cr6.lt) goto loc_8259DA34;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r28,-2
	ctx.r7.s64 = r28.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8259D9D0:
	// lhz r26,6(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r25,6(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r4,r26,24
	ctx.r4.u64 = r26.u32 & 0xFF;
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r31,r25,24
	r31.u64 = r25.u32 & 0xFF;
	// clrlwi r29,r9,24
	r29.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r9,r9,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// clrlwi r30,r8,24
	r30.u64 = ctx.r8.u32 & 0xFF;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r25,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFF00;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r26,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFF00;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// rlwinm r9,r9,30,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF00;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8259d9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259D9D0;
loc_8259DA34:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8259DA50:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x8259d994
	if (ctx.cr6.lt) goto loc_8259D994;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825A3610) {
	REX_FUNC_PROLOGUE();
	// lwz r3,1188(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A37C8) {
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
	ctx.lr = 0x825A37D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r10,22852
	r27.s64 = ctx.r10.s64 + 22852;
	// addi r26,r9,-11144
	r26.s64 = ctx.r9.s64 + -11144;
	// bne cr6,0x825a3810
	if (!ctx.cr6.eq) goto loc_825A3810;
	// lwz r29,1188(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825a3840
	goto loc_825A3840;
loc_825A3810:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825a3834
	if (ctx.cr6.eq) goto loc_825A3834;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-11004
	ctx.r5.s64 = ctx.r11.s64 + -11004;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3834;
	sub_824EA978(ctx, base);
loc_825A3834:
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// li r29,32
	r29.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_825A3840:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x825a38dc
	if (!ctx.cr6.lt) goto loc_825A38DC;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r11,32
	r31.s64 = ctx.r11.s64 + 32;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-10832
	r28.s64 = ctx.r11.s64 + -10832;
loc_825A3860:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825a3884
	if (ctx.cr6.eq) goto loc_825A3884;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3884;
	sub_824EA978(ctx, base);
loc_825A3884:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825a38cc
	if (!ctx.cr6.eq) goto loc_825A38CC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825a38cc
	if (ctx.cr6.eq) goto loc_825A38CC;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
loc_825A38A4:
	// lwz r8,-12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// bne cr6,0x825a38bc
	if (!ctx.cr6.eq) goto loc_825A38BC;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, ctx.xer);
	// beq cr6,0x825a38e8
	if (ctx.cr6.eq) goto loc_825A38E8;
loc_825A38BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825a38a4
	if (ctx.cr6.lt) goto loc_825A38A4;
loc_825A38CC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x825a3860
	if (ctx.cr6.lt) goto loc_825A3860;
loc_825A38DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A38E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_825A38E8:
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// b 0x825a38e0
	goto loc_825A38E0;
}

DEFINE_REX_FUNC(sub_825AA640) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825AA660;
	sub_825A60D8(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// sth r10,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r10.u16);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r7,r8,0,10,8
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r7.u64 & 0x400000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r8,r8,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825aa6e8
	if (ctx.cr0.eq) goto loc_825AA6E8;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AA6E8:
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825aa700
	if (ctx.cr0.eq) goto loc_825AA700;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AA700:
	// li r8,73
	ctx.r8.s64 = 73;
	// li r7,17
	ctx.r7.s64 = 17;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r9,6,19,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1FFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r7,r8,0,10,8
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r7.u64 & 0x400000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r8,r8,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825aa7a4
	if (ctx.cr0.eq) goto loc_825AA7A4;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AA7A4:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825aa7bc
	if (ctx.cr0.eq) goto loc_825AA7BC;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AA7BC:
	// li r8,45
	ctx.r8.s64 = 45;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,10,8
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r7.u64 & 0x400000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r8,r8,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825aa828
	if (ctx.cr0.eq) goto loc_825AA828;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AA828:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825aa840
	if (ctx.cr0.eq) goto loc_825AA840;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AA840:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825B80F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b8170
	if (ctx.cr0.eq) goto loc_825B8170;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B8114:
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r11,28,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x825b8154
	if (!ctx.cr6.eq) goto loc_825B8154;
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r9,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rlwimi r6,r9,2,16,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0003);
	// rlwimi r6,r3,0,30,14
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFE0003) | (ctx.r6.u64 & 0x1FFFC);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_825B8154:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b8114
	if (ctx.cr6.lt) goto loc_825B8114;
	// blr 
	return;
loc_825B8170:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825B8188:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rlwimi r6,r9,0,16,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0003);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwimi r6,r7,0,30,14
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFE0003) | (ctx.r6.u64 & 0x1FFFC);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bdnz 0x825b8188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B8188;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BCFC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BCFC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,49
	ctx.r6.s64 = 49;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BCFEC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bd010
	if (ctx.cr6.eq) goto loc_825BD010;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825BD00C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825BD010:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD018;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825C1600) {
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
	ctx.lr = 0x825C1608;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// beq cr6,0x825c1684
	if (ctx.cr6.eq) goto loc_825C1684;
	// lwz r7,536(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 536);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825c1684
	if (ctx.cr6.eq) goto loc_825C1684;
	// addi r10,r31,348
	ctx.r10.s64 = r31.s64 + 348;
loc_825C1640:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r5,r9,27
	ctx.r5.u64 = ctx.r9.u32 & 0x1F;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x825c165c
	if (!ctx.cr6.eq) goto loc_825C165C;
	// rlwinm r9,r9,27,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825c1670
	if (ctx.cr6.eq) goto loc_825C1670;
loc_825C165C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825c1640
	if (ctx.cr6.lt) goto loc_825C1640;
	// b 0x825c1684
	goto loc_825C1684;
loc_825C1670:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825c1830
	if (!ctx.cr6.eq) goto loc_825C1830;
loc_825C1684:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c1830
	if (ctx.cr0.eq) goto loc_825C1830;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r28,-1
	r28.s64 = -65536;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stb r6,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// beq cr6,0x825c16c4
	if (ctx.cr6.eq) goto loc_825C16C4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r7,21
	ctx.r7.s64 = 21;
	// addi r6,r11,-29080
	ctx.r6.s64 = ctx.r11.s64 + -29080;
	// b 0x825c16d0
	goto loc_825C16D0;
loc_825C16C4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r11,-28824
	ctx.r6.s64 = ctx.r11.s64 + -28824;
loc_825C16D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c1718
	if (ctx.cr6.eq) goto loc_825C1718;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b91b8
	ctx.lr = 0x825C1704;
	sub_825B91B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c1808
	if (!ctx.cr0.eq) goto loc_825C1808;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C1718;
	sub_824E4368(ctx, base);
loc_825C1718:
	// mulli r11,r7,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825c1748
	if (!ctx.cr6.lt) goto loc_825C1748;
loc_825C172C:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,9,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1F;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825c1748
	if (ctx.cr6.eq) goto loc_825C1748;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825c172c
	if (ctx.cr6.lt) goto loc_825C172C;
loc_825C1748:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825c175c
	if (ctx.cr6.lt) goto loc_825C175C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C175C;
	sub_824E4368(ctx, base);
loc_825C175C:
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825c17dc
	if (ctx.cr6.eq) goto loc_825C17DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,-21732
	ctx.r5.s64 = ctx.r11.s64 + -21732;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1a58
	ctx.lr = 0x825C1780;
	sub_826A1A58(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825C1788:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825c1788
	if (!ctx.cr6.eq) goto loc_825C1788;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x8251f360
	ctx.lr = 0x825C17B8;
	sub_8251F360(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_825C17C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x825c17c8
	if (!ctx.cr0.eq) goto loc_825C17C8;
loc_825C17DC:
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b7d50
	ctx.lr = 0x825C17F4;
	sub_825B7D50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c1808
	if (!ctx.cr0.eq) goto loc_825C1808;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C1808;
	sub_824E4368(ctx, base);
loc_825C1808:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// beq cr6,0x825c1838
	if (ctx.cr6.eq) goto loc_825C1838;
	// bl 0x825bbe98
	ctx.lr = 0x825C1830;
	sub_825BBE98(ctx, base);
loc_825C1830:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d04
	return;
loc_825C1838:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825c0eb0
	ctx.lr = 0x825C1848;
	sub_825C0EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825c1830
	if (!ctx.cr0.eq) goto loc_825C1830;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C185C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825CE490) {
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
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825ce578
	if (!ctx.cr6.lt) goto loc_825CE578;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20264);
	ctx.f0.f64 = double(temp.f32);
loc_825CE4EC:
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r10,r10,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r10,r10,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825ce4ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CE4EC;
loc_825CE578:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ce594
	if (ctx.cr6.eq) goto loc_825CE594;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CE594;
	sub_825C73B8(ctx, base);
loc_825CE594:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ce5b0
	if (ctx.cr6.eq) goto loc_825CE5B0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CE5B0;
	sub_825C7788(ctx, base);
loc_825CE5B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D2DB8) {
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
	ctx.lr = 0x825D2DC0;
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d2e00
	if (!ctx.cr6.eq) goto loc_825D2E00;
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
	// li r7,1726
	ctx.r7.s64 = 1726;
	// bl 0x824ea978
	ctx.lr = 0x825D2E00;
	sub_824EA978(ctx, base);
loc_825D2E00:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D2E10;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x825d2e78
	if (!ctx.cr6.eq) goto loc_825D2E78;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2e34
	if (ctx.cr6.eq) goto loc_825D2E34;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2E34;
	sub_824F0950(ctx, base);
loc_825D2E34:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2e70
	if (ctx.cr6.eq) goto loc_825D2E70;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d2e70
	if (ctx.cr6.eq) goto loc_825D2E70;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bctrl 
	ctx.lr = 0x825D2E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2E70:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2ed4
	goto loc_825D2ED4;
loc_825D2E78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2e94
	if (ctx.cr6.eq) goto loc_825D2E94;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2E94;
	sub_824F0950(ctx, base);
loc_825D2E94:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2ed0
	if (ctx.cr6.eq) goto loc_825D2ED0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d2ed0
	if (ctx.cr6.eq) goto loc_825D2ED0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bctrl 
	ctx.lr = 0x825D2ED0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2ED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2ED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D5DF8) {
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
	ctx.lr = 0x825D5E00;
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
	// bne cr6,0x825d5e40
	if (!ctx.cr6.eq) goto loc_825D5E40;
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
	// li r7,4327
	ctx.r7.s64 = 4327;
	// bl 0x824ea978
	ctx.lr = 0x825D5E40;
	sub_824EA978(ctx, base);
loc_825D5E40:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6778
	ctx.lr = 0x825D5E50;
	sub_825A6778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d5e98
	if (ctx.cr6.eq) goto loc_825D5E98;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d5e98
	if (ctx.cr6.eq) goto loc_825D5E98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D5E6C;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,66
	ctx.r6.s64 = 66;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,264(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// bctrl 
	ctx.lr = 0x825D5E98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5E98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DB908) {
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
	ctx.lr = 0x825DB910;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825d8158
	ctx.lr = 0x825DB91C;
	sub_825D8158(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DB93C;
	sub_825E7538(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DB95C;
	sub_825E7538(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fd0a0
	ctx.lr = 0x825DB964;
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
	// beq cr6,0x825db998
	if (ctx.cr6.eq) goto loc_825DB998;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,10276
	ctx.r5.s64 = ctx.r11.s64 + 10276;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1083
	ctx.r7.s64 = 1083;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DB998;
	sub_824EA978(ctx, base);
loc_825DB998:
	// lwz r22,168(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,60(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825DB9B4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x825db9c4
	if (!ctx.cr6.gt) goto loc_825DB9C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825db9d0
	goto loc_825DB9D0;
loc_825DB9C4:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_825DB9D0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825db9e8
	if (ctx.cr0.eq) goto loc_825DB9E8;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x825db9b4
	goto loc_825DB9B4;
loc_825DB9E8:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DB9F4;
	sub_825F9AD0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DBA04;
	sub_825F9F38(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// stw r11,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r11.u32);
loc_825DBA10:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBA30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825dba10
	if (ctx.cr6.lt) goto loc_825DBA10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DBA48;
	sub_825D82D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DBA5C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825dba88
	if (ctx.cr0.eq) goto loc_825DBA88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fdb60
	ctx.lr = 0x825DBA80;
	sub_825FDB60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825dba8c
	goto loc_825DBA8C;
loc_825DBA88:
	// li r29,0
	r29.s64 = 0;
loc_825DBA8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DBA94;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dbab8
	if (!ctx.cr0.eq) goto loc_825DBAB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,10620
	ctx.r5.s64 = ctx.r11.s64 + 10620;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DBAB8;
	sub_824EA978(ctx, base);
loc_825DBAB8:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r27,144(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DBAC8;
	sub_825F9AD0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DBAD8;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBB18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBB38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBB58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DBB68;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBBA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825b3268
	ctx.lr = 0x825DBBB0;
	sub_825B3268(ctx, base);
	// stw r3,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DBBC0;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DBBCC;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DBBD4;
	sub_825F9B60(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,10600
	r26.s64 = ctx.r11.s64 + 10600;
	// bne 0x825dbbfc
	if (!ctx.cr0.eq) goto loc_825DBBFC;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1121
	ctx.r7.s64 = 1121;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DBBFC;
	sub_824EA978(ctx, base);
loc_825DBBFC:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DBC08;
	sub_825F9AD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DBC28;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DBC34;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DBC40;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DBC48;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dbc68
	if (!ctx.cr0.eq) goto loc_825DBC68;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1129
	ctx.r7.s64 = 1129;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DBC68;
	sub_824EA978(ctx, base);
loc_825DBC68:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r28,32(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825f9ad0
	ctx.lr = 0x825DBC7C;
	sub_825F9AD0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DBC8C;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBCAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBCCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBCEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBD0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DBD1C;
	sub_825F9F38(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DBD2C;
	sub_825F9F38(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_825DBD30:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBD50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DBD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x825dbd30
	if (ctx.cr6.lt) goto loc_825DBD30;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DBD88;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DBD94;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DBD9C;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dbdbc
	if (!ctx.cr0.eq) goto loc_825DBDBC;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DBDBC;
	sub_824EA978(ctx, base);
loc_825DBDBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DBDD0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825dbdf0
	if (ctx.cr0.eq) goto loc_825DBDF0;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fcd38
	ctx.lr = 0x825DBDE8;
	sub_825FCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825dbdf4
	goto loc_825DBDF4;
loc_825DBDF0:
	// li r30,0
	r30.s64 = 0;
loc_825DBDF4:
	// stw r30,148(r29)
	REX_STORE_U32(r29.u32 + 148, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825DBE04;
	sub_825FD4B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r28,152(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 152);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825DBE14;
	sub_825FD4B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825DBE20;
	sub_825FD4B8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825fd9e8
	ctx.lr = 0x825DBE34;
	sub_825FD9E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DBE44;
	sub_825D7940(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DBE54;
	sub_825D7940(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DBE64;
	sub_825D7940(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DBE74;
	sub_825D7940(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825FA390) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825fa3c4
	if (!ctx.cr6.eq) goto loc_825FA3C4;
	// lwz r11,952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r3,172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x825e7100
	ctx.lr = 0x825FA3C4;
	sub_825E7100(ctx, base);
loc_825FA3C4:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// bl 0x825f7460
	ctx.lr = 0x825FA3D8;
	sub_825F7460(ctx, base);
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

DEFINE_REX_FUNC(sub_825FB208) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB320) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,32688
	ctx.r3.s64 = ctx.r11.s64 + 32688;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB360) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x825fb394
	if (ctx.cr6.lt) goto loc_825FB394;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x825fb394
	if (ctx.cr6.gt) goto loc_825FB394;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9976
	ctx.r6.s64 = ctx.r11.s64 + 9976;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1712
	ctx.r7.s64 = 1712;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ea978
	sub_824EA978(ctx, base);
	return;
loc_825FB394:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FCA88) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCAB4;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fcad4
	if (ctx.cr0.eq) goto loc_825FCAD4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825fc1a0
	ctx.lr = 0x825FCACC;
	sub_825FC1A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825fcad8
	goto loc_825FCAD8;
loc_825FCAD4:
	// li r31,0
	r31.s64 = 0;
loc_825FCAD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc7b8
	ctx.lr = 0x825FCAE0;
	sub_825FC7B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825fcafc
	if (ctx.cr6.eq) goto loc_825FCAFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc290
	ctx.lr = 0x825FCAF0;
	sub_825FC290(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825FCAFC;
	sub_825B3528(ctx, base);
loc_825FCAFC:
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

DEFINE_REX_FUNC(sub_82607BE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82607c08
	if (!ctx.cr6.eq) goto loc_82607C08;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82607C08:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82607c28
	goto loc_82607C28;
loc_82607C14:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_82607C28:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82607c14
	if (ctx.cr6.lt) goto loc_82607C14;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260AC78) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8260ac10
	ctx.lr = 0x8260AC9C;
	sub_8260AC10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8260acc8
	if (!ctx.cr0.eq) goto loc_8260ACC8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260acc0
	if (!ctx.cr6.eq) goto loc_8260ACC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8260acc4
	if (ctx.cr6.eq) goto loc_8260ACC4;
loc_8260ACC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260ACC4:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8260ACC8:
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

DEFINE_REX_FUNC(sub_8260BFD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260BFE0;
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,556(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 556);
loc_8260C008:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8260c020
	if (ctx.cr6.eq) goto loc_8260C020;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260c024
	goto loc_8260C024;
loc_8260C020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260C024:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260c044
	if (ctx.cr6.eq) goto loc_8260C044;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8260c008
	goto loc_8260C008;
loc_8260C044:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260E728) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260E730;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,20576
	r30.s64 = ctx.r11.s64 + 20576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260b4a0
	ctx.lr = 0x8260E748;
	sub_8260B4A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8260e75c
	if (!ctx.cr6.eq) goto loc_8260E75C;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16387
	r31.u64 = r31.u64 | 16387;
	// b 0x8260e798
	goto loc_8260E798;
loc_8260E75C:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x8260b5b8
	ctx.lr = 0x8260E774;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260e784
	if (ctx.cr0.eq) goto loc_8260E784;
	// bl 0x8261af68
	ctx.lr = 0x8260E780;
	sub_8261AF68(ctx, base);
	// b 0x8260e788
	goto loc_8260E788;
loc_8260E784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260E788:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260e7ac
	if (ctx.cr6.eq) goto loc_8260E7AC;
	// li r31,0
	r31.s64 = 0;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8260E798:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260b538
	ctx.lr = 0x8260E7A0;
	sub_8260B538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8260E7AC:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8260e798
	goto loc_8260E798;
}

DEFINE_REX_FUNC(sub_82610F20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r8,r10,6
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82610f4c
	if (ctx.cr6.eq) goto loc_82610F4C;
	// rlwimi r5,r10,0,0,5
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000000) | (ctx.r5.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
loc_82610F4C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r10,8,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x7;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82610f68
	if (ctx.cr6.eq) goto loc_82610F68;
	// rlwimi r10,r6,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82610F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826135C0) {
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
	ctx.lr = 0x826135C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826135e8
	if (ctx.cr6.eq) goto loc_826135E8;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826135ec
	goto loc_826135EC;
loc_826135E8:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_826135EC:
	// stw r29,456(r30)
	REX_STORE_U32(r30.u32 + 456, r29.u32);
	// addi r28,r30,456
	r28.s64 = r30.s64 + 456;
	// stw r29,460(r30)
	REX_STORE_U32(r30.u32 + 460, r29.u32);
	// mr r26,r29
	r26.u64 = r29.u64;
	// stw r29,464(r30)
	REX_STORE_U32(r30.u32 + 464, r29.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261367c
	if (ctx.cr6.eq) goto loc_8261367C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r26,r11,23,9,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// stb r10,465(r30)
	REX_STORE_U8(r30.u32 + 465, ctx.r10.u8);
	// bne 0x82613638
	if (!ctx.cr0.eq) goto loc_82613638;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82613638
	if (ctx.cr6.eq) goto loc_82613638;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// stb r11,465(r30)
	REX_STORE_U8(r30.u32 + 465, ctx.r11.u8);
loc_82613638:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82613660
	if (ctx.cr6.eq) goto loc_82613660;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// rlwinm r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// rlwinm r27,r11,23,9,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// stb r10,464(r30)
	REX_STORE_U8(r30.u32 + 464, ctx.r10.u8);
	// b 0x82613668
	goto loc_82613668;
loc_82613660:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,464(r30)
	REX_STORE_U8(r30.u32 + 464, ctx.r11.u8);
loc_82613668:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82613678
	if (!ctx.cr6.eq) goto loc_82613678;
	// li r11,254
	ctx.r11.s64 = 254;
loc_82613678:
	// stb r11,466(r30)
	REX_STORE_U8(r30.u32 + 466, ctx.r11.u8);
loc_8261367C:
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826136f8
	if (!ctx.cr6.gt) goto loc_826136F8;
loc_82613688:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826136d8
	if (ctx.cr6.eq) goto loc_826136D8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82612c88
	ctx.lr = 0x826136A8;
	sub_82612C88(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x826136d0
	if (ctx.cr6.eq) goto loc_826136D0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82612c88
	ctx.lr = 0x826136CC;
	sub_82612C88(ctx, base);
	// b 0x826136d4
	goto loc_826136D4;
loc_826136D0:
	// bl 0x82612d68
	ctx.lr = 0x826136D4;
	sub_82612D68(ctx, base);
loc_826136D4:
	// stw r3,460(r30)
	REX_STORE_U32(r30.u32 + 460, ctx.r3.u32);
loc_826136D8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 472);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82610dd0
	ctx.lr = 0x826136E8;
	sub_82610DD0(ctx, base);
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82613688
	if (ctx.cr6.lt) goto loc_82613688;
loc_826136F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8261ADF8) {
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
	ctx.lr = 0x8261AE00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8261af54
	if (!ctx.cr6.eq) goto loc_8261AF54;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 40);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r29,r9,r8
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r27,0(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// blt cr6,0x8261ae64
	if (ctx.cr6.lt) goto loc_8261AE64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8261AE58;
	sub_826A1E70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// b 0x8261af50
	goto loc_8261AF50;
loc_8261AE64:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8261ae7c
	if (ctx.cr6.eq) goto loc_8261AE7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8261AE74;
	sub_826A1E70(ctx, base);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r30,r5,r30
	r30.u64 = ctx.r5.u64 + r30.u64;
loc_8261AE7C:
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 40);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lhz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 36);
	// divwu r11,r5,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// lhz r3,38(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 38);
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82634bc0
	ctx.lr = 0x8261AEA4;
	sub_82634BC0(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 40);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lhz r7,38(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 38);
	// mullw r26,r11,r29
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8261aee4
	if (!ctx.cr6.eq) goto loc_8261AEE4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mullw r4,r7,r3
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261AEDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8261af50
	goto loc_8261AF50;
loc_8261AEE4:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mullw r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mullw r28,r7,r11
	r28.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261AF10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lhz r10,38(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 38);
	// add r3,r28,r27
	ctx.r3.u64 = r28.u64 + r27.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// subf r28,r29,r26
	r28.u64 = r26.u64 - r29.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261AF38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x826a1e70
	ctx.lr = 0x8261AF48;
	sub_826A1E70(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
loc_8261AF50:
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_8261AF54:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82627790) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82627680
	sub_82627680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627960;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82628318
	ctx.lr = 0x82627974;
	sub_82628318(ctx, base);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// addi r11,r11,2380
	ctx.r11.s64 = ctx.r11.s64 + 2380;
	// addi r10,r10,2324
	ctx.r10.s64 = ctx.r10.s64 + 2324;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826279A4;
	sub_826A2E60(ctx, base);
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826279B8;
	sub_826A2E60(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r29,144(r31)
	REX_STORE_U32(r31.u32 + 144, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82629508) {
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
	// beq cr6,0x8262956c
	if (ctx.cr6.eq) goto loc_8262956C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8262956c
	if (ctx.cr6.eq) goto loc_8262956C;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
loc_82629534:
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
	// bne 0x82629534
	if (!ctx.cr0.eq) goto loc_82629534;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82629564
	if (!ctx.cr6.eq) goto loc_82629564;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x8264c3d0
	ctx.lr = 0x82629564;
	sub_8264C3D0(ctx, base);
loc_82629564:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8262956C:
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

DEFINE_REX_FUNC(sub_82633AA0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82633b4c
	if (ctx.cr6.lt) goto loc_82633B4C;
	// beq cr6,0x82633b04
	if (ctx.cr6.eq) goto loc_82633B04;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// blt cr6,0x82633b4c
	if (ctx.cr6.lt) goto loc_82633B4C;
	// bne cr6,0x82633b54
	if (!ctx.cr6.eq) goto loc_82633B54;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82633ad0
	if (!ctx.cr6.eq) goto loc_82633AD0;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,4512
	ctx.r11.s64 = ctx.r11.s64 + 4512;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633AD0:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82633ae4
	if (!ctx.cr6.eq) goto loc_82633AE4;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,1704
	ctx.r11.s64 = ctx.r11.s64 + 1704;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633AE4:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x82633af8
	if (!ctx.cr6.eq) goto loc_82633AF8;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,2480
	ctx.r11.s64 = ctx.r11.s64 + 2480;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633AF8:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633B04:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82633b18
	if (!ctx.cr6.eq) goto loc_82633B18;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,9600
	ctx.r11.s64 = ctx.r11.s64 + 9600;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633B18:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82633b2c
	if (!ctx.cr6.eq) goto loc_82633B2C;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,11480
	ctx.r11.s64 = ctx.r11.s64 + 11480;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633B2C:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x82633b40
	if (!ctx.cr6.eq) goto loc_82633B40;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,7160
	ctx.r11.s64 = ctx.r11.s64 + 7160;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633B40:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,5424
	ctx.r11.s64 = ctx.r11.s64 + 5424;
	// b 0x82633b54
	goto loc_82633B54;
loc_82633B4C:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r11,r11,13184
	ctx.r11.s64 = ctx.r11.s64 + 13184;
loc_82633B54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82636388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r31,r5,16
	r31.u64 = ctx.r5.u32 & 0xFFFF;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// ble cr6,0x82636434
	if (!ctx.cr6.gt) goto loc_82636434;
	// lhz r8,34(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r5,0
	ctx.r5.s64 = 0;
loc_826363D4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82636424
	if (!ctx.cr6.gt) goto loc_82636424;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_826363F0:
	// lwz r8,320(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r7,r11,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r8,60(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lfsx f13,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r8,34(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826363f0
	if (ctx.cr6.lt) goto loc_826363F0;
loc_82636424:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// blt cr6,0x826363d4
	if (ctx.cr6.lt) goto loc_826363D4;
loc_82636434:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82638EF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82638EF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82639008
	if (!ctx.cr6.lt) goto loc_82639008;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82638f6c
	if (ctx.cr6.eq) goto loc_82638F6C;
	// subfic r11,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82638f30
	if (ctx.cr6.lt) goto loc_82638F30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82638F30:
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// srw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r4,r6,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
loc_82638F6C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82638fe0
	if (ctx.cr6.gt) goto loc_82638FE0;
loc_82638F78:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82638fe0
	if (!ctx.cr6.gt) goto loc_82638FE0;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82638FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x82638f78
	if (!ctx.cr6.gt) goto loc_82638F78;
loc_82638FE0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82639008
	if (!ctx.cr6.lt) goto loc_82639008;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638bf0
	ctx.lr = 0x82638FFC;
	sub_82638BF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82639014
	if (ctx.cr6.lt) goto loc_82639014;
loc_82639008:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_82639014:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82641CE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641CF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82641D10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8264c540
	ctx.lr = 0x82641D28;
	sub_8264C540(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,132(r31)
	REX_STORE_U32(r31.u32 + 132, r29.u32);
	// addi r10,r10,-27140
	ctx.r10.s64 = ctx.r10.s64 + -27140;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826427A0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826427D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826427e4
	if (!ctx.cr6.eq) goto loc_826427E4;
	// b 0x821a9338
	sub_821A9338(ctx, base);
	return;
loc_826427E4:
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82642A90) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82642B4C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82642E68) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642e98
	if (ctx.cr6.eq) goto loc_82642E98;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82642e9c
	goto loc_82642E9C;
loc_82642E98:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82642E9C:
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lhz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82642f2c
	if (ctx.cr6.eq) goto loc_82642F2C;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642f2c
	if (ctx.cr6.eq) goto loc_82642F2C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826151f0
	ctx.lr = 0x82642EF0;
	sub_826151F0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r7,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,40
	ctx.r4.s64 = 40;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82615350
	ctx.lr = 0x82642F20;
	sub_82615350(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82642f4c
	goto loc_82642F4C;
loc_82642F2C:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642f40
	if (ctx.cr6.eq) goto loc_82642F40;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x82642f4c
	goto loc_82642F4C;
loc_82642F40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82642f4c
	if (ctx.cr6.eq) goto loc_82642F4C;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82642F4C:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642fa0
	if (ctx.cr6.eq) goto loc_82642FA0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,252(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82642910
	ctx.lr = 0x82642F90;
	sub_82642910(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// blt cr6,0x82643054
	if (ctx.cr6.lt) goto loc_82643054;
loc_82642FA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82642fe8
	if (ctx.cr6.eq) goto loc_82642FE8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82642910
	ctx.lr = 0x82642FE4;
	sub_82642910(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_82642FE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82643054
	if (ctx.cr6.lt) goto loc_82643054;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r8,540(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 540);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82643014
	if (!ctx.cr6.gt) goto loc_82643014;
	// stw r11,540(r10)
	REX_STORE_U32(ctx.r10.u32 + 540, ctx.r11.u32);
loc_82643014:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643094
	if (ctx.cr6.eq) goto loc_82643094;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643094
	if (ctx.cr6.eq) goto loc_82643094;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r8,552(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 552);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82643094
	if (!ctx.cr6.gt) goto loc_82643094;
	// stw r11,552(r10)
	REX_STORE_U32(ctx.r10.u32 + 552, ctx.r11.u32);
	// b 0x82643094
	goto loc_82643094;
loc_82643054:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643074
	if (ctx.cr6.eq) goto loc_82643074;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643074:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643094
	if (ctx.cr6.eq) goto loc_82643094;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643094:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8264EE88) {
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
	ctx.lr = 0x8264EE90;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// stw r5,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// sth r16,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, r16.u16);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x8264eec4
	if (ctx.cr6.lt) goto loc_8264EEC4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8264f11c
	goto loc_8264F11C;
loc_8264EEC4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8264eed4
	if (ctx.cr6.eq) goto loc_8264EED4;
	// lwz r21,0(r28)
	r21.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8264eed8
	goto loc_8264EED8;
loc_8264EED4:
	// mr r21,r16
	r21.u64 = r16.u64;
loc_8264EED8:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// addi r24,r25,28
	r24.s64 = r25.s64 + 28;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x8264e648
	ctx.lr = 0x8264EEF0;
	sub_8264E648(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8264f110
	if (ctx.cr6.lt) goto loc_8264F110;
	// beq cr6,0x8264ef1c
	if (ctx.cr6.eq) goto loc_8264EF1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8264f110
	if (!ctx.cr6.lt) goto loc_8264F110;
	// addi r4,r1,90
	ctx.r4.s64 = ctx.r1.s64 + 90;
	// b 0x8264ef20
	goto loc_8264EF20;
loc_8264EF1C:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
loc_8264EF20:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264EF28;
	sub_8264FAD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r15,4
	r15.s64 = 4;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264ef80
	if (ctx.cr0.eq) goto loc_8264EF80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8264ee08
	ctx.lr = 0x8264EF54;
	sub_8264EE08(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r15.u32);
	// rotlwi r21,r9,0
	r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_8264EF80:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264efa0
	if (ctx.cr0.eq) goto loc_8264EFA0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264EF98;
	sub_8264FAD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
loc_8264EFA0:
	// lbz r4,81(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r19,1
	r19.s64 = 1;
	// rlwinm. r11,r4,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264efd8
	if (ctx.cr0.eq) goto loc_8264EFD8;
	// lwz r11,1080(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1080);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8264fc90
	ctx.lr = 0x8264EFCC;
	sub_8264FC90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// b 0x8264efe4
	goto loc_8264EFE4;
loc_8264EFD8:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// sth r16,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r16.u16);
loc_8264EFE4:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r17,r16
	r17.u64 = r16.u64;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264f084
	if (!ctx.cr6.eq) goto loc_8264F084;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264e700
	ctx.lr = 0x8264F008;
	sub_8264E700(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264fbe0
	ctx.lr = 0x8264F028;
	sub_8264FBE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rotlwi r18,r11,0
	r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq 0x8264f068
	if (ctx.cr0.eq) goto loc_8264F068;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// bl 0x8264eaf0
	ctx.lr = 0x8264F058;
	sub_8264EAF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// and r18,r11,r18
	r18.u64 = ctx.r11.u64 & r18.u64;
loc_8264F068:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8264fc30
	ctx.lr = 0x8264F078;
	sub_8264FC30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// b 0x8264f090
	goto loc_8264F090;
loc_8264F084:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r18,r16
	r18.u64 = r16.u64;
	// sth r16,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r16.u16);
loc_8264F090:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,40(r25)
	r20.u64 = REX_LOAD_U32(r25.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264f5f4
	if (ctx.cr6.eq) goto loc_8264F5F4;
loc_8264F0A0:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r23,r16
	r23.u64 = r16.u64;
	// mr r22,r16
	r22.u64 = r16.u64;
	// andi. r11,r11,243
	ctx.r11.u64 = ctx.r11.u64 & 243;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8264F0B4:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264f1dc
	if (!ctx.cr6.eq) goto loc_8264F1DC;
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// clrlwi r10,r23,16
	ctx.r10.u64 = r23.u32 & 0xFFFF;
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// blt cr6,0x8264f124
	if (ctx.cr6.lt) goto loc_8264F124;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264e648
	ctx.lr = 0x8264F0E4;
	sub_8264E648(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8264f110
	if (!ctx.cr6.eq) goto loc_8264F110;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8264f5a4
	if (!ctx.cr6.eq) goto loc_8264F5A4;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264f5a4
	if (ctx.cr0.eq) goto loc_8264F5A4;
loc_8264F110:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8264F118:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8264F11C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
loc_8264F124:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x8264fa80
	ctx.lr = 0x8264F12C;
	sub_8264FA80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// mr r30,r16
	r30.u64 = r16.u64;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8264f198
	if (ctx.cr0.eq) goto loc_8264F198;
loc_8264F148:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264F154;
	sub_8264FAD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,86(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// bl 0x8264eaf0
	ctx.lr = 0x8264F16C;
	sub_8264EAF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8264f188
	if (!ctx.cr6.eq) goto loc_8264F188;
	// mr r29,r19
	r29.u64 = r19.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
loc_8264F188:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264f148
	if (ctx.cr6.lt) goto loc_8264F148;
loc_8264F198:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264F1A4;
	sub_8264FAD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8264f1dc
	if (!ctx.cr6.eq) goto loc_8264F1DC;
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8264fb58
	ctx.lr = 0x8264F1CC;
	sub_8264FB58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x8264f5a4
	goto loc_8264F5A4;
loc_8264F1DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,40(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264e648
	ctx.lr = 0x8264F1EC;
	sub_8264E648(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8264f284
	if (ctx.cr6.lt) goto loc_8264F284;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8264f218
	if (ctx.cr6.lt) goto loc_8264F218;
	// bne cr6,0x8264f110
	if (!ctx.cr6.eq) goto loc_8264F110;
	// b 0x8264f5a4
	goto loc_8264F5A4;
loc_8264F218:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264f6c8
	ctx.lr = 0x8264F224;
	sub_8264F6C8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8264f27c
	if (ctx.cr0.eq) goto loc_8264F27C;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8264f27c
	if (!ctx.cr0.eq) goto loc_8264F27C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8264f274
	if (ctx.cr6.eq) goto loc_8264F274;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8264F248:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r14,1
	ctx.r4.s64 = r14.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8264ee88
	ctx.lr = 0x8264F258;
	sub_8264EE88(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264f654
	if (ctx.cr0.eq) goto loc_8264F654;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x8264f5a4
	goto loc_8264F5A4;
loc_8264F274:
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// b 0x8264f248
	goto loc_8264F248;
loc_8264F27C:
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// b 0x8264f248
	goto loc_8264F248;
loc_8264F284:
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// mr r27,r16
	r27.u64 = r16.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// beq 0x8264f2e0
	if (ctx.cr0.eq) goto loc_8264F2E0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8264ee08
	ctx.lr = 0x8264F2AC;
	sub_8264EE08(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r15.u32);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// rotlwi r21,r9,0
	r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8264F2E0:
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264f300
	if (ctx.cr0.eq) goto loc_8264F300;
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264F2F4;
	sub_8264FAD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8264F300:
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r28,r19,r11
	r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// beq 0x8264f3e0
	if (ctx.cr0.eq) goto loc_8264F3E0;
	// lwz r11,1080(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1080);
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264fc90
	ctx.lr = 0x8264F334;
	sub_8264FC90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm. r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8264f36c
	if (!ctx.cr0.eq) goto loc_8264F36C;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8264f36c
	if (!ctx.cr0.eq) goto loc_8264F36C;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8264f3d0
	if (ctx.cr6.eq) goto loc_8264F3D0;
	// lwz r3,0(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 0);
	// b 0x8264f374
	goto loc_8264F374;
loc_8264F36C:
	// mr r29,r16
	r29.u64 = r16.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8264F374:
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8264f3a0
	if (ctx.cr0.eq) goto loc_8264F3A0;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8264f3a0
	if (!ctx.cr6.eq) goto loc_8264F3A0;
	// bl 0x826a5ac8
	ctx.lr = 0x8264F394;
	sub_826A5AC8(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8264F3A0:
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264fc30
	ctx.lr = 0x8264F3AC;
	sub_8264FC30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// beq cr6,0x8264f3d8
	if (ctx.cr6.eq) goto loc_8264F3D8;
	// mr r28,r15
	r28.u64 = r15.u64;
	// b 0x8264f3f8
	goto loc_8264F3F8;
loc_8264F3D0:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x8264f374
	goto loc_8264F374;
loc_8264F3D8:
	// mullw r28,r5,r28
	r28.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// b 0x8264f3f8
	goto loc_8264F3F8;
loc_8264F3E0:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r19,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r19.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// sth r16,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r16.u16);
loc_8264F3F8:
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8264f474
	if (ctx.cr6.eq) goto loc_8264F474;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r31,16(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 16);
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r8,r30,r31
	ctx.r8.u64 = r31.u64 - r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// addi r31,r25,8
	r31.s64 = r25.s64 + 8;
	// bl 0x826b3de8
	ctx.lr = 0x8264F440;
	sub_826B3DE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8264fa48
	ctx.lr = 0x8264F450;
	sub_8264FA48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r5,r30,32
	ctx.r5.u64 = r30.u64 & 0xFFFFFFFF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// bl 0x8264fda0
	ctx.lr = 0x8264F470;
	sub_8264FDA0(ctx, base);
	// b 0x8264f4f8
	goto loc_8264F4F8;
loc_8264F474:
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264f50c
	if (ctx.cr6.eq) goto loc_8264F50C;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8264f4e4
	if (ctx.cr6.lt) goto loc_8264F4E4;
	// beq cr6,0x8264f4cc
	if (ctx.cr6.eq) goto loc_8264F4CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8264f4b4
	if (ctx.cr6.lt) goto loc_8264F4B4;
	// bne cr6,0x8264f50c
	if (!ctx.cr6.eq) goto loc_8264F50C;
	// ld r29,0(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8264f50c
	if (!ctx.cr6.eq) goto loc_8264F50C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x8264f998
	ctx.lr = 0x8264F4B0;
	sub_8264F998(ctx, base);
	// b 0x8264f4f8
	goto loc_8264F4F8;
loc_8264F4B4:
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8264f50c
	if (!ctx.cr6.eq) goto loc_8264F50C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x8264f910
	ctx.lr = 0x8264F4C8;
	sub_8264F910(ctx, base);
	// b 0x8264f4f8
	goto loc_8264F4F8;
loc_8264F4CC:
	// lhz r29,0(r4)
	r29.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8264f50c
	if (!ctx.cr6.eq) goto loc_8264F50C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x8264f890
	ctx.lr = 0x8264F4E0;
	sub_8264F890(ctx, base);
	// b 0x8264f4f8
	goto loc_8264F4F8;
loc_8264F4E4:
	// lbz r29,0(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8264f50c
	if (!ctx.cr6.eq) goto loc_8264F50C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x8264f818
	ctx.lr = 0x8264F4F8;
	sub_8264F818(ctx, base);
loc_8264F4F8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8264f118
	if (ctx.cr6.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8264F50C:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264f520
	if (!ctx.cr6.eq) goto loc_8264F520;
	// lhz r28,90(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
loc_8264F520:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264f52c
	if (ctx.cr6.eq) goto loc_8264F52C;
	// add r21,r28,r21
	r21.u64 = r28.u64 + r21.u64;
loc_8264F52C:
	// rlwinm. r11,r9,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264f5a0
	if (ctx.cr0.eq) goto loc_8264F5A0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264e678
	ctx.lr = 0x8264F540;
	sub_8264E678(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,126(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// bl 0x8264eaf0
	ctx.lr = 0x8264F558;
	sub_8264EAF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 124);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r5,r11,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// slw r31,r19,r5
	r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r5.u8 & 0x3F));
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - r31.u64;
	// bl 0x8264fb60
	ctx.lr = 0x8264F594;
	sub_8264FB60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8264F5A0:
	// lwz r28,340(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8264F5A4:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264f5c0
	if (!ctx.cr6.eq) goto loc_8264F5C0;
	// clrlwi r11,r23,16
	ctx.r11.u64 = r23.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r23,r11,16
	r23.u64 = ctx.r11.u32 & 0xFFFF;
loc_8264F5C0:
	// rlwinm r11,r9,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8264f0b4
	if (!ctx.cr6.eq) goto loc_8264F0B4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8264f5f4
	if (!ctx.cr6.lt) goto loc_8264F5F4;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264f6c8
	ctx.lr = 0x8264F5E8;
	sub_8264F6C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264f0a0
	if (ctx.cr6.lt) goto loc_8264F0A0;
loc_8264F5F4:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264f618
	if (ctx.cr0.eq) goto loc_8264F618;
	// lbz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8264fc30
	ctx.lr = 0x8264F610;
	sub_8264FC30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
loc_8264F618:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264f64c
	if (!ctx.cr6.eq) goto loc_8264F64C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8264f6c8
	ctx.lr = 0x8264F630;
	sub_8264F6C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264e750
	ctx.lr = 0x8264F644;
	sub_8264E750(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264f118
	if (ctx.cr0.lt) goto loc_8264F118;
loc_8264F64C:
	// stw r21,0(r28)
	REX_STORE_U32(r28.u32 + 0, r21.u32);
	// b 0x8264f118
	goto loc_8264F118;
loc_8264F654:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8264f670
	if (!ctx.cr6.eq) goto loc_8264F670;
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// b 0x8264f5a4
	goto loc_8264F5A4;
loc_8264F670:
	// lwz r21,104(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8264f5a4
	goto loc_8264F5A4;
}

DEFINE_REX_FUNC(sub_8267F410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267F418;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x827938a4
	ctx.lr = 0x8267F428;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// rlwinm r11,r11,0,4,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
	// lwz r29,1104(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1104);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// ble cr6,0x8267f4cc
	if (!ctx.cr6.gt) goto loc_8267F4CC;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// ble cr6,0x8267f490
	if (!ctx.cr6.gt) goto loc_8267F490;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// beq cr6,0x8267f474
	if (ctx.cr6.eq) goto loc_8267F474;
	// lwz r11,1132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1132);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f5b0
	if (ctx.cr0.eq) goto loc_8267F5B0;
	// addi r5,r31,1176
	ctx.r5.s64 = r31.s64 + 1176;
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// addi r4,r31,1100
	ctx.r4.s64 = r31.s64 + 1100;
	// bl 0x826846b0
	ctx.lr = 0x8267F46C;
	sub_826846B0(ctx, base);
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// b 0x8267f480
	goto loc_8267F480;
loc_8267F474:
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267f5b0
	if (ctx.cr6.eq) goto loc_8267F5B0;
loc_8267F480:
	// bl 0x82676d18
	ctx.lr = 0x8267F484;
	sub_82676D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, ctx.r11.u32);
	// b 0x8267f5b0
	goto loc_8267F5B0;
loc_8267F490:
	// addi r30,r31,1176
	r30.s64 = r31.s64 + 1176;
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// addi r4,r31,1100
	ctx.r4.s64 = r31.s64 + 1100;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826846b0
	ctx.lr = 0x8267F4A4;
	sub_826846B0(ctx, base);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bne cr6,0x8267f4b8
	if (!ctx.cr6.eq) goto loc_8267F4B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8267c1f0
	ctx.lr = 0x8267F4B8;
	sub_8267C1F0(ctx, base);
loc_8267F4B8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82676d18
	ctx.lr = 0x8267F4C0;
	sub_82676D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8267f5b0
	goto loc_8267F5B0;
loc_8267F4CC:
	// addi r30,r31,1176
	r30.s64 = r31.s64 + 1176;
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// addi r4,r31,1100
	ctx.r4.s64 = r31.s64 + 1100;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82683af0
	ctx.lr = 0x8267F4E0;
	sub_82683AF0(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x8267f52c
	if (!ctx.cr6.eq) goto loc_8267F52C;
	// lhz r11,682(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 682);
	// lhz r9,680(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 680);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,682(r31)
	REX_STORE_U16(r31.u32 + 682, ctx.r11.u16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8267f540
	if (ctx.cr6.eq) goto loc_8267F540;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r10,r31,624
	ctx.r10.s64 = r31.s64 + 624;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// bl 0x826836c8
	ctx.lr = 0x8267F528;
	sub_826836C8(ctx, base);
	// b 0x8267f540
	goto loc_8267F540;
loc_8267F52C:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x8267f540
	if (!ctx.cr6.eq) goto loc_8267F540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8267c270
	ctx.lr = 0x8267F540;
	sub_8267C270(ctx, base);
loc_8267F540:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82676d18
	ctx.lr = 0x8267F548;
	sub_82676D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267f5b0
	if (!ctx.cr6.eq) goto loc_8267F5B0;
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8267f5b0
	if (!ctx.cr6.gt) goto loc_8267F5B0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f5b0
	if (ctx.cr6.eq) goto loc_8267F5B0;
	// bl 0x823ef900
	ctx.lr = 0x8267F578;
	sub_823EF900(ctx, base);
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r11,r31,364
	ctx.r11.s64 = r31.s64 + 364;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// beq 0x8267f5a8
	if (ctx.cr0.eq) goto loc_8267F5A8;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267f5b0
	if (ctx.cr6.lt) goto loc_8267F5B0;
loc_8267F5A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826829f0
	ctx.lr = 0x8267F5B0;
	sub_826829F0(ctx, base);
loc_8267F5B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267cae0
	ctx.lr = 0x8267F5B8;
	sub_8267CAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267F5C0;
	sub_82676D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82688600) {
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
	ctx.lr = 0x82688608;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// rlwinm. r11,r8,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r3,96
	r28.s64 = ctx.r3.s64 + 96;
	// beq 0x8268867c
	if (ctx.cr0.eq) goto loc_8268867C;
	// addi r29,r3,92
	r29.s64 = ctx.r3.s64 + 92;
	// rlwinm r27,r7,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82688644;
	sub_826A1E70(ctx, base);
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// stw r26,88(r31)
	REX_STORE_U32(r31.u32 + 88, r26.u32);
	// rlwinm. r9,r25,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// beq 0x826886c0
	if (ctx.cr0.eq) goto loc_826886C0;
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82688674;
	sub_826A1E70(ctx, base);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x826886c0
	goto loc_826886C0;
loc_8268867C:
	// add r11,r26,r24
	ctx.r11.u64 = r26.u64 + r24.u64;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826886b8
	if (ctx.cr6.eq) goto loc_826886B8;
	// addi r29,r6,-4
	r29.s64 = ctx.r6.s64 + -4;
loc_82688698:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x826886A8;
	sub_826A1E70(ctx, base);
	// lwzu r11,8(r29)
	ea = 8 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x82688698
	if (!ctx.cr0.eq) goto loc_82688698;
loc_826886B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_826886C0:
	// add r11,r26,r24
	ctx.r11.u64 = r26.u64 + r24.u64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8268E6A8) {
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
	ctx.lr = 0x8268E6B0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x823f02b8
	ctx.lr = 0x8268E6E0;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8268e6f4
	if (!ctx.cr0.eq) goto loc_8268E6F4;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x8268e8f4
	goto loc_8268E8F4;
loc_8268E6F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,8(r27)
	REX_STORE_U32(r27.u32 + 8, r22.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823ef5f0
	ctx.lr = 0x8268E710;
	sub_823EF5F0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8268E720;
	sub_823EF5F0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8268e7b4
	if (ctx.cr6.eq) goto loc_8268E7B4;
	// addi r31,r27,12
	r31.s64 = r27.s64 + 12;
loc_8268E730:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bge cr6,0x8268e7b4
	if (!ctx.cr6.lt) goto loc_8268E7B4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x8268e7b4
	if (ctx.cr0.lt) goto loc_8268E7B4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// stwx r11,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// blt cr6,0x8268e730
	if (ctx.cr6.lt) goto loc_8268E730;
loc_8268E7B4:
	// addi r11,r27,20
	ctx.r11.s64 = r27.s64 + 20;
	// stw r30,20(r27)
	REX_STORE_U32(r27.u32 + 20, r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8268e8f4
	if (ctx.cr6.lt) goto loc_8268E8F4;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8268E7D4:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,0
	r30.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x8268E7E8;
	sub_823EF5F0(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_8268E7F4:
	// add r11,r25,r31
	ctx.r11.u64 = r25.u64 + r31.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e82c
	if (ctx.cr6.eq) goto loc_8268E82C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
loc_8268E82C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x8268e7f4
	if (ctx.cr6.lt) goto loc_8268E7F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8268e8bc
	if (ctx.cr6.eq) goto loc_8268E8BC;
	// addi r7,r28,4
	ctx.r7.s64 = r28.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8268ed18
	ctx.lr = 0x8268E858;
	sub_8268ED18(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x8268e8cc
	if (ctx.cr0.lt) goto loc_8268E8CC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8268E870:
	// add r11,r25,r30
	ctx.r11.u64 = r25.u64 + r30.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e8b0
	if (ctx.cr6.eq) goto loc_8268E8B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x8268e8cc
	if (ctx.cr0.lt) goto loc_8268E8CC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8268E8B0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8268e870
	if (ctx.cr6.lt) goto loc_8268E870;
loc_8268E8BC:
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(r25.u32, 6, ctx.xer);
	// blt cr6,0x8268e7d4
	if (ctx.cr6.lt) goto loc_8268E7D4;
loc_8268E8CC:
	// stw r24,32(r27)
	REX_STORE_U32(r27.u32 + 32, r24.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8268e8f4
	if (ctx.cr6.lt) goto loc_8268E8F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268d9e0
	ctx.lr = 0x8268E8EC;
	sub_8268D9E0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge 0x8268e900
	if (!ctx.cr0.lt) goto loc_8268E900;
loc_8268E8F4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268dfb8
	ctx.lr = 0x8268E8FC;
	sub_8268DFB8(ctx, base);
	// li r27,0
	r27.s64 = 0;
loc_8268E900:
	// stw r27,0(r19)
	REX_STORE_U32(r19.u32 + 0, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8269CD80) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// bl 0x826a3a68
	ctx.lr = 0x8269CDA0;
	sub_826A3A68(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8269CDB0:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8269cdb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269CDB0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8269CDBC:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// bne 0x8269cdbc
	if (!ctx.cr0.eq) goto loc_8269CDBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// bne cr6,0x8269cdf4
	if (!ctx.cr6.eq) goto loc_8269CDF4;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
loc_8269CDF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8269ce08
	goto loc_8269CE08;
loc_8269CDFC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269ce24
	if (ctx.cr6.eq) goto loc_8269CE24;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_8269CE08:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// and. r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269cdfc
	if (!ctx.cr0.eq) goto loc_8269CDFC;
loc_8269CE24:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8269ce54
	goto loc_8269CE54;
loc_8269CE30:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// and. r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269ce60
	if (!ctx.cr0.eq) goto loc_8269CE60;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_8269CE54:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8269ce30
	if (!ctx.cr0.eq) goto loc_8269CE30;
	// b 0x8269ce6c
	goto loc_8269CE6C;
loc_8269CE60:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8269CE6C:
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(__savefpr_18) {
	REX_FUNC_PROLOGUE();
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
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	REX_STORE_U64(ctx.r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	REX_STORE_U64(ctx.r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	REX_STORE_U64(ctx.r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	REX_STORE_U64(ctx.r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
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

DEFINE_REX_FUNC(sub_826A3BD8) {
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
	// bl 0x826a3650
	ctx.lr = 0x826A3BF0;
	sub_826A3650(ctx, base);
	// bl 0x826a9760
	ctx.lr = 0x826A3BF4;
	sub_826A9760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a3c90
	if (ctx.cr0.eq) goto loc_826A3C90;
	// bl 0x82793f14
	ctx.lr = 0x826A3C00;
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,26352(r11)
	REX_STORE_U32(ctx.r11.u32 + 26352, ctx.r3.u32);
	// beq cr6,0x826a3c90
	if (ctx.cr6.eq) goto loc_826A3C90;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826a2b40
	ctx.lr = 0x826A3C20;
	sub_826A2B40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826a3c90
	if (ctx.cr0.eq) goto loc_826A3C90;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793f04
	ctx.lr = 0x826A3C34;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a3c90
	if (ctx.cr0.eq) goto loc_826A3C90;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x823eea88
	ctx.lr = 0x826A3C5C;
	sub_823EEA88(ctx, base);
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,8964
	ctx.r10.s64 = ctx.r10.s64 + 8964;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-704
	ctx.r11.s64 = ctx.r11.s64 + -704;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x823efb20
	ctx.lr = 0x826A3C88;
	sub_823EFB20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a3c98
	goto loc_826A3C98;
loc_826A3C90:
	// bl 0x826a3928
	ctx.lr = 0x826A3C94;
	sub_826A3928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A3C98:
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

DEFINE_REX_FUNC(__restvmx_30) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_73) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B6BC0) {
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
	ctx.lr = 0x826B6BC8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_826B6BF0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x826b6bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B6BF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r9.u32);
	// blt cr6,0x826b6d20
	if (ctx.cr6.lt) goto loc_826B6D20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826b6d40
	if (ctx.cr6.eq) goto loc_826B6D40;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,656(r31)
	REX_STORE_U32(r31.u32 + 656, r28.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// ori r5,r9,44100
	ctx.r5.u64 = ctx.r9.u64 | 44100;
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// ori r3,r8,45328
	ctx.r3.u64 = ctx.r8.u64 | 45328;
	// sth r30,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r30.u16);
	// stw r10,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r10.u32);
	// sth r6,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r7,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// sth r4,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r4.u16);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b6ca4
	if (!ctx.cr6.eq) goto loc_826B6CA4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_826B6CA4:
	// stw r11,636(r31)
	REX_STORE_U32(r31.u32 + 636, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,660(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 660);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// addi r8,r9,31236
	ctx.r8.s64 = ctx.r9.s64 + 31236;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f1,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// lwz r7,32(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// ori r6,r11,2
	ctx.r6.u64 = ctx.r11.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826B6CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b6d20
	if (ctx.cr6.lt) goto loc_826B6D20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826b6d34
	if (!ctx.cr6.lt) goto loc_826B6D34;
loc_826B6D20:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6D34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
loc_826B6D40:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x826b6d20
	goto loc_826B6D20;
}

DEFINE_REX_FUNC(sub_826C2418) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,244(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C2454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x826c2514
	if (!ctx.cr6.eq) goto loc_826C2514;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x826c2514
	if (!ctx.cr6.eq) goto loc_826C2514;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C248C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C24A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,292(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C24C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,196(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 196);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826C24D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C24E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,204(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 204);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C24FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,208(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 208);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C2510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826c251c
	goto loc_826C251C;
loc_826C2514:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_826C251C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826CD000) {
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
	ctx.lr = 0x826CD008;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// bl 0x826a2e60
	ctx.lr = 0x826CD02C;
	sub_826A2E60(ctx, base);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826cd234
	if (ctx.cr6.eq) goto loc_826CD234;
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,32767
	r30.s64 = 32767;
	// li r29,1
	r29.s64 = 1;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_826CD05C:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r7,r9,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mulli r8,r9,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,332(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 332);
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r5,336(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 336);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r5,268(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 268);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r8,324(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 324);
	// stfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r8,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r8,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// sth r30,112(r11)
	REX_STORE_U16(ctx.r11.u32 + 112, r30.u16);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// sth r10,122(r11)
	REX_STORE_U16(ctx.r11.u32 + 122, ctx.r10.u16);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// sth r10,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r10.u16);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// sth r10,126(r11)
	REX_STORE_U16(ctx.r11.u32 + 126, ctx.r10.u16);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// sth r10,128(r11)
	REX_STORE_U16(ctx.r11.u32 + 128, ctx.r10.u16);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// sth r10,130(r11)
	REX_STORE_U16(ctx.r11.u32 + 130, ctx.r10.u16);
	// sth r10,132(r11)
	REX_STORE_U16(ctx.r11.u32 + 132, ctx.r10.u16);
	// sth r10,134(r11)
	REX_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,114(r11)
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r10.u16);
	// sth r10,118(r11)
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r10.u16);
	// lwz r8,280(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826cd170
	if (!ctx.cr6.eq) goto loc_826CD170;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r6,436(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 436);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r6,436(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lwz r5,256(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r6.u32);
	// b 0x826cd190
	goto loc_826CD190;
loc_826CD170:
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
loc_826CD190:
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r6,416(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 416);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r6,420(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,424(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r6,424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// sth r29,0(r28)
	REX_STORE_U16(r28.u32 + 0, r29.u16);
	// lwz r5,256(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r6,424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// sth r5,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,-2(r5)
	REX_STORE_U16(ctx.r5.u32 + -2, ctx.r8.u16);
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r10,172(r7)
	REX_STORE_U32(ctx.r7.u32 + 172, ctx.r10.u32);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826cd05c
	if (ctx.cr6.lt) goto loc_826CD05C;
loc_826CD234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DF528) {
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
	ctx.lr = 0x826DF530;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r4,31252(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 31252);
	// bl 0x826c6958
	ctx.lr = 0x826DF54C;
	sub_826C6958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df620
	if (ctx.cr6.lt) goto loc_826DF620;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826df584
	if (ctx.cr6.eq) goto loc_826DF584;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r4,31256(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 31256);
	// bl 0x826c6718
	ctx.lr = 0x826DF56C;
	sub_826C6718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826df584
	if (ctx.cr6.eq) goto loc_826DF584;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DF584:
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-7992
	ctx.r11.s64 = ctx.r11.s64 + -7992;
	// addi r10,r10,-5216
	ctx.r10.s64 = ctx.r10.s64 + -5216;
	// addi r9,r9,-4960
	ctx.r9.s64 = ctx.r9.s64 + -4960;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32146
	ctx.r8.s64 = -2106720256;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lis r6,-32146
	ctx.r6.s64 = -2106720256;
	// lis r5,-32146
	ctx.r5.s64 = -2106720256;
	// lis r4,-32146
	ctx.r4.s64 = -2106720256;
	// lis r29,-32146
	r29.s64 = -2106720256;
	// lis r28,-32146
	r28.s64 = -2106720256;
	// lis r27,-32146
	r27.s64 = -2106720256;
	// addi r8,r8,-3544
	ctx.r8.s64 = ctx.r8.s64 + -3544;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r7,-3536
	ctx.r7.s64 = ctx.r7.s64 + -3536;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r6,r6,-3128
	ctx.r6.s64 = ctx.r6.s64 + -3128;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r5,r5,-4952
	ctx.r5.s64 = ctx.r5.s64 + -4952;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,-4776
	ctx.r4.s64 = ctx.r4.s64 + -4776;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r11,r29,-4424
	ctx.r11.s64 = r29.s64 + -4424;
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r10,r28,-4008
	ctx.r10.s64 = r28.s64 + -4008;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// addi r9,r27,-5096
	ctx.r9.s64 = r27.s64 + -5096;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x826df620
	if (!ctx.cr6.eq) goto loc_826DF620;
	// lis r3,80
	ctx.r3.s64 = 5242880;
loc_826DF620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E3FC0) {
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
	ctx.lr = 0x826E3FC8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e4138
	if (ctx.cr6.eq) goto loc_826E4138;
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e4038
	if (!ctx.cr6.gt) goto loc_826E4038;
loc_826E3FEC:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e402c
	if (!ctx.cr6.gt) goto loc_826E402C;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
loc_826E4000:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r3,r10,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826E4018;
	sub_826A2E60(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e4000
	if (ctx.cr6.lt) goto loc_826E4000;
loc_826E402C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e3fec
	if (ctx.cr6.lt) goto loc_826E3FEC;
loc_826E4038:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e4138
	if (!ctx.cr6.gt) goto loc_826E4138;
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826E4050:
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826e4124
	if (!ctx.cr6.gt) goto loc_826E4124;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// slw r27,r3,r25
	r27.u64 = r25.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r25.u8 & 0x3F));
loc_826E4074:
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// ble cr6,0x826e410c
	if (!ctx.cr6.gt) goto loc_826E410C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_826E40A4:
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// slw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlw r7,r3,r11
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, ctx.r11.u8 & 0x1F);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r24,0(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826e40e0
	if (!ctx.cr6.lt) goto loc_826E40E0;
loc_826E40CC:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826e40cc
	if (ctx.cr6.lt) goto loc_826E40CC;
loc_826E40E0:
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,116
	ctx.r6.s64 = ctx.r6.s64 + 116;
	// lwzx r7,r29,r9
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwzx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stbx r8,r10,r30
	REX_STORE_U8(ctx.r10.u32 + r30.u32, ctx.r8.u8);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e40a4
	if (ctx.cr6.lt) goto loc_826E40A4;
loc_826E410C:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826e4074
	if (ctx.cr6.lt) goto loc_826E4074;
loc_826E4124:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,116
	r26.s64 = r26.s64 + 116;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e4050
	if (ctx.cr6.lt) goto loc_826E4050;
loc_826E4138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826F35A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826F35B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mullw. r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble 0x826f3600
	if (!ctx.cr0.gt) goto loc_826F3600;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826F35DC:
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw r6,r7,r7
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826f35dc
	if (ctx.cr6.lt) goto loc_826F35DC;
loc_826F3600:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mullw. r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x826f3634
	if (!ctx.cr0.gt) goto loc_826F3634;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826F3614:
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw r6,r7,r7
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826f3614
	if (ctx.cr6.lt) goto loc_826F3614;
loc_826F3634:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f3664
	if (!ctx.cr6.gt) goto loc_826F3664;
loc_826F3644:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f3644
	if (ctx.cr6.lt) goto loc_826F3644;
loc_826F3664:
	// lwz r10,660(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 660);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826f36f4
	if (!ctx.cr6.eq) goto loc_826F36F4;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,664(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 664);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw. r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x826f36bc
	if (!ctx.cr0.gt) goto loc_826F36BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826F368C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,692(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 692);
	// lhzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r6,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r5,664(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 664);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826f368c
	if (ctx.cr6.lt) goto loc_826F368C;
loc_826F36BC:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw. r8,r10,r10
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x826f36f4
	if (!ctx.cr0.gt) goto loc_826F36F4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826F36CC:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,700(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 700);
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sthx r7,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mullw r6,r11,r11
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826f36cc
	if (ctx.cr6.lt) goto loc_826F36CC;
loc_826F36F4:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826F3708;
	sub_826A2E60(ctx, base);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826F3720;
	sub_826A2E60(ctx, base);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mullw r5,r6,r29
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// stw r5,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r5.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lhz r4,34(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stw r7,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r7.u32);
	// mullw r3,r4,r29
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// sth r10,48(r30)
	REX_STORE_U16(r30.u32 + 48, ctx.r10.u16);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82703500) {
	REX_FUNC_PROLOGUE();
	// lwz r11,452(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82703518
	if (!ctx.cr6.eq) goto loc_82703518;
	// lwz r11,3136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3136);
	// lwz r10,3140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3140);
	// b 0x82703544
	goto loc_82703544;
loc_82703518:
	// lwz r11,3924(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270354c
	if (ctx.cr6.eq) goto loc_8270354C;
	// lwz r11,3928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270353c
	if (ctx.cr6.eq) goto loc_8270353C;
	// lwz r11,3116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3116);
	// lwz r10,3112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3112);
	// b 0x82703544
	goto loc_82703544;
loc_8270353C:
	// lwz r11,3124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// lwz r10,3120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3120);
loc_82703544:
	// stw r11,3108(r3)
	REX_STORE_U32(ctx.r3.u32 + 3108, ctx.r11.u32);
	// stw r10,3104(r3)
	REX_STORE_U32(ctx.r3.u32 + 3104, ctx.r10.u32);
loc_8270354C:
	// lwz r11,3924(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,3928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82703578
	if (ctx.cr6.eq) goto loc_82703578;
	// lwz r11,3116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3116);
	// lwz r10,3112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3112);
	// stw r11,3128(r3)
	REX_STORE_U32(ctx.r3.u32 + 3128, ctx.r11.u32);
	// stw r10,3132(r3)
	REX_STORE_U32(ctx.r3.u32 + 3132, ctx.r10.u32);
	// blr 
	return;
loc_82703578:
	// lwz r11,3124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// lwz r10,3120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3120);
	// stw r11,3128(r3)
	REX_STORE_U32(ctx.r3.u32 + 3128, ctx.r11.u32);
	// stw r10,3132(r3)
	REX_STORE_U32(ctx.r3.u32 + 3132, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82711400) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// neg r9,r4
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82711424
	if (!ctx.cr6.lt) goto loc_82711424;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82711438
	goto loc_82711438;
loc_82711424:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82711438
	if (ctx.cr6.lt) goto loc_82711438;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stb r8,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
loc_82711438:
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82711458
	if (!ctx.cr6.lt) goto loc_82711458;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
loc_82711458:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stb r9,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82715218) {
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
	ctx.lr = 0x82715220;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r17,364(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r18,356(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715294
	if (ctx.cr6.eq) goto loc_82715294;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,732
	ctx.r10.s64 = ctx.r11.s64 + 732;
	// addi r9,r11,735
	ctx.r9.s64 = ctx.r11.s64 + 735;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lwzx r5,r7,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// b 0x827152a4
	goto loc_827152A4;
loc_82715294:
	// lwz r11,2904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2904);
	// lwz r10,2916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2916);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_827152A4:
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r29,r21
	r29.u64 = r21.u64;
	// lis r20,2
	r20.s64 = 131072;
	// addi r23,r11,-30440
	r23.s64 = ctx.r11.s64 + -30440;
	// addi r27,r10,-9920
	r27.s64 = ctx.r10.s64 + -9920;
	// addi r25,r9,-27072
	r25.s64 = ctx.r9.s64 + -27072;
loc_827152C8:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x827152f0
	if (ctx.cr6.lt) goto loc_827152F0;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2116(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2116);
	// bl 0x82769308
	ctx.lr = 0x827152EC;
	sub_82769308(ctx, base);
	// b 0x82715318
	goto loc_82715318;
loc_827152F0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8271530c
	if (!ctx.cr6.eq) goto loc_8271530C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x82711470
	ctx.lr = 0x82715308;
	sub_82711470(ctx, base);
	// b 0x82715318
	goto loc_82715318;
loc_8271530C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// bl 0x82712898
	ctx.lr = 0x82715318;
	sub_82712898(ctx, base);
loc_82715318:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82715710
	if (!ctx.cr6.eq) goto loc_82715710;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x827626a8
	ctx.lr = 0x82715348;
	sub_827626A8(ctx, base);
	// lwz r9,15504(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// beq cr6,0x82715388
	if (ctx.cr6.eq) goto loc_82715388;
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r7.u16);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// b 0x827153d8
	goto loc_827153D8;
loc_82715388:
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + r20.u64;
	// srawi r9,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 18;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_827153D8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82762810
	ctx.lr = 0x82715404;
	sub_82762810(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82715710
	if (!ctx.cr6.eq) goto loc_82715710;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x82715420
	if (!ctx.cr6.eq) goto loc_82715420;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
loc_82715420:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x827152c8
	if (ctx.cr6.lt) goto loc_827152C8;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r28,r10,-26816
	r28.s64 = ctx.r10.s64 + -26816;
	// addi r27,r9,-5824
	r27.s64 = ctx.r9.s64 + -5824;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82715470
	if (ctx.cr6.lt) goto loc_82715470;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// bl 0x82769308
	ctx.lr = 0x8271546C;
	sub_82769308(ctx, base);
	// b 0x82715498
	goto loc_82715498;
loc_82715470:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8271548c
	if (!ctx.cr6.eq) goto loc_8271548C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82711470
	ctx.lr = 0x82715488;
	sub_82711470(ctx, base);
	// b 0x82715498
	goto loc_82715498;
loc_8271548C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82712898
	ctx.lr = 0x82715498;
	sub_82712898(ctx, base);
loc_82715498:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82715710
	if (!ctx.cr6.eq) goto loc_82715710;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827626a8
	ctx.lr = 0x827154C0;
	sub_827626A8(ctx, base);
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715500
	if (ctx.cr6.eq) goto loc_82715500;
	// lwz r9,1760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r6.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,300(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lwz r4,1760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// mullw r11,r6,r3
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82715554
	goto loc_82715554;
loc_82715500:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + r20.u64;
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82715554:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,4
	ctx.r8.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82715590
	if (ctx.cr6.eq) goto loc_82715590;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82762810
	ctx.lr = 0x8271558C;
	sub_82762810(ctx, base);
	// b 0x827155a0
	goto loc_827155A0;
loc_82715590:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// bl 0x82762810
	ctx.lr = 0x827155A0;
	sub_82762810(ctx, base);
loc_827155A0:
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82715710
	if (!ctx.cr6.eq) goto loc_82715710;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r26,24
	r29.s64 = r26.s64 + 24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x827155dc
	if (ctx.cr6.lt) goto loc_827155DC;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,2120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// bl 0x82769308
	ctx.lr = 0x827155D8;
	sub_82769308(ctx, base);
	// b 0x82715604
	goto loc_82715604;
loc_827155DC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x827155f8
	if (!ctx.cr6.eq) goto loc_827155F8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82711470
	ctx.lr = 0x827155F4;
	sub_82711470(ctx, base);
	// b 0x82715604
	goto loc_82715604;
loc_827155F8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82712898
	ctx.lr = 0x82715604;
	sub_82712898(ctx, base);
loc_82715604:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82715710
	if (!ctx.cr6.eq) goto loc_82715710;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827626a8
	ctx.lr = 0x8271562C;
	sub_827626A8(ctx, base);
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271566c
	if (ctx.cr6.eq) goto loc_8271566C;
	// lwz r9,1760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r6.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,1760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x827156c0
	goto loc_827156C0;
loc_8271566C:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r5,r8,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r20
	ctx.r3.u64 = ctx.r4.u64 + r20.u64;
	// srawi r11,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 18;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r5.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,1760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_827156C0:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,5
	ctx.r8.s64 = 5;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82715700
	if (ctx.cr6.eq) goto loc_82715700;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// bl 0x82762810
	ctx.lr = 0x827156F8;
	sub_82762810(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd8
	return;
loc_82715700:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// bl 0x82762810
	ctx.lr = 0x82715710;
	sub_82762810(ctx, base);
loc_82715710:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_827384E0) {
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
	// bl 0x826a1cbc
	ctx.lr = 0x827384E8;
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,112
	ctx.r11.s64 = 112;
	// vspltisw128 v61,7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x7)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vspltisw128 v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x2)));
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// vspltisw128 v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x3)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltisw128 v58,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0x4)));
	// lvx128 v57,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r7,-32672
	ctx.r4.s64 = ctx.r7.s64 + -32672;
	// vcsxwfp128 v56,v57,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// lvx128 v55,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v55,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v12,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,80
	r31.s64 = 80;
	// vaddsws v10,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r30,-176
	r30.s64 = -176;
	// vsubsws v6,v0,v12
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// li r29,48
	r29.s64 = 48;
	// lvx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v11,v53,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// lvx128 v0,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v10,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v12,r5,r31
	ea = (ctx.r5.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v50,v6,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vaddsws v5,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v62,r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v4,v0,v12
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// lvx128 v51,r5,r29
	ea = (ctx.r5.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v12,v51,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// vmulfp128 v9,v56,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v13.f32)));
	// li r7,-192
	ctx.r7.s64 = -192;
	// vmulfp128 v8,v56,v62
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v62.f32)));
	// li r5,32
	ctx.r5.s64 = 32;
	// vmulfp128 v7,v54,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vspltisw128 v49,8
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_set1_epi32(int(0x8)));
	// vcsxwfp128 v48,v5,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vspltisw128 v45,14
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_set1_epi32(int(0xE)));
	// vcsxwfp128 v47,v4,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// lvx128 v63,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v6,v54,v62
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v10,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// vmulfp128 v46,v52,v63
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v44,v50,v63
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v63.f32)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,-96
	ctx.r3.s64 = -96;
	// vmaddfp v9,v11,v10,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v11,v11,v13,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v7,v12,v10,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v43,v48,v63
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v42,v47,v63
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v6,v12,v13,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v13,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpsxws128 v12,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v44.f32)));
	// vctsxs v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vctsxs v8,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v11,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpsxws128 v10,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v42.f32)));
	// vctsxs v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vaddsws v3,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v1,v12,v8
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v2,v13,v9
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v30,v11,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v29,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v27,v10,v6
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v6.s32[0]);
	v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v6.s32[1]);
	v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v6.s32[2]);
	v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v6.s32[3]);
	v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v26,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v25,v11,v7
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v7.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v7.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v7.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v7.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v41,v31,v61
	ctx.v41.s32[0] = v31.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v41.s32[1] = v31.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v41.s32[2] = v31.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v41.s32[3] = v31.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vaddsws v24,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v22,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r7,64
	ctx.r7.s64 = 64;
	// vaddsws v21,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r6,16
	ctx.r6.s64 = 16;
	// vaddsws v20,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v4,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v19,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r5,-112
	ctx.r5.s64 = -112;
	// vsraw128 v40,v26,v61
	ctx.v40.s32[0] = v26.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v40.s32[1] = v26.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v40.s32[2] = v26.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v40.s32[3] = v26.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// li r3,-128
	ctx.r3.s64 = -128;
	// vsraw128 v39,v24,v61
	ctx.v39.s32[0] = v24.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v39.s32[1] = v24.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v39.s32[2] = v24.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v39.s32[3] = v24.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// lvx128 v7,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v38,v23,v61
	ctx.v38.s32[0] = v23.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v38.s32[1] = v23.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v38.s32[2] = v23.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v38.s32[3] = v23.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// lvx128 v0,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v36,v21,v61
	ctx.v36.s32[0] = v21.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v36.s32[1] = v21.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v36.s32[2] = v21.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v36.s32[3] = v21.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// li r7,-80
	ctx.r7.s64 = -80;
	// vsraw128 v34,v20,v61
	ctx.v34.s32[0] = v20.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v34.s32[1] = v20.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v34.s32[2] = v20.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v34.s32[3] = v20.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vmrghw128 v35,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vsraw128 v37,v22,v61
	ctx.v37.s32[0] = v22.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v37.s32[1] = v22.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v37.s32[2] = v22.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v37.s32[3] = v22.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vmrglw128 v33,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vsraw128 v32,v19,v61
	ctx.v32.s32[0] = v19.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v32.s32[1] = v19.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v32.s32[2] = v19.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v32.s32[3] = v19.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// li r6,-64
	ctx.r6.s64 = -64;
	// vmrglw128 v63,v39,v36
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvx128 v3,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v62,v38,v34
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// lvx128 v2,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v56,v39,v36
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvx128 v1,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v61,v37,v32
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// li r5,-48
	ctx.r5.s64 = -48;
	// vmrglw128 v57,v37,v32
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// lvx128 v31,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v55,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// li r3,-32
	ctx.r3.s64 = -32;
	// vmrghw128 v53,v38,v34
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// li r7,-16
	ctx.r7.s64 = -16;
	// vmrglw128 v54,v35,v61
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// lvx128 v29,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v52,v33,v57
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// lvx128 v28,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v10,v55,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vmrghw128 v51,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v50,v33,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// lvx128 v27,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v11,v54,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vmrglw128 v48,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrghw128 v47,v35,v61
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vcsxwfp128 v13,v52,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v9,v51,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v46,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vcsxwfp128 v12,v50,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v30,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v48,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// li r6,48
	ctx.r6.s64 = 48;
	// vslw128 v18,v47,v49
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v47.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v49.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r5,128
	ctx.r5.s64 = 128;
	// vslw128 v6,v46,v49
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v46.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v49.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r3,192
	ctx.r3.s64 = 192;
	// vaddsws v7,v18,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp v26,v11,v10
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vaddsws v5,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp v25,v13,v9
	simde_mm_store_ps(v25.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsubsws v7,v7,v6
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v6.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v6.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v6.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v6.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddfp v24,v8,v12
	simde_mm_store_ps(v24.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v4,v26,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v3,v25,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(v25.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v2,v24,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v1,v11,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v31,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v6,v29,v13,v4
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v29.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v9,v30,v9,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v8,v28,v8,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v27,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcfpsxws128 v44,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v43,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v42,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v41,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v40,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v39,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vsraw128 v0,v44,v59
	ctx.v0.s32[0] = ctx.v44.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v44.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v44.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v44.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v13,v43,v59
	ctx.v13.s32[0] = ctx.v43.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v43.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v43.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v43.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsraw128 v10,v40,v59
	ctx.v10.s32[0] = ctx.v40.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v40.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v40.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v40.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// lvx128 v4,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v9,v39,v59
	ctx.v9.s32[0] = ctx.v39.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v39.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v39.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v39.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// li r7,224
	ctx.r7.s64 = 224;
	// vsraw128 v12,v41,v59
	ctx.v12.s32[0] = ctx.v41.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v12.s32[1] = ctx.v41.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v12.s32[2] = ctx.v41.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v12.s32[3] = ctx.v41.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// li r6,160
	ctx.r6.s64 = 160;
	// vsraw128 v11,v42,v59
	ctx.v11.s32[0] = ctx.v42.s32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v42.s32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v42.s32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v42.s32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vsubsws v17,v0,v10
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v10.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v10.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v10.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v10.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v16,v13,v9
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v9.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v9.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v9.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v9.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v8,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v13,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vor v10,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vaddsws v15,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v7,v7,v12
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v12,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v0,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v13,v13,v10
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v11,v5,v11
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v10,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vslw128 v14,v0,v58
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v58.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v6,v0,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v5,v13,v58
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v58.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v3,v13,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v2,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v6,v6,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v1,v11,v9
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v3,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v0,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v29,v6,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v0,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vsubsws v28,v12,v8
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v8.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v8.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v8.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v8.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v38,v30,v45
	ctx.v38.s32[0] = v30.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v38.s32[1] = v30.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v38.s32[2] = v30.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v38.s32[3] = v30.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// vaddsws v27,v11,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v26,v0,v59
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v59.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsraw128 v37,v2,v45
	ctx.v37.s32[0] = ctx.v2.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v37.s32[1] = ctx.v2.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v37.s32[2] = ctx.v2.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v37.s32[3] = ctx.v2.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// stvx128 v38,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v25,v27,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v36,v1,v45
	ctx.v36.s32[0] = ctx.v1.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v36.s32[1] = ctx.v1.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v36.s32[2] = ctx.v1.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v36.s32[3] = ctx.v1.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// vaddsws v24,v13,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v35,v28,v45
	ctx.v35.s32[0] = v28.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v35.s32[1] = v28.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v35.s32[2] = v28.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v35.s32[3] = v28.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// stvx128 v37,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v0,v25,v49
	ctx.v0.s32[0] = v25.s32[0] >> (ctx.v49.u8[0] & 0x1F);
	ctx.v0.s32[1] = v25.s32[1] >> (ctx.v49.u8[4] & 0x1F);
	ctx.v0.s32[2] = v25.s32[2] >> (ctx.v49.u8[8] & 0x1F);
	ctx.v0.s32[3] = v25.s32[3] >> (ctx.v49.u8[12] & 0x1F);
	// stvx128 v36,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v23,v24,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v35,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v22,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v21,v10,v0
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v0.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v0.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v0.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v0.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v0,v23,v49
	ctx.v0.s32[0] = v23.s32[0] >> (ctx.v49.u8[0] & 0x1F);
	ctx.v0.s32[1] = v23.s32[1] >> (ctx.v49.u8[4] & 0x1F);
	ctx.v0.s32[2] = v23.s32[2] >> (ctx.v49.u8[8] & 0x1F);
	ctx.v0.s32[3] = v23.s32[3] >> (ctx.v49.u8[12] & 0x1F);
	// vsraw128 v34,v22,v45
	ctx.v34.s32[0] = v22.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v34.s32[1] = v22.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v34.s32[2] = v22.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v34.s32[3] = v22.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// vsraw128 v33,v21,v45
	ctx.v33.s32[0] = v21.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v33.s32[1] = v21.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v33.s32[2] = v21.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v33.s32[3] = v21.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// vaddsws v20,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v19,v7,v0
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v0.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v0.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v0.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v0.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvx128 v34,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v32,v20,v45
	ctx.v32.s32[0] = v20.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v32.s32[1] = v20.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v32.s32[2] = v20.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v32.s32[3] = v20.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// vsraw128 v63,v19,v45
	ctx.v63.s32[0] = v19.s32[0] >> (ctx.v45.u8[0] & 0x1F);
	ctx.v63.s32[1] = v19.s32[1] >> (ctx.v45.u8[4] & 0x1F);
	ctx.v63.s32[2] = v19.s32[2] >> (ctx.v45.u8[8] & 0x1F);
	ctx.v63.s32[3] = v19.s32[3] >> (ctx.v45.u8[12] & 0x1F);
	// stvx128 v32,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8278D4B8) {
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
	ctx.lr = 0x8278D4C0;
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
	// ble cr6,0x8278d628
	if (!ctx.cr6.gt) goto loc_8278D628;
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
loc_8278D548:
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
	// bdnz 0x8278d548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278D548;
loc_8278D628:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8278d6ac
	if (!ctx.cr6.lt) goto loc_8278D6AC;
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
loc_8278D658:
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
	// stbx r27,r24,r11
	REX_STORE_U8(r24.u32 + ctx.r11.u32, r27.u8);
	// stbx r5,r23,r11
	REX_STORE_U8(r23.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r8,r22,r11
	REX_STORE_U8(r22.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8278d658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278D658;
loc_8278D6AC:
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
	// bge cr6,0x8278ded4
	if (!ctx.cr6.lt) goto loc_8278DED4;
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
loc_8278D6F8:
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
	// ble cr6,0x8278dc24
	if (!ctx.cr6.gt) goto loc_8278DC24;
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
loc_8278D76C:
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
	// bdnz 0x8278d76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278D76C;
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
loc_8278DC24:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8278ddfc
	if (!ctx.cr6.lt) goto loc_8278DDFC;
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
loc_8278DC4C:
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
	// srawi r22,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r22.s64 = r30.s32 >> 2;
	// stbx r6,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r30,r3,1,15,30
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// srawi r23,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	r23.s64 = r23.s32 >> 2;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// subf r6,r31,r14
	ctx.r6.u64 = r14.u64 - r31.u64;
	// stbx r29,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r29.u8);
	// addi r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 3;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
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
	// lwz r5,-368(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lwz r30,-380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// stbx r28,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r28.u8);
	// addi r8,r14,3
	ctx.r8.s64 = r14.s64 + 3;
	// stbx r6,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// lwz r8,-376(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// stbx r18,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r18.u8);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// stbx r4,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r29,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, r29.u8);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stbx r3,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8278dc4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278DC4C;
	// lwz r28,-364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
loc_8278DDFC:
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
	// bne 0x8278d6f8
	if (!ctx.cr0.eq) goto loc_8278D6F8;
loc_8278DED4:
	// rlwinm r11,r6,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278df4c
	if (!ctx.cr6.gt) goto loc_8278DF4C;
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
loc_8278DF14:
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
	// bdnz 0x8278df14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278DF14;
loc_8278DF4C:
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8278df88
	if (!ctx.cr6.lt) goto loc_8278DF88;
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
loc_8278DF70:
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
	// bdnz 0x8278df70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278DF70;
loc_8278DF88:
	// lbzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r30.u32);
	// stbx r11,r29,r31
	REX_STORE_U8(r29.u32 + r31.u32, ctx.r11.u8);
	// stbx r11,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r29,r14
	REX_STORE_U8(r29.u32 + r14.u32, ctx.r11.u8);
	// b 0x826a1cd0
	return;
}

