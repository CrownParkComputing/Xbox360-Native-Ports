#include "hydrothunder_funcs.31.h"

DEFINE_REX_FUNC(sub_82121A40) {
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
	ctx.lr = 0x82121A48;
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
	// b 0x82121a94
	goto loc_82121A94;
loc_82121A70:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x82121A80;
	sub_82120780(ctx, base);
	// rlwinm. r28,r3,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82121a90
	if (ctx.cr0.eq) goto loc_82121A90;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82121a94
	goto loc_82121A94;
loc_82121A90:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_82121A94:
	// lbz r11,69(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82121a70
	if (ctx.cr0.eq) goto loc_82121A70;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x82121af4
	if (ctx.cr0.eq) goto loc_82121AF4;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82121aec
	if (!ctx.cr6.eq) goto loc_82121AEC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82121AC8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82121b58
	ctx.lr = 0x82121AD8;
	sub_82121B58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82121b48
	goto loc_82121B48;
loc_82121AEC:
	// bl 0x82121d40
	ctx.lr = 0x82121AF0;
	sub_82121D40(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82121AF4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82121B00;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82121b14
	if (!ctx.cr0.lt) goto loc_82121B14;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82121ac8
	goto loc_82121AC8;
loc_82121B14:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r25,28
	ctx.r3.s64 = r25.s64 + 28;
	// bl 0x82120ac0
	ctx.lr = 0x82121B24;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82121B34;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82121B3C;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82121B48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8212E4F8) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,6116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e594
	if (ctx.cr6.eq) goto loc_8212E594;
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x822f6280
	ctx.lr = 0x8212E528;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212e538
	if (ctx.cr0.eq) goto loc_8212E538;
	// bl 0x8216c170
	ctx.lr = 0x8212E534;
	sub_8216C170(ctx, base);
	// b 0x8212e53c
	goto loc_8212E53C;
loc_8212E538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212E53C:
	// lwz r11,6116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6116);
	// stw r3,240(r30)
	REX_STORE_U32(r30.u32 + 240, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e594
	if (ctx.cr6.eq) goto loc_8212E594;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23052
	ctx.r4.s64 = ctx.r9.s64 + -23052;
	// lfs f0,680(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,684(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 684);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 584);
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212E594:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8212E5A4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212e5d0
	if (ctx.cr0.eq) goto loc_8212E5D0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-3944
	ctx.r10.s64 = ctx.r10.s64 + -3944;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8212e5d4
	goto loc_8212E5D4;
loc_8212E5D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8212E5D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82136970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x82136978;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821369A0;
	sub_8212DD28(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x821369AC;
	sub_82135FB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821369BC;
	sub_826A1E70(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// addi r7,r11,27184
	ctx.r7.s64 = ctx.r11.s64 + 27184;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,64(r27)
	REX_STORE_U8(r27.u32 + 64, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,65(r27)
	REX_STORE_U8(r27.u32 + 65, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,66(r27)
	REX_STORE_U8(r27.u32 + 66, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stb r11,67(r27)
	REX_STORE_U8(r27.u32 + 67, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,72(r27)
	REX_STORE_U32(r27.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,76(r27)
	REX_STORE_U32(r27.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82139a08
	ctx.lr = 0x82136A24;
	sub_82139A08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8213C040) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213C048;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8213bce8
	ctx.lr = 0x8213C05C;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// lwz r29,24(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8213c958
	ctx.lr = 0x8213C078;
	sub_8213C958(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8213c09c
	if (ctx.cr6.eq) goto loc_8213C09C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-18332
	ctx.r4.s64 = ctx.r11.s64 + -18332;
	// addi r3,r10,-17984
	ctx.r3.s64 = ctx.r10.s64 + -17984;
	// li r5,99
	ctx.r5.s64 = 99;
	// bl 0x821231d0
	ctx.lr = 0x8213C09C;
	sub_821231D0(ctx, base);
loc_8213C09C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213bce8
	ctx.lr = 0x8213C0A4;
	sub_8213BCE8(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213c958
	ctx.lr = 0x8213C0BC;
	sub_8213C958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213c0ec
	if (!ctx.cr6.eq) goto loc_8213C0EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213d048
	ctx.lr = 0x8213C0E8;
	sub_8213D048(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8213C0EC:
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82142770) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214280c
	if (ctx.cr6.eq) goto loc_8214280C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821427A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214280c
	if (ctx.cr0.eq) goto loc_8214280C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821427D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821427f8
	if (!ctx.cr0.lt) goto loc_821427F8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-17048
	ctx.r4.s64 = ctx.r11.s64 + -17048;
	// addi r3,r10,-16520
	ctx.r3.s64 = ctx.r10.s64 + -16520;
	// li r5,982
	ctx.r5.s64 = 982;
	// bl 0x821231d0
	ctx.lr = 0x821427F8;
	sub_821231D0(ctx, base);
loc_821427F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82142810
	goto loc_82142810;
loc_8214280C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82142810:
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

DEFINE_REX_FUNC(sub_82148440) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8214848c
	goto loc_8214848C;
loc_8214846C:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8214848C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214846c
	if (!ctx.cr6.eq) goto loc_8214846C;
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

DEFINE_REX_FUNC(sub_8214BF38) {
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
	ctx.lr = 0x8214BF40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,1136
	r31.s64 = ctx.r11.s64 + 1136;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8214bfb0
	if (!ctx.cr6.gt) goto loc_8214BFB0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// bgt cr6,0x8214bf7c
	if (ctx.cr6.gt) goto loc_8214BF7C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8214BF7C:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8214bfb0
	if (!ctx.cr6.gt) goto loc_8214BFB0;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822f6338
	ctx.lr = 0x8214BF8C;
	sub_822F6338(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x8214BFA0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8214BFA8;
	sub_8269CE98(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8214BFB0:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bl 0x8214c038
	ctx.lr = 0x8214BFB8;
	sub_8214C038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214bfd0
	if (ctx.cr0.eq) goto loc_8214BFD0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8214BFD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82151118) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8215115c
	if (!ctx.cr6.lt) goto loc_8215115C;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8215115c
	if (ctx.cr0.eq) goto loc_8215115C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8215115C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82152B60) {
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
	ctx.lr = 0x82152B68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823edc98
	ctx.lr = 0x82152B84;
	sub_823EDC98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r28,80(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823edc98
	ctx.lr = 0x82152B98;
	sub_823EDC98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// addi r27,r11,-11080
	r27.s64 = ctx.r11.s64 + -11080;
	// blt cr6,0x82152bbc
	if (ctx.cr6.lt) goto loc_82152BBC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,-10796
	ctx.r3.s64 = ctx.r11.s64 + -10796;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x821231d0
	ctx.lr = 0x82152BBC;
	sub_821231D0(ctx, base);
loc_82152BBC:
	// mulli r11,r31,104
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(104));
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82152bf8
	if (ctx.cr0.eq) goto loc_82152BF8;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x82152c14
	if (ctx.cr6.eq) goto loc_82152C14;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82152c14
	if (ctx.cr6.eq) goto loc_82152C14;
loc_82152BF8:
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpld cr6,r28,r10
	ctx.cr6.compare<uint64_t>(r28.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x82152c14
	if (ctx.cr6.eq) goto loc_82152C14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82152e68
	ctx.lr = 0x82152C10;
	sub_82152E68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82152C14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82152cc0
	if (ctx.cr0.eq) goto loc_82152CC0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// blt cr6,0x82152c9c
	if (ctx.cr6.lt) goto loc_82152C9C;
	// beq cr6,0x82152c64
	if (ctx.cr6.eq) goto loc_82152C64;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// blt cr6,0x82152c48
	if (ctx.cr6.lt) goto loc_82152C48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// li r5,483
	ctx.r5.s64 = 483;
	// bl 0x821231d0
	ctx.lr = 0x82152C44;
	sub_821231D0(ctx, base);
	// b 0x82152cc0
	goto loc_82152CC0;
loc_82152C48:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152c5c
	if (!ctx.cr6.eq) goto loc_82152C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a2eb8
	ctx.lr = 0x82152C5C;
	sub_821A2EB8(ctx, base);
loc_82152C5C:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82152c7c
	goto loc_82152C7C;
loc_82152C64:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82152c78
	if (!ctx.cr6.eq) goto loc_82152C78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a2eb8
	ctx.lr = 0x82152C78;
	sub_821A2EB8(ctx, base);
loc_82152C78:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82152C7C:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// std r28,16(r31)
	REX_STORE_U64(r31.u32 + 16, r28.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// bl 0x82152dd0
	ctx.lr = 0x82152C98;
	sub_82152DD0(ctx, base);
	// b 0x82152cc0
	goto loc_82152CC0;
loc_82152C9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x82152e68
	ctx.lr = 0x82152CB4;
	sub_82152E68(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r28,16(r31)
	REX_STORE_U64(r31.u32 + 16, r28.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_82152CC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215CEC0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// ld r11,2576(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 2576);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D660) {
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
	ctx.lr = 0x8215D668;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,18704
	r29.s64 = ctx.r11.s64 + 18704;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8215d694
	if (!ctx.cr6.lt) goto loc_8215D694;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215d5d0
	ctx.lr = 0x8215D690;
	sub_8215D5D0(ctx, base);
	// b 0x8215d6d0
	goto loc_8215D6D0;
loc_8215D694:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215D6A8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8215d6a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215D6A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215D6D0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215d6e0
	if (!ctx.cr0.eq) goto loc_8215D6E0;
loc_8215D6D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215d9ac
	goto loc_8215D9AC;
loc_8215D6E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8215d99c
	if (ctx.cr6.gt) goto loc_8215D99C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d728
	if (ctx.cr6.eq) goto loc_8215D728;
	// bdz 0x8215d714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8215D714;
	// bdz 0x8215d730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8215D730;
	// bdz 0x8215d78c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8215D78C;
	// bdz 0x8215d7c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8215D7C4;
	// bdz 0x8215d820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8215D820;
	// bdz 0x8215d8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8215D8AC;
	// b 0x8215d95c
	goto loc_8215D95C;
loc_8215D714:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e6b8
	ctx.lr = 0x8215D720;
	sub_8215E6B8(ctx, base);
loc_8215D720:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d6d8
	if (ctx.cr0.eq) goto loc_8215D6D8;
loc_8215D728:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215d9ac
	goto loc_8215D9AC;
loc_8215D730:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8215d74c
	if (!ctx.cr6.lt) goto loc_8215D74C;
loc_8215D73C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d5d0
	ctx.lr = 0x8215D748;
	sub_8215D5D0(ctx, base);
	// b 0x8215d720
	goto loc_8215D720;
loc_8215D74C:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r30,7
	ctx.r9.s64 = r30.s64 + 7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215D760:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8215d760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215D760;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8215D77C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8215d720
	goto loc_8215D720;
loc_8215D78C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8215d73c
	if (ctx.cr6.lt) goto loc_8215D73C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,8(r30)
	REX_STORE_U8(r30.u32 + 8, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8215d720
	goto loc_8215D720;
loc_8215D7C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d9b8
	ctx.lr = 0x8215D7CC;
	sub_8215D9B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d6d8
	if (ctx.cr0.eq) goto loc_8215D6D8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x8215D7DC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8215d7fc
	if (ctx.cr0.eq) goto loc_8215D7FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215D7F4;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8215d800
	goto loc_8215D800;
loc_8215D7FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215D800:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82120c08
	ctx.lr = 0x8215D81C;
	sub_82120C08(ctx, base);
	// b 0x8215d728
	goto loc_8215D728;
loc_8215D820:
	// li r29,0
	r29.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e6b8
	ctx.lr = 0x8215D834;
	sub_8215E6B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d6d8
	if (ctx.cr0.eq) goto loc_8215D6D8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8215D844;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215d85c
	if (ctx.cr0.eq) goto loc_8215D85C;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// b 0x8215d860
	goto loc_8215D860;
loc_8215D85C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8215D860:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215dc10
	ctx.lr = 0x8215D870;
	sub_8215DC10(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8215d728
	if (!ctx.cr6.gt) goto loc_8215D728;
loc_8215D87C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8215d660
	ctx.lr = 0x8215D890;
	sub_8215D660(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d6d8
	if (ctx.cr0.eq) goto loc_8215D6D8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x8215d87c
	if (ctx.cr6.lt) goto loc_8215D87C;
	// b 0x8215d728
	goto loc_8215D728;
loc_8215D8AC:
	// li r29,0
	r29.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215e6b8
	ctx.lr = 0x8215D8C0;
	sub_8215E6B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d6d8
	if (ctx.cr0.eq) goto loc_8215D6D8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8215D8D0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215d8e0
	if (ctx.cr0.eq) goto loc_8215D8E0;
	// bl 0x8215dd30
	ctx.lr = 0x8215D8DC;
	sub_8215DD30(ctx, base);
	// b 0x8215d8e4
	goto loc_8215D8E4;
loc_8215D8E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8215D8E4:
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8215d728
	if (!ctx.cr6.gt) goto loc_8215D728;
loc_8215D8F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d9b8
	ctx.lr = 0x8215D8FC;
	sub_8215D9B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d6d8
	if (ctx.cr0.eq) goto loc_8215D6D8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82120600
	ctx.lr = 0x8215D910;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8215ddc0
	ctx.lr = 0x8215D91C;
	sub_8215DDC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d660
	ctx.lr = 0x8215D928;
	sub_8215D660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x8215D944;
	sub_82120AC0(ctx, base);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne 0x8215d6d8
	if (!ctx.cr0.eq) goto loc_8215D6D8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x8215d8f4
	if (ctx.cr6.lt) goto loc_8215D8F4;
	// b 0x8215d728
	goto loc_8215D728;
loc_8215D95C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8215d73c
	if (ctx.cr6.lt) goto loc_8215D73C;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r30,7
	ctx.r10.s64 = r30.s64 + 7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8215D97C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8215d97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215D97C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// b 0x8215d77c
	goto loc_8215D77C;
loc_8215D99C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18752
	ctx.r4.s64 = ctx.r11.s64 + 18752;
	// bl 0x8215d5d0
	ctx.lr = 0x8215D9AC;
	sub_8215D5D0(ctx, base);
loc_8215D9AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82179130) {
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
	ctx.lr = 0x82179138;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r29,0
	r29.s64 = 0;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821791b4
	if (!ctx.cr0.gt) goto loc_821791B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r25,r11,28384
	r25.s64 = ctx.r11.s64 + 28384;
loc_8217916C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r30,r28,r11
	r30.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x82179180;
	sub_8215F338(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x8215f2d0
	ctx.lr = 0x82179188;
	sub_8215F2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82179130
	ctx.lr = 0x82179194;
	sub_82179130(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217916c
	if (ctx.cr6.lt) goto loc_8217916C;
loc_821791B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f338
	ctx.lr = 0x821791C4;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,80
	ctx.r3.s64 = r27.s64 + 80;
	// bl 0x8219b7d0
	ctx.lr = 0x821791D0;
	sub_8219B7D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,28400
	ctx.r4.s64 = ctx.r11.s64 + 28400;
	// bl 0x8215f338
	ctx.lr = 0x821791E0;
	sub_8215F338(ctx, base);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82179238
	goto loc_82179238;
loc_821791F0:
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x8217921C;
	sub_8215F338(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82179238:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821791f0
	if (!ctx.cr6.eq) goto loc_821791F0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821808B8) {
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
	ctx.lr = 0x821808C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82120600
	ctx.lr = 0x821808D4;
	sub_82120600(ctx, base);
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
	// lwz r30,20(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82180908
	goto loc_82180908;
loc_821808E4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821808F0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82180900
	if (!ctx.cr0.lt) goto loc_82180900;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82180908
	goto loc_82180908;
loc_82180900:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82180908:
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821808e4
	if (ctx.cr0.eq) goto loc_821808E4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82180940
	if (ctx.cr6.eq) goto loc_82180940;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120780
	ctx.lr = 0x82180930;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82180940
	if (ctx.cr0.lt) goto loc_82180940;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8218094c
	goto loc_8218094C;
loc_82180940:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8218094C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82180960;
	sub_82120AC0(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82180970
	if (ctx.cr6.eq) goto loc_82180970;
	// lbz r27,40(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 40);
loc_82180970:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82188DD0) {
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
	// bl 0x826a1c84
	ctx.lr = 0x82188DD8;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2c8c
	ctx.lr = 0x82188DE0;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r22,r11,12
	r22.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821892a8
	if (!ctx.cr6.gt) goto loc_821892A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r24,r3,256
	r24.s64 = ctx.r3.s64 + 256;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r23,r3,260
	r23.s64 = ctx.r3.s64 + 260;
	// lfs f28,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	f28.f64 = double(temp.f32);
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
	// lfs f12,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r3,224
	r30.s64 = ctx.r3.s64 + 224;
	// lfs f4,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// addi r29,r3,212
	r29.s64 = ctx.r3.s64 + 212;
	// lfs f27,160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	f27.f64 = double(temp.f32);
	// addi r28,r3,228
	r28.s64 = ctx.r3.s64 + 228;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r21,r4,96
	r21.s64 = ctx.r4.s64 + 96;
	// lfs f26,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f26.f64 = double(temp.f32);
	// addi r26,r10,-27152
	r26.s64 = ctx.r10.s64 + -27152;
	// addi r25,r9,-27136
	r25.s64 = ctx.r9.s64 + -27136;
loc_82188E54:
	// lfs f11,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f7,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f5,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f11,f7,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f29,f10,f6
	f29.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fabs f8,f29
	ctx.f8.u64 = f29.u64 & ~0x8000000000000000;
	// fabs f30,f10
	f30.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f11,f8,f30
	ctx.f11.f64 = double(float(ctx.f8.f64 - f30.f64));
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
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f11,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f11,f11,f8,f30
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : f30.f64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82189288
	if (!ctx.cr6.lt) goto loc_82189288;
	// lfs f9,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// addi r20,r1,-288
	r20.s64 = ctx.r1.s64 + -288;
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f9,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,-288(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// addi r19,r1,-308
	r19.s64 = ctx.r1.s64 + -308;
	// lvx128 v63,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,-320
	r18.s64 = ctx.r1.s64 + -320;
	// addi r9,r3,116
	ctx.r9.s64 = ctx.r3.s64 + 116;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// addi r8,r3,108
	ctx.r8.s64 = ctx.r3.s64 + 108;
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// fmsubs f11,f10,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f11.f64)));
	// fmadds f11,f11,f4,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f12.f64)));
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// mfcr r17
	r17.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r17.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r17.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r17.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r17.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r17.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r17.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r17.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r17.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r17.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r17.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r17.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r17.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r17.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r17.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r17.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r17.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r17.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r17.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r17.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r17.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r17.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r17.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r17.u64 |= ctx.cr5.so ? 0x100 : 0;
	r17.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r17.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r17.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r17.u64 |= ctx.cr6.so ? 0x10 : 0;
	r17.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r17.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r17.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r17.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f11,f9,f28
	ctx.f11.f64 = double(float(ctx.f9.f64 * f28.f64));
	// rlwinm r16,r17,27,29,29
	r16.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 27) & 0x4;
	// rlwinm r17,r17,30,29,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 30) & 0x4;
	// or r17,r16,r17
	r17.u64 = r16.u64 | r17.u64;
	// lfsx f7,r6,r17
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r17.u32);
	ctx.f7.f64 = double(temp.f32);
	// fctidz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fnmsubs f11,f11,f4,f9
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f4.f64, -ctx.f9.f64)));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f11,f7,f11,f9
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// stfs f11,-284(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f9,-280(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f11,-276(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// lvx128 v62,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v62,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v62,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vmsum4fp128 v60,v61,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvewx128 v60,r0,r19
	ea = (r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v62,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v61,r0,r18
	ea = (r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,108(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// ble cr6,0x82189038
	if (!ctx.cr6.gt) goto loc_82189038;
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,-272(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// addi r20,r1,-272
	r20.s64 = ctx.r1.s64 + -272;
	// addi r19,r1,-316
	r19.s64 = ctx.r1.s64 + -316;
	// addi r18,r1,-304
	r18.s64 = ctx.r1.s64 + -304;
	// fdivs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// fmadds f9,f9,f12,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f12.f64)));
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r17
	r17.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r17.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r17.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r17.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r17.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r17.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r17.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r17.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r17.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r17.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r17.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r17.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r17.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r17.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r17.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r17.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r17.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r17.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r17.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r17.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r17.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r17.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r17.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r17.u64 |= ctx.cr5.so ? 0x100 : 0;
	r17.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r17.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r17.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r17.u64 |= ctx.cr6.so ? 0x10 : 0;
	r17.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r17.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r17.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r17.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f9,f7,f28
	ctx.f9.f64 = double(float(ctx.f7.f64 * f28.f64));
	// rlwinm r16,r17,27,29,29
	r16.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 27) & 0x4;
	// rlwinm r17,r17,30,29,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 30) & 0x4;
	// or r17,r16,r17
	r17.u64 = r16.u64 | r17.u64;
	// lfsx f6,r6,r17
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + r17.u32);
	ctx.f6.f64 = double(temp.f32);
	// fctidz f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fnmsubs f9,f9,f4,f7
	ctx.f9.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f4.f64, -ctx.f7.f64)));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f9,f6,f9,f7
	ctx.f9.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f7.f64;
	// stfs f9,-268(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f7,-264(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f9,-260(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// lvx128 v61,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmsum4fp128 v59,v60,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v60,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvewx128 v59,r0,r19
	ea = (r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v61,r0,r18
	ea = (r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-316(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmuls f2,f9,f26
	ctx.f2.f64 = double(float(ctx.f9.f64 * f26.f64));
loc_82189038:
	// lfs f9,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r3,120
	ctx.r6.s64 = ctx.r3.s64 + 120;
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// fcmpu cr6,f30,f9
	ctx.cr6.compare(f30.f64, ctx.f9.f64);
	// ble cr6,0x821890f4
	if (!ctx.cr6.gt) goto loc_821890F4;
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r11,256
	r20.s64 = ctx.r11.s64 + 256;
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// addi r19,r1,-256
	r19.s64 = ctx.r1.s64 + -256;
	// fsubs f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 - ctx.f9.f64));
	// stfs f13,-256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// addi r18,r1,-312
	r18.s64 = ctx.r1.s64 + -312;
	// addi r17,r1,-300
	r17.s64 = ctx.r1.s64 + -300;
	// fdivs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// fmadds f9,f9,f12,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f12.f64)));
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r16
	r16.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r16.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r16.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r16.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r16.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r16.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r16.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r16.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r16.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r16.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r16.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r16.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r16.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r16.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r16.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r16.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r16.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r16.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r16.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r16.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r16.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r16.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r16.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r16.u64 |= ctx.cr5.so ? 0x100 : 0;
	r16.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r16.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r16.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r16.u64 |= ctx.cr6.so ? 0x10 : 0;
	r16.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r16.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r16.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r16.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f9,f7,f28
	ctx.f9.f64 = double(float(ctx.f7.f64 * f28.f64));
	// rlwinm r15,r16,27,29,29
	r15.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 27) & 0x4;
	// rlwinm r16,r16,30,29,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 30) & 0x4;
	// or r16,r15,r16
	r16.u64 = r15.u64 | r16.u64;
	// lfsx f6,r20,r16
	temp.u32 = REX_LOAD_U32(r20.u32 + r16.u32);
	ctx.f6.f64 = double(temp.f32);
	// fctidz f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fnmsubs f9,f9,f4,f7
	ctx.f9.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f4.f64, -ctx.f7.f64)));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f9,f6,f9,f7
	ctx.f9.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f7.f64;
	// stfs f9,-252(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f7,-248(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f9,-244(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// lvx128 v61,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v61,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vmsum4fp128 v63,v60,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v60,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvewx128 v63,r0,r18
	ea = (r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v61,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v63,r0,r17
	ea = (r17.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-312(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmuls f3,f9,f26
	ctx.f3.f64 = double(float(ctx.f9.f64 * f26.f64));
loc_821890F4:
	// fmuls f11,f3,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// mfcr r20
	r20.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r20.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r20.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r20.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r20.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r20.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r20.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r20.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r20.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r20.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r20.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r20.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r20.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r20.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r20.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r20.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r20.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r20.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r20.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r20.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r20.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r20.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r20.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r20.u64 |= ctx.cr5.so ? 0x100 : 0;
	r20.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r20.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r20.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r20.u64 |= ctx.cr6.so ? 0x10 : 0;
	r20.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r20.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r20.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r20.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// rlwinm r18,r20,27,29,29
	r18.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// rlwinm r20,r20,30,29,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x4;
	// mfcr r19
	r19.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r19.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r19.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r19.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r19.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r19.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r19.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r19.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r19.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r19.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r19.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r19.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r19.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r19.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r19.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r19.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r19.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r19.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r19.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r19.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r19.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r19.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r19.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r19.u64 |= ctx.cr5.so ? 0x100 : 0;
	r19.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r19.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r19.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r19.u64 |= ctx.cr6.so ? 0x10 : 0;
	r19.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r19.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r19.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r19.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r17,r19,27,29,29
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 27) & 0x4;
	// lfs f5,-308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -308);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r19,r19,30,29,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x4;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fneg f31,f1
	f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f25,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmuls f24,f7,f1
	f24.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f22,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmuls f23,f7,f25
	f23.f64 = double(float(ctx.f7.f64 * f25.f64));
	// or r9,r18,r20
	ctx.r9.u64 = r18.u64 | r20.u64;
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// fneg f21,f25
	f21.u64 = f25.u64 ^ 0x8000000000000000;
	// or r20,r17,r19
	r20.u64 = r17.u64 | r19.u64;
	// addi r19,r11,256
	r19.s64 = ctx.r11.s64 + 256;
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f8,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f1,f31
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// fmuls f8,f24,f4
	ctx.f8.f64 = double(float(f24.f64 * ctx.f4.f64));
	// lfsx f31,r19,r20
	temp.u32 = REX_LOAD_U32(r19.u32 + r20.u32);
	f31.f64 = double(temp.f32);
	// fmuls f24,f23,f4
	f24.f64 = double(float(f23.f64 * ctx.f4.f64));
	// fsel f31,f31,f25,f21
	f31.f64 = f31.f64 >= 0.0 ? f25.f64 : f21.f64;
	// fmuls f8,f8,f22
	ctx.f8.f64 = double(float(ctx.f8.f64 * f22.f64));
	// fmuls f25,f24,f22
	f25.f64 = double(float(f24.f64 * f22.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f5,f25,f5
	ctx.f5.f64 = double(float(f25.f64 * ctx.f5.f64));
	// ble cr6,0x82189210
	if (!ctx.cr6.gt) goto loc_82189210;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
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
	// rlwinm r20,r9,27,29,29
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fneg f9,f7
	ctx.f9.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
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
	// rlwinm r19,r8,27,29,29
	r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fneg f29,f6
	f29.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// rlwinm r10,r8,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fsubs f25,f13,f10
	f25.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// or r9,r20,r9
	ctx.r9.u64 = r20.u64 | ctx.r9.u64;
	// lfs f10,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// or r10,r19,r10
	ctx.r10.u64 = r19.u64 | ctx.r10.u64;
	// addi r20,r11,256
	r20.s64 = ctx.r11.s64 + 256;
	// lfsx f24,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f24.f64 = double(temp.f32);
	// fsel f9,f24,f7,f9
	ctx.f9.f64 = f24.f64 >= 0.0 ? ctx.f7.f64 : ctx.f9.f64;
	// lfsx f7,r20,r10
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f7,f7,f6,f29
	ctx.f7.f64 = ctx.f7.f64 >= 0.0 ? ctx.f6.f64 : f29.f64;
	// fdivs f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 / f25.f64));
	// fdivs f7,f7,f25
	ctx.f7.f64 = double(float(ctx.f7.f64 / f25.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f10,f9,f27
	ctx.f10.f64 = double(float(ctx.f9.f64 * f27.f64));
	// fmuls f9,f7,f27
	ctx.f9.f64 = double(float(ctx.f7.f64 * f27.f64));
loc_82189210:
	// fmuls f6,f8,f2
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f29,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	f29.f64 = double(temp.f32);
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(f30.f64, f29.f64);
	// fmadds f10,f10,f11,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f9,f9,f11,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f5.f64)));
	// ble cr6,0x82189260
	if (!ctx.cr6.gt) goto loc_82189260;
	// fsubs f7,f13,f29
	ctx.f7.f64 = double(float(ctx.f13.f64 - f29.f64));
	// fmr f8,f29
	ctx.f8.f64 = f29.f64;
	// lfs f8,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f7.f64));
	// fdivs f7,f31,f7
	ctx.f7.f64 = double(float(f31.f64 / ctx.f7.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f8,f6,f27
	ctx.f8.f64 = double(float(ctx.f6.f64 * f27.f64));
	// fmuls f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * f27.f64));
loc_82189260:
	// fmuls f8,f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f6,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f7,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f10,f3,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f8.f64)));
	// fmadds f11,f9,f3,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, ctx.f11.f64)));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f10,0(r22)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f11,4(r22)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
loc_82189288:
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82188e54
	if (ctx.cr6.lt) goto loc_82188E54;
loc_821892A8:
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cd8
	ctx.lr = 0x821892B0;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_821C76A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C76B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,736(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 736);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c76e0
	if (ctx.cr0.eq) goto loc_821C76E0;
	// stb r29,736(r4)
	REX_STORE_U8(ctx.r4.u32 + 736, r29.u8);
	// lwz r3,124(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 124);
	// bl 0x82191520
	ctx.lr = 0x821C76D8;
	sub_82191520(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x821e44f0
	ctx.lr = 0x821C76E0;
	sub_821E44F0(ctx, base);
loc_821C76E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C93C0) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822f6280
	ctx.lr = 0x821C93D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c93e4
	if (ctx.cr0.eq) goto loc_821C93E4;
	// bl 0x821c93f8
	ctx.lr = 0x821C93E0;
	sub_821C93F8(ctx, base);
	// b 0x821c93e8
	goto loc_821C93E8;
loc_821C93E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C93E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CAAD8) {
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
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x822f6280
	ctx.lr = 0x821CAAEC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821caafc
	if (ctx.cr0.eq) goto loc_821CAAFC;
	// bl 0x821cab10
	ctx.lr = 0x821CAAF8;
	sub_821CAB10(ctx, base);
	// b 0x821cab00
	goto loc_821CAB00;
loc_821CAAFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CAB00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CD408) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821CD410;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cd588
	if (ctx.cr6.eq) goto loc_821CD588;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cd588
	if (ctx.cr6.eq) goto loc_821CD588;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,164(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lfs f2,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CD484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r7,r10,-7264
	ctx.r7.s64 = ctx.r10.s64 + -7264;
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,6100(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 6100);
	// li r5,-1000
	ctx.r5.s64 = -1000;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r8,-100
	ctx.r8.s64 = -100;
	// li r4,-2602
	ctx.r4.s64 = -2602;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r30,200
	r30.s64 = 200;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r29,63
	r29.s64 = 63;
	// lfs f0,22312(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 22312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-16132(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -16132);
	ctx.f12.f64 = double(temp.f32);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f13,-7264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7264);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// lfs f11,624(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f10,1264(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1264);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f9,1268(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1268);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lfs f8,628(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 628);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lfs f7,632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 632);
	ctx.f7.f64 = double(temp.f32);
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// lfs f6,636(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 636);
	ctx.f6.f64 = double(temp.f32);
	// stw r29,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// lfs f5,640(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 640);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f4,644(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 644);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f4,200(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x821686e0
	ctx.lr = 0x821CD570;
	sub_821686E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CD588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821CD588:
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r8,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// ld r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// std r8,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// ld r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// ld r9,24(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r9,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r9.u64);
	// std r8,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821DE9F0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x821DE9F8;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x821ded30
	ctx.lr = 0x821DEA1C;
	sub_821DED30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ded30
	ctx.lr = 0x821DEA2C;
	sub_821DED30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f31.f64));
	// lfs f9,32(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f4,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f8,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * f31.f64));
	// lfs f6,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f5,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f0,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f2,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f13,f13,f31,f31
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -f31.f64)));
	// lfs f30,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f31,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f12,16(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f7,f7
	f29.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f30,f30,f7
	f30.f64 = double(float(f30.f64 * ctx.f7.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f5,f31,f7
	ctx.f5.f64 = double(float(f31.f64 * ctx.f7.f64));
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmsubs f7,f29,f7,f7
	ctx.f7.f64 = double(float(std::fma(f29.f64, ctx.f7.f64, -ctx.f7.f64)));
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f2,f30,f1
	ctx.f2.f64 = double(float(f30.f64 + ctx.f1.f64));
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f4,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821E9FF0) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,23844
	ctx.r4.s64 = ctx.r10.s64 + 23844;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8215f338
	ctx.lr = 0x821EA014;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821ea038
	if (!ctx.cr6.eq) goto loc_821EA038;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// b 0x821ea03c
	goto loc_821EA03C;
loc_821EA038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EA03C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ECA20) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821eca44
	if (!ctx.cr6.eq) goto loc_821ECA44;
	// lbz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821eca4c
	goto loc_821ECA4C;
loc_821ECA44:
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ECA4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ecab0
	if (ctx.cr0.eq) goto loc_821ECAB0;
	// lbz r9,41(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 41);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ecab0
	if (ctx.cr6.eq) goto loc_821ECAB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stb r10,41(r3)
	REX_STORE_U8(ctx.r3.u32 + 41, ctx.r10.u8);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x821eca84
	if (ctx.cr6.eq) goto loc_821ECA84;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x821eca88
	goto loc_821ECA88;
loc_821ECA84:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_821ECA88:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ecab0
	if (ctx.cr0.eq) goto loc_821ECAB0;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ecab0
	if (ctx.cr6.eq) goto loc_821ECAB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ECAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821ECAB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F4FC0) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f4ff8
	if (ctx.cr6.eq) goto loc_821F4FF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,263
	ctx.r5.s64 = 263;
	// bl 0x821231d0
	ctx.lr = 0x821F4FF8;
	sub_821231D0(ctx, base);
loc_821F4FF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F500C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23152
	ctx.r4.s64 = ctx.r11.s64 + 23152;
	// bl 0x8215f338
	ctx.lr = 0x821F5018;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f5030
	if (!ctx.cr6.eq) goto loc_821F5030;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821f5034
	goto loc_821F5034;
loc_821F5030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F5034:
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

DEFINE_REX_FUNC(sub_821F7E38) {
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
	ctx.lr = 0x821F7E40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r28,r11,-25320
	r28.s64 = ctx.r11.s64 + -25320;
	// blt cr6,0x821f7e68
	if (ctx.cr6.lt) goto loc_821F7E68;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f7e7c
	if (ctx.cr6.lt) goto loc_821F7E7C;
loc_821F7E68:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// li r5,91
	ctx.r5.s64 = 91;
	// bl 0x821231d0
	ctx.lr = 0x821F7E7C;
	sub_821231D0(ctx, base);
loc_821F7E7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821f7ef4
	if (!ctx.cr6.lt) goto loc_821F7EF4;
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x821f7e9c
	if (ctx.cr0.lt) goto loc_821F7E9C;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f7eb0
	if (ctx.cr6.lt) goto loc_821F7EB0;
loc_821F7E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-25252
	ctx.r3.s64 = ctx.r11.s64 + -25252;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821F7EB0;
	sub_821231D0(ctx, base);
loc_821F7EB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r30,28
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r29,28
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(28));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821F7ED4;
	sub_826A1E70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821F7EE4;
	sub_826A1E70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821F7EF4;
	sub_826A1E70(ctx, base);
loc_821F7EF4:
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f7f54
	if (!ctx.cr6.gt) goto loc_821F7F54;
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
	// bgt cr6,0x821f7f20
	if (ctx.cr6.gt) goto loc_821F7F20;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821F7F20:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f7f54
	if (!ctx.cr6.gt) goto loc_821F7F54;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,28
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// bl 0x8269d1d0
	ctx.lr = 0x821F7F34;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,28
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(28));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821F7F44;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821F7F4C;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821F7F54:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822000A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822000B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822000e4
	if (!ctx.cr6.eq) goto loc_822000E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// addi r3,r10,27888
	ctx.r3.s64 = ctx.r10.s64 + 27888;
	// li r5,556
	ctx.r5.s64 = 556;
	// bl 0x821231d0
	ctx.lr = 0x822000E4;
	sub_821231D0(ctx, base);
loc_822000E4:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82200190
	if (!ctx.cr6.gt) goto loc_82200190;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82200100:
	// lwzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82200134
	if (!ctx.cr6.eq) goto loc_82200134;
	// lfs f13,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82200134
	if (!ctx.cr6.eq) goto loc_82200134;
	// lfs f13,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82200138
	if (ctx.cr6.eq) goto loc_82200138;
loc_82200134:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200138:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82200180
	if (ctx.cr0.eq) goto loc_82200180;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82200174
	if (!ctx.cr6.eq) goto loc_82200174;
	// lfs f13,148(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82200174
	if (!ctx.cr6.eq) goto loc_82200174;
	// lfs f13,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82200178
	if (ctx.cr6.eq) goto loc_82200178;
loc_82200174:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200178:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82200194
	if (!ctx.cr0.eq) goto loc_82200194;
loc_82200180:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82200100
	if (ctx.cr6.lt) goto loc_82200100;
loc_82200190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82200194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82206158) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821a6af8
	ctx.lr = 0x8220617C;
	sub_821A6AF8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x8269ce98
	ctx.lr = 0x82206184;
	sub_8269CE98(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821a6af8
	ctx.lr = 0x8220618C;
	sub_821A6AF8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8269ce98
	ctx.lr = 0x82206194;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82120ac0
	ctx.lr = 0x822061A4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82120ac0
	ctx.lr = 0x822061B4;
	sub_82120AC0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x822061C8;
	sub_82120CC8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8269ce98
	ctx.lr = 0x822061D0;
	sub_8269CE98(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30840
	ctx.r11.s64 = ctx.r11.s64 + 30840;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822061ec
	if (ctx.cr0.eq) goto loc_822061EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822061EC;
	sub_8269CE98(ctx, base);
loc_822061EC:
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

DEFINE_REX_FUNC(sub_8220A930) {
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
	// bl 0x8219fd70
	ctx.lr = 0x8220A948;
	sub_8219FD70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a970
	if (ctx.cr6.eq) goto loc_8220A970;
	// lbz r9,656(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 656);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8220a970
	if (!ctx.cr0.eq) goto loc_8220A970;
	// lfs f13,608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8220a974
	goto loc_8220A974;
loc_8220A970:
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_8220A974:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// b 0x8220a9ac
	goto loc_8220A9AC;
loc_8220A9A4:
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8220A9AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220a9a4
	if (!ctx.cr6.eq) goto loc_8220A9A4;
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

DEFINE_REX_FUNC(sub_82212B58) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822e73b8
	ctx.lr = 0x82212B74;
	sub_822E73B8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82212b8c
	if (ctx.cr6.eq) goto loc_82212B8C;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82212b90
	goto loc_82212B90;
loc_82212B8C:
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_82212B90:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,6152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82145710
	ctx.lr = 0x82212BA4;
	sub_82145710(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x82212BC4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x8216bc98
	ctx.lr = 0x82212BD4;
	sub_8216BC98(ctx, base);
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

DEFINE_REX_FUNC(sub_8221A658) {
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
	ctx.lr = 0x8221A660;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 128);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r18,r3,128
	r18.s64 = ctx.r3.s64 + 128;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// addi r28,r3,252
	r28.s64 = ctx.r3.s64 + 252;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// addi r27,r3,360
	r27.s64 = ctx.r3.s64 + 360;
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r26,r3,468
	r26.s64 = ctx.r3.s64 + 468;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r24,r3,160
	r24.s64 = ctx.r3.s64 + 160;
	// addi r23,r3,268
	r23.s64 = ctx.r3.s64 + 268;
	// addi r22,r3,376
	r22.s64 = ctx.r3.s64 + 376;
	// addi r21,r3,484
	r21.s64 = ctx.r3.s64 + 484;
	// li r30,160
	r30.s64 = 160;
	// addi r20,r10,-26848
	r20.s64 = ctx.r10.s64 + -26848;
	// addi r19,r9,-26860
	r19.s64 = ctx.r9.s64 + -26860;
loc_8221A6BC:
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
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
	// rlwinm r17,r11,27,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221A700;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822184a8
	ctx.lr = 0x8221A718;
	sub_822184A8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f11,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221A750;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822184a8
	ctx.lr = 0x8221A768;
	sub_822184A8(ctx, base);
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
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
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
	// bl 0x822184a8
	ctx.lr = 0x8221A7A8;
	sub_822184A8(ctx, base);
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
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822184a8
	ctx.lr = 0x8221A7E8;
	sub_822184A8(ctx, base);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-10
	ctx.xer.ca = r30.u32 > 9;
	r30.s64 = r30.s64 + -10;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bgt 0x8221a6bc
	if (ctx.cr0.gt) goto loc_8221A6BC;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r7,r8,16592
	ctx.r7.s64 = ctx.r8.s64 + 16592;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// addi r3,r31,576
	ctx.r3.s64 = r31.s64 + 576;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f0,16592(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x8221A840;
	sub_8226BF68(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8222AFA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13700
	ctx.r3.s64 = ctx.r11.s64 + -13700;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B238) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822f6280
	ctx.lr = 0x8222B24C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222b25c
	if (ctx.cr0.eq) goto loc_8222B25C;
	// bl 0x8222b270
	ctx.lr = 0x8222B258;
	sub_8222B270(ctx, base);
	// b 0x8222b260
	goto loc_8222B260;
loc_8222B25C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B260:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222CD30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f10,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f10,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f10,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8222cd7c
	if (ctx.cr6.gt) goto loc_8222CD7C;
	// lfs f1,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8222CD7C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822314C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822314C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r3,300
	r30.s64 = ctx.r3.s64 + 300;
	// li r29,2
	r29.s64 = 2;
loc_822314DC:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82232008
	ctx.lr = 0x822314E8;
	sub_82232008(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x822314dc
	if (!ctx.cr0.lt) goto loc_822314DC;
	// addi r30,r31,240
	r30.s64 = r31.s64 + 240;
	// li r29,2
	r29.s64 = 2;
loc_822314F8:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82232008
	ctx.lr = 0x82231504;
	sub_82232008(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x822314f8
	if (!ctx.cr0.lt) goto loc_822314F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x82231514;
	sub_82178388(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231524
	if (ctx.cr0.eq) goto loc_82231524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82231524;
	sub_8269CE98(ctx, base);
loc_82231524:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82234958) {
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
	// bl 0x82236190
	ctx.lr = 0x82234970;
	sub_82236190(ctx, base);
	// lwz r10,664(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 664);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,664(r31)
	REX_STORE_U32(r31.u32 + 664, ctx.r10.u32);
	// beq cr6,0x8223498c
	if (ctx.cr6.eq) goto loc_8223498C;
	// stw r10,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r10.u32);
loc_8223498C:
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

DEFINE_REX_FUNC(sub_82236F08) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x822360f8
	sub_822360F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82237100) {
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x822f6280
	ctx.lr = 0x82237118;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82237170
	if (ctx.cr0.eq) goto loc_82237170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275c30
	ctx.lr = 0x82237128;
	sub_82275C30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-2624
	ctx.r10.s64 = ctx.r10.s64 + -2624;
	// addi r9,r9,-18608
	ctx.r9.s64 = ctx.r9.s64 + -18608;
	// addi r11,r8,-18528
	ctx.r11.s64 = ctx.r8.s64 + -18528;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// addi r4,r10,-18860
	ctx.r4.s64 = ctx.r10.s64 + -18860;
	// bl 0x82120600
	ctx.lr = 0x82237168;
	sub_82120600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82237174
	goto loc_82237174;
loc_82237170:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82237174:
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

DEFINE_REX_FUNC(sub_8223B130) {
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
	// blt cr6,0x8223b160
	if (ctx.cr6.lt) goto loc_8223B160;
	// lwz r11,3876(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3876);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8223b178
	if (ctx.cr6.lt) goto loc_8223B178;
loc_8223B160:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// addi r3,r10,-18176
	ctx.r3.s64 = ctx.r10.s64 + -18176;
	// li r5,86
	ctx.r5.s64 = 86;
	// bl 0x821231d0
	ctx.lr = 0x8223B178;
	sub_821231D0(ctx, base);
loc_8223B178:
	// lwz r10,3884(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3884);
	// mulli r11,r31,336
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(336));
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

DEFINE_REX_FUNC(sub_8223EA50) {
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
	ctx.lr = 0x8223EA58;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3848(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 3848);
	// mulli r11,r3,320
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(320));
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r11,52(r27)
	REX_STORE_U8(r27.u32 + 52, ctx.r11.u8);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-7936
	r30.s64 = ctx.r11.s64 + -7936;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223EAC8;
	sub_8215F338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r26,r11,1008
	r26.s64 = ctx.r11.s64 + 1008;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8223eafc
	if (!ctx.cr6.eq) goto loc_8223EAFC;
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
	// ble 0x8223eafc
	if (!ctx.cr0.gt) goto loc_8223EAFC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8223eb00
	goto loc_8223EB00;
loc_8223EAFC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8223EB00:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-7880
	r29.s64 = ctx.r11.s64 + -7880;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223EB10;
	sub_8215F338(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8226e3f8
	ctx.lr = 0x8223EB1C;
	sub_8226E3F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223EB28;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8223eb54
	if (!ctx.cr6.eq) goto loc_8223EB54;
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
	// ble 0x8223eb54
	if (!ctx.cr0.gt) goto loc_8223EB54;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8223eb58
	goto loc_8223EB58;
loc_8223EB54:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8223EB58:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8223EB60;
	sub_8215F338(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f1b0
	ctx.lr = 0x8223EB68;
	sub_8215F1B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8223EB7C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82120600
	ctx.lr = 0x8223EB8C;
	sub_82120600(ctx, base);
	// addi r7,r27,48
	ctx.r7.s64 = r27.s64 + 48;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r28,3776
	ctx.r4.s64 = r28.s64 + 3776;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226e2a8
	ctx.lr = 0x8223EBA4;
	sub_8226E2A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8223EBB4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8223EBC4;
	sub_82120AC0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822491A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224DDB8) {
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
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8224c840
	ctx.lr = 0x8224DDF4;
	sub_8224C840(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f6,688(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 688);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f5,620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f5.f64 = double(temp.f32);
	// lwz r7,420(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// lfs f12,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f7.f64)));
	// lfs f11,216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f10,f10,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f7.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// rlwinm r3,r9,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// lfsx f9,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f10,f9,f13,f10
	ctx.f10.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
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
	// lfsx f9,r6,r9
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f10,f9,f0,f10
	ctx.f10.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fnmsubs f10,f10,f5,f6
	ctx.f10.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f5.f64, -ctx.f6.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// lfsx f10,r5,r9
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f12,f10,f11,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fmadds f12,f12,f8,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f12,688(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
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
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f11,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f12,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8224df7c
	if (ctx.cr6.eq) goto loc_8224DF7C;
	// lfs f13,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,996(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 996);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8224df64
	if (!ctx.cr6.gt) goto loc_8224DF64;
	// bne 0x8224df7c
	if (!ctx.cr0.eq) goto loc_8224DF7C;
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// addi r11,r31,404
	ctx.r11.s64 = r31.s64 + 404;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224df40
	if (ctx.cr6.lt) goto loc_8224DF40;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224DF40:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,1000
	ctx.r3.s64 = r31.s64 + 1000;
	// bl 0x821ea0e0
	ctx.lr = 0x8224DF4C;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224df5c
	if (ctx.cr0.eq) goto loc_8224DF5C;
	// lwz r3,1004(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1004);
	// bl 0x822fbe20
	ctx.lr = 0x8224DF5C;
	sub_822FBE20(ctx, base);
loc_8224DF5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8224df78
	goto loc_8224DF78;
loc_8224DF64:
	// beq 0x8224df7c
	if (ctx.cr0.eq) goto loc_8224DF7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1000
	ctx.r3.s64 = r31.s64 + 1000;
	// bl 0x821ea168
	ctx.lr = 0x8224DF74;
	sub_821EA168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224DF78:
	// stb r11,996(r31)
	REX_STORE_U8(r31.u32 + 996, ctx.r11.u8);
loc_8224DF7C:
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

DEFINE_REX_FUNC(sub_82267040) {
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
	ctx.lr = 0x82267048;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x8217b760
	ctx.lr = 0x82267060;
	sub_8217B760(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r11,-6728
	ctx.r5.s64 = ctx.r11.s64 + -6728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121610
	ctx.lr = 0x82267074;
	sub_82121610(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82267088
	if (!ctx.cr6.lt) goto loc_82267088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82267088:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8217b818
	ctx.lr = 0x82267090;
	sub_8217B818(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822670bc
	if (!ctx.cr0.eq) goto loc_822670BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822670A8;
	sub_82120AC0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8213d188
	ctx.lr = 0x822670B0;
	sub_8213D188(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822670B4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cf4
	return;
loc_822670BC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8213d118
	ctx.lr = 0x822670C4;
	sub_8213D118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822671e8
	if (ctx.cr0.eq) goto loc_822671E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17568
	ctx.r4.s64 = ctx.r11.s64 + -17568;
	// bl 0x8217ad28
	ctx.lr = 0x822670D8;
	sub_8217AD28(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822671e8
	if (ctx.cr0.eq) goto loc_822671E8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r29,-1
	r29.s64 = -1;
	// addi r27,r11,-6716
	r27.s64 = ctx.r11.s64 + -6716;
	// addi r26,r10,-17560
	r26.s64 = ctx.r10.s64 + -17560;
loc_822670F4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217ad28
	ctx.lr = 0x82267100;
	sub_8217AD28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822671d8
	if (ctx.cr0.eq) goto loc_822671D8;
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822671d8
	if (ctx.cr6.eq) goto loc_822671D8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217b158
	ctx.lr = 0x8226711C;
	sub_8217B158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x82267128;
	sub_82120600(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r31,1
	r31.s64 = 1;
	// bl 0x821235c8
	ctx.lr = 0x8226713C;
	sub_821235C8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.u64 = r29.u64 - ctx.r3.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822671c8
	if (ctx.cr0.eq) goto loc_822671C8;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82120600
	ctx.lr = 0x82267168;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121dd0
	ctx.lr = 0x8226717C;
	sub_82121DD0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82267190
	if (!ctx.cr6.lt) goto loc_82267190;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82267190:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82267194:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82267194
	if (!ctx.cr6.eq) goto loc_82267194;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x822671B8;
	sub_8217A390(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822671C8;
	sub_82120AC0(ctx, base);
loc_822671C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822671D8;
	sub_82120AC0(ctx, base);
loc_822671D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217ae30
	ctx.lr = 0x822671E0;
	sub_8217AE30(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x822670f4
	if (!ctx.cr0.eq) goto loc_822670F4;
loc_822671E8:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82126238
	ctx.lr = 0x822671F8;
	sub_82126238(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17640
	ctx.r4.s64 = ctx.r11.s64 + -17640;
	// bl 0x82121928
	ctx.lr = 0x82267204;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120700
	ctx.lr = 0x82267210;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x82267220;
	sub_82120AC0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82267234
	if (!ctx.cr6.lt) goto loc_82267234;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82267234:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8217bb48
	ctx.lr = 0x8226723C;
	sub_8217BB48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82267268
	if (!ctx.cr0.eq) goto loc_82267268;
	// li r31,0
	r31.s64 = 0;
loc_82267248:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82267258;
	sub_82120AC0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8213d188
	ctx.lr = 0x82267260;
	sub_8213D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822670b4
	goto loc_822670B4;
loc_82267268:
	// li r31,1
	r31.s64 = 1;
	// b 0x82267248
	goto loc_82267248;
}

DEFINE_REX_FUNC(sub_822751B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,768(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lbz r11,705(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 705);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227520c
	if (!ctx.cr6.eq) goto loc_8227520C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82275320
	ctx.lr = 0x82275208;
	sub_82275320(ctx, base);
	// b 0x82275250
	goto loc_82275250;
loc_8227520C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82275230
	if (!ctx.cr6.eq) goto loc_82275230;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275798
	ctx.lr = 0x8227522C;
	sub_82275798(ctx, base);
	// b 0x82275250
	goto loc_82275250;
loc_82275230:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82275250
	if (!ctx.cr6.eq) goto loc_82275250;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275878
	ctx.lr = 0x82275250;
	sub_82275878(ctx, base);
loc_82275250:
	// lbz r11,824(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 824);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82275274
	if (ctx.cr0.eq) goto loc_82275274;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275958
	ctx.lr = 0x82275274;
	sub_82275958(ctx, base);
loc_82275274:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8227529c
	if (!ctx.cr6.gt) goto loc_8227529C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275a38
	ctx.lr = 0x8227529C;
	sub_82275A38(ctx, base);
loc_8227529C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f4,444(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 444);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x8216ad88
	ctx.lr = 0x822752B8;
	sub_8216AD88(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216af20
	ctx.lr = 0x822752CC;
	sub_8216AF20(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// ld r7,320(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// std r7,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r7.u64);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// std r9,800(r31)
	REX_STORE_U64(r31.u32 + 800, ctx.r9.u64);
	// std r8,808(r31)
	REX_STORE_U64(r31.u32 + 808, ctx.r8.u64);
	// stb r10,816(r31)
	REX_STORE_U8(r31.u32 + 816, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_82280070) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82280078;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2ca4
	ctx.lr = 0x82280080;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// addi r28,r11,-7264
	r28.s64 = ctx.r11.s64 + -7264;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f31,22312(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 22312);
	f31.f64 = double(temp.f32);
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x822800cc
	if (!ctx.cr6.lt) goto loc_822800CC;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f0,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822800cc
	if (!ctx.cr6.gt) goto loc_822800CC;
	// lfs f0,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// b 0x822800d0
	goto loc_822800D0;
loc_822800CC:
	// stfs f31,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
loc_822800D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f29,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	f29.f64 = double(temp.f32);
	// bge cr6,0x82280204
	if (!ctx.cr6.lt) goto loc_82280204;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// blt cr6,0x82280204
	if (ctx.cr6.lt) goto loc_82280204;
	// lwz r10,468(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f11,244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r10,320
	ctx.r7.s64 = ctx.r10.s64 + 320;
	// lfs f10,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r8,16592
	ctx.r10.s64 = ctx.r8.s64 + 16592;
	// lfs f0,60(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,1440(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1440);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,1444(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1444);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r6,r29,256
	ctx.r6.s64 = r29.s64 + 256;
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f8,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r29,256
	ctx.r5.s64 = r29.s64 + 256;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lfs f7,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmsubs f12,f10,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f11.f64)));
	// fnmsubs f0,f9,f0,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - f30.f64));
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
	// fsel f0,f12,f30,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// lfsx f12,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f2,f12,f31,f0
	ctx.f2.f64 = ctx.f12.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// fsubs f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
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
	// lfsx f0,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f2,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// lfsx f13,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f8,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// bl 0x8224cae0
	ctx.lr = 0x82280204;
	sub_8224CAE0(ctx, base);
loc_82280204:
	// lfs f0,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,332(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82280408
	if (ctx.cr6.eq) goto loc_82280408;
	// lfs f0,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,256
	ctx.r10.s64 = r29.s64 + 256;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// addi r11,r31,352
	ctx.r11.s64 = r31.s64 + 352;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82280254
	if (ctx.cr6.lt) goto loc_82280254;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82280254:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,6184(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6184);
	// bl 0x82150fc0
	ctx.lr = 0x82280268;
	sub_82150FC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82280324
	if (ctx.cr0.eq) goto loc_82280324;
	// lwz r3,6184(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6184);
	// bl 0x82151118
	ctx.lr = 0x82280278;
	sub_82151118(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82280324
	if (ctx.cr0.eq) goto loc_82280324;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821d7c18
	ctx.lr = 0x822802C0;
	sub_821D7C18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822802F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82280324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280324:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r4,r10,-13316
	ctx.r4.s64 = ctx.r10.s64 + -13316;
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x82280338;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822803e8
	if (ctx.cr0.eq) goto loc_822803E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r29,256
	ctx.r10.s64 = r29.s64 + 256;
	// lwz r11,460(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// lfs f0,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f11,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,384(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// lfs f13,852(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x822803a0
	if (!ctx.cr6.gt) goto loc_822803A0;
	// lfs f13,848(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 848);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822803c4
	if (!ctx.cr6.gt) goto loc_822803C4;
loc_822803A0:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,848(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 848, temp.u32);
	// stfs f11,852(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 852, temp.u32);
	// stfs f0,856(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 856, temp.u32);
	// stfs f13,860(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 860, temp.u32);
	// stfs f31,864(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 864, temp.u32);
	// stfs f31,868(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f30,872(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 872, temp.u32);
loc_822803C4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,380(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 380);
	// lwz r3,6196(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6196);
	// lwz r4,744(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 744);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822803E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822803E8:
	// lfs f0,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,420(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,348(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 416, temp.u32);
loc_82280408:
	// lfs f13,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,428(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 400);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,416(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 416);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fnmsubs f12,f10,f11,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f12.f64)));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,416(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 416, temp.u32);
	// fmadds f0,f0,f27,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, ctx.f13.f64)));
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 408, temp.u32);
	// std r10,1024(r11)
	REX_STORE_U64(ctx.r11.u32 + 1024, ctx.r10.u64);
	// ld r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 408);
	// std r10,1032(r11)
	REX_STORE_U64(ctx.r11.u32 + 1032, ctx.r10.u64);
	// lfs f0,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822804d8
	if (!ctx.cr6.gt) goto loc_822804D8;
	// lfs f13,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x822804d4
	if (ctx.cr6.gt) goto loc_822804D4;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x8228047c
	if (ctx.cr6.lt) goto loc_8228047C;
	// stfs f30,340(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
loc_8228047C:
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r11,r31,196
	ctx.r11.s64 = r31.s64 + 196;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82280490
	if (ctx.cr6.lt) goto loc_82280490;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82280490:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x821ea0e0
	ctx.lr = 0x8228049C;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822804d4
	if (ctx.cr0.eq) goto loc_822804D4;
	// lwz r3,292(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 292);
	// bl 0x822fbe20
	ctx.lr = 0x822804AC;
	sub_822FBE20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,292(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 292);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// bl 0x822fbeb0
	ctx.lr = 0x822804C0;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822804d4
	if (!ctx.cr0.eq) goto loc_822804D4;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f1,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300070
	ctx.lr = 0x822804D4;
	sub_82300070(ctx, base);
loc_822804D4:
	// stfs f31,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
loc_822804D8:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,468(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 468);
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
	// bl 0x8224c840
	ctx.lr = 0x82280504;
	sub_8224C840(ctx, base);
	// lwz r11,128(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// lfs f12,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,436(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f0,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r8,r29,256
	ctx.r8.s64 = r29.s64 + 256;
	// lfs f13,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,284
	r30.s64 = r31.s64 + 284;
	// lfs f11,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// li r25,4
	r25.s64 = 4;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f11,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f10,96(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// lfs f29,104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 104);
	f29.f64 = double(temp.f32);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsubs f11,f30,f12
	ctx.f11.f64 = double(float(f30.f64 - ctx.f12.f64));
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,468(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 468);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fdivs f28,f0,f1
	f28.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfsx f13,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,328(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// ld r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// fsel f30,f13,f12,f30
	f30.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : f30.f64;
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r10,1140
	r26.s64 = ctx.r10.s64 + 1140;
	// addi r27,r11,-1440
	r27.s64 = ctx.r11.s64 + -1440;
	// addi r28,r9,23936
	r28.s64 = ctx.r9.s64 + 23936;
loc_822805F4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228067c
	if (ctx.cr6.eq) goto loc_8228067C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822fbfc0
	ctx.lr = 0x82280610;
	sub_822FBFC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822fbeb0
	ctx.lr = 0x82280620;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82280634
	if (!ctx.cr0.eq) goto loc_82280634;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x82300070
	ctx.lr = 0x82280634;
	sub_82300070(ctx, base);
loc_82280634:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822fbeb0
	ctx.lr = 0x82280644;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82280658
	if (!ctx.cr0.eq) goto loc_82280658;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82300070
	ctx.lr = 0x82280658;
	sub_82300070(ctx, base);
loc_82280658:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822fbeb0
	ctx.lr = 0x82280668;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8228067c
	if (!ctx.cr0.eq) goto loc_8228067C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82300070
	ctx.lr = 0x8228067C;
	sub_82300070(ctx, base);
loc_8228067C:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x822805f4
	if (!ctx.cr0.eq) goto loc_822805F4;
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r29,256
	ctx.r11.s64 = r29.s64 + 256;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// bl 0x82280a38
	ctx.lr = 0x822806C0;
	sub_82280A38(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cf0
	ctx.lr = 0x822806CC;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822C8BF0) {
	REX_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r11,r10,35,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r10,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// lwz r11,10436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 17;
	// b 0x822c1c90
	sub_822C1C90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D0260) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x822D0268;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// addi r23,r3,48
	r23.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d02ac
	if (!ctx.cr6.gt) goto loc_822D02AC;
	// bl 0x822d5b28
	ctx.lr = 0x822D02A8;
	sub_822D5B28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822D02AC:
	// mulli r26,r27,21
	r26.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(21));
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822D02C0;
	sub_822D4EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d02d0
	if (!ctx.cr0.eq) goto loc_822D02D0;
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// b 0x822d050c
	goto loc_822D050C;
loc_822D02D0:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x822d02fc
	if (!ctx.cr0.eq) goto loc_822D02FC;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// vcsxwfp128 v63,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// b 0x822d0300
	goto loc_822D0300;
loc_822D02FC:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
loc_822D0300:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x822d03c4
	if (ctx.cr6.eq) goto loc_822D03C4;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_822D0324:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvrx128 v61,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r7,56
	ctx.r7.s64 = 56;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vcsxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubfp128 v62,v62,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v60,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v59,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v62,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// stvewx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stvewx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stvewx128 v59,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bdnz 0x822d0324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D0324;
loc_822D03C4:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 3;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r26,2,6,29
	ctx.r9.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FFFFFC) | (ctx.r9.u64 & 0xFFFFFFFFFC000003);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r10,20480
	ctx.r4.u64 = ctx.r10.u64 | 20480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,8961
	ctx.r9.s64 = 8961;
	// ori r26,r10,8192
	r26.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r10,r28,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r24.u32);
	r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x822d045c
	if (!ctx.cr0.eq) goto loc_822D045C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822d0474
	goto loc_822D0474;
loc_822D045C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x822d0470
	if (!ctx.cr6.eq) goto loc_822D0470;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x822d0474
	goto loc_822D0474;
loc_822D0470:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_822D0474:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r9,8712
	ctx.r9.s64 = 8712;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r7,13825
	ctx.r7.u64 = ctx.r7.u64 | 13825;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r10,r27,r6
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r6.s32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwimi r10,r5,3,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_822D050C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822E7508) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E7510;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r12,2053
	ctx.r12.s64 = 2053;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rldicr r12,r12,50,13
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFC000000000000;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 & 0x1FFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x82121f50
	ctx.lr = 0x822E753C;
	sub_82121F50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,6096(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E7554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82139870
	ctx.lr = 0x822E7560;
	sub_82139870(ctx, base);
	// bl 0x82121f50
	ctx.lr = 0x822E7564;
	sub_82121F50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,6096(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E7578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82139948
	ctx.lr = 0x822E7588;
	sub_82139948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ed7b0
	ctx.lr = 0x822E7590;
	sub_822ED7B0(ctx, base);
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// bl 0x82136018
	ctx.lr = 0x822E7598;
	sub_82136018(ctx, base);
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// bl 0x82135f08
	ctx.lr = 0x822E75A0;
	sub_82135F08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EC3C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ECB38) {
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
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ecb74
	if (ctx.cr6.eq) goto loc_822ECB74;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ECB6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
loc_822ECB74:
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

DEFINE_REX_FUNC(sub_822EE218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cbc
	ctx.lr = 0x822EE220;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c8c
	ctx.lr = 0x822EE228;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,6080(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6080);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EE250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ee50c
	if (ctx.cr0.eq) goto loc_822EE50C;
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 8);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 24);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r31,368
	ctx.r5.s64 = r31.s64 + 368;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r9,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r8,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x822EE2CC;
	sub_823FBE48(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// lfs f7,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lfs f6,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadds f0,f10,f5
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f29,f11,f5
	f29.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f29,136(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f28,f13,f9
	f28.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f27,f7,f12
	f27.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f26,f0,f29
	f26.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsubs f25,f13,f28
	f25.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fsubs f24,f12,f27
	f24.f64 = double(float(ctx.f12.f64 - f27.f64));
	// fmuls f13,f26,f31
	ctx.f13.f64 = double(float(f26.f64 * f31.f64));
	// fmr f12,f25
	ctx.f12.f64 = f25.f64;
	// fmuls f10,f24,f31
	ctx.f10.f64 = double(float(f24.f64 * f31.f64));
	// fsubs f0,f13,f25
	ctx.f0.f64 = double(float(ctx.f13.f64 - f25.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f11,f24
	ctx.f11.f64 = f24.f64;
	// fmsubs f12,f12,f31,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -ctx.f10.f64)));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f24,f13
	ctx.f13.f64 = double(float(f24.f64 - ctx.f13.f64));
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// fmadds f11,f12,f12,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,1008(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1008);
	ctx.f10.f64 = double(temp.f32);
	// lfs f23,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f23.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x822ee3e8
	if (!ctx.cr6.lt) goto loc_822EE3E8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f23,144(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x822ee408
	goto loc_822EE408;
loc_822EE3E8:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f23,f11
	ctx.f11.f64 = double(float(f23.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_822EE408:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f13,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f22,f12,f0
	f22.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f21,f11,f13
	f21.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x82126320
	ctx.lr = 0x822EE428;
	sub_82126320(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,-12880(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -12880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82188418
	ctx.lr = 0x822EE444;
	sub_82188418(ctx, base);
	// lfs f0,-12880(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -12880);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * f21.f64));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x821afaa0
	ctx.lr = 0x822EE45C;
	sub_821AFAA0(ctx, base);
	// stfs f25,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f24,164(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f26,168(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823fbe48
	ctx.lr = 0x822EE478;
	sub_823FBE48(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f23,152(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fadds f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// bl 0x8216af20
	ctx.lr = 0x822EE4E8;
	sub_8216AF20(ctx, base);
	// lfs f0,920(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x822ee50c
	if (!ctx.cr6.gt) goto loc_822EE50C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
loc_822EE50C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2cd8
	ctx.lr = 0x822EE518;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82302F48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82302f5c
	if (!ctx.cr6.eq) goto loc_82302F5C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82302F5C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82302f6c
	if (!ctx.cr6.eq) goto loc_82302F6C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82302F6C:
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82302f84
	goto loc_82302F84;
loc_82302F7C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82302F84:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82302f7c
	if (!ctx.cr6.eq) goto loc_82302F7C;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82304C80) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82304ca8
	if (!ctx.cr6.eq) goto loc_82304CA8;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82304cd8
	goto loc_82304CD8;
loc_82304CA8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82304cd4
	if (ctx.cr6.eq) goto loc_82304CD4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82304cd4
	if (ctx.cr6.eq) goto loc_82304CD4;
	// bl 0x82304148
	ctx.lr = 0x82304CBC;
	sub_82304148(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82304cd8
	goto loc_82304CD8;
loc_82304CD4:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82304CD8:
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

DEFINE_REX_FUNC(sub_8230B9D0) {
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
	ctx.lr = 0x8230B9D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// addi r28,r11,5032
	r28.s64 = ctx.r11.s64 + 5032;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230ba78
	if (ctx.cr6.eq) goto loc_8230BA78;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8230ba5c
	if (!ctx.cr6.gt) goto loc_8230BA5C;
	// li r30,0
	r30.s64 = 0;
loc_8230BA0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230ba48
	if (ctx.cr6.eq) goto loc_8230BA48;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822f77d8
	ctx.lr = 0x8230BA24;
	sub_822F77D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230baa8
	if (!ctx.cr0.eq) goto loc_8230BAA8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822fdeb8
	ctx.lr = 0x8230BA40;
	sub_822FDEB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230baa8
	if (!ctx.cr0.eq) goto loc_8230BAA8;
loc_8230BA48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230ba0c
	if (ctx.cr6.lt) goto loc_8230BA0C;
loc_8230BA5C:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,93
	ctx.r6.s64 = 93;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230BA78;
	sub_82330D00(ctx, base);
loc_8230BA78:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ba88
	if (ctx.cr6.eq) goto loc_8230BA88;
	// bl 0x8230ecc8
	ctx.lr = 0x8230BA88;
	sub_8230ECC8(ctx, base);
loc_8230BA88:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230BAA4;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230BAA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82310B00) {
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
	ctx.lr = 0x82310B08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r27,-4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// ble cr6,0x82310b98
	if (!ctx.cr6.gt) goto loc_82310B98;
	// li r29,0
	r29.s64 = 0;
loc_82310B38:
	// bl 0x826a1b88
	ctx.lr = 0x82310B3C;
	sub_826A1B88(ctx, base);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// subf r9,r31,r10
	ctx.r9.u64 = ctx.r10.u64 - r31.u64;
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r8,r3,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82310b38
	if (ctx.cr6.lt) goto loc_82310B38;
loc_82310B98:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bne cr6,0x82310bf4
	if (!ctx.cr6.eq) goto loc_82310BF4;
	// bl 0x826a1b88
	ctx.lr = 0x82310BAC;
	sub_826A1B88(ctx, base);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r8,r3,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82310BF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823165D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10788(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10788);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82317288) {
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
	// addi r11,r11,5920
	ctx.r11.s64 = ctx.r11.s64 + 5920;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823172b4
	if (ctx.cr0.eq) goto loc_823172B4;
	// bl 0x8269ce98
	ctx.lr = 0x823172B4;
	sub_8269CE98(ctx, base);
loc_823172B4:
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

DEFINE_REX_FUNC(sub_82318C68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82319850) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82319890
	if (ctx.cr6.eq) goto loc_82319890;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1610
	ctx.r6.s64 = 1610;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82319890;
	sub_82330D00(ctx, base);
loc_82319890:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823198a8
	if (ctx.cr6.eq) goto loc_823198A8;
	// bl 0x823151e8
	ctx.lr = 0x823198A0;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823198bc
	if (!ctx.cr0.eq) goto loc_823198BC;
loc_823198A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_823198BC:
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

DEFINE_REX_FUNC(sub_8231E948) {
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
	ctx.lr = 0x8231E950;
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231ea2c
	if (ctx.cr6.eq) goto loc_8231EA2C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231ea2c
	if (ctx.cr6.eq) goto loc_8231EA2C;
	// li r28,0
	r28.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// bl 0x82331458
	ctx.lr = 0x8231E984;
	sub_82331458(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// bgt cr6,0x8231ea2c
	if (ctx.cr6.gt) goto loc_8231EA2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331480
	ctx.lr = 0x8231E99C;
	sub_82331480(ctx, base);
	// addic. r31,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r31.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8231e9cc
	if (ctx.cr0.eq) goto loc_8231E9CC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
loc_8231E9AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x8231e9c4
	if (ctx.cr6.eq) goto loc_8231E9C4;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x8231e9ac
	if (!ctx.cr0.eq) goto loc_8231E9AC;
loc_8231E9C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8231e9d4
	if (!ctx.cr6.eq) goto loc_8231E9D4;
loc_8231E9CC:
	// li r3,91
	ctx.r3.s64 = 91;
	// b 0x8231ea30
	goto loc_8231EA30;
loc_8231E9D4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stbx r28,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r28.u8);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231E9FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231ea30
	if (!ctx.cr0.eq) goto loc_8231EA30;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231EA28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8231ea30
	goto loc_8231EA30;
loc_8231EA2C:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8231EA30:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82326378) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8232b890
	ctx.lr = 0x8232639C;
	sub_8232B890(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_823291D8) {
	REX_FUNC_PROLOGUE();
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823291e8
	if (ctx.cr6.eq) goto loc_823291E8;
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_823291E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823297D8) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232980c
	if (ctx.cr6.eq) goto loc_8232980C;
	// lwz r6,156(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329810
	if (!ctx.cr0.eq) goto loc_82329810;
loc_8232980C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82329810:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B1F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r8,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D190) {
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
	ctx.lr = 0x8232D198;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r31,156(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8232d26c
	if (ctx.cr6.eq) goto loc_8232D26C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D1D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232d23c
	if (!ctx.cr0.eq) goto loc_8232D23C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8232d224
	if (!ctx.cr6.eq) goto loc_8232D224;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,83(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8232d228
	if (ctx.cr6.eq) goto loc_8232D228;
loc_8232D224:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232D228:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232d23c
	if (!ctx.cr0.eq) goto loc_8232D23C;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8232d24c
	if (ctx.cr6.eq) goto loc_8232D24C;
loc_8232D23C:
	// std r27,8(r31)
	REX_STORE_U64(r31.u32 + 8, r27.u64);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_8232D24C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_8232D26C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823347C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823347d8
	if (ctx.cr6.eq) goto loc_823347D8;
	// lwz r11,20888(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20888);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823347D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823347e8
	if (ctx.cr6.eq) goto loc_823347E8;
	// lwz r11,20892(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20892);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_823347E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82338290) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823382a0
	if (!ctx.cr6.eq) goto loc_823382A0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823382A0:
	// lwz r11,20884(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20884);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823382b8
	if (ctx.cr6.eq) goto loc_823382B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82337f88
	sub_82337F88(ctx, base);
	return;
loc_823382B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82337f88
	sub_82337F88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233E370) {
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
	// bl 0x823ecca8
	ctx.lr = 0x8233E380;
	sub_823ECCA8(ctx, base);
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

DEFINE_REX_FUNC(sub_8233E950) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233e978
	if (!ctx.cr6.eq) goto loc_8233E978;
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
loc_8233E978:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823eebb0
	ctx.lr = 0x8233E984;
	sub_823EEBB0(ctx, base);
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

DEFINE_REX_FUNC(sub_8233F018) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x8234aac0
	ctx.lr = 0x8233F03C;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f054
	if (!ctx.cr6.eq) goto loc_8233F054;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8234e580
	ctx.lr = 0x8233F054;
	sub_8234E580(ctx, base);
loc_8233F054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82340CF8) {
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x82340D20;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82340d30
	if (ctx.cr6.eq) goto loc_82340D30;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_82340D30:
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

DEFINE_REX_FUNC(sub_823423C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823423d0
	if (ctx.cr6.eq) goto loc_823423D0;
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_823423D0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823423e0
	if (ctx.cr6.eq) goto loc_823423E0;
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_823423E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82344388) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x823443bc
	if (ctx.cr6.eq) goto loc_823443BC;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x823443bc
	if (ctx.cr6.eq) goto loc_823443BC;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x823443d4
	if (!ctx.cr6.eq) goto loc_823443D4;
loc_823443BC:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823443ec
	if (ctx.cr6.eq) goto loc_823443EC;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x823443ec
	if (ctx.cr6.eq) goto loc_823443EC;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x823443ec
	if (ctx.cr6.eq) goto loc_823443EC;
loc_823443D4:
	// li r3,25
	ctx.r3.s64 = 25;
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
loc_823443EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,36
	ctx.r3.s64 = 36;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// lfs f0,4104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82344408
	if (!ctx.cr6.eq) goto loc_82344408;
loc_82344400:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x82344578
	goto loc_82344578;
loc_82344408:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x82344544
	if (!ctx.cr6.eq) goto loc_82344544;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82344578
	if (ctx.cr6.eq) goto loc_82344578;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82344578
	if (ctx.cr6.gt) goto loc_82344578;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17472
	ctx.r12.s64 = ctx.r12.s64 + 17472;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823444B0;
	case 1:
		goto loc_82344470;
	case 2:
		goto loc_82344478;
	case 3:
		goto loc_82344480;
	case 4:
		goto loc_82344488;
	case 5:
		goto loc_82344488;
	case 6:
		goto loc_823444B0;
	case 7:
		goto loc_823444B0;
	case 8:
		goto loc_823444B0;
	case 9:
		goto loc_823444B0;
	case 10:
		goto loc_823444B0;
	case 11:
		goto loc_823444B0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82344470:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234448c
	goto loc_8234448C;
loc_82344478:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8234448c
	goto loc_8234448C;
loc_82344480:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8234448c
	goto loc_8234448C;
loc_82344488:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8234448C:
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r8,r4,3,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u64, 3) & 0x7FFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r5,r8,r11
	ctx.r5.u64 = ctx.r11.u64 ? ctx.r8.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82344578
	goto loc_82344578;
loc_823444B0:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17608
	ctx.r12.s64 = ctx.r12.s64 + 17608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82344534;
	case 1:
		goto loc_82344578;
	case 2:
		goto loc_82344578;
	case 3:
		goto loc_82344578;
	case 4:
		goto loc_82344578;
	case 5:
		goto loc_82344578;
	case 6:
		goto loc_823444F8;
	case 7:
		goto loc_8234450C;
	case 8:
		goto loc_82344520;
	case 9:
		goto loc_82344400;
	case 10:
		goto loc_82344400;
	case 11:
		goto loc_82344400;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823444F8:
	// mulli r11,r4,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82344578
	goto loc_82344578;
loc_8234450C:
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r11.u32 / ctx.r3.u32 : 0);
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82344578
	goto loc_82344578;
loc_82344520:
	// mulli r11,r4,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82344578
	goto loc_82344578;
loc_82344534:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82344578
	goto loc_82344578;
loc_82344544:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82344578
	if (!ctx.cr6.eq) goto loc_82344578;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82344578:
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x82344588
	if (!ctx.cr6.eq) goto loc_82344588;
loc_82344580:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x823446f8
	goto loc_823446F8;
loc_82344588:
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x823446c4
	if (!ctx.cr6.eq) goto loc_823446C4;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823446f8
	if (ctx.cr6.eq) goto loc_823446F8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823446f8
	if (ctx.cr6.gt) goto loc_823446F8;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17856
	ctx.r12.s64 = ctx.r12.s64 + 17856;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82344630;
	case 1:
		goto loc_823445F0;
	case 2:
		goto loc_823445F8;
	case 3:
		goto loc_82344600;
	case 4:
		goto loc_82344608;
	case 5:
		goto loc_82344608;
	case 6:
		goto loc_82344630;
	case 7:
		goto loc_82344630;
	case 8:
		goto loc_82344630;
	case 9:
		goto loc_82344630;
	case 10:
		goto loc_82344630;
	case 11:
		goto loc_82344630;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823445F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234460c
	goto loc_8234460C;
loc_823445F8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8234460c
	goto loc_8234460C;
loc_82344600:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8234460c
	goto loc_8234460C;
loc_82344608:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8234460C:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r6,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 ? ctx.r9.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823446f8
	goto loc_823446F8;
loc_82344630:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17992
	ctx.r12.s64 = ctx.r12.s64 + 17992;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823446B4;
	case 1:
		goto loc_823446F8;
	case 2:
		goto loc_823446F8;
	case 3:
		goto loc_823446F8;
	case 4:
		goto loc_823446F8;
	case 5:
		goto loc_823446F8;
	case 6:
		goto loc_82344678;
	case 7:
		goto loc_8234468C;
	case 8:
		goto loc_823446A0;
	case 9:
		goto loc_82344580;
	case 10:
		goto loc_82344580;
	case 11:
		goto loc_82344580;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82344678:
	// mulli r11,r6,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823446f8
	goto loc_823446F8;
loc_8234468C:
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r11.u32 / ctx.r3.u32 : 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823446f8
	goto loc_823446F8;
loc_823446A0:
	// mulli r11,r6,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823446f8
	goto loc_823446F8;
loc_823446B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823446f8
	goto loc_823446F8;
loc_823446C4:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x823446f8
	if (!ctx.cr6.eq) goto loc_823446F8;
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823446F8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subfc r10,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 & ctx.r8.u64;
	// blt cr6,0x82344714
	if (ctx.cr6.lt) goto loc_82344714;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82344714:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82344720
	if (!ctx.cr6.eq) goto loc_82344720;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82344720:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82344740
	if (ctx.cr6.lt) goto loc_82344740;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_82344740:
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82344764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823447a8
	if (ctx.cr6.eq) goto loc_823447A8;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234478c
	if (!ctx.cr6.eq) goto loc_8234478C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823447a8
	if (ctx.cr6.eq) goto loc_823447A8;
loc_8234478C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823447a8
	if (ctx.cr6.eq) goto loc_823447A8;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_823447A8:
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
}

DEFINE_REX_FUNC(sub_82361540) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82361550
	if (!ctx.cr6.eq) goto loc_82361550;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361550:
	// b 0x823611e8
	sub_823611E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82362360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82362368;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r3,1196
	r31.s64 = ctx.r3.s64 + 1196;
	// li r30,8
	r30.s64 = 8;
loc_8236237C:
	// lwz r11,-160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823623a0
	if (ctx.cr6.eq) goto loc_823623A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823623A0;
	sub_82331A00(ctx, base);
loc_823623A0:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8236237c
	if (!ctx.cr0.eq) goto loc_8236237C;
	// lwz r11,1396(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823623d0
	if (ctx.cr6.eq) goto loc_823623D0;
	// lwz r11,1524(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1524);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823623D0;
	sub_82331A00(ctx, base);
loc_823623D0:
	// addi r31,r29,1732
	r31.s64 = r29.s64 + 1732;
	// li r30,2
	r30.s64 = 2;
loc_823623D8:
	// lwz r11,-24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823623fc
	if (ctx.cr6.eq) goto loc_823623FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823623FC;
	sub_82331A00(ctx, base);
loc_823623FC:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823623d8
	if (!ctx.cr0.eq) goto loc_823623D8;
	// lwz r11,1608(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236242c
	if (ctx.cr6.eq) goto loc_8236242C;
	// lwz r11,1668(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1668);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x8236242C;
	sub_82331A00(ctx, base);
loc_8236242C:
	// lwz r11,312(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362454
	if (ctx.cr6.eq) goto loc_82362454;
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331a00
	ctx.lr = 0x82362454;
	sub_82331A00(ctx, base);
loc_82362454:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8236AF48) {
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
	// addi r31,r11,6936
	r31.s64 = ctx.r11.s64 + 6936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8236AF70;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,14532
	ctx.r4.s64 = ctx.r10.s64 + 14532;
	// bl 0x82331480
	ctx.lr = 0x8236AF80;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// addi r9,r11,6792
	ctx.r9.s64 = ctx.r11.s64 + 6792;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r10,r10,-20800
	ctx.r10.s64 = ctx.r10.s64 + -20800;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// addi r9,r3,6488
	ctx.r9.s64 = ctx.r3.s64 + 6488;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// addi r11,r4,-20776
	ctx.r11.s64 = ctx.r4.s64 + -20776;
	// addi r10,r5,-20736
	ctx.r10.s64 = ctx.r5.s64 + -20736;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r11,r6,-20712
	ctx.r11.s64 = ctx.r6.s64 + -20712;
	// addi r10,r7,-20688
	ctx.r10.s64 = ctx.r7.s64 + -20688;
	// addi r9,r8,16224
	ctx.r9.s64 = ctx.r8.s64 + 16224;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,340
	ctx.r9.s64 = 340;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82371880) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82371890
	if (!ctx.cr6.eq) goto loc_82371890;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82371890:
	// b 0x823717d0
	sub_823717D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823723C0) {
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
	// bl 0x826a1c94
	ctx.lr = 0x823723C8;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2c70
	ctx.lr = 0x823723D0;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x823724a4
	if (!ctx.cr6.eq) goto loc_823724A4;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82372df0
	if (ctx.cr6.eq) goto loc_82372DF0;
	// addi r11,r3,340
	ctx.r11.s64 = ctx.r3.s64 + 340;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823731a4
	if (ctx.cr6.eq) goto loc_823731A4;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// lfs f0,10572(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 10572);
	ctx.f0.f64 = double(temp.f32);
loc_82372408:
	// lfs f13,612(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f4,628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f8,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f6,616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 616);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f4,f9,f10,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f11.f64)));
	// lfs f11,624(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmsubs f9,f7,f13,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fmadds f7,f11,f3,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f1.f64)));
	// fnmsubs f6,f6,f3,f4
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f3.f64, -ctx.f4.f64)));
	// fnmsubs f5,f10,f12,f9
	ctx.f5.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f9.f64)));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f4,f8,f2,f6
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f2.f64, -ctx.f6.f64)));
	// fadds f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfsu f1,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82372408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372408;
	// stfs f0,10572(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 10572, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cbc
	ctx.lr = 0x823724A0;
	// b 0x826a1ce4
	return;
loc_823724A4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x823725e4
	if (!ctx.cr6.eq) goto loc_823725E4;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82372df0
	if (!ctx.cr6.eq) goto loc_82372DF0;
	// addi r10,r3,340
	ctx.r10.s64 = ctx.r3.s64 + 340;
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823731a4
	if (ctx.cr6.eq) goto loc_823731A4;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// lfs f0,10572(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 10572);
	ctx.f0.f64 = double(temp.f32);
loc_823724E0:
	// lfs f13,608(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f7,612(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f31,f13,f1
	f31.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f3,616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 616);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f2,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f13,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f7,f5,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f11.f64)));
	// lfs f30,620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 620);
	f30.f64 = double(temp.f32);
	// lfs f28,624(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 624);
	f28.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmsubs f8,f6,f4,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, -ctx.f8.f64)));
	// lfs f6,628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// fmuls f27,f28,f2
	f27.f64 = double(float(f28.f64 * ctx.f2.f64));
	// lfs f26,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f25.f64 = double(temp.f32);
	// fmuls f28,f28,f26
	f28.f64 = double(float(f28.f64 * f26.f64));
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f12,f7,f29,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, f31.f64)));
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fnmsubs f11,f2,f3,f11
	ctx.f11.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f3.f64, -ctx.f11.f64)));
	// fnmsubs f8,f5,f9,f8
	ctx.f8.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f5,f13,f4,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, -ctx.f1.f64)));
	// fmadds f7,f6,f10,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, f27.f64)));
	// fmadds f4,f6,f25,f28
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, f25.f64, f28.f64)));
	// fnmsubs f3,f26,f3,f12
	ctx.f3.f64 = double(float(-std::fma(f26.f64, ctx.f3.f64, -ctx.f12.f64)));
	// fnmsubs f2,f10,f30,f11
	ctx.f2.f64 = double(float(-std::fma(ctx.f10.f64, f30.f64, -ctx.f11.f64)));
	// fnmsubs f1,f29,f9,f5
	ctx.f1.f64 = double(float(-std::fma(f29.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fnmsubs f13,f25,f30,f3
	ctx.f13.f64 = double(float(-std::fma(f25.f64, f30.f64, -ctx.f3.f64)));
	// fadds f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f7,f2
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fadds f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f5,-4(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fadds f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bdnz 0x823724e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823724E0;
	// stfs f0,10572(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 10572, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cbc
	ctx.lr = 0x823725E0;
	// b 0x826a1ce4
	return;
loc_823725E4:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x82372918
	if (!ctx.cr6.eq) goto loc_82372918;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x82372df0
	if (!ctx.cr6.eq) goto loc_82372DF0;
	// addi r31,r3,340
	r31.s64 = ctx.r3.s64 + 340;
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// addi r10,r3,372
	ctx.r10.s64 = ctx.r3.s64 + 372;
	// addi r9,r3,388
	ctx.r9.s64 = ctx.r3.s64 + 388;
	// addi r8,r3,404
	ctx.r8.s64 = ctx.r3.s64 + 404;
	// addi r7,r3,420
	ctx.r7.s64 = ctx.r3.s64 + 420;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823731a4
	if (ctx.cr6.eq) goto loc_823731A4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r6,r5,-20
	ctx.r6.s64 = ctx.r5.s64 + -20;
	// addi r5,r4,-4
	ctx.r5.s64 = ctx.r4.s64 + -4;
	// lis r4,-32129
	ctx.r4.s64 = -2105606144;
	// lfs f0,10572(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 10572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-352(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
loc_82372634:
	// lfs f8,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f12,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f12,f2
	f30.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f4,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// lfs f31,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f31.f64 = double(temp.f32);
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// lfs f29,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	f29.f64 = double(temp.f32);
	// fmuls f28,f12,f31
	f28.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f6,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f26,f12,f29
	f26.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lfs f27,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f24,f12,f27
	f24.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lfsu f13,24(r5)
	ea = 24 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fmuls f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f6,612(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f31,f31,f9
	f31.f64 = double(float(f31.f64 * ctx.f9.f64));
	// lfs f22,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	f22.f64 = double(temp.f32);
	// fmuls f29,f29,f9
	f29.f64 = double(float(f29.f64 * ctx.f9.f64));
	// lfs f20,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f20.f64 = double(temp.f32);
	// lfs f23,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	f23.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f25,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f25.f64 = double(temp.f32);
	// fmuls f27,f27,f9
	f27.f64 = double(float(f27.f64 * ctx.f9.f64));
	// lfs f19,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f19.f64 = double(temp.f32);
	// fmsubs f2,f5,f22,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, f22.f64, -ctx.f2.f64)));
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f6,f20,f30
	f30.f64 = double(float(std::fma(ctx.f6.f64, f20.f64, f30.f64)));
	// lfs f18,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f18.f64 = double(temp.f32);
	// fmuls f9,f23,f9
	ctx.f9.f64 = double(float(f23.f64 * ctx.f9.f64));
	// fmadds f10,f6,f25,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, f25.f64, ctx.f10.f64)));
	// stfs f12,-348(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// fmadds f28,f6,f19,f28
	f28.f64 = double(float(std::fma(ctx.f6.f64, f19.f64, f28.f64)));
	// lfs f12,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f7,f7,f22,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, f22.f64, -ctx.f4.f64)));
	// lfs f21,616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 616);
	f21.f64 = double(temp.f32);
	// fmsubs f3,f3,f22,f31
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, f22.f64, -f31.f64)));
	// lfs f16,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	f16.f64 = double(temp.f32);
	// fmsubs f1,f1,f22,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f22.f64, -f29.f64)));
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f26,f6,f13,f26
	f26.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, f26.f64)));
	// stfs f12,-344(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// fmadds f24,f6,f18,f24
	f24.f64 = double(float(std::fma(ctx.f6.f64, f18.f64, f24.f64)));
	// lfs f15,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f15.f64 = double(temp.f32);
	// lfs f4,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f8,f8,f22,f27
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, f22.f64, -f27.f64)));
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f30,f5,f21,f30
	f30.f64 = double(float(-std::fma(ctx.f5.f64, f21.f64, -f30.f64)));
	// lfs f17,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f17.f64 = double(temp.f32);
	// fmsubs f9,f0,f22,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, -ctx.f9.f64)));
	// lfs f31,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	f31.f64 = double(temp.f32);
	// fnmsubs f10,f17,f21,f10
	ctx.f10.f64 = double(float(-std::fma(f17.f64, f21.f64, -ctx.f10.f64)));
	// stfs f6,-340(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// fnmsubs f6,f20,f16,f2
	ctx.f6.f64 = double(float(-std::fma(f20.f64, f16.f64, -ctx.f2.f64)));
	// stfs f5,-332(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// fnmsubs f28,f15,f21,f28
	f28.f64 = double(float(-std::fma(f15.f64, f21.f64, -f28.f64)));
	// stfs f12,-320(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fnmsubs f7,f25,f16,f7
	ctx.f7.f64 = double(float(-std::fma(f25.f64, f16.f64, -ctx.f7.f64)));
	// lfs f29,620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 620);
	f29.f64 = double(temp.f32);
	// fnmsubs f3,f19,f16,f3
	ctx.f3.f64 = double(float(-std::fma(f19.f64, f16.f64, -ctx.f3.f64)));
	// lfs f27,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	f27.f64 = double(temp.f32);
	// fnmsubs f26,f4,f21,f26
	f26.f64 = double(float(-std::fma(ctx.f4.f64, f21.f64, -f26.f64)));
	// lfs f14,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f14.f64 = double(temp.f32);
	// fnmsubs f24,f31,f21,f24
	f24.f64 = double(float(-std::fma(f31.f64, f21.f64, -f24.f64)));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f2,f13,f16,f1
	ctx.f2.f64 = double(float(-std::fma(ctx.f13.f64, f16.f64, -ctx.f1.f64)));
	// lfs f22,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f22.f64 = double(temp.f32);
	// lfs f5,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f15,-336(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// stfs f4,-328(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// stfs f21,-324(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// fnmsubs f13,f27,f16,f9
	ctx.f13.f64 = double(float(-std::fma(f27.f64, f16.f64, -ctx.f9.f64)));
	// fmr f21,f15
	f21.f64 = f15.f64;
	// lfs f9,628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,624(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f10,f14,f29,f10
	ctx.f10.f64 = double(float(-std::fma(f14.f64, f29.f64, -ctx.f10.f64)));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fnmsubs f1,f18,f16,f8
	ctx.f1.f64 = double(float(-std::fma(f18.f64, f16.f64, -ctx.f8.f64)));
	// stfs f17,12(r31)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fnmsubs f11,f22,f29,f28
	ctx.f11.f64 = double(float(-std::fma(f22.f64, f29.f64, -f28.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fnmsubs f28,f5,f29,f26
	f28.f64 = double(float(-std::fma(ctx.f5.f64, f29.f64, -f26.f64)));
	// lfs f26,-348(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -348);
	f26.f64 = double(temp.f32);
	// fmuls f31,f4,f31
	f31.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fmuls f26,f26,f23
	f26.f64 = double(float(f26.f64 * f23.f64));
	// lfs f20,-332(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -332);
	f20.f64 = double(temp.f32);
	// fmuls f23,f4,f17
	f23.f64 = double(float(ctx.f4.f64 * f17.f64));
	// lfs f19,-328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -328);
	f19.f64 = double(temp.f32);
	// fmuls f20,f4,f20
	f20.f64 = double(float(ctx.f4.f64 * f20.f64));
	// lfs f17,-352(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -352);
	f17.f64 = double(temp.f32);
	// fmuls f19,f4,f19
	f19.f64 = double(float(ctx.f4.f64 * f19.f64));
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// fmuls f21,f4,f21
	f21.f64 = double(float(ctx.f4.f64 * f21.f64));
	// fadds f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f8,-344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f30,f0,f29,f30
	f30.f64 = double(float(-std::fma(ctx.f0.f64, f29.f64, -f30.f64)));
	// fnmsubs f25,f8,f29,f24
	f25.f64 = double(float(-std::fma(ctx.f8.f64, f29.f64, -f24.f64)));
	// lfs f24,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	f24.f64 = double(temp.f32);
	// fadds f15,f11,f3
	f15.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fmadds f8,f9,f8,f31
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, f31.f64)));
	// fmadds f27,f24,f27,f26
	f27.f64 = double(float(std::fma(f24.f64, f27.f64, f26.f64)));
	// lfs f24,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	f24.f64 = double(temp.f32);
	// fmuls f4,f4,f24
	ctx.f4.f64 = double(float(ctx.f4.f64 * f24.f64));
	// fmadds f23,f9,f14,f23
	f23.f64 = double(float(std::fma(ctx.f9.f64, f14.f64, f23.f64)));
	// lfs f18,-324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -324);
	f18.f64 = double(temp.f32);
	// fmadds f20,f9,f0,f20
	f20.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, f20.f64)));
	// fmadds f22,f9,f22,f21
	f22.f64 = double(float(std::fma(ctx.f9.f64, f22.f64, f21.f64)));
	// stfs f2,-324(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// fmadds f5,f9,f5,f19
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, f19.f64)));
	// fadds f16,f30,f6
	f16.f64 = double(float(f30.f64 + ctx.f6.f64));
	// fadds f2,f28,f2
	ctx.f2.f64 = double(float(f28.f64 + ctx.f2.f64));
	// lfs f21,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f21.f64 = double(temp.f32);
	// fadds f26,f25,f1
	f26.f64 = double(float(f25.f64 + ctx.f1.f64));
	// lfs f31,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f31.f64 = double(temp.f32);
	// fneg f0,f17
	ctx.f0.u64 = f17.u64 ^ 0x8000000000000000;
	// stfs f31,12(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fnmsubs f27,f24,f18,f27
	f27.f64 = double(float(-std::fma(f24.f64, f18.f64, -f27.f64)));
	// fmadds f4,f9,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f31,f12,f29,f27
	f31.f64 = double(float(-std::fma(ctx.f12.f64, f29.f64, -f27.f64)));
	// stfs f21,4(r11)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f16,8(r11)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f12,f23,f10
	ctx.f12.f64 = double(float(f23.f64 + ctx.f10.f64));
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f20,f30
	ctx.f9.f64 = double(float(f20.f64 + f30.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f10,f8,f25
	ctx.f10.f64 = double(float(ctx.f8.f64 + f25.f64));
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// fadds f8,f4,f31
	ctx.f8.f64 = double(float(ctx.f4.f64 + f31.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f4,f31,f13
	ctx.f4.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f30,4(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f15,8(r10)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f11,f22,f11
	ctx.f11.f64 = double(float(f22.f64 + ctx.f11.f64));
	// lfs f31,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f31.f64 = double(temp.f32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// lfs f6,-324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 + f28.f64));
	// stfs f2,8(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fadds f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f3,f10,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f31,12(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fadds f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f10,12(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f26,8(r8)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f1,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r7)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f1,4(r7)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f4,8(r7)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f0,-352(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// stfs f12,-4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + -4, temp.u32);
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f5,8(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f3,12(r6)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f2,16(r6)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// bdnz 0x82372634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372634;
	// stfs f0,10572(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 10572, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cbc
	ctx.lr = 0x82372914;
	// b 0x826a1ce4
	return;
loc_82372918:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x82372df0
	if (!ctx.cr6.eq) goto loc_82372DF0;
	// lbz r11,37(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 37);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82372df0
	if (!ctx.cr6.eq) goto loc_82372DF0;
	// addi r28,r3,340
	r28.s64 = ctx.r3.s64 + 340;
	// addi r10,r3,356
	ctx.r10.s64 = ctx.r3.s64 + 356;
	// addi r9,r3,372
	ctx.r9.s64 = ctx.r3.s64 + 372;
	// addi r8,r3,388
	ctx.r8.s64 = ctx.r3.s64 + 388;
	// addi r7,r3,404
	ctx.r7.s64 = ctx.r3.s64 + 404;
	// addi r31,r3,420
	r31.s64 = ctx.r3.s64 + 420;
	// addi r30,r3,436
	r30.s64 = ctx.r3.s64 + 436;
	// addi r29,r3,452
	r29.s64 = ctx.r3.s64 + 452;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823731a4
	if (ctx.cr6.eq) goto loc_823731A4;
	// addi r11,r5,-28
	ctx.r11.s64 = ctx.r5.s64 + -28;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r5,-32129
	ctx.r5.s64 = -2105606144;
	// addi r6,r4,-4
	ctx.r6.s64 = ctx.r4.s64 + -4;
	// lfs f0,10572(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-352(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
loc_8237296C:
	// lfs f12,600(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f2,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f10,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f25,f2,f12
	f25.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f4,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f6,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f1,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f4,f1
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// lfs f31,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f30,f4,f11
	f30.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfs f24,596(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	f24.f64 = double(temp.f32);
	// lfs f22,612(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 612);
	f22.f64 = double(temp.f32);
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f20,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	f20.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f29,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmsubs f9,f9,f24,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f24.f64, -ctx.f5.f64)));
	// lfs f28,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	f28.f64 = double(temp.f32);
	// fadds f29,f29,f0
	f29.f64 = double(float(f29.f64 + ctx.f0.f64));
	// lfs f27,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	f27.f64 = double(temp.f32);
	// fadds f28,f28,f0
	f28.f64 = double(float(f28.f64 + ctx.f0.f64));
	// lfs f23,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	f23.f64 = double(temp.f32);
	// fmadds f17,f22,f20,f13
	f17.f64 = double(float(std::fma(f22.f64, f20.f64, ctx.f13.f64)));
	// lfs f26,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f26.f64 = double(temp.f32);
	// fmsubs f3,f7,f24,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, f24.f64, -ctx.f3.f64)));
	// lfs f18,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f18.f64 = double(temp.f32);
	// fmuls f21,f26,f12
	f21.f64 = double(float(f26.f64 * ctx.f12.f64));
	// lfs f7,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f16,f18,f12
	f16.f64 = double(float(f18.f64 * ctx.f12.f64));
	// lfsu f13,32(r6)
	ea = 32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fadds f27,f27,f0
	f27.f64 = double(float(f27.f64 + ctx.f0.f64));
	// lfs f19,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f19.f64 = double(temp.f32);
	// fadds f23,f23,f0
	f23.f64 = double(float(f23.f64 + ctx.f0.f64));
	// lfs f5,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f15,604(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 604);
	f15.f64 = double(temp.f32);
	// fmadds f10,f22,f19,f10
	ctx.f10.f64 = double(float(std::fma(f22.f64, f19.f64, ctx.f10.f64)));
	// lfs f14,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f14.f64 = double(temp.f32);
	// fmadds f30,f22,f5,f30
	f30.f64 = double(float(std::fma(f22.f64, ctx.f5.f64, f30.f64)));
	// stfs f14,-328(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// fmsubs f31,f31,f24,f25
	f31.f64 = double(float(std::fma(f31.f64, f24.f64, -f25.f64)));
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f9,f14,f15,f9
	ctx.f9.f64 = double(float(-std::fma(f14.f64, f15.f64, -ctx.f9.f64)));
	// lfs f14,620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 620);
	f14.f64 = double(temp.f32);
	// stfs f14,-320(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fmsubs f1,f29,f24,f1
	ctx.f1.f64 = double(float(std::fma(f29.f64, f24.f64, -ctx.f1.f64)));
	// stfs f22,-324(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// fmsubs f11,f28,f24,f11
	ctx.f11.f64 = double(float(std::fma(f28.f64, f24.f64, -ctx.f11.f64)));
	// lfs f22,616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 616);
	f22.f64 = double(temp.f32);
	// fmsubs f27,f27,f24,f21
	f27.f64 = double(float(std::fma(f27.f64, f24.f64, -f21.f64)));
	// lfs f14,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f14.f64 = double(temp.f32);
	// fnmsubs f3,f13,f15,f3
	ctx.f3.f64 = double(float(-std::fma(ctx.f13.f64, f15.f64, -ctx.f3.f64)));
	// lfs f25,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	f25.f64 = double(temp.f32);
	// fmsubs f23,f23,f24,f16
	f23.f64 = double(float(std::fma(f23.f64, f24.f64, -f16.f64)));
	// lfs f29,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmsubs f0,f0,f24,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, -ctx.f12.f64)));
	// lfs f28,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f28.f64 = double(temp.f32);
	// fnmsubs f17,f22,f25,f17
	f17.f64 = double(float(-std::fma(f22.f64, f25.f64, -f17.f64)));
	// stfs f13,-340(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// fnmsubs f10,f29,f22,f10
	ctx.f10.f64 = double(float(-std::fma(f29.f64, f22.f64, -ctx.f10.f64)));
	// stfs f14,-336(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// stfs f2,-300(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fnmsubs f2,f28,f22,f30
	ctx.f2.f64 = double(float(-std::fma(f28.f64, f22.f64, -f30.f64)));
	// stfs f7,-348(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// fnmsubs f7,f15,f20,f31
	ctx.f7.f64 = double(float(-std::fma(f15.f64, f20.f64, -f31.f64)));
	// lfs f21,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f21.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f16,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	f16.f64 = double(temp.f32);
	// lfs f14,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f14.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f22,-332(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// lfs f31,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	f31.f64 = double(temp.f32);
	// fnmsubs f11,f5,f15,f11
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, f15.f64, -ctx.f11.f64)));
	// stfs f13,-344(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// fmuls f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f31,-320(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fnmsubs f30,f31,f16,f17
	f30.f64 = double(float(-std::fma(f31.f64, f16.f64, -f17.f64)));
	// lfs f5,628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f10,f14,f31,f10
	ctx.f10.f64 = double(float(-std::fma(f14.f64, f31.f64, -ctx.f10.f64)));
	// stfs f14,-312(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// fnmsubs f1,f19,f15,f1
	ctx.f1.f64 = double(float(-std::fma(f19.f64, f15.f64, -ctx.f1.f64)));
	// stfs f16,-316(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// fnmsubs f13,f13,f15,f23
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f15.f64, -f23.f64)));
	// stfs f3,-292(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f5,-304(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmuls f6,f4,f26
	ctx.f6.f64 = double(float(ctx.f4.f64 * f26.f64));
	// stfs f12,-308(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// fnmsubs f5,f12,f31,f2
	ctx.f5.f64 = double(float(-std::fma(ctx.f12.f64, f31.f64, -ctx.f2.f64)));
	// lfs f26,-324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -324);
	f26.f64 = double(temp.f32);
	// fmuls f4,f4,f18
	ctx.f4.f64 = double(float(ctx.f4.f64 * f18.f64));
	// lfs f24,-328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -328);
	f24.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fmadds f8,f26,f24,f8
	ctx.f8.f64 = double(float(std::fma(f26.f64, f24.f64, ctx.f8.f64)));
	// lfs f2,624(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f2.f64 = double(temp.f32);
	// lfs f17,-336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -336);
	f17.f64 = double(temp.f32);
	// fmuls f31,f2,f25
	f31.f64 = double(float(ctx.f2.f64 * f25.f64));
	// lfs f22,612(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 612);
	f22.f64 = double(temp.f32);
	// fmuls f29,f2,f29
	f29.f64 = double(float(ctx.f2.f64 * f29.f64));
	// stfs f9,-296(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// fnmsubs f9,f21,f15,f27
	ctx.f9.f64 = double(float(-std::fma(f21.f64, f15.f64, -f27.f64)));
	// fmuls f22,f17,f22
	f22.f64 = double(float(f17.f64 * f22.f64));
	// lfs f19,-332(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -332);
	f19.f64 = double(temp.f32);
	// lfs f24,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f24.f64 = double(temp.f32);
	// fnmsubs f0,f17,f15,f0
	ctx.f0.f64 = double(float(-std::fma(f17.f64, f15.f64, -ctx.f0.f64)));
	// fmadds f6,f26,f21,f6
	ctx.f6.f64 = double(float(std::fma(f26.f64, f21.f64, ctx.f6.f64)));
	// lfs f21,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f21.f64 = double(temp.f32);
	// stfs f21,-324(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// fmuls f28,f2,f28
	f28.f64 = double(float(ctx.f2.f64 * f28.f64));
	// lfs f21,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f21.f64 = double(temp.f32);
	// stfs f11,-276(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f21,-332(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// fmuls f21,f2,f24
	f21.f64 = double(float(ctx.f2.f64 * f24.f64));
	// lfs f23,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	f23.f64 = double(temp.f32);
	// lfs f14,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	f14.f64 = double(temp.f32);
	// fnmsubs f8,f23,f19,f8
	ctx.f8.f64 = double(float(-std::fma(f23.f64, f19.f64, -ctx.f8.f64)));
	// lfs f17,-344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -344);
	f17.f64 = double(temp.f32);
	// fmadds f3,f26,f14,f3
	ctx.f3.f64 = double(float(std::fma(f26.f64, f14.f64, ctx.f3.f64)));
	// lfs f27,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmadds f4,f26,f17,f4
	ctx.f4.f64 = double(float(std::fma(f26.f64, f17.f64, ctx.f4.f64)));
	// stfs f11,-272(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmuls f18,f2,f27
	f18.f64 = double(float(ctx.f2.f64 * f27.f64));
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f17,f30,f7
	f17.f64 = double(float(f30.f64 + ctx.f7.f64));
	// lfs f11,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f2,f12
	f20.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f25,-340(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// fmuls f25,f2,f23
	f25.f64 = double(float(ctx.f2.f64 * f23.f64));
	// stfs f21,-336(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// lfs f15,-312(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -312);
	f15.f64 = double(temp.f32);
	// lfs f21,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f21.f64 = double(temp.f32);
	// stfs f5,-320(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fmuls f2,f2,f21
	ctx.f2.f64 = double(float(ctx.f2.f64 * f21.f64));
	// lfs f23,-316(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -316);
	f23.f64 = double(temp.f32);
	// lfs f5,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f5.f64 = double(temp.f32);
	// stfs f18,-328(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// fmadds f31,f5,f23,f31
	f31.f64 = double(float(std::fma(ctx.f5.f64, f23.f64, f31.f64)));
	// stfs f7,-312(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// fmadds f29,f5,f15,f29
	f29.f64 = double(float(std::fma(ctx.f5.f64, f15.f64, f29.f64)));
	// lfs f18,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	f18.f64 = double(temp.f32);
	// lfs f26,-348(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -348);
	f26.f64 = double(temp.f32);
	// lfs f7,-308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -308);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f26,f26,f18,f22
	f26.f64 = double(float(std::fma(f26.f64, f18.f64, f22.f64)));
	// stfs f17,-316(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// fadds f17,f10,f1
	f17.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f2,-308(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// lfs f16,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	f16.f64 = double(temp.f32);
	// lfs f14,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f14.f64 = double(temp.f32);
	// lfs f2,620(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f2.f64 = double(temp.f32);
	// lfs f23,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f23.f64 = double(temp.f32);
	// lfs f15,616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 616);
	f15.f64 = double(temp.f32);
	// stfs f9,-344(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// fnmsubs f9,f27,f19,f6
	ctx.f9.f64 = double(float(-std::fma(f27.f64, f19.f64, -ctx.f6.f64)));
	// fnmsubs f6,f24,f19,f4
	ctx.f6.f64 = double(float(-std::fma(f24.f64, f19.f64, -ctx.f4.f64)));
	// stfs f30,-288(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmadds f4,f5,f7,f28
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, f28.f64)));
	// lfs f22,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	f22.f64 = double(temp.f32);
	// lfs f30,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	f30.f64 = double(temp.f32);
	// fnmsubs f12,f12,f19,f3
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, f19.f64, -ctx.f3.f64)));
	// lfs f28,-316(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -316);
	f28.f64 = double(temp.f32);
	// fnmsubs f8,f16,f11,f8
	ctx.f8.f64 = double(float(-std::fma(f16.f64, ctx.f11.f64, -ctx.f8.f64)));
	// stfs f28,8(r28)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// fmadds f3,f5,f16,f25
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, f16.f64, f25.f64)));
	// stfs f22,4(r28)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f30,12(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// stfs f13,-348(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// lfs f13,-324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,-312(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -312);
	f30.f64 = double(temp.f32);
	// stfs f30,0(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f10,-284(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// fnmsubs f12,f14,f11,f12
	ctx.f12.f64 = double(float(-std::fma(f14.f64, ctx.f11.f64, -ctx.f12.f64)));
	// lfs f10,-328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f13,f11,f9
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f9.f64)));
	// stfs f1,-300(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fmadds f7,f5,f13,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f10.f64)));
	// stfs f0,-280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fnmsubs f13,f21,f15,f26
	ctx.f13.f64 = double(float(-std::fma(f21.f64, f15.f64, -f26.f64)));
	// lfs f1,-332(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f5,f14,f20
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f14.f64, f20.f64)));
	// lfs f10,-336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f10.f64 = double(temp.f32);
	// lfs f27,-308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -308);
	f27.f64 = double(temp.f32);
	// fmadds f10,f5,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, ctx.f10.f64)));
	// fmadds f5,f5,f23,f27
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, f23.f64, f27.f64)));
	// lfs f27,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	f27.f64 = double(temp.f32);
	// fnmsubs f6,f2,f1,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f1.f64, -ctx.f6.f64)));
	// lfs f26,-344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -344);
	f26.f64 = double(temp.f32);
	// fadds f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 + f27.f64));
	// lfs f21,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	f21.f64 = double(temp.f32);
	// fadds f31,f31,f21
	f31.f64 = double(float(f31.f64 + f21.f64));
	// stfs f17,-304(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f25,f11,f26
	f25.f64 = double(float(ctx.f11.f64 + f26.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f7,-276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f2,f23,f2,f13
	ctx.f2.f64 = double(float(-std::fma(f23.f64, ctx.f2.f64, -ctx.f13.f64)));
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f28.f64 = double(temp.f32);
	// stfs f28,4(r10)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmr f28,f17
	f28.f64 = f17.f64;
	// stfs f9,12(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// lfs f28,-292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -292);
	f28.f64 = double(temp.f32);
	// lfs f13,-284(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f12,f28
	f27.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fadds f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 + ctx.f13.f64));
	// lfs f24,-348(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -348);
	f24.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f1,-300(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f1.f64 = double(temp.f32);
	// fadds f22,f6,f24
	f22.f64 = double(float(ctx.f6.f64 + f24.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f17,8(r10)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f6,f4,f7
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// lfs f23,-280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -280);
	f23.f64 = double(temp.f32);
	// lfs f29,-352(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -352);
	f29.f64 = double(temp.f32);
	// lfs f9,-296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f9.f64 = double(temp.f32);
	// fneg f0,f29
	ctx.f0.u64 = f29.u64 ^ 0x8000000000000000;
	// stfs f0,-352(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// fadds f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f13,f12,f28
	ctx.f13.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fadds f12,f11,f26
	ctx.f12.f64 = double(float(ctx.f11.f64 + f26.f64));
	// lfs f11,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f7,f5,f2
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f5,f2,f23
	ctx.f5.f64 = double(float(ctx.f2.f64 + f23.f64));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f2,f31,f30
	ctx.f2.f64 = double(float(f31.f64 + f30.f64));
	// lfs f31,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f31.f64 = double(temp.f32);
	// stfs f31,12(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f7,f23
	ctx.f11.f64 = double(float(ctx.f7.f64 + f23.f64));
	// stfs f8,8(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fadds f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 + f24.f64));
	// lfs f7,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f4,12(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f9,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f4,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r7)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f28,0(r7)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f27,8(r7)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f25,8(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f26,0(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f4,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f22,8(r30)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f24,0(r30)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// lfs f7,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f23,0(r29)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f2,-4(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bdnz 0x8237296c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237296C;
	// stfs f0,10572(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 10572, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cbc
	ctx.lr = 0x82372DEC;
	// b 0x826a1ce4
	return;
loc_82372DF0:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823731a4
	if (ctx.cr6.eq) goto loc_823731A4;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// subf r20,r5,r4
	r20.u64 = ctx.r4.u64 - ctx.r5.u64;
	// rlwinm r26,r7,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r7,r11
	r25.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r24,r7,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r6,30,2,31
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r23,r6,30
	r23.u64 = ctx.r6.u32 & 0x3;
	// addi r9,r3,344
	ctx.r9.s64 = ctx.r3.s64 + 344;
	// li r19,1
	r19.s64 = 1;
	// lis r5,-32129
	ctx.r5.s64 = -2105606144;
loc_82372E28:
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// slw r10,r19,r21
	ctx.r10.u64 = r21.u8 & 0x20 ? 0 : (r19.u32 << (r21.u8 & 0x3F));
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r8,r20,r22
	ctx.r8.u64 = r20.u64 + r22.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82372eb4
	if (!ctx.cr6.eq) goto loc_82372EB4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82372e8c
	if (ctx.cr6.eq) goto loc_82372E8C;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r24,2,0,29
	r31.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82372E60:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r6,r10
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lfsx f11,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// stfsx f11,r6,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// bdnz 0x82372e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372E60;
loc_82372E8C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82373190
	if (ctx.cr6.eq) goto loc_82373190;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82372EA4:
	// lfsux f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsux f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x82372ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372EA4;
	// b 0x82373190
	goto loc_82373190;
loc_82372EB4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823730f0
	if (ctx.cr6.eq) goto loc_823730F0;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r26,2,0,29
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,596
	ctx.r11.s64 = ctx.r3.s64 + 596;
	// rlwinm r30,r25,2,0,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r24,2,0,29
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82372ED8:
	// lfs f0,10568(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,10568(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 10568, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f3,f10,f11,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f4.f64)));
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f1,f9,f8,f3
	ctx.f1.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f8.f64, -ctx.f3.f64)));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f7,f11,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f11,f6,f8,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f12.f64)));
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fnmsubs f7,f10,f2,f11
	ctx.f7.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f2.f64, -ctx.f11.f64)));
	// fnmsubs f6,f9,f0,f7
	ctx.f6.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f7.f64)));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f5,f13,f2,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f6.f64)));
	// fmadds f4,f8,f0,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,10568(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f3,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,10568(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 10568, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f13,f12,f0
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// fnmsubs f8,f10,f9,f11
	ctx.f8.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f11.f64)));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f3,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f4,f5,f9,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, ctx.f6.f64)));
	// lfs f9,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fnmsubs f1,f2,f3,f4
	ctx.f1.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f3.f64, -ctx.f4.f64)));
	// fnmsubs f12,f13,f0,f1
	ctx.f12.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f1.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f10,f11,f3,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f12.f64)));
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfsx f8,r6,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lfs f0,10568(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f7,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,10568(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 10568, temp.u32);
	// lfs f3,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fnmsubs f1,f2,f3,f4
	ctx.f1.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f3.f64, -ctx.f4.f64)));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f12,f13,f0,f1
	ctx.f12.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f1.f64)));
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f11,f3,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f12.f64)));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f8.f64)));
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f1,f5,f6,f7
	ctx.f1.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f6.f64, -ctx.f7.f64)));
	// lfs f4,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fnmsubs f0,f4,f9,f1
	ctx.f0.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f1.f64)));
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f13,f3,f6,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f0.f64)));
	// fmadds f12,f2,f9,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfsx f12,r6,r31
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// lfsx f11,r8,r30
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// lfs f0,10568(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,10568(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 10568, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fnmsubs f3,f9,f8,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f8.f64, -ctx.f4.f64)));
	// lfs f6,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fnmsubs f0,f7,f6,f3
	ctx.f0.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f6.f64, -ctx.f3.f64)));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f2,f8,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f0.f64)));
	// fmadds f10,f1,f6,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f11.f64)));
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fnmsubs f5,f9,f13,f10
	ctx.f5.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fnmsubs f4,f8,f12,f5
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f5.f64)));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f3,f7,f13,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f2,f6,f12,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f3.f64)));
	// stfsx f2,r6,r30
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r6.u32 + r30.u32, temp.u32);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// bdnz 0x82372ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372ED8;
loc_823730F0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82373190
	if (ctx.cr6.eq) goto loc_82373190;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r11,r3,596
	ctx.r11.s64 = ctx.r3.s64 + 596;
	// subf r6,r10,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8237310C:
	// lfs f0,10568(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 10568);
	ctx.f0.f64 = double(temp.f32);
	// lfsux f13,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,10568(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 10568, temp.u32);
	// lfs f5,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fnmsubs f6,f8,f7,f9
	ctx.f6.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f7.f64, -ctx.f9.f64)));
	// lfs f3,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f2,f11,f5,f6
	ctx.f2.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f5.f64, -ctx.f6.f64)));
	// stfs f2,-4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f13,f10,f8,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f2.f64)));
	// fmadds f12,f4,f5,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f13.f64)));
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fnmsubs f8,f1,f3,f12
	ctx.f8.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f3.f64, -ctx.f12.f64)));
	// fnmsubs f7,f10,f11,f8
	ctx.f7.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f8.f64)));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f6,f0,f3,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f7.f64)));
	// fmadds f5,f9,f11,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfsux f5,r6,r10
	temp.f32 = float(ctx.f5.f64);
	ea = ctx.r6.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x8237310c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237310C;
