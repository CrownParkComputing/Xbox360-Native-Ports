#include "hydrothunder_funcs.105.h"

DEFINE_REX_FUNC(sub_82125E40) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r11,r11,-25060
	ctx.r11.s64 = ctx.r11.s64 + -25060;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x82125E68;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82120ac0
	ctx.lr = 0x82125E78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82120ac0
	ctx.lr = 0x82125E88;
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

DEFINE_REX_FUNC(sub_821279F0) {
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
	ctx.lr = 0x821279F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x82127A18;
	sub_8212E8B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82129138
	ctx.lr = 0x82127A24;
	sub_82129138(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82127bc8
	if (ctx.cr0.eq) goto loc_82127BC8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82129ee0
	ctx.lr = 0x82127A3C;
	sub_82129EE0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82127bc8
	if (ctx.cr0.eq) goto loc_82127BC8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// bl 0x8215f338
	ctx.lr = 0x82127A54;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f498
	ctx.lr = 0x82127A60;
	sub_8215F498(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82127A70;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82122730
	ctx.lr = 0x82127A7C;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82127A8C;
	sub_82120AC0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r24,0
	r24.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r23,r10,r9
	r23.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble 0x82127bac
	if (!ctx.cr0.gt) goto loc_82127BAC;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82127AAC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82129088
	ctx.lr = 0x82127AB8;
	sub_82129088(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127adc
	if (ctx.cr6.lt) goto loc_82127ADC;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82127ae0
	goto loc_82127AE0;
loc_82127ADC:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82127AE0:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127af4
	if (ctx.cr6.lt) goto loc_82127AF4;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x82127af8
	goto loc_82127AF8;
loc_82127AF4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82127AF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x82127B00;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162af8
	ctx.lr = 0x82127B0C;
	sub_82162AF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82120b20
	ctx.lr = 0x82127B24;
	sub_82120B20(ctx, base);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82127b3c
	if (ctx.cr6.lt) goto loc_82127B3C;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82127b40
	goto loc_82127B40;
loc_82127B3C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82127B40:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215eed0
	ctx.lr = 0x82127B4C;
	sub_8215EED0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82129670
	ctx.lr = 0x82127B60;
	sub_82129670(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82127b7c
	if (!ctx.cr0.eq) goto loc_82127B7C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82129460
	ctx.lr = 0x82127B78;
	sub_82129460(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82127B7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82127bb4
	if (ctx.cr0.eq) goto loc_82127BB4;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// blt cr6,0x82127aac
	if (ctx.cr6.lt) goto loc_82127AAC;
loc_82127BAC:
	// li r31,1
	r31.s64 = 1;
	// b 0x82127bb8
	goto loc_82127BB8;
loc_82127BB4:
	// li r31,0
	r31.s64 = 0;
loc_82127BB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82122800
	ctx.lr = 0x82127BC0;
	sub_82122800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82127bcc
	goto loc_82127BCC;
loc_82127BC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82127BCC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82136128) {
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
	ctx.lr = 0x82136130;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,6060(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6060);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x8212dd28
	ctx.lr = 0x82136160;
	sub_8212DD28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// bl 0x82135fb8
	ctx.lr = 0x82136170;
	sub_82135FB8(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82136184;
	sub_826A1E70(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,6060(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6060);
	// addi r7,r11,25112
	ctx.r7.s64 = ctx.r11.s64 + 25112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// stb r11,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r11.u8);
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1);
	// stb r11,81(r31)
	REX_STORE_U8(r31.u32 + 81, ctx.r11.u8);
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
	// stb r11,82(r31)
	REX_STORE_U8(r31.u32 + 82, ctx.r11.u8);
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// stb r11,83(r31)
	REX_STORE_U8(r31.u32 + 83, ctx.r11.u8);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82139a08
	ctx.lr = 0x8213620C;
	sub_82139A08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8213D758) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x8213D77C;
	sub_82162AF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82162210
	ctx.lr = 0x8213D790;
	sub_82162210(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8213D7A8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8213d7bc
	if (!ctx.cr6.eq) goto loc_8213D7BC;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x8213d7c4
	goto loc_8213D7C4;
loc_8213D7BC:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_8213D7C4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8213d7fc
	if (ctx.cr6.eq) goto loc_8213D7FC;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8213d7e0
	if (!ctx.cr6.gt) goto loc_8213D7E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8213d7a8
	goto loc_8213D7A8;
loc_8213D7E0:
	// bge cr6,0x8213d7f0
	if (!ctx.cr6.lt) goto loc_8213D7F0;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// b 0x8213d7f4
	goto loc_8213D7F4;
loc_8213D7F0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8213D7F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8213d800
	goto loc_8213D800;
loc_8213D7FC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8213D800:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213d814
	if (ctx.cr6.eq) goto loc_8213D814;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x8213d828
	goto loc_8213D828;
loc_8213D814:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213D828:
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

DEFINE_REX_FUNC(sub_82146C30) {
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
	ctx.lr = 0x82146C38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82146ca4
	if (!ctx.cr6.gt) goto loc_82146CA4;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82146c70
	if (ctx.cr6.gt) goto loc_82146C70;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82146C70:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82146ca4
	if (!ctx.cr6.gt) goto loc_82146CA4;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82146C84;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82146C94;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82146C9C;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82146CA4:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82146CB4;
	sub_8228CA78(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8214AEA0) {
	REX_FUNC_PROLOGUE();
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8214aee0
	if (!ctx.cr6.lt) goto loc_8214AEE0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// b 0x822f6020
	sub_822F6020(ctx, base);
	return;
loc_8214AEE0:
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214E838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214E840;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r3,92
	ctx.r3.s64 = 92;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x8214E858;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e8ec
	if (ctx.cr0.eq) goto loc_8214E8EC;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r30,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r30,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, r30.u8);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x8214E898;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e8d4
	if (ctx.cr0.eq) goto loc_8214E8D4;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stb r30,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stb r30,73(r11)
	REX_STORE_U8(ctx.r11.u32 + 73, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8214E8D4:
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
	ctx.lr = 0x8214E8EC;
	sub_82120018(ctx, base);
loc_8214E8EC:
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
	ctx.lr = 0x8214E904;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82154800) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82154838
	if (!ctx.cr6.lt) goto loc_82154838;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8215483c
	if (!ctx.cr6.gt) goto loc_8215483C;
loc_82154838:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8215483C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821548a0
	if (ctx.cr0.eq) goto loc_821548A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r30.s64 = ctx.r10.s32 >> 4;
	// bne cr6,0x82154868
	if (!ctx.cr6.eq) goto loc_82154868;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82154970
	ctx.lr = 0x82154868;
	sub_82154970(ctx, base);
loc_82154868:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821548e4
	if (ctx.cr6.eq) goto loc_821548E4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x821548e0
	goto loc_821548E0;
loc_821548A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821548b8
	if (!ctx.cr6.eq) goto loc_821548B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82154970
	ctx.lr = 0x821548B8;
	sub_82154970(ctx, base);
loc_821548B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821548e4
	if (ctx.cr6.eq) goto loc_821548E4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_821548E0:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_821548E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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

DEFINE_REX_FUNC(sub_8215BDF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215BE00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,18560
	ctx.r11.s64 = ctx.r11.s64 + 18560;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6538
	ctx.lr = 0x8215BE1C;
	sub_822F6538(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822f6280
	ctx.lr = 0x8215BE24;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8215be44
	if (ctx.cr0.eq) goto loc_8215BE44;
	// bl 0x822f6e10
	ctx.lr = 0x8215BE34;
	sub_822F6E10(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x822f6940
	ctx.lr = 0x8215BE3C;
	sub_822F6940(ctx, base);
	// bl 0x8215cbf0
	ctx.lr = 0x8215BE40;
	sub_8215CBF0(ctx, base);
	// b 0x8215be48
	goto loc_8215BE48;
loc_8215BE44:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8215BE48:
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r11,r10,18364
	ctx.r11.s64 = ctx.r10.s64 + 18364;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215c018
	ctx.lr = 0x8215BEC4;
	sub_8215C018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82160340) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8216036C;
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

DEFINE_REX_FUNC(sub_82162C58) {
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
	ctx.lr = 0x82162C60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r26,r3,80
	r26.s64 = ctx.r3.s64 + 80;
	// stw r28,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82162c88
	if (ctx.cr6.lt) goto loc_82162C88;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x82162c8c
	goto loc_82162C8C;
loc_82162C88:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82162C8C:
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// stw r28,16(r29)
	REX_STORE_U32(r29.u32 + 16, r28.u32);
	// beq cr6,0x82162ce4
	if (ctx.cr6.eq) goto loc_82162CE4;
loc_82162CB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82120ac0
	ctx.lr = 0x82162CCC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82162CD4;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82162cb8
	if (!ctx.cr6.eq) goto loc_82162CB8;
loc_82162CE4:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162298
	ctx.lr = 0x82162CF0;
	sub_82162298(ctx, base);
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82162d18
	if (ctx.cr6.eq) goto loc_82162D18;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,108(r29)
	REX_STORE_U32(r29.u32 + 108, r28.u32);
loc_82162D18:
	// addi r3,r29,128
	ctx.r3.s64 = r29.s64 + 128;
	// bl 0x8212aaa0
	ctx.lr = 0x82162D20;
	sub_8212AAA0(ctx, base);
	// lwz r3,132(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 132);
	// bl 0x8269ce98
	ctx.lr = 0x82162D28;
	sub_8269CE98(ctx, base);
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r31,r29,112
	r31.s64 = r29.s64 + 112;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82162d5c
	if (ctx.cr6.eq) goto loc_82162D5C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82162d58
	if (ctx.cr6.eq) goto loc_82162D58;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82162D4C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82162d4c
	if (!ctx.cr6.eq) goto loc_82162D4C;
loc_82162D58:
	// bl 0x8269ce98
	ctx.lr = 0x82162D5C;
	sub_8269CE98(ctx, base);
loc_82162D5C:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82162D78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,52
	ctx.r3.s64 = r29.s64 + 52;
	// bl 0x82120ac0
	ctx.lr = 0x82162D88;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82163cb0
	ctx.lr = 0x82162D90;
	sub_82163CB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8216F348) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8216F350;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca4
	ctx.lr = 0x8216F358;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r8,116(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// addi r15,r11,-25252
	r15.s64 = ctx.r11.s64 + -25252;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r14,r10,-25320
	r14.s64 = ctx.r10.s64 + -25320;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8216f39c
	if (ctx.cr6.gt) goto loc_8216F39C;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8216F39C;
	sub_821231D0(ctx, base);
loc_8216F39C:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// li r18,0
	r18.s64 = 0;
	// lwz r19,112(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 112);
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f93c
	if (!ctx.cr6.gt) goto loc_8216F93C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r16,-32106
	r16.s64 = -2104098816;
	// lfs f28,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f28.f64 = double(temp.f32);
	// lfd f0,1016(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1016);
	// lfs f31,596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	f31.f64 = double(temp.f32);
	// fsqrts f27,f0
	f27.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f30,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f30.f64 = double(temp.f32);
	// lfs f29,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f29.f64 = double(temp.f32);
loc_8216F3DC:
	// lwz r11,16(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 16);
	// lwz r24,4(r21)
	r24.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mulli r10,r11,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r20,4(r17)
	r20.u64 = REX_LOAD_U32(r17.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r25,r10,132
	r25.s64 = ctx.r10.s64 + 132;
	// lwz r28,136(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// lwz r22,148(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// add r31,r24,r28
	r31.u64 = r24.u64 + r28.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216f458
	if (!ctx.cr6.gt) goto loc_8216F458;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8216f424
	if (ctx.cr6.gt) goto loc_8216F424;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8216F424:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216f458
	if (!ctx.cr6.gt) goto loc_8216F458;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,24
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// bl 0x8269d1d0
	ctx.lr = 0x8216F438;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mulli r5,r24,24
	ctx.r5.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(24));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216F448;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216F450;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r21)
	REX_STORE_U32(r21.u32 + 0, r27.u32);
	// stw r30,8(r21)
	REX_STORE_U32(r21.u32 + 8, r30.u32);
loc_8216F458:
	// stw r31,4(r21)
	REX_STORE_U32(r21.u32 + 4, r31.u32);
	// add r31,r20,r22
	r31.u64 = r20.u64 + r22.u64;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216f4bc
	if (!ctx.cr6.gt) goto loc_8216F4BC;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8216f484
	if (ctx.cr6.gt) goto loc_8216F484;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8216F484:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216f4bc
	if (!ctx.cr6.gt) goto loc_8216F4BC;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8269d1d0
	ctx.lr = 0x8216F498;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r4,0(r17)
	ctx.r4.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a1e70
	ctx.lr = 0x8216F4AC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216F4B4;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r17)
	REX_STORE_U32(r17.u32 + 0, r27.u32);
	// stw r30,8(r17)
	REX_STORE_U32(r17.u32 + 8, r30.u32);
loc_8216F4BC:
	// stw r31,4(r17)
	REX_STORE_U32(r17.u32 + 4, r31.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8216f4dc
	if (ctx.cr6.gt) goto loc_8216F4DC;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8216F4DC;
	sub_821231D0(ctx, base);
loc_8216F4DC:
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8216f4f4
	if (ctx.cr6.lt) goto loc_8216F4F4;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216f504
	if (ctx.cr6.lt) goto loc_8216F504;
loc_8216F4F4:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8216F504;
	sub_821231D0(ctx, base);
loc_8216F504:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mulli r23,r24,24
	r23.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(24));
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8216f594
	if (!ctx.cr6.gt) goto loc_8216F594;
	// addi r26,r29,32
	r26.s64 = r29.s64 + 32;
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r31,r11,-16
	r31.s64 = ctx.r11.s64 + -16;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
loc_8216F528:
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lfs f12,8(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lfs f11,4(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmadds f13,f12,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfsu f0,8(r30)
	ea = 8 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r30.u32 = ea;
	// lfs f11,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f28,248(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8216F560;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f12,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfsu f13,24(r31)
	ea = 24 + r31.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// bne 0x8216f528
	if (!ctx.cr0.eq) goto loc_8216F528;
loc_8216F594:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,12
	ctx.r3.s64 = r25.s64 + 12;
	// bl 0x8216fab8
	ctx.lr = 0x8216F5A0;
	sub_8216FAB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8216fab8
	ctx.lr = 0x8216F5B0;
	sub_8216FAB8(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8216f5dc
	if (!ctx.cr6.gt) goto loc_8216F5DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// subf r10,r31,r3
	ctx.r10.u64 = ctx.r3.u64 - r31.u64;
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
loc_8216F5C8:
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sthx r9,r10,r31
	REX_STORE_U16(ctx.r10.u32 + r31.u32, ctx.r9.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bdnz 0x8216f5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F5C8;
loc_8216F5DC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8216f5f0
	if (ctx.cr6.lt) goto loc_8216F5F0;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216f600
	if (ctx.cr6.lt) goto loc_8216F600;
loc_8216F5F0:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8216F600;
	sub_821231D0(ctx, base);
loc_8216F600:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r23,r11
	r31.u64 = r23.u64 + ctx.r11.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfsx f0,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r26,r31,8
	r26.s64 = r31.s64 + 8;
	// lfs f0,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,384(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x8216F688;
	sub_8216CEA8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8216cea8
	ctx.lr = 0x8216F698;
	sub_8216CEA8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216cea8
	ctx.lr = 0x8216F6A8;
	sub_8216CEA8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216cea8
	ctx.lr = 0x8216F6B8;
	sub_8216CEA8(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stfs f30,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stfs f30,200(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// std r6,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r25,r1,288
	r25.s64 = ctx.r1.s64 + 288;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r18,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, r18.u32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r28,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r28.u32);
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// stw r18,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, r18.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r18,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, r18.u32);
	// stw r18,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, r18.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r8,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r18,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, r18.u32);
	// lfs f0,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// ld r24,0(r30)
	r24.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r30,8(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 8);
	// ld r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// lwz r3,6168(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6168);
	// std r24,0(r25)
	REX_STORE_U64(r25.u32 + 0, r24.u64);
	// std r30,8(r25)
	REX_STORE_U64(r25.u32 + 8, r30.u64);
	// lfs f0,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r30,0(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r30,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r30.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f0,8(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r7,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r7.u32);
	// stw r31,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// stw r5,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r5.u32);
	// bl 0x821495c8
	ctx.lr = 0x8216F7C4;
	sub_821495C8(ctx, base);
	// lbz r11,125(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 125);
	// lbz r10,126(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 126);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8216f920
	if (ctx.cr0.eq) goto loc_8216F920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f864
	if (ctx.cr6.eq) goto loc_8216F864;
	// lwz r11,696(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 696);
	// rlwinm r30,r28,1,0,30
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,692
	ctx.r3.s64 = r29.s64 + 692;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8216fb90
	ctx.lr = 0x8216F7F4;
	sub_8216FB90(ctx, base);
	// lwz r10,696(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 696);
	// lwz r11,692(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 692);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8216f864
	if (!ctx.cr6.gt) goto loc_8216F864;
	// addi r10,r27,-20
	ctx.r10.s64 = r27.s64 + -20;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_8216F818:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,24(r10)
	ea = 24 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8216f818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F818;
loc_8216F864:
	// lbz r11,126(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216f920
	if (ctx.cr0.eq) goto loc_8216F920;
	// lwz r11,696(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 696);
	// rlwinm r30,r28,1,0,30
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,692
	ctx.r3.s64 = r29.s64 + 692;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8216fb90
	ctx.lr = 0x8216F884;
	sub_8216FB90(ctx, base);
	// lwz r10,696(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 696);
	// lwz r11,692(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 692);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8216f920
	if (!ctx.cr6.gt) goto loc_8216F920;
	// addi r31,r26,-24
	r31.s64 = r26.s64 + -24;
loc_8216F8A4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,6168(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 6168);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x821497c0
	ctx.lr = 0x8216F8CC;
	sub_821497C0(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f0,16(r30)
	ea = 16 + r30.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// lfs f0,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,24(r31)
	ea = 24 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r31.u32 = ea;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x8216f8a4
	if (!ctx.cr0.eq) goto loc_8216F8A4;
loc_8216F920:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r19,r19,20
	r19.s64 = r19.s64 + 20;
	// lwz r10,116(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8216f3dc
	if (ctx.cr6.lt) goto loc_8216F3DC;
loc_8216F93C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf0
	ctx.lr = 0x8216F948;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821A2860) {
	REX_FUNC_PROLOGUE();
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2A30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a2a4c
	if (!ctx.cr6.eq) goto loc_821A2A4C;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821A2A4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A39D8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3A04;
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

DEFINE_REX_FUNC(sub_821A4700) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3e48
	sub_821A3E48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A48F8) {
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
	ctx.lr = 0x821A4900;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,1576
	r27.s64 = ctx.r11.s64 + 1576;
	// lwz r5,1576(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1576);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821a4a24
	if (ctx.cr6.eq) goto loc_821A4A24;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
loc_821A4934:
	// lwz r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x821a4a0c
	if (!ctx.cr6.eq) goto loc_821A4A0C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821a49fc
	if (ctx.cr6.eq) goto loc_821A49FC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_821A4960:
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// lhz r31,-4(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// add r26,r9,r11
	r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r25,4(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r24,8(r26)
	r24.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r26,12(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 12);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r25,4(r29)
	REX_STORE_U32(r29.u32 + 4, r25.u32);
	// stw r24,8(r29)
	REX_STORE_U32(r29.u32 + 8, r24.u32);
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a49e0
	if (!ctx.cr6.eq) goto loc_821A49E0;
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r31,-2(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a49e0
	if (!ctx.cr6.eq) goto loc_821A49E0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x821a49e0
	if (!ctx.cr6.eq) goto loc_821A49E0;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x821a49e0
	if (!ctx.cr6.eq) goto loc_821A49E0;
	// lbz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r31,8(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821a49e4
	if (ctx.cr6.eq) goto loc_821A49E4;
loc_821A49E0:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821A49E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a4a58
	if (ctx.cr0.eq) goto loc_821A4A58;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821a4960
	if (!ctx.cr6.eq) goto loc_821A4960;
loc_821A49FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821A4A00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x821a4a10
	if (!ctx.cr0.eq) goto loc_821A4A10;
loc_821A4A0C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821A4A10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a4a60
	if (!ctx.cr0.eq) goto loc_821A4A60;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821a4934
	if (!ctx.cr6.eq) goto loc_821A4934;
loc_821A4A24:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x821A4A2C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a4a74
	if (ctx.cr0.eq) goto loc_821A4A74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26124
	ctx.r11.s64 = ctx.r11.s64 + -26124;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r28,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821a4a78
	goto loc_821A4A78;
loc_821A4A58:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x821a4a00
	goto loc_821A4A00;
loc_821A4A60:
	// lwz r3,24(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x822c5e78
	ctx.lr = 0x821A4A68;
	sub_822C5E78(ctx, base);
	// lwz r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
loc_821A4A6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_821A4A74:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_821A4A78:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821736f8
	ctx.lr = 0x821A4A84;
	sub_821736F8(ctx, base);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm. r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821a4ae8
	if (!ctx.cr0.gt) goto loc_821A4AE8;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r7,r8,-11624
	ctx.r7.s64 = ctx.r8.s64 + -11624;
loc_821A4AAC:
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821a4aac
	if (ctx.cr6.lt) goto loc_821A4AAC;
loc_821A4AE8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a4b88
	ctx.lr = 0x821A4AF0;
	sub_821A4B88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c99b0
	ctx.lr = 0x821A4AF8;
	sub_822C99B0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x821A4B04;
	sub_8269D6A0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821A4B14;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a4b70
	if (ctx.cr0.eq) goto loc_821A4B70;
	// addic. r10,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r10.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// beq 0x821a4b30
	if (ctx.cr0.eq) goto loc_821A4B30;
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_821A4B30:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x821a4b54
	if (!ctx.cr6.lt) goto loc_821A4B54;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821A4B54;
	sub_822F6020(ctx, base);
loc_821A4B54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x821a4a6c
	goto loc_821A4A6C;
loc_821A4B70:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821A4B88;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821B6B70) {
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
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b6bfc
	if (ctx.cr6.eq) goto loc_821B6BFC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B6BA0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821b6ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6BA0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// ld r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfs f10,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f9,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
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
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8218cd80
	ctx.lr = 0x821B6BFC;
	sub_8218CD80(ctx, base);
loc_821B6BFC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// ld r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r4,16(r6)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ld r10,24(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r4,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r4.u64);
	// std r5,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// std r10,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
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

DEFINE_REX_FUNC(sub_821C0728) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C0730;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,116
	r29.s64 = ctx.r3.s64 + 116;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82125d00
	ctx.lr = 0x821C0748;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c07d0
	if (ctx.cr0.eq) goto loc_821C07D0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_821C0754:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c0754
	if (!ctx.cr6.eq) goto loc_821C0754;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x821C077C;
	sub_82120C08(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// bl 0x82120600
	ctx.lr = 0x821C078C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821C0798;
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
	ctx.lr = 0x821C07C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821C07D0;
	sub_82120AC0(ctx, base);
loc_821C07D0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C5398) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// b 0x821e3148
	sub_821E3148(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C55E0) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821C57F8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x821C5800;
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x821C5820;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-14036
	ctx.r11.s64 = ctx.r11.s64 + -14036;
	// addi r10,r10,25636
	ctx.r10.s64 = ctx.r10.s64 + 25636;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// addi r9,r9,-18396
	ctx.r9.s64 = ctx.r9.s64 + -18396;
	// addi r10,r8,-16528
	ctx.r10.s64 = ctx.r8.s64 + -16528;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r7,-16488
	ctx.r9.s64 = ctx.r7.s64 + -16488;
	// addi r11,r11,-16480
	ctx.r11.s64 = ctx.r11.s64 + -16480;
	// addi r10,r6,-16476
	ctx.r10.s64 = ctx.r6.s64 + -16476;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r18,1
	r18.s64 = 1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// addi r26,r31,156
	r26.s64 = r31.s64 + 156;
	// stb r18,152(r31)
	REX_STORE_U8(r31.u32 + 152, r18.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r20,r31,120
	r20.s64 = r31.s64 + 120;
	// addi r28,r31,152
	r28.s64 = r31.s64 + 152;
	// bl 0x82120ac0
	ctx.lr = 0x821C5898;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r19,r31,208
	r19.s64 = r31.s64 + 208;
	// stb r11,187(r31)
	REX_STORE_U8(r31.u32 + 187, ctx.r11.u8);
	// addi r29,r31,184
	r29.s64 = r31.s64 + 184;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stb r11,186(r31)
	REX_STORE_U8(r31.u32 + 186, ctx.r11.u8);
	// lfs f0,172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,185(r31)
	REX_STORE_U8(r31.u32 + 185, ctx.r11.u8);
	// stb r11,184(r31)
	REX_STORE_U8(r31.u32 + 184, ctx.r11.u8);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stw r25,188(r31)
	REX_STORE_U32(r31.u32 + 188, r25.u32);
	// stb r25,200(r31)
	REX_STORE_U8(r31.u32 + 200, r25.u8);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r24,r31,188
	r24.s64 = r31.s64 + 188;
	// addi r23,r31,192
	r23.s64 = r31.s64 + 192;
	// addi r22,r31,196
	r22.s64 = r31.s64 + 196;
	// addi r21,r31,200
	r21.s64 = r31.s64 + 200;
	// bl 0x821e7830
	ctx.lr = 0x821C58F0;
	sub_821E7830(ctx, base);
	// stfs f31,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// stw r25,384(r31)
	REX_STORE_U32(r31.u32 + 384, r25.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stb r25,388(r31)
	REX_STORE_U8(r31.u32 + 388, r25.u8);
	// bl 0x822f6280
	ctx.lr = 0x821C5904;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x821c5934
	if (ctx.cr0.eq) goto loc_821C5934;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// bl 0x82120600
	ctx.lr = 0x821C591C;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r18
	r30.u64 = r18.u64;
	// bl 0x82191600
	ctx.lr = 0x821C5930;
	sub_82191600(ctx, base);
	// b 0x821c5938
	goto loc_821C5938;
loc_821C5934:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C5938:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C594C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c5968
	if (ctx.cr0.eq) goto loc_821C5968;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821C5968;
	sub_82120AC0(ctx, base);
loc_821C5968:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,26608
	ctx.r11.s64 = ctx.r11.s64 + 26608;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C5980;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821c59c8
	if (ctx.cr0.eq) goto loc_821C59C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-17212
	ctx.r4.s64 = ctx.r11.s64 + -17212;
	// bl 0x82120600
	ctx.lr = 0x821C5998;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// lwz r4,-15280(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15280);
	// bl 0x82120600
	ctx.lr = 0x821C59AC;
	sub_82120600(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x821d58c8
	ctx.lr = 0x821C59C4;
	sub_821D58C8(ctx, base);
	// b 0x821c59cc
	goto loc_821C59CC;
loc_821C59C8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C59CC:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C59DC;
	sub_82145710(ctx, base);
	// lwz r28,128(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,36(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821C59E8;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C59F0;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-13900
	r26.s64 = ctx.r11.s64 + -13900;
	// beq 0x821c5a18
	if (ctx.cr0.eq) goto loc_821C5A18;
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c5a1c
	goto loc_821C5A1C;
loc_821C5A18:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5A1C:
	// rlwinm. r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// stb r25,33(r28)
	REX_STORE_U8(r28.u32 + 33, r25.u8);
	// beq 0x821c5a40
	if (ctx.cr0.eq) goto loc_821C5A40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821C5A40;
	sub_82120AC0(ctx, base);
loc_821C5A40:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c5a5c
	if (ctx.cr0.eq) goto loc_821C5A5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821C5A5C;
	sub_82120AC0(ctx, base);
loc_821C5A5C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821C5A64;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821c5a94
	if (ctx.cr0.eq) goto loc_821C5A94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
	// bl 0x82120600
	ctx.lr = 0x821C5A7C;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x8219d708
	ctx.lr = 0x821C5A90;
	sub_8219D708(ctx, base);
	// b 0x821c5a98
	goto loc_821C5A98;
loc_821C5A94:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C5A98:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C5AA8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c5ac4
	if (ctx.cr0.eq) goto loc_821C5AC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821C5AC4;
	sub_82120AC0(ctx, base);
loc_821C5AC4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r11,r11,27048
	ctx.r11.s64 = ctx.r11.s64 + 27048;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C5ADC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c5b28
	if (ctx.cr0.eq) goto loc_821C5B28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-17188
	ctx.r4.s64 = ctx.r11.s64 + -17188;
	// bl 0x82120600
	ctx.lr = 0x821C5AF4;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82197628
	ctx.lr = 0x821C5B08;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-11992
	ctx.r10.s64 = ctx.r10.s64 + -11992;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r10,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r10.u32);
	// b 0x821c5b2c
	goto loc_821C5B2C;
loc_821C5B28:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5B2C:
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C5B3C;
	sub_82145710(ctx, base);
	// lwz r29,128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821C5B48;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C5B50;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5b70
	if (ctx.cr0.eq) goto loc_821C5B70;
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c5b74
	goto loc_821C5B74;
loc_821C5B70:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5B74:
	// rlwinm. r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r25,33(r29)
	REX_STORE_U8(r29.u32 + 33, r25.u8);
	// beq 0x821c5b98
	if (ctx.cr0.eq) goto loc_821C5B98;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821C5B98;
	sub_82120AC0(ctx, base);
loc_821C5B98:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,27048
	ctx.r11.s64 = ctx.r11.s64 + 27048;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C5BB0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c5be4
	if (ctx.cr0.eq) goto loc_821C5BE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x82120600
	ctx.lr = 0x821C5BC8;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821C5BDC;
	sub_82196BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821c5be8
	goto loc_821C5BE8;
loc_821C5BE4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5BE8:
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C5BFC;
	sub_82145710(ctx, base);
	// lwz r29,128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821C5C08;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C5C10;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5c30
	if (ctx.cr0.eq) goto loc_821C5C30;
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c5c34
	goto loc_821C5C34;
loc_821C5C30:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5C34:
	// rlwinm. r10,r30,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r25,33(r29)
	REX_STORE_U8(r29.u32 + 33, r25.u8);
	// beq 0x821c5c58
	if (ctx.cr0.eq) goto loc_821C5C58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821C5C58;
	sub_82120AC0(ctx, base);
loc_821C5C58:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r25,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r25.u8);
	// bl 0x822f6280
	ctx.lr = 0x821C5C68;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c5c98
	if (ctx.cr0.eq) goto loc_821C5C98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-17160
	ctx.r4.s64 = ctx.r11.s64 + -17160;
	// bl 0x82120600
	ctx.lr = 0x821C5C80;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x821C5C94;
	sub_82196BA8(ctx, base);
	// b 0x821c5c9c
	goto loc_821C5C9C;
loc_821C5C98:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C5C9C:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C5CAC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c5cc8
	if (ctx.cr0.eq) goto loc_821C5CC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821C5CC8;
	sub_82120AC0(ctx, base);
loc_821C5CC8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821C5CD0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c5d00
	if (ctx.cr0.eq) goto loc_821C5D00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-29672
	ctx.r4.s64 = ctx.r11.s64 + -29672;
	// bl 0x82120600
	ctx.lr = 0x821C5CE8;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82191600
	ctx.lr = 0x821C5CFC;
	sub_82191600(ctx, base);
	// b 0x821c5d04
	goto loc_821C5D04;
loc_821C5D00:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C5D04:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821C5D14;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c5d2c
	if (ctx.cr0.eq) goto loc_821C5D2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82120ac0
	ctx.lr = 0x821C5D2C;
	sub_82120AC0(ctx, base);
loc_821C5D2C:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821C5D34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5d4c
	if (ctx.cr0.eq) goto loc_821C5D4C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821C5D44;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5d50
	goto loc_821C5D50;
loc_821C5D4C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5D50:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5D60;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821C5D68;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5d80
	if (ctx.cr0.eq) goto loc_821C5D80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x821C5D78;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5d84
	goto loc_821C5D84;
loc_821C5D80:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5D84:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5D90;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C5D98;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5db4
	if (ctx.cr0.eq) goto loc_821C5DB4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821912a0
	ctx.lr = 0x821C5DAC;
	sub_821912A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5db8
	goto loc_821C5DB8;
loc_821C5DB4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5DB8:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5DC4;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C5DCC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5df8
	if (ctx.cr0.eq) goto loc_821C5DF8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,25976
	ctx.r11.s64 = ctx.r11.s64 + 25976;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// ld r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82233df8
	ctx.lr = 0x821C5DF0;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5dfc
	goto loc_821C5DFC;
loc_821C5DF8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5DFC:
	// stw r4,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5E08;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821C5E10;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5e30
	if (ctx.cr0.eq) goto loc_821C5E30;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821C5E28;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5e34
	goto loc_821C5E34;
loc_821C5E30:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5E34:
	// stw r4,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5E40;
	sub_821D3988(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x821C5E48;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5e84
	if (ctx.cr0.eq) goto loc_821C5E84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r19,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r19.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// stw r18,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r18.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r25,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r25.u32);
	// stw r25,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r25.u32);
	// stw r25,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r25.u32);
	// stb r18,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r18.u8);
	// b 0x821c5e88
	goto loc_821C5E88;
loc_821C5E84:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5E88:
	// stw r4,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5E94;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821C5E9C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5eb8
	if (ctx.cr0.eq) goto loc_821C5EB8;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821C5EB0;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5ebc
	goto loc_821C5EBC;
loc_821C5EB8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C5EBC:
	// stw r4,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C5EC8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C5ED0;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-19528
	r28.s64 = ctx.r11.s64 + -19528;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821c5f50
	if (ctx.cr0.eq) goto loc_821C5F50;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// addi r11,r11,22328
	ctx.r11.s64 = ctx.r11.s64 + 22328;
	// addi r4,r10,-17920
	ctx.r4.s64 = ctx.r10.s64 + -17920;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C5F14;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C5F20;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5f40
	if (ctx.cr0.eq) goto loc_821C5F40;
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c5f44
	goto loc_821C5F44;
loc_821C5F40:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5F44:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821c5f54
	goto loc_821C5F54;
loc_821C5F50:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C5F54:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C5F6C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C5F74;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c5fe4
	if (ctx.cr0.eq) goto loc_821C5FE4;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// addi r11,r11,22392
	ctx.r11.s64 = ctx.r11.s64 + 22392;
	// addi r4,r10,-17912
	ctx.r4.s64 = ctx.r10.s64 + -17912;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C5FA8;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C5FB4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c5fd4
	if (ctx.cr0.eq) goto loc_821C5FD4;
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c5fd8
	goto loc_821C5FD8;
loc_821C5FD4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C5FD8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821c5fe8
	goto loc_821C5FE8;
loc_821C5FE4:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C5FE8:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C6000;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C6008;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c6090
	if (ctx.cr0.eq) goto loc_821C6090;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,27312
	ctx.r11.s64 = ctx.r11.s64 + 27312;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216b9a8
	ctx.lr = 0x821C603C;
	sub_8216B9A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,19784
	ctx.r4.s64 = ctx.r11.s64 + 19784;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C6054;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C6060;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c6080
	if (ctx.cr0.eq) goto loc_821C6080;
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c6084
	goto loc_821C6084;
loc_821C6080:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C6084:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821c6094
	goto loc_821C6094;
loc_821C6090:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C6094:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C60AC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821C60B4;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821c60ec
	if (ctx.cr0.eq) goto loc_821C60EC;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-17144
	ctx.r4.s64 = ctx.r11.s64 + -17144;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C60E0;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821c60f0
	goto loc_821C60F0;
loc_821C60EC:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C60F0:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C6108;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821C6110;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c6140
	if (ctx.cr0.eq) goto loc_821C6140;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-17132
	ctx.r4.s64 = ctx.r11.s64 + -17132;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C6134;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821c6144
	goto loc_821C6144;
loc_821C6140:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C6144:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C615C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821C6164;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c6194
	if (ctx.cr0.eq) goto loc_821C6194;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-17120
	ctx.r4.s64 = ctx.r11.s64 + -17120;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C6188;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x821c6198
	goto loc_821C6198;
loc_821C6194:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C6198:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C61B0;
	sub_82264568(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// addi r11,r11,26088
	ctx.r11.s64 = ctx.r11.s64 + 26088;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r30,132(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x822f6280
	ctx.lr = 0x821C61CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c61f8
	if (ctx.cr0.eq) goto loc_821C61F8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x821c61fc
	goto loc_821C61FC;
loc_821C61F8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C61FC:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,132(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,26368
	ctx.r11.s64 = ctx.r11.s64 + 26368;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C621C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c6248
	if (ctx.cr0.eq) goto loc_821C6248;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x821c624c
	goto loc_821C624C;
loc_821C6248:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C624C:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// addi r11,r11,26856
	ctx.r11.s64 = ctx.r11.s64 + 26856;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r30,124(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x822f6280
	ctx.lr = 0x821C626C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c6290
	if (ctx.cr0.eq) goto loc_821C6290;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821c6294
	goto loc_821C6294;
loc_821C6290:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C6294:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,128(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r11,r11,27040
	ctx.r11.s64 = ctx.r11.s64 + 27040;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C62B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c62d8
	if (ctx.cr0.eq) goto loc_821C62D8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821c62dc
	goto loc_821C62DC;
loc_821C62D8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C62DC:
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82212DC8) {
	REX_FUNC_PROLOGUE();
	// b 0x822e73b8
	sub_822E73B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82212E38) {
	REX_FUNC_PROLOGUE();
	// b 0x822e7428
	sub_822E7428(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82213410) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// bne cr6,0x82213430
	if (!ctx.cr6.eq) goto loc_82213430;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82213430:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x8221345C;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82213460;
	sub_8215F0F0(ctx, base);
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82213a88
	ctx.lr = 0x8221347C;
	sub_82213A88(ctx, base);
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

DEFINE_REX_FUNC(sub_822195D8) {
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
	// li r3,840
	ctx.r3.s64 = 840;
	// bl 0x822f6280
	ctx.lr = 0x822195EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822195fc
	if (ctx.cr0.eq) goto loc_822195FC;
	// bl 0x82219610
	ctx.lr = 0x822195F8;
	sub_82219610(ctx, base);
	// b 0x82219600
	goto loc_82219600;
loc_822195FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82219600:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221B8E0) {
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
	// addi r4,r3,800
	ctx.r4.s64 = ctx.r3.s64 + 800;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221b97c
	if (!ctx.cr0.eq) goto loc_8221B97C;
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
	ctx.lr = 0x8221B948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221b97c
	if (!ctx.cr6.eq) goto loc_8221B97C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,832(r31)
	REX_STORE_U8(r31.u32 + 832, ctx.r11.u8);
	// b 0x8221b98c
	goto loc_8221B98C;
loc_8221B97C:
	// lbz r11,833(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 833);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221b98c
	if (ctx.cr0.eq) goto loc_8221B98C;
	// bl 0x8221c0e8
	ctx.lr = 0x8221B98C;
	sub_8221C0E8(ctx, base);
loc_8221B98C:
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

DEFINE_REX_FUNC(sub_82223408) {
	REX_FUNC_PROLOGUE();
	// lwz r11,972(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 972);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,976(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 976);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82223424
	if (!ctx.cr6.lt) goto loc_82223424;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,976(r4)
	REX_STORE_U32(ctx.r4.u32 + 976, ctx.r11.u32);
loc_82223424:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82225068) {
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
	ctx.lr = 0x82225070;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x8215f338
	ctx.lr = 0x82225098;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222509C;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-17148
	ctx.r4.s64 = ctx.r11.s64 + -17148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x822250B0;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r20,r11,-17164
	r20.s64 = ctx.r11.s64 + -17164;
loc_822250C0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822250e4
	if (!ctx.cr6.eq) goto loc_822250E4;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x822250e8
	goto loc_822250E8;
loc_822250E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822250E8:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82225178
	if (!ctx.cr6.lt) goto loc_82225178;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822250FC;
	sub_8215F1B0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215f338
	ctx.lr = 0x82225104;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225108;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82225154
	if (!ctx.cr0.eq) goto loc_82225154;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222514C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222515c
	if (ctx.cr0.eq) goto loc_8222515C;
loc_82225154:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x822250c0
	goto loc_822250C0;
loc_8222515C:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82120b20
	ctx.lr = 0x82225170;
	sub_82120B20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82225590
	goto loc_82225590;
loc_82225178:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8222518C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82225198;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222519C;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,16568
	r29.s64 = ctx.r11.s64 + 16568;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x822251AC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222558c
	if (!ctx.cr0.eq) goto loc_8222558C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82125d00
	ctx.lr = 0x822251C4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222558c
	if (!ctx.cr0.eq) goto loc_8222558C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r22,0
	r22.s64 = 0;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r24,r11,32420
	r24.s64 = ctx.r11.s64 + 32420;
	// addi r23,r10,32428
	r23.s64 = ctx.r10.s64 + 32428;
	// addi r25,r9,32436
	r25.s64 = ctx.r9.s64 + 32436;
loc_822251F0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82225214
	if (!ctx.cr6.eq) goto loc_82225214;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82225218
	goto loc_82225218;
loc_82225214:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225218:
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222558c
	if (!ctx.cr6.lt) goto loc_8222558C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8222522C;
	sub_8215F1B0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215f338
	ctx.lr = 0x82225234;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225238;
	sub_8215FA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82120600
	ctx.lr = 0x82225248;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// bl 0x82120600
	ctx.lr = 0x82225258;
	sub_82120600(ctx, base);
	// lwz r3,6272(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6272);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222528C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822252dc
	if (!ctx.cr0.eq) goto loc_822252DC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120600
	ctx.lr = 0x822252A0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82120600
	ctx.lr = 0x822252B0;
	sub_82120600(ctx, base);
	// lwz r3,6276(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6276);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822252D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222541c
	if (!ctx.cr0.eq) goto loc_8222541C;
loc_822252DC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120600
	ctx.lr = 0x822252E8;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82120600
	ctx.lr = 0x822252F8;
	sub_82120600(ctx, base);
	// lwz r3,6272(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6272);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222532C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222537c
	if (!ctx.cr0.eq) goto loc_8222537C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120600
	ctx.lr = 0x82225340;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// bl 0x82120600
	ctx.lr = 0x82225350;
	sub_82120600(ctx, base);
	// lwz r3,6276(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6276);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222541c
	if (!ctx.cr0.eq) goto loc_8222541C;
loc_8222537C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120600
	ctx.lr = 0x82225388;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
	// bl 0x82120600
	ctx.lr = 0x82225398;
	sub_82120600(ctx, base);
	// lwz r3,6272(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6272);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822253CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82225424
	if (!ctx.cr0.eq) goto loc_82225424;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120600
	ctx.lr = 0x822253E0;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ori r31,r31,1024
	r31.u64 = r31.u64 | 1024;
	// bl 0x82120600
	ctx.lr = 0x822253F0;
	sub_82120600(ctx, base);
	// lwz r3,6276(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6276);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// ori r31,r31,2048
	r31.u64 = r31.u64 | 2048;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225424
	if (ctx.cr0.eq) goto loc_82225424;
loc_8222541C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82225428
	goto loc_82225428;
loc_82225424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225428:
	// rlwinm. r10,r31,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82225448
	if (ctx.cr0.eq) goto loc_82225448;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r31,r31,0,21,19
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x82225448;
	sub_82120AC0(ctx, base);
loc_82225448:
	// rlwinm. r11,r31,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225464
	if (ctx.cr0.eq) goto loc_82225464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,22,20
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x82225464;
	sub_82120AC0(ctx, base);
loc_82225464:
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225480
	if (ctx.cr0.eq) goto loc_82225480;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r31,r31,0,23,21
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x82225480;
	sub_82120AC0(ctx, base);
loc_82225480:
	// rlwinm. r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222549c
	if (ctx.cr0.eq) goto loc_8222549C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,24,22
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x8222549C;
	sub_82120AC0(ctx, base);
loc_8222549C:
	// rlwinm. r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822254b8
	if (ctx.cr0.eq) goto loc_822254B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,25,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x822254B8;
	sub_82120AC0(ctx, base);
loc_822254B8:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822254d4
	if (ctx.cr0.eq) goto loc_822254D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x822254D4;
	sub_82120AC0(ctx, base);
loc_822254D4:
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822254f0
	if (ctx.cr0.eq) goto loc_822254F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x822254F0;
	sub_82120AC0(ctx, base);
loc_822254F0:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222550c
	if (ctx.cr0.eq) goto loc_8222550C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8222550C;
	sub_82120AC0(ctx, base);
loc_8222550C:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225528
	if (ctx.cr0.eq) goto loc_82225528;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82225528;
	sub_82120AC0(ctx, base);
loc_82225528:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225544
	if (ctx.cr0.eq) goto loc_82225544;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82225544;
	sub_82120AC0(ctx, base);
loc_82225544:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225560
	if (ctx.cr0.eq) goto loc_82225560;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82225560;
	sub_82120AC0(ctx, base);
loc_82225560:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222557c
	if (ctx.cr0.eq) goto loc_8222557C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8222557C;
	sub_82120AC0(ctx, base);
loc_8222557C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222515c
	if (!ctx.cr0.eq) goto loc_8222515C;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// b 0x822251f0
	goto loc_822251F0;
loc_8222558C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225590:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82248C10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// ld r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 64);
	// std r8,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 72);
	// std r10,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r10.u64);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// ld r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r10.u64);
	// ld r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// std r11,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// stb r9,81(r3)
	REX_STORE_U8(ctx.r3.u32 + 81, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8224B560;
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
	// beq cr6,0x8224b580
	if (ctx.cr6.eq) goto loc_8224B580;
	// bl 0x821357c8
	ctx.lr = 0x8224B57C;
	sub_821357C8(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8224B580:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b594
	if (ctx.cr6.eq) goto loc_8224B594;
	// bl 0x821357c8
	ctx.lr = 0x8224B590;
	sub_821357C8(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8224B594:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b5a8
	if (ctx.cr6.eq) goto loc_8224B5A8;
	// bl 0x821357c8
	ctx.lr = 0x8224B5A4;
	sub_821357C8(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8224B5A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b5bc
	if (ctx.cr6.eq) goto loc_8224B5BC;
	// bl 0x821357c8
	ctx.lr = 0x8224B5B8;
	sub_821357C8(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_8224B5BC:
	// addi r30,r31,168
	r30.s64 = r31.s64 + 168;
	// li r29,2
	r29.s64 = 2;
loc_8224B5C4:
	// lbzu r11,-8(r30)
	ea = -8 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821ea168
	ctx.lr = 0x8224B5E0;
	sub_821EA168(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8224b5c4
	if (!ctx.cr0.lt) goto loc_8224B5C4;
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// li r29,2
	r29.s64 = 2;
loc_8224B5F0:
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8224B604;
	sub_82120AC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8224b5f0
	if (!ctx.cr0.lt) goto loc_8224B5F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B614;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82250E48) {
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
	ctx.lr = 0x82250E50;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82151d50
	ctx.lr = 0x82250E64;
	sub_82151D50(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82250E80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 112);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82250f48
	if (ctx.cr0.eq) goto loc_82250F48;
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r28,r31,52
	r28.s64 = r31.s64 + 52;
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,72
	r27.s64 = r31.s64 + 72;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82250eb8
	if (!ctx.cr6.eq) goto loc_82250EB8;
	// lfs f0,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82250f9c
	if (ctx.cr6.eq) goto loc_82250F9C;
loc_82250EB8:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f2,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// lbz r24,64(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 64);
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// lbz r10,65(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 65);
	// li r23,0
	r23.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r11,468(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 468);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r30,80
	ctx.r5.s64 = r30.s64 + 80;
	// stb r23,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r23.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r24,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r24.u8);
	// addi r8,r11,336
	ctx.r8.s64 = ctx.r11.s64 + 336;
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// ld r8,336(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 336);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// ld r31,320(r11)
	r31.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// ld r9,328(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 328);
	// std r8,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r8.u64);
	// std r31,0(r25)
	REX_STORE_U64(r25.u32 + 0, r31.u64);
	// std r11,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r11.u64);
	// std r9,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r9.u64);
	// bl 0x8227def8
	ctx.lr = 0x82250F28;
	sub_8227DEF8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// addi r9,r27,-4
	ctx.r9.s64 = r27.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82250F38:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82250f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82250F38;
	// b 0x82250f9c
	goto loc_82250F9C;
loc_82250F48:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r30,80
	ctx.r5.s64 = r30.s64 + 80;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r30,r11,336
	r30.s64 = ctx.r11.s64 + 336;
	// addi r30,r11,320
	r30.s64 = ctx.r11.s64 + 320;
	// ld r30,336(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 336);
	// ld r29,320(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// ld r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 328);
	// std r30,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r30.u64);
	// std r29,0(r31)
	REX_STORE_U64(r31.u32 + 0, r29.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// bl 0x8227db88
	ctx.lr = 0x82250F9C;
	sub_8227DB88(ctx, base);
loc_82250F9C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82257C90) {
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
	// bl 0x822895d8
	ctx.lr = 0x82257CA4;
	sub_822895D8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x82257CB8;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x8215f670
	ctx.lr = 0x82257CC4;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82257CCC;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stb r10,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_8225BCC8) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8225bd18
	if (ctx.cr6.eq) goto loc_8225BD18;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8225bcf4
	if (ctx.cr6.eq) goto loc_8225BCF4;
	// bl 0x8225f840
	ctx.lr = 0x8225BCF0;
	sub_8225F840(ctx, base);
	// b 0x8225be18
	goto loc_8225BE18;
loc_8225BCF4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BD0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b238
	ctx.lr = 0x8225BD14;
	sub_8225B238(ctx, base);
	// b 0x8225be18
	goto loc_8225BE18;
loc_8225BD18:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8225bdec
	if (ctx.cr6.eq) goto loc_8225BDEC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8225bda8
	if (ctx.cr6.eq) goto loc_8225BDA8;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8225bd9c
	if (ctx.cr6.eq) goto loc_8225BD9C;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// beq cr6,0x8225bd90
	if (ctx.cr6.eq) goto loc_8225BD90;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x8225bdec
	if (ctx.cr6.eq) goto loc_8225BDEC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BD58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-26252
	ctx.r5.s64 = ctx.r10.s64 + -26252;
	// bne cr6,0x8225bd84
	if (!ctx.cr6.eq) goto loc_8225BD84;
loc_8225BD78:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8484
	ctx.r6.s64 = ctx.r11.s64 + -8484;
	// b 0x8225be0c
	goto loc_8225BE0C;
loc_8225BD84:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8500
	ctx.r6.s64 = ctx.r11.s64 + -8500;
	// b 0x8225be0c
	goto loc_8225BE0C;
loc_8225BD90:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8436
	ctx.r6.s64 = ctx.r11.s64 + -8436;
	// b 0x8225bdf4
	goto loc_8225BDF4;
loc_8225BD9C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8452
	ctx.r6.s64 = ctx.r11.s64 + -8452;
	// b 0x8225bdf4
	goto loc_8225BDF4;
loc_8225BDA8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BDC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-26252
	ctx.r5.s64 = ctx.r10.s64 + -26252;
	// beq cr6,0x8225bd78
	if (ctx.cr6.eq) goto loc_8225BD78;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8468
	ctx.r6.s64 = ctx.r11.s64 + -8468;
	// b 0x8225be0c
	goto loc_8225BE0C;
loc_8225BDEC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8420
	ctx.r6.s64 = ctx.r11.s64 + -8420;
loc_8225BDF4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-26252
	ctx.r5.s64 = ctx.r10.s64 + -26252;
loc_8225BE0C:
	// bl 0x82288100
	ctx.lr = 0x8225BE10;
	sub_82288100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1596(r31)
	REX_STORE_U32(r31.u32 + 1596, ctx.r11.u32);
loc_8225BE18:
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

DEFINE_REX_FUNC(sub_82265D08) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82265db8
	if (ctx.cr6.eq) goto loc_82265DB8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82265d48
	if (ctx.cr6.lt) goto loc_82265D48;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82265D48:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82265D4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82265d4c
	if (!ctx.cr6.eq) goto loc_82265D4C;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82265D78;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20712
	ctx.r4.s64 = ctx.r11.s64 + -20712;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82178cb0
	ctx.lr = 0x82265D90;
	sub_82178CB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82179fd8
	ctx.lr = 0x82265D98;
	sub_82179FD8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82265DB8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x82265DF8;
	sub_8212D668(ctx, base);
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

DEFINE_REX_FUNC(sub_8226CB10) {
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
	ctx.lr = 0x8226CB18;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,1
	r30.s64 = 1;
	// beq 0x8226cbc8
	if (ctx.cr0.eq) goto loc_8226CBC8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,25628
	ctx.r4.s64 = ctx.r11.s64 + 25628;
	// bl 0x82120600
	ctx.lr = 0x8226CB64;
	sub_82120600(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cbc8
	if (ctx.cr0.eq) goto loc_8226CBC8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5444
	ctx.r4.s64 = ctx.r11.s64 + -5444;
	// bl 0x82120600
	ctx.lr = 0x8226CB9C;
	sub_82120600(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r29,3
	r29.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CBBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8226cbcc
	if (!ctx.cr0.eq) goto loc_8226CBCC;
loc_8226CBC8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8226CBCC:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8226cbec
	if (ctx.cr0.eq) goto loc_8226CBEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8226CBEC;
	sub_82120AC0(ctx, base);
loc_8226CBEC:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cc04
	if (ctx.cr0.eq) goto loc_8226CC04;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226CC04;
	sub_82120AC0(ctx, base);
loc_8226CC04:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cc14
	if (ctx.cr0.eq) goto loc_8226CC14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226cd68
	goto loc_8226CD68;
loc_8226CC14:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8226CC24;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226CC28;
	sub_8215F270(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,-16680
	r27.s64 = ctx.r11.s64 + -16680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CC40;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CC48;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r26)
	REX_STORE_U32(r26.u32 + 8, r31.u32);
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r26,r11,-17264
	r26.s64 = ctx.r11.s64 + -17264;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CC64;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x8226CC6C;
	sub_8215FC78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x8226CC78;
	sub_8215DC10(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CC84;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215f200
	ctx.lr = 0x8226CC8C;
	sub_8215F200(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CC9C;
	sub_8215F670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CCA4;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r24)
	REX_STORE_U32(r24.u32 + 8, r31.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r24,r11,-17344
	r24.s64 = ctx.r11.s64 + -17344;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CCC0;
	sub_8215F670(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CCC8;
	sub_8215F0F0(ctx, base);
	// li r31,2
	r31.s64 = 2;
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,8(r23)
	REX_STORE_U32(r23.u32 + 8, r31.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r25,r11,-17164
	r25.s64 = ctx.r11.s64 + -17164;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CCE8;
	sub_8215F670(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CCF0;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r23)
	REX_STORE_U32(r23.u32 + 8, r28.u32);
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CD04;
	sub_8215F670(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215f200
	ctx.lr = 0x8226CD0C;
	sub_8215F200(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CD1C;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CD24;
	sub_8215F0F0(ctx, base);
	// stw r27,8(r26)
	REX_STORE_U32(r26.u32 + 8, r27.u32);
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CD38;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CD40;
	sub_8215F0F0(ctx, base);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// stw r31,8(r27)
	REX_STORE_U32(r27.u32 + 8, r31.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CD54;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CD5C;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8226CD68:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8227D218) {
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
	ctx.lr = 0x8227D220;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D23C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D25C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8227d2d8
	if (!ctx.cr0.gt) goto loc_8227D2D8;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_8227D268:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r3,r28
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, r28.u64, ctx.xer);
	// bne cr6,0x8227d2b8
	if (!ctx.cr6.eq) goto loc_8227D2B8;
	// lwz r3,6272(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6272);
	// addi r4,r29,144
	ctx.r4.s64 = r29.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D2B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D2B8:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D2D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8227d268
	if (ctx.cr6.lt) goto loc_8227D268;
loc_8227D2D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82283628) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82283630;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82283658
	if (!ctx.cr6.gt) goto loc_82283658;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82283658;
	sub_822F6020(ctx, base);
loc_82283658:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x82283718
	if (!ctx.cr6.lt) goto loc_82283718;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8228368c
	if (ctx.cr6.eq) goto loc_8228368C;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822f6280
	ctx.lr = 0x82283684;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82283720
	if (ctx.cr0.eq) goto loc_82283720;
loc_8228368C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x822836bc
	goto loc_822836BC;
loc_8228369C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822836b4
	if (ctx.cr6.eq) goto loc_822836B4;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_822836B4:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_822836BC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8228369c
	if (!ctx.cr6.eq) goto loc_8228369C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r29,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r29.s64 = ctx.r10.s32 >> 3;
	// beq cr6,0x822836fc
	if (ctx.cr6.eq) goto loc_822836FC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822836f8
	if (ctx.cr6.eq) goto loc_822836F8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_822836EC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822836ec
	if (!ctx.cr6.eq) goto loc_822836EC;
loc_822836F8:
	// bl 0x8269ce98
	ctx.lr = 0x822836FC;
	sub_8269CE98(ctx, base);
loc_822836FC:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82283718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82283720:
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
	ctx.lr = 0x8228373C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8228A130) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a210
	if (ctx.cr0.eq) goto loc_8228A210;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228a1e0
	if (ctx.cr6.eq) goto loc_8228A1E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8228A16C;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x8228A178;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8228a19c
	if (!ctx.cr6.eq) goto loc_8228A19C;
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
	// b 0x8228a1a0
	goto loc_8228A1A0;
loc_8228A19C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228A1A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228a1e0
	if (!ctx.cr6.eq) goto loc_8228A1E0;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lbz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228a278
	if (!ctx.cr0.eq) goto loc_8228A278;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A1D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x8228d508
	ctx.lr = 0x8228A1DC;
	sub_8228D508(ctx, base);
	// b 0x8228a278
	goto loc_8228A278;
loc_8228A1E0:
	// lbz r11,99(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 99);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228a278
	if (!ctx.cr0.eq) goto loc_8228A278;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,99(r31)
	REX_STORE_U8(r31.u32 + 99, ctx.r11.u8);
	// b 0x8228a278
	goto loc_8228A278;
loc_8228A210:
	// lbz r11,99(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 99);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228a23c
	if (ctx.cr0.eq) goto loc_8228A23C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228A234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,99(r31)
	REX_STORE_U8(r31.u32 + 99, ctx.r11.u8);
loc_8228A23C:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8228a278
	if (!ctx.cr6.eq) goto loc_8228A278;
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
	ctx.lr = 0x8228A260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r3,r31,-12
	ctx.r3.s64 = r31.s64 + -12;
	// bne cr6,0x8228a274
	if (!ctx.cr6.eq) goto loc_8228A274;
	// bl 0x8228bb70
	ctx.lr = 0x8228A270;
	sub_8228BB70(ctx, base);
	// b 0x8228a278
	goto loc_8228A278;
loc_8228A274:
	// bl 0x8228af60
	ctx.lr = 0x8228A278;
	sub_8228AF60(ctx, base);
loc_8228A278:
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

DEFINE_REX_FUNC(sub_82290AB8) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4636
	ctx.r10.s64 = ctx.r10.s64 + 4636;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293AC8) {
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
	ctx.lr = 0x82293AD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82293af8
	if (ctx.cr6.eq) goto loc_82293AF8;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// b 0x82293b04
	goto loc_82293B04;
loc_82293AF8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c1a70
	ctx.lr = 0x82293B00;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82293B04:
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 8);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// ld r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 16);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 24);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822932c0
	ctx.lr = 0x82293B40;
	sub_822932C0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82299EA8) {
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
	ctx.lr = 0x82299EB0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f30,f11,f11,f0
	f30.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// bl 0x826a14e0
	ctx.lr = 0x82299EF8;
	sub_826A14E0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f30
	ctx.f12.f64 = double(float(sqrt(f30.f64)));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fdivs f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82299F10;
	sub_826A15C0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822A2EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r10,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4828) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,8336
	ctx.r4.s64 = ctx.r11.s64 + 8336;
	// lwz r11,8432(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8432);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r8,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r8.u8);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822a48dc
	if (!ctx.cr0.eq) goto loc_822A48DC;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stw r11,8432(r10)
	REX_STORE_U32(ctx.r10.u32 + 8432, ctx.r11.u32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f12,48(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f12,68(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f12,88(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 92, temp.u32);
loc_822A48DC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// bctrl 
	ctx.lr = 0x822A4958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r31,60
	ctx.r10.s64 = r31.s64 + 60;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A4968:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsu f0,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822a4968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A4968;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B6EA8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x822b6ed8
	if (ctx.cr6.lt) goto loc_822B6ED8;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b6ed8
	if (!ctx.cr0.eq) goto loc_822B6ED8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822b6e18
	ctx.lr = 0x822B6ED8;
	sub_822B6E18(ctx, base);
loc_822B6ED8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822b6ef8
	if (ctx.cr6.lt) goto loc_822B6EF8;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b6ef8
	if (!ctx.cr0.eq) goto loc_822B6EF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b6e18
	ctx.lr = 0x822B6EF8;
	sub_822B6E18(ctx, base);
loc_822B6EF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x822b6f18
	if (ctx.cr6.lt) goto loc_822B6F18;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b6f18
	if (!ctx.cr0.eq) goto loc_822B6F18;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822b6e18
	ctx.lr = 0x822B6F18;
	sub_822B6E18(ctx, base);
loc_822B6F18:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822b6f38
	if (ctx.cr6.lt) goto loc_822B6F38;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b6f38
	if (!ctx.cr0.eq) goto loc_822B6F38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b6e18
	ctx.lr = 0x822B6F38;
	sub_822B6E18(ctx, base);
loc_822B6F38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BC338) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_822BC354:
	// lwz r9,212(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,432(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 432, temp.u32);
	// stfs f0,436(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 436, temp.u32);
	// stfs f0,440(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 440, temp.u32);
	// stfs f0,444(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 444, temp.u32);
	// stfs f0,448(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 448, temp.u32);
	// stfs f0,452(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 452, temp.u32);
	// stfs f0,456(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 456, temp.u32);
	// stfs f0,460(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lwz r9,204(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822bc354
	if (ctx.cr6.lt) goto loc_822BC354;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BD310) {
	REX_FUNC_PROLOGUE();
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822bd358
	if (!ctx.cr6.gt) goto loc_822BD358;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
loc_822BD330:
	// lwzx r5,r9,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822bd354
	if (ctx.cr6.eq) goto loc_822BD354;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822bd330
	if (ctx.cr6.lt) goto loc_822BD330;
	// b 0x822bd358
	goto loc_822BD358;
loc_822BD354:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_822BD358:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r6,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C1030) {
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
	// and r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c1090
	if (ctx.cr6.eq) goto loc_822C1090;
	// lwz r7,508(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x822c1090
	if (!ctx.cr6.gt) goto loc_822C1090;
	// lwz r8,516(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 516);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C1064:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822c1098
	if (ctx.cr6.eq) goto loc_822C1098;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822c1098
	if (ctx.cr6.eq) goto loc_822C1098;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c1064
	if (ctx.cr6.lt) goto loc_822C1064;
loc_822C1090:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822C1098:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2308) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// bne 0x822c234c
	if (!ctx.cr0.eq) goto loc_822C234C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_822C234C:
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3378) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3528) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12204(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12204);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3828) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C39C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3F68) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12100(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 12100);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C42C0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5318) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C5320;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cctpl 
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822C5338:
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// db16cyc 
	std::this_thread::yield();
	// bdnz 0x822c5338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C5338;
	// cctpm 
	// lbz r11,10941(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c53e4
	if (!ctx.cr0.eq) goto loc_822C53E4;
	// lwz r11,10896(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10896);
	// lwz r10,256(r13)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,88(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822c5394
	if (ctx.cr6.eq) goto loc_822C5394;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_822C5394:
	// bl 0x823eea88
	ctx.lr = 0x822C5398;
	sub_823EEA88(ctx, base);
	// lwz r11,10888(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10888);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822c53b4
	if (!ctx.cr6.eq) goto loc_822C53B4;
	// lwz r11,11008(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 11008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c53b4
	if (ctx.cr6.eq) goto loc_822C53B4;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_822C53B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// bge cr6,0x822c53cc
	if (!ctx.cr6.lt) goto loc_822C53CC;
loc_822C53C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c53e8
	goto loc_822C53E8;
loc_822C53CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822dab00
	ctx.lr = 0x822C53D4;
	sub_822DAB00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c53e4
	if (!ctx.cr0.eq) goto loc_822C53E4;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x822c53c4
	goto loc_822C53C4;
loc_822C53E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C53E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822CBF58) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cbfac
	if (ctx.cr0.eq) goto loc_822CBFAC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x822cbf98
	if (ctx.cr6.gt) goto loc_822CBF98;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// b 0x822cbfa8
	goto loc_822CBFA8;
loc_822CBF98:
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x822cbfac
	if (!ctx.cr6.eq) goto loc_822CBFAC;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_822CBFA8:
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_822CBFAC:
	// lbz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x822cbfc4
	if (ctx.cr6.lt) goto loc_822CBFC4;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// ble cr6,0x822cbfdc
	if (!ctx.cr6.gt) goto loc_822CBFDC;
loc_822CBFC4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_822CBFDC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CEF20) {
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
	ctx.lr = 0x822CEF28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822cefb0
	if (!ctx.cr6.gt) goto loc_822CEFB0;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822cef5c
	if (!ctx.cr6.lt) goto loc_822CEF5C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822CEF5C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x822CEF68;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822cef80
	if (!ctx.cr0.eq) goto loc_822CEF80;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x822cefe8
	goto loc_822CEFE8;
loc_822CEF80:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cefac
	if (ctx.cr6.eq) goto loc_822CEFAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x822CEFA0;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CEFAC;
	sub_823F0350(ctx, base);
loc_822CEFAC:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CEFB0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822cefe8
	if (ctx.cr6.lt) goto loc_822CEFE8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822CEFE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D6150) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822D6158;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d6184
	if (!ctx.cr6.gt) goto loc_822D6184;
	// bl 0x822d5b28
	ctx.lr = 0x822D6180;
	sub_822D5B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822D6184:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5d20
	ctx.lr = 0x822D6198;
	sub_822D5D20(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822D9A70) {
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
	ctx.lr = 0x822D9A78;
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r28,4(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r25,16(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r22,40(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r26,8(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bne cr6,0x822d9aac
	if (!ctx.cr6.eq) goto loc_822D9AAC;
	// clrlwi r11,r26,26
	ctx.r11.u64 = r26.u32 & 0x3F;
	// b 0x822d9abc
	goto loc_822D9ABC;
loc_822D9AAC:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822d9ac4
	if (!ctx.cr6.eq) goto loc_822D9AC4;
loc_822D9ABC:
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x822d9ad8
	goto loc_822D9AD8;
loc_822D9AC4:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822d9ae0
	if (!ctx.cr6.eq) goto loc_822D9AE0;
	// lis r30,6184
	r30.s64 = 405274624;
loc_822D9AD8:
	// ori r30,r30,262
	r30.u64 = r30.u64 | 262;
	// b 0x822d9b10
	goto loc_822D9B10;
loc_822D9AE0:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822d9af8
	if (!ctx.cr6.eq) goto loc_822D9AF8;
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x822d9b0c
	goto loc_822D9B0C;
loc_822D9AF8:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822d9b10
	if (!ctx.cr6.eq) goto loc_822D9B10;
	// lis r30,6184
	r30.s64 = 405274624;
loc_822D9B0C:
	// ori r30,r30,310
	r30.u64 = r30.u64 | 310;
loc_822D9B10:
	// clrlwi r23,r30,26
	r23.u64 = r30.u32 & 0x3F;
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r23,50
	ctx.cr6.compare<uint32_t>(r23.u32, 50, ctx.xer);
	// bne cr6,0x822d9b28
	if (!ctx.cr6.eq) goto loc_822D9B28;
	// li r24,6
	r24.s64 = 6;
	// b 0x822d9b34
	goto loc_822D9B34;
loc_822D9B28:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(r24.u32, 7, ctx.xer);
	// bne cr6,0x822d9b34
	if (!ctx.cr6.eq) goto loc_822D9B34;
	// li r24,54
	r24.s64 = 54;
loc_822D9B34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793d84
	ctx.lr = 0x822D9B3C;
	__imp__VdQueryVideoMode(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// li r9,21768
	ctx.r9.s64 = 21768;
	// stw r11,21756(r27)
	REX_STORE_U32(r27.u32 + 21756, ctx.r11.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,21764(r27)
	REX_STORE_U32(r27.u32 + 21764, ctx.r11.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r27,r9
	REX_STORE_U32(r27.u32 + ctx.r9.u32, ctx.f0.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,21760(r27)
	REX_STORE_U32(r27.u32 + 21760, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d9bb4
	if (!ctx.cr6.eq) goto loc_822D9BB4;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d3178
	ctx.lr = 0x822D9BA0;
	sub_822D3178(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d9bb0
	if (!ctx.cr0.eq) goto loc_822D9BB0;
loc_822D9BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d9d14
	goto loc_822D9D14;
loc_822D9BB0:
	// stw r3,15040(r27)
	REX_STORE_U32(r27.u32 + 15040, ctx.r3.u32);
loc_822D9BB4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d9bf0
	if (!ctx.cr6.eq) goto loc_822D9BF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d3298
	ctx.lr = 0x822D9BD8;
	sub_822D3298(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822d9ba8
	if (ctx.cr0.eq) goto loc_822D9BA8;
	// stw r5,15044(r27)
	REX_STORE_U32(r27.u32 + 15044, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c4898
	ctx.lr = 0x822D9BF0;
	sub_822C4898(ctx, base);
loc_822D9BF0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d9c28
	if (ctx.cr6.eq) goto loc_822D9C28;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d3298
	ctx.lr = 0x822D9C14;
	sub_822D3298(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822d9ba8
	if (ctx.cr0.eq) goto loc_822D9BA8;
	// stw r4,15036(r27)
	REX_STORE_U32(r27.u32 + 15036, ctx.r4.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c4be8
	ctx.lr = 0x822D9C28;
	sub_822C4BE8(ctx, base);
loc_822D9C28:
	// addi r3,r27,13756
	ctx.r3.s64 = r27.s64 + 13756;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822D9C38;
	sub_826A1E70(ctx, base);
	// rlwinm r11,r30,0,2,13
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3FFC0000;
	// lis r10,9360
	ctx.r10.s64 = 613416960;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822d9c54
	if (ctx.cr6.eq) goto loc_822D9C54;
	// oris r11,r23,10280
	ctx.r11.u64 = r23.u64 | 673710080;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,13820(r27)
	REX_STORE_U32(r27.u32 + 13820, ctx.r11.u32);
loc_822D9C54:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e38f0
	ctx.lr = 0x822D9C60;
	sub_822E38F0(ctx, base);
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(r24.u32, 7, ctx.xer);
	// beq cr6,0x822d9cb0
	if (ctx.cr6.eq) goto loc_822D9CB0;
	// cmplwi cr6,r24,54
	ctx.cr6.compare<uint32_t>(r24.u32, 54, ctx.xer);
	// beq cr6,0x822d9cb0
	if (ctx.cr6.eq) goto loc_822D9CB0;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,1150
	ctx.r11.s64 = ctx.r1.s64 + 1150;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822D9C80:
	// li r9,255
	ctx.r9.s64 = 255;
	// divwu r9,r10,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r9.u16);
	// sth r9,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r9.u16);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822d9c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D9C80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c4ec0
	ctx.lr = 0x822D9CAC;
	sub_822C4EC0(ctx, base);
	// b 0x822d9d08
	goto loc_822D9D08;
loc_822D9CB0:
	// li r9,128
	ctx.r9.s64 = 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,1150
	ctx.r11.s64 = ctx.r1.s64 + 1150;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,127
	ctx.r9.s64 = 127;
loc_822D9CC4:
	// divwu r8,r10,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r8,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r8.u16);
	// divwu r7,r10,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// sth r8,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,-1020(r11)
	REX_STORE_U16(ctx.r11.u32 + -1020, ctx.r8.u16);
	// sth r8,-508(r11)
	REX_STORE_U16(ctx.r11.u32 + -508, ctx.r8.u16);
	// sthu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822d9cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D9CC4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c4f90
	ctx.lr = 0x822D9D08;
	sub_822C4F90(ctx, base);
loc_822D9D08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16920(r27)
	REX_STORE_U32(r27.u32 + 16920, ctx.r11.u32);
loc_822D9D14:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822E9088) {
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
	ctx.lr = 0x822E9090;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// bl 0x82178268
	ctx.lr = 0x822E90AC;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r31,120
	r26.s64 = r31.s64 + 120;
	// addi r11,r11,14088
	ctx.r11.s64 = ctx.r11.s64 + 14088;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822E90CC;
	sub_82120AC0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r22,149(r31)
	REX_STORE_U8(r31.u32 + 149, r22.u8);
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r31,176
	r23.s64 = r31.s64 + 176;
	// stb r11,151(r31)
	REX_STORE_U8(r31.u32 + 151, ctx.r11.u8);
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,150(r31)
	REX_STORE_U8(r31.u32 + 150, ctx.r11.u8);
	// stb r11,148(r31)
	REX_STORE_U8(r31.u32 + 148, ctx.r11.u8);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f12,88(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r31,152
	r24.s64 = r31.s64 + 152;
	// lfs f0,228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f12,168(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x822E9130;
	sub_822E6DF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r22,268(r31)
	REX_STORE_U32(r31.u32 + 268, r22.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// addi r29,r31,268
	r29.s64 = r31.s64 + 268;
	// stb r22,276(r31)
	REX_STORE_U8(r31.u32 + 276, r22.u8);
	// stb r22,277(r31)
	REX_STORE_U8(r31.u32 + 277, r22.u8);
	// stb r22,278(r31)
	REX_STORE_U8(r31.u32 + 278, r22.u8);
	// stb r22,280(r31)
	REX_STORE_U8(r31.u32 + 280, r22.u8);
	// stb r22,281(r31)
	REX_STORE_U8(r31.u32 + 281, r22.u8);
	// bl 0x822f6280
	ctx.lr = 0x822E915C;
	sub_822F6280(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x822e918c
	if (ctx.cr0.eq) goto loc_822E918C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// bl 0x82120600
	ctx.lr = 0x822E9174;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x822E9188;
	sub_821BF110(ctx, base);
	// b 0x822e9190
	goto loc_822E9190;
loc_822E918C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822E9190:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E91A4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e91c0
	if (ctx.cr0.eq) goto loc_822E91C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822E91C0;
	sub_82120AC0(ctx, base);
loc_822E91C0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822E91C8;
	sub_822F6280(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x822e91f8
	if (ctx.cr0.eq) goto loc_822E91F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-28184
	ctx.r4.s64 = ctx.r11.s64 + -28184;
	// bl 0x82120600
	ctx.lr = 0x822E91E0;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x8219d708
	ctx.lr = 0x822E91F4;
	sub_8219D708(ctx, base);
	// b 0x822e91fc
	goto loc_822E91FC;
loc_822E91F8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822E91FC:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E920C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e9228
	if (ctx.cr0.eq) goto loc_822E9228;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822E9228;
	sub_82120AC0(ctx, base);
loc_822E9228:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x822E9230;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e9260
	if (ctx.cr0.eq) goto loc_822E9260;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x822E9248;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
	// bl 0x821d13f8
	ctx.lr = 0x822E925C;
	sub_821D13F8(ctx, base);
	// b 0x822e9264
	goto loc_822E9264;
loc_822E9260:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822E9264:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x822E9274;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e928c
	if (ctx.cr0.eq) goto loc_822E928C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822E928C;
	sub_82120AC0(ctx, base);
loc_822E928C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x822E92A0;
	sub_82120600(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822E92B0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x822E92C0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,13916
	ctx.r4.s64 = ctx.r11.s64 + 13916;
	// bl 0x82120600
	ctx.lr = 0x822E92D0;
	sub_82120600(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822e7f20
	ctx.lr = 0x822E92E0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x822E92F0;
	sub_82120AC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120600
	ctx.lr = 0x822E92FC;
	sub_82120600(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e7cb0
	ctx.lr = 0x822E930C;
	sub_822E7CB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x822E931C;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822E9324;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e9344
	if (ctx.cr0.eq) goto loc_822E9344;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x822E933C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e9348
	goto loc_822E9348;
loc_822E9344:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822E9348:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E9358;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x822E9360;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e93c8
	if (ctx.cr0.eq) goto loc_822E93C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,8(r30)
	REX_STORE_U32(r30.u32 + 8, r22.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822E938C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e93b8
	if (ctx.cr0.eq) goto loc_822E93B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-26000
	ctx.r10.s64 = ctx.r10.s64 + -26000;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822e93bc
	goto loc_822E93BC;
loc_822E93B8:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822E93BC:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822e93cc
	goto loc_822E93CC;
loc_822E93C8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822E93CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E93D4;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x822E93DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e93f4
	if (ctx.cr0.eq) goto loc_822E93F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822e9f20
	ctx.lr = 0x822E93EC;
	sub_822E9F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e93f8
	goto loc_822E93F8;
loc_822E93F4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822E93F8:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E9404;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822E940C;
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
	// beq 0x822e9480
	if (ctx.cr0.eq) goto loc_822E9480;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25464
	ctx.r4.s64 = ctx.r11.s64 + -25464;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E9440;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822E944C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e9470
	if (ctx.cr0.eq) goto loc_822E9470;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-18056
	ctx.r10.s64 = ctx.r10.s64 + -18056;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822e9474
	goto loc_822E9474;
loc_822E9470:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822E9474:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822e9484
	goto loc_822E9484;
loc_822E9480:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E9484:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E949C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822E94A4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e9514
	if (ctx.cr0.eq) goto loc_822E9514;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b9a8
	ctx.lr = 0x822E94BC;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E94D4;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822E94E0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e9504
	if (ctx.cr0.eq) goto loc_822E9504;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26016
	ctx.r10.s64 = ctx.r10.s64 + -26016;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822e9508
	goto loc_822E9508;
loc_822E9504:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822E9508:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822e9518
	goto loc_822E9518;
loc_822E9514:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E9518:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E9530;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822E9538;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x822e9570
	if (ctx.cr0.eq) goto loc_822E9570;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29404
	ctx.r4.s64 = ctx.r11.s64 + -29404;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E9564;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x822e9574
	goto loc_822E9574;
loc_822E9570:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E9574:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E958C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822E9594;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e95c4
	if (ctx.cr0.eq) goto loc_822E95C4;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29364
	ctx.r4.s64 = ctx.r11.s64 + -29364;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E95B8;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x822e95c8
	goto loc_822E95C8;
loc_822E95C4:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E95C8:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E95E0;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822E95E8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e9618
	if (ctx.cr0.eq) goto loc_822E9618;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,14048
	ctx.r4.s64 = ctx.r11.s64 + 14048;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E960C;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x822e961c
	goto loc_822E961C;
loc_822E9618:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E961C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E9634;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822E963C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e966c
	if (ctx.cr0.eq) goto loc_822E966C;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,14056
	ctx.r4.s64 = ctx.r11.s64 + 14056;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E9660;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x822e9670
	goto loc_822E9670;
loc_822E966C:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E9670:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E9688;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822E9690;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e96c0
	if (ctx.cr0.eq) goto loc_822E96C0;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,14068
	ctx.r4.s64 = ctx.r11.s64 + 14068;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E96B4;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x822e96c4
	goto loc_822E96C4;
loc_822E96C0:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E96C4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E96DC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822E96E4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e9720
	if (ctx.cr0.eq) goto loc_822E9720;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b9a8
	ctx.lr = 0x822E96FC;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14076
	ctx.r4.s64 = ctx.r11.s64 + 14076;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E9714;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x822e9724
	goto loc_822E9724;
loc_822E9720:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822E9724:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822E973C;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822E9744;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29688
	r30.s64 = ctx.r11.s64 + -29688;
	// beq 0x822e9770
	if (ctx.cr0.eq) goto loc_822E9770;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822e9774
	goto loc_822E9774;
loc_822E9770:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822E9774:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r5,r11,31460
	ctx.r5.s64 = ctx.r11.s64 + 31460;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x822E9788;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822E9790;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e97b4
	if (ctx.cr0.eq) goto loc_822E97B4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,21984
	ctx.r11.s64 = ctx.r11.s64 + 21984;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822e97b8
	goto loc_822E97B8;
loc_822E97B4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822E97B8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// bl 0x8216be80
	ctx.lr = 0x822E97C8;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822E97D0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e97f4
	if (ctx.cr0.eq) goto loc_822E97F4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822e97f8
	goto loc_822E97F8;
loc_822E97F4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822E97F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x822E9808;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82315660) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231570c
	if (!ctx.cr0.eq) goto loc_8231570C;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823156a8
	if (ctx.cr6.eq) goto loc_823156A8;
	// bl 0x823152e8
	ctx.lr = 0x823156A0;
	sub_823152E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231570c
	if (!ctx.cr0.eq) goto loc_8231570C;
loc_823156A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823156bc
	if (!ctx.cr6.eq) goto loc_823156BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823156cc
	goto loc_823156CC;
loc_823156BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f3d8
	ctx.lr = 0x823156C4;
	sub_8233F3D8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823156CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823156e4
	if (ctx.cr0.eq) goto loc_823156E4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8233ea40
	ctx.lr = 0x823156DC;
	sub_8233EA40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231570c
	if (!ctx.cr0.eq) goto loc_8231570C;
loc_823156E4:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5872
	ctx.r5.s64 = ctx.r10.s64 + 5872;
	// li r6,276
	ctx.r6.s64 = 276;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82315708;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231570C:
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

DEFINE_REX_FUNC(sub_82319B48) {
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
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82319b70
	if (!ctx.cr0.eq) goto loc_82319B70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82319bb8
	goto loc_82319BB8;
loc_82319B70:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319bb4
	if (ctx.cr6.eq) goto loc_82319BB4;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82319bb4
	if (ctx.cr6.eq) goto loc_82319BB4;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82319ba4
	if (ctx.cr0.eq) goto loc_82319BA4;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8230d2d0
	ctx.lr = 0x82319B9C;
	sub_8230D2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319bb8
	if (!ctx.cr0.eq) goto loc_82319BB8;
loc_82319BA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
	// b 0x82319bb8
	goto loc_82319BB8;
loc_82319BB4:
	// li r3,33
	ctx.r3.s64 = 33;
loc_82319BB8:
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

DEFINE_REX_FUNC(sub_8231F090) {
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
	ctx.lr = 0x8231F098;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8231f0cc
	if (ctx.cr6.eq) goto loc_8231F0CC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231f0ec
	if (ctx.cr6.eq) goto loc_8231F0EC;
loc_8231F0CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8231f0dc
	if (ctx.cr6.eq) goto loc_8231F0DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231f0ec
	if (ctx.cr6.eq) goto loc_8231F0EC;
loc_8231F0DC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8231f0f8
	if (!ctx.cr6.eq) goto loc_8231F0F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8231f130
	if (!ctx.cr6.eq) goto loc_8231F130;
loc_8231F0EC:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8231F0F0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
loc_8231F0F8:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8231f128
	if (!ctx.cr6.gt) goto loc_8231F128;
	// lwz r9,44(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 44);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8231F10C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231f0ec
	if (!ctx.cr6.lt) goto loc_8231F0EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x8231f10c
	if (ctx.cr6.lt) goto loc_8231F10C;
loc_8231F128:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8231f15c
	if (ctx.cr6.eq) goto loc_8231F15C;
loc_8231F130:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8231f15c
	if (!ctx.cr6.gt) goto loc_8231F15C;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8231F140:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8231f0ec
	if (ctx.cr6.eq) goto loc_8231F0EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// blt cr6,0x8231f140
	if (ctx.cr6.lt) goto loc_8231F140;
loc_8231F15C:
	// lis r21,-32129
	r21.s64 = -2105606144;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r24,r11,6908
	r24.s64 = ctx.r11.s64 + 6908;
	// li r6,1151
	ctx.r6.s64 = 1151;
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231F188;
	sub_82330E40(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne 0x8231f198
	if (!ctx.cr0.eq) goto loc_8231F198;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231f0f0
	goto loc_8231F0F0;
loc_8231F198:
	// mr r31,r22
	r31.u64 = r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8231f20c
	if (!ctx.cr6.gt) goto loc_8231F20C;
loc_8231F1A8:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231F1C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f24c
	if (!ctx.cr0.eq) goto loc_8231F24C;
	// lwz r11,100(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 100);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r8,188(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r7,184(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x8231eab0
	ctx.lr = 0x8231F1F4;
	sub_8231EAB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f24c
	if (!ctx.cr0.eq) goto loc_8231F24C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x8231f1a8
	if (ctx.cr6.lt) goto loc_8231F1A8;
loc_8231F20C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// li r6,1171
	ctx.r6.s64 = 1171;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231F230;
	sub_82330E40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r20,r11,4440
	r20.s64 = ctx.r11.s64 + 4440;
	// bne 0x8231f278
	if (!ctx.cr0.eq) goto loc_8231F278;
loc_8231F240:
	// li r31,44
	r31.s64 = 44;
loc_8231F244:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// b 0x8231f258
	goto loc_8231F258;
loc_8231F24C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
loc_8231F258:
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231F270;
	sub_82330D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8231f0f0
	goto loc_8231F0F0;
loc_8231F278:
	// lwz r11,100(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 100);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,184(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x823ef2f8
	ctx.lr = 0x8231F290;
	sub_823EF2F8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8231f388
	if (!ctx.cr6.gt) goto loc_8231F388;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_8231F29C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,52(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 52);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f78d0
	ctx.lr = 0x8231F2B4;
	sub_822F78D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231f37c
	if (!ctx.cr0.eq) goto loc_8231F37C;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231f320
	if (!ctx.cr6.gt) goto loc_8231F320;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8231F2D8:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8230c800
	ctx.lr = 0x8231F2E4;
	sub_8230C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f300
	if (ctx.cr0.eq) goto loc_8231F300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f78f8
	ctx.lr = 0x8231F2F8;
	sub_822F78F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f31c
	if (ctx.cr0.eq) goto loc_8231F31C;
loc_8231F300:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231f2d8
	if (ctx.cr6.lt) goto loc_8231F2D8;
	// b 0x8231f320
	goto loc_8231F320;
loc_8231F31C:
	// li r28,1
	r28.s64 = 1;
loc_8231F320:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f37c
	if (ctx.cr0.eq) goto loc_8231F37C;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8231f35c
	if (!ctx.cr6.gt) goto loc_8231F35C;
	// lwz r9,40(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 40);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8231F340:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8231f35c
	if (ctx.cr6.eq) goto loc_8231F35C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231f340
	if (ctx.cr6.lt) goto loc_8231F340;
loc_8231F35C:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8231f37c
	if (!ctx.cr6.eq) goto loc_8231F37C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8231F37C:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x8231f29c
	if (!ctx.cr0.eq) goto loc_8231F29C;
loc_8231F388:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x8231f3b8
	if (!ctx.cr6.eq) goto loc_8231F3B8;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82330d00
	ctx.lr = 0x8231F3B0;
	sub_82330D00(ctx, base);
loc_8231F3B0:
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x8231f244
	goto loc_8231F244;
loc_8231F3B8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1233
	ctx.r6.s64 = 1233;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82330a38
	ctx.lr = 0x8231F3CC;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231f3f8
	if (ctx.cr0.eq) goto loc_8231F3F8;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r22,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r22.u32);
	// stw r22,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r22.u32);
	// stw r22,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r22.u32);
	// stw r22,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r22.u32);
	// stw r22,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r22.u32);
	// stw r22,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r22.u32);
	// b 0x8231f3fc
	goto loc_8231F3FC;
loc_8231F3F8:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8231F3FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bne cr6,0x8231f424
	if (!ctx.cr6.eq) goto loc_8231F424;
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231F420;
	sub_82330D00(ctx, base);
	// b 0x8231f240
	goto loc_8231F240;
loc_8231F424:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8231d738
	ctx.lr = 0x8231F430;
	sub_8231D738(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8231f444
	if (ctx.cr0.eq) goto loc_8231F444;
loc_8231F438:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231db40
	ctx.lr = 0x8231F440;
	sub_8231DB40(ctx, base);
	// b 0x8231f244
	goto loc_8231F244;
loc_8231F444:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231f4ec
	if (!ctx.cr6.gt) goto loc_8231F4EC;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_8231F458:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r28,r11,r27
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f78d0
	ctx.lr = 0x8231F468;
	sub_822F78D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231f4d8
	if (!ctx.cr0.eq) goto loc_8231F4D8;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231f4d8
	if (!ctx.cr6.gt) goto loc_8231F4D8;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8231F488:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8230c800
	ctx.lr = 0x8231F494;
	sub_8230C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f4c0
	if (ctx.cr0.eq) goto loc_8231F4C0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f78f8
	ctx.lr = 0x8231F4A8;
	sub_822F78F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231f4c0
	if (!ctx.cr0.eq) goto loc_8231F4C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7a10
	ctx.lr = 0x8231F4C0;
	sub_822F7A10(ctx, base);
loc_8231F4C0:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231f488
	if (ctx.cr6.lt) goto loc_8231F488;
loc_8231F4D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231f458
	if (ctx.cr6.lt) goto loc_8231F458;
loc_8231F4EC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231f520
	if (!ctx.cr6.gt) goto loc_8231F520;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8231F500:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r22,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, r22.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8231f500
	if (ctx.cr6.lt) goto loc_8231F500;
loc_8231F520:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231f580
	if (!ctx.cr6.gt) goto loc_8231F580;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8231F534:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x8230c800
	ctx.lr = 0x8231F540;
	sub_8230C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f56c
	if (ctx.cr0.eq) goto loc_8231F56C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x8230e2e0
	ctx.lr = 0x8231F564;
	sub_8230E2E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8231f438
	if (!ctx.cr0.eq) goto loc_8231F438;
loc_8231F56C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231f534
	if (ctx.cr6.lt) goto loc_8231F534;
loc_8231F580:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231f5c0
	if (!ctx.cr6.gt) goto loc_8231F5C0;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8231F594:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82308f70
	ctx.lr = 0x8231F5A4;
	sub_82308F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8231f438
	if (!ctx.cr0.eq) goto loc_8231F438;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231f594
	if (ctx.cr6.lt) goto loc_8231F594;
loc_8231F5C0:
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231f664
	if (!ctx.cr6.gt) goto loc_8231F664;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_8231F5D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r28,r11,r27
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f78d0
	ctx.lr = 0x8231F5E0;
	sub_822F78D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231f650
	if (!ctx.cr0.eq) goto loc_8231F650;
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231f650
	if (!ctx.cr6.gt) goto loc_8231F650;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8231F600:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8230c800
	ctx.lr = 0x8231F60C;
	sub_8230C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f638
	if (ctx.cr0.eq) goto loc_8231F638;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f78f8
	ctx.lr = 0x8231F620;
	sub_822F78F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231f638
	if (!ctx.cr0.eq) goto loc_8231F638;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f7960
	ctx.lr = 0x8231F638;
	sub_822F7960(ctx, base);
loc_8231F638:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231f600
	if (ctx.cr6.lt) goto loc_8231F600;
loc_8231F650:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231f5d0
	if (ctx.cr6.lt) goto loc_8231F5D0;
loc_8231F664:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231db40
	ctx.lr = 0x8231F66C;
	sub_8231DB40(ctx, base);
	// b 0x8231f3b0
	goto loc_8231F3B0;
}

DEFINE_REX_FUNC(sub_823513F0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82351400
	if (!ctx.cr6.eq) goto loc_82351400;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82351400:
	// lbz r11,97(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 97);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82351B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82351b58
	if (ctx.cr6.lt) goto loc_82351B58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82351b5c
	if (!ctx.cr6.gt) goto loc_82351B5C;
loc_82351B58:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82351B5C:
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// b 0x82351048
	sub_82351048(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82353B20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9872
	ctx.r9.s64 = ctx.r11.s64 + 9872;
	// addi r8,r10,8576
	ctx.r8.s64 = ctx.r10.s64 + 8576;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82353D30) {
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
	ctx.lr = 0x82353D38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 296);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82353d5c
	if (!ctx.cr6.eq) goto loc_82353D5C;
	// bl 0x82353c38
	ctx.lr = 0x82353D5C;
	sub_82353C38(ctx, base);
loc_82353D5C:
	// lwz r29,316(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 316);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x82353D68;
	sub_8233E7E0(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mulli r10,r30,44
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(44));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82353dd8
	if (ctx.cr6.eq) goto loc_82353DD8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bne cr6,0x82353dd8
	if (!ctx.cr6.eq) goto loc_82353DD8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82353dd8
	if (!ctx.cr6.eq) goto loc_82353DD8;
	// lwz r9,308(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 308);
	// addi r10,r31,304
	ctx.r10.s64 = r31.s64 + 304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82353DD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233e820
	ctx.lr = 0x82353DE0;
	sub_8233E820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82357780) {
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
	// bl 0x8235f4c8
	ctx.lr = 0x82357798;
	sub_8235F4C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// addi r10,r11,10344
	ctx.r10.s64 = ctx.r11.s64 + 10344;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82341280
	ctx.lr = 0x823577AC;
	sub_82341280(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,8628
	ctx.r6.s64 = ctx.r8.s64 + 8628;
	// addi r9,r31,10588
	ctx.r9.s64 = r31.s64 + 10588;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r6.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r7,10344
	ctx.r3.s64 = ctx.r7.s64 + 10344;
	// stw r5,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,10600(r31)
	REX_STORE_U32(r31.u32 + 10600, ctx.r11.u32);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,10592(r31)
	REX_STORE_U32(r31.u32 + 10592, ctx.r8.u32);
	// addi r6,r4,9656
	ctx.r6.s64 = ctx.r4.s64 + 9656;
	// stw r8,10596(r31)
	REX_STORE_U32(r31.u32 + 10596, ctx.r8.u32);
	// stw r10,10604(r31)
	REX_STORE_U32(r31.u32 + 10604, ctx.r10.u32);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// stw r6,10588(r31)
	REX_STORE_U32(r31.u32 + 10588, ctx.r6.u32);
	// lis r5,-32203
	ctx.r5.s64 = -2110455808;
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r3,r3,26152
	ctx.r3.s64 = ctx.r3.s64 + 26152;
	// addi r8,r8,10336
	ctx.r8.s64 = ctx.r8.s64 + 10336;
	// lwz r10,1012(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 1012);
	// addi r5,r5,26128
	ctx.r5.s64 = ctx.r5.s64 + 26128;
	// stw r10,10612(r31)
	REX_STORE_U32(r31.u32 + 10612, ctx.r10.u32);
	// addi r4,r4,26144
	ctx.r4.s64 = ctx.r4.s64 + 26144;
	// stw r6,10720(r31)
	REX_STORE_U32(r31.u32 + 10720, ctx.r6.u32);
	// stw r9,10708(r31)
	REX_STORE_U32(r31.u32 + 10708, ctx.r9.u32);
	// stw r9,10712(r31)
	REX_STORE_U32(r31.u32 + 10712, ctx.r9.u32);
	// stw r11,10716(r31)
	REX_STORE_U32(r31.u32 + 10716, ctx.r11.u32);
	// stw r3,10644(r31)
	REX_STORE_U32(r31.u32 + 10644, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,10656(r31)
	REX_STORE_U32(r31.u32 + 10656, ctx.r11.u32);
	// stw r11,10840(r31)
	REX_STORE_U32(r31.u32 + 10840, ctx.r11.u32);
	// stw r5,10636(r31)
	REX_STORE_U32(r31.u32 + 10636, ctx.r5.u32);
	// stw r4,10640(r31)
	REX_STORE_U32(r31.u32 + 10640, ctx.r4.u32);
	// stw r8,10588(r31)
	REX_STORE_U32(r31.u32 + 10588, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8235E148) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x823d1958
	ctx.lr = 0x8235E15C;
	sub_823D1958(ctx, base);
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

DEFINE_REX_FUNC(sub_8235EF00) {
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
	ctx.lr = 0x8235EF08;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r22,36(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// add r28,r11,r5
	r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r28,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r28.u32);
	// cmplwi cr6,r28,50
	ctx.cr6.compare<uint32_t>(r28.u32, 50, ctx.xer);
	// blt cr6,0x8235f14c
	if (ctx.cr6.lt) goto loc_8235F14C;
	// li r23,0
	r23.s64 = 0;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r23,40(r30)
	REX_STORE_U32(r30.u32 + 40, r23.u32);
	// bl 0x823b2728
	ctx.lr = 0x8235EF40;
	sub_823B2728(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r24,-32129
	r24.s64 = -2105606144;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r25,r11,10708
	r25.s64 = ctx.r11.s64 + 10708;
	// bne cr6,0x8235efd8
	if (!ctx.cr6.eq) goto loc_8235EFD8;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,202
	ctx.r6.s64 = 202;
	// li r4,420
	ctx.r4.s64 = 420;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8235EF74;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ef8c
	if (ctx.cr6.eq) goto loc_8235EF8C;
	// bl 0x8235eb98
	ctx.lr = 0x8235EF80;
	sub_8235EB98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235ef98
	if (!ctx.cr6.eq) goto loc_8235EF98;
loc_8235EF8C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8235EF98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8235e550
	ctx.lr = 0x8235EFA4;
	sub_8235E550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f150
	if (!ctx.cr6.eq) goto loc_8235F150;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8235EFB4;
	sub_8233E7E0(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r30,12
	ctx.r11.s64 = r30.s64 + 12;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// bl 0x8233e820
	ctx.lr = 0x8235EFD8;
	sub_8233E820(ctx, base);
loc_8235EFD8:
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r27,r30,24
	r27.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// beq cr6,0x8235f04c
	if (ctx.cr6.eq) goto loc_8235F04C;
loc_8235EFE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r31,r29,-4
	r31.s64 = r29.s64 + -4;
	// bne cr6,0x8235eff8
	if (!ctx.cr6.eq) goto loc_8235EFF8;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_8235EFF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235f018
	if (ctx.cr6.eq) goto loc_8235F018;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8235f040
	if (!ctx.cr6.gt) goto loc_8235F040;
loc_8235F018:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235F034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f150
	if (!ctx.cr6.eq) goto loc_8235F150;
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
loc_8235F040:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bne cr6,0x8235efe8
	if (!ctx.cr6.eq) goto loc_8235EFE8;
loc_8235F04C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8235F054;
	sub_8233E7E0(ctx, base);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8235f0b0
	if (ctx.cr6.eq) goto loc_8235F0B0;
loc_8235F064:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235f0a4
	if (!ctx.cr6.eq) goto loc_8235F0A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e748
	ctx.lr = 0x8235F07C;
	sub_8235E748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f164
	if (!ctx.cr6.eq) goto loc_8235F164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e8f8
	ctx.lr = 0x8235F090;
	sub_8235E8F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,55
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 55, ctx.xer);
	// beq cr6,0x8235f0a4
	if (ctx.cr6.eq) goto loc_8235F0A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f158
	if (!ctx.cr6.eq) goto loc_8235F158;
loc_8235F0A4:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8235f064
	if (!ctx.cr6.eq) goto loc_8235F064;
loc_8235F0B0:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8235f144
	if (ctx.cr6.eq) goto loc_8235F144;
loc_8235F0BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235f138
	if (ctx.cr6.eq) goto loc_8235F138;
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
	// stw r23,8(r31)
	REX_STORE_U32(r31.u32 + 8, r23.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823b27b0
	ctx.lr = 0x8235F0F8;
	sub_823B27B0(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235f11c
	if (ctx.cr6.eq) goto loc_8235F11C;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,482
	ctx.r6.s64 = 482;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235F11C;
	sub_82330D00(ctx, base);
loc_8235F11C:
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,485
	ctx.r6.s64 = 485;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235F138;
	sub_82330D00(ctx, base);
loc_8235F138:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8235f0bc
	if (!ctx.cr6.eq) goto loc_8235F0BC;
loc_8235F144:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235F14C;
	sub_8233E820(ctx, base);
loc_8235F14C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235F150:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8235F158:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_8235F164:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235F16C;
	sub_8233E820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823733C0) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x823733C8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2c9c
	ctx.lr = 0x823733D0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f2.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82373540
	if (ctx.cr6.lt) goto loc_82373540;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r27,r3,600
	r27.s64 = ctx.r3.s64 + 600;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// lwz r9,1188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1188);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f31,f11
	f31.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 * ctx.f13.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x82373438
	if (!ctx.cr6.gt) goto loc_82373438;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8616(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f13,f12
	f30.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
loc_82373438:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f29,f0,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// addi r29,r1,120
	r29.s64 = ctx.r1.s64 + 120;
	// addi r30,r28,332
	r30.s64 = r28.s64 + 332;
	// addi r31,r28,636
	r31.s64 = r28.s64 + 636;
	// li r26,2
	r26.s64 = 2;
	// lfs f28,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f28.f64 = double(temp.f32);
loc_82373454:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f26,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	f26.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f25,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f25.f64 = double(temp.f32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823731b8
	ctx.lr = 0x8237349C;
	sub_823731B8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823731b8
	ctx.lr = 0x823734B8;
	sub_823731B8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f6,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// lfs f2,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f25
	ctx.f4.f64 = f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x82373260
	ctx.lr = 0x823734E4;
	sub_82373260(ctx, base);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f28
	ctx.cr6.compare(ctx.f9.f64, f28.f64);
	// beq cr6,0x82373518
	if (ctx.cr6.eq) goto loc_82373518;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82373500:
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82373500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82373500;
loc_82373518:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmuls f27,f0,f27
	f27.f64 = double(float(ctx.f0.f64 * f27.f64));
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82373454
	if (!ctx.cr0.eq) goto loc_82373454;
	// stfs f27,596(r28)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r28.u32 + 596, temp.u32);
loc_82373540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ce8
	ctx.lr = 0x82373550;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823880D0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,678(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 678);
	// lbz r10,650(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// rlwinm r9,r11,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x8238814c
	if (ctx.cr6.gt) goto loc_8238814C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82388138
	if (ctx.cr6.eq) goto loc_82388138;
	// bdz 0x82388104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82388104;
	// bdz 0x8238812c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238812C;
	// b 0x82388138
	goto loc_82388138;
loc_82388104:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r8,3,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82388120
	if (!ctx.cr6.lt) goto loc_82388120;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfic r9,r10,255
	ctx.xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.u64 = static_cast<uint64_t>(255) - ctx.r10.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
loc_82388120:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r10,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r10.u32);
	// b 0x8238814c
	goto loc_8238814C;
loc_8238812C:
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r10,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r10.u32);
	// b 0x8238814c
	goto loc_8238814C;
loc_82388138:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r10,30660
	ctx.r8.s64 = ctx.r10.s64 + 30660;
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r7.u32);
loc_8238814C:
	// lbz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 652);
	// lwz r9,476(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// srawi r10,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 6;
	// stw r10,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r10.u32);
	// lbz r7,650(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bge cr6,0x82388188
	if (!ctx.cr6.lt) goto loc_82388188;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x823881a8
	if (!ctx.cr6.gt) goto loc_823881A8;
	// subfic r10,r9,64
	ctx.xer.ca = ctx.r9.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r9.u64;
	// stw r10,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r10.u32);
	// b 0x823881a8
	goto loc_823881A8;
loc_82388188:
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8238819c
	if (!ctx.cr6.lt) goto loc_8238819C;
	// stw r9,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r9.u32);
loc_8238819C:
	// lwz r10,476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r9,476(r11)
	REX_STORE_U32(ctx.r11.u32 + 476, ctx.r9.u32);
loc_823881A8:
	// lbz r10,650(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// lbz r9,651(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 651);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stb r7,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x823881d0
	if (!ctx.cr6.gt) goto loc_823881D0;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r10,-64
	ctx.r9.s64 = ctx.r10.s64 + -64;
	// stb r9,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r9.u8);
loc_823881D0:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823939E0) {
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
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r30,r31,15544
	r30.s64 = r31.s64 + 15544;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82393A0C;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,20096
	ctx.r11.s64 = ctx.r11.s64 + 20096;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,15544(r31)
	REX_STORE_U32(r31.u32 + 15544, ctx.r11.u32);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r11,r5,14768
	ctx.r11.s64 = ctx.r5.s64 + 14768;
	// addi r10,r6,12504
	ctx.r10.s64 = ctx.r6.s64 + 12504;
	// addi r9,r7,12624
	ctx.r9.s64 = ctx.r7.s64 + 12624;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r8,14792
	ctx.r11.s64 = ctx.r8.s64 + 14792;
	// li r9,268
	ctx.r9.s64 = 268;
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8239AB08) {
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
	ctx.lr = 0x8239AB10;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x82340ff0
	ctx.lr = 0x8239AB2C;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x82340718
	ctx.lr = 0x8239AB50;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8239ab70
	if (ctx.cr6.eq) goto loc_8239AB70;
loc_8239AB64:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
loc_8239AB70:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x8239AB88;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82340718
	ctx.lr = 0x8239ABB4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// lbz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,93(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// rotlwi r11,r11,7
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 7);
	// lbz r9,94(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,95(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// rlwinm r5,r7,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r22,r11,r8
	r22.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8239ac04
	if (ctx.cr6.eq) goto loc_8239AC04;
	// addi r22,r22,10
	r22.s64 = r22.s64 + 10;
loc_8239AC04:
	// add r11,r22,r31
	ctx.r11.u64 = r22.u64 + r31.u64;
	// li r23,10
	r23.s64 = 10;
	// addi r20,r11,7
	r20.s64 = ctx.r11.s64 + 7;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r21,16
	r21.s64 = 1048576;
	// lis r25,-32129
	r25.s64 = -2105606144;
	// addi r26,r11,20432
	r26.s64 = ctx.r11.s64 + 20432;
loc_8239AC20:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// stb r24,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, r24.u8);
	// stb r24,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, r24.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stb r24,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, r24.u8);
	// stb r24,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, r24.u8);
	// stb r24,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, r24.u8);
	// bgt cr6,0x8239acb4
	if (ctx.cr6.gt) goto loc_8239ACB4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82340718
	ctx.lr = 0x8239AC58;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82340718
	ctx.lr = 0x8239AC84;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// lbz r11,93(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r28,94(r1)
	r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 94);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r28,r9,8,0,23
	r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00) | (r28.u64 & 0xFFFFFFFF000000FF);
	// b 0x8239ad68
	goto loc_8239AD68;
loc_8239ACB4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8239ad68
	if (ctx.cr6.lt) goto loc_8239AD68;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82340718
	ctx.lr = 0x8239ACD4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82340718
	ctx.lr = 0x8239AD00;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340718
	ctx.lr = 0x8239AD2C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8239ab64
	if (!ctx.cr6.eq) goto loc_8239AB64;
	// lbz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,93(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,94(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r8,95(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r28,r11,r8
	r28.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8239AD68:
	// lbz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8239ad7c
	if (ctx.cr6.lt) goto loc_8239AD7C;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8239ad84
	if (ctx.cr6.lt) goto loc_8239AD84;
loc_8239AD7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239ade0
	if (!ctx.cr6.eq) goto loc_8239ADE0;
loc_8239AD84:
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8239ad98
	if (ctx.cr6.lt) goto loc_8239AD98;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8239ada0
	if (ctx.cr6.lt) goto loc_8239ADA0;
loc_8239AD98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239ade0
	if (!ctx.cr6.eq) goto loc_8239ADE0;
loc_8239ADA0:
	// lbz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8239adb4
	if (ctx.cr6.lt) goto loc_8239ADB4;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8239adbc
	if (ctx.cr6.lt) goto loc_8239ADBC;
loc_8239ADB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239ade0
	if (!ctx.cr6.eq) goto loc_8239ADE0;
loc_8239ADBC:
	// lbz r11,103(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8239add0
	if (ctx.cr6.lt) goto loc_8239ADD0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8239add8
	if (ctx.cr6.lt) goto loc_8239ADD8;
loc_8239ADD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239ade0
	if (!ctx.cr6.eq) goto loc_8239ADE0;
loc_8239ADD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8239ade4
	goto loc_8239ADE4;
loc_8239ADE0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8239ADE4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239af00
	if (ctx.cr6.eq) goto loc_8239AF00;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8239af00
	if (ctx.cr6.eq) goto loc_8239AF00;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(r28.u32, r21.u32, ctx.xer);
	// bge cr6,0x8239af00
	if (!ctx.cr6.lt) goto loc_8239AF00;
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,699
	ctx.r6.s64 = 699;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x82330a38
	ctx.lr = 0x8239AE28;
	sub_82330A38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// beq cr6,0x8239af28
	if (ctx.cr6.eq) goto loc_8239AF28;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82340718
	ctx.lr = 0x8239AE4C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af20
	if (!ctx.cr6.eq) goto loc_8239AF20;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8239af40
	if (!ctx.cr6.eq) goto loc_8239AF40;
	// lbz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x8239aec4
	if (!ctx.cr6.eq) goto loc_8239AEC4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8239aea8
	if (ctx.cr6.gt) goto loc_8239AEA8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8239ae94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8239AE94;
	// bdzf 4*cr6+eq,0x8239ae9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8239AE9C;
	// bne cr6,0x8239aea4
	if (!ctx.cr6.eq) goto loc_8239AEA4;
	// li r29,3
	r29.s64 = 3;
	// b 0x8239aea8
	goto loc_8239AEA8;
loc_8239AE94:
	// li r29,4
	r29.s64 = 4;
	// b 0x8239aea8
	goto loc_8239AEA8;
loc_8239AE9C:
	// li r29,5
	r29.s64 = 5;
	// b 0x8239aea8
	goto loc_8239AEA8;
loc_8239AEA4:
	// li r29,6
	r29.s64 = 6;
loc_8239AEA8:
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8239AEB8;
	sub_823EF2F8(ctx, base);
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// stb r24,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, r24.u8);
loc_8239AEC4:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x8239AEE4;
	sub_8239E6B0(ctx, base);
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,750
	ctx.r6.s64 = 750;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239AF00;
	sub_82330D00(ctx, base);
loc_8239AF00:
	// add r11,r23,r28
	ctx.r11.u64 = r23.u64 + r28.u64;
	// addi r23,r11,10
	r23.s64 = ctx.r11.s64 + 10;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// blt cr6,0x8239ac20
	if (ctx.cr6.lt) goto loc_8239AC20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82340e38
	ctx.lr = 0x8239AF20;
	sub_82340E38(ctx, base);
loc_8239AF20:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
loc_8239AF28:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82340e38
	ctx.lr = 0x8239AF34;
	sub_82340E38(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
loc_8239AF40:
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,712
	ctx.r6.s64 = 712;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239AF5C;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823BE200) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10980(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BE290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823BE298;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f0,32568(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32568);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823be2fc
	if (!ctx.cr6.lt) goto loc_823BE2FC;
	// addi r31,r3,268
	r31.s64 = ctx.r3.s64 + 268;
	// li r30,8
	r30.s64 = 8;
loc_823BE2BC:
	// addi r3,r31,-224
	ctx.r3.s64 = r31.s64 + -224;
	// bl 0x823d6e30
	ctx.lr = 0x823BE2C4;
	sub_823D6E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d6e30
	ctx.lr = 0x823BE2CC;
	sub_823D6E30(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bne 0x823be2bc
	if (!ctx.cr0.eq) goto loc_823BE2BC;
	// addi r31,r29,556
	r31.s64 = r29.s64 + 556;
	// li r30,4
	r30.s64 = 4;
loc_823BE2E0:
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// bl 0x823d6eb0
	ctx.lr = 0x823BE2E8;
	sub_823D6EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d6eb0
	ctx.lr = 0x823BE2F0;
	sub_823D6EB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x823be2e0
	if (!ctx.cr0.eq) goto loc_823BE2E0;
loc_823BE2FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823C1C60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823C1C68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r11,r10,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c1ca8
	if (ctx.cr6.eq) goto loc_823C1CA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823c1ca0
	if (ctx.cr6.eq) goto loc_823C1CA0;
	// addi r31,r4,36
	r31.s64 = ctx.r4.s64 + 36;
	// b 0x823c1cb8
	goto loc_823C1CB8;
loc_823C1CA0:
	// addi r31,r4,21
	r31.s64 = ctx.r4.s64 + 21;
	// b 0x823c1cb8
	goto loc_823C1CB8;
loc_823C1CA8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r31,r4,21
	r31.s64 = ctx.r4.s64 + 21;
	// bne cr6,0x823c1cb8
	if (!ctx.cr6.eq) goto loc_823C1CB8;
	// addi r31,r4,13
	r31.s64 = ctx.r4.s64 + 13;
loc_823C1CB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-30968
	ctx.r4.s64 = ctx.r11.s64 + -30968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331620
	ctx.lr = 0x823C1CCC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c1ce0
	if (ctx.cr6.eq) goto loc_823C1CE0;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823C1CE0:
	// lbzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbzu r10,1(r31)
	ea = 1 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbzu r6,1(r31)
	ea = 1 + r31.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbzu r3,1(r31)
	ea = 1 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823c1d80
	if (ctx.cr6.eq) goto loc_823C1D80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823c1d78
	if (ctx.cr6.eq) goto loc_823C1D78;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// lbzu r5,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// lbzu r3,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823C1D78:
	// lwz r9,264(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 264);
	// stb r8,18728(r9)
	REX_STORE_U8(ctx.r9.u32 + 18728, ctx.r8.u8);
loc_823C1D80:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c1dbc
	if (ctx.cr6.eq) goto loc_823C1DBC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823c1db4
	if (ctx.cr6.eq) goto loc_823C1DB4;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C1DA4:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c1da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C1DA4;
loc_823C1DB4:
	// lwz r11,264(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 264);
	// stb r8,18729(r11)
	REX_STORE_U8(ctx.r11.u32 + 18729, ctx.r8.u8);
loc_823C1DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823CBF88) {
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
	ctx.lr = 0x823CBF90;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r10,r5,292
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(292));
	// addi r9,r5,24
	ctx.r9.s64 = ctx.r5.s64 + 24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r24,r9,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r22,2
	r22.s64 = 2;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r22,1176(r11)
	REX_STORE_U32(ctx.r11.u32 + 1176, r22.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwzx r7,r24,r8
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r7,1212(r11)
	REX_STORE_U32(ctx.r11.u32 + 1212, ctx.r7.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r29,1192(r11)
	REX_STORE_U32(ctx.r11.u32 + 1192, r29.u32);
	// addi r30,r11,1180
	r30.s64 = ctx.r11.s64 + 1180;
	// li r27,0
	r27.s64 = 0;
	// beq cr6,0x823cc020
	if (ctx.cr6.eq) goto loc_823CC020;
	// addi r23,r30,12
	r23.s64 = r30.s64 + 12;
loc_823CBFEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dce68
	ctx.lr = 0x823CC004;
	sub_823DCE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc094
	if (ctx.cr6.eq) goto loc_823CC094;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(r27.u32, r29.u32, ctx.xer);
	// stwu r11,4(r23)
	ea = 4 + r23.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r23.u32 = ea;
	// blt cr6,0x823cbfec
	if (ctx.cr6.lt) goto loc_823CBFEC;
loc_823CC020:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,-4236(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4236);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CC03C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc094
	if (ctx.cr6.eq) goto loc_823CC094;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823cc0c0
	if (ctx.cr6.lt) goto loc_823CC0C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cc0a0
	if (!ctx.cr6.eq) goto loc_823CC0A0;
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
	ctx.lr = 0x823CC080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC0A0:
	// lwz r10,6144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6144);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6144(r11)
	REX_STORE_U32(ctx.r11.u32 + 6144, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC0C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,-4232(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4232);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CC0DC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc094
	if (ctx.cr6.eq) goto loc_823CC094;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r7,r28,r10
	ctx.r7.u64 = r28.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// bge cr6,0x823cc14c
	if (!ctx.cr6.lt) goto loc_823CC14C;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r4,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// lwzx r8,r10,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cbbe8
	ctx.lr = 0x823CC144;
	sub_823CBBE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc094
	if (ctx.cr6.eq) goto loc_823CC094;
loc_823CC14C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x823cc194
	if (ctx.cr6.eq) goto loc_823CC194;
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwzx r3,r27,r10
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x823CC174;
	sub_823EF2F8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwzx r11,r9,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r8,1136(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 1136);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + r28.u64;
	// lwzx r3,r9,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + r24.u32);
	// subf r4,r29,r8
	ctx.r4.u64 = ctx.r8.u64 - r29.u64;
	// bl 0x823e0560
	ctx.lr = 0x823CC194;
	sub_823E0560(ctx, base);
loc_823CC194:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823D6AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823D6AC8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823d6ad8
	if (!ctx.cr6.gt) goto loc_823D6AD8;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823D6AD8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d6ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6AC8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D6E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D6FD0) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x823D6FD8;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2ca8
	ctx.lr = 0x823D6FE0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f30.f64 = double(temp.f32);
	// lwz r26,16(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x823d7028
	if (ctx.cr6.eq) goto loc_823D7028;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_823D7028:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f0,19812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f30,f0
	f31.f64 = double(float(f30.f64 * ctx.f0.f64));
	// bl 0x823db0c8
	ctx.lr = 0x823D7040;
	sub_823DB0C8(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d7120
	if (!ctx.cr6.gt) goto loc_823D7120;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r25,r31
	r25.u64 = r31.u64;
	// addi r24,r11,-5624
	r24.s64 = ctx.r11.s64 + -5624;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f28,f0,f30
	f28.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fsubs f29,f0,f31
	f29.f64 = double(float(ctx.f0.f64 - f31.f64));
loc_823D7070:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_823D707C:
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmuls f31,f0,f28
	f31.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x823db0c8
	ctx.lr = 0x823D7090;
	sub_823DB0C8(ctx, base);
	// subf r11,r22,r3
	ctx.r11.u64 = ctx.r3.u64 - r22.u64;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// ble cr6,0x823d70a4
	if (!ctx.cr6.gt) goto loc_823D70A4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823d70b4
	goto loc_823D70B4;
loc_823D70A4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 4);
	// bl 0x823e5e50
	ctx.lr = 0x823D70B4;
	sub_823E5E50(ctx, base);
loc_823D70B4:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(r31.s32, r26.s32, ctx.xer);
	// lfsx f10,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmadds f8,f29,f11,f0
	ctx.f8.f64 = double(float(std::fma(f29.f64, ctx.f11.f64, ctx.f0.f64)));
	// fadds f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 + f31.f64));
	// stfsu f6,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// fmadds f5,f10,f30,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f7.f64)));
	// stfsx f5,r11,r27
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// blt cr6,0x823d707c
	if (ctx.cr6.lt) goto loc_823D707C;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d7070
	if (ctx.cr6.lt) goto loc_823D7070;
loc_823D7120:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cf4
	ctx.lr = 0x823D712C;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823E06F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,13(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rldicr r8,r10,8,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,11(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r6,10(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r4,9(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rldicr r10,r5,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rldicr r5,r7,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r10,r11,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rldicr r4,r5,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rldicr r11,r3,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E2C30) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823e2c58
	if (ctx.cr6.eq) goto loc_823E2C58;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823e2c58
	if (!ctx.cr6.gt) goto loc_823E2C58;
	// li r3,-131
	ctx.r3.s64 = -131;
	// blr 
	return;
loc_823E2C58:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E43C8) {
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
	ctx.lr = 0x823E43D0;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e4588
	if (!ctx.cr6.gt) goto loc_823E4588;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r29,r6,r10
	r29.u64 = uint32_t((ctx.r10.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r6.s32 / ctx.r10.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r23,r29,2,0,29
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// neg r8,r23
	ctx.r8.s64 = static_cast<int64_t>(-r23.u64);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r12,r8,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x826a2d14
	ctx.lr = 0x823E441C;
	sub_826A2D14(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r6,r23
	ctx.r6.s64 = static_cast<int64_t>(-r23.u64);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r6,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2d14
	ctx.lr = 0x823E4434;
	sub_826A2D14(ctx, base);
	// lwz r5,0(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwux r5,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823e4494
	if (!ctx.cr6.gt) goto loc_823E4494;
	// mr r30,r24
	r30.u64 = r24.u64;
	// subf r27,r24,r9
	r27.u64 = ctx.r9.u64 - r24.u64;
loc_823E4454:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e4188
	ctx.lr = 0x823E4460;
	sub_823E4188(ctx, base);
	// stwx r3,r27,r30
	REX_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e4594
	if (ctx.cr6.eq) goto loc_823E4594;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// blt cr6,0x823e4454
	if (ctx.cr6.lt) goto loc_823E4454;
loc_823E4494:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823e4588
	if (!ctx.cr6.gt) goto loc_823E4588;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_823E44AC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x823e4528
	if (ctx.cr6.lt) goto loc_823E4528;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823E44D4:
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,12(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwzu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r3,r8
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsx f8,r30,r8
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f6,r28,r8
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f4,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfsu f3,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e44d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E44D4;
loc_823E4528:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// bge cr6,0x823e456c
	if (!ctx.cr6.lt) goto loc_823E456C;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r29
	ctx.r7.u64 = r29.u64 - ctx.r9.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 + r22.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823E4554:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e4554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4554;
loc_823E456C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// add r5,r23,r5
	ctx.r5.u64 = r23.u64 + ctx.r5.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e44ac
	if (ctx.cr6.lt) goto loc_823E44AC;
loc_823E4588:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cf0
	return;
loc_823E4594:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823ED100) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,13416(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 13416);
	// stw r11,13416(r10)
	REX_STORE_U32(ctx.r10.u32 + 13416, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED298) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827936f4
	ctx.lr = 0x823ED2B0;
	__imp__XamShowMessageBoxUI(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EDA80) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823edaa4
	if (!ctx.cr6.eq) goto loc_823EDAA4;
	// bl 0x823f01d8
	ctx.lr = 0x823EDAA4;
	sub_823F01D8(ctx, base);
loc_823EDAA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823edabc
	if (ctx.cr0.eq) goto loc_823EDABC;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x823EDABC;
	sub_823F0350(ctx, base);
loc_823EDABC:
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

DEFINE_REX_FUNC(sub_823EE910) {
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
	ctx.lr = 0x823EE918;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x823f0480
	ctx.lr = 0x823EE93C;
	sub_823F0480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ee968
	if (!ctx.cr0.eq) goto loc_823EE968;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793834
	ctx.lr = 0x823EE968;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_823EE968:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823EF960) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,19016(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 19016);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ef990
	if (ctx.cr6.eq) goto loc_823EF990;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EF990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EF990:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// addi r30,r11,332
	r30.s64 = ctx.r11.s64 + 332;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x823ef9e0
	if (!ctx.cr6.lt) goto loc_823EF9E0;
loc_823EF9B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823efa28
	if (!ctx.cr6.eq) goto loc_823EFA28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ef9cc
	if (ctx.cr6.eq) goto loc_823EF9CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EF9CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EF9CC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x823ef9b0
	if (ctx.cr6.lt) goto loc_823EF9B0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823efa28
	if (!ctx.cr6.eq) goto loc_823EFA28;
loc_823EF9E0:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r30,r11,316
	r30.s64 = ctx.r11.s64 + 316;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x823efa24
	if (!ctx.cr6.lt) goto loc_823EFA24;
loc_823EF9FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823efa18
	if (ctx.cr6.eq) goto loc_823EFA18;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823efa18
	if (ctx.cr6.eq) goto loc_823EFA18;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EFA18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EFA18:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x823ef9fc
	if (ctx.cr6.lt) goto loc_823EF9FC;
loc_823EFA24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EFA28:
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

DEFINE_REX_FUNC(sub_823F637C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F6418) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,2418(r3)
	REX_STORE_U8(ctx.r3.u32 + 2418, ctx.r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,2419(r3)
	REX_STORE_U8(ctx.r3.u32 + 2419, ctx.r10.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823f6228
	ctx.lr = 0x823F6448;
	sub_823F6228(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x823f645c
	if (!ctx.cr6.lt) goto loc_823F645C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// b 0x823f6460
	goto loc_823F6460;
loc_823F645C:
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
loc_823F6460:
	// stw r11,9504(r31)
	REX_STORE_U32(r31.u32 + 9504, ctx.r11.u32);
	// stw r30,2148(r31)
	REX_STORE_U32(r31.u32 + 2148, r30.u32);
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

DEFINE_REX_FUNC(sub_823F9470) {
	REX_FUNC_PROLOGUE();
	// b 0x823f92b8
	sub_823F92B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F9B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lha r9,9500(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 9500));
	// addi r10,r11,1230
	ctx.r10.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhzx r7,r8,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// bgt cr6,0x823f9c28
	if (ctx.cr6.gt) goto loc_823F9C28;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_823F9B90:
	// bge cr6,0x823f9bd0
	if (!ctx.cr6.lt) goto loc_823F9BD0;
	// addi r9,r10,1231
	ctx.r9.s64 = ctx.r10.s64 + 1231;
	// lwz r8,2448(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2448);
	// addi r5,r10,1230
	ctx.r5.s64 = ctx.r10.s64 + 1230;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r3
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32));
	// lhax r5,r5,r3
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + ctx.r3.u32));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823f9bd0
	if (!ctx.cr6.gt) goto loc_823F9BD0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_823F9BD0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r8,2448(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2448);
	// addi r9,r10,1230
	ctx.r9.s64 = ctx.r10.s64 + 1230;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823f9c28
	if (!ctx.cr6.gt) goto loc_823F9C28;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1230
	ctx.r8.s64 = ctx.r8.s64 + 1230;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sthx r9,r8,r3
	REX_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u16);
	// lha r9,9500(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 9500));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823f9b90
	if (!ctx.cr6.gt) goto loc_823F9B90;
loc_823F9C28:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1230
	ctx.r11.s64 = ctx.r11.s64 + 1230;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FFC48) {
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
	ctx.lr = 0x823FFC50;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bne cr6,0x823ffc9c
	if (!ctx.cr6.eq) goto loc_823FFC9C;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823FFC8C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823ffc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FFC8C;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_823FFC9C:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ffcc8
	if (ctx.cr6.eq) goto loc_823FFCC8;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// beq cr6,0x823ffcc8
	if (ctx.cr6.eq) goto loc_823FFCC8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x823ffcc8
	if (ctx.cr6.eq) goto loc_823FFCC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 1048576;
loc_823FFCC8:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ffdb0
	if (!ctx.cr0.eq) goto loc_823FFDB0;
	// rlwinm. r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ffdb0
	if (!ctx.cr0.eq) goto loc_823FFDB0;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x823ffbd0
	ctx.lr = 0x823FFCEC;
	sub_823FFBD0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x823ffd28
	if (ctx.cr0.lt) goto loc_823FFD28;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ffd0c
	if (ctx.cr6.eq) goto loc_823FFD0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x823ffd10
	goto loc_823FFD10;
loc_823FFD0C:
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823FFD10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823ffd2c
	if (ctx.cr6.eq) goto loc_823FFD2C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x823ffd30
	goto loc_823FFD30;
loc_823FFD28:
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823FFD2C:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_823FFD30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823ffd4c
	if (ctx.cr6.eq) goto loc_823FFD4C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ffd50
	goto loc_823FFD50;
loc_823FFD4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823FFD50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffd6c
	if (ctx.cr6.eq) goto loc_823FFD6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFD68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823FFD6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823ffd8c
	if (ctx.cr6.eq) goto loc_823FFD8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823FFD8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ffda8
	if (ctx.cr6.eq) goto loc_823FFDA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FFDA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FFDA8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x823ffdc4
	goto loc_823FFDC4;
loc_823FFDB0:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x823ffbd0
	ctx.lr = 0x823FFDC4;
	sub_823FFBD0(ctx, base);
loc_823FFDC4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8240A360) {
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
	ctx.lr = 0x8240A368;
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
	// beq cr6,0x8240a3a0
	if (ctx.cr6.eq) goto loc_8240A3A0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240A39C;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240A3A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240a3bc
	if (ctx.cr6.eq) goto loc_8240A3BC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240A3B8;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240A3BC:
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
	// bne 0x8240a428
	if (!ctx.cr0.eq) goto loc_8240A428;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240a430
	goto loc_8240A430;
loc_8240A428:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240A430:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240a448
	if (ctx.cr6.eq) goto loc_8240A448;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240A448;
	sub_82409A88(ctx, base);
loc_8240A448:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240a720
	if (!ctx.cr6.gt) goto loc_8240A720;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,20216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20216);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,20236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20236);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,15196(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15196);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,20208(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17280(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,20232(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20232);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// lfs f4,20228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,20224(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20224);
	ctx.f6.f64 = double(temp.f32);
loc_8240A4BC:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fadds f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8240a66c
	if (ctx.cr6.eq) goto loc_8240A66C;
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
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f31,112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// frsp f3,f31
	ctx.f3.f64 = double(float(f31.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// fmadds f2,f9,f0,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmul f2,f8,f11
	ctx.f2.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f3,f9,f11
	ctx.f3.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// frsp f30,f2
	f30.f64 = double(float(ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_8240A66C:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8240a67c
	if (ctx.cr6.lt) goto loc_8240A67C;
	// li r11,31
	ctx.r11.s64 = 31;
loc_8240A67C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a694
	if (!ctx.cr6.gt) goto loc_8240A694;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x8240a698
	if (ctx.cr6.lt) goto loc_8240A698;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8240a698
	goto loc_8240A698;
loc_8240A694:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240A698:
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240a6a8
	if (ctx.cr6.lt) goto loc_8240A6A8;
	// li r11,63
	ctx.r11.s64 = 63;
loc_8240A6A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a6c0
	if (!ctx.cr6.gt) goto loc_8240A6C0;
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// blt cr6,0x8240a6c4
	if (ctx.cr6.lt) goto loc_8240A6C4;
	// li r5,63
	ctx.r5.s64 = 63;
	// b 0x8240a6c4
	goto loc_8240A6C4;
loc_8240A6C0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240A6C4:
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240a6d4
	if (ctx.cr6.lt) goto loc_8240A6D4;
	// li r11,31
	ctx.r11.s64 = 31;
loc_8240A6D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240a6ec
	if (!ctx.cr6.gt) goto loc_8240A6EC;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x8240a6f0
	if (ctx.cr6.lt) goto loc_8240A6F0;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x8240a6f0
	goto loc_8240A6F0;
loc_8240A6EC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240A6F0:
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sthux r11,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r30.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240a4bc
	if (ctx.cr6.lt) goto loc_8240A4BC;
loc_8240A720:
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

DEFINE_REX_FUNC(sub_8241F6D8) {
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
	ctx.lr = 0x8241F6E0;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,269
	ctx.r10.s64 = 269;
	// li r23,0
	r23.s64 = 0;
	// stw r3,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r3.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r23,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r23.u32);
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r21,r23
	r21.u64 = r23.u64;
	// stw r23,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r23.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r26,r23
	r26.u64 = r23.u64;
	// stw r23,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r23.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r23.u32);
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r23,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r23.u32);
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r23.u32);
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r23.u32);
	// stw r23,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// stw r23,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq 0x82420944
	if (ctx.cr0.eq) goto loc_82420944;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r17,-32254
	r17.s64 = -2113798144;
	// addi r10,r11,-31264
	ctx.r10.s64 = ctx.r11.s64 + -31264;
	// lis r15,-32254
	r15.s64 = -2113798144;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r17,-26528
	ctx.r10.s64 = r17.s64 + -26528;
	// addi r17,r15,-26532
	r17.s64 = r15.s64 + -26532;
	// addi r15,r11,-26536
	r15.s64 = ctx.r11.s64 + -26536;
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26540
	ctx.r11.s64 = ctx.r11.s64 + -26540;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// addi r11,r10,-26544
	ctx.r11.s64 = ctx.r10.s64 + -26544;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r10,r9,-26548
	ctx.r10.s64 = ctx.r9.s64 + -26548;
	// addi r11,r7,-26552
	ctx.r11.s64 = ctx.r7.s64 + -26552;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// addi r9,r8,-26556
	ctx.r9.s64 = ctx.r8.s64 + -26556;
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r10,r6,-26560
	ctx.r10.s64 = ctx.r6.s64 + -26560;
	// addi r11,r4,15780
	ctx.r11.s64 = ctx.r4.s64 + 15780;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r10,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// addi r9,r5,-26564
	ctx.r9.s64 = ctx.r5.s64 + -26564;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r30,-32241
	r30.s64 = -2112946176;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// addi r10,r3,15788
	ctx.r10.s64 = ctx.r3.s64 + 15788;
	// addi r11,r29,-26632
	ctx.r11.s64 = r29.s64 + -26632;
	// lis r28,-32241
	r28.s64 = -2112946176;
	// stw r10,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// addi r9,r30,15800
	ctx.r9.s64 = r30.s64 + 15800;
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lis r26,-32241
	r26.s64 = -2112946176;
	// lis r27,-32241
	r27.s64 = -2112946176;
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// addi r10,r28,15808
	ctx.r10.s64 = r28.s64 + 15808;
	// addi r11,r26,15832
	ctx.r11.s64 = r26.s64 + 15832;
	// lis r25,-32241
	r25.s64 = -2112946176;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r9,r27,15820
	ctx.r9.s64 = r27.s64 + 15820;
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lis r23,-32241
	r23.s64 = -2112946176;
	// lis r24,-32241
	r24.s64 = -2112946176;
	// stw r9,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// addi r10,r25,15844
	ctx.r10.s64 = r25.s64 + 15844;
	// addi r11,r23,15864
	ctx.r11.s64 = r23.s64 + 15864;
	// lis r22,-32241
	r22.s64 = -2112946176;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r9,r24,15852
	ctx.r9.s64 = r24.s64 + 15852;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lis r21,-32241
	r21.s64 = -2112946176;
	// addi r10,r22,15872
	ctx.r10.s64 = r22.s64 + 15872;
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r31,-32241
	r31.s64 = -2112946176;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lis r20,-32241
	r20.s64 = -2112946176;
	// lis r19,-32241
	r19.s64 = -2112946176;
	// lis r18,-32254
	r18.s64 = -2113798144;
	// lis r16,-32241
	r16.s64 = -2112946176;
	// addi r9,r21,15880
	ctx.r9.s64 = r21.s64 + 15880;
	// addi r10,r11,-26636
	ctx.r10.s64 = ctx.r11.s64 + -26636;
	// lis r14,-32254
	r14.s64 = -2113798144;
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// addi r31,r31,15796
	r31.s64 = r31.s64 + 15796;
	// addi r20,r20,15896
	r20.s64 = r20.s64 + 15896;
	// addi r19,r19,15908
	r19.s64 = r19.s64 + 15908;
	// addi r18,r18,-26640
	r18.s64 = r18.s64 + -26640;
	// addi r16,r16,17828
	r16.s64 = r16.s64 + 17828;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r11,-28156
	ctx.r9.s64 = ctx.r11.s64 + -28156;
	// lwz r24,152(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r25,156(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r14,r14,-26644
	r14.s64 = r14.s64 + -26644;
	// addi r8,r11,-26648
	ctx.r8.s64 = ctx.r11.s64 + -26648;
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r22,172(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r21,180(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r23,0
	r23.s64 = 0;
	// addi r10,r11,-26652
	ctx.r10.s64 = ctx.r11.s64 + -26652;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r27,140(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// addi r11,r11,-26664
	ctx.r11.s64 = ctx.r11.s64 + -26664;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_8241F8E8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8241f904
	goto loc_8241F904;
loc_8241F8F4:
	// cmpwi cr6,r29,95
	ctx.cr6.compare<int32_t>(r29.s32, 95, ctx.xer);
	// beq cr6,0x8241f90c
	if (ctx.cr6.eq) goto loc_8241F90C;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8241F904:
	// extsb. r29,r10
	r29.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8241f8f4
	if (!ctx.cr0.eq) goto loc_8241F8F4;
loc_8241F90C:
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(r30.u32, 15, ctx.xer);
	// bgt cr6,0x82420964
	if (ctx.cr6.gt) goto loc_82420964;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1e70
	ctx.lr = 0x8241F92C;
	sub_826A1E70(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stbx r23,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r23.u8);
	// beq cr6,0x8241f948
	if (ctx.cr6.eq) goto loc_8241F948;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8241F948:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// beq cr6,0x8241fbe8
	if (ctx.cr6.eq) goto loc_8241FBE8;
	// addi r9,r27,-6120
	ctx.r9.s64 = r27.s64 + -6120;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_8241F968:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241F970:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// beq 0x8241f994
	if (ctx.cr0.eq) goto loc_8241F994;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241f970
	if (ctx.cr6.eq) goto loc_8241F970;
loc_8241F994:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241f9b0
	if (ctx.cr0.eq) goto loc_8241F9B0;
	// addi r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 + 72;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// cmplwi cr6,r7,6048
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6048, ctx.xer);
	// blt cr6,0x8241f968
	if (ctx.cr6.lt) goto loc_8241F968;
loc_8241F9B0:
	// cmplwi cr6,r6,84
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 84, ctx.xer);
	// beq cr6,0x82420964
	if (ctx.cr6.eq) goto loc_82420964;
	// lwz r8,452(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mulli r11,r6,18
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(18));
	// lwz r9,56(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r27,-6120
	ctx.r10.s64 = r27.s64 + -6120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r7,-6
	ctx.r7.s64 = -6;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8241fa4c
	if (ctx.cr6.gt) goto loc_8241FA4C;
	// cmpwi cr6,r11,-6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -6, ctx.xer);
	// beq cr6,0x8241fa44
	if (ctx.cr6.eq) goto loc_8241FA44;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8241fa38
	if (ctx.cr6.lt) goto loc_8241FA38;
	// beq cr6,0x8241fa30
	if (ctx.cr6.eq) goto loc_8241FA30;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8241fa28
	if (ctx.cr6.lt) goto loc_8241FA28;
	// beq cr6,0x8241fa20
	if (ctx.cr6.eq) goto loc_8241FA20;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8241fa18
	if (ctx.cr6.lt) goto loc_8241FA18;
	// bne cr6,0x8241fa74
	if (!ctx.cr6.eq) goto loc_8241FA74;
	// li r10,263
	ctx.r10.s64 = 263;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FA18:
	// li r10,262
	ctx.r10.s64 = 262;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FA20:
	// li r10,261
	ctx.r10.s64 = 261;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FA28:
	// li r10,260
	ctx.r10.s64 = 260;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FA30:
	// li r10,259
	ctx.r10.s64 = 259;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FA38:
	// li r10,258
	ctx.r10.s64 = 258;
loc_8241FA3C:
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x8241fa78
	goto loc_8241FA78;
loc_8241FA44:
	// li r10,268
	ctx.r10.s64 = 268;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FA4C:
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// beq cr6,0x8241fad0
	if (ctx.cr6.eq) goto loc_8241FAD0;
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// beq cr6,0x8241fac8
	if (ctx.cr6.eq) goto loc_8241FAC8;
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// beq cr6,0x8241fac0
	if (ctx.cr6.eq) goto loc_8241FAC0;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x8241fab8
	if (ctx.cr6.eq) goto loc_8241FAB8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8242096c
	if (ctx.cr6.eq) goto loc_8242096C;
loc_8241FA74:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8241FA78:
	// addi r11,r27,-6120
	ctx.r11.s64 = r27.s64 + -6120;
	// stw r23,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r23.u32);
	// mulli r7,r6,72
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(72));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// lwzx r22,r7,r11
	r22.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// blt cr6,0x8241fad8
	if (ctx.cr6.lt) goto loc_8241FAD8;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bgt cr6,0x8241fad8
	if (ctx.cr6.gt) goto loc_8241FAD8;
	// cmpwi cr6,r10,259
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 259, ctx.xer);
	// blt cr6,0x8241fad8
	if (ctx.cr6.lt) goto loc_8241FAD8;
	// cmpwi cr6,r10,263
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 263, ctx.xer);
	// bgt cr6,0x8241fad8
	if (ctx.cr6.gt) goto loc_8241FAD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x8241fadc
	goto loc_8241FADC;
loc_8241FAB8:
	// li r10,265
	ctx.r10.s64 = 265;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FAC0:
	// li r10,264
	ctx.r10.s64 = 264;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FAC8:
	// li r10,266
	ctx.r10.s64 = 266;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FAD0:
	// li r10,267
	ctx.r10.s64 = 267;
	// b 0x8241fa3c
	goto loc_8241FA3C;
loc_8241FAD8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8241FADC:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8241faec
	if (ctx.cr6.lt) goto loc_8241FAEC;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x8241fafc
	if (!ctx.cr6.gt) goto loc_8241FAFC;
loc_8241FAEC:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8241fb18
	if (ctx.cr6.lt) goto loc_8241FB18;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bgt cr6,0x8241fb18
	if (ctx.cr6.gt) goto loc_8241FB18;
loc_8241FAFC:
	// cmpwi cr6,r10,259
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 259, ctx.xer);
	// blt cr6,0x8241fb18
	if (ctx.cr6.lt) goto loc_8241FB18;
	// cmpwi cr6,r10,263
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 263, ctx.xer);
	// bgt cr6,0x8241fb18
	if (ctx.cr6.gt) goto loc_8241FB18;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// beq cr6,0x8241fb18
	if (ctx.cr6.eq) goto loc_8241FB18;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_8241FB18:
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x8241fb58
	if (ctx.cr6.lt) goto loc_8241FB58;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bgt cr6,0x8241fb34
	if (ctx.cr6.gt) goto loc_8241FB34;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// bne cr6,0x8241fb34
	if (!ctx.cr6.eq) goto loc_8241FB34;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_8241FB34:
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x8241fb58
	if (ctx.cr6.lt) goto loc_8241FB58;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bgt cr6,0x8241fb58
	if (ctx.cr6.gt) goto loc_8241FB58;
	// cmpwi cr6,r10,259
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 259, ctx.xer);
	// blt cr6,0x8241fb58
	if (ctx.cr6.lt) goto loc_8241FB58;
	// cmpwi cr6,r10,263
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 263, ctx.xer);
	// bgt cr6,0x8241fb58
	if (ctx.cr6.gt) goto loc_8241FB58;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_8241FB58:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8241fb68
	if (ctx.cr6.lt) goto loc_8241FB68;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x8241fb78
	if (!ctx.cr6.gt) goto loc_8241FB78;
loc_8241FB68:
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x8241fb84
	if (ctx.cr6.lt) goto loc_8241FB84;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bgt cr6,0x8241fb84
	if (ctx.cr6.gt) goto loc_8241FB84;
loc_8241FB78:
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// bne cr6,0x8241fb84
	if (!ctx.cr6.eq) goto loc_8241FB84;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_8241FB84:
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// blt cr6,0x8241fba0
	if (ctx.cr6.lt) goto loc_8241FBA0;
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bgt cr6,0x8241fba0
	if (ctx.cr6.gt) goto loc_8241FBA0;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// bne cr6,0x8241fba0
	if (!ctx.cr6.eq) goto loc_8241FBA0;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_8241FBA0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8241fbbc
	if (ctx.cr6.lt) goto loc_8241FBBC;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bgt cr6,0x8241fbbc
	if (ctx.cr6.gt) goto loc_8241FBBC;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// bne cr6,0x8241fbbc
	if (!ctx.cr6.eq) goto loc_8241FBBC;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_8241FBBC:
	// cmplwi cr6,r22,40
	ctx.cr6.compare<uint32_t>(r22.u32, 40, ctx.xer);
	// beq cr6,0x8241fbd4
	if (ctx.cr6.eq) goto loc_8241FBD4;
	// cmplwi cr6,r22,44
	ctx.cr6.compare<uint32_t>(r22.u32, 44, ctx.xer);
	// beq cr6,0x8241fbd4
	if (ctx.cr6.eq) goto loc_8241FBD4;
	// cmplwi cr6,r22,94
	ctx.cr6.compare<uint32_t>(r22.u32, 94, ctx.xer);
	// bne cr6,0x8241fbdc
	if (!ctx.cr6.eq) goto loc_8241FBDC;
loc_8241FBD4:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_8241FBDC:
	// li r11,2024
	ctx.r11.s64 = 2024;
	// stw r11,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// b 0x824208b0
	goto loc_824208B0;
loc_8241FBE8:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241fc38
	if (ctx.cr6.eq) goto loc_8241FC38;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FBFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fc20
	if (ctx.cr0.eq) goto loc_8241FC20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fbfc
	if (ctx.cr6.eq) goto loc_8241FBFC;
loc_8241FC20:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fc38
	if (!ctx.cr0.eq) goto loc_8241FC38;
	// oris r21,r21,16
	r21.u64 = r21.u64 | 1048576;
	// stw r23,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r23.u32);
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r23.u32);
	// b 0x824208ac
	goto loc_824208AC;
loc_8241FC38:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241fc84
	if (ctx.cr6.eq) goto loc_8241FC84;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FC4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fc70
	if (ctx.cr0.eq) goto loc_8241FC70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fc4c
	if (ctx.cr6.eq) goto loc_8241FC4C;
loc_8241FC70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fc84
	if (!ctx.cr0.eq) goto loc_8241FC84;
	// oris r21,r21,64
	r21.u64 = r21.u64 | 4194304;
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r23.u32);
	// b 0x824208ac
	goto loc_824208AC;
loc_8241FC84:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241fdfc
	if (ctx.cr6.eq) goto loc_8241FDFC;
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FC98:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fcbc
	if (ctx.cr0.eq) goto loc_8241FCBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fc98
	if (ctx.cr6.eq) goto loc_8241FC98;
loc_8241FCBC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fccc
	if (!ctx.cr0.eq) goto loc_8241FCCC;
	// lis r21,768
	r21.s64 = 50331648;
	// b 0x8241fdf4
	goto loc_8241FDF4;
loc_8241FCCC:
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FCD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fcf8
	if (ctx.cr0.eq) goto loc_8241FCF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fcd4
	if (ctx.cr6.eq) goto loc_8241FCD4;
loc_8241FCF8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fd08
	if (!ctx.cr0.eq) goto loc_8241FD08;
	// lis r21,512
	r21.s64 = 33554432;
	// b 0x8241fdf4
	goto loc_8241FDF4;
loc_8241FD08:
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FD10:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fd34
	if (ctx.cr0.eq) goto loc_8241FD34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fd10
	if (ctx.cr6.eq) goto loc_8241FD10;
loc_8241FD34:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fd44
	if (!ctx.cr0.eq) goto loc_8241FD44;
	// lis r21,256
	r21.s64 = 16777216;
	// b 0x8241fdf4
	goto loc_8241FDF4;
loc_8241FD44:
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FD4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fd70
	if (ctx.cr0.eq) goto loc_8241FD70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fd4c
	if (ctx.cr6.eq) goto loc_8241FD4C;
loc_8241FD70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fd80
	if (!ctx.cr0.eq) goto loc_8241FD80;
	// lis r21,3840
	r21.s64 = 251658240;
	// b 0x8241fdf4
	goto loc_8241FDF4;
loc_8241FD80:
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FD88:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fdac
	if (ctx.cr0.eq) goto loc_8241FDAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fd88
	if (ctx.cr6.eq) goto loc_8241FD88;
loc_8241FDAC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fdbc
	if (!ctx.cr0.eq) goto loc_8241FDBC;
	// lis r21,3584
	r21.s64 = 234881024;
	// b 0x8241fdf4
	goto loc_8241FDF4;
loc_8241FDBC:
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FDC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fde8
	if (ctx.cr0.eq) goto loc_8241FDE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fdc4
	if (ctx.cr6.eq) goto loc_8241FDC4;
loc_8241FDE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420964
	if (!ctx.cr0.eq) goto loc_82420964;
	// lis r21,3328
	r21.s64 = 218103808;
loc_8241FDF4:
	// stw r23,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r23.u32);
	// b 0x824208ac
	goto loc_824208AC;
loc_8241FDFC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8241fed4
	if (ctx.cr6.eq) goto loc_8241FED4;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FE10:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8241fe34
	if (ctx.cr0.eq) goto loc_8241FE34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fe10
	if (ctx.cr6.eq) goto loc_8241FE10;
loc_8241FE34:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fe44
	if (!ctx.cr0.eq) goto loc_8241FE44;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// b 0x8241feb8
	goto loc_8241FEB8;
loc_8241FE44:
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FE4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8241fe70
	if (ctx.cr0.eq) goto loc_8241FE70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fe4c
	if (ctx.cr6.eq) goto loc_8241FE4C;
loc_8241FE70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241fe80
	if (!ctx.cr0.eq) goto loc_8241FE80;
	// lis r8,6144
	ctx.r8.s64 = 402653184;
	// b 0x8241feb8
	goto loc_8241FEB8;
loc_8241FE80:
	// lwz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FE88:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8241feac
	if (ctx.cr0.eq) goto loc_8241FEAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fe88
	if (ctx.cr6.eq) goto loc_8241FE88;
loc_8241FEAC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241feb8
	if (!ctx.cr0.eq) goto loc_8241FEB8;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
loc_8241FEB8:
	// mr r25,r23
	r25.u64 = r23.u64;
	// or r26,r8,r26
	r26.u64 = ctx.r8.u64 | r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8241fed4
	if (ctx.cr6.eq) goto loc_8241FED4;
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r23,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// b 0x824208ac
	goto loc_824208AC;
loc_8241FED4:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241ff20
	if (ctx.cr6.eq) goto loc_8241FF20;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FEE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241ff0c
	if (ctx.cr0.eq) goto loc_8241FF0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fee8
	if (ctx.cr6.eq) goto loc_8241FEE8;
loc_8241FF0C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241ff20
	if (!ctx.cr0.eq) goto loc_8241FF20;
	// oris r21,r21,32
	r21.u64 = r21.u64 | 2097152;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// b 0x824208ac
	goto loc_824208AC;
loc_8241FF20:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82420348
	if (ctx.cr6.eq) goto loc_82420348;
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// b 0x8241ff50
	goto loc_8241FF50;
loc_8241FF38:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x8241FF44;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241ff58
	if (ctx.cr0.eq) goto loc_8241FF58;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_8241FF50:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8241ff38
	if (!ctx.cr0.eq) goto loc_8241FF38;
loc_8241FF58:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241ff74
	if (ctx.cr0.eq) goto loc_8241FF74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a08a0
	ctx.lr = 0x8241FF6C;
	sub_826A08A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8241ff78
	goto loc_8241FF78;
loc_8241FF74:
	// mr r27,r23
	r27.u64 = r23.u64;
loc_8241FF78:
	// cmplwi cr6,r27,15
	ctx.cr6.compare<uint32_t>(r27.u32, 15, ctx.xer);
	// bgt cr6,0x82420344
	if (ctx.cr6.gt) goto loc_82420344;
	// lbz r29,0(r30)
	r29.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x8241ff98
	if (ctx.cr0.eq) goto loc_8241FF98;
	// stb r23,0(r30)
	REX_STORE_U8(r30.u32 + 0, r23.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8241FF98:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x8241ffb0
	goto loc_8241FFB0;
loc_8241FFA0:
	// bl 0x826a0820
	ctx.lr = 0x8241FFA4;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241ffb8
	if (ctx.cr0.eq) goto loc_8241FFB8;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_8241FFB0:
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8241ffa0
	if (!ctx.cr0.eq) goto loc_8241FFA0;
loc_8241FFB8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8242033c
	if (!ctx.cr0.eq) goto loc_8242033C;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8241FFCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241fff0
	if (ctx.cr0.eq) goto loc_8241FFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241ffcc
	if (ctx.cr6.eq) goto loc_8241FFCC;
loc_8241FFF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420028
	if (!ctx.cr0.eq) goto loc_82420028;
loc_8241FFF8:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8242033c
	if (ctx.cr6.eq) goto loc_8242033C;
loc_82420004:
	// rlwinm r10,r27,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xF0000;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwz r27,140(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r25,r23
	r25.u64 = r23.u64;
	// stw r23,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r26,r11,r26
	r26.u64 = ctx.r11.u64 | r26.u64;
	// b 0x824208ac
	goto loc_824208AC;
loc_82420028:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420030:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420054
	if (ctx.cr0.eq) goto loc_82420054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420030
	if (ctx.cr6.eq) goto loc_82420030;
loc_82420054:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420064
	if (!ctx.cr0.eq) goto loc_82420064;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82420004
	goto loc_82420004;
loc_82420064:
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8242006C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420090
	if (ctx.cr0.eq) goto loc_82420090;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8242006c
	if (ctx.cr6.eq) goto loc_8242006C;
loc_82420090:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824200a0
	if (!ctx.cr0.eq) goto loc_824200A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82420004
	goto loc_82420004;
loc_824200A0:
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824200A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824200cc
	if (ctx.cr0.eq) goto loc_824200CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824200a8
	if (ctx.cr6.eq) goto loc_824200A8;
loc_824200CC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824200dc
	if (!ctx.cr0.eq) goto loc_824200DC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82420004
	goto loc_82420004;
loc_824200DC:
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824200E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420108
	if (ctx.cr0.eq) goto loc_82420108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824200e4
	if (ctx.cr6.eq) goto loc_824200E4;
loc_82420108:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420118
	if (!ctx.cr0.eq) goto loc_82420118;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82420004
	goto loc_82420004;
loc_82420118:
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420120:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420144
	if (ctx.cr0.eq) goto loc_82420144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420120
	if (ctx.cr6.eq) goto loc_82420120;
loc_82420144:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420154
	if (!ctx.cr0.eq) goto loc_82420154;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82420004
	goto loc_82420004;
loc_82420154:
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8242015C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420180
	if (ctx.cr0.eq) goto loc_82420180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8242015c
	if (ctx.cr6.eq) goto loc_8242015C;
loc_82420180:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420190
	if (!ctx.cr0.eq) goto loc_82420190;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82420004
	goto loc_82420004;
loc_82420190:
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420198:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824201bc
	if (ctx.cr0.eq) goto loc_824201BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420198
	if (ctx.cr6.eq) goto loc_82420198;
loc_824201BC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824201cc
	if (!ctx.cr0.eq) goto loc_824201CC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82420004
	goto loc_82420004;
loc_824201CC:
	// lwz r10,216(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824201D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824201f8
	if (ctx.cr0.eq) goto loc_824201F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824201d4
	if (ctx.cr6.eq) goto loc_824201D4;
loc_824201F8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420208
	if (!ctx.cr0.eq) goto loc_82420208;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82420004
	goto loc_82420004;
loc_82420208:
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420210:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420234
	if (ctx.cr0.eq) goto loc_82420234;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420210
	if (ctx.cr6.eq) goto loc_82420210;
loc_82420234:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242024c
	if (!ctx.cr0.eq) goto loc_8242024C;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,452(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x8241f690
	ctx.lr = 0x82420248;
	sub_8241F690(ctx, base);
	// b 0x8241fff8
	goto loc_8241FFF8;
loc_8242024C:
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420254:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420278
	if (ctx.cr0.eq) goto loc_82420278;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420254
	if (ctx.cr6.eq) goto loc_82420254;
loc_82420278:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420288
	if (!ctx.cr0.eq) goto loc_82420288;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82420004
	goto loc_82420004;
loc_82420288:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420290:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824202b4
	if (ctx.cr0.eq) goto loc_824202B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420290
	if (ctx.cr6.eq) goto loc_82420290;
loc_824202B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824202c4
	if (!ctx.cr0.eq) goto loc_824202C4;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82420004
	goto loc_82420004;
loc_824202C4:
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824202CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824202f0
	if (ctx.cr0.eq) goto loc_824202F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824202cc
	if (ctx.cr6.eq) goto loc_824202CC;
loc_824202F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420300
	if (!ctx.cr0.eq) goto loc_82420300;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82420004
	goto loc_82420004;
loc_82420300:
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420308:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242032c
	if (ctx.cr0.eq) goto loc_8242032C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420308
	if (ctx.cr6.eq) goto loc_82420308;
loc_8242032C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242033c
	if (!ctx.cr0.eq) goto loc_8242033C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82420004
	goto loc_82420004;
loc_8242033C:
	// stb r29,0(r28)
	REX_STORE_U8(r28.u32 + 0, r29.u8);
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82420344:
	// lwz r27,140(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_82420348:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82420738
	if (ctx.cr6.eq) goto loc_82420738;
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// b 0x82420374
	goto loc_82420374;
loc_8242035C:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x82420368;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8242037c
	if (ctx.cr0.eq) goto loc_8242037C;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_82420374:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8242035c
	if (!ctx.cr0.eq) goto loc_8242035C;
loc_8242037C:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420398
	if (ctx.cr0.eq) goto loc_82420398;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a08a0
	ctx.lr = 0x82420390;
	sub_826A08A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8242039c
	goto loc_8242039C;
loc_82420398:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8242039C:
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(r29.u32, 15, ctx.xer);
	// bgt cr6,0x82420964
	if (ctx.cr6.gt) goto loc_82420964;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824203b8
	if (ctx.cr0.eq) goto loc_824203B8;
	// stb r23,0(r30)
	REX_STORE_U8(r30.u32 + 0, r23.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_824203B8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x824203d0
	goto loc_824203D0;
loc_824203C0:
	// bl 0x826a0820
	ctx.lr = 0x824203C4;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824203d8
	if (ctx.cr0.eq) goto loc_824203D8;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_824203D0:
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824203c0
	if (!ctx.cr0.eq) goto loc_824203C0;
loc_824203D8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82420964
	if (!ctx.cr0.eq) goto loc_82420964;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824203EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420410
	if (ctx.cr0.eq) goto loc_82420410;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824203ec
	if (ctx.cr6.eq) goto loc_824203EC;
loc_82420410:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420420
	if (!ctx.cr0.eq) goto loc_82420420;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x82420720
	goto loc_82420720;
loc_82420420:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420428:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242044c
	if (ctx.cr0.eq) goto loc_8242044C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420428
	if (ctx.cr6.eq) goto loc_82420428;
loc_8242044C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242045c
	if (!ctx.cr0.eq) goto loc_8242045C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82420720
	goto loc_82420720;
loc_8242045C:
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420464:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420488
	if (ctx.cr0.eq) goto loc_82420488;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420464
	if (ctx.cr6.eq) goto loc_82420464;
loc_82420488:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420498
	if (!ctx.cr0.eq) goto loc_82420498;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82420720
	goto loc_82420720;
loc_82420498:
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824204A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824204c4
	if (ctx.cr0.eq) goto loc_824204C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824204a0
	if (ctx.cr6.eq) goto loc_824204A0;
loc_824204C4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824204d4
	if (!ctx.cr0.eq) goto loc_824204D4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82420720
	goto loc_82420720;
loc_824204D4:
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824204DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420500
	if (ctx.cr0.eq) goto loc_82420500;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824204dc
	if (ctx.cr6.eq) goto loc_824204DC;
loc_82420500:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420510
	if (!ctx.cr0.eq) goto loc_82420510;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82420720
	goto loc_82420720;
loc_82420510:
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420518:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242053c
	if (ctx.cr0.eq) goto loc_8242053C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420518
	if (ctx.cr6.eq) goto loc_82420518;
loc_8242053C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242054c
	if (!ctx.cr0.eq) goto loc_8242054C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82420720
	goto loc_82420720;
loc_8242054C:
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420554:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420578
	if (ctx.cr0.eq) goto loc_82420578;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420554
	if (ctx.cr6.eq) goto loc_82420554;
loc_82420578:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420588
	if (!ctx.cr0.eq) goto loc_82420588;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82420720
	goto loc_82420720;
loc_82420588:
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420590:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824205b4
	if (ctx.cr0.eq) goto loc_824205B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420590
	if (ctx.cr6.eq) goto loc_82420590;
loc_824205B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824205c4
	if (!ctx.cr0.eq) goto loc_824205C4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82420720
	goto loc_82420720;
loc_824205C4:
	// lwz r10,216(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824205CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824205f0
	if (ctx.cr0.eq) goto loc_824205F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824205cc
	if (ctx.cr6.eq) goto loc_824205CC;
loc_824205F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420600
	if (!ctx.cr0.eq) goto loc_82420600;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82420720
	goto loc_82420720;
loc_82420600:
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420608:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242062c
	if (ctx.cr0.eq) goto loc_8242062C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420608
	if (ctx.cr6.eq) goto loc_82420608;
loc_8242062C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8242097c
	if (ctx.cr0.eq) goto loc_8242097C;
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8242063C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420660
	if (ctx.cr0.eq) goto loc_82420660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8242063c
	if (ctx.cr6.eq) goto loc_8242063C;
loc_82420660:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420670
	if (!ctx.cr0.eq) goto loc_82420670;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82420720
	goto loc_82420720;
loc_82420670:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420678:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242069c
	if (ctx.cr0.eq) goto loc_8242069C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420678
	if (ctx.cr6.eq) goto loc_82420678;
loc_8242069C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824206ac
	if (!ctx.cr0.eq) goto loc_824206AC;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82420720
	goto loc_82420720;
loc_824206AC:
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824206B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824206d8
	if (ctx.cr0.eq) goto loc_824206D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824206b4
	if (ctx.cr6.eq) goto loc_824206B4;
loc_824206D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824206e8
	if (!ctx.cr0.eq) goto loc_824206E8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82420720
	goto loc_82420720;
loc_824206E8:
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824206F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420714
	if (ctx.cr0.eq) goto loc_82420714;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824206f0
	if (ctx.cr6.eq) goto loc_824206F0;
loc_82420714:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420964
	if (!ctx.cr0.eq) goto loc_82420964;
	// li r11,13
	ctx.r11.s64 = 13;
loc_82420720:
	// rlwinm r10,r29,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xF0000;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mr r24,r23
	r24.u64 = r23.u64;
	// or r26,r10,r11
	r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// b 0x824208ac
	goto loc_824208AC;
loc_82420738:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82420964
	if (ctx.cr6.eq) goto loc_82420964;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420748:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242076c
	if (ctx.cr0.eq) goto loc_8242076C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420748
	if (ctx.cr6.eq) goto loc_82420748;
loc_8242076C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242077c
	if (!ctx.cr0.eq) goto loc_8242077C;
	// li r26,1
	r26.s64 = 1;
	// b 0x824208a4
	goto loc_824208A4;
loc_8242077C:
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420784:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824207a8
	if (ctx.cr0.eq) goto loc_824207A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420784
	if (ctx.cr6.eq) goto loc_82420784;
loc_824207A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824207b8
	if (!ctx.cr0.eq) goto loc_824207B8;
	// li r26,2
	r26.s64 = 2;
	// b 0x824208a4
	goto loc_824208A4;
loc_824207B8:
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824207C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824207e4
	if (ctx.cr0.eq) goto loc_824207E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824207c0
	if (ctx.cr6.eq) goto loc_824207C0;
loc_824207E4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824207f4
	if (!ctx.cr0.eq) goto loc_824207F4;
	// li r26,3
	r26.s64 = 3;
	// b 0x824208a4
	goto loc_824208A4;
loc_824207F4:
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_824207FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420820
	if (ctx.cr0.eq) goto loc_82420820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824207fc
	if (ctx.cr6.eq) goto loc_824207FC;
loc_82420820:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420830
	if (!ctx.cr0.eq) goto loc_82420830;
	// li r26,4
	r26.s64 = 4;
	// b 0x824208a4
	goto loc_824208A4;
loc_82420830:
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420838:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8242085c
	if (ctx.cr0.eq) goto loc_8242085C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420838
	if (ctx.cr6.eq) goto loc_82420838;
loc_8242085C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242086c
	if (!ctx.cr0.eq) goto loc_8242086C;
	// li r26,5
	r26.s64 = 5;
	// b 0x824208a4
	goto loc_824208A4;
loc_8242086C:
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82420874:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420898
	if (ctx.cr0.eq) goto loc_82420898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420874
	if (ctx.cr6.eq) goto loc_82420874;
loc_82420898:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420964
	if (!ctx.cr0.eq) goto loc_82420964;
	// li r26,6
	r26.s64 = 6;
loc_824208A4:
	// mr r28,r23
	r28.u64 = r23.u64;
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r23.u32);
loc_824208AC:
	// lwz r8,452(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
loc_824208B0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8241f8e8
	if (!ctx.cr0.eq) goto loc_8241F8E8;
	// cmplwi cr6,r22,40
	ctx.cr6.compare<uint32_t>(r22.u32, 40, ctx.xer);
	// bne cr6,0x824208f8
	if (!ctx.cr6.eq) goto loc_824208F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8242093c
	if (!ctx.cr6.eq) goto loc_8242093C;
	// lwz r10,56(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// addi r11,r27,-72
	ctx.r11.s64 = r27.s64 + -72;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82420964
	if (ctx.cr6.eq) goto loc_82420964;
	// li r11,268
	ctx.r11.s64 = 268;
	// li r22,41
	r22.s64 = 41;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_824208F8:
	// cmplwi cr6,r22,44
	ctx.cr6.compare<uint32_t>(r22.u32, 44, ctx.xer);
	// bne cr6,0x8242092c
	if (!ctx.cr6.eq) goto loc_8242092C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8242093c
	if (!ctx.cr6.eq) goto loc_8242093C;
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// addi r10,r27,8
	ctx.r10.s64 = r27.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82420964
	if (ctx.cr6.eq) goto loc_82420964;
	// li r11,268
	ctx.r11.s64 = 268;
	// li r22,45
	r22.s64 = 45;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8242092C:
	// cmplwi cr6,r22,94
	ctx.cr6.compare<uint32_t>(r22.u32, 94, ctx.xer);
	// bne cr6,0x8242093c
	if (!ctx.cr6.eq) goto loc_8242093C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82420964
	if (!ctx.cr6.eq) goto loc_82420964;
loc_8242093C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82420964
	if (!ctx.cr6.eq) goto loc_82420964;
loc_82420944:
	// lwz r11,452(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r22.u32);
	// stw r21,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r21.u32);
	// stw r26,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r26.u32);
	// stw r23,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r23.u32);
loc_8242095C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_82420964:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x8242095c
	goto loc_8242095C;
loc_8242096C:
	// li r11,2023
	ctx.r11.s64 = 2023;
	// li r3,269
	ctx.r3.s64 = 269;
	// stw r11,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// b 0x8242095c
	goto loc_8242095C;
loc_8242097C:
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,452(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x8241f690
	ctx.lr = 0x82420988;
	sub_8241F690(ctx, base);
	// b 0x82420964
	goto loc_82420964;
}

DEFINE_REX_FUNC(sub_824B43F0) {
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
	ctx.lr = 0x824B43F8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r4,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// li r20,0
	r20.s64 = 0;
	// stw r5,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r5.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// std r20,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r20.u64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r20.u32);
	// mr r17,r20
	r17.u64 = r20.u64;
	// mr r14,r20
	r14.u64 = r20.u64;
	// beq cr6,0x824b4abc
	if (ctx.cr6.eq) goto loc_824B4ABC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,29392
	ctx.r10.s64 = 1926234112;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// ori r16,r10,3
	r16.u64 = ctx.r10.u64 | 3;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824B444C:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b4aa8
	if (ctx.cr6.eq) goto loc_824B4AA8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// rlwinm r7,r9,0,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r10,r9,12
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne cr6,0x824b4478
	if (!ctx.cr6.eq) goto loc_824B4478;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824B4478:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bne cr6,0x824b4aa8
	if (!ctx.cr6.eq) goto loc_824B4AA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,4352
	ctx.r8.s64 = 285212672;
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824b4aa8
	if (ctx.cr6.eq) goto loc_824B4AA8;
	// mr r21,r20
	r21.u64 = r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b45a0
	if (ctx.cr6.eq) goto loc_824B45A0;
	// lwz r23,8(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r24,r9,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,548(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 548);
	// mr r31,r20
	r31.u64 = r20.u64;
	// lwz r26,560(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 560);
	// mr r22,r19
	r22.u64 = r19.u64;
loc_824B44B8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r6,r24,r23
	ctx.r6.u64 = r24.u64 + r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824b3ae0
	ctx.lr = 0x824B44D4;
	sub_824B3AE0(ctx, base);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwx r30,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r30.u32);
	// beq 0x824b4584
	if (ctx.cr0.eq) goto loc_824B4584;
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824b4584
	if (!ctx.cr6.eq) goto loc_824B4584;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// add r29,r31,r11
	r29.u64 = r31.u64 + ctx.r11.u64;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824b3c28
	ctx.lr = 0x824B4528;
	sub_824B3C28(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// add r28,r31,r11
	r28.u64 = r31.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824b3c28
	ctx.lr = 0x824B455C;
	sub_824B3C28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r17,96(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// beq cr6,0x824b4584
	if (ctx.cr6.eq) goto loc_824B4584;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b4584
	if (!ctx.cr6.eq) goto loc_824B4584;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x824b4588
	if (!ctx.cr6.eq) goto loc_824B4588;
loc_824B4584:
	// li r21,1
	r21.s64 = 1;
loc_824B4588:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x824b44b8
	if (!ctx.cr0.eq) goto loc_824B44B8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824b4aa8
	if (!ctx.cr6.eq) goto loc_824B4AA8;
loc_824B45A0:
	// mr r24,r20
	r24.u64 = r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b4804
	if (ctx.cr6.eq) goto loc_824B4804;
	// li r26,-4
	r26.s64 = -4;
loc_824B45B0:
	// lwz r29,76(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 76);
	// lwz r27,552(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 552);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bge cr6,0x824b468c
	if (!ctx.cr6.lt) goto loc_824B468C;
	// lwz r10,564(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 564);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824B45CC:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824b467c
	if (ctx.cr6.eq) goto loc_824B467C;
	// lwz r5,0(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b467c
	if (ctx.cr6.eq) goto loc_824B467C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b467c
	if (ctx.cr6.eq) goto loc_824B467C;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,4(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, ctx.xer);
	// bne cr6,0x824b4608
	if (!ctx.cr6.eq) goto loc_824B4608;
	// li r30,6
	r30.s64 = 6;
loc_824B4608:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x824b467c
	if (!ctx.cr6.lt) goto loc_824B467C;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_824B461C:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824b466c
	if (ctx.cr6.eq) goto loc_824B466C;
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_824B4638:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b4b00
	if (ctx.cr6.eq) goto loc_824B4B00;
	// lwz r23,20(r25)
	r23.u64 = REX_LOAD_U32(r25.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b4b00
	if (ctx.cr6.eq) goto loc_824B4B00;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824b4638
	if (ctx.cr6.lt) goto loc_824B4638;
loc_824B466C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x824b461c
	if (ctx.cr6.lt) goto loc_824B461C;
loc_824B467C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x824b45cc
	if (ctx.cr6.lt) goto loc_824B45CC;
loc_824B468C:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// blt cr6,0x824b46bc
	if (ctx.cr6.lt) goto loc_824B46BC;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824b4b14
	if (!ctx.cr6.gt) goto loc_824B4B14;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b4b14
	if (!ctx.cr6.eq) goto loc_824B4B14;
loc_824B46BC:
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// lwzx r10,r26,r10
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	// lwzx r9,r26,r9
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824b4b30
	if (!ctx.cr6.eq) goto loc_824B4B30;
	// addi r9,r1,188
	ctx.r9.s64 = ctx.r1.s64 + 188;
	// lwzx r9,r26,r9
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b4720
	if (ctx.cr6.eq) goto loc_824B4720;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b4b40
	if (!ctx.cr6.eq) goto loc_824B4B40;
loc_824B4720:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824B4728;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b4738
	if (ctx.cr0.eq) goto loc_824B4738;
	// bl 0x824773d0
	ctx.lr = 0x824B4734;
	sub_824773D0(ctx, base);
	// b 0x824b473c
	goto loc_824B473C;
loc_824B4738:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_824B473C:
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x824b4b50
	if (ctx.cr6.eq) goto loc_824B4B50;
	// addi r11,r19,-1
	ctx.r11.s64 = r19.s64 + -1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824b47c8
	if (!ctx.cr6.eq) goto loc_824B47C8;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bne cr6,0x824b4780
	if (!ctx.cr6.eq) goto loc_824B4780;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bne cr6,0x824b4b5c
	if (!ctx.cr6.eq) goto loc_824B4B5C;
	// lis r4,29344
	ctx.r4.s64 = 1923088384;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x824b47e0
	goto loc_824B47E0;
loc_824B4780:
	// lis r10,29376
	ctx.r10.s64 = 1925185536;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b47a4
	if (!ctx.cr6.eq) goto loc_824B47A4;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bne cr6,0x824b4b5c
	if (!ctx.cr6.eq) goto loc_824B4B5C;
	// lis r4,29328
	ctx.r4.s64 = 1922039808;
loc_824B479C:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x824b47dc
	goto loc_824B47DC;
loc_824B47A4:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(r19.u32, 1, ctx.xer);
	// bne cr6,0x824b47b4
	if (!ctx.cr6.eq) goto loc_824B47B4;
	// lis r4,29360
	ctx.r4.s64 = 1924136960;
	// b 0x824b479c
	goto loc_824B479C;
loc_824B47B4:
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// lis r4,29264
	ctx.r4.s64 = 1917845504;
	// beq cr6,0x824b479c
	if (ctx.cr6.eq) goto loc_824B479C;
	// lis r4,29232
	ctx.r4.s64 = 1915748352;
	// b 0x824b479c
	goto loc_824B479C;
loc_824B47C8:
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// lis r4,29248
	ctx.r4.s64 = 1916796928;
	// beq cr6,0x824b47d8
	if (ctx.cr6.eq) goto loc_824B47D8;
	// lis r4,29216
	ctx.r4.s64 = 1914699776;
loc_824B47D8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824B47DC:
	// li r5,6
	ctx.r5.s64 = 6;
loc_824B47E0:
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82477b60
	ctx.lr = 0x824B47EC;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824b4ac0
	if (ctx.cr0.lt) goto loc_824B4AC0;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(r24.u32, r19.u32, ctx.xer);
	// blt cr6,0x824b45b0
	if (ctx.cr6.lt) goto loc_824B45B0;
loc_824B4804:
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b4960
	if (ctx.cr6.eq) goto loc_824B4960;
loc_824B4810:
	// mr r27,r20
	r27.u64 = r20.u64;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,12
	r30.s64 = 12;
loc_824B481C:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r28,r30,-12
	r28.s64 = r30.s64 + -12;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r31,r29,r9
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// lwzx r10,r29,r8
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r7,r28
	REX_STORE_U32(ctx.r7.u32 + r28.u32, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r11,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r4,128(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 128);
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r11,r10
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r23,r9,r10
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82478758
	ctx.lr = 0x824B48A8;
	sub_82478758(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// lwzx r24,r7,r10
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stwx r9,r8,r30
	REX_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824780d8
	ctx.lr = 0x824B48E4;
	sub_824780D8(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,2,10,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r28,60(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 60);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x824780d8
	ctx.lr = 0x824B490C;
	sub_824780D8(ctx, base);
	// stw r27,16(r24)
	REX_STORE_U32(r24.u32 + 16, r27.u32);
	// stw r28,60(r24)
	REX_STORE_U32(r24.u32 + 60, r28.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, ctx.xer);
	// bne cr6,0x824b4944
	if (!ctx.cr6.eq) goto loc_824B4944;
	// addi r10,r19,-1
	ctx.r10.s64 = r19.s64 + -1;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b4944
	if (!ctx.cr6.eq) goto loc_824B4944;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r30,12
	ctx.r11.s64 = r30.s64 + 12;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_824B4944:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// blt cr6,0x824b481c
	if (ctx.cr6.lt) goto loc_824B481C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(r26.u32, r19.u32, ctx.xer);
	// blt cr6,0x824b4810
	if (ctx.cr6.lt) goto loc_824B4810;
loc_824B4960:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,-4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
loc_824B497C:
	// lwz r9,0(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824b497c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B497C;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b49cc
	if (ctx.cr6.eq) goto loc_824B49CC;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
loc_824B49A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r15
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r15.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824b4b8c
	if (!ctx.cr6.eq) goto loc_824B4B8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// blt cr6,0x824b49a8
	if (ctx.cr6.lt) goto loc_824B49A8;
loc_824B49CC:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r9,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b4b64
	if (ctx.cr0.eq) goto loc_824B4B64;
	// andi. r10,r9,2112
	ctx.r10.u64 = ctx.r9.u64 & 2112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// beq 0x824b4a50
	if (ctx.cr0.eq) goto loc_824B4A50;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,-4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824b4a58
	if (ctx.cr6.eq) goto loc_824B4A58;
	// rlwinm. r11,r9,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// rlwinm r10,r14,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4515
	ctx.r5.s64 = 4515;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// beq 0x824b4b80
	if (ctx.cr0.eq) goto loc_824B4B80;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r9,2080
	ctx.r6.s64 = ctx.r9.s64 + 2080;
	// b 0x824b4b88
	goto loc_824B4B88;
loc_824B4A50:
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824B4A58:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b4aa8
	if (ctx.cr6.eq) goto loc_824B4AA8;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_824B4A68:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r29,r1,120
	r29.s64 = ctx.r1.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r4,r30,r29
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r4.u32);
	// bl 0x824785e8
	ctx.lr = 0x824B4A88;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824b4ac0
	if (ctx.cr0.lt) goto loc_824B4AC0;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r20,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, r20.u32);
	// stw r20,0(r18)
	REX_STORE_U32(r18.u32 + 0, r20.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(r28.u32, r19.u32, ctx.xer);
	// blt cr6,0x824b4a68
	if (ctx.cr6.lt) goto loc_824B4A68;
loc_824B4AA8:
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b444c
	if (ctx.cr6.lt) goto loc_824B444C;
loc_824B4ABC:
	// mr r31,r20
	r31.u64 = r20.u64;
loc_824B4AC0:
	// addi r30,r1,120
	r30.s64 = ctx.r1.s64 + 120;
	// li r28,3
	r28.s64 = 3;
loc_824B4AC8:
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824b4ae4
	if (ctx.cr6.eq) goto loc_824B4AE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x824B4ADC;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b20
	ctx.lr = 0x824B4AE4;
	sub_82477B20(ctx, base);
loc_824B4AE4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824b4ac8
	if (!ctx.cr0.eq) goto loc_824B4AC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_824B4B00:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r5,4524
	ctx.r5.s64 = 4524;
	// addi r6,r11,2008
	ctx.r6.s64 = ctx.r11.s64 + 2008;
	// b 0x824b4b74
	goto loc_824B4B74;
loc_824B4B14:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r7,203(r25)
	ctx.r7.u64 = REX_LOAD_U8(r25.u32 + 203);
	// li r5,4525
	ctx.r5.s64 = 4525;
	// addi r6,r11,1864
	ctx.r6.s64 = ctx.r11.s64 + 1864;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x824b4b88
	goto loc_824B4B88;
loc_824B4B30:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4526
	ctx.r5.s64 = 4526;
	// addi r6,r11,1776
	ctx.r6.s64 = ctx.r11.s64 + 1776;
	// b 0x824b4b70
	goto loc_824B4B70;
loc_824B4B40:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4527
	ctx.r5.s64 = 4527;
	// addi r6,r11,1696
	ctx.r6.s64 = ctx.r11.s64 + 1696;
	// b 0x824b4b70
	goto loc_824B4B70;
loc_824B4B50:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824b4ac0
	goto loc_824B4AC0;
loc_824B4B5C:
	// li r31,1
	r31.s64 = 1;
	// b 0x824b4ac0
	goto loc_824B4AC0;
loc_824B4B64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4812
	ctx.r5.s64 = 4812;
	// addi r6,r11,1652
	ctx.r6.s64 = ctx.r11.s64 + 1652;
loc_824B4B70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824B4B74:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B4B7C;
	sub_82489C30(ctx, base);
	// b 0x824b4b8c
	goto loc_824B4B8C;
loc_824B4B80:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r9,1584
	ctx.r6.s64 = ctx.r9.s64 + 1584;
loc_824B4B88:
	// bl 0x82489c30
	ctx.lr = 0x824B4B8C;
	sub_82489C30(ctx, base);
loc_824B4B8C:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824b4ac0
	goto loc_824B4AC0;
}

DEFINE_REX_FUNC(sub_824DD578) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd1d8
	sub_824DD1D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD6F0) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd590
	sub_824DD590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD730) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DDFD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x824ddfec
	if (ctx.cr0.eq) goto loc_824DDFEC;
	// std r30,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r30.u64);
loc_824DDFEC:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// beq 0x824de05c
	if (ctx.cr0.eq) goto loc_824DE05C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bgt cr6,0x824de018
	if (ctx.cr6.gt) goto loc_824DE018;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
loc_824DE018:
	// clrlwi. r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// beq 0x824de030
	if (ctx.cr0.eq) goto loc_824DE030;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824de038
	if (!ctx.cr0.eq) goto loc_824DE038;
loc_824DE030:
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// slw r8,r4,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
loc_824DE038:
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bne 0x824de048
	if (!ctx.cr0.eq) goto loc_824DE048;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_824DE048:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x824de060
	if (!ctx.cr0.eq) goto loc_824DE060;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// b 0x824de064
	goto loc_824DE064;
loc_824DE05C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_824DE060:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_824DE064:
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x824de07c
	if (ctx.cr6.eq) goto loc_824DE07C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_824DE07C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824de088
	if (ctx.cr0.eq) goto loc_824DE088;
	// std r30,0(r31)
	REX_STORE_U64(r31.u32 + 0, r30.u64);
loc_824DE088:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E4270) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824e3f78
	ctx.lr = 0x824E42C4;
	sub_824E3F78(ctx, base);
	// lwz r11,2492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e42ec
	if (ctx.cr6.eq) goto loc_824E42EC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,2488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2488);
	// addi r6,r30,-1100
	ctx.r6.s64 = r30.s64 + -1100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x824E42EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824E42EC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

DEFINE_REX_FUNC(sub_824E8D70) {
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
	ctx.lr = 0x824E8D78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824e8d9c
	if (!ctx.cr6.eq) goto loc_824E8D9C;
	// li r20,0
	r20.s64 = 0;
	// b 0x824e8da8
	goto loc_824E8DA8;
loc_824E8D9C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824E8DA8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e8dcc
	if (ctx.cr6.eq) goto loc_824E8DCC;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e8dcc
	if (ctx.cr6.eq) goto loc_824E8DCC;
	// bl 0x826b40a0
	ctx.lr = 0x824E8DCC;
	sub_826B40A0(ctx, base);
loc_824E8DCC:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r28,0(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lhz r25,2(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lwzu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// clrlwi r30,r31,21
	r30.u64 = r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwzu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r29,r10,24,27,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r23,r11,4
	r23.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// beq cr6,0x824e8e00
	if (ctx.cr6.eq) goto loc_824E8E00;
	// bl 0x826b40a0
	ctx.lr = 0x824E8E00;
	sub_826B40A0(ctx, base);
loc_824E8E00:
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r25,85
	ctx.cr6.compare<uint32_t>(r25.u32, 85, ctx.xer);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bne cr6,0x824e8e34
	if (!ctx.cr6.eq) goto loc_824E8E34;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E8E28;
	sub_824E6318(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824e8e80
	goto loc_824E8E80;
loc_824E8E34:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e5c68
	ctx.lr = 0x824E8E48;
	sub_824E5C68(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// beq cr6,0x824e8e5c
	if (ctx.cr6.eq) goto loc_824E8E5C;
	// bl 0x826b40a0
	ctx.lr = 0x824E8E5C;
	sub_826B40A0(ctx, base);
loc_824E8E5C:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// rlwimi r11,r26,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r9,41
	ctx.r9.s64 = 41;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stwu r9,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r28.u32 = ea;
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824E8E80:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824e8e98
	if (ctx.cr6.eq) goto loc_824E8E98;
	// bl 0x826b40a0
	ctx.lr = 0x824E8E98;
	sub_826B40A0(ctx, base);
loc_824E8E98:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E8EB0;
	sub_824E6438(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r25,83
	ctx.cr6.compare<uint32_t>(r25.u32, 83, ctx.xer);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x824e8f10
	if (!ctx.cr6.eq) goto loc_824E8F10;
	// rlwimi r30,r20,8,23,23
	r30.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 8) & 0x100) | (r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = r30.u32 & 0x1FF;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E8EFC;
	sub_824E6318(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r26,16,10,15
	r29.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x3F0000) | (r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E8F10:
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	REX_STORE_U32(r22.u32 + 0, r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824F1730) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// rlwimi r10,r9,13,8,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFF000) | (ctx.r10.u64 & 0xFFFFFFFFFF000FFF);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F3618) {
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
	ctx.lr = 0x824F3620;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,32(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824f02c0
	ctx.lr = 0x824F3644;
	sub_824F02C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824f2b60
	ctx.lr = 0x824F3654;
	sub_824F2B60(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x824f3688
	if (!ctx.cr0.eq) goto loc_824F3688;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-23288
	ctx.r6.s64 = ctx.r11.s64 + -23288;
	// addi r5,r10,-23076
	ctx.r5.s64 = ctx.r10.s64 + -23076;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,562
	ctx.r7.s64 = 562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F3680;
	sub_824EA978(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x824f373c
	goto loc_824F373C;
loc_824F3688:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825a4a88
	ctx.lr = 0x824F3694;
	sub_825A4A88(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824f36c8
	if (!ctx.cr0.eq) goto loc_824F36C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-23288
	ctx.r6.s64 = ctx.r11.s64 + -23288;
	// addi r5,r10,-23124
	ctx.r5.s64 = ctx.r10.s64 + -23124;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,573
	ctx.r7.s64 = 573;
	// bl 0x824ea978
	ctx.lr = 0x824F36C0;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824f373c
	goto loc_824F373C;
loc_824F36C8:
	// bl 0x825b6a50
	ctx.lr = 0x824F36CC;
	sub_825B6A50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824f0358
	ctx.lr = 0x824F36D8;
	sub_824F0358(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x824f1600
	ctx.lr = 0x824F36E0;
	sub_824F1600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x824f0410
	ctx.lr = 0x824F36EC;
	sub_824F0410(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-23152
	ctx.r4.s64 = ctx.r11.s64 + -23152;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824F3700;
	sub_82130E88(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b4ff8
	ctx.lr = 0x824F3714;
	sub_825B4FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824f373c
	if (!ctx.cr0.eq) goto loc_824F373C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f1030
	ctx.lr = 0x824F3724;
	sub_824F1030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824f373c
	if (!ctx.cr0.eq) goto loc_824F373C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x825b5ad8
	ctx.lr = 0x824F3738;
	sub_825B5AD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F373C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824FE7F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824fe818
	if (!ctx.cr6.lt) goto loc_824FE818;
loc_824FE80C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824FE818:
	// lwz r9,72(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x824fe80c
	if (ctx.cr6.gt) goto loc_824FE80C;
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x824fe80c
	if (ctx.cr6.gt) goto loc_824FE80C;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824fe948
	goto loc_824FE948;
loc_824FE860:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr. r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824fe884
	if (!ctx.cr0.eq) goto loc_824FE884;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x824fe950
	if (!ctx.cr6.lt) goto loc_824FE950;
	// b 0x824fe948
	goto loc_824FE948;
loc_824FE884:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824fe8e0
	if (!ctx.cr6.eq) goto loc_824FE8E0;
	// clrlwi. r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fe80c
	if (!ctx.cr0.eq) goto loc_824FE80C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x824fe80c
	if (!ctx.cr6.lt) goto loc_824FE80C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,80(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824fe80c
	if (!ctx.cr6.lt) goto loc_824FE80C;
	// rlwinm r7,r10,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrldi r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFF;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x824fe80c
	if (ctx.cr6.gt) goto loc_824FE80C;
	// rldicl r10,r10,62,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrldi r9,r6,48
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpldi cr6,r10,512
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 512, ctx.xer);
	// b 0x824fe944
	goto loc_824FE944;
loc_824FE8E0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824fe908
	if (!ctx.cr6.eq) goto loc_824FE908;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r9,8992
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8992, ctx.xer);
	// blt cr6,0x824fe80c
	if (ctx.cr6.lt) goto loc_824FE80C;
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrldi r9,r6,48
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpldi cr6,r10,9120
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 9120, ctx.xer);
	// b 0x824fe934
	goto loc_824FE934;
loc_824FE908:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x824fe948
	if (!ctx.cr6.eq) goto loc_824FE948;
	// clrlwi. r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fe80c
	if (!ctx.cr0.eq) goto loc_824FE80C;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r9,8960
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8960, ctx.xer);
	// blt cr6,0x824fe80c
	if (ctx.cr6.lt) goto loc_824FE80C;
	// rlwinm r10,r10,1,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFC;
	// clrldi r9,r6,48
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpldi cr6,r10,8992
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 8992, ctx.xer);
loc_824FE934:
	// bgt cr6,0x824fe80c
	if (ctx.cr6.gt) goto loc_824FE80C;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
loc_824FE944:
	// bgt cr6,0x824fe80c
	if (ctx.cr6.gt) goto loc_824FE80C;
loc_824FE948:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824fe860
	if (ctx.cr6.lt) goto loc_824FE860;
loc_824FE950:
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250B3D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250b3f8
	if (!ctx.cr0.eq) goto loc_8250B3F8;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250b3f0
	if (ctx.cr0.eq) goto loc_8250B3F0;
loc_8250B3E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8250B3F0:
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// b 0x8250b408
	goto loc_8250B408;
loc_8250B3F8:
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250b3e8
	if (!ctx.cr0.eq) goto loc_8250B3E8;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_8250B408:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8250b454
	if (ctx.cr6.eq) goto loc_8250B454;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8250b454
	if (ctx.cr6.eq) goto loc_8250B454;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8250b454
	if (ctx.cr6.eq) goto loc_8250B454;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8250b454
	if (ctx.cr6.eq) goto loc_8250B454;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8250b454
	if (ctx.cr6.eq) goto loc_8250B454;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8250b458
	if (!ctx.cr6.eq) goto loc_8250B458;
loc_8250B454:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250B458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825167C0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825167f4
	if (!ctx.cr6.lt) goto loc_825167F4;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_825167D4:
	// ldx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x825167fc
	if (!ctx.cr6.eq) goto loc_825167FC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825167d4
	if (ctx.cr6.lt) goto loc_825167D4;
loc_825167F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825167FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825188C0) {
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
	ctx.lr = 0x825188C8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// rlwinm r10,r5,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r9,r5,58
	ctx.r9.u64 = ctx.r5.u64 & 0x3F;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// ldx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82518918
	if (!ctx.cr6.eq) goto loc_82518918;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82518918:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518928
	if (ctx.cr0.eq) goto loc_82518928;
loc_82518920:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82518a8c
	goto loc_82518A8C;
loc_82518928:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,672(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// mullw r7,r9,r29
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82518978
	if (!ctx.cr6.lt) goto loc_82518978;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82518958:
	// ldx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82518a94
	if (!ctx.cr6.eq) goto loc_82518A94;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82518958
	if (ctx.cr6.lt) goto loc_82518958;
loc_82518978:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8251897C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82518920
	if (!ctx.cr0.eq) goto loc_82518920;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518a88
	if (ctx.cr0.eq) goto loc_82518A88;
	// lwz r10,676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 676);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mulli r9,r29,5
	ctx.r9.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(5));
loc_8251899C:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82518a9c
	if (!ctx.cr6.eq) goto loc_82518A9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8251899c
	if (ctx.cr6.lt) goto loc_8251899C;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_825189C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518a88
	if (ctx.cr0.eq) goto loc_82518A88;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lwz r11,792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r27,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r27.u64);
	// std r27,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r27.u64);
	// std r27,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r27.u64);
	// std r27,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r27.u64);
	// bne cr6,0x825189f4
	if (!ctx.cr6.eq) goto loc_825189F4;
	// li r11,32
	ctx.r11.s64 = 32;
loc_825189F4:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82518a0c
	if (!ctx.cr6.lt) goto loc_82518A0C;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251ed40
	ctx.lr = 0x82518A0C;
	sub_8251ED40(ctx, base);
loc_82518A0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517b10
	ctx.lr = 0x82518A14;
	sub_82517B10(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82518178
	ctx.lr = 0x82518A30;
	sub_82518178(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// or r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 | r28.u64;
	// bl 0x825185b0
	ctx.lr = 0x82518A6C;
	sub_825185B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517168
	ctx.lr = 0x82518A7C;
	sub_82517168(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82518a8c
	if (ctx.cr6.eq) goto loc_82518A8C;
loc_82518A88:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82518A8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
loc_82518A94:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8251897c
	goto loc_8251897C;
loc_82518A9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825189c4
	goto loc_825189C4;
}

DEFINE_REX_FUNC(sub_8252E6F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8252E6F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x8252e744
	goto loc_8252E744;
loc_8252E708:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8252e72c
	goto loc_8252E72C;
loc_8252E71C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8252e6f0
	ctx.lr = 0x8252E728;
	sub_8252E6F0(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8252E72C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8252e71c
	if (!ctx.cr6.eq) goto loc_8252E71C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252e750
	if (!ctx.cr0.eq) goto loc_8252E750;
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_8252E744:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252e708
	if (!ctx.cr0.eq) goto loc_8252E708;
loc_8252E750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82530D50) {
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
	ctx.lr = 0x82530D58;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82530D88;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82530dac
	if (ctx.cr6.eq) goto loc_82530DAC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530DA8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530DAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530DB4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82530dd8
	if (ctx.cr6.eq) goto loc_82530DD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530DD4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530DD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530DE0;
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
	ctx.lr = 0x82530E10;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8253AF10) {
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
	ctx.lr = 0x8253AF18;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// bl 0x825c4930
	ctx.lr = 0x8253AF34;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253af44
	if (!ctx.cr0.eq) goto loc_8253AF44;
loc_8253AF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8253b5a4
	goto loc_8253B5A4;
loc_8253AF44:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rlwinm r18,r11,13,29,31
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r31,r10,13,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// bl 0x8252e3f8
	ctx.lr = 0x8253AF68;
	sub_8252E3F8(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8252e3f8
	ctx.lr = 0x8253AF7C;
	sub_8252E3F8(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8252e460
	ctx.lr = 0x8253AFB8;
	sub_8252E460(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253af3c
	if (ctx.cr0.eq) goto loc_8253AF3C;
	// lwz r17,116(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8253b474
	if (ctx.cr6.eq) goto loc_8253B474;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r17,32
	ctx.r9.u64 = r17.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r31,r11,r18
	r31.u64 = ctx.r11.u64 + r18.u64;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bgt cr6,0x8253af3c
	if (ctx.cr6.gt) goto loc_8253AF3C;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b064
	if (ctx.cr0.eq) goto loc_8253B064;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b064
	if (ctx.cr0.eq) goto loc_8253B064;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82516448
	ctx.lr = 0x8253B020;
	sub_82516448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825164c0
	ctx.lr = 0x8253B02C;
	sub_825164C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82516928
	ctx.lr = 0x8253B038;
	sub_82516928(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82516448
	ctx.lr = 0x8253B044;
	sub_82516448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825164c0
	ctx.lr = 0x8253B050;
	sub_825164C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82516928
	ctx.lr = 0x8253B05C;
	sub_82516928(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253af3c
	if (!ctx.cr6.eq) goto loc_8253AF3C;
loc_8253B064:
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r10,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r22,44
	ctx.r10.s64 = r22.s64 + 44;
loc_8253B078:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8253b0a4
	if (!ctx.cr6.lt) goto loc_8253B0A4;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8253af3c
	if (!ctx.cr6.eq) goto loc_8253AF3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8253b078
	goto loc_8253B078;
loc_8253B0A4:
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r8,r10,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r20,44
	ctx.r10.s64 = r20.s64 + 44;
loc_8253B0B8:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8253b0e4
	if (!ctx.cr6.lt) goto loc_8253B0E4;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8253af3c
	if (!ctx.cr6.eq) goto loc_8253AF3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8253b0b8
	goto loc_8253B0B8;
loc_8253B0E4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,28(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x8253B0F8;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b1bc
	if (ctx.cr0.eq) goto loc_8253B1BC;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253b1bc
	if (!ctx.cr0.eq) goto loc_8253B1BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x8253B160;
	sub_82516448(ctx, base);
	// sth r3,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253b198
	if (!ctx.cr0.eq) goto loc_8253B198;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b198
	if (ctx.cr0.eq) goto loc_8253B198;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8253b1a4
	if (!ctx.cr6.gt) goto loc_8253B1A4;
loc_8253B198:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8253B1A0;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253B1A4:
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
loc_8253B1BC:
	// addi r21,r29,44
	r21.s64 = r29.s64 + 44;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r21
	r30.u64 = r21.u64;
	// subf r27,r29,r22
	r27.u64 = r22.u64 - r29.u64;
loc_8253B1CC:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253b290
	if (!ctx.cr6.lt) goto loc_8253B290;
	// lwzx r31,r27,r30
	r31.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253B1EC;
	sub_8250AD28(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b284
	if (ctx.cr0.eq) goto loc_8253B284;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253b284
	if (!ctx.cr0.eq) goto loc_8253B284;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x8253B21C;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253b260
	if (!ctx.cr0.eq) goto loc_8253B260;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b260
	if (ctx.cr0.eq) goto loc_8253B260;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8253b26c
	if (!ctx.cr6.gt) goto loc_8253B26C;
loc_8253B260:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8253B268;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253B26C:
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
loc_8253B284:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x8253b1cc
	goto loc_8253B1CC;
loc_8253B290:
	// addi r11,r18,10
	ctx.r11.s64 = r18.s64 + 10;
	// lwz r23,112(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r18
	r26.u64 = r18.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r17
	r25.u64 = r17.u64;
	// add r24,r11,r29
	r24.u64 = ctx.r11.u64 + r29.u64;
loc_8253B2A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253b450
	if (ctx.cr6.eq) goto loc_8253B450;
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// andc r11,r25,r11
	ctx.r11.u64 = r25.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r31.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r11,r31,11
	ctx.r11.s64 = r31.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r20
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8253B2D4;
	sub_8250AD28(ctx, base);
	// stwu r3,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r24.u32 = ea;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r23,r11
	ctx.r11.u64 = r23.u64 & ~ctx.r11.u64;
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r23,r11,r9
	r23.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8253b3b0
	if (ctx.cr6.eq) goto loc_8253B3B0;
	// mr r28,r21
	r28.u64 = r21.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r18
	r27.u64 = r18.u64;
loc_8253B30C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253b3a0
	if (!ctx.cr6.eq) goto loc_8253B3A0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// beq cr6,0x8253b3a0
	if (ctx.cr6.eq) goto loc_8253B3A0;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// b 0x8253b340
	goto loc_8253B340;
loc_8253B338:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253B340:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253b338
	if (!ctx.cr6.eq) goto loc_8253B338;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
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
	// lwzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// rlwinm r9,r9,5,22,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x3E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r10,r10,0,27,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// ori r9,r9,7296
	ctx.r9.u64 = ctx.r9.u64 | 7296;
	// rlwinm r10,r10,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzx r9,r30,r7
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r7.u32);
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253B3A0;
	sub_825335B8(ctx, base);
loc_8253B3A0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8253b30c
	if (!ctx.cr0.eq) goto loc_8253B30C;
loc_8253B3B0:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b440
	if (ctx.cr0.eq) goto loc_8253B440;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253b440
	if (!ctx.cr0.eq) goto loc_8253B440;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x8253B3D8;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253b41c
	if (!ctx.cr0.eq) goto loc_8253B41C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b41c
	if (ctx.cr0.eq) goto loc_8253B41C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8253b428
	if (!ctx.cr6.gt) goto loc_8253B428;
loc_8253B41C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8253B424;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253B428:
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
loc_8253B440:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// andc r11,r25,r11
	ctx.r11.u64 = r25.u64 & ~ctx.r11.u64;
	// subf r25,r11,r25
	r25.u64 = r25.u64 - ctx.r11.u64;
	// b 0x8253b2a8
	goto loc_8253B2A8;
loc_8253B450:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82537760
	ctx.lr = 0x8253B46C;
	sub_82537760(ctx, base);
	// mr r22,r29
	r22.u64 = r29.u64;
	// b 0x8253b478
	goto loc_8253B478;
loc_8253B474:
	// lwz r23,112(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8253B478:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c4a48
	ctx.lr = 0x8253B490;
	sub_825C4A48(ctx, base);
	// addi r8,r20,4
	ctx.r8.s64 = r20.s64 + 4;
loc_8253B494:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253b53c
	if (ctx.cr6.eq) goto loc_8253B53C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253b528
	if (ctx.cr6.eq) goto loc_8253B528;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253b4c4
	goto loc_8253B4C4;
loc_8253B4BC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253B4C4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253b4bc
	if (!ctx.cr6.eq) goto loc_8253B4BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r22,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r22.u32);
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8253B528:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253b494
	if (!ctx.cr6.eq) goto loc_8253B494;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8253b494
	goto loc_8253B494;
loc_8253B53C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 652);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253B550;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8253b5a0
	if (ctx.cr6.eq) goto loc_8253B5A0;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r22,40
	r30.s64 = r22.s64 + 40;
loc_8253B560:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253b58c
	if (!ctx.cr6.lt) goto loc_8253B58C;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r5,660(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 660);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8254f428
	ctx.lr = 0x8253B584;
	sub_8254F428(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8253b560
	goto loc_8253B560;
loc_8253B58C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82548eb8
	ctx.lr = 0x8253B594;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_8253B5A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8253B5A4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825820E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825820E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,81
	ctx.r6.s64 = 81;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258210C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82582130
	if (ctx.cr6.eq) goto loc_82582130;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8258212C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582130:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582138;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825844B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825844B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
loc_825844C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825844dc
	if (ctx.cr0.eq) goto loc_825844DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825844e8
	goto loc_825844E8;
loc_825844DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825844E8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82584534
	if (!ctx.cr6.gt) goto loc_82584534;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824e4308
	ctx.lr = 0x82584530;
	sub_824E4308(ctx, base);
	// b 0x825844c8
	goto loc_825844C8;
loc_82584534:
	// subf. r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// bne 0x82584594
	if (!ctx.cr0.eq) goto loc_82584594;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824e4308
	ctx.lr = 0x82584594;
	sub_824E4308(ctx, base);
loc_82584594:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82589980) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82589988;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82589990:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82589ab0
	if (!ctx.cr0.eq) goto loc_82589AB0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82589ab0
	if (ctx.cr0.eq) goto loc_82589AB0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825899bc
	if (ctx.cr0.eq) goto loc_825899BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825899c8
	goto loc_825899C8;
loc_825899BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825899C8:
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
	// bne 0x82589a18
	if (!ctx.cr0.eq) goto loc_82589A18;
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
	ctx.lr = 0x82589A18;
	sub_824E4308(ctx, base);
loc_82589A18:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82589990
	if (ctx.cr6.eq) goto loc_82589990;
loc_82589A24:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82589aa0
	if (!ctx.cr6.eq) goto loc_82589AA0;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82589a94
	if (ctx.cr6.eq) goto loc_82589A94;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82589a70
	if (!ctx.cr0.eq) goto loc_82589A70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589a70
	if (ctx.cr0.eq) goto loc_82589A70;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82589a7c
	if (!ctx.cr6.gt) goto loc_82589A7C;
loc_82589A70:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82589A78;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82589A7C:
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
loc_82589A94:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82589a24
	if (!ctx.cr6.eq) goto loc_82589A24;
loc_82589AA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82589990
	if (ctx.cr6.eq) goto loc_82589990;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82589ab4
	goto loc_82589AB4;
loc_82589AB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82589AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825A1DF8) {
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
	ctx.lr = 0x825A1E00;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r15,r11,22852
	r15.s64 = ctx.r11.s64 + 22852;
	// addi r14,r10,-12104
	r14.s64 = ctx.r10.s64 + -12104;
	// bne cr6,0x825a1e48
	if (!ctx.cr6.eq) goto loc_825A1E48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-11972
	ctx.r5.s64 = ctx.r11.s64 + -11972;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,1562
	ctx.r7.s64 = 1562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1E48;
	sub_824EA978(ctx, base);
loc_825A1E48:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x825a1e6c
	if (!ctx.cr6.eq) goto loc_825A1E6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-11984
	ctx.r5.s64 = ctx.r11.s64 + -11984;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,1563
	ctx.r7.s64 = 1563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1E6C;
	sub_824EA978(ctx, base);
loc_825A1E6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a1e90
	if (!ctx.cr6.eq) goto loc_825A1E90;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-12000
	ctx.r5.s64 = ctx.r11.s64 + -12000;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,1564
	ctx.r7.s64 = 1564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1E90;
	sub_824EA978(ctx, base);
loc_825A1E90:
	// addic. r17,r31,236
	ctx.xer.ca = r31.u32 > 4294967059;
	r17.s64 = r31.s64 + 236;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne 0x825a1eb4
	if (!ctx.cr0.eq) goto loc_825A1EB4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-13040
	ctx.r5.s64 = ctx.r11.s64 + -13040;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,1567
	ctx.r7.s64 = 1567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1EB4;
	sub_824EA978(ctx, base);
loc_825A1EB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 12);
	// bl 0x825a1088
	ctx.lr = 0x825A1EC0;
	sub_825A1088(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825a1ed0
	if (ctx.cr6.eq) goto loc_825A1ED0;
	// li r22,4092
	r22.s64 = 4092;
loc_825A1ED0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8228f208
	ctx.lr = 0x825A1ED8;
	sub_8228F208(ctx, base);
	// bl 0x824f19c0
	ctx.lr = 0x825A1EDC;
	sub_824F19C0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825a1a20
	ctx.lr = 0x825A1EE8;
	sub_825A1A20(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,4(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 4);
	// mr r19,r30
	r19.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16373
	ctx.r11.s64 = -1073020928;
	// li r25,0
	r25.s64 = 0;
	// ori r11,r11,9472
	ctx.r11.u64 = ctx.r11.u64 | 9472;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r25
	r27.u64 = r25.u64;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// li r26,16
	r26.s64 = 16;
	// addi r24,r11,-13016
	r24.s64 = ctx.r11.s64 + -13016;
loc_825A1F44:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r21
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r21.u32);
	// lwz r29,32(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825a1108
	ctx.lr = 0x825A1F5C;
	sub_825A1108(ctx, base);
	// and. r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a1fbc
	if (ctx.cr0.eq) goto loc_825A1FBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a1fb4
	if (ctx.cr6.eq) goto loc_825A1FB4;
	// mulli r7,r27,38
	ctx.r7.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(38));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825A1F80:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a1fa8
	if (ctx.cr6.eq) goto loc_825A1FA8;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r6,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// addi r30,r9,4
	r30.s64 = ctx.r9.s64 + 4;
loc_825A1FA8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825a1f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825A1F80;
loc_825A1FB4:
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// b 0x825a1fd0
	goto loc_825A1FD0;
loc_825A1FBC:
	// lwzx r11,r28,r21
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r21.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825A1FD0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825a1fe8
	if (!ctx.cr6.eq) goto loc_825A1FE8;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stwu r26,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r26.u32);
	r31.u32 = ea;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825A1FE8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(r27.u32, 6, ctx.xer);
	// blt cr6,0x825a1f44
	if (ctx.cr6.lt) goto loc_825A1F44;
	// lwz r10,32(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 32);
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// beq 0x825a2054
	if (ctx.cr0.eq) goto loc_825A2054;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r29,1
	ctx.r8.s64 = r29.s64 + 1;
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x825A2040;
	sub_826A1E70(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stwu r25,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r25.u32);
	r31.u32 = ea;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825a2074
	goto loc_825A2074;
loc_825A2054:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825a2064
	if (ctx.cr6.eq) goto loc_825A2064;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// b 0x825a2074
	goto loc_825A2074;
loc_825A2064:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
loc_825A2074:
	// lwz r10,28(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 28);
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq 0x825a20dc
	if (ctx.cr0.eq) goto loc_825A20DC;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,11008
	ctx.r8.u64 = ctx.r10.u64 | 11008;
	// addi r7,r29,1
	ctx.r7.s64 = r29.s64 + 1;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// rlwimi r8,r7,16,2,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x3FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFC000FFFF);
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x825A20C8;
	sub_826A1E70(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stwu r25,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r25.u32);
	r31.u32 = ea;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825a2114
	goto loc_825A2114;
loc_825A20DC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825a2104
	if (ctx.cr6.eq) goto loc_825A2104;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// ori r9,r9,9984
	ctx.r9.u64 = ctx.r9.u64 | 9984;
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// b 0x825a210c
	goto loc_825A210C;
loc_825A2104:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_825A210C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
loc_825A2114:
	// subf r11,r19,r30
	ctx.r11.u64 = r30.u64 - r19.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r30.s64 = ctx.r11.s32 >> 2;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x825A2130;
	sub_826A1E70(ctx, base);
	// subf r11,r16,r31
	ctx.r11.u64 = r31.u64 - r16.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(r23.u32, r31.u32, ctx.xer);
	// bge cr6,0x825a2160
	if (!ctx.cr6.lt) goto loc_825A2160;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-11920
	ctx.r5.s64 = ctx.r11.s64 + -11920;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,1702
	ctx.r7.s64 = 1702;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2160;
	sub_824EA978(ctx, base);
loc_825A2160:
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825a4f80
	ctx.lr = 0x825A2184;
	sub_825A4F80(ctx, base);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825B70A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825B70B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825b70e8
	if (!ctx.cr6.eq) goto loc_825B70E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-2432
	ctx.r6.s64 = ctx.r11.s64 + -2432;
	// addi r5,r10,-9704
	ctx.r5.s64 = ctx.r10.s64 + -9704;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1401
	ctx.r7.s64 = 1401;
	// bl 0x824ea978
	ctx.lr = 0x825B70E8;
	sub_824EA978(ctx, base);
loc_825B70E8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f0470
	ctx.lr = 0x825B70F8;
	sub_824F0470(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B7CD0) {
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
	// b 0x825b7d20
	goto loc_825B7D20;
loc_825B7CF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7d14
	if (ctx.cr6.eq) goto loc_825B7D14;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x825b7d2c
	if (!ctx.cr6.lt) goto loc_825B7D2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x825b7d20
	goto loc_825B7D20;
loc_825B7D14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589f28
	ctx.lr = 0x825B7D1C;
	sub_82589F28(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_825B7D20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825b7cf0
	if (!ctx.cr6.eq) goto loc_825B7CF0;
	// b 0x825b7d34
	goto loc_825B7D34;
loc_825B7D2C:
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_825B7D34:
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

DEFINE_REX_FUNC(sub_825B8F80) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BA8C0) {
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
	// b 0x825ba8ec
	goto loc_825BA8EC;
loc_825BA8E0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x825BA8EC;
	sub_8250B470(ctx, base);
loc_825BA8EC:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825ba8e0
	if (!ctx.cr6.eq) goto loc_825BA8E0;
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

DEFINE_REX_FUNC(sub_825BC308) {
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
	ctx.lr = 0x825BC310;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825bc34c
	if (!ctx.cr6.eq) goto loc_825BC34C;
	// bl 0x82520608
	ctx.lr = 0x825BC34C;
	sub_82520608(ctx, base);
loc_825BC34C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r25,r29
	r25.u64 = r29.u64;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// beq 0x825bc370
	if (ctx.cr0.eq) goto loc_825BC370;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r25,r10,28,18,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FFF;
loc_825BC370:
	// li r28,-1
	r28.s64 = -1;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc3d0
	if (ctx.cr6.eq) goto loc_825BC3D0;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825BC394:
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r11,28,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// bne cr6,0x825bc3bc
	if (!ctx.cr6.eq) goto loc_825BC3BC;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bge cr6,0x825bc3bc
	if (!ctx.cr6.lt) goto loc_825BC3BC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_825BC3BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x825bc394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825BC394;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825bc3ec
	if (!ctx.cr6.eq) goto loc_825BC3EC;
loc_825BC3D0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825bc3e0
	if (!ctx.cr6.eq) goto loc_825BC3E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825bc494
	goto loc_825BC494;
loc_825BC3E0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825BC3EC;
	sub_824E4368(ctx, base);
loc_825BC3EC:
	// addi r11,r26,-104
	ctx.r11.s64 = r26.s64 + -104;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825BC408;
	sub_824F71B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x824ff930
	ctx.lr = 0x825BC418;
	sub_824FF930(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r8,r28,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825bb770
	ctx.lr = 0x825BC454;
	sub_825BB770(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb658
	ctx.lr = 0x825BC464;
	sub_825BB658(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bc47c
	if (!ctx.cr0.eq) goto loc_825BC47C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x825bc48c
	goto loc_825BC48C;
loc_825BC47C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825bc490
	if (!ctx.cr6.eq) goto loc_825BC490;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_825BC48C:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_825BC490:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825BC494:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825C6A50) {
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
	ctx.lr = 0x825C6A58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// lwzx r3,r27,r3
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + ctx.r3.u32);
	// b 0x825c6a9c
	goto loc_825C6A9C;
loc_825C6A80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825c6b40
	if (ctx.cr6.eq) goto loc_825C6B40;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8250ae78
	ctx.lr = 0x825C6A90;
	sub_8250AE78(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x825c6b4c
	if (ctx.cr0.eq) goto loc_825C6B4C;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_825C6A9C:
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x825c6a80
	if (!ctx.cr6.eq) goto loc_825C6A80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ae78
	ctx.lr = 0x825C6AB0;
	sub_8250AE78(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x825c6b58
	if (ctx.cr0.eq) goto loc_825C6B58;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_825C6ABC:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c6b58
	if (ctx.cr6.eq) goto loc_825C6B58;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x825c6b2c
	if (ctx.cr6.eq) goto loc_825C6B2C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c6ae8
	if (!ctx.cr0.eq) goto loc_825C6AE8;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825c6aec
	if (ctx.cr0.eq) goto loc_825C6AEC;
loc_825C6AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C6AEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c6b00
	if (ctx.cr0.eq) goto loc_825C6B00;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825c6b04
	if (!ctx.cr0.eq) goto loc_825C6B04;
loc_825C6B00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C6B04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c6b2c
	if (ctx.cr0.eq) goto loc_825C6B2C;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bne cr6,0x825c6b2c
	if (!ctx.cr6.eq) goto loc_825C6B2C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250b470
	ctx.lr = 0x825C6B2C;
	sub_8250B470(ctx, base);
loc_825C6B2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c6abc
	if (!ctx.cr6.eq) goto loc_825C6ABC;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x825c6abc
	goto loc_825C6ABC;
loc_825C6B40:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C6B4C;
	sub_824E4368(ctx, base);
loc_825C6B4C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C6B58;
	sub_824E4368(ctx, base);
loc_825C6B58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825c6c4c
	if (ctx.cr6.eq) goto loc_825C6C4C;
	// addi r30,r25,4
	r30.s64 = r25.s64 + 4;
loc_825C6B64:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c6bf0
	if (ctx.cr6.eq) goto loc_825C6BF0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825c6bdc
	if (ctx.cr6.eq) goto loc_825C6BDC;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x825c6bdc
	if (ctx.cr6.eq) goto loc_825C6BDC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c6b9c
	if (!ctx.cr0.eq) goto loc_825C6B9C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825c6ba0
	if (ctx.cr0.eq) goto loc_825C6BA0;
loc_825C6B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C6BA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c6bb4
	if (ctx.cr0.eq) goto loc_825C6BB4;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825c6bb8
	if (!ctx.cr0.eq) goto loc_825C6BB8;
loc_825C6BB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C6BB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c6bdc
	if (ctx.cr0.eq) goto loc_825C6BDC;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bne cr6,0x825c6bdc
	if (!ctx.cr6.eq) goto loc_825C6BDC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x825C6BDC;
	sub_8250B470(ctx, base);
loc_825C6BDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c6b64
	if (!ctx.cr6.eq) goto loc_825C6B64;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x825c6b64
	goto loc_825C6B64;
loc_825C6BF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c6c38
	if (ctx.cr6.eq) goto loc_825C6C38;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825c6c14
	goto loc_825C6C14;
loc_825C6C0C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825C6C14:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x825c6c0c
	if (!ctx.cr6.eq) goto loc_825C6C0C;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r9,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// b 0x825c6c64
	goto loc_825C6C64;
loc_825C6C38:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250b470
	ctx.lr = 0x825C6C48;
	sub_8250B470(ctx, base);
	// b 0x825c6c64
	goto loc_825C6C64;
loc_825C6C4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c6c5c
	if (ctx.cr6.eq) goto loc_825C6C5C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// b 0x825c6c60
	goto loc_825C6C60;
loc_825C6C5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C6C60:
	// stwx r11,r27,r28
	REX_STORE_U32(r27.u32 + r28.u32, ctx.r11.u32);
loc_825C6C64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c6c7c
	if (ctx.cr6.eq) goto loc_825C6C7C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250b470
	ctx.lr = 0x825C6C7C;
	sub_8250B470(ctx, base);
loc_825C6C7C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c6748
	ctx.lr = 0x825C6C88;
	sub_825C6748(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825D0B30) {
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
	ctx.lr = 0x825D0B38;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,240(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// add r26,r11,r4
	r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r29,r10,r5
	r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825d0b90
	if (!ctx.cr6.eq) goto loc_825D0B90;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d0b80
	if (!ctx.cr6.gt) goto loc_825D0B80;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825D0B80:
	// bl 0x822f6280
	ctx.lr = 0x825D0B84;
	sub_822F6280(ctx, base);
	// stw r3,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0e48
	if (ctx.cr6.eq) goto loc_825D0E48;
loc_825D0B90:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// rlwinm r10,r26,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d0bac
	if (!ctx.cr6.eq) goto loc_825D0BAC;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825d0c2c
	if (ctx.cr6.eq) goto loc_825D0C2C;
loc_825D0BAC:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r10.u32);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r29,236(r31)
	REX_STORE_U32(r31.u32 + 236, r29.u32);
	// lwz r28,240(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 240);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r29
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r27,r10,r8
	r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x825d0c2c
	if (!ctx.cr6.lt) goto loc_825D0C2C;
loc_825D0BFC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0C10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,256
	r28.s64 = r28.s64 + 256;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d0bfc
	if (ctx.cr6.lt) goto loc_825D0BFC;
loc_825D0C2C:
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r9,r8,r26
	ctx.r9.u64 = r26.u64 - ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d0ca4
	if (!ctx.cr6.lt) goto loc_825D0CA4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_825D0C58:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,240(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 240);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x825d0c58
	if (!ctx.cr0.eq) goto loc_825D0C58;
loc_825D0CA4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d0e28
	if (ctx.cr6.eq) goto loc_825D0E28;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825d0e28
	if (!ctx.cr6.lt) goto loc_825D0E28;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f6,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f6.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lfs f10,20236(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20232(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20232);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20224);
	ctx.f13.f64 = double(temp.f32);
loc_825D0D08:
	// lfs f9,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f8,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f8,f8,f13,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f7,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f7,f5,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f0.f64)));
	// lfs f5,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f5,f5,f13,f0
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f4,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fctiwz f9,f8
	ctx.f9.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f9,f7
	ctx.f9.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fctiwz f9,f5
	ctx.f9.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwa r9,84(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r7,92(r1)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// lfd f8,104(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwa r8,84(r1)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f9,96(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bne cr6,0x825d0e1c
	if (!ctx.cr6.eq) goto loc_825D0E1C;
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bne cr6,0x825d0e1c
	if (!ctx.cr6.eq) goto loc_825D0E1C;
	// lfs f9,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bne cr6,0x825d0e1c
	if (!ctx.cr6.eq) goto loc_825D0E1C;
	// lfs f9,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bne cr6,0x825d0e1c
	if (!ctx.cr6.eq) goto loc_825D0E1C;
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_825D0E1C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x825d0d08
	if (!ctx.cr0.eq) goto loc_825D0D08;
loc_825D0E28:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d0e48
	if (ctx.cr6.eq) goto loc_825D0E48;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r30
	ctx.r4.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825D0E48;
	sub_825C7788(ctx, base);
loc_825D0E48:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825EB5B0) {
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
	ctx.lr = 0x825EB5B8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825db640
	ctx.lr = 0x825EB5C4;
	sub_825DB640(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// bl 0x825f74b8
	ctx.lr = 0x825EB5D0;
	sub_825F74B8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1456(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EB5E8;
	sub_825B33A0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825eb608
	if (ctx.cr0.eq) goto loc_825EB608;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EB604;
	sub_825D7A48(ctx, base);
	// b 0x825eb60c
	goto loc_825EB60C;
loc_825EB608:
	// li r28,0
	r28.s64 = 0;
loc_825EB60C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1456(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EB620;
	sub_825B33A0(ctx, base);
	// addic. r27,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x825eb644
	if (ctx.cr0.eq) goto loc_825EB644;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EB63C;
	sub_825D7A48(ctx, base);
	// mr r23,r27
	r23.u64 = r27.u64;
	// b 0x825eb648
	goto loc_825EB648;
loc_825EB644:
	// li r23,0
	r23.s64 = 0;
loc_825EB648:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1456(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EB65C;
	sub_825B33A0(ctx, base);
	// addic. r27,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x825eb680
	if (ctx.cr0.eq) goto loc_825EB680;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EB678;
	sub_825D7A48(ctx, base);
	// mr r24,r27
	r24.u64 = r27.u64;
	// b 0x825eb684
	goto loc_825EB684;
loc_825EB680:
	// li r24,0
	r24.s64 = 0;
loc_825EB684:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1456(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EB698;
	sub_825B33A0(ctx, base);
	// addic. r27,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x825eb6bc
	if (ctx.cr0.eq) goto loc_825EB6BC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EB6B4;
	sub_825D7A48(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x825eb6c0
	goto loc_825EB6C0;
loc_825EB6BC:
	// li r26,0
	r26.s64 = 0;
loc_825EB6C0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r25,1456(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825EB6D4;
	sub_825B33A0(ctx, base);
	// addic. r27,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// beq 0x825eb6f4
	if (ctx.cr0.eq) goto loc_825EB6F4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825EB6F0;
	sub_825D7A48(ctx, base);
	// b 0x825eb6f8
	goto loc_825EB6F8;
loc_825EB6F4:
	// li r27,0
	r27.s64 = 0;
loc_825EB6F8:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// blt cr6,0x825eb738
	if (ctx.cr6.lt) goto loc_825EB738;
loc_825EB708:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzu r4,4(r29)
	ea = 4 + r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825eabe0
	ctx.lr = 0x825EB72C;
	sub_825EABE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825eb708
	if (!ctx.cr0.eq) goto loc_825EB708;
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825EB738:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825eb74c
	if (ctx.cr6.eq) goto loc_825EB74C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e18c0
	ctx.lr = 0x825EB74C;
	sub_825E18C0(ctx, base);
loc_825EB74C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825eb760
	if (ctx.cr6.eq) goto loc_825EB760;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825e18c0
	ctx.lr = 0x825EB760;
	sub_825E18C0(ctx, base);
loc_825EB760:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825eb774
	if (ctx.cr6.eq) goto loc_825EB774;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825e18c0
	ctx.lr = 0x825EB774;
	sub_825E18C0(ctx, base);
loc_825EB774:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825eb788
	if (ctx.cr6.eq) goto loc_825EB788;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825e18c0
	ctx.lr = 0x825EB788;
	sub_825E18C0(ctx, base);
loc_825EB788:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825eb79c
	if (ctx.cr6.eq) goto loc_825EB79C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e18c0
	ctx.lr = 0x825EB79C;
	sub_825E18C0(ctx, base);
loc_825EB79C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stb r10,1396(r11)
	REX_STORE_U8(ctx.r11.u32 + 1396, ctx.r10.u8);
	// beq cr6,0x825eb7c4
	if (ctx.cr6.eq) goto loc_825EB7C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r11,14828
	ctx.r4.s64 = ctx.r11.s64 + 14828;
	// bl 0x82130e88
	ctx.lr = 0x825EB7C4;
	sub_82130E88(ctx, base);
loc_825EB7C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825F7D98) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r31,0
	r31.s64 = 0;
loc_825F7DB8:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f7de8
	if (!ctx.cr0.eq) goto loc_825F7DE8;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F7DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F7DE8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825f7db8
	if (ctx.cr6.lt) goto loc_825F7DB8;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
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

DEFINE_REX_FUNC(sub_825F9550) {
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
	// bl 0x825f8a50
	ctx.lr = 0x825F9568;
	sub_825F8A50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,28700
	ctx.r11.s64 = ctx.r11.s64 + 28700;
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

DEFINE_REX_FUNC(sub_825F9B60) {
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
	ctx.lr = 0x825F9B68;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r26,r10,30408
	r26.s64 = ctx.r10.s64 + 30408;
	// addi r25,r9,30364
	r25.s64 = ctx.r9.s64 + 30364;
	// addi r28,r8,22852
	r28.s64 = ctx.r8.s64 + 22852;
	// addi r24,r7,30352
	r24.s64 = ctx.r7.s64 + 30352;
	// addi r27,r6,30240
	r27.s64 = ctx.r6.s64 + 30240;
	// ble cr6,0x825f9c5c
	if (!ctx.cr6.gt) goto loc_825F9C5C;
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
loc_825F9BAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f9bd0
	if (!ctx.cr6.eq) goto loc_825F9BD0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9BD0;
	sub_824EA978(ctx, base);
loc_825F9BD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825f9bfc
	if (ctx.cr6.eq) goto loc_825F9BFC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,137
	ctx.r7.s64 = 137;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9BFC;
	sub_824EA978(ctx, base);
loc_825F9BFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x825f9c34
	if (ctx.cr6.eq) goto loc_825F9C34;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825f9c34
	if (ctx.cr6.eq) goto loc_825F9C34;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,139
	ctx.r7.s64 = 139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9C34;
	sub_824EA978(ctx, base);
loc_825F9C34:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F9C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825f9bac
	if (ctx.cr6.lt) goto loc_825F9BAC;
loc_825F9C5C:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,1
	r29.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x825f9d48
	if (!ctx.cr6.gt) goto loc_825F9D48;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
loc_825F9C74:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f9c98
	if (!ctx.cr6.eq) goto loc_825F9C98;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9C98;
	sub_824EA978(ctx, base);
loc_825F9C98:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825f9cc4
	if (ctx.cr6.eq) goto loc_825F9CC4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,146
	ctx.r7.s64 = 146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9CC4;
	sub_824EA978(ctx, base);
loc_825F9CC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x825f9cfc
	if (ctx.cr6.eq) goto loc_825F9CFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825f9cfc
	if (ctx.cr6.eq) goto loc_825F9CFC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,148
	ctx.r7.s64 = 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9CFC;
	sub_824EA978(ctx, base);
loc_825F9CFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F9D10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f9d2c
	if (!ctx.cr0.eq) goto loc_825F9D2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F9D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825F9D2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825f9c74
	if (ctx.cr6.lt) goto loc_825F9C74;
loc_825F9D48:
	// lwz r11,948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f9d70
	if (!ctx.cr6.eq) goto loc_825F9D70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,30332
	ctx.r5.s64 = ctx.r11.s64 + 30332;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,153
	ctx.r7.s64 = 153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F9D70;
	sub_824EA978(ctx, base);
loc_825F9D70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8260B7C8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-21252
	ctx.r10.s64 = ctx.r10.s64 + -21252;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8260B7E4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8260b804
	if (!ctx.cr0.eq) goto loc_8260B804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8260b7e4
	if (!ctx.cr6.eq) goto loc_8260B7E4;
loc_8260B804:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8260b828
	if (!ctx.cr0.eq) goto loc_8260B828;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260B820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260b838
	goto loc_8260B838;
loc_8260B828:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_8260B838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260D748) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8260d740
	sub_8260D740(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260DDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260DDC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8260de00
	if (ctx.cr0.lt) goto loc_8260DE00;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260DE00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260F510) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8260f548
	if (ctx.cr6.eq) goto loc_8260F548;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8260F548:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260f56c
	if (!ctx.cr6.eq) goto loc_8260F56C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F56C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260F56C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261cfe8
	ctx.lr = 0x8260F574;
	sub_8261CFE8(ctx, base);
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// b 0x8260f588
	goto loc_8260F588;
loc_8260F57C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260f588
	if (ctx.cr6.eq) goto loc_8260F588;
	// bl 0x8264c3d0
	ctx.lr = 0x8260F588;
	sub_8264C3D0(ctx, base);
loc_8260F588:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260c1e8
	ctx.lr = 0x8260F590;
	sub_8260C1E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8260f57c
	if (!ctx.cr0.eq) goto loc_8260F57C;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260f5b4
	if (ctx.cr6.eq) goto loc_8260F5B4;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260b9b0
	ctx.lr = 0x8260F5AC;
	sub_8260B9B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_8260F5B4:
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

DEFINE_REX_FUNC(sub_826137D0) {
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
	ctx.lr = 0x826137D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82613898
	if (!ctx.cr6.eq) goto loc_82613898;
	// bl 0x82612f88
	ctx.lr = 0x826137F0;
	sub_82612F88(ctx, base);
	// lbz r11,466(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 466);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82613898
	if (ctx.cr0.eq) goto loc_82613898;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82613858
	if (ctx.cr6.eq) goto loc_82613858;
	// addi r28,r30,500
	r28.s64 = r30.s64 + 500;
	// addi r29,r30,140
	r29.s64 = r30.s64 + 140;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82613814:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82613828
	if (ctx.cr6.eq) goto loc_82613828;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261382c
	goto loc_8261382C;
loc_82613828:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8261382C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261383c
	if (ctx.cr6.eq) goto loc_8261383C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82613840
	goto loc_82613840;
loc_8261383C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82613840:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8260e830
	ctx.lr = 0x82613850;
	sub_8260E830(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82613814
	if (!ctx.cr0.eq) goto loc_82613814;
loc_82613858:
	// lwz r11,524(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261386c
	if (ctx.cr6.eq) goto loc_8261386C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82613870
	goto loc_82613870;
loc_8261386C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82613870:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82613894
	if (!ctx.cr6.eq) goto loc_82613894;
	// li r4,254
	ctx.r4.s64 = 254;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 472);
	// bl 0x82610ec8
	ctx.lr = 0x82613888;
	sub_82610EC8(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stb r11,466(r30)
	REX_STORE_U8(r30.u32 + 466, ctx.r11.u8);
	// b 0x82613898
	goto loc_82613898;
loc_82613894:
	// stb r27,466(r30)
	REX_STORE_U8(r30.u32 + 466, r27.u8);
loc_82613898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82617288) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x8260c100
	sub_8260C100(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82617A60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// b 0x826a2e60
	sub_826A2E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82618000) {
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
loc_82618014:
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
	// bne 0x82618014
	if (!ctx.cr0.eq) goto loc_82618014;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82618070
	if (!ctx.cr6.eq) goto loc_82618070;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261805c
	if (ctx.cr6.eq) goto loc_8261805C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82618058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82618060
	goto loc_82618060;
loc_8261805C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82618060:
	// bl 0x8264c3d0
	ctx.lr = 0x82618064;
	sub_8264C3D0(ctx, base);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// bl 0x8260b538
	ctx.lr = 0x82618070;
	sub_8260B538(ctx, base);
loc_82618070:
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

DEFINE_REX_FUNC(sub_8261C8A8) {
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
	ctx.lr = 0x8261C8B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,5
	ctx.r5.u64 = ctx.r5.u64 | 5;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x8261C8E8;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261c904
	if (ctx.cr0.eq) goto loc_8261C904;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82634c20
	ctx.lr = 0x8261C900;
	sub_82634C20(ctx, base);
	// b 0x8261c908
	goto loc_8261C908;
loc_8261C904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261C908:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne cr6,0x8261c920
	if (!ctx.cr6.eq) goto loc_8261C920;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8261c958
	goto loc_8261C958;
loc_8261C920:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82634c48
	ctx.lr = 0x8261C92C;
	sub_82634C48(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8261c958
	if (!ctx.cr0.lt) goto loc_8261C958;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261c958
	if (ctx.cr6.eq) goto loc_8261C958;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82634e00
	ctx.lr = 0x8261C948;
	sub_82634E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261C950;
	sub_8264C3D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8261C958:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826265F0) {
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
	ctx.lr = 0x826265F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,36
	r26.s64 = ctx.r3.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x827938a4
	ctx.lr = 0x8262661C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r27,0
	r27.s64 = 0;
	// addi r5,r11,24392
	ctx.r5.s64 = ctx.r11.s64 + 24392;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// bl 0x823ef950
	ctx.lr = 0x82626648;
	sub_823EF950(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// beq 0x826266ec
	if (ctx.cr0.eq) goto loc_826266EC;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x826266a4
	if (ctx.cr6.eq) goto loc_826266A4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// beq cr6,0x8262669c
	if (ctx.cr6.eq) goto loc_8262669C;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// beq cr6,0x82626694
	if (ctx.cr6.eq) goto loc_82626694;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(r30.u32, 8, ctx.xer);
	// beq cr6,0x8262668c
	if (ctx.cr6.eq) goto loc_8262668C;
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x826266a8
	goto loc_826266A8;
loc_8262668C:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x826266a8
	goto loc_826266A8;
loc_82626694:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x826266a8
	goto loc_826266A8;
loc_8262669C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x826266a8
	goto loc_826266A8;
loc_826266A4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826266A8:
	// bl 0x823ed118
	ctx.lr = 0x826266AC;
	sub_823ED118(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823ecfc0
	ctx.lr = 0x826266B8;
	sub_823ECFC0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823ef910
	ctx.lr = 0x826266C0;
	sub_823EF910(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82793e64
	ctx.lr = 0x826266D8;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82626708
	if (!ctx.cr6.eq) goto loc_82626708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82616350
	ctx.lr = 0x826266E8;
	sub_82616350(ctx, base);
	// b 0x82626708
	goto loc_82626708;
loc_826266EC:
	// bl 0x823ee280
	ctx.lr = 0x826266F0;
	sub_823EE280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82626700
	if (ctx.cr0.gt) goto loc_82626700;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82626708
	goto loc_82626708;
loc_82626700:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r27,r11,32775
	r27.u64 = ctx.r11.u64 | 2147942400;
loc_82626708:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827938b4
	ctx.lr = 0x82626710;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82629EA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x82629ebc
	if (!ctx.cr6.lt) goto loc_82629EBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82629EBC:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r8,11(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82629F14:
	// lwz r11,-12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -12);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r5.u64 = static_cast<uint64_t>(4) - ctx.r7.u64;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// subfic r3,r10,48
	ctx.xer.ca = ctx.r10.u32 <= 48;
	ctx.r3.u64 = static_cast<uint64_t>(48) - ctx.r10.u64;
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// and r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 & ctx.r8.u64;
	// beq cr6,0x82629f70
	if (ctx.cr6.eq) goto loc_82629F70;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82629F70:
	// lhz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82629fc0
	if (ctx.cr0.eq) goto loc_82629FC0;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82629fa8
	if (ctx.cr0.eq) goto loc_82629FA8;
loc_82629F88:
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82629f88
	if (!ctx.cr0.eq) goto loc_82629F88;
loc_82629FA8:
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82629FC0:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bdnz 0x82629f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82629F14;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82638078) {
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
	ctx.lr = 0x82638080;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mulli r30,r4,152
	r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(152));
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// bl 0x826e07e0
	ctx.lr = 0x826380A4;
	sub_826E07E0(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82638160
	if (ctx.cr6.eq) goto loc_82638160;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826380BC;
	sub_826A2E60(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82638154
	if (!ctx.cr6.gt) goto loc_82638154;
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_826380CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826e07e0
	ctx.lr = 0x826380DC;
	sub_826E07E0(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82638160
	if (ctx.cr6.eq) goto loc_82638160;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x82638124
	if (!ctx.cr6.gt) goto loc_82638124;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x826e07e0
	ctx.lr = 0x82638104;
	sub_826E07E0(ctx, base);
	// stw r3,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82638160
	if (ctx.cr6.eq) goto loc_82638160;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x826a2e60
	ctx.lr = 0x82638124;
	sub_826A2E60(ctx, base);
loc_82638124:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e07e0
	ctx.lr = 0x8263812C;
	sub_826E07E0(ctx, base);
	// stw r3,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82638160
	if (ctx.cr6.eq) goto loc_82638160;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82638144;
	sub_826A2E60(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,152
	r29.s64 = r29.s64 + 152;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(r28.s32, r31.s32, ctx.xer);
	// blt cr6,0x826380cc
	if (ctx.cr6.lt) goto loc_826380CC;
loc_82638154:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82638160:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8263F030) {
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
	ctx.lr = 0x8263F038;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r22,r28
	r22.u64 = r28.u64;
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8263f070
	if (ctx.cr6.lt) goto loc_8263F070;
loc_8263F060:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8263F070:
	// lwz r10,120(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lhz r9,34(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 34);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x8263F094;
	sub_826A2E60(ctx, base);
	// lwz r8,92(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x8263f104
	if (ctx.cr6.gt) goto loc_8263F104;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263f0f8
	if (ctx.cr6.eq) goto loc_8263F0F8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
loc_8263F0BC:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r4,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r25,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// lhz r3,34(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8263f0bc
	if (ctx.cr6.lt) goto loc_8263F0BC;
loc_8263F0F8:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8263f19c
	goto loc_8263F19C;
loc_8263F104:
	// lhz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 580);
	// mr r23,r28
	r23.u64 = r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8263f19c
	if (!ctx.cr6.gt) goto loc_8263F19C;
	// mr r24,r28
	r24.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
loc_8263F120:
	// lwz r11,584(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r26,8(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lhzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + ctx.r11.u32);
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// rlwinm r27,r28,3,0,28
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r27,r26
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8263f184
	if (!ctx.cr6.eq) goto loc_8263F184;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x8263F150;
	sub_82638D80(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263f1a8
	if (ctx.cr6.lt) goto loc_8263F1A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263f184
	if (!ctx.cr6.eq) goto loc_8263F184;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
	// stwx r25,r27,r26
	REX_STORE_U32(r27.u32 + r26.u32, r25.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_8263F184:
	// lhz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 580);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8263f120
	if (ctx.cr6.lt) goto loc_8263F120;
loc_8263F19C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8263f060
	if (ctx.cr6.lt) goto loc_8263F060;
loc_8263F1A8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826450C0) {
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
	ctx.lr = 0x826450C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82645770
	if (ctx.cr6.eq) goto loc_82645770;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82645770
	if (ctx.cr6.eq) goto loc_82645770;
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r5.u32);
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645764
	if (ctx.cr6.eq) goto loc_82645764;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r11.u32);
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
loc_82645118:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r10,-372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82645130
	if (ctx.cr6.lt) goto loc_82645130;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82645130:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r6,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r6.u32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82645154:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8264518c
	if (!ctx.cr6.lt) goto loc_8264518C;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r1,-320
	ctx.r4.s64 = ctx.r1.s64 + -320;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// addi r8,r8,-128
	ctx.r8.s64 = ctx.r8.s64 + -128;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// stwx r8,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// b 0x8264519c
	goto loc_8264519C;
loc_8264518C:
	// addi r9,r1,-320
	ctx.r9.s64 = ctx.r1.s64 + -320;
	// addi r8,r1,-352
	ctx.r8.s64 = ctx.r1.s64 + -352;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r29.u32);
loc_8264519C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82645154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82645154;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r16,-304(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r19,-308(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r22,-312(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r20,-316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r17,-320(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r15,-336(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// lwz r18,-340(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r21,-344(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r27,-348(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r11,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r11.u32);
loc_826451D8:
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// addi r24,r1,-256
	r24.s64 = ctx.r1.s64 + -256;
	// lwz r10,-380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// addi r23,r1,-288
	r23.s64 = ctx.r1.s64 + -288;
	// lwzx r26,r29,r11
	r26.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwzx r25,r29,r10
	r25.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// mullw r11,r20,r26
	ctx.r11.s64 = int64_t(r20.s32) * int64_t(r26.s32);
	// mullw r10,r17,r25
	ctx.r10.s64 = int64_t(r17.s32) * int64_t(r25.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// stwx r10,r29,r24
	REX_STORE_U32(r29.u32 + r24.u32, ctx.r10.u32);
	// stwx r10,r29,r23
	REX_STORE_U32(r29.u32 + r23.u32, ctx.r10.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// subf r8,r22,r11
	ctx.r8.u64 = ctx.r11.u64 - r22.u64;
	// bgt cr6,0x8264521c
	if (ctx.cr6.gt) goto loc_8264521C;
	// subf r8,r11,r22
	ctx.r8.u64 = r22.u64 - ctx.r11.u64;
loc_8264521C:
	// mullw r11,r22,r26
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r26.s32);
	// mullw r10,r20,r25
	ctx.r10.s64 = int64_t(r20.s32) * int64_t(r25.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// subf r9,r19,r11
	ctx.r9.u64 = ctx.r11.u64 - r19.u64;
	// bgt cr6,0x8264523c
	if (ctx.cr6.gt) goto loc_8264523C;
	// subf r9,r11,r19
	ctx.r9.u64 = r19.u64 - ctx.r11.u64;
loc_8264523C:
	// mullw r10,r19,r26
	ctx.r10.s64 = int64_t(r19.s32) * int64_t(r26.s32);
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
	// ble cr6,0x82645260
	if (!ctx.cr6.gt) goto loc_82645260;
	// subf r11,r16,r11
	ctx.r11.u64 = ctx.r11.u64 - r16.u64;
	// b 0x82645264
	goto loc_82645264;
loc_82645260:
	// subf r11,r11,r16
	ctx.r11.u64 = r16.u64 - ctx.r11.u64;
loc_82645264:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// divw r7,r11,r4
	ctx.r7.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8264527c
	if (!ctx.cr6.lt) goto loc_8264527C;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8264527C:
	// mullw r11,r14,r25
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(r25.s32);
	// mullw r10,r27,r26
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// subf r8,r21,r11
	ctx.r8.u64 = ctx.r11.u64 - r21.u64;
	// bgt cr6,0x826452a0
	if (ctx.cr6.gt) goto loc_826452A0;
	// subf r8,r11,r21
	ctx.r8.u64 = r21.u64 - ctx.r11.u64;
loc_826452A0:
	// mullw r11,r27,r25
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// mullw r10,r21,r26
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r18.s32, ctx.xer);
	// subf r9,r18,r11
	ctx.r9.u64 = ctx.r11.u64 - r18.u64;
	// bgt cr6,0x826452c0
	if (ctx.cr6.gt) goto loc_826452C0;
	// subf r9,r11,r18
	ctx.r9.u64 = r18.u64 - ctx.r11.u64;
loc_826452C0:
	// mullw r10,r18,r26
	ctx.r10.s64 = int64_t(r18.s32) * int64_t(r26.s32);
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
	// ble cr6,0x826452e4
	if (!ctx.cr6.gt) goto loc_826452E4;
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - r15.u64;
	// b 0x826452e8
	goto loc_826452E8;
loc_826452E4:
	// subf r11,r11,r15
	ctx.r11.u64 = r15.u64 - ctx.r11.u64;
loc_826452E8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r11,r11,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x826452fc
	if (!ctx.cr6.lt) goto loc_826452FC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_826452FC:
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// lwz r9,-400(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// stwx r7,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r7.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// stwx r11,r29,r8
	REX_STORE_U32(r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x8264549c
	if (!ctx.cr6.gt) goto loc_8264549C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,-384(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82645340:
	// mullw r9,r3,r26
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// mullw r10,r31,r25
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r25.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r11,r8,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82645378
	if (!ctx.cr6.gt) goto loc_82645378;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82645384
	goto loc_82645384;
loc_82645378:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82645384
	if (!ctx.cr6.lt) goto loc_82645384;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82645384:
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8264539c
	if (!ctx.cr6.gt) goto loc_8264539C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x826453a8
	goto loc_826453A8;
loc_8264539C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x826453a8
	if (!ctx.cr6.lt) goto loc_826453A8;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_826453A8:
	// lwz r8,-392(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x826453c8
	if (!ctx.cr6.lt) goto loc_826453C8;
	// li r6,16
	ctx.r6.s64 = 16;
loc_826453C8:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// subf r31,r9,r10
	r31.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mullw r9,r7,r25
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// lwzx r8,r29,r24
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r24.u32);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// mullw r31,r31,r31
	r31.s64 = int64_t(r31.s32) * int64_t(r31.s32);
	// stw r11,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r11.u32);
	// mullw r7,r28,r26
	ctx.r7.s64 = int64_t(r28.s32) * int64_t(r26.s32);
	// srawi r11,r31,7
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7F) != 0);
	ctx.r11.s64 = r31.s32 >> 7;
	// lwz r31,-376(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r31,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stwx r8,r29,r24
	REX_STORE_U32(r29.u32 + r24.u32, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// divw r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82645424
	if (!ctx.cr6.gt) goto loc_82645424;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82645430
	goto loc_82645430;
loc_82645424:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82645430
	if (!ctx.cr6.lt) goto loc_82645430;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82645430:
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82645448
	if (!ctx.cr6.gt) goto loc_82645448;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82645454
	goto loc_82645454;
loc_82645448:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82645454
	if (!ctx.cr6.lt) goto loc_82645454;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82645454:
	// lwz r9,-392(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82645474
	if (!ctx.cr6.lt) goto loc_82645474;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82645474:
	// subf r9,r7,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwzx r8,r29,r23
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r23.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mullw r9,r9,r9
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stwx r8,r29,r23
	REX_STORE_U32(r29.u32 + r23.u32, ctx.r8.u32);
	// bdnz 0x82645340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82645340;
loc_8264549C:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(r29.u32, 28, ctx.xer);
	// blt cr6,0x826451d8
	if (ctx.cr6.lt) goto loc_826451D8;
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
	// bge cr6,0x826454cc
	if (!ctx.cr6.lt) goto loc_826454CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_826454CC:
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826454e0
	if (!ctx.cr6.lt) goto loc_826454E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_826454E0:
	// lwz r8,-248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826454f4
	if (!ctx.cr6.lt) goto loc_826454F4;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_826454F4:
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645508
	if (!ctx.cr6.lt) goto loc_82645508;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645508:
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8264551c
	if (!ctx.cr6.lt) goto loc_8264551C;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8264551C:
	// lwz r8,-276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645530
	if (!ctx.cr6.lt) goto loc_82645530;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645530:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645544
	if (!ctx.cr6.lt) goto loc_82645544;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82645544:
	// lwz r8,-272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645558
	if (!ctx.cr6.lt) goto loc_82645558;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645558:
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8264556c
	if (!ctx.cr6.lt) goto loc_8264556C;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8264556C:
	// lwz r8,-268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645580
	if (!ctx.cr6.lt) goto loc_82645580;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645580:
	// lwz r8,-232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645590
	if (!ctx.cr6.lt) goto loc_82645590;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82645590:
	// lwz r9,-264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826455a0
	if (!ctx.cr6.lt) goto loc_826455A0;
	// li r11,6
	ctx.r11.s64 = 6;
loc_826455A0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,-400(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-384(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r4,r1,-224
	ctx.r4.s64 = ctx.r1.s64 + -224;
	// addi r30,r1,-192
	r30.s64 = ctx.r1.s64 + -192;
	// mr r28,r20
	r28.u64 = r20.u64;
	// lwzx r26,r9,r11
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// lwzx r24,r31,r11
	r24.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// mr r29,r14
	r29.u64 = r14.u64;
	// lwz r11,-380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// lwzx r4,r9,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// mr r30,r20
	r30.u64 = r20.u64;
	// lwzx r23,r31,r11
	r23.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwzx r25,r9,r11
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r11,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r11.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stbu r6,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r5.u32 = ea;
	// sthu r8,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r5.u32 = ea;
	// sthu r4,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r5.u32 = ea;
	// sthu r20,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r20.u16);
	ctx.r5.u32 = ea;
	// sthu r27,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r27.u16);
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
	// beq 0x82645758
	if (ctx.cr0.eq) goto loc_82645758;
	// lwz r22,-392(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82645624:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r23,r31
	ctx.r11.s64 = int64_t(r23.s32) * int64_t(r31.s32);
	// mullw r10,r24,r30
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(r30.s32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r28,r9,r8
	r28.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(r28.s32, 7, ctx.xer);
	// ble cr6,0x8264565c
	if (!ctx.cr6.gt) goto loc_8264565C;
	// li r28,7
	r28.s64 = 7;
	// b 0x82645668
	goto loc_82645668;
loc_8264565C:
	// cmpwi cr6,r28,-8
	ctx.cr6.compare<int32_t>(r28.s32, -8, ctx.xer);
	// bge cr6,0x82645668
	if (!ctx.cr6.lt) goto loc_82645668;
	// li r28,-8
	r28.s64 = -8;
loc_82645668:
	// mullw r10,r28,r8
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x82645680
	if (!ctx.cr6.gt) goto loc_82645680;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x8264568c
	goto loc_8264568C;
loc_82645680:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x8264568c
	if (!ctx.cr6.lt) goto loc_8264568C;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_8264568C:
	// rlwinm r11,r28,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x826456a8
	if (!ctx.cr6.lt) goto loc_826456A8;
	// li r8,16
	ctx.r8.s64 = 16;
loc_826456A8:
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r10,r26,r27
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r27.s32);
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r30
	r31.u64 = r30.u64;
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// divw r11,r11,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x826456e8
	if (!ctx.cr6.gt) goto loc_826456E8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826456f4
	goto loc_826456F4;
loc_826456E8:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x826456f4
	if (!ctx.cr6.lt) goto loc_826456F4;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_826456F4:
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8264570c
	if (!ctx.cr6.gt) goto loc_8264570C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82645718
	goto loc_82645718;
loc_8264570C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82645718
	if (!ctx.cr6.lt) goto loc_82645718;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82645718:
	// rlwinm r7,r11,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwzx r6,r7,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r22.u32);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82645738
	if (!ctx.cr6.lt) goto loc_82645738;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82645738:
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r6,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82645624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82645624;
loc_82645758:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82645118
	if (!ctx.cr6.eq) goto loc_82645118;
loc_82645764:
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x826a1cd0
	return;
loc_82645770:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82670F60) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x826707c0
	ctx.lr = 0x82670F8C;
	sub_826707C0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82670fc4
	if (ctx.cr6.eq) goto loc_82670FC4;
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
loc_82670F98:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82670f98
	if (!ctx.cr0.eq) goto loc_82670F98;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670ff8
	if (!ctx.cr6.eq) goto loc_82670FF8;
	// bl 0x82670cd8
	ctx.lr = 0x82670FC0;
	sub_82670CD8(ctx, base);
	// b 0x82670ff8
	goto loc_82670FF8;
loc_82670FC4:
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
loc_82670FC8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82670fc8
	if (!ctx.cr0.eq) goto loc_82670FC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670ff0
	if (!ctx.cr6.eq) goto loc_82670FF0;
	// bl 0x82670cd8
	ctx.lr = 0x82670FF0;
	sub_82670CD8(ctx, base);
loc_82670FF0:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
loc_82670FF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82675A90) {
	REX_FUNC_PROLOGUE();
	// b 0x8267e140
	sub_8267E140(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675B38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675D00) {
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
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r30,212(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8267a110
	ctx.lr = 0x82675D30;
	sub_8267A110(ctx, base);
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

DEFINE_REX_FUNC(sub_82676BF8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82676c34
	goto loc_82676C34;
loc_82676C10:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x82676c50
	if (ctx.cr6.eq) goto loc_82676C50;
	// rldicl r4,r4,62,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82676C34:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82676c10
	if (!ctx.cr6.eq) goto loc_82676C10;
	// std r9,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82676C50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82678848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82678850;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,224
	r30.s64 = ctx.r3.s64 + 224;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x82678868;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r31,328
	ctx.r11.s64 = r31.s64 + 328;
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82678884
	if (!ctx.cr6.eq) goto loc_82678884;
	// bl 0x826778a8
	ctx.lr = 0x82678880;
	sub_826778A8(ctx, base);
	// b 0x82678888
	goto loc_82678888;
loc_82678884:
	// bl 0x826787c8
	ctx.lr = 0x82678888;
	sub_826787C8(ctx, base);
loc_82678888:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x82678890;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x82678898;
	sub_82676D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826797D8) {
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
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x82682a90
	ctx.lr = 0x826797F4;
	sub_82682A90(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x82682a90
	ctx.lr = 0x826797FC;
	sub_82682A90(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82682a90
	ctx.lr = 0x82679804;
	sub_82682A90(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x82682a90
	ctx.lr = 0x8267980C;
	sub_82682A90(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8267B610) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// lwz r10,432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,436(r3)
	REX_STORE_U32(ctx.r3.u32 + 436, ctx.r4.u32);
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// beq 0x8267b634
	if (ctx.cr0.eq) goto loc_8267B634;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x8267b63c
	goto loc_8267B63C;
loc_8267B634:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
loc_8267B63C:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrldi r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFF;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// oris r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 65536;
	// clrldi r7,r11,48
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// std r8,632(r3)
	REX_STORE_U64(ctx.r3.u32 + 632, ctx.r8.u64);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,900(r3)
	REX_STORE_U16(ctx.r3.u32 + 900, ctx.r10.u16);
	// rlwinm r5,r10,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r6,896(r3)
	REX_STORE_U32(ctx.r3.u32 + 896, ctx.r6.u32);
	// oris r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 | 65536;
	// sth r5,902(r3)
	REX_STORE_U16(ctx.r3.u32 + 902, ctx.r5.u16);
	// sth r11,1080(r3)
	REX_STORE_U16(ctx.r3.u32 + 1080, ctx.r11.u16);
	// std r8,1056(r3)
	REX_STORE_U64(ctx.r3.u32 + 1056, ctx.r8.u64);
	// sth r11,1082(r3)
	REX_STORE_U16(ctx.r3.u32 + 1082, ctx.r11.u16);
	// sth r11,1084(r3)
	REX_STORE_U16(ctx.r3.u32 + 1084, ctx.r11.u16);
	// sth r9,1096(r3)
	REX_STORE_U16(ctx.r3.u32 + 1096, ctx.r9.u16);
	// sth r11,1000(r3)
	REX_STORE_U16(ctx.r3.u32 + 1000, ctx.r11.u16);
	// sth r11,1002(r3)
	REX_STORE_U16(ctx.r3.u32 + 1002, ctx.r11.u16);
	// sth r9,1004(r3)
	REX_STORE_U16(ctx.r3.u32 + 1004, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267FFC0) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,22236
	r30.s64 = ctx.r11.s64 + 22236;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x827938a4
	ctx.lr = 0x8267FFE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x82680014;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_826819E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826819F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r9.u16);
	// bl 0x826812b0
	ctx.lr = 0x82681A2C;
	sub_826812B0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82681a50
	if (ctx.cr6.eq) goto loc_82681A50;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x826a1e70
	ctx.lr = 0x82681A4C;
	sub_826A1E70(ctx, base);
	// b 0x82681a58
	goto loc_82681A58;
loc_82681A50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82681A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826831D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826831E0;
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82683258
	if (!ctx.cr6.eq) goto loc_82683258;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82683214
	if (!ctx.cr6.gt) goto loc_82683214;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82683218
	goto loc_82683218;
loc_82683214:
	// li r4,16
	ctx.r4.s64 = 16;
loc_82683218:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82683230
	if (ctx.cr6.gt) goto loc_82683230;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82683244
	if (!ctx.cr6.lt) goto loc_82683244;
loc_82683230:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82683244
	if (ctx.cr6.lt) goto loc_82683244;
loc_8268323C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82683290
	goto loc_82683290;
loc_82683244:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82679360
	ctx.lr = 0x82683250;
	sub_82679360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8268323c
	if (ctx.cr0.eq) goto loc_8268323C;
loc_82683258:
	// std r29,8(r30)
	REX_STORE_U64(r30.u32 + 8, r29.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82682e88
	ctx.lr = 0x8268328C;
	sub_82682E88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82683290:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82687870) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82685c58
	ctx.lr = 0x826878A0;
	sub_82685C58(ctx, base);
	// lbz r11,78(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 78);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826878bc
	if (!ctx.cr0.eq) goto loc_826878BC;
	// bl 0x826847a0
	ctx.lr = 0x826878B8;
	sub_826847A0(ctx, base);
	// b 0x826878dc
	goto loc_826878DC;
loc_826878BC:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,79(r31)
	REX_STORE_U8(r31.u32 + 79, ctx.r11.u8);
	// ori r11,r10,32768
	ctx.r11.u64 = ctx.r10.u64 | 32768;
	// stb r9,78(r31)
	REX_STORE_U8(r31.u32 + 78, ctx.r9.u8);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// bl 0x82685250
	ctx.lr = 0x826878DC;
	sub_82685250(ctx, base);
loc_826878DC:
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

DEFINE_REX_FUNC(sub_8268AB28) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8268aa88
	sub_8268AA88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8268B340) {
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
	ctx.lr = 0x8268B348;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8268b378
	if (ctx.cr6.eq) goto loc_8268B378;
	// stw r26,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r26.u32);
loc_8268B378:
	// lwz r29,52(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 52);
	// b 0x8268b420
	goto loc_8268B420;
loc_8268B380:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8268b41c
	if (ctx.cr6.eq) goto loc_8268B41C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r8,r30,r8
	ctx.r8.u64 = ctx.r8.u64 - r30.u64;
	// addi r31,r9,2
	r31.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8268b454
	if (ctx.cr6.gt) goto loc_8268B454;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x826a1e70
	ctx.lr = 0x8268B3C8;
	sub_826A1E70(ctx, base);
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8268b3e4
	if (ctx.cr6.eq) goto loc_8268B3E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8268B3E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268b404
	if (!ctx.cr6.lt) goto loc_8268B404;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8268B404:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8268b420
	if (!ctx.cr6.eq) goto loc_8268B420;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_8268B41C:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8268B420:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8268b380
	if (!ctx.cr6.eq) goto loc_8268B380;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,228(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
loc_8268B448:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8268B454:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8268b448
	if (!ctx.cr6.eq) goto loc_8268B448;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// mr r30,r31
	r30.u64 = r31.u64;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8268b448
	goto loc_8268B448;
}

DEFINE_REX_FUNC(sub_826949D8) {
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
	ctx.lr = 0x826949E0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,368
	r31.s64 = ctx.r1.s64 + 368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x82694a30
	if (!ctx.cr0.gt) goto loc_82694A30;
	// addi r7,r3,-4
	ctx.r7.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82694A14:
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,8(r7)
	ea = 8 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x82694a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82694A14;
loc_82694A30:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// lfs f31,3716(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82694a60
	if (ctx.cr6.eq) goto loc_82694A60;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f0,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82694A60:
	// lis r28,-32119
	r28.s64 = -2104950784;
	// subfic r11,r9,65
	ctx.xer.ca = ctx.r9.u32 <= 65;
	ctx.r11.u64 = static_cast<uint64_t>(65) - ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,-5952(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -5952);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-5952(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -5952);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82695418
	ctx.lr = 0x82694AAC;
	sub_82695418(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,32324(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10520(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10520);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82694afc
	if (!ctx.cr6.gt) goto loc_82694AFC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82694b0c
	goto loc_82694B0C;
loc_82694AFC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82694B0C:
	// addic. r7,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r7.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x82694b54
	if (!ctx.cr0.gt) goto loc_82694B54;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// li r10,16384
	ctx.r10.s64 = 16384;
loc_82694B20:
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// lfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82694b20
	if (ctx.cr6.lt) goto loc_82694B20;
loc_82694B54:
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x82694b7c
	if (ctx.cr6.lt) goto loc_82694B7C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82694b9c
	goto loc_82694B9C;
loc_82694B7C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f13,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsx f0,r11,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
loc_82694B9C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826A0568) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826A0570;
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x826a2e60
	ctx.lr = 0x826A05AC;
	sub_826A2E60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826a05cc
	if (!ctx.cr6.eq) goto loc_826A05CC;
loc_826A05B4:
	// bl 0x826a33d0
	ctx.lr = 0x826A05B8;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A05C4;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a0640
	goto loc_826A0640;
loc_826A05CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826a05b4
	if (ctx.cr6.eq) goto loc_826A05B4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a5ff8
	ctx.lr = 0x826A0610;
	sub_826A5FF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x826a0630
	if (ctx.cr0.lt) goto loc_826A0630;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// b 0x826a063c
	goto loc_826A063C;
loc_826A0630:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a5cb8
	ctx.lr = 0x826A063C;
	sub_826A5CB8(ctx, base);
loc_826A063C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826A0640:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826A3A68) {
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
	// bl 0x826a3990
	ctx.lr = 0x826A3A7C;
	sub_826A3990(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826a3a8c
	if (!ctx.cr0.eq) goto loc_826A3A8C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826a38d8
	ctx.lr = 0x826A3A8C;
	sub_826A38D8(ctx, base);
loc_826A3A8C:
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

DEFINE_REX_FUNC(__savevmx_97) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A5430) {
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
	ctx.lr = 0x826A5438;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfd f1,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826adf00
	ctx.lr = 0x826A5458;
	sub_826ADF00(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// ori r28,r10,65279
	r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,26368(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26368);
	// bl 0x826adf00
	ctx.lr = 0x826A5474;
	sub_826ADF00(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x826a5510
	if (!ctx.cr6.eq) goto loc_826A5510;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfd f0,26776(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26776);
	// stfd f0,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
	// bl 0x826ab0e8
	ctx.lr = 0x826A549C;
	sub_826AB0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x826a54e8
	if (!ctx.cr0.gt) goto loc_826A54E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x826a54cc
	if (!ctx.cr6.gt) goto loc_826A54CC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826a54e8
	if (!ctx.cr6.eq) goto loc_826A54E8;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, f31.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826adc30
	ctx.lr = 0x826A54C8;
	sub_826ADC30(ctx, base);
	// b 0x826a5554
	goto loc_826A5554;
loc_826A54CC:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, f31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfd f1,-3744(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x826a1860
	ctx.lr = 0x826A54E0;
	sub_826A1860(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x826a5544
	goto loc_826A5544;
loc_826A54E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3728(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + ctx.f0.f64;
	// stfd f2,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f2.u64);
	// bl 0x826add38
	ctx.lr = 0x826A550C;
	sub_826ADD38(ctx, base);
	// b 0x826a5554
	goto loc_826A5554;
loc_826A5510:
	// bl 0x826ab450
	ctx.lr = 0x826A5514;
	sub_826AB450(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 - ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x826a5544
	if (!ctx.cr6.eq) goto loc_826A5544;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lfd f31,80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_826A5544:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826adf00
	ctx.lr = 0x826A5550;
	sub_826ADF00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_826A5554:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826ADF84) {
	REX_FUNC_PROLOGUE();
	// stw r3,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AE4B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r11,r11,102
	ctx.r11.u64 = ctx.r11.u64 & 102;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826ae4d0
	if (!ctx.cr0.eq) goto loc_826AE4D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826AE4D0:
	// stw r5,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 48);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 56);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// ld r11,64(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 64);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B0198) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b0200
	if (ctx.cr6.lt) goto loc_826B0200;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,31232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31232);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b0200
	if (!ctx.cr6.lt) goto loc_826B0200;
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
	// beq 0x826b0200
	if (ctx.cr0.eq) goto loc_826B0200;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826b0200
	if (ctx.cr6.eq) goto loc_826B0200;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b021c
	goto loc_826B021C;
loc_826B0200:
	// bl 0x826a33d0
	ctx.lr = 0x826B0204;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a3408
	ctx.lr = 0x826B0210;
	sub_826A3408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826B021C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B49E0) {
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

DEFINE_REX_FUNC(sub_826B58C0) {
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
	// bl 0x826bc110
	ctx.lr = 0x826B58D8;
	sub_826BC110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5678
	ctx.lr = 0x826B58E0;
	sub_826B5678(ctx, base);
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

DEFINE_REX_FUNC(sub_826B6B40) {
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
	// bl 0x826bc110
	ctx.lr = 0x826B6B5C;
	sub_826BC110(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,26224
	ctx.r10.s64 = ctx.r11.s64 + 26224;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826bc340
	ctx.lr = 0x826B6B70;
	sub_826BC340(ctx, base);
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
	// bl 0x826a2e60
	ctx.lr = 0x826B6B9C;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_826BA6D0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,28208
	ctx.r10.s64 = ctx.r11.s64 + 28208;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826c5f60
	ctx.lr = 0x826BA6FC;
	sub_826C5F60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ba71c
	if (ctx.cr6.eq) goto loc_826BA71C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32819
	ctx.r4.u64 = ctx.r4.u64 | 32819;
	// bl 0x823f0350
	ctx.lr = 0x826BA718;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826BA71C:
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

DEFINE_REX_FUNC(sub_826BC588) {
	REX_FUNC_PROLOGUE();
	// stw r4,512(r3)
	REX_STORE_U32(ctx.r3.u32 + 512, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BD678) {
	REX_FUNC_PROLOGUE();
	// lwz r11,552(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x826bd790
	if (ctx.cr6.gt) goto loc_826BD790;
	// lis r12,-32148
	ctx.r12.s64 = -2106851328;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10588
	ctx.r12.s64 = ctx.r12.s64 + -10588;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826BD71C;
	case 1:
		goto loc_826BD72C;
	case 2:
		goto loc_826BD73C;
	case 3:
		goto loc_826BD748;
	case 4:
		goto loc_826BD754;
	case 5:
		goto loc_826BD760;
	case 6:
		goto loc_826BD778;
	case 7:
		goto loc_826BD784;
	case 8:
		goto loc_826BD6D4;
	case 9:
		goto loc_826BD6E4;
	case 10:
		goto loc_826BD76C;
	case 11:
		goto loc_826BD6F4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826BD6D4:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r11,r11,22857
	ctx.r11.u64 = ctx.r11.u64 | 22857;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD6E4:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD6F4:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// li r10,12
	ctx.r10.s64 = 12;
loc_826BD6FC:
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
loc_826BD700:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bd70c
	if (ctx.cr6.eq) goto loc_826BD70C;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_826BD70C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826bd718
	if (ctx.cr6.eq) goto loc_826BD718;
	// sth r10,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_826BD718:
	// blr 
	return;
loc_826BD71C:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD72C:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22869
	ctx.r11.u64 = ctx.r11.u64 | 22869;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD73C:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x826bd6fc
	goto loc_826BD6FC;
loc_826BD748:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD754:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD760:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD76C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD778:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD784:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x826bd700
	goto loc_826BD700;
loc_826BD790:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C35A0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C46E0) {
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
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x826C46E8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x826a3f64
	ctx.lr = 0x826C46F4;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// stw r5,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r5.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r4,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r31,r22
	r31.u64 = r22.u64;
	// li r30,1
	r30.s64 = 1;
loc_826C4718:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C472C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826c4758
	if (ctx.cr6.eq) goto loc_826C4758;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x826c4758
	if (ctx.cr6.eq) goto loc_826C4758;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x826c4914
	if (ctx.cr6.eq) goto loc_826C4914;
loc_826C4758:
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c4afc
	if (ctx.cr6.lt) goto loc_826C4AFC;
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C47A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C47B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82147138
	ctx.lr = 0x826C47C0;
	sub_82147138(ctx, base);
	// stw r3,232(r25)
	REX_STORE_U32(r25.u32 + 232, ctx.r3.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826b63b8
	ctx.lr = 0x826C47CC;
	sub_826B63B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,236(r25)
	REX_STORE_U32(r25.u32 + 236, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c47f4
	if (ctx.cr6.eq) goto loc_826C47F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C47F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
loc_826C47F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826c4894
	if (!ctx.cr6.eq) goto loc_826C4894;
	// lwz r11,52(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c4814
	if (!ctx.cr6.eq) goto loc_826C4814;
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c4894
	if (ctx.cr6.eq) goto loc_826C4894;
loc_826C4814:
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,68(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 68);
	// lwz r5,52(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 52);
	// lwz r8,48(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C4858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,72(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 72);
	// lwz r5,56(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 56);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c4894
	if (ctx.cr6.eq) goto loc_826C4894;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C4894:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C48A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r8,224(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C48BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,264(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 264);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C48D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,268(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C48EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,264(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 264);
	// bl 0x823ef910
	ctx.lr = 0x826C48F4;
	sub_823EF910(ctx, base);
	// lwz r3,268(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 268);
	// bl 0x823ef910
	ctx.lr = 0x826C48FC;
	sub_823EF910(ctx, base);
	// stw r30,240(r25)
	REX_STORE_U32(r25.u32 + 240, r30.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C4914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C4914:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826c4a74
	if (!ctx.cr6.eq) goto loc_826C4A74;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x826c495c
	if (!ctx.cr6.eq) goto loc_826C495C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_826C495C:
	// bctrl 
	ctx.lr = 0x826C4960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r25,44
	ctx.r11.s64 = r25.s64 + 44;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C4984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1ac8
	ctx.lr = 0x826C498C;
	sub_826C1AC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826c49d8
	if (!ctx.cr6.eq) goto loc_826C49D8;
loc_826C4994:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C49A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c5178
	if (!ctx.cr6.eq) goto loc_826C5178;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C49C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1ac8
	ctx.lr = 0x826C49D0;
	sub_826C1AC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c4994
	if (ctx.cr6.eq) goto loc_826C4994;
loc_826C49D8:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1ae0
	ctx.lr = 0x826C49E0;
	sub_826C1AE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C49F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C4A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826c4b30
	if (!ctx.cr6.eq) goto loc_826C4B30;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c4ab0
	if (ctx.cr6.eq) goto loc_826C4AB0;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c4a6c
	if (ctx.cr6.eq) goto loc_826C4A6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
loc_826C4A6C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x826c4718
	goto loc_826C4718;
loc_826C4A74:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 240);
	// lis r14,5734
	r14.s64 = 375783424;
	// ori r14,r14,38
	r14.u64 = r14.u64 | 38;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c4afc
	if (ctx.cr6.eq) goto loc_826C4AFC;
	// lwz r3,272(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 272);
	// bl 0x823ef910
	ctx.lr = 0x826C4AA8;
	sub_823EF910(ctx, base);
	// stw r22,240(r25)
	REX_STORE_U32(r25.u32 + 240, r22.u32);
	// b 0x826c4afc
	goto loc_826C4AFC;
loc_826C4AB0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 240);
	// lis r14,5734
	r14.s64 = 375783424;
	// ori r14,r14,38
	r14.u64 = r14.u64 | 38;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_826C4AD8:
	// beq cr6,0x826c4ae8
	if (ctx.cr6.eq) goto loc_826C4AE8;
	// lwz r3,272(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 272);
	// bl 0x823ef910
	ctx.lr = 0x826C4AE4;
	sub_823EF910(ctx, base);
	// stw r22,240(r25)
	REX_STORE_U32(r25.u32 + 240, r22.u32);
loc_826C4AE8:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C4AFC:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c4b18
	if (ctx.cr6.eq) goto loc_826C4B18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C4B18:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x826a41fc
	ctx.lr = 0x826C4B28;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_826C4B30:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C4B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r11,r25,288
	ctx.r11.s64 = r25.s64 + 288;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,288(r25)
	REX_STORE_U64(r25.u32 + 288, ctx.r7.u64);
	// lwz r6,0(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lwz r5,72(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826C4B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f31,3716(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	f31.f64 = double(temp.f32);
	// bne cr6,0x826c4cb4
	if (!ctx.cr6.eq) goto loc_826C4CB4;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r25,44
	ctx.r11.s64 = r25.s64 + 44;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C4BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826C4BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r31,r11,10
	r31.u64 = ctx.r11.u64 | 10;
loc_826C4BD0:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826b7058
	ctx.lr = 0x826C4BD8;
	sub_826B7058(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// bne cr6,0x826c4bf8
	if (!ctx.cr6.eq) goto loc_826C4BF8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4BF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826c4bd0
	goto loc_826C4BD0;
loc_826C4BF8:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c4c30
	if (ctx.cr6.eq) goto loc_826C4C30;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C4C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C4C30:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,288(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 288);
	// addi r11,r25,44
	ctx.r11.s64 = r25.s64 + 44;
	// addi r30,r25,288
	r30.s64 = r25.s64 + 288;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C4C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r7,252(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 252);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x826C4C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r6,r3,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x826c50b4
	if (!ctx.cr6.eq) goto loc_826C50B4;
	// lfs f0,280(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x826c4c90
	if (!ctx.cr6.gt) goto loc_826C4C90;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bgt cr6,0x826c50b4
	if (ctx.cr6.gt) goto loc_826C50B4;
loc_826C4C90:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x826c4ca0
	if (!ctx.cr6.lt) goto loc_826C4CA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826c50b4
	if (ctx.cr6.lt) goto loc_826C50B4;
loc_826C4CA0:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c5078
	if (ctx.cr6.eq) goto loc_826C5078;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x826c50b8
	goto loc_826C50B8;
loc_826C4CB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826c4e18
	if (!ctx.cr6.eq) goto loc_826C4E18;
	// lwz r30,232(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 232);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c5064
	if (!ctx.cr6.eq) goto loc_826C5064;
	// lwz r24,236(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 236);
	// clrlwi r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c5064
	if (!ctx.cr6.eq) goto loc_826C5064;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r31,r30,31,1,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,36(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm r19,r24,31,1,31
	r19.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 40);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r8,44(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mullw r23,r24,r30
	r23.s64 = int64_t(r24.s32) * int64_t(r30.s32);
	// lwz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mullw r18,r19,r31
	r18.s64 = int64_t(r19.s32) * int64_t(r31.s32);
	// subf r26,r30,r10
	r26.u64 = ctx.r10.u64 - r30.u64;
	// subf r17,r31,r9
	r17.u64 = ctx.r9.u64 - r31.u64;
	// subf r16,r31,r8
	r16.u64 = ctx.r8.u64 - r31.u64;
	// bctrl 
	ctx.lr = 0x826C4D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lwz r27,12(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 12);
	// add r26,r3,r23
	r26.u64 = ctx.r3.u64 + r23.u64;
	// lwz r22,16(r28)
	r22.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r20,20(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r21,r26,r18
	r21.u64 = r26.u64 + r18.u64;
	// bne cr6,0x826c4d50
	if (!ctx.cr6.eq) goto loc_826C4D50;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C4D4C;
	sub_826A1E70(ctx, base);
	// b 0x826c4d7c
	goto loc_826C4D7C;
loc_826C4D50:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826c4d7c
	if (ctx.cr6.eq) goto loc_826C4D7C;
loc_826C4D58:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C4D68;
	sub_826A1E70(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r29,r29,r30
	r29.u64 = r29.u64 + r30.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x826c4d58
	if (!ctx.cr0.eq) goto loc_826C4D58;
loc_826C4D7C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x826c4d98
	if (!ctx.cr6.eq) goto loc_826C4D98;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C4D94;
	sub_826A1E70(ctx, base);
	// b 0x826c4dc8
	goto loc_826C4DC8;
loc_826C4D98:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x826c4dc8
	if (ctx.cr6.eq) goto loc_826C4DC8;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_826C4DA4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C4DB4;
	sub_826A1E70(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r26,r26,r31
	r26.u64 = r26.u64 + r31.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// bne 0x826c4da4
	if (!ctx.cr0.eq) goto loc_826C4DA4;
loc_826C4DC8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x826c4de4
	if (!ctx.cr6.eq) goto loc_826C4DE4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C4DE0;
	sub_826A1E70(ctx, base);
	// b 0x826c4c30
	goto loc_826C4C30;
loc_826C4DE4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x826c4c30
	if (ctx.cr6.eq) goto loc_826C4C30;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_826C4DF0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826C4E00;
	sub_826A1E70(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r21,r21,r31
	r21.u64 = r21.u64 + r31.u64;
	// add r20,r11,r20
	r20.u64 = ctx.r11.u64 + r20.u64;
	// bne 0x826c4df0
	if (!ctx.cr0.eq) goto loc_826C4DF0;
	// b 0x826c4c30
	goto loc_826C4C30;
loc_826C4E18:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x826c4c30
	if (!ctx.cr6.eq) goto loc_826C4C30;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r6,232(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 232);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f11,30348(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 30348);
	ctx.f11.f64 = double(temp.f32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lfs f10,30344(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 30344);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,30340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,30336(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30336);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r31,-32248
	r31.s64 = -2113404928;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r29,r31,30320
	r29.s64 = r31.s64 + 30320;
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vpermwi128 v61,v62,171
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x54));
	// clrlwi r27,r6,31
	r27.u64 = ctx.r6.u32 & 0x1;
	// addi r31,r25,232
	r31.s64 = r25.s64 + 232;
	// subf r30,r6,r4
	r30.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lvx128 v127,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lvrx128 v57,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v56,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v55,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vrlimi128 v58,v62,4,1
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 147), 4));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vsldoi128 v52,v54,v55,12
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 4));
	// vsldoi128 v51,v55,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// vrlimi128 v53,v62,1,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 1));
	// vrlimi128 v52,v62,1,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 1));
	// vmrghw128 v50,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrglw128 v48,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v49,v52,v61
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrglw128 v47,v52,v61
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrghw128 v126,v50,v49
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrglw128 v125,v50,v49
	simde_mm_store_si128((simde__m128i*)v125.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrghw128 v124,v48,v47
	simde_mm_store_si128((simde__m128i*)v124.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// bne cr6,0x826c5064
	if (!ctx.cr6.eq) goto loc_826C5064;
	// lwz r11,236(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 236);
	// addi r24,r25,236
	r24.s64 = r25.s64 + 236;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826c5064
	if (!ctx.cr6.eq) goto loc_826C5064;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4F38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mullw r11,r9,r6
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r4,8
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFFFF;
	// rlwinm r26,r6,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x826c4c30
	if (ctx.cr6.eq) goto loc_826C4C30;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// rlwinm r23,r30,2,0,29
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,30000
	r30.s64 = ctx.r11.s64 + 30000;
	// addi r29,r9,8224
	r29.s64 = ctx.r9.s64 + 8224;
	// addi r28,r6,8208
	r28.s64 = ctx.r6.s64 + 8208;
loc_826C4F8C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r27,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x826c504c
	if (!ctx.cr6.gt) goto loc_826C504C;
	// vspltisw128 v46,3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_set1_epi32(int(0x3)));
	// vcsxwfp128 v10,v46,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
loc_826C4FAC:
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r21,r8,r3
	r21.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// lvx128 v12,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r21,r21,16
	r21.u64 = __builtin_rotateleft32(r21.u32, 16);
	// lvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,96
	r20.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r19,r9,r4
	r19.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// or r7,r19,r7
	ctx.r7.u64 = r19.u64 | ctx.r7.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r7,r7,0,24,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r7,r9,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 | r21.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lvlx128 v45,r0,r20
	temp.u32 = r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v44,v45,v45,4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 12));
	// vupkd3d128 v11,v44,0
	vTemp.u32[0] = ctx.v44.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v44.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v44.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v44.u8[2] | 0x3F800000;
	ctx.v11 = vTemp;
	// vmaddfp v0,v0,v11,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v43,v0,v127
	simde_mm_store_ps(ctx.v43.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v127.f32)));
	// vspltw128 v42,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0x55));
	// vspltw128 v0,v43,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xAA));
	// vspltw128 v11,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// vmulfp128 v12,v42,v124
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(v124.f32)));
	// vmaddcfp128 v0,v125,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v125.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp128 v0,v11,v126,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(v126.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v0,v13,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v41,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vpkd3d128 v41,v12,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v12.f32[0] >= 3.0f) ? 3.0f : (ctx.v12.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v12.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v12.f32[1] >= 3.0f) ? 3.0f : (ctx.v12.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v12.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v12.f32[2] >= 3.0f) ? 3.0f : (ctx.v12.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v12.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v12.f32[3] >= 3.0f) ? 3.0f : (ctx.v12.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v12.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v41.u32[3] = temp.u32;
	// vspltw128 v40,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// stvewx128 v40,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826c4fac
	if (ctx.cr6.lt) goto loc_826C4FAC;
loc_826C504C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r10,r23,r10
	ctx.r10.u64 = r23.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826c4f8c
	if (ctx.cr6.lt) goto loc_826C4F8C;
	// b 0x826c4c30
	goto loc_826C4C30;
loc_826C5064:
	// lwz r11,240(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 240);
	// lis r14,-32768
	r14.s64 = -2147483648;
	// ori r14,r14,16385
	r14.u64 = r14.u64 | 16385;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x826c4ad8
	goto loc_826C4AD8;
loc_826C5078:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1bc8
	ctx.lr = 0x826C5080;
	sub_826C1BC8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C509C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r8,200(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 200);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C50B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826c50d8
	goto loc_826C50D8;
loc_826C50B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826C50B8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C50D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
loc_826C50D8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C50EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c5120
	if (!ctx.cr6.eq) goto loc_826C5120;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x826c5120
	if (!ctx.cr6.gt) goto loc_826C5120;
	// lfs f0,280(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x826c5120
	if (!ctx.cr6.gt) goto loc_826C5120;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// bl 0x823ecca8
	ctx.lr = 0x826C5118;
	sub_823ECCA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826C5120:
	// lwz r30,420(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826c515c
	if (ctx.cr6.eq) goto loc_826C515C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C5140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c5154
	if (ctx.cr6.eq) goto loc_826C5154;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x826c515c
	goto loc_826C515C;
loc_826C5154:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_826C515C:
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c4ae8
	if (ctx.cr6.eq) goto loc_826C4AE8;
	// lwz r3,76(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826c4ae8
	goto loc_826C4AE8;
loc_826C5178:
	// lis r14,5734
	r14.s64 = 375783424;
	// ori r14,r14,232
	r14.u64 = r14.u64 | 232;
	// b 0x826c4afc
	goto loc_826C4AFC;
}

DEFINE_REX_FUNC(sub_8272B720) {
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
	ctx.lr = 0x8272B728;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8272b738
	if (!ctx.cr6.eq) goto loc_8272B738;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x826a1cd0
	return;
loc_8272B738:
	// fmul f0,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64 * ctx.f2.f64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fmul f13,f5,f5
	ctx.f13.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lwz r20,15376(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 15376);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lwz r19,15380(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 15380);
	// lwz r8,15384(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 15384);
	// lwz r7,15388(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15388);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r28.s64 = temp.s64;
	// lwz r5,15392(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// fmadd f12,f1,f1,f0
	ctx.f12.f64 = std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f0.f64);
	// fmadd f11,f4,f4,f13
	ctx.f11.f64 = std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f13.f64);
	// fsqrt f0,f12
	ctx.f0.f64 = sqrt(ctx.f12.f64);
	// fsqrt f13,f11
	ctx.f13.f64 = sqrt(ctx.f11.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8272b780
	if (!ctx.cr6.lt) goto loc_8272B780;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x8272b784
	goto loc_8272B784;
loc_8272B780:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8272B784:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f10,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x8272b7b8
	if (!ctx.cr6.lt) goto loc_8272B7B8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8272b7a4
	if (!ctx.cr6.lt) goto loc_8272B7A4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x8272b7a8
	goto loc_8272B7A8;
loc_8272B7A4:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_8272B7A8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f12,-21456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -21456);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8272b7ec
	if (!ctx.cr6.gt) goto loc_8272B7EC;
loc_8272B7B8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8272b7c8
	if (!ctx.cr6.lt) goto loc_8272B7C8;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x8272b7cc
	goto loc_8272B7CC;
loc_8272B7C8:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8272B7CC:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x8272b7e4
	if (!ctx.cr6.lt) goto loc_8272B7E4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8272b7f0
	if (ctx.cr6.lt) goto loc_8272B7F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8272b7f0
	goto loc_8272B7F0;
loc_8272B7E4:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x8272b7f0
	goto loc_8272B7F0;
loc_8272B7EC:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8272B7F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f13,-15880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -15880);
	// lfd f12,32424(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// fmadd f13,f7,f13,f12
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f11.u64);
	// lwz r4,-164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8272b828
	if (!ctx.cr6.gt) goto loc_8272B828;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// ble cr6,0x8272b82c
	if (!ctx.cr6.gt) goto loc_8272B82C;
	// li r4,256
	ctx.r4.s64 = 256;
	// b 0x8272b82c
	goto loc_8272B82C;
loc_8272B828:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8272B82C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,12272(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12272);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8272b850
	if (!ctx.cr6.lt) goto loc_8272B850;
	// li r30,512
	r30.s64 = 512;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r22,10
	r22.s64 = 10;
	// li r6,511
	ctx.r6.s64 = 511;
	// b 0x8272b87c
	goto loc_8272B87C;
loc_8272B850:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8272b86c
	if (!ctx.cr6.lt) goto loc_8272B86C;
	// li r30,256
	r30.s64 = 256;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r22,9
	r22.s64 = 9;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x8272b87c
	goto loc_8272B87C;
loc_8272B86C:
	// li r30,128
	r30.s64 = 128;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r22,8
	r22.s64 = 8;
	// li r6,127
	ctx.r6.s64 = 127;
loc_8272B87C:
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// lwz r31,15356(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 15356);
	// lwz r29,15364(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// mullw r17,r10,r30
	r17.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// std r9,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r9.u64);
	// stw r17,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, r17.u32);
	// mullw r16,r31,r30
	r16.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// stw r16,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, r16.u32);
	// li r21,0
	r21.s64 = 0;
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f1
	ctx.f12.f64 = ctx.f13.f64 * ctx.f1.f64;
	// fmul f11,f13,f3
	ctx.f11.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmul f9,f13,f6
	ctx.f9.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmul f10,f13,f4
	ctx.f10.f64 = ctx.f13.f64 * ctx.f4.f64;
	// fmul f7,f13,f5
	ctx.f7.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmul f8,f13,f2
	ctx.f8.f64 = ctx.f13.f64 * ctx.f2.f64;
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f6.u64);
	// fctiwz f5,f11
	ctx.f5.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f5.u64);
	// fctiwz f3,f9
	ctx.f3.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// lwz r18,-164(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// fctiwz f4,f10
	ctx.f4.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stfd f4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.f4.u64);
	// fctiwz f1,f7
	ctx.f1.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.f3.u64);
	// fctiwz f2,f8
	ctx.f2.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// lwz r31,-180(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stfd f2,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f2.u64);
	// lwz r9,-188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stfd f1,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f1.u64);
	// ble cr6,0x8272bb88
	if (!ctx.cr6.gt) goto loc_8272BB88;
	// subf r27,r31,r9
	r27.u64 = ctx.r9.u64 - r31.u64;
	// subf r26,r18,r10
	r26.u64 = ctx.r10.u64 - r18.u64;
	// addi r23,r5,-1
	r23.s64 = ctx.r5.s64 + -1;
	// addi r24,r7,-1
	r24.s64 = ctx.r7.s64 + -1;
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
loc_8272B91C:
	// lwz r10,15360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r31,1
	r31.s64 = 1;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272baa4
	if (!ctx.cr6.gt) goto loc_8272BAA4;
loc_8272B938:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add. r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x8272ba94
	if (ctx.cr0.lt) goto loc_8272BA94;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r17.s32, ctx.xer);
	// bge cr6,0x8272ba94
	if (!ctx.cr6.lt) goto loc_8272BA94;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272ba94
	if (ctx.cr6.lt) goto loc_8272BA94;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r16.s32, ctx.xer);
	// bge cr6,0x8272ba94
	if (!ctx.cr6.lt) goto loc_8272BA94;
	// lwz r15,20(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// mullw r7,r7,r15
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r15.s32);
	// lwz r5,15372(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15372);
	// sraw r10,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// and r14,r8,r6
	r14.u64 = ctx.r8.u64 & ctx.r6.u64;
	// and r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subf r7,r14,r30
	ctx.r7.u64 = r30.u64 - r14.u64;
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lbzx r15,r15,r10
	r15.u64 = REX_LOAD_U8(r15.u32 + ctx.r10.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// stw r10,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// mullw r10,r15,r14
	ctx.r10.s64 = int64_t(r15.s32) * int64_t(r14.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r31,-208(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stb r5,1(r29)
	REX_STORE_U8(r29.u32 + 1, ctx.r5.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// beq cr6,0x8272ba90
	if (ctx.cr6.eq) goto loc_8272BA90;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// std r9,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// lwz r17,-204(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// sraw r7,r8,r22
	temp.u32 = r22.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r16,-200(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// sraw r10,r9,r22
	temp.u32 = r22.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// and r15,r31,r6
	r15.u64 = r31.u64 & ctx.r6.u64;
	// add r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 + r20.u64;
	// and r14,r5,r6
	r14.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subf r5,r15,r30
	ctx.r5.u64 = r30.u64 - r15.u64;
	// lbzx r31,r7,r20
	r31.u64 = REX_LOAD_U8(ctx.r7.u32 + r20.u32);
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - r14.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stw r5,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// mullw r5,r9,r15
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r15.s32);
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r31.u32);
	// lwz r9,-192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r10,-208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// li r31,0
	r31.s64 = 0;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r7,r19
	ctx.r10.u64 = ctx.r7.u64 + r19.u64;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r5,1(r24)
	ea = 1 + r24.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	r24.u32 = ea;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r7,r7,r19
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r19.u32);
	// stw r7,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// mullw r7,r10,r15
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r15.s32);
	// mullw r10,r5,r14
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r14.s32);
	// lwz r5,-192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// ld r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sraw r10,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r10,1(r23)
	ea = 1 + r23.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r23.u32 = ea;
	// b 0x8272ba94
	goto loc_8272BA94;
loc_8272BA90:
	// li r31,1
	r31.s64 = 1;
loc_8272BA94:
	// lwz r10,15360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272b938
	if (ctx.cr6.lt) goto loc_8272B938;
loc_8272BAA4:
	// lwz r9,-172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r25,r21,1
	r25.s64 = r21.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r26,r9
	r31.u64 = r26.u64 + ctx.r9.u64;
	// lwz r9,-164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// li r26,0
	r26.s64 = 0;
	// add r27,r27,r9
	r27.u64 = r27.u64 + ctx.r9.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// ble cr6,0x8272bb68
	if (!ctx.cr6.gt) goto loc_8272BB68;
loc_8272BACC:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add. r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x8272bb58
	if (ctx.cr0.lt) goto loc_8272BB58;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r17.s32, ctx.xer);
	// bge cr6,0x8272bb58
	if (!ctx.cr6.lt) goto loc_8272BB58;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8272bb58
	if (ctx.cr6.lt) goto loc_8272BB58;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r16.s32, ctx.xer);
	// bge cr6,0x8272bb58
	if (!ctx.cr6.lt) goto loc_8272BB58;
	// lwz r21,20(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// mullw r10,r10,r21
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r21.s32);
	// lwz r7,15372(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15372);
	// sraw r5,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r7,r5,r30
	ctx.r7.u64 = r30.u64 - ctx.r5.u64;
	// and r15,r9,r6
	r15.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subf r14,r15,r7
	r14.u64 = ctx.r7.u64 - r15.u64;
	// lbzx r7,r21,r10
	ctx.r7.u64 = REX_LOAD_U8(r21.u32 + ctx.r10.u32);
	// lbz r21,0(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// mullw r10,r14,r21
	ctx.r10.s64 = int64_t(r14.s32) * int64_t(r21.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r5,-192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r7,r5,r15
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r15.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sraw r10,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r10,1(r29)
	ea = 1 + r29.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r29.u32 = ea;
loc_8272BB58:
	// lwz r10,15360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272bacc
	if (ctx.cr6.lt) goto loc_8272BACC;
loc_8272BB68:
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r21,r25,1
	r21.s64 = r25.s64 + 1;
	// lwz r9,15364(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// add r26,r31,r10
	r26.u64 = r31.u64 + ctx.r10.u64;
	// lwz r10,-164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r9.s32, ctx.xer);
	// add r27,r27,r10
	r27.u64 = r27.u64 + ctx.r10.u64;
	// blt cr6,0x8272b91c
	if (ctx.cr6.lt) goto loc_8272B91C;
loc_8272BB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8274CA70) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8274cab4
	if (!ctx.cr6.gt) goto loc_8274CAB4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8274CA98:
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274ca98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CA98;
loc_8274CAB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8274cae0
	if (!ctx.cr6.gt) goto loc_8274CAE0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8274CAC4:
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274cac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CAC4;
loc_8274CAE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8274CAF0:
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8274caf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274CAF0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274D2D8) {
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
	ctx.lr = 0x8274D2E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20904);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274d45c
	if (ctx.cr6.eq) goto loc_8274D45C;
	// lwz r10,20908(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8274d45c
	if (!ctx.cr6.eq) goto loc_8274D45C;
	// lwz r11,15084(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15084);
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8274d510
	if (!ctx.cr6.eq) goto loc_8274D510;
	// lwz r29,15888(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15888);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,172(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,3744(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,220(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bctrl 
	ctx.lr = 0x8274D358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,3748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,20904(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r29,15884(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15884);
	// cntlzw r30,r30
	r30.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r28,176(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// rlwinm r30,r30,27,31,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// srawi r6,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r6.s64 = r28.s32 >> 1;
	// lwz r7,224(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8274D3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,20904(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r30,15888(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 15888);
	// rlwinm r28,r5,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r29,172(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 172);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// srawi r5,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r5.s64 = r29.s32 >> 1;
	// lwz r6,220(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r3,3744(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bctrl 
	ctx.lr = 0x8274D400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,20904(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r30,196(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 196);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r29,15884(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15884);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,224(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r3,3748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r31,176(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// srawi r6,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r6.s64 = r31.s32 >> 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bctrl 
	ctx.lr = 0x8274D454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_8274D45C:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r7,15888(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15888);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// and r30,r5,r4
	r30.u64 = ctx.r5.u64 & ctx.r4.u64;
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lwz r6,220(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r5,172(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274D4B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// lwz r4,3752(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,3748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// cntlzw r26,r11
	r26.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,224(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,176(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r29,208(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r27,196(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r31,15884(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 15884);
	// srawi r28,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r28.s64 = r29.s32 >> 1;
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rlwinm r31,r26,27,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x1;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// bctrl 
	ctx.lr = 0x8274D510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274D510:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8275DE48) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
loc_8275DE4C:
	// subf. r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bge 0x8275de4c
	if (!ctx.cr0.lt) goto loc_8275DE4C;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275E000) {
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
	ctx.lr = 0x8275E008;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// lwz r8,448(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8275e0b8
	if (ctx.cr6.eq) goto loc_8275E0B8;
	// lwz r11,432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275e080
	if (!ctx.cr6.eq) goto loc_8275E080;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
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
	// bge 0x8275e064
	if (!ctx.cr0.lt) goto loc_8275E064;
	// bl 0x82725e38
	ctx.lr = 0x8275E064;
	sub_82725E38(ctx, base);
loc_8275E064:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8275e728
	if (!ctx.cr6.eq) goto loc_8275E728;
loc_8275E080:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8275e0c4
	if (ctx.cr6.eq) goto loc_8275E0C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r26)
	REX_STORE_U16(r26.u32 + 14, ctx.r11.u16);
	// sth r11,16(r26)
	REX_STORE_U16(r26.u32 + 16, ctx.r11.u16);
	// sth r11,18(r26)
	REX_STORE_U16(r26.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8275E0B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8275E0C4:
	// lwz r11,440(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 440);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275e208
	if (ctx.cr6.eq) goto loc_8275E208;
	// lwz r10,2164(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2164);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8275e1c4
	if (ctx.cr6.lt) goto loc_8275E1C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
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
	// bge cr6,0x8275e1bc
	if (!ctx.cr6.lt) goto loc_8275E1BC;
loc_8275E124:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8275e150
	if (ctx.cr6.lt) goto loc_8275E150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8275E140;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8275e124
	if (ctx.cr6.eq) goto loc_8275E124;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8275e334
	goto loc_8275E334;
loc_8275E150:
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
loc_8275E1BC:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8275e334
	goto loc_8275E334;
loc_8275E1C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8275E1CC;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
loc_8275E1D4:
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
	// bl 0x82725f80
	ctx.lr = 0x8275E1EC;
	sub_82725F80(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8275e1d4
	if (ctx.cr6.lt) goto loc_8275E1D4;
	// b 0x8275e334
	goto loc_8275E334;
loc_8275E208:
	// lbz r4,2160(r27)
	ctx.r4.u64 = REX_LOAD_U8(r27.u32 + 2160);
	// lwz r28,2152(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 2152);
	// subfic r11,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r28.u32);
	// extsh r29,r7
	r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8275e2f4
	if (ctx.cr6.lt) goto loc_8275E2F4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
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
	// bge cr6,0x8275e2ec
	if (!ctx.cr6.lt) goto loc_8275E2EC;
loc_8275E254:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8275e280
	if (ctx.cr6.lt) goto loc_8275E280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8275E270;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8275e254
	if (ctx.cr6.eq) goto loc_8275E254;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8275e334
	goto loc_8275E334;
loc_8275E280:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r4,r10,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
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
loc_8275E2EC:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8275e334
	goto loc_8275E334;
loc_8275E2F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8275E2FC;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
loc_8275E304:
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
	// bl 0x82725f80
	ctx.lr = 0x8275E31C;
	sub_82725F80(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8275e304
	if (ctx.cr6.lt) goto loc_8275E304;
loc_8275E334:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8275e728
	if (!ctx.cr6.eq) goto loc_8275E728;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8275e728
	if (ctx.cr6.lt) goto loc_8275E728;
	// cmpwi cr6,r29,127
	ctx.cr6.compare<int32_t>(r29.s32, 127, ctx.xer);
	// bgt cr6,0x8275e728
	if (ctx.cr6.gt) goto loc_8275E728;
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// beq cr6,0x8275e3d8
	if (ctx.cr6.eq) goto loc_8275E3D8;
	// xori r29,r29,64
	r29.u64 = r29.u64 ^ 64;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// cntlzw r10,r29
	ctx.r10.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r11,r9,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r8,324(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 324);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8275e3cc
	if (ctx.cr6.eq) goto loc_8275E3CC;
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
	// bge 0x8275e3b8
	if (!ctx.cr0.lt) goto loc_8275E3B8;
	// bl 0x82725e38
	ctx.lr = 0x8275E3B8;
	sub_82725E38(ctx, base);
loc_8275E3B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// rlwimi r11,r10,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x8275e534
	goto loc_8275E534;
loc_8275E3CC:
	// rlwimi r11,r28,19,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 19) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x8275e534
	goto loc_8275E534;
loc_8275E3D8:
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r31,r8,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0x1;
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// bge 0x8275e408
	if (!ctx.cr0.lt) goto loc_8275E408;
	// bl 0x82725e38
	ctx.lr = 0x8275E408;
	sub_82725E38(ctx, base);
loc_8275E408:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r9,400(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 400);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8275e524
	if (ctx.cr6.eq) goto loc_8275E524;
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
	// bge 0x8275e44c
	if (!ctx.cr0.lt) goto loc_8275E44C;
	// bl 0x82725e38
	ctx.lr = 0x8275E44C;
	sub_82725E38(ctx, base);
loc_8275E44C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8275e468
	if (!ctx.cr6.eq) goto loc_8275E468;
	// lbz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stb r10,20(r26)
	REX_STORE_U8(r26.u32 + 20, ctx.r10.u8);
	// b 0x8275e500
	goto loc_8275E500;
loc_8275E468:
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
	// bge 0x8275e490
	if (!ctx.cr0.lt) goto loc_8275E490;
	// bl 0x82725e38
	ctx.lr = 0x8275E490;
	sub_82725E38(ctx, base);
loc_8275E490:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8275e4ac
	if (!ctx.cr6.eq) goto loc_8275E4AC;
	// lbz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// b 0x8275e4fc
	goto loc_8275E4FC;
loc_8275E4AC:
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
	// bge 0x8275e4d4
	if (!ctx.cr0.lt) goto loc_8275E4D4;
	// bl 0x82725e38
	ctx.lr = 0x8275E4D4;
	sub_82725E38(ctx, base);
loc_8275E4D4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8275e4ec
	if (ctx.cr6.eq) goto loc_8275E4EC;
	// lbz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 20);
	// ori r10,r11,34
	ctx.r10.u64 = ctx.r11.u64 | 34;
	// stb r10,20(r26)
	REX_STORE_U8(r26.u32 + 20, ctx.r10.u8);
	// b 0x8275e500
	goto loc_8275E500;
loc_8275E4EC:
	// lbz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
loc_8275E4FC:
	// stb r9,20(r26)
	REX_STORE_U8(r26.u32 + 20, ctx.r9.u8);
loc_8275E500:
	// lbz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 20);
	// li r12,179
	ctx.r12.s64 = 179;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// rlwinm r8,r9,1,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x40;
	// stb r9,20(r26)
	REX_STORE_U8(r26.u32 + 20, ctx.r9.u8);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,20(r26)
	REX_STORE_U8(r26.u32 + 20, ctx.r6.u8);
loc_8275E524:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8275e728
	if (!ctx.cr6.eq) goto loc_8275E728;
loc_8275E534:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r9,392(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 392);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8275e5c0
	if (ctx.cr6.eq) goto loc_8275E5C0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8275e5c0
	if (ctx.cr6.eq) goto loc_8275E5C0;
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
	// bge 0x8275e57c
	if (!ctx.cr0.lt) goto loc_8275E57C;
	// bl 0x82725e38
	ctx.lr = 0x8275E57C;
	sub_82725E38(ctx, base);
loc_8275E57C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8275e5b4
	if (ctx.cr6.eq) goto loc_8275E5B4;
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
	// bge 0x8275e5b0
	if (!ctx.cr0.lt) goto loc_8275E5B0;
	// bl 0x82725e38
	ctx.lr = 0x8275E5B0;
	sub_82725E38(ctx, base);
loc_8275E5B0:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
loc_8275E5B4:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_8275E5C0:
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r10,14(r26)
	REX_STORE_U8(r26.u32 + 14, ctx.r10.u8);
	// stb r9,15(r26)
	REX_STORE_U8(r26.u32 + 15, ctx.r9.u8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r8,16(r26)
	REX_STORE_U8(r26.u32 + 16, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r7,17(r26)
	REX_STORE_U8(r26.u32 + 17, ctx.r7.u8);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// stb r5,18(r26)
	REX_STORE_U8(r26.u32 + 18, ctx.r5.u8);
	// stb r4,19(r26)
	REX_STORE_U8(r26.u32 + 19, ctx.r4.u8);
	// lwz r3,436(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 436);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275e71c
	if (ctx.cr6.eq) goto loc_8275E71C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r10,328(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8275e71c
	if (ctx.cr6.eq) goto loc_8275E71C;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8275e71c
	if (!ctx.cr6.eq) goto loc_8275E71C;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8275e71c
	if (!ctx.cr6.eq) goto loc_8275E71C;
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
	// bge 0x8275e66c
	if (!ctx.cr0.lt) goto loc_8275E66C;
	// bl 0x82725e38
	ctx.lr = 0x8275E66C;
	sub_82725E38(ctx, base);
loc_8275E66C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r31,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8275e71c
	if (!ctx.cr6.eq) goto loc_8275E71C;
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
	// bge 0x8275e6ac
	if (!ctx.cr0.lt) goto loc_8275E6AC;
	// bl 0x82725e38
	ctx.lr = 0x8275E6AC;
	sub_82725E38(ctx, base);
loc_8275E6AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8275e6cc
	if (!ctx.cr6.eq) goto loc_8275E6CC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,8,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8275E6CC:
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
	// bge 0x8275e6f4
	if (!ctx.cr0.lt) goto loc_8275E6F4;
	// bl 0x82725e38
	ctx.lr = 0x8275E6F4;
	sub_82725E38(ctx, base);
loc_8275E6F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8275e714
	if (!ctx.cr6.eq) goto loc_8275E714;
	// rlwimi r11,r28,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8275E714:
	// rlwimi r11,r28,25,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_8275E71C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8275E728:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82791D30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// b 0x8212dd98
	sub_8212DD98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82791D90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82791E78) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8269d1d0
	ctx.lr = 0x82791E94;
	sub_8269D1D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82791EA0;
	sub_8269D1B8(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,1052
	ctx.r9.s64 = ctx.r10.s64 + 1052;
	// lis r8,-32135
	ctx.r8.s64 = -2105999360;
	// stw r31,1052(r10)
	REX_STORE_U32(ctx.r10.u32 + 1052, r31.u32);
	// addi r3,r8,12288
	ctx.r3.s64 = ctx.r8.s64 + 12288;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bl 0x8269d008
	ctx.lr = 0x82791EC0;
	sub_8269D008(ctx, base);
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

DEFINE_REX_FUNC(sub_827922B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827922B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r30,3
	r30.s64 = 3;
	// addi r31,r11,1728
	r31.s64 = ctx.r11.s64 + 1728;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r29,r11,1072
	r29.s64 = ctx.r11.s64 + 1072;
loc_827922D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216abd8
	ctx.lr = 0x827922D8;
	sub_8216ABD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ee520
	ctx.lr = 0x827922E4;
	sub_822EE520(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,656
	r31.s64 = r31.s64 + 656;
	// bge 0x827922d0
	if (!ctx.cr0.lt) goto loc_827922D0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82792958) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-8112
	r31.s64 = ctx.r11.s64 + -8112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x826a2e60
	ctx.lr = 0x82792980;
	sub_826A2E60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x826a1e70
	ctx.lr = 0x82792994;
	sub_826A1E70(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x826a2e60
	ctx.lr = 0x827929A4;
	sub_826A2E60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82793628) {
	REX_FUNC_PROLOGUE();
	// .long 0x200028b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827936F8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002ca
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793808) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000213
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793938) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793A88) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010066
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793C28) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010126
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793DE8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101dc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793FC8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000045
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827941D8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200030c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794400) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8279A588) {
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
	ctx.lr = 0x8279A590;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x8279a68c
	if (ctx.cr6.lt) goto loc_8279A68C;
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
	// bge cr6,0x8279a684
	if (!ctx.cr6.lt) goto loc_8279A684;
loc_8279A5EC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279a618
	if (ctx.cr6.lt) goto loc_8279A618;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8279A608;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8279a5ec
	if (ctx.cr6.eq) goto loc_8279A5EC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8279a6cc
	goto loc_8279A6CC;
loc_8279A618:
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
loc_8279A684:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8279a6cc
	goto loc_8279A6CC;
loc_8279A68C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279A694;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_8279A69C:
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
	ctx.lr = 0x8279A6B4;
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
	// blt cr6,0x8279a69c
	if (ctx.cr6.lt) goto loc_8279A69C;
loc_8279A6CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x8279a868
	if (!ctx.cr6.eq) goto loc_8279A868;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8279a7b4
	if (ctx.cr6.eq) goto loc_8279A7B4;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8279a754
	if (!ctx.cr6.lt) goto loc_8279A754;
loc_8279A6FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a754
	if (ctx.cr6.eq) goto loc_8279A754;
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
	// bge 0x8279a744
	if (!ctx.cr0.lt) goto loc_8279A744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A744;
	sub_82725E38(ctx, base);
loc_8279A744:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a6fc
	if (ctx.cr6.gt) goto loc_8279A6FC;
loc_8279A754:
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
	// bge 0x8279a78c
	if (!ctx.cr0.lt) goto loc_8279A78C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A78C;
	sub_82725E38(ctx, base);
loc_8279A78C:
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r3,r9,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8279A7B4:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8279a818
	if (!ctx.cr6.lt) goto loc_8279A818;
loc_8279A7C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a818
	if (ctx.cr6.eq) goto loc_8279A818;
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
	// bge 0x8279a808
	if (!ctx.cr0.lt) goto loc_8279A808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A808;
	sub_82725E38(ctx, base);
loc_8279A808:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a7c0
	if (ctx.cr6.gt) goto loc_8279A7C0;
loc_8279A818:
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
	// bge 0x8279a850
	if (!ctx.cr0.lt) goto loc_8279A850;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A850;
	sub_82725E38(ctx, base);
loc_8279A850:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8279A868:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r30,125
	ctx.cr6.compare<int32_t>(r30.s32, 125, ctx.xer);
	// bne cr6,0x8279a95c
	if (!ctx.cr6.eq) goto loc_8279A95C;
	// lhz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 72);
	// lhz r9,70(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 70);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x8279a894
	if (!ctx.cr6.gt) goto loc_8279A894;
loc_8279A88C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279a938
	goto loc_8279A938;
loc_8279A894:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8279a88c
	if (ctx.cr6.eq) goto loc_8279A88C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8279a8fc
	if (!ctx.cr6.gt) goto loc_8279A8FC;
loc_8279A8A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a8fc
	if (ctx.cr6.eq) goto loc_8279A8FC;
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
	// bge 0x8279a8ec
	if (!ctx.cr0.lt) goto loc_8279A8EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A8EC;
	sub_82725E38(ctx, base);
loc_8279A8EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a8a4
	if (ctx.cr6.gt) goto loc_8279A8A4;
loc_8279A8FC:
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
	// bge 0x8279a934
	if (!ctx.cr0.lt) goto loc_8279A934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A934;
	sub_82725E38(ctx, base);
loc_8279A934:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8279A938:
	// lhz r9,72(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 72);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// sraw r3,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8279A95C:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r28,r7,28
	r28.u64 = ctx.r7.u32 & 0xF;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// srawi r4,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 24;
	// clrlwi r27,r6,24
	r27.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r26,r5,24
	r26.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r25,r4,24
	r25.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x8279a9a4
	if (!ctx.cr6.gt) goto loc_8279A9A4;
loc_8279A99C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8279aa48
	goto loc_8279AA48;
loc_8279A9A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8279a99c
	if (ctx.cr6.eq) goto loc_8279A99C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8279aa0c
	if (!ctx.cr6.gt) goto loc_8279AA0C;
loc_8279A9B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279aa0c
	if (ctx.cr6.eq) goto loc_8279AA0C;
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
	// bge 0x8279a9fc
	if (!ctx.cr0.lt) goto loc_8279A9FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A9FC;
	sub_82725E38(ctx, base);
loc_8279A9FC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a9b4
	if (ctx.cr6.gt) goto loc_8279A9B4;
loc_8279AA0C:
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
	// bge 0x8279aa44
	if (!ctx.cr0.lt) goto loc_8279AA44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279AA44;
	sub_82725E38(ctx, base);
loc_8279AA44:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8279AA48:
	// li r9,1
	ctx.r9.s64 = 1;
	// sraw r11,r10,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// slw r9,r9,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// xor r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r11,r25,r6
	ctx.r11.u64 = ctx.r6.u64 - r25.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827B9620) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cac
	ctx.lr = 0x827B9628;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x827b9774
	if (ctx.cr6.gt) goto loc_827B9774;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827b98ac
	if (!ctx.cr6.gt) goto loc_827B98AC;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r3,-32
	ctx.r3.s64 = -32;
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// li r9,-96
	ctx.r9.s64 = -96;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,48
	ctx.r7.s64 = 48;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// li r31,-80
	r31.s64 = -80;
	// li r25,64
	r25.s64 = 64;
	// li r26,16
	r26.s64 = 16;
loc_827B9680:
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lvx128 v11,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lvx128 v63,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v12,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// lvx128 v61,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v6,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vaddshs v5,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v4,v10,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v4,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v30,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v24,v28,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v27,v1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v22,v21
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vpkshus128 v58,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r9,-96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stvx128 v58,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r29,-72(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stwx r7,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stwx r29,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r29.u32);
	// bne cr6,0x827b9754
	if (!ctx.cr6.eq) goto loc_827B9754;
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// lwz r7,-84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r29,-76(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r28,-68(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stwx r7,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r7.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stwx r28,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
loc_827B9754:
	// add r5,r30,r5
	ctx.r5.u64 = r30.u64 + ctx.r5.u64;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// li r9,-96
	ctx.r9.s64 = -96;
	// li r8,-48
	ctx.r8.s64 = -48;
	// li r7,48
	ctx.r7.s64 = 48;
	// bdnz 0x827b9680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B9680;
	// b 0x826a1cfc
	return;
loc_827B9774:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// li r8,-96
	ctx.r8.s64 = -96;
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r31,-80
	r31.s64 = -80;
	// li r3,-32
	ctx.r3.s64 = -32;
	// li r25,64
	r25.s64 = 64;
	// li r26,16
	r26.s64 = 16;
	// li r27,-16
	r27.s64 = -16;
	// li r28,32
	r28.s64 = 32;
	// li r29,80
	r29.s64 = 80;
	// li r30,-64
	r30.s64 = -64;
loc_827B97AC:
	// lvx128 v12,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v8,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v5,v8,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 14));
	// lvx128 v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v9,v12,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v56,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v4,v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 14));
	// lvx128 v10,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v55,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// lvx128 v9,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v12,v11,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// lvx128 v5,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v7
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v54,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v31,v6,v10,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v8,v10,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vslh v23,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v30,v5,v9,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// vaddshs v28,v12,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v4,v9,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vslh v22,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v31,v6
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// vaddshs v27,v8,v10
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v25,v30,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v4,v9
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v21,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v23,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v14,v22,v1
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v12,v21,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v11,v20,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v10,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v9,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v7,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v6,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v51,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vpkshus128 v50,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvx128 v50,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x827b97ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B97AC;
loc_827B98AC:
	// b 0x826a1cfc
	return;
}