loc_82373190:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r21,r7
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82372e28
	if (ctx.cr6.lt) goto loc_82372E28;
loc_823731A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cbc
	ctx.lr = 0x823731B0;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_823FFEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FFEC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ffeec
	if (!ctx.cr6.gt) goto loc_823FFEEC;
loc_823FFEE0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823fff64
	goto loc_823FFF64;
loc_823FFEEC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823fff60
	if (!ctx.cr6.lt) goto loc_823FFF60;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bgt cr6,0x823fff0c
	if (ctx.cr6.gt) goto loc_823FFF0C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823FFF0C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x823fff1c
	if (!ctx.cr6.lt) goto loc_823FFF1C;
	// li r30,16
	r30.s64 = 16;
	// b 0x823fff28
	goto loc_823FFF28;
loc_823FFF1C:
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// ble cr6,0x823fff28
	if (!ctx.cr6.gt) goto loc_823FFF28;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_823FFF28:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x823FFF34;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823ffee0
	if (ctx.cr0.eq) goto loc_823FFEE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x823FFF4C;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x823FFF58;
	sub_823F0350(ctx, base);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
loc_823FFF60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823FFF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82404890) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82404828
	sub_82404828(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82404C80) {
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
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r31,-32128
	r31.s64 = -2105540608;
	// addi r11,r11,19040
	ctx.r11.s64 = ctx.r11.s64 + 19040;
	// addi r10,r10,19288
	ctx.r10.s64 = ctx.r10.s64 + 19288;
	// stw r11,-29088(r9)
	REX_STORE_U32(ctx.r9.u32 + -29088, ctx.r11.u32);
	// stw r10,-29084(r31)
	REX_STORE_U32(r31.u32 + -29084, ctx.r10.u32);
	// bl 0x82404b58
	ctx.lr = 0x82404CB4;
	sub_82404B58(ctx, base);
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

DEFINE_REX_FUNC(sub_82407D68) {
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
	ctx.lr = 0x82407D70;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x822d3400
	ctx.lr = 0x82407D84;
	sub_822D3400(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d3498
	ctx.lr = 0x82407D98;
	sub_822D3498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d3498
	ctx.lr = 0x82407DAC;
	sub_822D3498(ctx, base);
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82407de4
	if (ctx.cr6.lt) goto loc_82407DE4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82407de4
	if (ctx.cr6.gt) goto loc_82407DE4;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82407DE4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x82407df8
	if (!ctx.cr6.lt) goto loc_82407DF8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82407DF8:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r31,0
	r31.s64 = 0;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82407e40
	if (ctx.cr6.eq) goto loc_82407E40;
loc_82407E10:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82407E20;
	sub_826A1E70(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r30,r30,r10
	r30.u64 = r30.u64 + ctx.r10.u64;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82407e10
	if (ctx.cr6.lt) goto loc_82407E10;
loc_82407E40:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d3520
	ctx.lr = 0x82407E48;
	sub_822D3520(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d3520
	ctx.lr = 0x82407E50;
	sub_822D3520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8240D568) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x8240D570;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
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
	// beq cr6,0x8240d5a4
	if (ctx.cr6.eq) goto loc_8240D5A4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240D5A0;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240D5A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240d5c0
	if (ctx.cr6.eq) goto loc_8240D5C0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240D5BC;
	sub_824094E0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240D5C0:
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
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
	// bne 0x8240d628
	if (!ctx.cr0.eq) goto loc_8240D628;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240d630
	goto loc_8240D630;
loc_8240D628:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240D630:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d688
	if (ctx.cr6.eq) goto loc_8240D688;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f12,16224(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16232(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16228(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
loc_8240D658:
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
	// blt cr6,0x8240d658
	if (ctx.cr6.lt) goto loc_8240D658;
loc_8240D688:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d6a0
	if (ctx.cr6.eq) goto loc_8240D6A0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240D6A0;
	sub_82409A88(ctx, base);
loc_8240D6A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240d8a8
	if (!ctx.cr6.gt) goto loc_8240D8A8;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,1,0,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lfd f8,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f9,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,20204(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20204);
	ctx.f7.f64 = double(temp.f32);
loc_8240D700:
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
	// beq cr6,0x8240d828
	if (ctx.cr6.eq) goto loc_8240D828;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r5
	r29.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
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
loc_8240D828:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240d838
	if (ctx.cr6.lt) goto loc_8240D838;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240D838:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240d850
	if (!ctx.cr6.gt) goto loc_8240D850;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x8240d854
	if (ctx.cr6.lt) goto loc_8240D854;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x8240d854
	goto loc_8240D854;
loc_8240D850:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240D854:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240d864
	if (ctx.cr6.lt) goto loc_8240D864;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240D864:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240d87c
	if (!ctx.cr6.gt) goto loc_8240D87C;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x8240d880
	if (ctx.cr6.lt) goto loc_8240D880;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x8240d880
	goto loc_8240D880;
loc_8240D87C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240D880:
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r11,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240d700
	if (ctx.cr6.lt) goto loc_8240D700;
loc_8240D8A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8241EDA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8241EDB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm. r11,r3,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// beq 0x8241ee34
	if (ctx.cr0.eq) goto loc_8241EE34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82400740
	ctx.lr = 0x8241EDDC;
	sub_82400740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ee50
	if (ctx.cr0.lt) goto loc_8241EE50;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241EDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,92(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241EE18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8241EE24;
	sub_826A1E70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8241ee50
	goto loc_8241EE50;
loc_8241EE34:
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r8,r10,-4704
	ctx.r8.s64 = ctx.r10.s64 + -4704;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8241c6d8
	ctx.lr = 0x8241EE50;
	sub_8241C6D8(ctx, base);
loc_8241EE50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82425A08) {
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
	ctx.lr = 0x82425A10;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r7,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82425acc
	if (ctx.cr0.eq) goto loc_82425ACC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82425a78
	if (ctx.cr6.eq) goto loc_82425A78;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r11,133
	ctx.r11.s64 = 133;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425A70;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
loc_82425A78:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82425ab0
	if (ctx.cr6.eq) goto loc_82425AB0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r11,267
	ctx.r11.s64 = 267;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82425A94:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425AA8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
loc_82425AB0:
	// li r31,0
	r31.s64 = 0;
loc_82425AB4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823f0350
	ctx.lr = 0x82425AC0;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd0
	return;
loc_82425ACC:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-23064(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23064);
	// bl 0x82478758
	ctx.lr = 0x82425AE8;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23072(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23072);
	// bl 0x82478758
	ctx.lr = 0x82425B0C;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23080(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23080);
	// bl 0x82478758
	ctx.lr = 0x82425B30;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23088(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23088);
	// bl 0x82478758
	ctx.lr = 0x82425B54;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23096(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23096);
	// bl 0x82478758
	ctx.lr = 0x82425B78;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23664(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23664);
	// bl 0x82478758
	ctx.lr = 0x82425B9C;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23656(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23656);
	// bl 0x82478758
	ctx.lr = 0x82425BC0;
	sub_82478758(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r27,112
	ctx.r3.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(112));
	// bl 0x823f02b8
	ctx.lr = 0x82425BD0;
	sub_823F02B8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82425be8
	if (!ctx.cr0.eq) goto loc_82425BE8;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82425ab4
	goto loc_82425AB4;
loc_82425BE8:
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82425C00:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82425c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425C00;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,20
	ctx.r8.s64 = 20;
loc_82425C14:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82425c3c
	if (ctx.cr6.eq) goto loc_82425C3C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x82425c3c
	if (ctx.cr0.eq) goto loc_82425C3C;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_82425C34:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82425c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425C34;
loc_82425C3C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82425c14
	if (!ctx.cr0.eq) goto loc_82425C14;
	// lwz r14,200(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r16,196(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r17,192(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r18,188(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r19,184(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r28,180(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r24,176(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// beq cr6,0x82425cc0
	if (ctx.cr6.eq) goto loc_82425CC0;
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// subf r10,r28,r24
	ctx.r10.u64 = r24.u64 - r28.u64;
	// subf r9,r28,r19
	ctx.r9.u64 = r19.u64 - r28.u64;
	// subf r8,r28,r18
	ctx.r8.u64 = r18.u64 - r28.u64;
	// subf r7,r28,r17
	ctx.r7.u64 = r17.u64 - r28.u64;
	// subf r6,r28,r16
	ctx.r6.u64 = r16.u64 - r28.u64;
	// subf r5,r28,r14
	ctx.r5.u64 = r14.u64 - r28.u64;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - r28.u64;
loc_82425C94:
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stwx r26,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r26.u32);
	// stwx r25,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r25.u32);
	// stwx r23,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, r23.u32);
	// stwx r22,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, r22.u32);
	// stwx r21,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, r21.u32);
	// stwx r20,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, r20.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82425c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425C94;
loc_82425CC0:
	// clrlwi r22,r27,12
	r22.u64 = r27.u32 & 0xFFFFF;
	// lwz r20,96(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,404(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r15,r22,4112
	r15.u64 = r22.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425CF0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r25,100(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r22,8208
	ctx.r5.u64 = r22.u64 | 537919488;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425D1C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,104(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425D48;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r27,108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// oris r23,r22,8256
	r23.u64 = r22.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425D78;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,112(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r22,4208
	ctx.r5.u64 = r22.u64 | 275775488;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425DA4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r21,116(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// oris r5,r22,4144
	ctx.r5.u64 = r22.u64 | 271581184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425DD0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,120(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// oris r27,r22,8272
	r27.u64 = r22.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425E00;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r28,124(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425E2C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,128(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425E58;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425E84;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,136(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425EB0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r28,140(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425EDC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r24,144(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425F08;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425F34;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r25,152(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425F60;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,156(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r7,404(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r22,8224
	ctx.r5.u64 = r22.u64 | 538968064;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425F8C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r28,160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425FB8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425FE4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r28,168(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426010;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r27,172(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,204(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242603C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
	// lwz r6,412(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82426074
	if (ctx.cr6.eq) goto loc_82426074;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// oris r5,r22,4096
	ctx.r5.u64 = r22.u64 | 268435456;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242606C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82425ab4
	if (ctx.cr0.lt) goto loc_82425AB4;
loc_82426074:
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82425ab0
	if (ctx.cr6.eq) goto loc_82425AB0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// oris r5,r22,4096
	ctx.r5.u64 = r22.u64 | 268435456;
	// b 0x82425a94
	goto loc_82425A94;
}

DEFINE_REX_FUNC(sub_824567A0) {
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
	// lwz r11,1808(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1808);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,419
	ctx.r11.s64 = ctx.r11.s64 + 419;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82456850
	if (ctx.cr6.lt) goto loc_82456850;
	// bne cr6,0x82456828
	if (!ctx.cr6.eq) goto loc_82456828;
	// lwz r11,1812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1812);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,1544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,1812(r3)
	REX_STORE_U32(ctx.r3.u32 + 1812, ctx.r10.u32);
	// stw r11,1544(r3)
	REX_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x824567EC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245683c
	if (ctx.cr0.lt) goto loc_8245683C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x824555b8
	ctx.lr = 0x82456804;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245683c
	if (ctx.cr0.lt) goto loc_8245683C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82456820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82456820:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245683c
	if (ctx.cr0.lt) goto loc_8245683C;
loc_82456828:
	// lwz r11,1808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r11.u32);
	// bl 0x82473430
	ctx.lr = 0x8245683C;
	sub_82473430(ctx, base);
loc_8245683C:
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
loc_82456850:
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x82456864;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245683c
	if (ctx.cr0.lt) goto loc_8245683C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x824555b8
	ctx.lr = 0x8245687C;
	sub_824555B8(ctx, base);
	// b 0x82456820
	goto loc_82456820;
}

DEFINE_REX_FUNC(sub_8245E360) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,25716
	ctx.r5.s64 = ctx.r11.s64 + 25716;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E38C;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473650
	ctx.lr = 0x8245E394;
	sub_82473650(ctx, base);
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

DEFINE_REX_FUNC(sub_8245E8F8) {
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
	// addi r5,r11,18640
	ctx.r5.s64 = ctx.r11.s64 + 18640;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E924;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824746e8
	ctx.lr = 0x8245E92C;
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

DEFINE_REX_FUNC(sub_824602D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x824602E0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82460344
	if (ctx.cr0.eq) goto loc_82460344;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82460344
	if (!ctx.cr6.eq) goto loc_82460344;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82460510
	if (ctx.cr6.eq) goto loc_82460510;
loc_82460344:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82460394
	if (!ctx.cr6.gt) goto loc_82460394;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82460364:
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82460384
	if (!ctx.cr6.eq) goto loc_82460384;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// blt cr6,0x82460384
	if (ctx.cr6.lt) goto loc_82460384;
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
loc_82460384:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82460364
	if (ctx.cr6.lt) goto loc_82460364;
loc_82460394:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824787f8
	ctx.lr = 0x824603AC;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x824603c0
	if (!ctx.cr6.eq) goto loc_824603C0;
loc_824603B4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8246051c
	goto loc_8246051C;
loc_824603C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwzx r26,r10,r11
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82477420
	ctx.lr = 0x824603D8;
	sub_82477420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246051c
	if (ctx.cr0.lt) goto loc_8246051C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824603F0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x82460408;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824603b4
	if (ctx.cr6.eq) goto loc_824603B4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r28,r10
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824781d0
	ctx.lr = 0x82460438;
	sub_824781D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246051c
	if (ctx.cr0.lt) goto loc_8246051C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r29,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r29.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stwx r29,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r29.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x824603f0
	if (ctx.cr6.lt) goto loc_824603F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824604fc
	if (!ctx.cr6.gt) goto loc_824604FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_824604D8:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x824604d8
	if (ctx.cr6.gt) goto loc_824604D8;
loc_824604FC:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
loc_82460510:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
loc_8246051C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824730D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824730E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r9,29440
	ctx.r9.s64 = 1929379840;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r8,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r29,r8,12
	r29.u64 = ctx.r8.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82473138
	if (ctx.cr6.eq) goto loc_82473138;
	// lis r9,29584
	ctx.r9.s64 = 1938817024;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824732cc
	if (ctx.cr6.eq) goto loc_824732CC;
	// lis r9,29600
	ctx.r9.s64 = 1939865600;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824732c4
	if (ctx.cr6.eq) goto loc_824732C4;
	// lis r9,29616
	ctx.r9.s64 = 1940914176;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824732bc
	if (ctx.cr6.eq) goto loc_824732BC;
	// lis r9,29632
	ctx.r9.s64 = 1941962752;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247313c
	if (!ctx.cr6.eq) goto loc_8247313C;
loc_82473138:
	// li r10,2
	ctx.r10.s64 = 2;
loc_8247313C:
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x824715b8
	ctx.lr = 0x8247314C;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
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
	ctx.lr = 0x82473188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824731B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824731E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82473220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82473254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247327C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824732A8;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824732b4
	if (ctx.cr0.lt) goto loc_824732B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824732B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_824732BC:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x8247313c
	goto loc_8247313C;
loc_824732C4:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8247313c
	goto loc_8247313C;
loc_824732CC:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8247313c
	goto loc_8247313C;
}

DEFINE_REX_FUNC(sub_8247C858) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247C9A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8247C9B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r28,r5,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_8247C9C0:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwzx r31,r10,r9
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// beq cr6,0x8247ca54
	if (ctx.cr6.eq) goto loc_8247CA54;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247ca54
	if (ctx.cr0.eq) goto loc_8247CA54;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ca14
	if (ctx.cr6.eq) goto loc_8247CA14;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8247CA14:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ca48
	if (ctx.cr6.eq) goto loc_8247CA48;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
loc_8247CA48:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8247CA54:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8247ca70
	if (ctx.cr6.eq) goto loc_8247CA70;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247c9a8
	ctx.lr = 0x8247CA70;
	sub_8247C9A8(ctx, base);
loc_8247CA70:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8247ca84
	if (ctx.cr6.eq) goto loc_8247CA84;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8247c9c0
	goto loc_8247C9C0;
loc_8247CA84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8248C8D0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8248C8D8;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248cd64
	if (!ctx.cr6.gt) goto loc_8248CD64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r25,0
	r25.s64 = 0;
	// lfd f30,32424(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// lfd f31,-3744(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_8248C918:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r30,r11,r25
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248cd48
	if (ctx.cr6.eq) goto loc_8248CD48;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248cd48
	if (ctx.cr6.eq) goto loc_8248CD48;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x8248c954
	if (!ctx.cr6.eq) goto loc_8248C954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481098
	ctx.lr = 0x8248C950;
	sub_82481098(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_8248C954:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248c9d4
	if (ctx.cr6.eq) goto loc_8248C9D4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8248c9d4
	if (!ctx.cr6.eq) goto loc_8248C9D4;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8248c9c4
	if (ctx.cr6.eq) goto loc_8248C9C4;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248C9A8:
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, ctx.xer);
	// beq cr6,0x8248c9c4
	if (ctx.cr6.eq) goto loc_8248C9C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8248c9a8
	if (ctx.cr6.lt) goto loc_8248C9A8;
loc_8248C9C4:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8248c9d8
	goto loc_8248C9D8;
loc_8248C9D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8248C9D8:
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// beq 0x8248c9f8
	if (ctx.cr0.eq) goto loc_8248C9F8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x8248c9fc
	goto loc_8248C9FC;
loc_8248C9F8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_8248C9FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248cb5c
	if (ctx.cr0.eq) goto loc_8248CB5C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8248cb5c
	if (!ctx.cr6.eq) goto loc_8248CB5C;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8248cb04
	if (ctx.cr6.eq) goto loc_8248CB04;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248CA54:
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// beq cr6,0x8248cab8
	if (ctx.cr6.eq) goto loc_8248CAB8;
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8248cab8
	if (!ctx.cr6.eq) goto loc_8248CAB8;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8248cab8
	if (!ctx.cr6.eq) goto loc_8248CAB8;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8248cab8
	if (!ctx.cr6.eq) goto loc_8248CAB8;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8248cab8
	if (!ctx.cr6.eq) goto loc_8248CAB8;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8248cab8
	if (!ctx.cr6.eq) goto loc_8248CAB8;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,24(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8248cacc
	if (ctx.cr6.eq) goto loc_8248CACC;
loc_8248CAB8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248ca54
	if (ctx.cr6.lt) goto loc_8248CA54;
	// b 0x8248cb04
	goto loc_8248CB04;
loc_8248CACC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8248cb00
	if (!ctx.cr6.eq) goto loc_8248CB00;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248CADC:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248cadc
	if (ctx.cr6.lt) goto loc_8248CADC;
	// li r24,1
	r24.s64 = 1;
loc_8248CB00:
	// stw r8,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r8.u32);
loc_8248CB04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8248cd44
	if (!ctx.cr6.eq) goto loc_8248CD44;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r7,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r7.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248cd44
	if (ctx.cr6.lt) goto loc_8248CD44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 96);
	// li r5,4007
	ctx.r5.s64 = 4007;
	// addi r6,r11,-22584
	ctx.r6.s64 = ctx.r11.s64 + -22584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x8248CB50;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8248cd80
	goto loc_8248CD80;
loc_8248CB5C:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248cd48
	if (ctx.cr0.eq) goto loc_8248CD48;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248cd48
	if (ctx.cr6.eq) goto loc_8248CD48;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8248cd48
	if (!ctx.cr6.eq) goto loc_8248CD48;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8248cbc4
	if (ctx.cr6.eq) goto loc_8248CBC4;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8248CBA8:
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8248cbc4
	if (ctx.cr6.eq) goto loc_8248CBC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8248cba8
	if (ctx.cr6.lt) goto loc_8248CBA8;
loc_8248CBC4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8248cc4c
	if (ctx.cr0.eq) goto loc_8248CC4C;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x8248cc4c
	if (!ctx.cr6.eq) goto loc_8248CC4C;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r5,r7,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8248cc4c
	if (ctx.cr0.eq) goto loc_8248CC4C;
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8248cc34
	if (!ctx.cr0.eq) goto loc_8248CC34;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8248cc4c
	if (ctx.cr0.eq) goto loc_8248CC4C;
loc_8248CC34:
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8248cca8
	goto loc_8248CCA8;
loc_8248CC4C:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248cd48
	if (ctx.cr0.eq) goto loc_8248CD48;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8248cd48
	if (!ctx.cr6.eq) goto loc_8248CD48;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8248cd48
	if (ctx.cr0.eq) goto loc_8248CD48;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248cc90
	if (!ctx.cr0.eq) goto loc_8248CC90;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248cd48
	if (ctx.cr0.eq) goto loc_8248CD48;
loc_8248CC90:
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8248CCA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x8248cd00
	if (!ctx.cr6.eq) goto loc_8248CD00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248cd44
	if (!ctx.cr6.gt) goto loc_8248CD44;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8248CCC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8248cce8
	if (!ctx.cr6.eq) goto loc_8248CCE8;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_8248CCE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248ccc4
	if (ctx.cr6.lt) goto loc_8248CCC4;
	// b 0x8248cd44
	goto loc_8248CD44;
loc_8248CD00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248cd40
	if (!ctx.cr6.gt) goto loc_8248CD40;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8248CD0C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8248cd2c
	if (!ctx.cr6.eq) goto loc_8248CD2C;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_8248CD2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248cd0c
	if (ctx.cr6.lt) goto loc_8248CD0C;
loc_8248CD40:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8248CD44:
	// li r27,1
	r27.s64 = 1;
loc_8248CD48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248c918
	if (ctx.cr6.lt) goto loc_8248C918;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8248cd6c
	if (!ctx.cr6.eq) goto loc_8248CD6C;
loc_8248CD64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8248cd80
	goto loc_8248CD80;
loc_8248CD6C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8248cd7c
	if (ctx.cr6.eq) goto loc_8248CD7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481920
	ctx.lr = 0x8248CD7C;
	sub_82481920(ctx, base);
loc_8248CD7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248CD80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824B6E60) {
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
	// bl 0x826a1c88
	ctx.lr = 0x824B6E68;
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,260(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r20,0
	r20.s64 = 0;
	// lis r3,8272
	ctx.r3.s64 = 542113792;
	// mr r21,r20
	r21.u64 = r20.u64;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f13,3804(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mr r28,r20
	r28.u64 = r20.u64;
	// clrlwi r23,r8,12
	r23.u64 = ctx.r8.u32 & 0xFFFFF;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// lwzx r6,r29,r10
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// bne cr6,0x824b6f70
	if (!ctx.cr6.eq) goto loc_824B6F70;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b6f70
	if (ctx.cr0.eq) goto loc_824B6F70;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824b6f70
	if (!ctx.cr6.eq) goto loc_824B6F70;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_824B6F18:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
loc_824B6F30:
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824b70f4
	if (ctx.cr6.eq) goto loc_824B70F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r31,256(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 256);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// subf r4,r5,r24
	ctx.r4.u64 = r24.u64 - ctx.r5.u64;
loc_824B6F54:
	// lwzx r11,r4,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// beq cr6,0x824b7058
	if (ctx.cr6.eq) goto loc_824B7058;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// b 0x824b7064
	goto loc_824B7064;
loc_824B6F70:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b6fa8
	if (!ctx.cr6.eq) goto loc_824B6FA8;
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824b6fa8
	if (ctx.cr0.eq) goto loc_824B6FA8;
	// lwz r6,260(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r6,r6,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824b6fa8
	if (!ctx.cr6.eq) goto loc_824B6FA8;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x824b6f18
	goto loc_824B6F18;
loc_824B6FA8:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824b700c
	if (ctx.cr6.eq) goto loc_824B700C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_824B6FEC:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r8,r28
	r28.u64 = ctx.r8.u64 & r28.u64;
	// bdnz 0x824b6fec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B6FEC;
loc_824B700C:
	// lwz r10,60(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r9,60(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b7034
	if (!ctx.cr6.eq) goto loc_824B7034;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	ctx.f0.f64 = double(temp.f32);
	// b 0x824b7044
	goto loc_824B7044;
loc_824B7034:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824b7540
	if (!ctx.cr0.eq) goto loc_824B7540;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_824B7044:
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824b7540
	if (ctx.cr6.eq) goto loc_824B7540;
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x824b6f30
	goto loc_824B6F30;
loc_824B7058:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
loc_824B7064:
	// lwz r11,88(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// lwz r11,84(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 84);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// lwz r11,60(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// rlwinm. r11,r11,0,11,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824b7540
	if (!ctx.cr0.eq) goto loc_824B7540;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824b70b8
	if (ctx.cr6.eq) goto loc_824B70B8;
	// lwz r9,72(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_824B709C:
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x824b70b8
	if (ctx.cr6.eq) goto loc_824B70B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// blt cr6,0x824b709c
	if (ctx.cr6.lt) goto loc_824B709C;
loc_824B70B8:
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bne cr6,0x824b70cc
	if (!ctx.cr6.eq) goto loc_824B70CC;
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
loc_824B70CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824b70e4
	if (!ctx.cr6.eq) goto loc_824B70E4;
	// lfd f0,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
loc_824B70E4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(r29.u32, r23.u32, ctx.xer);
	// blt cr6,0x824b6f54
	if (ctx.cr6.lt) goto loc_824B6F54;
loc_824B70F4:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f31.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x824b7118
	if (!ctx.cr6.eq) goto loc_824B7118;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b7118
	if (ctx.cr0.eq) goto loc_824B7118;
	// li r22,1024
	r22.s64 = 1024;
	// b 0x824b71e0
	goto loc_824B71E0;
loc_824B7118:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824b7140
	if (!ctx.cr6.eq) goto loc_824B7140;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b7140
	if (ctx.cr0.eq) goto loc_824B7140;
	// li r22,2048
	r22.s64 = 2048;
	// b 0x824b71e0
	goto loc_824B71E0;
loc_824B7140:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824b7168
	if (!ctx.cr6.eq) goto loc_824B7168;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b7168
	if (ctx.cr0.eq) goto loc_824B7168;
	// li r22,4096
	r22.s64 = 4096;
	// b 0x824b71e0
	goto loc_824B71E0;
loc_824B7168:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824b7190
	if (!ctx.cr6.eq) goto loc_824B7190;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b7190
	if (ctx.cr0.eq) goto loc_824B7190;
	// li r22,8192
	r22.s64 = 8192;
	// b 0x824b71e0
	goto loc_824B71E0;
loc_824B7190:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824b71b8
	if (!ctx.cr6.eq) goto loc_824B71B8;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b71b8
	if (ctx.cr0.eq) goto loc_824B71B8;
	// li r22,16384
	r22.s64 = 16384;
	// b 0x824b71e0
	goto loc_824B71E0;
loc_824B71B8:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,16236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b7540
	if (ctx.cr0.eq) goto loc_824B7540;
	// lis r22,0
	r22.s64 = 0;
	// ori r22,r22,32768
	r22.u64 = r22.u64 | 32768;
loc_824B71E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x824b71f4
	if (!ctx.cr6.lt) goto loc_824B71F4;
	// oris r22,r22,8
	r22.u64 = r22.u64 | 524288;
loc_824B71F4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// std r20,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r20.u64);
	// std r20,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r20.u64);
	// beq cr6,0x824b7324
	if (ctx.cr6.eq) goto loc_824B7324;
	// lwz r25,24(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r28,-1
	r28.s64 = -1;
loc_824B721C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7540
	if (ctx.cr6.eq) goto loc_824B7540;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// lis r10,29184
	ctx.r10.s64 = 1912602624;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b7540
	if (ctx.cr6.eq) goto loc_824B7540;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// mr r27,r20
	r27.u64 = r20.u64;
	// stw r28,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r28.u32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r28,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, r28.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// stw r28,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, r28.u32);
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// beq cr6,0x824b7308
	if (ctx.cr6.eq) goto loc_824B7308;
loc_824B7274:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824b72fc
	if (ctx.cr6.eq) goto loc_824B72FC;
	// lwz r31,16(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_824B728C:
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// lwzx r9,r8,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + r24.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b72ec
	if (!ctx.cr6.eq) goto loc_824B72EC;
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r18,r4,r6
	r18.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r19,20(r30)
	r19.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r17,r1,112
	r17.s64 = ctx.r1.s64 + 112;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,16(r9)
	r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r18,r17
	REX_STORE_U32(r18.u32 + r17.u32, ctx.r10.u32);
	// lwzx r18,r16,r8
	r18.u64 = REX_LOAD_U32(r16.u32 + ctx.r8.u32);
	// stwx r9,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b72e8
	if (ctx.cr0.eq) goto loc_824B72E8;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x824b7540
	if (ctx.cr6.lt) goto loc_824B7540;
loc_824B72E8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_824B72EC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x824b728c
	if (ctx.cr6.lt) goto loc_824B728C;
loc_824B72FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// blt cr6,0x824b7274
	if (ctx.cr6.lt) goto loc_824B7274;
loc_824B7308:
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(r27.u32, r29.u32, ctx.xer);
	// bne cr6,0x824b7540
	if (!ctx.cr6.eq) goto loc_824B7540;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(r26.u32, r21.u32, ctx.xer);
	// blt cr6,0x824b721c
	if (ctx.cr6.lt) goto loc_824B721C;
loc_824B7324:
	// mr r24,r20
	r24.u64 = r20.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824b750c
	if (ctx.cr6.eq) goto loc_824B750C;
	// mr r26,r20
	r26.u64 = r20.u64;
loc_824B7334:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwzx r25,r26,r9
	r25.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r27
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824b73e8
	if (ctx.cr6.eq) goto loc_824B73E8;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824B7364;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b7378
	if (ctx.cr0.eq) goto loc_824B7378;
	// bl 0x824773d0
	ctx.lr = 0x824B7370;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824b737c
	goto loc_824B737C;
loc_824B7378:
	// mr r31,r20
	r31.u64 = r20.u64;
loc_824B737C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824b751c
	if (ctx.cr6.eq) goto loc_824B751C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x824B739C;
	sub_82477B60(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt 0x824b752c
	if (ctx.cr0.lt) goto loc_824B752C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82477420
	ctx.lr = 0x824B73B0;
	sub_82477420(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x824b7528
	if (ctx.cr0.lt) goto loc_824B7528;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x824B73CC;
	sub_826A1E70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x824B73D4;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b20
	ctx.lr = 0x824B73DC;
	sub_82477B20(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r29,r31
	r29.u64 = r31.u64;
	// stwx r31,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, r31.u32);
loc_824B73E8:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq 0x824b74fc
	if (ctx.cr0.eq) goto loc_824B74FC;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
loc_824B73F8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x824b7428
	if (!ctx.cr6.lt) goto loc_824B7428;
loc_824B7404:
	// add r10,r26,r11
	ctx.r10.u64 = r26.u64 + ctx.r11.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824b7428
	if (!ctx.cr6.eq) goto loc_824B7428;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824b7404
	if (ctx.cr6.lt) goto loc_824B7404;
loc_824B7428:
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stwx r11,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// or r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 | r22.u64;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b74ec
	if (!ctx.cr6.gt) goto loc_824B74EC;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_824B7488:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,56(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b74d8
	if (!ctx.cr6.eq) goto loc_824B74D8;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r4,r22,0,13,11
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// bge cr6,0x824b74d8
	if (!ctx.cr6.lt) goto loc_824B74D8;
	// rlwinm. r4,r9,0,12,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x824b74d0
	if (ctx.cr0.eq) goto loc_824B74D0;
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// b 0x824b74d4
	goto loc_824B74D4;
loc_824B74D0:
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
loc_824B74D4:
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_824B74D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b7488
	if (ctx.cr6.lt) goto loc_824B7488;
loc_824B74EC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r25.u32, ctx.xer);
	// blt cr6,0x824b73f8
	if (ctx.cr6.lt) goto loc_824B73F8;
loc_824B74FC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(r24.u32, r21.u32, ctx.xer);
	// blt cr6,0x824b7334
	if (ctx.cr6.lt) goto loc_824B7334;
loc_824B750C:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// b 0x824b7544
	goto loc_824B7544;
loc_824B751C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824b7544
	goto loc_824B7544;
loc_824B7528:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824B752C:
	// bl 0x82130e88
	ctx.lr = 0x824B7530;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x824B7538;
	sub_82477B20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x824b7544
	goto loc_824B7544;
loc_824B7540:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824B7544:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824DEF70) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824df0a8
	if (ctx.cr0.eq) goto loc_824DF0A8;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x824df050
	if (ctx.cr0.eq) goto loc_824DF050;
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824defd0
	if (ctx.cr0.eq) goto loc_824DEFD0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824defc4
	if (!ctx.cr6.eq) goto loc_824DEFC4;
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r10,r10,12,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwimi r8,r10,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_824DEFC4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822cdbd0
	ctx.lr = 0x824DEFCC;
	sub_822CDBD0(ctx, base);
	// b 0x824df0e8
	goto loc_824DF0E8;
loc_824DEFD0:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824df040
	if (ctx.cr6.eq) goto loc_824DF040;
loc_824DEFE0:
	// clrlwi r8,r10,20
	ctx.r8.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824deff8
	if (ctx.cr6.eq) goto loc_824DEFF8;
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824defe0
	if (!ctx.cr6.eq) goto loc_824DEFE0;
loc_824DEFF8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824df040
	if (ctx.cr6.eq) goto loc_824DF040;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,209
	ctx.r8.s64 = 209;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r8,3,20,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,24,20,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// bl 0x822cdc88
	ctx.lr = 0x824DF03C;
	sub_822CDC88(ctx, base);
	// b 0x824df0e8
	goto loc_824DF0E8;
loc_824DF040:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822cdc28
	ctx.lr = 0x824DF04C;
	sub_822CDC28(ctx, base);
	// b 0x824df0e8
	goto loc_824DF0E8;
loc_824DF050:
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824df09c
	if (ctx.cr0.eq) goto loc_824DF09C;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r9,63
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 63, ctx.xer);
	// bne cr6,0x824df09c
	if (!ctx.cr6.eq) goto loc_824DF09C;
	// lbz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 12);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-241
	ctx.r7.s64 = -15794176;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r8,23532
	ctx.r8.s64 = ctx.r8.s64 + 23532;
	// lis r6,-16
	ctx.r6.s64 = -1048576;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r7,r9,20,8,11
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF00000) | (ctx.r7.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r6,r9,16,12,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF0FFFF);
	// and r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824DF09C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822cdca0
	ctx.lr = 0x824DF0A4;
	sub_822CDCA0(ctx, base);
	// b 0x824df0e8
	goto loc_824DF0E8;
loc_824DF0A8:
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824df0e0
	if (ctx.cr0.eq) goto loc_824DF0E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_824DF0E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822cdcb8
	ctx.lr = 0x824DF0E8;
	sub_822CDCB8(ctx, base);
loc_824DF0E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EAC10) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EAC48) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EAC90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824EACD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EDCD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824EDCE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26952
	r28.s64 = ctx.r10.s64 + -26952;
	// bne cr6,0x824edd20
	if (!ctx.cr6.eq) goto loc_824EDD20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26824
	ctx.r5.s64 = ctx.r11.s64 + -26824;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDD20;
	sub_824EA978(ctx, base);
loc_824EDD20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a1548
	ctx.lr = 0x824EDD2C;
	sub_825A1548(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824edd50
	if (!ctx.cr0.eq) goto loc_824EDD50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26828
	ctx.r5.s64 = ctx.r11.s64 + -26828;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,623
	ctx.r7.s64 = 623;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDD50;
	sub_824EA978(ctx, base);
loc_824EDD50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a1180
	ctx.lr = 0x824EDD58;
	sub_825A1180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f2538
	ctx.lr = 0x824EDD64;
	sub_824F2538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EF898) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824EF8A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26736
	r28.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ef8dc
	if (!ctx.cr6.eq) goto loc_824EF8DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26132
	ctx.r5.s64 = ctx.r11.s64 + -26132;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF8DC;
	sub_824EA978(ctx, base);
loc_824EF8DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef8f0
	if (!ctx.cr6.eq) goto loc_824EF8F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ef968
	goto loc_824EF968;
loc_824EF8F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ef904
	if (!ctx.cr6.eq) goto loc_824EF904;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ef910
	goto loc_824EF910;
loc_824EF904:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ef92c
	if (!ctx.cr6.eq) goto loc_824EF92C;
loc_824EF910:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26368
	ctx.r5.s64 = ctx.r11.s64 + -26368;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF92C;
	sub_824EA978(ctx, base);
loc_824EF92C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ef954
	if (!ctx.cr6.eq) goto loc_824EF954;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26080
	ctx.r5.s64 = ctx.r11.s64 + -26080;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF954;
	sub_824EA978(ctx, base);
loc_824EF954:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ee070
	ctx.lr = 0x824EF95C;
	sub_824EE070(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824EF968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824F63B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824f6494
	if (ctx.cr6.eq) goto loc_824F6494;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x824f642c
	if (ctx.cr6.lt) goto loc_824F642C;
	// bne cr6,0x824f6494
	if (!ctx.cr6.eq) goto loc_824F6494;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,244
	ctx.r6.s64 = ctx.r10.s64 + 244;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r10,254
	ctx.r5.s64 = ctx.r10.s64 + 254;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x824f6494
	goto loc_824F6494;
loc_824F642C:
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r5,r10,236
	ctx.r5.s64 = ctx.r10.s64 + 236;
	// addi r10,r10,246
	ctx.r10.s64 = ctx.r10.s64 + 246;
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addic r4,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// subfe r8,r4,r8
	temp.u8 = (~ctx.r4.u32 + ctx.r8.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_824F6494:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FFA20) {
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
	ctx.lr = 0x824FFA28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ffa54
	if (ctx.cr0.eq) goto loc_824FFA54;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824ff9c0
	ctx.lr = 0x824FFA50;
	sub_824FF9C0(ctx, base);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_824FFA54:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r28,1
	r28.s64 = 1;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ffb00
	if (!ctx.cr0.eq) goto loc_824FFB00;
	// rlwinm r10,r11,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x824ffa80
	if (ctx.cr6.eq) goto loc_824FFA80;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x824ffa80
	if (ctx.cr6.eq) goto loc_824FFA80;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x824ffb00
	if (!ctx.cr6.eq) goto loc_824FFB00;
loc_824FFA80:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm. r31,r10,25,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824ffa94
	if (!ctx.cr0.eq) goto loc_824FFA94;
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ffb00
	if (ctx.cr0.eq) goto loc_824FFB00;
loc_824FFA94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ffadc
	if (ctx.cr6.eq) goto loc_824FFADC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x824FFAA4;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ffad4
	if (ctx.cr0.eq) goto loc_824FFAD4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x824ffac8
	if (ctx.cr6.lt) goto loc_824FFAC8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824ffacc
	if (!ctx.cr6.gt) goto loc_824FFACC;
loc_824FFAC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FFACC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ffadc
	if (ctx.cr0.eq) goto loc_824FFADC;
loc_824FFAD4:
	// li r28,0
	r28.s64 = 0;
	// b 0x824ffb00
	goto loc_824FFB00;
loc_824FFADC:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ffaf0
	if (ctx.cr0.eq) goto loc_824FFAF0;
	// li r4,3607
	ctx.r4.s64 = 3607;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4270
	ctx.lr = 0x824FFAF0;
	sub_824E4270(ctx, base);
loc_824FFAF0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,6,23,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1FF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_824FFB00:
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82506FD8) {
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
	ctx.lr = 0x82506FE0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// stw r4,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// bl 0x82504880
	ctx.lr = 0x82506FFC;
	sub_82504880(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82504918
	ctx.lr = 0x8250700C;
	sub_82504918(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505e70
	ctx.lr = 0x8250701C;
	sub_82505E70(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
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
	// bne 0x82507068
	if (!ctx.cr0.eq) goto loc_82507068;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82507068
	if (ctx.cr0.eq) goto loc_82507068;
loc_82507044:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507068
	if (!ctx.cr0.eq) goto loc_82507068;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82507044
	if (!ctx.cr6.eq) goto loc_82507044;
loc_82507068:
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 28);
	// addi r19,r20,24
	r19.s64 = r20.s64 + 24;
	// lwz r15,16(r17)
	r15.u64 = REX_LOAD_U32(r17.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r15
	r30.u64 = r15.u64;
	// bne 0x82507148
	if (!ctx.cr0.eq) goto loc_82507148;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82507148
	if (ctx.cr0.eq) goto loc_82507148;
	// li r14,0
	r14.s64 = 0;
loc_82507094:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r10,r10,0,7,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF81FFFFFF;
	// stw r14,32(r31)
	REX_STORE_U32(r31.u32 + 32, r14.u32);
	// clrlwi r9,r9,7
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x825b9300
	ctx.lr = 0x825070C8;
	sub_825B9300(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r10,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505f68
	ctx.lr = 0x825070F0;
	sub_82505F68(ctx, base);
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// ble cr6,0x82507100
	if (!ctx.cr6.gt) goto loc_82507100;
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
loc_82507100:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82507124
	if (ctx.cr0.eq) goto loc_82507124;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x82507124
	if (ctx.cr6.eq) goto loc_82507124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82504a88
	ctx.lr = 0x82507124;
	sub_82504A88(ctx, base);
loc_82507124:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507140
	if (!ctx.cr0.eq) goto loc_82507140;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82507094
	if (!ctx.cr0.eq) goto loc_82507094;
loc_82507140:
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(r30.u32, r15.u32, ctx.xer);
	// bne cr6,0x82507154
	if (!ctx.cr6.eq) goto loc_82507154;
loc_82507148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250714C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd0
	return;
loc_82507154:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824f7678
	ctx.lr = 0x82507164;
	sub_824F7678(ctx, base);
	// addi r24,r3,4
	r24.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = r24.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825071ec
	if (!ctx.cr0.eq) goto loc_825071EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825071ec
	if (ctx.cr0.eq) goto loc_825071EC;
loc_82507194:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825071d0
	if (ctx.cr0.eq) goto loc_825071D0;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825071A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825071c0
	if (ctx.cr6.eq) goto loc_825071C0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825071c0
	if (!ctx.cr0.eq) goto loc_825071C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825071a4
	goto loc_825071A4;
loc_825071C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// beq cr6,0x82507148
	if (ctx.cr6.eq) goto loc_82507148;
loc_825071D0:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825071ec
	if (!ctx.cr0.eq) goto loc_825071EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82507194
	if (!ctx.cr6.eq) goto loc_82507194;
loc_825071EC:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825073b8
	if (!ctx.cr0.eq) goto loc_825073B8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825073b8
	if (ctx.cr0.eq) goto loc_825073B8;
loc_82507204:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507250
	if (!ctx.cr0.eq) goto loc_82507250;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250739c
	if (ctx.cr0.eq) goto loc_8250739C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_82507220:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250723c
	if (ctx.cr6.eq) goto loc_8250723C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250723c
	if (!ctx.cr0.eq) goto loc_8250723C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82507220
	goto loc_82507220;
loc_8250723C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// beq cr6,0x82507148
	if (ctx.cr6.eq) goto loc_82507148;
	// b 0x8250739c
	goto loc_8250739C;
loc_82507250:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x8250739c
	if (!ctx.cr6.eq) goto loc_8250739C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r28,8191
	r28.s64 = 8191;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r10,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r10.u32);
loc_8250727C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825072ec
	if (ctx.cr6.eq) goto loc_825072EC;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825072e4
	if (ctx.cr6.eq) goto loc_825072E4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x825072e4
	if (!ctx.cr6.eq) goto loc_825072E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x825072e4
	if (ctx.cr6.eq) goto loc_825072E4;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x824f75b8
	ctx.lr = 0x825072BC;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825072e4
	if (ctx.cr0.eq) goto loc_825072E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// oris r9,r11,1024
	ctx.r9.u64 = ctx.r11.u64 | 67108864;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x825072e4
	if (!ctx.cr6.lt) goto loc_825072E4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_825072E4:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8250727c
	goto loc_8250727C;
loc_825072EC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r10,19
	r31.u64 = ctx.r10.u32 & 0x1FFF;
	// bne 0x82507324
	if (!ctx.cr0.eq) goto loc_82507324;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82507324
	if (ctx.cr0.eq) goto loc_82507324;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82507330
	if (!ctx.cr6.gt) goto loc_82507330;
loc_82507324:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82507330;
	sub_8251FE00(ctx, base);
loc_82507330:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507378
	if (!ctx.cr0.eq) goto loc_82507378;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82507378
	if (ctx.cr0.eq) goto loc_82507378;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82507384
	if (!ctx.cr6.gt) goto loc_82507384;
loc_82507378:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82507384;
	sub_8251FE00(ctx, base);
loc_82507384:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r28,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r28.u32);
loc_8250739C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825073b8
	if (!ctx.cr0.eq) goto loc_825073B8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82507204
	if (!ctx.cr6.eq) goto loc_82507204;
loc_825073B8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507148
	if (!ctx.cr0.eq) goto loc_82507148;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82507148
	if (ctx.cr0.eq) goto loc_82507148;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// li r26,8191
	r26.s64 = 8191;
	// li r27,8191
	r27.s64 = 8191;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825075f0
	if (!ctx.cr0.eq) goto loc_825075F0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// b 0x825075e4
	goto loc_825075E4;
loc_825073E8:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82507500
	if (ctx.cr6.gt) goto loc_82507500;
loc_825073F8:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825074f8
	if (!ctx.cr0.eq) goto loc_825074F8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825074f8
	if (ctx.cr0.eq) goto loc_825074F8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
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
	// lwzx r30,r10,r4
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8250746c
	if (!ctx.cr0.eq) goto loc_8250746C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
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
	ctx.lr = 0x8250746C;
	sub_824E4308(ctx, base);
loc_8250746C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r26,r30
	r26.u64 = r30.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507484
	if (ctx.cr0.eq) goto loc_82507484;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// b 0x82507490
	goto loc_82507490;
loc_82507484:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82507490:
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
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x825074e4
	if (!ctx.cr0.eq) goto loc_825074E4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825074E4;
	sub_824E4308(ctx, base);
loc_825074E4:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r27,r31
	r27.u64 = r31.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x825073f8
	if (!ctx.cr6.gt) goto loc_825073F8;
loc_825074F8:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x825075d4
	if (!ctx.cr6.gt) goto loc_825075D4;
loc_82507500:
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82507508:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825075d4
	if (ctx.cr6.eq) goto loc_825075D4;
	// lwz r31,16(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82507558
	if (ctx.cr6.eq) goto loc_82507558;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f75b8
	ctx.lr = 0x82507524;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507558
	if (ctx.cr0.eq) goto loc_82507558;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x82507558
	if (!ctx.cr6.eq) goto loc_82507558;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x82507558
	if (ctx.cr6.eq) goto loc_82507558;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x82507560
	if (ctx.cr6.lt) goto loc_82507560;
loc_82507558:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x82507508
	goto loc_82507508;
loc_82507560:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// stw r10,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r10.u32);
loc_82507578:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825075d4
	if (ctx.cr6.eq) goto loc_825075D4;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825075cc
	if (ctx.cr6.eq) goto loc_825075CC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x825075cc
	if (!ctx.cr6.eq) goto loc_825075CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x825075cc
	if (ctx.cr6.eq) goto loc_825075CC;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x824f75b8
	ctx.lr = 0x825075B8;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825075cc
	if (ctx.cr0.eq) goto loc_825075CC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_825075CC:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x82507578
	goto loc_82507578;
loc_825075D4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825075f0
	if (!ctx.cr0.eq) goto loc_825075F0;
loc_825075E4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825073e8
	if (!ctx.cr0.eq) goto loc_825073E8;
loc_825075F0:
	// li r16,1
	r16.s64 = 1;
loc_825075F4:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507660
	if (!ctx.cr0.eq) goto loc_82507660;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82507660
	if (ctx.cr0.eq) goto loc_82507660;
loc_8250760C:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r9,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507648
	if (!ctx.cr0.eq) goto loc_82507648;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8250761C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82507648
	if (ctx.cr6.eq) goto loc_82507648;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r8,r8,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8250763c
	if (!ctx.cr0.eq) goto loc_8250763C;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8250761c
	goto loc_8250761C;
loc_8250763C:
	// oris r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 67108864;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82507648:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507660
	if (!ctx.cr0.eq) goto loc_82507660;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250760c
	if (!ctx.cr6.eq) goto loc_8250760C;
loc_82507660:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825076ec
	if (!ctx.cr0.eq) goto loc_825076EC;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// b 0x825076e0
	goto loc_825076E0;
loc_82507674:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r8,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825076d0
	if (!ctx.cr0.eq) goto loc_825076D0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82507684:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825076d0
	if (ctx.cr6.eq) goto loc_825076D0;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825076bc
	if (ctx.cr6.eq) goto loc_825076BC;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r6,r20
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r20.u32, ctx.xer);
	// bne cr6,0x825076bc
	if (!ctx.cr6.eq) goto loc_825076BC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r6,r10,0,18,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r6,14336
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 14336, ctx.xer);
	// beq cr6,0x825076bc
	if (ctx.cr6.eq) goto loc_825076BC;
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825076c4
	if (!ctx.cr0.eq) goto loc_825076C4;
loc_825076BC:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82507684
	goto loc_82507684;
loc_825076C4:
	// oris r10,r8,1024
	ctx.r10.u64 = ctx.r8.u64 | 67108864;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_825076D0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825076ec
	if (!ctx.cr0.eq) goto loc_825076EC;
loc_825076E0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507674
	if (!ctx.cr0.eq) goto loc_82507674;
loc_825076EC:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825075f4
	if (!ctx.cr0.eq) goto loc_825075F4;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// mr r26,r16
	r26.u64 = r16.u64;
	// mr r28,r14
	r28.u64 = r14.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r23,r14
	r23.u64 = r14.u64;
	// mr r21,r14
	r21.u64 = r14.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// bne 0x82507a50
	if (!ctx.cr0.eq) goto loc_82507A50;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// b 0x82507a44
	goto loc_82507A44;
loc_8250771C:
	// lwz r24,8(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r24,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507a34
	if (ctx.cr0.eq) goto loc_82507A34;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r14.u8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82503f48
	ctx.lr = 0x8250774C;
	sub_82503F48(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82507780
	if (!ctx.cr0.eq) goto loc_82507780;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82507780
	if (ctx.cr0.eq) goto loc_82507780;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x82507780
	if (!ctx.cr6.eq) goto loc_82507780;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82507780:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507830
	if (!ctx.cr0.eq) goto loc_82507830;
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_8250778C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82507830
	if (ctx.cr6.eq) goto loc_82507830;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82507828
	if (ctx.cr6.eq) goto loc_82507828;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82507828
	if (ctx.cr0.eq) goto loc_82507828;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82507828
	if (!ctx.cr6.eq) goto loc_82507828;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14336
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14336, ctx.xer);
	// beq cr6,0x82507828
	if (ctx.cr6.eq) goto loc_82507828;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_825077D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82507820
	if (ctx.cr6.eq) goto loc_82507820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x825077E0;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507814
	if (ctx.cr0.eq) goto loc_82507814;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82507814
	if (!ctx.cr6.eq) goto loc_82507814;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82507814
	if (ctx.cr0.eq) goto loc_82507814;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// beq cr6,0x8250781c
	if (ctx.cr6.eq) goto loc_8250781C;
loc_82507814:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825077d0
	goto loc_825077D0;
loc_8250781C:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82507820:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507830
	if (!ctx.cr0.eq) goto loc_82507830;
loc_82507828:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8250778c
	goto loc_8250778C;
loc_82507830:
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82507874
	if (!ctx.cr6.eq) goto loc_82507874;
	// rlwinm r11,r15,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82507870
	if (!ctx.cr6.lt) goto loc_82507870;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82507874
	if (ctx.cr6.eq) goto loc_82507874;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// bgt cr6,0x82507870
	if (ctx.cr6.gt) goto loc_82507870;
	// neg r11,r15
	ctx.r11.s64 = static_cast<int64_t>(-r15.u64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82507874
	if (!ctx.cr6.lt) goto loc_82507874;
loc_82507870:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82507874:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82501a80
	ctx.lr = 0x8250787C;
	sub_82501A80(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne 0x825078a4
	if (!ctx.cr0.eq) goto loc_825078A4;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x825078a4
	if (ctx.cr6.eq) goto loc_825078A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825078a4
	if (ctx.cr6.eq) goto loc_825078A4;
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x825078a4
	if (ctx.cr6.eq) goto loc_825078A4;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_825078A4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507930
	if (!ctx.cr0.eq) goto loc_82507930;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
loc_825078B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82507930
	if (ctx.cr6.eq) goto loc_82507930;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82507924
	if (ctx.cr6.eq) goto loc_82507924;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82507924
	if (ctx.cr0.eq) goto loc_82507924;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,380(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82507924
	if (!ctx.cr6.eq) goto loc_82507924;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14336
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14336, ctx.xer);
	// beq cr6,0x82507924
	if (ctx.cr6.eq) goto loc_82507924;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r8,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x82507924
	if (ctx.cr6.eq) goto loc_82507924;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8250791c
	if (!ctx.cr6.eq) goto loc_8250791C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82507924
	goto loc_82507924;
loc_8250791C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8250792c
	if (!ctx.cr6.eq) goto loc_8250792C;
loc_82507924:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825078b4
	goto loc_825078B4;
loc_8250792C:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82507930:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507990
	if (!ctx.cr0.eq) goto loc_82507990;
	// rlwinm r11,r24,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82507974
	if (ctx.cr6.eq) goto loc_82507974;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82507958
	if (ctx.cr6.eq) goto loc_82507958;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x82507990
	if (!ctx.cr6.eq) goto loc_82507990;
	// b 0x82507988
	goto loc_82507988;
loc_82507958:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507990
	if (!ctx.cr0.eq) goto loc_82507990;
	// b 0x82507988
	goto loc_82507988;
loc_82507974:
	// lwz r4,48(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r3,44(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 44);
	// bl 0x824f7010
	ctx.lr = 0x82507980;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507990
	if (ctx.cr0.eq) goto loc_82507990;
loc_82507988:
	// mr r29,r16
	r29.u64 = r16.u64;
	// mr r20,r16
	r20.u64 = r16.u64;
loc_82507990:
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 52);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825079a4
	if (ctx.cr0.eq) goto loc_825079A4;
	// mr r29,r16
	r29.u64 = r16.u64;
	// mr r20,r16
	r20.u64 = r16.u64;
loc_825079A4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825079d0
	if (ctx.cr6.eq) goto loc_825079D0;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825079d0
	if (ctx.cr0.eq) goto loc_825079D0;
	// cmplwi cr6,r26,2047
	ctx.cr6.compare<uint32_t>(r26.u32, 2047, ctx.xer);
	// bge cr6,0x82507a70
	if (!ctx.cr6.lt) goto loc_82507A70;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r23,r14
	r23.u64 = r14.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r21,r31
	r21.u64 = r31.u64;
loc_825079D0:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwimi r11,r26,20,1,4
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 20) & 0x78000000) | (ctx.r11.u64 & 0xFFFFFFFF87FFFFFF);
	// rlwimi r10,r26,25,0,6
	ctx.r10.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 25) & 0xFE000000) | (ctx.r10.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// stw r10,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r10.u32);
	// beq cr6,0x825079f4
	if (ctx.cr6.eq) goto loc_825079F4;
	// stw r27,32(r23)
	REX_STORE_U32(r23.u32 + 32, r27.u32);
loc_825079F4:
	// mr r23,r27
	r23.u64 = r27.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82507a0c
	if (!ctx.cr6.eq) goto loc_82507A0C;
	// mr r21,r31
	r21.u64 = r31.u64;
loc_82507A0C:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507a30
	if (ctx.cr0.eq) goto loc_82507A30;
	// cmplwi cr6,r26,2047
	ctx.cr6.compare<uint32_t>(r26.u32, 2047, ctx.xer);
	// bge cr6,0x82507a7c
	if (!ctx.cr6.lt) goto loc_82507A7C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r23,r14
	r23.u64 = r14.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r21,r14
	r21.u64 = r14.u64;
loc_82507A30:
	// lwz r20,380(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
loc_82507A34:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507a50
	if (!ctx.cr0.eq) goto loc_82507A50;
loc_82507A44:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r27,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r27.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8250771c
	if (!ctx.cr0.eq) goto loc_8250771C;
loc_82507A50:
	// rlwinm r31,r26,2,0,29
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r18,972
	r30.s64 = r18.s64 + 972;
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(r31.u32, 132, ctx.xer);
	// ble cr6,0x82507a88
	if (!ctx.cr6.gt) goto loc_82507A88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7c98
	ctx.lr = 0x82507A6C;
	sub_824F7C98(ctx, base);
	// b 0x82507af0
	goto loc_82507AF0;
loc_82507A70:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82507A7C;
	sub_824E4368(ctx, base);
loc_82507A7C:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82507A88;
	sub_824E4368(ctx, base);
loc_82507A88:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x82507aac
	if (ctx.cr6.lt) goto loc_82507AAC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// b 0x82507af4
	goto loc_82507AF4;
loc_82507AAC:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82507ae4
	if (ctx.cr6.eq) goto loc_82507AE4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82507ADC;
	sub_826A2E60(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82507af4
	goto loc_82507AF4;
loc_82507AE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7378
	ctx.lr = 0x82507AF0;
	sub_824F7378(ctx, base);
loc_82507AF0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82507AF4:
	// stw r11,724(r18)
	REX_STORE_U32(r18.u32 + 724, ctx.r11.u32);
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(r31.u32, 132, ctx.xer);
	// ble cr6,0x82507b10
	if (!ctx.cr6.gt) goto loc_82507B10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7c98
	ctx.lr = 0x82507B0C;
	sub_824F7C98(ctx, base);
	// b 0x82507b78
	goto loc_82507B78;
loc_82507B10:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x82507b34
	if (ctx.cr6.lt) goto loc_82507B34;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// b 0x82507b7c
	goto loc_82507B7C;
loc_82507B34:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82507b6c
	if (ctx.cr6.eq) goto loc_82507B6C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82507B64;
	sub_826A2E60(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82507b7c
	goto loc_82507B7C;
loc_82507B6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7378
	ctx.lr = 0x82507B78;
	sub_824F7378(ctx, base);
loc_82507B78:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82507B7C:
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(r31.u32, 132, ctx.xer);
	// stw r11,720(r18)
	REX_STORE_U32(r18.u32 + 720, ctx.r11.u32);
	// ble cr6,0x82507b98
	if (!ctx.cr6.gt) goto loc_82507B98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7c98
	ctx.lr = 0x82507B94;
	sub_824F7C98(ctx, base);
	// b 0x82507c00
	goto loc_82507C00;
loc_82507B98:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x82507bbc
	if (ctx.cr6.lt) goto loc_82507BBC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// b 0x82507c04
	goto loc_82507C04;
loc_82507BBC:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82507bf4
	if (ctx.cr6.eq) goto loc_82507BF4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82507BEC;
	sub_826A2E60(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82507c04
	goto loc_82507C04;
loc_82507BF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7378
	ctx.lr = 0x82507C00;
	sub_824F7378(ctx, base);
loc_82507C00:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82507C04:
	// stw r11,728(r18)
	REX_STORE_U32(r18.u32 + 728, ctx.r11.u32);
	// mr r29,r14
	r29.u64 = r14.u64;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507cac
	if (!ctx.cr0.eq) goto loc_82507CAC;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// b 0x82507ca0
	goto loc_82507CA0;
loc_82507C20:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507c90
	if (ctx.cr0.eq) goto loc_82507C90;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r5,r11,12,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// beq cr6,0x82507c90
	if (ctx.cr6.eq) goto loc_82507C90;
	// lwz r10,720(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 720);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r14.u8);
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stw r30,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, r30.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,728(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 728);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bl 0x82503f48
	ctx.lr = 0x82507C84;
	sub_82503F48(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
loc_82507C90:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507cac
	if (!ctx.cr0.eq) goto loc_82507CAC;
loc_82507CA0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82507c20
	if (!ctx.cr0.eq) goto loc_82507C20;
loc_82507CAC:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508140
	if (!ctx.cr0.eq) goto loc_82508140;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82508140
	if (ctx.cr0.eq) goto loc_82508140;
loc_82507CC4:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82508124
	if (ctx.cr0.eq) goto loc_82508124;
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82507cfc
	if (!ctx.cr0.eq) goto loc_82507CFC;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82507cf0
	if (ctx.cr6.lt) goto loc_82507CF0;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// ble cr6,0x82507cf4
	if (!ctx.cr6.gt) goto loc_82507CF4;
loc_82507CF0:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_82507CF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508124
	if (ctx.cr0.eq) goto loc_82508124;
loc_82507CFC:
	// lwz r6,4(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r25,r26,4
	r25.s64 = r26.s64 + 4;
	// mr r24,r16
	r24.u64 = r16.u64;
loc_82507D08:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82507dfc
	if (ctx.cr6.eq) goto loc_82507DFC;
	// lwz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82507df0
	if (ctx.cr6.eq) goto loc_82507DF0;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507d34
	if (ctx.cr0.eq) goto loc_82507D34;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// beq 0x82507d38
	if (ctx.cr0.eq) goto loc_82507D38;
loc_82507D34:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_82507D38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507df0
	if (ctx.cr0.eq) goto loc_82507DF0;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507df0
	if (!ctx.cr0.eq) goto loc_82507DF0;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r9,r8,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r7,r10,12,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// rlwinm r11,r9,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82507df0
	if (ctx.cr6.eq) goto loc_82507DF0;
	// lwz r11,720(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 720);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82507de8
	goto loc_82507DE8;
loc_82507D84:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_82507D88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82507de4
	if (ctx.cr6.eq) goto loc_82507DE4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r8,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507da8
	if (ctx.cr0.eq) goto loc_82507DA8;
	// rlwinm. r11,r8,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// beq 0x82507dac
	if (ctx.cr0.eq) goto loc_82507DAC;
loc_82507DA8:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_82507DAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507ddc
	if (ctx.cr0.eq) goto loc_82507DDC;
	// rlwinm r11,r8,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x82507ddc
	if (!ctx.cr6.eq) goto loc_82507DDC;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r8,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82507df8
	if (!ctx.cr6.eq) goto loc_82507DF8;
loc_82507DDC:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82507d88
	goto loc_82507D88;
loc_82507DE4:
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
loc_82507DE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82507d84
	if (!ctx.cr6.eq) goto loc_82507D84;
loc_82507DF0:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x82507d08
	goto loc_82507D08;
loc_82507DF8:
	// mr r24,r14
	r24.u64 = r14.u64;
loc_82507DFC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82507E00:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82508124
	if (ctx.cr6.eq) goto loc_82508124;
	// lwz r29,16(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82507eb8
	if (ctx.cr6.eq) goto loc_82507EB8;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507e30
	if (ctx.cr0.eq) goto loc_82507E30;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// beq 0x82507e34
	if (ctx.cr0.eq) goto loc_82507E34;
loc_82507E30:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_82507E34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507eb8
	if (ctx.cr0.eq) goto loc_82507EB8;
	// rlwinm. r27,r10,19,20,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x82507eb8
	if (ctx.cr0.lt) goto loc_82507EB8;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// bgt cr6,0x82507eb8
	if (ctx.cr6.gt) goto loc_82507EB8;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// beq cr6,0x82507eb8
	if (ctx.cr6.eq) goto loc_82507EB8;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(r27.s32, 5, ctx.xer);
	// beq cr6,0x82507eb8
	if (ctx.cr6.eq) goto loc_82507EB8;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// beq cr6,0x82507eb8
	if (ctx.cr6.eq) goto loc_82507EB8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r8,16(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r8,r7,27,5,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r28,r10,12,21,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// rlwinm r11,r8,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82507eb8
	if (ctx.cr6.eq) goto loc_82507EB8;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x82507eb0
	if (ctx.cr6.lt) goto loc_82507EB0;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x82507ec0
	if (ctx.cr6.lt) goto loc_82507EC0;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(r27.u32, 6, ctx.xer);
	// beq cr6,0x82507eb8
	if (ctx.cr6.eq) goto loc_82507EB8;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82507EB0;
	sub_824E4368(ctx, base);
loc_82507EB0:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507ec0
	if (!ctx.cr0.eq) goto loc_82507EC0;
loc_82507EB8:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// b 0x82507e00
	goto loc_82507E00;
loc_82507EC0:
	// lwz r30,44(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 44);
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82507f5c
	if (ctx.cr0.eq) goto loc_82507F5C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82503da0
	ctx.lr = 0x82507EE4;
	sub_82503DA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r5,r26,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c0b40
	ctx.lr = 0x82507EFC;
	sub_825C0B40(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r7,16(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwimi r7,r10,27,5,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r7,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x7FF;
	// rlwimi r9,r10,20,1,4
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x78000000) | (ctx.r9.u64 & 0xFFFFFFFF87FFFFFF);
	// rlwimi r8,r10,25,0,6
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000) | (ctx.r8.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r10,32(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r11,32(r26)
	REX_STORE_U32(r26.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x82507f5c
	if (ctx.cr6.eq) goto loc_82507F5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82504a88
	ctx.lr = 0x82507F5C;
	sub_82504A88(ctx, base);
loc_82507F5C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r11,25,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825bb860
	ctx.lr = 0x82507F7C;
	sub_825BB860(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82507F88;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_82507F9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82507fc4
	if (ctx.cr6.eq) goto loc_82507FC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82507fbc
	if (!ctx.cr0.eq) goto loc_82507FBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82507FBC;
	sub_8250AD28(ctx, base);
loc_82507FBC:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82507f9c
	goto loc_82507F9C;
loc_82507FC4:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82507FC8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82507FCC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508014
	if (!ctx.cr0.eq) goto loc_82508014;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508014
	if (ctx.cr0.eq) goto loc_82508014;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82507fcc
	if (ctx.cr0.eq) goto loc_82507FCC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r10,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r9,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x82508014
	if (!ctx.cr6.eq) goto loc_82508014;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82507fc8
	goto loc_82507FC8;
loc_82508014:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r10,r28,25,0,6
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0xFE000000) | (ctx.r10.u64 & 0xFFFFFFFF01FFFFFF);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// oris r9,r9,1024
	ctx.r9.u64 = ctx.r9.u64 | 67108864;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// rlwimi r11,r28,20,1,4
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0x78000000) | (ctx.r11.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r31,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, r31.u32);
loc_82508078:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82507dfc
	if (ctx.cr6.eq) goto loc_82507DFC;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82508110
	if (ctx.cr6.eq) goto loc_82508110;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825080a8
	if (ctx.cr0.eq) goto loc_825080A8;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// beq 0x825080ac
	if (ctx.cr0.eq) goto loc_825080AC;
loc_825080A8:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_825080AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82508110
	if (ctx.cr0.eq) goto loc_82508110;
	// rlwinm r10,r9,19,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x82508110
	if (!ctx.cr6.eq) goto loc_82508110;
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwimi r9,r10,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r9,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x82508110
	if (!ctx.cr6.eq) goto loc_82508110;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825080f0
	goto loc_825080F0;
loc_825080E8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825080F0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825080e8
	if (!ctx.cr6.eq) goto loc_825080E8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
loc_82508110:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82508078
	if (!ctx.cr6.eq) goto loc_82508078;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x82508078
	goto loc_82508078;
loc_82508124:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508140
	if (!ctx.cr0.eq) goto loc_82508140;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82507cc4
	if (!ctx.cr6.eq) goto loc_82507CC4;
loc_82508140:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82504918
	ctx.lr = 0x82508150;
	sub_82504918(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508248
	if (!ctx.cr0.eq) goto loc_82508248;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82508248
	if (ctx.cr0.eq) goto loc_82508248;
loc_82508168:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250822c
	if (ctx.cr0.eq) goto loc_8250822C;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250822c
	if (!ctx.cr0.eq) goto loc_8250822C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r9,r27,4
	ctx.r9.s64 = r27.s64 + 4;
loc_82508184:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250822c
	if (ctx.cr6.eq) goto loc_8250822C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825081b8
	if (ctx.cr6.eq) goto loc_825081B8;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825081b8
	if (ctx.cr0.eq) goto loc_825081B8;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// rlwinm r10,r8,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x825081c0
	if (ctx.cr6.eq) goto loc_825081C0;
loc_825081B8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82508184
	goto loc_82508184;
loc_825081C0:
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_825081C4:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8250822c
	if (ctx.cr6.eq) goto loc_8250822C;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82508218
	if (ctx.cr6.eq) goto loc_82508218;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f75b8
	ctx.lr = 0x825081E4;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508218
	if (ctx.cr0.eq) goto loc_82508218;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82508218
	if (ctx.cr6.eq) goto loc_82508218;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82504578
	ctx.lr = 0x82508200;
	sub_82504578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508218
	if (ctx.cr0.eq) goto loc_82508218;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250adf0
	ctx.lr = 0x82508218;
	sub_8250ADF0(ctx, base);
loc_82508218:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825081c4
	if (!ctx.cr6.eq) goto loc_825081C4;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x825081c4
	goto loc_825081C4;
loc_8250822C:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508248
	if (!ctx.cr0.eq) goto loc_82508248;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508168
	if (!ctx.cr6.eq) goto loc_82508168;
loc_82508248:
	// lwz r31,4(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r29,r31,31
	r29.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8250825c
	if (ctx.cr0.eq) goto loc_8250825C;
	// mr r30,r14
	r30.u64 = r14.u64;
	// b 0x82508268
	goto loc_82508268;
loc_8250825C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	r30.s64 = ctx.r11.s64 + -40;
loc_82508268:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x825082a4
	if (ctx.cr6.eq) goto loc_825082A4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x825082a4
	if (ctx.cr6.eq) goto loc_825082A4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x825082a4
	if (ctx.cr6.eq) goto loc_825082A4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x825082a4
	if (ctx.cr6.eq) goto loc_825082A4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x825082a4
	if (ctx.cr6.eq) goto loc_825082A4;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// bne cr6,0x825082a8
	if (!ctx.cr6.eq) goto loc_825082A8;
loc_825082A4:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_825082A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825082c0
	if (!ctx.cr0.eq) goto loc_825082C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f6e38
	ctx.lr = 0x825082B8;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508310
	if (ctx.cr0.eq) goto loc_82508310;
loc_825082C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82508310
	if (!ctx.cr6.eq) goto loc_82508310;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82508310
	if (ctx.cr0.eq) goto loc_82508310;
loc_825082D0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82508310
	if (ctx.cr6.eq) goto loc_82508310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffb10
	ctx.lr = 0x825082E0;
	sub_824FFB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825082f8
	if (ctx.cr0.eq) goto loc_825082F8;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250adf0
	ctx.lr = 0x825082F8;
	sub_8250ADF0(ctx, base);
loc_825082F8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508310
	if (!ctx.cr0.eq) goto loc_82508310;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825082d0
	if (!ctx.cr6.eq) goto loc_825082D0;
loc_82508310:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82504880
	ctx.lr = 0x82508320;
	sub_82504880(ctx, base);
	// stw r14,712(r18)
	REX_STORE_U32(r18.u32 + 712, r14.u32);
	// stw r14,716(r18)
	REX_STORE_U32(r18.u32 + 716, r14.u32);
	// li r5,53
	ctx.r5.s64 = 53;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824f7678
	ctx.lr = 0x82508338;
	sub_824F7678(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r22,r24,4
	r22.s64 = r24.s64 + 4;
	// ori r11,r24,1
	ctx.r11.u64 = r24.u64 | 1;
	// ori r10,r22,1
	ctx.r10.u64 = r22.u64 | 1;
	// stw r11,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// bl 0x825052a0
	ctx.lr = 0x82508358;
	sub_825052A0(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250838c
	if (!ctx.cr0.eq) goto loc_8250838C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8250838c
	if (ctx.cr0.eq) goto loc_8250838C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82508398
	if (!ctx.cr6.gt) goto loc_82508398;
loc_8250838C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82508398;
	sub_8251FE00(ctx, base);
loc_82508398:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r14
	r29.u64 = r14.u64;
	// mr r30,r14
	r30.u64 = r14.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r23.u32);
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825084e0
	if (!ctx.cr0.eq) goto loc_825084E0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825084e0
	if (ctx.cr0.eq) goto loc_825084E0;
loc_825083D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508444
	if (ctx.cr0.eq) goto loc_82508444;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8250841c
	if (ctx.cr6.eq) goto loc_8250841C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bl 0x82503b98
	ctx.lr = 0x82508404;
	sub_82503B98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250841c
	if (ctx.cr0.eq) goto loc_8250841C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82506e68
	ctx.lr = 0x8250841C;
	sub_82506E68(ctx, base);
loc_8250841C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82508444:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8250849c
	if (ctx.cr6.eq) goto loc_8250849C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508464
	if (ctx.cr0.eq) goto loc_82508464;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// b 0x8250846c
	goto loc_8250846C;
loc_82508464:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8250846C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8250848c
	if (!ctx.cr6.eq) goto loc_8250848C;
loc_82508474:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825084e0
	if (!ctx.cr0.eq) goto loc_825084E0;
	// b 0x825084d0
	goto loc_825084D0;
loc_8250848C:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825084e0
	if (!ctx.cr0.eq) goto loc_825084E0;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x825084d4
	goto loc_825084D4;
loc_8250849C:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825084b0
	if (ctx.cr0.eq) goto loc_825084B0;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// b 0x825084bc
	goto loc_825084BC;
loc_825084B0:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_825084BC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82508474
	if (ctx.cr6.eq) goto loc_82508474;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825084e0
	if (!ctx.cr6.eq) goto loc_825084E0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
loc_825084D0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_825084D4:
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825083d4
	if (!ctx.cr6.eq) goto loc_825083D4;
loc_825084E0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82504738
	ctx.lr = 0x825084E8;
	sub_82504738(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505e70
	ctx.lr = 0x825084F8;
	sub_82505E70(ctx, base);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825069a8
	ctx.lr = 0x82508514;
	sub_825069A8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82508530
	if (ctx.cr6.eq) goto loc_82508530;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82508538
	goto loc_82508538;
loc_82508530:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82508538:
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
	// stw r11,16(r23)
	REX_STORE_U32(r23.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r23)
	REX_STORE_U32(r23.u32 + 20, ctx.r11.u32);
	// bl 0x823ef900
	ctx.lr = 0x8250855C;
	sub_823EF900(ctx, base);
	// addi r25,r3,10000
	r25.s64 = ctx.r3.s64 + 10000;
loc_82508560:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825089dc
	if (!ctx.cr0.eq) goto loc_825089DC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825089dc
	if (ctx.cr0.eq) goto loc_825089DC;
	// bl 0x823ef900
	ctx.lr = 0x82508578;
	sub_823EF900(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bge cr6,0x825089dc
	if (!ctx.cr6.lt) goto loc_825089DC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508594
	if (ctx.cr0.eq) goto loc_82508594;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// b 0x825085a0
	goto loc_825085A0;
loc_82508594:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825085A0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825085c4
	goto loc_825085C4;
loc_825085BC:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_825085C4:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
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
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825085bc
	if (!ctx.cr6.lt) goto loc_825085BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r26,r11,r10
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82506c88
	ctx.lr = 0x825085FC;
	sub_82506C88(ctx, base);
	// lbz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82508560
	if (!ctx.cr0.eq) goto loc_82508560;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825088f8
	if (!ctx.cr0.eq) goto loc_825088F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825088f8
	if (!ctx.cr6.eq) goto loc_825088F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82506a98
	ctx.lr = 0x82508638;
	sub_82506A98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508560
	if (ctx.cr0.eq) goto loc_82508560;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825052a0
	ctx.lr = 0x82508648;
	sub_825052A0(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82508668
	if (ctx.cr6.eq) goto loc_82508668;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82508670
	goto loc_82508670;
loc_82508668:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82508670:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r14
	r28.u64 = r14.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825086cc
	if (!ctx.cr0.eq) goto loc_825086CC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825086cc
	if (ctx.cr0.eq) goto loc_825086CC;
loc_825086AC:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825086cc
	if (!ctx.cr0.eq) goto loc_825086CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825086ac
	if (!ctx.cr6.eq) goto loc_825086AC;
loc_825086CC:
	// mr r30,r14
	r30.u64 = r14.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825087b0
	if (ctx.cr6.eq) goto loc_825087B0;
loc_825086D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825087a4
	if (ctx.cr6.eq) goto loc_825087A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
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
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82508734
	if (ctx.cr6.lt) goto loc_82508734;
loc_8250870C:
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
	// bge cr6,0x8250870c
	if (!ctx.cr6.lt) goto loc_8250870C;
loc_82508734:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825087a4
	if (!ctx.cr0.eq) goto loc_825087A4;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508780
	if (!ctx.cr0.eq) goto loc_82508780;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508780
	if (ctx.cr0.eq) goto loc_82508780;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8250878c
	if (!ctx.cr6.gt) goto loc_8250878C;
loc_82508780:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82508788;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8250878C:
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
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
loc_825087A4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x825086d8
	if (ctx.cr6.lt) goto loc_825086D8;
loc_825087B0:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_825087B4:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_825087B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82508824
	if (ctx.cr6.eq) goto loc_82508824;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250881c
	if (ctx.cr0.eq) goto loc_8250881C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250881c
	if (!ctx.cr0.eq) goto loc_8250881C;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,12,21,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x780;
	// lwz r11,720(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 720);
	// rlwinm r9,r9,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503b98
	ctx.lr = 0x82508804;
	sub_82503B98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250881c
	if (ctx.cr0.eq) goto loc_8250881C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82506e68
	ctx.lr = 0x8250881C;
	sub_82506E68(ctx, base);
loc_8250881C:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x825087b8
	goto loc_825087B8;
loc_82508824:
	// lwz r29,32(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825087b4
	if (!ctx.cr6.eq) goto loc_825087B4;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508848
	if (!ctx.cr0.eq) goto loc_82508848;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82508880
	if (!ctx.cr0.eq) goto loc_82508880;
loc_82508848:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505310
	ctx.lr = 0x82508854;
	sub_82505310(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82506da0
	ctx.lr = 0x8250885C;
	sub_82506DA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508560
	if (ctx.cr0.eq) goto loc_82508560;
	// mr r31,r16
	r31.u64 = r16.u64;
loc_82508868:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82504918
	ctx.lr = 0x82508878;
	sub_82504918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8250714c
	goto loc_8250714C;
loc_82508880:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505538
	ctx.lr = 0x8250888C;
	sub_82505538(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825088a0
	if (ctx.cr0.eq) goto loc_825088A0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505310
	ctx.lr = 0x8250889C;
	sub_82505310(ctx, base);
	// b 0x82508560
	goto loc_82508560;
loc_825088A0:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825088d0
	if (!ctx.cr0.eq) goto loc_825088D0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825088d0
	if (ctx.cr0.eq) goto loc_825088D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825088dc
	if (!ctx.cr6.gt) goto loc_825088DC;
loc_825088D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825088DC;
	sub_8251FE00(ctx, base);
loc_825088DC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r27,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r27.u32);
	// b 0x82508560
	goto loc_82508560;
loc_825088F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82508940
	if (!ctx.cr0.eq) goto loc_82508940;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82508940
	if (ctx.cr0.eq) goto loc_82508940;
loc_82508920:
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82508940
	if (!ctx.cr0.eq) goto loc_82508940;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508920
	if (!ctx.cr6.eq) goto loc_82508920;
loc_82508940:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825089d4
	if (!ctx.cr6.eq) goto loc_825089D4;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82505438
	ctx.lr = 0x82508958;
	sub_82505438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508968
	if (!ctx.cr0.eq) goto loc_82508968;
	// stb r16,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, r16.u8);
	// stb r16,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, r16.u8);
loc_82508968:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250897c
	if (ctx.cr0.eq) goto loc_8250897C;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// b 0x82508988
	goto loc_82508988;
loc_8250897C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82508988:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82508560
	if (!ctx.cr0.eq) goto loc_82508560;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825089D0;
	sub_824E4308(ctx, base);
	// b 0x82508560
	goto loc_82508560;
loc_825089D4:
	// stw r14,0(r31)
	REX_STORE_U32(r31.u32 + 0, r14.u32);
	// b 0x82508560
	goto loc_82508560;
loc_825089DC:
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825089ec
	if (!ctx.cr6.eq) goto loc_825089EC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_825089EC:
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82508d18
	if (!ctx.cr6.lt) goto loc_82508D18;
	// stb r14,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, r14.u8);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stb r16,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, r16.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82506c88
	ctx.lr = 0x82508A08;
	sub_82506C88(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825052a0
	ctx.lr = 0x82508A10;
	sub_825052A0(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82508a30
	if (ctx.cr6.eq) goto loc_82508A30;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82508a38
	goto loc_82508A38;
loc_82508A30:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82508A38:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82508A7C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82508a98
	if (ctx.cr6.eq) goto loc_82508A98;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// bne cr6,0x82508a9c
	if (!ctx.cr6.eq) goto loc_82508A9C;
loc_82508A98:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_82508A9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508b10
	if (!ctx.cr0.eq) goto loc_82508B10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825537d0
	ctx.lr = 0x82508AAC;
	sub_825537D0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508ae4
	if (!ctx.cr0.eq) goto loc_82508AE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r10,-4
	ctx.xer.ca = ctx.r10.u32 > 3;
	ctx.r3.s64 = ctx.r10.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82508ae4
	if (ctx.cr0.eq) goto loc_82508AE4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82508af0
	if (!ctx.cr6.gt) goto loc_82508AF0;
loc_82508AE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82508AF0;
	sub_8251FE00(ctx, base);
loc_82508AF0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
	// b 0x82508a7c
	goto loc_82508A7C;
loc_82508B10:
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508cf4
	if (!ctx.cr0.eq) goto loc_82508CF4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82508cf4
	if (ctx.cr0.eq) goto loc_82508CF4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// mr r31,r14
	r31.u64 = r14.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
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
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82508B50:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82508b70
	if (ctx.cr6.eq) goto loc_82508B70;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// bne cr6,0x82508b74
	if (!ctx.cr6.eq) goto loc_82508B74;
loc_82508B70:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_82508B74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508bdc
	if (!ctx.cr0.eq) goto loc_82508BDC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825537d0
	ctx.lr = 0x82508B84;
	sub_825537D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82508bd4
	if (ctx.cr6.eq) goto loc_82508BD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82508bd4
	if (ctx.cr6.lt) goto loc_82508BD4;
	// bne cr6,0x82508b50
	if (!ctx.cr6.eq) goto loc_82508B50;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x82508bc8
	if (ctx.cr6.lt) goto loc_82508BC8;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// ble cr6,0x82508bcc
	if (!ctx.cr6.gt) goto loc_82508BCC;
loc_82508BC8:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_82508BCC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82508b50
	if (ctx.cr0.eq) goto loc_82508B50;
loc_82508BD4:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82508b50
	goto loc_82508B50;
loc_82508BDC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82504ce0
	ctx.lr = 0x82508BE8;
	sub_82504CE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82506a98
	ctx.lr = 0x82508BF8;
	sub_82506A98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508ce8
	if (ctx.cr0.eq) goto loc_82508CE8;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82508b10
	if (ctx.cr6.eq) goto loc_82508B10;
loc_82508C0C:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_82508C10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82508cd8
	if (ctx.cr6.eq) goto loc_82508CD8;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82508cd0
	if (ctx.cr0.eq) goto loc_82508CD0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82508cd0
	if (!ctx.cr0.eq) goto loc_82508CD0;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,12,21,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x780;
	// lwz r11,720(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 720);
	// rlwinm r9,r9,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503b98
	ctx.lr = 0x82508C5C;
	sub_82503B98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508cd0
	if (ctx.cr0.eq) goto loc_82508CD0;
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584438
	ctx.lr = 0x82508C74;
	sub_82584438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508cd0
	if (!ctx.cr0.eq) goto loc_82508CD0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508cac
	if (!ctx.cr0.eq) goto loc_82508CAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82508cac
	if (ctx.cr0.eq) goto loc_82508CAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82508cb8
	if (!ctx.cr6.gt) goto loc_82508CB8;
loc_82508CAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82508CB8;
	sub_8251FE00(ctx, base);
loc_82508CB8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
loc_82508CD0:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x82508c10
	goto loc_82508C10;
loc_82508CD8:
	// lwz r28,32(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82508c0c
	if (!ctx.cr6.eq) goto loc_82508C0C;
	// b 0x82508b10
	goto loc_82508B10;
loc_82508CE8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82508CF4;
	sub_824E4368(ctx, base);
loc_82508CF4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82506da0
	ctx.lr = 0x82508CFC;
	sub_82506DA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82508d10
	if (!ctx.cr0.eq) goto loc_82508D10;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e4368
	ctx.lr = 0x82508D10;
	sub_824E4368(ctx, base);
loc_82508D10:
	// mr r31,r14
	r31.u64 = r14.u64;
	// b 0x82508868
	goto loc_82508868;
loc_82508D18:
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 52);
	// rlwinm. r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508d40
	if (!ctx.cr0.eq) goto loc_82508D40;
	// lwz r10,44(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 44);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82508d40
	if (ctx.cr0.eq) goto loc_82508D40;
	// ori r11,r11,1025
	ctx.r11.u64 = ctx.r11.u64 | 1025;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stw r11,52(r18)
	REX_STORE_U32(r18.u32 + 52, ctx.r11.u32);
	// bl 0x824e3ff0
	ctx.lr = 0x82508D40;
	sub_824E3FF0(ctx, base);
loc_82508D40:
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 52);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508d5c
	if (!ctx.cr0.eq) goto loc_82508D5C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stw r11,52(r18)
	REX_STORE_U32(r18.u32 + 52, ctx.r11.u32);
	// bl 0x824e3ff0
	ctx.lr = 0x82508D5C;
	sub_824E3FF0(ctx, base);
loc_82508D5C:
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 792);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82508d74
	if (ctx.cr6.eq) goto loc_82508D74;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x824e4368
	ctx.lr = 0x82508D74;
	sub_824E4368(ctx, base);
loc_82508D74:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x824e4368
	ctx.lr = 0x82508D7C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82615BD0) {
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
	// lwz r4,140(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82615c14
	if (ctx.cr6.eq) goto loc_82615C14;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82615C10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_82615C14:
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82615c3c
	if (ctx.cr6.eq) goto loc_82615C3C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82615C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
loc_82615C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261cfe8
	ctx.lr = 0x82615C44;
	sub_8261CFE8(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82615c68
	if (ctx.cr6.eq) goto loc_82615C68;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82615C68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82615C68:
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

DEFINE_REX_FUNC(sub_82618F28) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82618f70
	if (ctx.cr6.eq) goto loc_82618F70;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82618F5C;
	sub_826A2E60(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82618F70;
	sub_826A2E60(ctx, base);
loc_82618F70:
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

DEFINE_REX_FUNC(sub_8261C358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261C360;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8261b250
	ctx.lr = 0x8261C398;
	sub_8261B250(ctx, base);
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
	ctx.lr = 0x8261C3B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82623438) {
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
	ctx.lr = 0x82623440;
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
	// bne cr6,0x82623470
	if (!ctx.cr6.eq) goto loc_82623470;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82623470:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r29,0(r27)
	r29.u64 = REX_LOAD_U16(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623498
	if (ctx.cr6.eq) goto loc_82623498;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d1460
	ctx.lr = 0x82623490;
	sub_826D1460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826234f4
	if (ctx.cr6.lt) goto loc_826234F4;
loc_82623498:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82623020
	ctx.lr = 0x826234A4;
	sub_82623020(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826234f4
	if (ctx.cr6.lt) goto loc_826234F4;
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826234f4
	if (!ctx.cr6.eq) goto loc_826234F4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826234f4
	if (ctx.cr6.eq) goto loc_826234F4;
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
	// bne cr6,0x826234f0
	if (!ctx.cr6.eq) goto loc_826234F0;
	// bl 0x8263dd78
	ctx.lr = 0x826234E4;
	sub_8263DD78(ctx, base);
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826234F0:
	// bl 0x8263d828
	ctx.lr = 0x826234F4;
	sub_8263D828(ctx, base);
loc_826234F4:
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826276F8) {
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
	ctx.lr = 0x82627728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x82642858
	ctx.lr = 0x82627734;
	sub_82642858(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826291D8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629600) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629608) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629A98) {
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
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,65534
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65534, ctx.xer);
	// bne cr6,0x82629ae8
	if (!ctx.cr6.eq) goto loc_82629AE8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r11,2720
	ctx.r11.s64 = ctx.r11.s64 + 2720;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x826a5930
	ctx.lr = 0x82629AD0;
	sub_826A5930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82629ae4
	if (!ctx.cr0.eq) goto loc_82629AE4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82629ae8
	goto loc_82629AE8;
loc_82629AE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82629AE8:
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

DEFINE_REX_FUNC(sub_826309B0) {
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
	ctx.lr = 0x826309B8;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// fsubs f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x82630a60
	if (ctx.cr6.eq) goto loc_82630A60;
	// lfs f13,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f9,12(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f8,16(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
loc_82630A60:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82630b74
	if (!ctx.cr6.lt) goto loc_82630B74;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82630A74:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// bge cr6,0x82630c7c
	if (!ctx.cr6.lt) goto loc_82630C7C;
	// addi r29,r11,-6
	r29.s64 = ctx.r11.s64 + -6;
	// addi r28,r11,-5
	r28.s64 = ctx.r11.s64 + -5;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,2
	r26.s64 = ctx.r11.s64 + 2;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r25,r11,-3
	r25.s64 = ctx.r11.s64 + -3;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r11,3
	r24.s64 = ctx.r11.s64 + 3;
	// lfsx f9,r28,r10
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r23,r11,-2
	r23.s64 = ctx.r11.s64 + -2;
	// lfsx f8,r27,r10
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r22,r11,4
	r22.s64 = ctx.r11.s64 + 4;
	// addi r21,r11,5
	r21.s64 = ctx.r11.s64 + 5;
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// rlwinm r29,r23,2,0,29
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r21,2,0,29
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r26,r10
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f6,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// lfsx f7,r24,r10
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// lfsx f3,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfsx f1,r28,r10
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsx f31,r27,r10
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	f31.f64 = double(temp.f32);
	// fsubs f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsubs f31,f31,f11
	f31.f64 = double(float(f31.f64 - ctx.f11.f64));
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f9,f2,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfsu f9,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f8,f4,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f6,f1,f0,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfsu f6,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f5,f31,f0,f11
	ctx.f5.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82630b6c
	if (ctx.cr6.lt) goto loc_82630B6C;
loc_82630B5C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82630b5c
	if (!ctx.cr6.lt) goto loc_82630B5C;
loc_82630B6C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82630a74
	if (ctx.cr6.lt) goto loc_82630A74;
loc_82630B74:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// bge cr6,0x82630c7c
	if (!ctx.cr6.lt) goto loc_82630C7C;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
loc_82630B84:
	// addi r31,r11,-6
	r31.s64 = ctx.r11.s64 + -6;
	// addi r29,r11,-5
	r29.s64 = ctx.r11.s64 + -5;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r26,r11,-3
	r26.s64 = ctx.r11.s64 + -3;
	// lfsx f10,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r25,r11,3
	r25.s64 = ctx.r11.s64 + 3;
	// lfsx f9,r29,r8
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r24,r11,-2
	r24.s64 = ctx.r11.s64 + -2;
	// lfsx f8,r28,r8
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r23,r11,4
	r23.s64 = ctx.r11.s64 + 4;
	// addi r22,r11,5
	r22.s64 = ctx.r11.s64 + 5;
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// rlwinm r31,r24,2,0,29
	r31.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r29,r23,2,0,29
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r27,r8
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f6,r26,r8
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// lfsx f7,r25,r8
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// lfsx f3,r31,r8
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfsx f1,r29,r8
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsx f31,r28,r8
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r8.u32);
	f31.f64 = double(temp.f32);
	// fsubs f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsubs f31,f31,f11
	f31.f64 = double(float(f31.f64 - ctx.f11.f64));
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f9,f2,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfsu f9,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f8,f4,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f6,f1,f0,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfsu f6,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f5,f31,f0,f11
	ctx.f5.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82630c74
	if (ctx.cr6.lt) goto loc_82630C74;
loc_82630C64:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82630c64
	if (!ctx.cr6.lt) goto loc_82630C64;
loc_82630C74:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// blt cr6,0x82630b84
	if (ctx.cr6.lt) goto loc_82630B84;
loc_82630C7C:
	// addi r9,r5,-6
	ctx.r9.s64 = ctx.r5.s64 + -6;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82630c8c
	if (!ctx.cr6.lt) goto loc_82630C8C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82630C8C:
	// subf r9,r5,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r6,r5
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82630d5c
	if (!ctx.cr6.lt) goto loc_82630D5C;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82630d20
	if (ctx.cr6.lt) goto loc_82630D20;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,-3
	ctx.r4.s64 = ctx.r9.s64 + -3;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r31,r6,-3
	r31.s64 = ctx.r6.s64 + -3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_82630CE4:
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r4,r11
	r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfsu f0,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfsx f12,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// stfsu f12,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82630ce4
	if (ctx.cr6.lt) goto loc_82630CE4;
loc_82630D20:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82630d5c
	if (!ctx.cr6.lt) goto loc_82630D5C;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r4,r7,-4
	ctx.r4.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82630D50:
	// lfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfsu f0,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x82630d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82630D50;
loc_82630D5C:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82630dd4
	if (ctx.cr6.lt) goto loc_82630DD4;
	// subfic r7,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r7.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r9,-3
	ctx.r4.s64 = ctx.r9.s64 + -3;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
loc_82630D9C:
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfs f13,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfsu f0,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f12,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r31,r8
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfsu f11,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82630d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82630D9C;
loc_82630DD4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82630dfc
	if (!ctx.cr6.lt) goto loc_82630DFC;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x82630DFC;
	sub_826A22F8(ctx, base);
loc_82630DFC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8264F818) {
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
	// bge cr6,0x8264f854
	if (!ctx.cr6.lt) goto loc_8264F854;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x8264f874
	goto loc_8264F874;
loc_8264F854:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8264F864;
	sub_826A1E70(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8264F874:
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

DEFINE_REX_FUNC(sub_82651E98) {
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
	ctx.lr = 0x82651EA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82651f68
	if (!ctx.cr6.gt) goto loc_82651F68;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bgt cr6,0x82651f68
	if (ctx.cr6.gt) goto loc_82651F68;
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82651f68
	if (!ctx.cr0.eq) goto loc_82651F68;
	// addi r30,r3,424
	r30.s64 = ctx.r3.s64 + 424;
	// ld r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265db98
	ctx.lr = 0x82651EDC;
	sub_8265DB98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82651f70
	if (ctx.cr6.eq) goto loc_82651F70;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r29,380
	r29.s64 = r29.s64 + 380;
loc_82651EF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82651f54
	if (ctx.cr6.eq) goto loc_82651F54;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,393(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 393);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// ld r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U64(r28.u32 + 16);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ctx.r8.u64;
	// beq cr6,0x82651f48
	if (ctx.cr6.eq) goto loc_82651F48;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82651f4c
	goto loc_82651F4C;
loc_82651F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82651F4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82651f70
	if (ctx.cr6.lt) goto loc_82651F70;
loc_82651F54:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82651ef0
	if (ctx.cr6.lt) goto loc_82651EF0;
	// b 0x82651f70
	goto loc_82651F70;
loc_82651F68:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82651F70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82659F28) {
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
	ctx.lr = 0x82659F30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659f74
	if (ctx.cr6.eq) goto loc_82659F74;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r10,r10,-27872
	ctx.r10.s64 = ctx.r10.s64 + -27872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82659f74
	if (ctx.cr6.eq) goto loc_82659F74;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,24696
	ctx.r10.s64 = ctx.r10.s64 + 24696;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82659f74
	if (ctx.cr6.eq) goto loc_82659F74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x8265a0b4
	goto loc_8265A0B4;
loc_82659F74:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650370
	ctx.lr = 0x82659F80;
	sub_82650370(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82659FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a0a4
	if (ctx.cr6.eq) goto loc_8265A0A4;
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r28,r31,248
	r28.s64 = r31.s64 + 248;
	// b 0x8265a008
	goto loc_8265A008;
loc_82659FC8:
	// lwz r11,304(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 304);
	// addi r30,r29,-92
	r30.s64 = r29.s64 + -92;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265a004
	if (ctx.cr0.eq) goto loc_8265A004;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265a004
	if (ctx.cr0.eq) goto loc_8265A004;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82659FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
loc_8265A004:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8265A008:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8265a01c
	if (ctx.cr6.eq) goto loc_8265A01C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bne 0x82659fc8
	if (!ctx.cr0.eq) goto loc_82659FC8;
loc_8265A01C:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265a094
	if (!ctx.cr6.eq) goto loc_8265A094;
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// addi r11,r31,528
	ctx.r11.s64 = r31.s64 + 528;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265a0b0
	if (!ctx.cr6.eq) goto loc_8265A0B0;
	// std r27,200(r31)
	REX_STORE_U64(r31.u32 + 200, r27.u64);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r27,208(r31)
	REX_STORE_U64(r31.u32 + 208, r27.u64);
	// std r27,216(r31)
	REX_STORE_U64(r31.u32 + 216, r27.u64);
	// stw r27,224(r31)
	REX_STORE_U32(r31.u32 + 224, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264e168
	ctx.lr = 0x8265A058;
	sub_8264E168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a084
	if (ctx.cr0.eq) goto loc_8265A084;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265a084
	if (ctx.cr6.eq) goto loc_8265A084;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x8265A070;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265a0b4
	if (ctx.cr0.lt) goto loc_8265A0B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8265a0b4
	goto loc_8265A0B4;
loc_8265A084:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-26576
	ctx.r11.s64 = ctx.r11.s64 + -26576;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// b 0x8265a0b0
	goto loc_8265A0B0;
loc_8265A094:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// b 0x8265a0b0
	goto loc_8265A0B0;
loc_8265A0A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659830
	ctx.lr = 0x8265A0B0;
	sub_82659830(ctx, base);
loc_8265A0B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8265A0B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82660A50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8264ce50
	ctx.lr = 0x82660A78;
	sub_8264CE50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82660af0
	if (ctx.cr6.eq) goto loc_82660AF0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// sth r9,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// bne cr6,0x82660ab0
	if (!ctx.cr6.eq) goto loc_82660AB0;
	// lhz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 36);
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
loc_82660AB0:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8264ceb0
	ctx.lr = 0x82660ABC;
	sub_8264CEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82660af0
	if (!ctx.cr0.eq) goto loc_82660AF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8264ce90
	ctx.lr = 0x82660AE8;
	sub_8264CE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82660b24
	if (ctx.cr0.eq) goto loc_82660B24;
loc_82660AF0:
	// bl 0x8264d050
	ctx.lr = 0x82660AF4;
	sub_8264D050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82660b04
	if (ctx.cr0.gt) goto loc_82660B04;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82660b0c
	goto loc_82660B0C;
loc_82660B04:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	r31.u64 = ctx.r11.u64 | 2147942400;
loc_82660B0C:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82660b24
	if (ctx.cr6.eq) goto loc_82660B24;
	// bl 0x8264ce68
	ctx.lr = 0x82660B1C;
	sub_8264CE68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82660B24:
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

DEFINE_REX_FUNC(sub_82666E48) {
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
	// lwz r31,56(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82666e80
	if (ctx.cr6.lt) goto loc_82666E80;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4114
	ctx.r5.u64 = ctx.r5.u64 | 4114;
	// b 0x82666ec4
	goto loc_82666EC4;
loc_82666E80:
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// addi r9,r3,432
	ctx.r9.s64 = ctx.r3.s64 + 432;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82666eb4
	if (ctx.cr6.eq) goto loc_82666EB4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82666E98:
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82666eb4
	if (ctx.cr6.eq) goto loc_82666EB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82666e98
	if (ctx.cr6.lt) goto loc_82666E98;
loc_82666EB4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82666ed0
	if (ctx.cr6.lt) goto loc_82666ED0;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4101
	ctx.r5.u64 = ctx.r5.u64 | 4101;
loc_82666EC4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x82666ECC;
	sub_826748E8(ctx, base);
	// b 0x82666f50
	goto loc_82666F50;
loc_82666ED0:
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r6,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r6.u32);
loc_82666EE4:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82666ee4
	if (!ctx.cr0.eq) goto loc_82666EE4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r31.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// bl 0x82662f78
	ctx.lr = 0x82666F18;
	sub_82662F78(ctx, base);
loc_82666F18:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82666f18
	if (!ctx.cr0.eq) goto loc_82666F18;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// bl 0x82671018
	ctx.lr = 0x82666F50;
	sub_82671018(ctx, base);
loc_82666F50:
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

DEFINE_REX_FUNC(sub_82670958) {
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
	ctx.lr = 0x82670960;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// addi r22,r3,296
	r22.s64 = ctx.r3.s64 + 296;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// add r23,r11,r3
	r23.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82670984:
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826709f0
	if (ctx.cr0.eq) goto loc_826709F0;
	// subfic r11,r28,127
	ctx.xer.ca = r28.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - r28.u64;
	// subfic r10,r28,-1
	ctx.xer.ca = r28.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - r28.u64;
	// rlwinm r26,r11,24,0,7
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r10,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// mr r30,r23
	r30.u64 = r23.u64;
	// oris r25,r11,32768
	r25.u64 = ctx.r11.u64 | 2147483648;
	// subf r24,r23,r22
	r24.u64 = r22.u64 - r23.u64;
loc_826709B0:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// add r5,r24,r30
	ctx.r5.u64 = r24.u64 + r30.u64;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// subf r21,r29,r11
	r21.u64 = ctx.r11.u64 - r29.u64;
	// or r4,r21,r26
	ctx.r4.u64 = r21.u64 | r26.u64;
	// bl 0x82675b68
	ctx.lr = 0x826709CC;
	sub_82675B68(ctx, base);
	// or r4,r25,r21
	ctx.r4.u64 = r25.u64 | r21.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x82675b68
	ctx.lr = 0x826709DC;
	sub_82675B68(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826709b0
	if (ctx.cr6.lt) goto loc_826709B0;
loc_826709F0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x82670984
	if (ctx.cr6.lt) goto loc_82670984;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82672E28) {
	REX_FUNC_PROLOGUE();
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r8,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// b 0x826710f8
	sub_826710F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675B70) {
	REX_FUNC_PROLOGUE();
	// b 0x82679e50
	sub_82679E50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675CF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-1100
	ctx.r3.s64 = ctx.r3.s64 + -1100;
	// b 0x8267a038
	sub_8267A038(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675DF8) {
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
	ctx.lr = 0x82675E00;
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82675e3c
	if (!ctx.cr6.eq) goto loc_82675E3C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82671b38
	ctx.lr = 0x82675E34;
	sub_82671B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82675e54
	if (!ctx.cr0.eq) goto loc_82675E54;
loc_82675E3C:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266cf30
	ctx.lr = 0x82675E54;
	sub_8266CF30(ctx, base);
loc_82675E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82677130) {
	REX_FUNC_PROLOGUE();
	// clrlwi r5,r4,30
	ctx.r5.u64 = ctx.r4.u32 & 0x3;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// b 0x8267717c
	goto loc_8267717C;
loc_82677158:
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82677188
	if (ctx.cr6.eq) goto loc_82677188;
	// rldicl r11,r11,62,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// addi r7,r5,2
	ctx.r7.s64 = ctx.r5.s64 + 2;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
loc_8267717C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82677158
	if (!ctx.cr6.eq) goto loc_82677158;
	// blr 
	return;
loc_82677188:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82676c58
	sub_82676C58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82678C00) {
	REX_FUNC_PROLOGUE();
loc_82678C00:
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82678c30
	if (!ctx.cr6.eq) goto loc_82678C30;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82678c60
	if (ctx.cr6.eq) goto loc_82678C60;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82678c38
	goto loc_82678C38;
loc_82678C30:
	// rlwinm r11,r11,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
loc_82678C38:
	// lhz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// sth r11,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82678c00
	if (ctx.cr0.eq) goto loc_82678C00;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82678C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267A818) {
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
	// lwz r30,1188(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267a8f8
	if (ctx.cr0.eq) goto loc_8267A8F8;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r8,456(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,460(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// beq cr6,0x8267a8ac
	if (ctx.cr6.eq) goto loc_8267A8AC;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// blt cr6,0x8267a868
	if (ctx.cr6.lt) goto loc_8267A868;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// b 0x8267a86c
	goto loc_8267A86C;
loc_8267A868:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
loc_8267A86C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267a8ac
	if (ctx.cr6.lt) goto loc_8267A8AC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8267a9a4
	if (ctx.cr6.eq) goto loc_8267A9A4;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// stb r11,1185(r31)
	REX_STORE_U8(r31.u32 + 1185, ctx.r11.u8);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bl 0x826797d8
	ctx.lr = 0x8267A8A8;
	sub_826797D8(ctx, base);
	// b 0x8267a9a4
	goto loc_8267A9A4;
loc_8267A8AC:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x8267a8bc
	if (ctx.cr6.eq) goto loc_8267A8BC;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x82684280
	ctx.lr = 0x8267A8BC;
	sub_82684280(ctx, base);
loc_8267A8BC:
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lbz r9,1184(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// rlwinm. r8,r11,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r10.u32);
	// stb r9,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r9.u8);
	// beq 0x8267a9a4
	if (ctx.cr0.eq) goto loc_8267A9A4;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r10.u32);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// b 0x8267a9a4
	goto loc_8267A9A4;
loc_8267A8F8:
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267a934
	if (!ctx.cr0.eq) goto loc_8267A934;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267a6a0
	ctx.lr = 0x8267A90C;
	sub_8267A6A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267a9a4
	if (ctx.cr0.eq) goto loc_8267A9A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a934
	if (ctx.cr6.eq) goto loc_8267A934;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x826829f0
	ctx.lr = 0x8267A930;
	sub_826829F0(ctx, base);
	// b 0x8267a9a4
	goto loc_8267A9A4;
loc_8267A934:
	// ld r11,1056(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1056);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,1084(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1084);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lbz r7,1184(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// rlwimi r30,r10,23,8,10
	r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xE00000) | (r30.u64 & 0xFFFFFFFFFF1FFFFF);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r10,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r10.u32);
	// lhz r8,1090(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 1090);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r10,r7,64
	ctx.r10.u64 = ctx.r7.u64 | 64;
	// stw r30,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, r30.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// stb r10,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r10.u8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8267a99c
	if (ctx.cr6.lt) goto loc_8267A99C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a99c
	if (ctx.cr6.eq) goto loc_8267A99C;
	// lwz r10,1064(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1064);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// oris r11,r30,16
	ctx.r11.u64 = r30.u64 | 1048576;
	// bge cr6,0x8267a9a0
	if (!ctx.cr6.lt) goto loc_8267A9A0;
loc_8267A99C:
	// rlwinm r11,r30,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
loc_8267A9A0:
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
loc_8267A9A4:
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

DEFINE_REX_FUNC(sub_82684320) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826843a8
	if (ctx.cr6.lt) goto loc_826843A8;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826843a8
	if (ctx.cr6.lt) goto loc_826843A8;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826843a8
	if (ctx.cr6.lt) goto loc_826843A8;
	// ld r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 120);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82684384
	if (!ctx.cr6.gt) goto loc_82684384;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82684384:
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82682d50
	ctx.lr = 0x82684390;
	sub_82682D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
loc_826843A8:
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

DEFINE_REX_FUNC(sub_82687630) {
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
	ctx.lr = 0x82687638;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x826876a0
	goto loc_826876A0;
loc_82687650:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,21(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 21);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lbz r25,20(r4)
	r25.u64 = REX_LOAD_U8(ctx.r4.u32 + 20);
	// subf r28,r11,r4
	r28.u64 = ctx.r4.u64 - ctx.r11.u64;
	// b 0x82687688
	goto loc_82687688;
loc_82687678:
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r25,20(r30)
	r25.u64 = REX_LOAD_U8(r30.u32 + 20);
loc_82687688:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82681598
	ctx.lr = 0x82687698;
	sub_82681598(ctx, base);
	// mr. r11,r25
	ctx.r11.u64 = r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82687678
	if (!ctx.cr0.eq) goto loc_82687678;
loc_826876A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82687650
	if (!ctx.cr6.eq) goto loc_82687650;
	// stw r26,4(r29)
	REX_STORE_U32(r29.u32 + 4, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,8(r29)
	REX_STORE_U32(r29.u32 + 8, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8268B0F8) {
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
	// bl 0x8268e938
	ctx.lr = 0x8268B114;
	sub_8268E938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8268b1a8
	if (ctx.cr0.lt) goto loc_8268B1A8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268b154
	if (!ctx.cr6.eq) goto loc_8268B154;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x8268b14c
	goto loc_8268B14C;
loc_8268B134:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8268B14C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268b134
	if (!ctx.cr6.eq) goto loc_8268B134;
loc_8268B154:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268b1a8
	if (!ctx.cr6.eq) goto loc_8268B1A8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268b1a8
	if (ctx.cr6.eq) goto loc_8268B1A8;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8268b1a8
	if (ctx.cr6.eq) goto loc_8268B1A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B19C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8268b1a8
	if (ctx.cr0.lt) goto loc_8268B1A8;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_8268B1A8:
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

DEFINE_REX_FUNC(sub_82691F98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82691FA0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82691fbc
	if (!ctx.cr6.eq) goto loc_82691FBC;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x826920ac
	goto loc_826920AC;
loc_82691FBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82691fd0
	if (!ctx.cr6.eq) goto loc_82691FD0;
	// li r3,6130
	ctx.r3.s64 = 6130;
	// b 0x826920ac
	goto loc_826920AC;
loc_82691FD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82691fe4
	if (!ctx.cr6.eq) goto loc_82691FE4;
	// li r3,6125
	ctx.r3.s64 = 6125;
	// b 0x826920ac
	goto loc_826920AC;
loc_82691FE4:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82691ffc
	if (ctx.cr6.lt) goto loc_82691FFC;
	// li r3,6145
	ctx.r3.s64 = 6145;
	// b 0x826920ac
	goto loc_826920AC;
loc_82691FFC:
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 18);
	// addi r29,r31,18
	r29.s64 = r31.s64 + 18;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82692014
	if (ctx.cr6.lt) goto loc_82692014;
	// li r3,6150
	ctx.r3.s64 = 6150;
	// b 0x826920ac
	goto loc_826920AC;
loc_82692014:
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82692028
	if (!ctx.cr6.gt) goto loc_82692028;
	// li r3,6135
	ctx.r3.s64 = 6135;
	// b 0x826920ac
	goto loc_826920AC;
loc_82692028:
	// lbz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 20);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x82692040
	if (!ctx.cr6.gt) goto loc_82692040;
	// li r3,6140
	ctx.r3.s64 = 6140;
	// b 0x826920ac
	goto loc_826920AC;
loc_82692040:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826920a8
	if (ctx.cr6.eq) goto loc_826920A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,64206
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64206, ctx.xer);
	// bne cr6,0x826920a8
	if (!ctx.cr6.eq) goto loc_826920A8;
	// lbz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 12);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82692068
	if (ctx.cr6.eq) goto loc_82692068;
	// li r3,6110
	ctx.r3.s64 = 6110;
	// b 0x826920ac
	goto loc_826920AC;
loc_82692068:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// bl 0x82693178
	ctx.lr = 0x82692074;
	sub_82693178(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// bl 0x826929f0
	ctx.lr = 0x82692084;
	sub_826929F0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lhz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82692988
	ctx.lr = 0x826920A0;
	sub_82692988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826920ac
	goto loc_826920AC;
loc_826920A8:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_826920AC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826990D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,19(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 19);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82699144
	if (ctx.cr0.eq) goto loc_82699144;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,9008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9004(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9004);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82699114
	if (!ctx.cr6.lt) goto loc_82699114;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82699114:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82699144
	if (ctx.cr6.lt) goto loc_82699144;
	// lhz r11,14(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 14);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,14(r6)
	REX_STORE_U16(ctx.r6.u32 + 14, ctx.r11.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8269913c
	if (!ctx.cr6.gt) goto loc_8269913C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82699148
	goto loc_82699148;
loc_8269913C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8269914c
	goto loc_8269914C;
loc_82699144:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82699148:
	// sth r11,14(r6)
	REX_STORE_U16(ctx.r6.u32 + 14, ctx.r11.u16);
loc_8269914C:
	// stb r11,20(r6)
	REX_STORE_U8(ctx.r6.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269B530) {
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
	// li r4,260
	ctx.r4.s64 = 260;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8269b6b8
	ctx.lr = 0x8269B550;
	sub_8269B6B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8269C648) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8269C650;
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
	// bl 0x8269c3a0
	ctx.lr = 0x8269C66C;
	sub_8269C3A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269c6a8
	if (!ctx.cr0.eq) goto loc_8269C6A8;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,8876(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8876);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c6a8
	if (ctx.cr6.eq) goto loc_8269C6A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C6A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8269c458
	ctx.lr = 0x8269C6A8;
	sub_8269C458(ctx, base);
loc_8269C6A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8269DED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269DEE0;
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
	// bne 0x8269df18
	if (!ctx.cr0.eq) goto loc_8269DF18;
	// bl 0x826a33d0
	ctx.lr = 0x8269DF04;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269DF10;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269df44
	goto loc_8269DF44;
loc_8269DF18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x8269DF20;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269dd28
	ctx.lr = 0x8269DF30;
	sub_8269DD28(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x8269df6c
	ctx.lr = 0x8269DF40;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8269DF6C(ctx, base);
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8269DF44:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826A0800) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,27184
	ctx.r11.s64 = ctx.r11.s64 + 27184;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,259
	ctx.r3.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A1368) {
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
	ctx.lr = 0x826A1370;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x826a13b0
	if (!ctx.cr6.eq) goto loc_826A13B0;
loc_826A1394:
	// bl 0x826a33d0
	ctx.lr = 0x826A1398;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_826A139C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A13A4;
	sub_8269CB20(ctx, base);
loc_826A13A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826A13A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826A13B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x826a13d0
	if (!ctx.cr6.eq) goto loc_826A13D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826a13d8
	if (!ctx.cr6.eq) goto loc_826A13D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826a1394
	if (!ctx.cr6.eq) goto loc_826A1394;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a13a8
	goto loc_826A13A8;
loc_826A13D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826a1394
	if (ctx.cr6.eq) goto loc_826A1394;
loc_826A13D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826a1394
	if (ctx.cr6.eq) goto loc_826A1394;
	// li r24,0
	r24.s64 = 0;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// ble cr6,0x826a1438
	if (!ctx.cr6.gt) goto loc_826A1438;
	// bl 0x826a33d0
	ctx.lr = 0x826A13F0;
	sub_826A33D0(ctx, base);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r25,1
	ctx.r5.s64 = r25.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// bl 0x826a1248
	ctx.lr = 0x826A1414;
	sub_826A1248(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x826a1494
	if (!ctx.cr6.eq) goto loc_826A1494;
	// bl 0x826a33d0
	ctx.lr = 0x826A1420;
	sub_826A33D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x826a13a4
	if (!ctx.cr6.eq) goto loc_826A13A4;
	// bl 0x826a33d0
	ctx.lr = 0x826A1430;
	sub_826A33D0(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// b 0x826a13a4
	goto loc_826A13A4;
loc_826A1438:
	// bl 0x826a33d0
	ctx.lr = 0x826A143C;
	sub_826A33D0(ctx, base);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r26,0(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// bl 0x826a1248
	ctx.lr = 0x826A1460;
	sub_826A1248(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, r24.u8);
	// bne cr6,0x826a1494
	if (!ctx.cr6.eq) goto loc_826A1494;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x826a149c
	if (!ctx.cr6.eq) goto loc_826A149C;
	// bl 0x826a33d0
	ctx.lr = 0x826A147C;
	sub_826A33D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x826a13a4
	if (!ctx.cr6.eq) goto loc_826A13A4;
	// bl 0x826a33d0
	ctx.lr = 0x826A148C;
	sub_826A33D0(ctx, base);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x826a13a4
	goto loc_826A13A4;
loc_826A1494:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826a13a8
	if (!ctx.cr6.lt) goto loc_826A13A8;
loc_826A149C:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// bne cr6,0x826a13a4
	if (!ctx.cr6.eq) goto loc_826A13A4;
	// bl 0x826a33d0
	ctx.lr = 0x826A14AC;
	sub_826A33D0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x826a139c
	goto loc_826A139C;
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

DEFINE_REX_FUNC(__restvmx_114) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A5CA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,9032(r11)
	REX_STORE_U32(ctx.r11.u32 + 9032, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A7D40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826A7D48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a7dd4
	if (!ctx.cr6.eq) goto loc_826A7DD4;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826a7db0
	if (!ctx.cr6.eq) goto loc_826A7DB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a2b40
	ctx.lr = 0x826A7D80;
	sub_826A2B40(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826a7d94
	if (!ctx.cr0.eq) goto loc_826A7D94;
loc_826A7D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a7dd8
	goto loc_826A7DD8;
loc_826A7D94:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x826A7DAC;
	sub_826A1E70(ctx, base);
	// b 0x826a7dc8
	goto loc_826A7DC8;
loc_826A7DB0:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x826b1478
	ctx.lr = 0x826A7DBC;
	sub_826B1478(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7d8c
	if (ctx.cr0.eq) goto loc_826A7D8C;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_826A7DC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826A7DD4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826A7DD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826AB170) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x826ab18c
	if (!ctx.cr6.eq) goto loc_826AB18C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x826ab25c
	goto loc_826AB25C;
loc_826AB18C:
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r9,r11,0,17,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ab234
	if (!ctx.cr0.eq) goto loc_826AB234;
	// lwz r8,16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi. r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x826ab1b0
	if (!ctx.cr0.eq) goto loc_826AB1B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826ab234
	if (ctx.cr6.eq) goto loc_826AB234;
loc_826AB1B0:
	// li r9,-1021
	ctx.r9.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x826ab1c4
	if (ctx.cr6.lt) goto loc_826AB1C4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_826AB1C4:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x826ab1fc
	if (!ctx.cr0.eq) goto loc_826AB1FC;
loc_826AB1CC:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
	// beq 0x826ab1e4
	if (ctx.cr0.eq) goto loc_826AB1E4;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r8,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
loc_826AB1E4:
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x826ab1cc
	if (ctx.cr0.eq) goto loc_826AB1CC;
	// stw r10,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r10.u32);
loc_826AB1FC:
	// andi. r11,r11,65519
	ctx.r11.u64 = ctx.r11.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,16(r1)
	REX_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// beq cr6,0x826ab214
	if (ctx.cr6.eq) goto loc_826AB214;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,16(r1)
	REX_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
loc_826AB214:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x826ab258
	goto loc_826AB258;
loc_826AB234:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f1,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// rlwinm r10,r9,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r10,-1022
	ctx.r9.s64 = ctx.r10.s64 + -1022;
loc_826AB258:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_826AB25C:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B48D8) {
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
	ctx.lr = 0x826B48E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82793824
	ctx.lr = 0x826B4904;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8204
	ctx.r11.s64 = 537657344;
	// ori r11,r11,59648
	ctx.r11.u64 = ctx.r11.u64 | 59648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b492c
	if (!ctx.cr6.lt) goto loc_826B492C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// bl 0x8264d888
	ctx.lr = 0x826B4928;
	sub_8264D888(ctx, base);
	// b 0x826b49b4
	goto loc_826B49B4;
loc_826B492C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82794164
	ctx.lr = 0x826B4938;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826b49b4
	if (!ctx.cr0.eq) goto loc_826B49B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// bl 0x827937c4
	ctx.lr = 0x826B497C;
	__imp__XMsgStartIORequest(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826b4990
	if (!ctx.cr0.lt) goto loc_826B4990;
	// li r11,1627
	ctx.r11.s64 = 1627;
	// b 0x826b49b0
	goto loc_826B49B0;
loc_826B4990:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826b49ac
	if (!ctx.cr6.eq) goto loc_826B49AC;
	// bl 0x823f0058
	ctx.lr = 0x826B499C;
	sub_823F0058(ctx, base);
	// li r11,1627
	ctx.r11.s64 = 1627;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x826b49b0
	goto loc_826B49B0;
loc_826B49AC:
	// li r11,997
	ctx.r11.s64 = 997;
loc_826B49B0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826B49B4:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b49c4
	if (ctx.cr6.eq) goto loc_826B49C4;
	// bl 0x82793974
	ctx.lr = 0x826B49C4;
	__imp__ObDereferenceObject(ctx, base);
loc_826B49C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826BAD20) {
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
	ctx.lr = 0x826BAD28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BAD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bae24
	if (ctx.cr6.lt) goto loc_826BAE24;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede98
	ctx.lr = 0x826BAD80;
	sub_823EDE98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x826badcc
	if (!ctx.cr6.eq) goto loc_826BADCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BADA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bae20
	if (ctx.cr6.lt) goto loc_826BAE20;
loc_826BADAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x823ee090
	ctx.lr = 0x826BADB8;
	sub_823EE090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826badd4
	if (ctx.cr6.eq) goto loc_826BADD4;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// b 0x826badec
	goto loc_826BADEC;
loc_826BADCC:
	// li r30,0
	r30.s64 = 0;
	// b 0x826badac
	goto loc_826BADAC;
loc_826BADD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BADE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826BADEC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826bae20
	if (ctx.cr6.lt) goto loc_826BAE20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BAE18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826BAE20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826BAE24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826C3398) {
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
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C33B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826C35B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r4,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_826C62D8) {
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
	// bl 0x826c6168
	ctx.lr = 0x826C62F8;
	sub_826C6168(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c6318
	if (ctx.cr6.eq) goto loc_826C6318;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x823f0350
	ctx.lr = 0x826C6314;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826C6318:
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

DEFINE_REX_FUNC(sub_826C8728) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826C8730;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826c879c
	if (ctx.cr6.eq) goto loc_826C879C;
loc_826C8748:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826c68d8
	ctx.lr = 0x826C8764;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// bl 0x826c68d8
	ctx.lr = 0x826C8778;
	sub_826C68D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x826c68d8
	ctx.lr = 0x826C8788;
	sub_826C68D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// bne cr6,0x826c8748
	if (!ctx.cr6.eq) goto loc_826C8748;
loc_826C879C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826CECA0) {
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
	ctx.lr = 0x826CECA8;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r17,56(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r18,r11,30736
	r18.s64 = ctx.r11.s64 + 30736;
	// dcbt r0,r18
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r18
	// lwz r9,224(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826cecf4
	if (!ctx.cr6.gt) goto loc_826CECF4;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826ced0c
	if (ctx.cr6.gt) goto loc_826CED0C;
loc_826CECF4:
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
	// b 0x826a1cdc
	return;
loc_826CED0C:
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// li r24,0
	r24.s64 = 0;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r23,r8,r11
	r23.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x826ced44
	if (!ctx.cr6.gt) goto loc_826CED44;
loc_826CED34:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// srw r11,r23,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (r23.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x826ced34
	if (ctx.cr6.gt) goto loc_826CED34;
loc_826CED44:
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x826ced7c
	if (!ctx.cr6.gt) goto loc_826CED7C;
loc_826CED6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826ced6c
	if (ctx.cr6.gt) goto loc_826CED6C;
loc_826CED7C:
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
	// ble cr6,0x826ceda4
	if (!ctx.cr6.gt) goto loc_826CEDA4;
loc_826CED94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826ced94
	if (ctx.cr6.gt) goto loc_826CED94;
loc_826CEDA4:
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
	// extsh r19,r3
	r19.s64 = ctx.r3.s16;
	// li r29,-1
	r29.s64 = -1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826cee04
	if (ctx.cr6.lt) goto loc_826CEE04;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
loc_826CEDF4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826cedf4
	if (!ctx.cr6.lt) goto loc_826CEDF4;
loc_826CEE04:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CEE18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf174
	if (ctx.cr6.lt) goto loc_826CF174;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r22,r19
	r22.s64 = r19.s16;
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
	// bge cr6,0x826cf024
	if (!ctx.cr6.lt) goto loc_826CF024;
	// li r26,1
	r26.s64 = 1;
loc_826CEE58:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x826cf024
	if (!ctx.cr6.lt) goto loc_826CF024;
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
	// blt cr6,0x826ceea0
	if (ctx.cr6.lt) goto loc_826CEEA0;
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r23
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r23.s32);
	// srawi r8,r7,12
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 12;
loc_826CEE90:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826cee90
	if (!ctx.cr6.lt) goto loc_826CEE90;
loc_826CEEA0:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// bge cr6,0x826cf024
	if (!ctx.cr6.lt) goto loc_826CF024;
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
	// bne cr6,0x826ceeec
	if (!ctx.cr6.eq) goto loc_826CEEEC;
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
	// bl 0x826ed020
	ctx.lr = 0x826CEEE4;
	sub_826ED020(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x826cef14
	goto loc_826CEF14;
loc_826CEEEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ed020
	ctx.lr = 0x826CEEF4;
	sub_826ED020(ctx, base);
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
loc_826CEF14:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(r24.s32, 12, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826cef44
	if (!ctx.cr6.gt) goto loc_826CEF44;
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
	// b 0x826cef54
	goto loc_826CEF54;
loc_826CEF44:
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// subfic r10,r24,12
	ctx.xer.ca = r24.u32 <= 12;
	ctx.r10.u64 = static_cast<uint64_t>(12) - r24.u64;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
loc_826CEF54:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(r29.s32, r22.s32, ctx.xer);
	// ble cr6,0x826cef6c
	if (!ctx.cr6.gt) goto loc_826CEF6C;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_826CEF6C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cef7c
	if (ctx.cr6.eq) goto loc_826CEF7C;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_826CEF7C:
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
	ctx.lr = 0x826CEFA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf174
	if (ctx.cr6.lt) goto loc_826CF174;
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
	// bge cr6,0x826cf010
	if (!ctx.cr6.lt) goto loc_826CF010;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x826ceff4
	if (!ctx.cr6.lt) goto loc_826CEFF4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x826cef6c
	goto loc_826CEF6C;
loc_826CEFF4:
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
	// b 0x826cef6c
	goto loc_826CEF6C;
loc_826CF010:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r22.s32, ctx.xer);
	// blt cr6,0x826cee58
	if (ctx.cr6.lt) goto loc_826CEE58;
loc_826CF024:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// bne cr6,0x826cf0d0
	if (!ctx.cr6.eq) goto loc_826CF0D0;
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826cf094
	if (ctx.cr6.lt) goto loc_826CF094;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x826cf078
	if (!ctx.cr6.lt) goto loc_826CF078;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
loc_826CF050:
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r6,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 12;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826cf078
	if (ctx.cr6.lt) goto loc_826CF078;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// blt cr6,0x826cf050
	if (ctx.cr6.lt) goto loc_826CF050;
loc_826CF078:
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// bgt cr6,0x826cf094
	if (ctx.cr6.gt) goto loc_826CF094;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ed020
	ctx.lr = 0x826CF090;
	sub_826ED020(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_826CF094:
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
	// beq cr6,0x826cf0c0
	if (ctx.cr6.eq) goto loc_826CF0C0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826CF0C0:
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
loc_826CF0D0:
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
	// bgt cr6,0x826cecf4
	if (ctx.cr6.gt) goto loc_826CECF4;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826cf104
	if (!ctx.cr6.gt) goto loc_826CF104;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826CF104;
	sub_826A2E60(ctx, base);
loc_826CF104:
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
	// bl 0x826a2e60
	ctx.lr = 0x826CF128;
	sub_826A2E60(ctx, base);
	// lhz r7,202(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 202);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r22.s32, ctx.xer);
	// bne cr6,0x826cf154
	if (!ctx.cr6.eq) goto loc_826CF154;
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// sth r11,490(r25)
	REX_STORE_U16(r25.u32 + 490, ctx.r11.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_826CF154:
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
	// b 0x826a1cdc
	return;
loc_826CF174:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_826F5638) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826f5660
	if (!ctx.cr6.eq) goto loc_826F5660;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826F5660:
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,60(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r9,344(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// std r5,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bne cr6,0x826f5738
	if (!ctx.cr6.eq) goto loc_826F5738;
	// lwz r10,340(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r8,412(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r5,340(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x826f5704
	if (!ctx.cr6.gt) goto loc_826F5704;
	// lfs f0,396(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f13.u64);
	// lwz r8,-28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r10,r10,-6448
	ctx.r10.s64 = ctx.r10.s64 + -6448;
loc_826F56D4:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x826f56fc
	if (ctx.cr6.gt) goto loc_826F56FC;
	// lwz r7,340(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826f56d4
	if (ctx.cr6.lt) goto loc_826F56D4;
	// b 0x826f5704
	goto loc_826F5704;
loc_826F56FC:
	// lwz r10,412(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_826F5704:
	// lwz r10,340(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826f5718
	if (!ctx.cr6.eq) goto loc_826F5718;
	// stw r6,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
loc_826F5718:
	// lwz r10,412(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826f582c
	if (ctx.cr6.gt) goto loc_826F582C;
loc_826F5728:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826F5738:
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826f582c
	if (!ctx.cr6.gt) goto loc_826F582C;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,3720(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
loc_826F5758:
	// lwz r9,340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// slw r7,r4,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,412(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwx r8,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// lfs f12,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,340(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,252(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// divw r31,r8,r7
	r31.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// std r31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r31.u64);
	// lfd f11,-32(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// andc r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f7,f8,f13,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f6.u64);
	// lwz r7,-20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// ble cr6,0x826f5804
	if (!ctx.cr6.gt) goto loc_826F5804;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_826F57D0:
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x826f57f8
	if (ctx.cr6.gt) goto loc_826F57F8;
	// lwz r31,340(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzx r31,r10,r31
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// blt cr6,0x826f57d0
	if (ctx.cr6.lt) goto loc_826F57D0;
	// b 0x826f5804
	goto loc_826F5804;
loc_826F57F8:
	// lwz r8,412(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stwx r7,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
loc_826F5804:
	// lwz r9,412(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826f5728
	if (!ctx.cr6.gt) goto loc_826F5728;
	// lwz r9,244(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,116
	ctx.r5.s64 = ctx.r5.s64 + 116;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826f5758
	if (ctx.cr6.lt) goto loc_826F5758;
loc_826F582C:
	// lwz r10,412(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,400(r11)
	REX_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82711BE8) {
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
	ctx.lr = 0x82711BF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
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
	// bge 0x82711c24
	if (!ctx.cr0.lt) goto loc_82711C24;
	// bl 0x82725e38
	ctx.lr = 0x82711C24;
	sub_82725E38(ctx, base);
loc_82711C24:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82711e78
	if (!ctx.cr6.eq) goto loc_82711E78;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82711c74
	if (ctx.cr6.eq) goto loc_82711C74;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82711C74:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r29,84(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 84);
	// addi r28,r10,-28096
	r28.s64 = ctx.r10.s64 + -28096;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rldicl r8,r9,9,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 9) & 0x1FF;
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r28
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r28.u32);
	// bl 0x82725f80
	ctx.lr = 0x82711CA0;
	sub_82725F80(ctx, base);
	// addi r7,r28,1
	ctx.r7.s64 = r28.s64 + 1;
	// li r30,3
	r30.s64 = 3;
	// lbzx r11,r26,r7
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82711cb8
	if (!ctx.cr6.eq) goto loc_82711CB8;
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
loc_82711CB8:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82711e78
	if (!ctx.cr6.eq) goto loc_82711E78;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82711e78
	if (ctx.cr6.lt) goto loc_82711E78;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x82711e78
	if (ctx.cr6.gt) goto loc_82711E78;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r26,r11,30
	r26.u64 = ctx.r11.u32 & 0x3;
	// beq 0x82711d80
	if (ctx.cr0.eq) goto loc_82711D80;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82711e78
	if (!ctx.cr6.eq) goto loc_82711E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r29,r8,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82711d24
	if (!ctx.cr0.lt) goto loc_82711D24;
	// bl 0x82725e38
	ctx.lr = 0x82711D24;
	sub_82725E38(ctx, base);
loc_82711D24:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r29,84(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82711e78
	if (!ctx.cr6.eq) goto loc_82711E78;
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// addi r28,r10,-29520
	r28.s64 = ctx.r10.s64 + -29520;
	// rlwinm r25,r9,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + r28.u32);
	// bl 0x82725f80
	ctx.lr = 0x82711D64;
	sub_82725F80(ctx, base);
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// lbzx r11,r25,r8
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82711d78
	if (!ctx.cr6.eq) goto loc_82711D78;
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
loc_82711D78:
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82711df0
	goto loc_82711DF0;
loc_82711D80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// oris r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 131072;
	// addi r28,r10,-29520
	r28.s64 = ctx.r10.s64 + -29520;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r29,84(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
	// rldicl r7,r8,6,58
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 6) & 0x3F;
	// rlwinm r25,r7,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + r28.u32);
	// bl 0x82725f80
	ctx.lr = 0x82711DB0;
	sub_82725F80(ctx, base);
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// lbzx r11,r25,r6
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82711dc4
	if (!ctx.cr6.eq) goto loc_82711DC4;
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
loc_82711DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfic r28,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	r28.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// bne cr6,0x82711de0
	if (!ctx.cr6.eq) goto loc_82711DE0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82711de4
	if (ctx.cr6.eq) goto loc_82711DE4;
loc_82711DE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82711DE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82711DF0:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82711e78
	if (!ctx.cr6.eq) goto loc_82711E78;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x82711e78
	if (ctx.cr6.lt) goto loc_82711E78;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(r28.s32, 15, ctx.xer);
	// bgt cr6,0x82711e78
	if (ctx.cr6.gt) goto loc_82711E78;
	// srawi r5,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r5.s64 = r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82711E20;
	sub_8275DD78(ctx, base);
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82711E30;
	sub_8275DD78(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82711E34:
	// sraw r11,r28,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	ctx.r11.s64 = r28.s32 >> temp.u32;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82711E48;
	sub_8275DD78(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bge 0x82711e34
	if (!ctx.cr0.lt) goto loc_82711E34;
	// addi r3,r31,14
	ctx.r3.s64 = r31.s64 + 14;
	// bl 0x82703590
	ctx.lr = 0x82711E5C;
	sub_82703590(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r11,19,12,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82711E78:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82725488) {
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
	ctx.lr = 0x82725490;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r9,3744(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,3800(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3800);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r25,r6,r10
	r25.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r8,3748(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// lwz r7,3752(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// li r26,0
	r26.s64 = 0;
	// lwz r5,3804(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3804);
	// add r29,r8,r11
	r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,3808(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3808);
	// add r27,r7,r11
	r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272554c
	if (!ctx.cr6.gt) goto loc_8272554C;
loc_827254E8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x827254F8;
	sub_826A1E70(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82725514;
	sub_826A1E70(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82725530;
	sub_826A1E70(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827254e8
	if (ctx.cr6.lt) goto loc_827254E8;
loc_8272554C:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lwz r8,3800(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(r23.u32, r20.u32, ctx.xer);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,3804(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r10,3808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// add r24,r8,r7
	r24.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r9,r11
	r25.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r21,r10,r11
	r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82725620
	if (!ctx.cr6.lt) goto loc_82725620;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r23,-32106
	r23.s64 = -2104098816;
	// li r22,1
	r22.s64 = 1;
loc_82725584:
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827255fc
	if (ctx.cr6.eq) goto loc_827255FC;
	// subf r26,r25,r21
	r26.u64 = r21.u64 - r25.u64;
loc_8272559C:
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r19,248(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 248);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r18,30040(r23)
	r18.u64 = REX_LOAD_U32(r23.u32 + 30040);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r6,r26,r29
	ctx.r6.u64 = r26.u64 + r29.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// bctrl 
	ctx.lr = 0x827255E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8272559c
	if (ctx.cr6.lt) goto loc_8272559C;
loc_827255FC:
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r9,r24
	r24.u64 = ctx.r9.u64 + r24.u64;
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// add r21,r10,r21
	r21.u64 = ctx.r10.u64 + r21.u64;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// blt cr6,0x82725584
	if (ctx.cr6.lt) goto loc_82725584;
loc_82725620:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82733868) {
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
	ctx.lr = 0x82733870;
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r29,r3,24192
	r29.s64 = ctx.r3.s64 + 24192;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82733880:
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// srawi r31,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	r31.s64 = ctx.r11.s32 >> 5;
	// srawi r28,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	r28.s64 = ctx.r11.s32 >> 6;
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// srawi r27,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r27.s64 = ctx.r11.s32 >> 8;
	// srawi r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	// clrlwi r30,r6,31
	r30.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r26,r4,31
	r26.u64 = ctx.r4.u32 & 0x1;
	// clrlwi r6,r28,31
	ctx.r6.u64 = r28.u32 & 0x1;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r31,r31,31
	r31.u64 = r31.u32 & 0x1;
	// clrlwi r8,r27,31
	ctx.r8.u64 = r27.u32 & 0x1;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// beq cr6,0x827338d4
	if (ctx.cr6.eq) goto loc_827338D4;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_827338D4:
	// clrlwi r28,r9,24
	r28.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// xor r8,r28,r7
	ctx.r8.u64 = r28.u64 ^ ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// bne cr6,0x827338f0
	if (!ctx.cr6.eq) goto loc_827338F0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
loc_827338F0:
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r8,r31,24
	ctx.r8.u64 = r31.u32 & 0xFF;
	// beq cr6,0x82733914
	if (ctx.cr6.eq) goto loc_82733914;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82733914:
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// beq cr6,0x82733934
	if (ctx.cr6.eq) goto loc_82733934;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82733934:
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// rlwinm r7,r4,1,23,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// or r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// blt cr6,0x8273397c
	if (ctx.cr6.lt) goto loc_8273397C;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-256
	ctx.r9.s64 = ctx.r10.s64 + -256;
	// lbz r7,-256(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -256);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,-256(r10)
	REX_STORE_U8(ctx.r10.u32 + -256, ctx.r6.u8);
	// b 0x82733980
	goto loc_82733980;
loc_8273397C:
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r9.u8);
loc_82733980:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82733880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82733880;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r3,24448
	ctx.r9.s64 = ctx.r3.s64 + 24448;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82733998:
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r8,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r3,r5,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r6,r10,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r8,r3,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r4,r6,1,0,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r4,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r7,r10,1,0,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r7.u64 & 0xFFFFFFFF00000001);
	// rlwimi r5,r7,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwimi r6,r5,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r3,r6,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0xFF;
	// stbx r3,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82733998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82733998;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82740998) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x827409A0;
	// vspltisb v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_set1_epi8(char(0xFF)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltisb v7,15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0xF)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vslb v11,v8,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vspltish v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vslb v29,v7,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vspltish v6,5
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x5)));
	// vavgsh v28,v8,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vspltish v8,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x6)));
	// vor v11,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsubuhm v27,v28,v12
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// bne cr6,0x82740d54
	if (!ctx.cr6.eq) goto loc_82740D54;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82740a28
	if (!ctx.cr6.eq) goto loc_82740A28;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827409FC:
	// lvrx128 v63,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvlx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stvlx128 v61,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stvrx128 v61,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// bdnz 0x827409fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827409FC;
	// b 0x826a1cf4
	return;
loc_82740A28:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82740c40
	if (ctx.cr6.eq) goto loc_82740C40;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82740b5c
	if (ctx.cr6.eq) goto loc_82740B5C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82741798
	if (!ctx.cr6.eq) goto loc_82741798;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82740a54
	if (ctx.cr6.eq) goto loc_82740A54;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v5,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// b 0x82740a5c
	goto loc_82740A5C;
loc_82740A54:
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v5,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
loc_82740A5C:
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r3,r1,-432
	ctx.r3.s64 = ctx.r1.s64 + -432;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-416
	r31.s64 = ctx.r1.s64 + -416;
	// lvrx128 v59,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r7,8
	ctx.r7.s64 = 8;
	// lvrx128 v58,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v13,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v57,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-400
	r30.s64 = ctx.r1.s64 + -400;
	// lvrx128 v56,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vor128 v7,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v4,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// li r7,-32
	ctx.r7.s64 = -32;
	// vmrghb v2,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,4
	ctx.r9.s64 = 4;
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,-48
	ctx.r3.s64 = -48;
	// stvx128 v3,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,-16
	r31.s64 = -16;
	// stvx128 v2,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82740AD8:
	// lvx128 v13,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v54,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v4,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslh v3,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v2,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvx128 v9,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v7,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v30,v4,v13
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v1,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v26,v31,v5
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v25,v3,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vor v22,v29,v29
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vadduhm v24,v28,v27
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v23,v26,v25
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v7,v22
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v20,v21,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v18,v19,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v17,v18,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvewx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82740ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82740AD8;
	// b 0x826a1cf4
	return;
loc_82740B5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x8)));
	// bne cr6,0x82740b6c
	if (!ctx.cr6.eq) goto loc_82740B6C;
	// vspltish v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x7)));
loc_82740B6C:
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvlx128 v48,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// lvlx128 v51,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// lvrx128 v49,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// lvrx128 v50,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvlx128 v47,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v46,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,8
	ctx.r8.s64 = 8;
	// vor128 v7,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vmrghb v6,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,-48
	ctx.r3.s64 = -48;
	// stvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82740BDC:
	// lvrx128 v45,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vor128 v13,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// lvx128 v10,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vor v4,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vslh v5,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v3,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vsubuhm v2,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v30,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvewx128 v43,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82740bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82740BDC;
	// b 0x826a1cf4
	return;
loc_82740C40:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82740c54
	if (ctx.cr6.eq) goto loc_82740C54;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v7,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// b 0x82740c5c
	goto loc_82740C5C;
loc_82740C54:
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v7,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
loc_82740C5C:
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvlx128 v42,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// lvrx128 v41,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// lvlx128 v39,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// lvrx128 v40,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,8
	ctx.r8.s64 = 8;
	// lvlx128 v38,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvrx128 v37,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// vor128 v4,v38,v37
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,4
	ctx.r9.s64 = 4;
	// stvx128 v5,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,-16
	r31.s64 = -16;
loc_82740CCC:
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// lvrx128 v36,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v35,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vor128 v5,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvx128 v9,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v13,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v1,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v2,v13
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vor v13,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vadduhm v27,v29,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v25,v31,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v26,v4,v13
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v24,v30,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v22,v27,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v23,v3,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v21,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v19,v20,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v18,v19,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v34,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v34,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82740ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82740CCC;
	// b 0x826a1cf4
	return;
loc_82740D54:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82740f60
	if (!ctx.cr6.eq) goto loc_82740F60;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82740eac
	if (ctx.cr6.eq) goto loc_82740EAC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82740e28
	if (ctx.cr6.eq) goto loc_82740E28;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82741798
	if (!ctx.cr6.eq) goto loc_82741798;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82740d88
	if (ctx.cr6.eq) goto loc_82740D88;
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v4,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// b 0x82740d90
	goto loc_82740D90;
loc_82740D88:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v4,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
loc_82740D90:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82740DA4:
	// lvrx128 v33,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v13,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vsldoi v7,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vmrghb v9,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v5,v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v3,v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 13));
	// vmrghb v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v2,v13
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v31,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v30,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v25,v1,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v9,v5
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v23,v28,v27
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v26,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v21,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v19,v20,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v18,v19,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82740da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82740DA4;
	// b 0x826a1cf4
	return;
loc_82740E28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v7,7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x7)));
	// bne cr6,0x82740e38
	if (!ctx.cr6.eq) goto loc_82740E38;
	// vspltish v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x8)));
loc_82740E38:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82740E4C:
	// lvrx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v13,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsldoi v10,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi v8,v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v6,v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 13));
	// vmrghb v12,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v5,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v3,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v1,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v31,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v60,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvewx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82740e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82740E4C;
	// b 0x826a1cf4
	return;
loc_82740EAC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82740ec0
	if (ctx.cr6.eq) goto loc_82740EC0;
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v4,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// b 0x82740ec8
	goto loc_82740EC8;
loc_82740EC0:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v4,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
loc_82740EC8:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82740EDC:
	// lvrx128 v59,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v58,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v13,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vsldoi v9,v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v7,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi v3,v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 13));
	// vmrghb v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v2,v13
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v28,v1,v7
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v27,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v25,v31,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v5,v7
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v26,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v21,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v19,v20,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v18,v19,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v57,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82740edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82740EDC;
	// b 0x826a1cf4
	return;
loc_82740F60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// beq cr6,0x82740fa8
	if (ctx.cr6.eq) goto loc_82740FA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740f94
	if (ctx.cr6.eq) goto loc_82740F94;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82740f8c
	if (ctx.cr6.eq) goto loc_82740F8C;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vadduhm v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// b 0x82740fe0
	goto loc_82740FE0;
loc_82740F8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82740fe0
	if (!ctx.cr6.eq) goto loc_82740FE0;
loc_82740F94:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82740fe0
	if (!ctx.cr6.eq) goto loc_82740FE0;
	// vor v13,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// b 0x82740fe0
	goto loc_82740FE0;
loc_82740FA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740fcc
	if (ctx.cr6.eq) goto loc_82740FCC;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82740fc4
	if (ctx.cr6.eq) goto loc_82740FC4;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// b 0x82740fe0
	goto loc_82740FE0;
loc_82740FC4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82740fdc
	if (!ctx.cr6.eq) goto loc_82740FDC;
loc_82740FCC:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// vspltish v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x0)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740fe0
	if (ctx.cr6.eq) goto loc_82740FE0;
loc_82740FDC:
	// vor v13,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
loc_82740FE0:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8274144c
	if (ctx.cr6.eq) goto loc_8274144C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82741180
	if (ctx.cr6.eq) goto loc_82741180;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x827415d0
	if (!ctx.cr6.eq) goto loc_827415D0;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r1,-432
	r29.s64 = ctx.r1.s64 + -432;
	// addi r28,r1,-256
	r28.s64 = ctx.r1.s64 + -256;
	// addi r27,r1,-416
	r27.s64 = ctx.r1.s64 + -416;
	// addi r26,r1,-240
	r26.s64 = ctx.r1.s64 + -240;
	// lvrx128 v56,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r25,r1,-400
	r25.s64 = ctx.r1.s64 + -400;
	// lvlx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v8,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// addi r24,r1,-224
	r24.s64 = ctx.r1.s64 + -224;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lvrx128 v54,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v53,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v52,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r30,r1,-384
	r30.s64 = ctx.r1.s64 + -384;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// stvx128 v7,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v4,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82741090:
	// addi r3,r1,-400
	ctx.r3.s64 = ctx.r1.s64 + -400;
	// lvrx128 v50,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r1,-224
	r29.s64 = ctx.r1.s64 + -224;
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,-416
	r28.s64 = ctx.r1.s64 + -416;
	// vor128 v5,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// addi r8,r1,-432
	ctx.r8.s64 = ctx.r1.s64 + -432;
	// lvx128 v8,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-256
	ctx.r3.s64 = ctx.r1.s64 + -256;
	// lvx128 v7,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v4,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v2,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v31,v7
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// vslh v20,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v21,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v2,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v17,v30,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v19,v24,v8
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v7,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v16,v25,v13
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v15,v23,v1
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vslh v14,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v2,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v31,v16,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v30,v1,v5
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v26,v14,v15
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v25,v4,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v24,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v31,v2
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vslh v22,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v20,v23,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubuhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vsrah v18,v20,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v18,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x82741090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741090;
	// b 0x827415d0
	goto loc_827415D0;
loc_82741180:
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r1,-432
	r30.s64 = ctx.r1.s64 + -432;
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// addi r28,r1,-416
	r28.s64 = ctx.r1.s64 + -416;
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// lvrx128 v48,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,-400
	r26.s64 = ctx.r1.s64 + -400;
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v8,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// addi r25,r1,-224
	r25.s64 = ctx.r1.s64 + -224;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r31,r8,r4
	r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvrx128 v46,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v45,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v43,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v44,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// stvx128 v7,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v4,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82741210:
	// lvrx128 v42,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,-384
	ctx.r8.s64 = ctx.r1.s64 + -384;
	// lvlx128 v41,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-208
	ctx.r3.s64 = ctx.r1.s64 + -208;
	// vor128 v8,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r1,-416
	r30.s64 = ctx.r1.s64 + -416;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r30,r1,-432
	r30.s64 = ctx.r1.s64 + -432;
	// addi r29,r1,-240
	r29.s64 = ctx.r1.s64 + -240;
	// add r24,r11,r30
	r24.u64 = ctx.r11.u64 + r30.u64;
	// lvrx128 v40,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,-400
	r26.s64 = ctx.r1.s64 + -400;
	// lvlx128 v39,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// vor128 v1,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// addi r25,r1,-224
	r25.s64 = ctx.r1.s64 + -224;
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// lvx128 v8,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-368
	r30.s64 = ctx.r1.s64 + -368;
	// vadduhm v26,v8,v5
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrghb v5,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// lvx128 v3,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// lvx128 v8,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v3,v8
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v24,v3,v5
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// lvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v23,v25,v4
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglb v4,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r23,r11,r29
	r23.u64 = ctx.r11.u64 + r29.u64;
	// stvx128 v5,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v2,v7
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// vslh v22,v31,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v2,v4
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vsubuhm v18,v13,v26
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// vslh v19,v30,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v22,v31
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsubuhm v16,v13,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// lvlx128 v38,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v4,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v15,v19,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsubuhm v4,v13,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// lvx128 v14,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// lvx128 v3,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v3,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// lvx128 v31,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v15,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v24,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v26,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v2,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// stvx128 v24,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v26,v5
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v20,v25,v3
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// stvx128 v23,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v22,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v18,v20,v16
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v17,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-176
	r28.s64 = ctx.r1.s64 + -176;
	// stvx128 v16,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-352
	r27.s64 = ctx.r1.s64 + -352;
	// lvrx128 v37,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// vor128 v5,v38,v37
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// lvx128 v15,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lvx128 v14,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vadduhm v3,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvx128 v22,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v5,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-336
	r30.s64 = ctx.r1.s64 + -336;
	// vslh v25,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvlx128 v36,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v21,v8,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvrx128 v35,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v23,v7,v5
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// addi r29,r1,-160
	r29.s64 = ctx.r1.s64 + -160;
	// vadduhm v19,v26,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vadduhm v18,v25,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v16,v13,v21
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v17,v13,v23
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vor128 v1,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vor v24,v14,v14
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vadduhm v5,v19,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v4,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vor v30,v15,v15
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v20,v31,v31
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vmrglb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v22,v8
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v14,v20,v7
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v4,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// stvx128 v8,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v3,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// stvx128 v7,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v2,v13,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vslh v24,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v1,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v5
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v21,v23,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v20,v22,v3
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v19,v21,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v18,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v18,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x82741210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741210;
	// b 0x827415d0
	goto loc_827415D0;
loc_8274144C:
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r1,-432
	r30.s64 = ctx.r1.s64 + -432;
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// addi r28,r1,-416
	r28.s64 = ctx.r1.s64 + -416;
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// lvrx128 v34,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,-400
	r26.s64 = ctx.r1.s64 + -400;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v8,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// addi r25,r1,-224
	r25.s64 = ctx.r1.s64 + -224;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lvrx128 v32,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v62,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v7,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v4,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827414E0:
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// lvrx128 v60,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,-240
	r30.s64 = ctx.r1.s64 + -240;
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-400
	r29.s64 = ctx.r1.s64 + -400;
	// vor128 v4,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r28,r1,-224
	r28.s64 = ctx.r1.s64 + -224;
	// addi r8,r1,-432
	ctx.r8.s64 = ctx.r1.s64 + -432;
	// lvx128 v8,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-256
	ctx.r3.s64 = ctx.r1.s64 + -256;
	// lvx128 v7,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v3,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v1,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vadduhm v22,v31,v7
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vslh v25,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-384
	r30.s64 = ctx.r1.s64 + -384;
	// vslh v24,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// vslh v23,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v21,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v18,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v5,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v17,v30,v5
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v3,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v14,v24,v13
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v8,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v2,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v31,v16,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v1,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v26,v18,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v30,v14,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v25,v7,v8
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vslh v23,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v21,v26,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v19,v22,v23
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v18,v20,v21
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v17,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v18,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x827414e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827414E0;
loc_827415D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vor v8,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// bne cr6,0x827415e0
	if (!ctx.cr6.eq) goto loc_827415E0;
	// vor v8,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
loc_827415E0:
	// vspltish v7,7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x7)));
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82741700
	if (ctx.cr6.eq) goto loc_82741700;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82741698
	if (ctx.cr6.eq) goto loc_82741698;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82741798
	if (!ctx.cr6.eq) goto loc_82741798;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-432
	ctx.r10.s64 = ctx.r1.s64 + -432;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82741614:
	// lvx128 v0,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v13,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsldoi128 v9,v0,v58,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 12));
	// vsldoi128 v5,v0,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vsldoi128 v4,v0,v58,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 10));
	// vsrah v0,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v4,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v0,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v4,v0
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v30,v3,v13
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v1,v8
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v2,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v25,v13,v5
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v28,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v22,v25,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v23,v24
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubuhm v20,v21,v22
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vsrah v19,v20,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v18,v19,v19
	simde_mm_store_si128((simde__m128i*)v18.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddubm v17,v18,v29
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx v17,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v17.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v17,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v17.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82741614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741614;
	// b 0x826a1cf4
	return;
loc_82741698:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-432
	ctx.r10.s64 = ctx.r1.s64 + -432;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827416B0:
	// lvx128 v0,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsldoi128 v13,v0,v57,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 12));
	// vsldoi128 v12,v0,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vsldoi128 v11,v0,v57,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 10));
	// vadduhm v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v6,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v5,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v4,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v2,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v1,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddubm v31,v1,v29
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx v31,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x827416b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827416B0;
	// b 0x826a1cf4
	return;
loc_82741700:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-432
	ctx.r10.s64 = ctx.r1.s64 + -432;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82741718:
	// lvx128 v0,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v5,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsldoi128 v4,v0,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v3,v0,v56,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 12));
	// vsldoi128 v2,v0,v56,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 10));
	// vsrah v0,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v2,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v1,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v0,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v1,v0
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v26,v31,v9
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v25,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v24,v28,v8
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v23,v30,v27
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v5,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v20,v24,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v19,v22,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v20,v21
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v15,v16,v16
	simde_mm_store_si128((simde__m128i*)v15.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddubm v14,v15,v29
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx v14,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82741718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741718;
loc_82741798:
	// b 0x826a1cf4
	return;
}

