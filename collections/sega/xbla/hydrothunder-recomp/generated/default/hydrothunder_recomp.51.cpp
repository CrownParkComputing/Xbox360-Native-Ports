#include "hydrothunder_funcs.51.h"

DEFINE_REX_FUNC(sub_82122690) {
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
	ctx.lr = 0x82122698;
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
	// b 0x821226d8
	goto loc_821226D8;
loc_821226B4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821226C0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821226d0
	if (!ctx.cr0.lt) goto loc_821226D0;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821226d8
	goto loc_821226D8;
loc_821226D0:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821226D8:
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821226b4
	if (ctx.cr0.eq) goto loc_821226B4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82122710
	if (ctx.cr6.eq) goto loc_82122710;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82122700;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82122710
	if (ctx.cr0.lt) goto loc_82122710;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8212271c
	goto loc_8212271C;
loc_82122710:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8212271C:
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

DEFINE_REX_FUNC(sub_8212B0E0) {
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
	ctx.lr = 0x8212B0E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r28,r6,12
	r28.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212b130
	if (!ctx.cr6.eq) goto loc_8212B130;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8212B118:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8212B11C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8212B128:
	// bl 0x8212b570
	ctx.lr = 0x8212B12C;
	sub_8212B570(ctx, base);
	// b 0x8212b28c
	goto loc_8212B28C;
loc_8212B130:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212b15c
	if (!ctx.cr6.eq) goto loc_8212B15C;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B14C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b270
	if (!ctx.cr0.lt) goto loc_8212B270;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8212b118
	goto loc_8212B118;
loc_8212B15C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212b18c
	if (!ctx.cr6.eq) goto loc_8212B18C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B174;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b270
	if (!ctx.cr0.lt) goto loc_8212B270;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8212b11c
	goto loc_8212B11C;
loc_8212B18C:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B19C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b1fc
	if (!ctx.cr0.lt) goto loc_8212B1FC;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82268e98
	ctx.lr = 0x8212B1B0;
	sub_82268E98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B1C0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b1fc
	if (!ctx.cr0.lt) goto loc_8212B1FC;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,57(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212b1f0
	if (ctx.cr0.eq) goto loc_8212B1F0;
loc_8212B1E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8212b128
	goto loc_8212B128;
loc_8212B1F0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8212B1F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8212b128
	goto loc_8212B128;
loc_8212B1FC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B208;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b270
	if (!ctx.cr0.lt) goto loc_8212B270;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a938
	ctx.lr = 0x8212B21C;
	sub_8212A938(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212b244
	if (ctx.cr6.eq) goto loc_8212B244;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B23C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212b270
	if (!ctx.cr0.lt) goto loc_8212B270;
loc_8212B244:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,57(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212b268
	if (ctx.cr0.eq) goto loc_8212B268;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8212b1e8
	goto loc_8212B1E8;
loc_8212B268:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8212b1f4
	goto loc_8212B1F4;
loc_8212B270:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212b450
	ctx.lr = 0x8212B280;
	sub_8212B450(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8212B28C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821375F8) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x82137600;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r3,6060(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x8212dd28
	ctx.lr = 0x82137634;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82137644;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r3,6060(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,30384
	ctx.r7.s64 = ctx.r10.s64 + 30384;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,64(r26)
	REX_STORE_U8(r26.u32 + 64, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,65(r26)
	REX_STORE_U8(r26.u32 + 65, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,66(r26)
	REX_STORE_U8(r26.u32 + 66, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stfs f31,68(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 68, temp.u32);
	// stfs f30,72(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 72, temp.u32);
	// stb r11,67(r26)
	REX_STORE_U8(r26.u32 + 67, ctx.r11.u8);
	// stw r29,76(r26)
	REX_STORE_U32(r26.u32 + 76, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x8213769C;
	sub_82139B18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213D188) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r11,r11,-17496
	ctx.r11.s64 = ctx.r11.s64 + -17496;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213d1c0
	if (ctx.cr6.eq) goto loc_8213D1C0;
	// bl 0x8269d6a0
	ctx.lr = 0x8213D1C0;
	sub_8269D6A0(ctx, base);
loc_8213D1C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217ab08
	ctx.lr = 0x8213D1C8;
	sub_8217AB08(ctx, base);
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

DEFINE_REX_FUNC(sub_82140630) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214066C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6148(r10)
	REX_STORE_U32(ctx.r10.u32 + 6148, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821430BC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821438F0) {
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
	ctx.lr = 0x821438F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82143914;
	sub_826A2E60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// li r23,0
	r23.s64 = 0;
	// bl 0x8215f338
	ctx.lr = 0x82143928;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r25,r11,-15932
	r25.s64 = ctx.r11.s64 + -15932;
	// addi r24,r10,-17048
	r24.s64 = ctx.r10.s64 + -17048;
	// addi r28,r9,-17164
	r28.s64 = ctx.r9.s64 + -17164;
	// addi r27,r8,-17344
	r27.s64 = ctx.r8.s64 + -17344;
	// addi r26,r7,-16680
	r26.s64 = ctx.r7.s64 + -16680;
loc_8214395C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82143980
	if (!ctx.cr6.eq) goto loc_82143980;
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
	// b 0x82143984
	goto loc_82143984;
loc_82143980:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82143984:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82143a88
	if (!ctx.cr6.lt) goto loc_82143A88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82143998;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x821439A0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821439A4;
	sub_8215F990(ctx, base);
	// stw r3,-16(r30)
	REX_STORE_U32(r30.u32 + -16, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821439B4;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821439BC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821439C0;
	sub_8215F990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,-8(r30)
	REX_STORE_U8(r30.u32 + -8, ctx.r11.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82143a5c
	if (ctx.cr6.eq) goto loc_82143A5C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82143a3c
	if (ctx.cr6.eq) goto loc_82143A3C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82143a1c
	if (ctx.cr6.eq) goto loc_82143A1C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821439fc
	if (ctx.cr6.eq) goto loc_821439FC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,1612
	ctx.r5.s64 = 1612;
	// bl 0x821231d0
	ctx.lr = 0x821439F8;
	sub_821231D0(ctx, base);
	// b 0x82143a78
	goto loc_82143A78;
loc_821439FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82143A08;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82143A10;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82143A14;
	sub_8215F9E0(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 0, ctx.f1.u64);
	// b 0x82143a78
	goto loc_82143A78;
loc_82143A1C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82143A28;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82143A30;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82143A34;
	sub_8215F9E0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x82143a78
	goto loc_82143A78;
loc_82143A3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82143A48;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82143A50;
	sub_8215F338(ctx, base);
	// bl 0x8215fab8
	ctx.lr = 0x82143A54;
	sub_8215FAB8(ctx, base);
	// std r3,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r3.u64);
	// b 0x82143a78
	goto loc_82143A78;
loc_82143A5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82143A68;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82143A70;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82143A74;
	sub_8215F990(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82143A78:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// b 0x8214395c
	goto loc_8214395C;
loc_82143A88:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8214F8B8) {
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
	ctx.lr = 0x8214F8C0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_8214F8D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8214f8d4
	if (!ctx.cr0.eq) goto loc_8214F8D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r27,r11,-24460
	r27.s64 = ctx.r11.s64 + -24460;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8269cd80
	ctx.lr = 0x8214F8FC;
	sub_8269CD80(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8214f90c
	if (!ctx.cr0.eq) goto loc_8214F90C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214fa10
	goto loc_8214FA10;
loc_8214F90C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8214F914;
	sub_82120600(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821501a8
	ctx.lr = 0x8214F924;
	sub_821501A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8214F934;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8214fa10
	if (ctx.cr6.eq) goto loc_8214FA10;
	// lwz r28,40(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8214f9fc
	goto loc_8214F9FC;
loc_8214F950:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8214F95C;
	sub_82120600(ctx, base);
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
	// lwz r30,16(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8214f990
	goto loc_8214F990;
loc_8214F96C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8214F978;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8214f988
	if (!ctx.cr0.lt) goto loc_8214F988;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8214f990
	goto loc_8214F990;
loc_8214F988:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8214F990:
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214f96c
	if (ctx.cr0.eq) goto loc_8214F96C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214f9c8
	if (ctx.cr6.eq) goto loc_8214F9C8;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120780
	ctx.lr = 0x8214F9B8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214f9c8
	if (ctx.cr0.lt) goto loc_8214F9C8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8214f9d4
	goto loc_8214F9D4;
loc_8214F9C8:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8214F9D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8214F9E8;
	sub_82120AC0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214fa10
	if (ctx.cr6.eq) goto loc_8214FA10;
	// lwz r28,40(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_8214F9FC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8269cd80
	ctx.lr = 0x8214FA04;
	sub_8269CD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8214f950
	if (!ctx.cr0.eq) goto loc_8214F950;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8214FA10:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82157C30) {
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
	ctx.lr = 0x82157C38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r24,r11,-7936
	r24.s64 = ctx.r11.s64 + -7936;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82157C58;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82157c7c
	if (!ctx.cr6.eq) goto loc_82157C7C;
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
	// b 0x82157c80
	goto loc_82157C80;
loc_82157C7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82157C80:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// ble cr6,0x82157c9c
	if (!ctx.cr6.gt) goto loc_82157C9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r11.u32);
	// b 0x82157db4
	goto loc_82157DB4;
loc_82157C9C:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82157da4
	if (!ctx.cr6.gt) goto loc_82157DA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r26,24
	r30.s64 = r26.s64 + 24;
	// addi r27,r11,-7928
	r27.s64 = ctx.r11.s64 + -7928;
	// addi r28,r10,-16680
	r28.s64 = ctx.r10.s64 + -16680;
loc_82157CBC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82157CC8;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82157CD0;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82157CDC;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x82157CE4;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157dbc
	if (ctx.cr0.eq) goto loc_82157DBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-8(r30)
	REX_STORE_U32(r30.u32 + -8, ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x82157D00;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82157d28
	if (!ctx.cr6.eq) goto loc_82157D28;
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
	// b 0x82157d2c
	goto loc_82157D2C;
loc_82157D28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82157D2C:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82157d38
	if (!ctx.cr6.gt) goto loc_82157D38;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82157D38:
	// stw r11,-4(r30)
	REX_STORE_U32(r30.u32 + -4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r30,-2
	ctx.r8.s64 = r30.s64 + -2;
loc_82157D44:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82157d68
	if (!ctx.cr6.eq) goto loc_82157D68;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82157d6c
	goto loc_82157D6C;
loc_82157D68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82157D6C:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82157d90
	if (!ctx.cr6.lt) goto loc_82157D90;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82157D7C;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82157D80;
	sub_8215F990(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// b 0x82157d44
	goto loc_82157D44;
loc_82157D90:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,136
	r30.s64 = r30.s64 + 136;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82157cbc
	if (ctx.cr6.lt) goto loc_82157CBC;
loc_82157DA4:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82157DB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82157DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82157db4
	goto loc_82157DB4;
}

DEFINE_REX_FUNC(sub_82163538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82163540;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82163568
	if (!ctx.cr6.eq) goto loc_82163568;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82163560:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d08
	return;
loc_82163568:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,-24460
	ctx.r5.s64 = ctx.r11.s64 + -24460;
	// bl 0x82121610
	ctx.lr = 0x82163578;
	sub_82121610(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x8216358C;
	sub_82121DD0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82121dd0
	ctx.lr = 0x8216359C;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120670
	ctx.lr = 0x821635A8;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821635B8;
	sub_82120AC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163d68
	ctx.lr = 0x821635C8;
	sub_82163D68(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821635f4
	if (!ctx.cr6.eq) goto loc_821635F4;
	// li r31,0
	r31.s64 = 0;
loc_821635DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821635EC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82163560
	goto loc_82163560;
loc_821635F4:
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821501a8
	ctx.lr = 0x82163608;
	sub_821501A8(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82163620
	if (ctx.cr6.eq) goto loc_82163620;
loc_82163618:
	// li r31,1
	r31.s64 = 1;
	// b 0x821635dc
	goto loc_821635DC;
loc_82163620:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r29,36
	ctx.r9.s64 = r29.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216364C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r31,r31,112
	r31.s64 = r31.s64 + 112;
	// divw r30,r11,r10
	r30.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// bl 0x8214fcc8
	ctx.lr = 0x82163674;
	sub_8214FCC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// bl 0x821fecc0
	ctx.lr = 0x82163688;
	sub_821FECC0(ctx, base);
	// b 0x82163618
	goto loc_82163618;
}

DEFINE_REX_FUNC(sub_8216EE58) {
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
	ctx.lr = 0x8216EE60;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EE8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 712);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 720);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EEBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8216f054
	if (ctx.cr6.lt) goto loc_8216F054;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lfs f31,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f31.f64 = double(temp.f32);
	// lis r25,-32106
	r25.s64 = -2104098816;
	// lfs f30,668(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 668);
	f30.f64 = double(temp.f32);
	// addi r22,r11,160
	r22.s64 = ctx.r11.s64 + 160;
loc_8216EEEC:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x8216f054
	if (!ctx.cr6.lt) goto loc_8216F054;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 720);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216f054
	if (ctx.cr6.eq) goto loc_8216F054;
	// lwz r3,6120(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ef34
	if (ctx.cr6.eq) goto loc_8216EF34;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 708);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216EF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6120(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6120);
loc_8216EF34:
	// lwz r10,6056(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 6056);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lwa r11,4(r10)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + 4));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 / ctx.f0.f64));
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216effc
	if (!ctx.cr6.gt) goto loc_8216EFFC;
	// lwz r9,6168(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 6168);
	// li r27,0
	r27.s64 = 0;
loc_8216EF7C:
	// add r11,r27,r10
	ctx.r11.u64 = r27.u64 + ctx.r10.u64;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r28,r11,464
	r28.s64 = ctx.r11.s64 + 464;
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216efe4
	if (ctx.cr6.eq) goto loc_8216EFE4;
loc_8216EFA0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,208
	ctx.r4.s64 = ctx.r11.s64 + 208;
	// bl 0x821d21d0
	ctx.lr = 0x8216EFB4;
	sub_821D21D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216efcc
	if (ctx.cr0.eq) goto loc_8216EFCC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x8216f090
	ctx.lr = 0x8216EFCC;
	sub_8216F090(ctx, base);
loc_8216EFCC:
	// lwz r9,6168(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 6168);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216efa0
	if (!ctx.cr6.eq) goto loc_8216EFA0;
	// lwz r10,6056(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 6056);
loc_8216EFE4:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,720
	r27.s64 = r27.s64 + 720;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216ef7c
	if (ctx.cr6.lt) goto loc_8216EF7C;
	// lwz r3,6120(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6120);
loc_8216EFFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f014
	if (ctx.cr6.eq) goto loc_8216F014;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216F014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F014:
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r4,716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 716);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216F02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216F04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8216eeec
	if (!ctx.cr6.lt) goto loc_8216EEEC;
loc_8216F054:
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r4,716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 716);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216F06C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216F080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8217F3E8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217FBB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217FBC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r3,120
	r29.s64 = ctx.r3.s64 + 120;
	// addi r28,r11,30452
	r28.s64 = ctx.r11.s64 + 30452;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8217FBE0;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8217fc04
	if (!ctx.cr6.eq) goto loc_8217FC04;
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
	// b 0x8217fc08
	goto loc_8217FC08;
loc_8217FC04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217FC08:
	// lwz r30,108(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8217fc9c
	if (!ctx.cr6.lt) goto loc_8217FC9C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8217FC20;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x8217FC28;
	sub_8215F200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,30464
	ctx.r4.s64 = ctx.r11.s64 + 30464;
	// bl 0x8215f338
	ctx.lr = 0x8217FC38;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8217FC3C;
	sub_8215F990(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8217fc80
	if (ctx.cr6.lt) goto loc_8217FC80;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-17324
	ctx.r4.s64 = ctx.r11.s64 + -17324;
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// bl 0x8215f338
	ctx.lr = 0x8217FC5C;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82167240
	ctx.lr = 0x8217FC64;
	sub_82167240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x8217fca8
	ctx.lr = 0x8217FC74;
	sub_8217FCA8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_8217FC80:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217FC98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_8217FC9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82189D30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15628
	ctx.r3.s64 = ctx.r11.s64 + -15628;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189F08) {
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
	ctx.lr = 0x82189F10;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,6164(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82189F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82189f68
	if (ctx.cr6.lt) goto loc_82189F68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-32572
	ctx.r4.s64 = ctx.r11.s64 + -32572;
	// addi r3,r10,-32528
	ctx.r3.s64 = ctx.r10.s64 + -32528;
	// li r5,75
	ctx.r5.s64 = 75;
	// bl 0x821231d0
	ctx.lr = 0x82189F68;
	sub_821231D0(ctx, base);
loc_82189F68:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r27,1
	r27.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218a004
	if (ctx.cr6.eq) goto loc_8218A004;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82189f94
	if (ctx.cr6.eq) goto loc_82189F94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218a1f8
	ctx.lr = 0x82189F94;
	sub_8218A1F8(ctx, base);
loc_82189F94:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218a004
	if (ctx.cr6.eq) goto loc_8218A004;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8218a0c8
	ctx.lr = 0x82189FBC;
	sub_8218A0C8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8218a004
	if (!ctx.cr6.gt) goto loc_8218A004;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82189FD0:
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f31,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stfs f31,8(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82189fd0
	if (ctx.cr6.lt) goto loc_82189FD0;
loc_8218A004:
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8218A014;
	sub_826A1E70(ctx, base);
	// lwa r11,112(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 112));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r28,r10,16592
	r28.s64 = ctx.r10.s64 + 16592;
	// lfs f11,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lfs f0,288(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f1,124(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x821265f8
	ctx.lr = 0x8218A058;
	sub_821265F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218a298
	ctx.lr = 0x8218A060;
	sub_8218A298(ctx, base);
	// bl 0x8218a3e8
	ctx.lr = 0x8218A064;
	sub_8218A3E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218a4f8
	ctx.lr = 0x8218A06C;
	sub_8218A4F8(ctx, base);
	// stw r29,164(r31)
	REX_STORE_U32(r31.u32 + 164, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218a6c0
	ctx.lr = 0x8218A078;
	sub_8218A6C0(ctx, base);
	// addi r11,r31,192
	ctx.r11.s64 = r31.s64 + 192;
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mullw r30,r11,r11
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8218A094;
	sub_826A1E70(ctx, base);
	// rlwinm r5,r30,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x826a1e70
	ctx.lr = 0x8218A0A4;
	sub_826A1E70(ctx, base);
	// lfd f0,208(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r28.u32 + 208);
	// stw r29,164(r31)
	REX_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r27,168(r31)
	REX_STORE_U32(r31.u32 + 168, r27.u32);
	// lfd f13,192(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 192);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// stfd f0,192(r31)
	REX_STORE_U64(r31.u32 + 192, ctx.f0.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821954E0) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f11,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219552C;
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

DEFINE_REX_FUNC(sub_82196FB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15528
	ctx.r3.s64 = ctx.r11.s64 + -15528;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197504) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821975E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82197604
	if (!ctx.cr6.eq) goto loc_82197604;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
loc_82197604:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197E20) {
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
	ctx.lr = 0x82197E28;
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-30932
	ctx.r4.s64 = ctx.r11.s64 + -30932;
	// bl 0x82120600
	ctx.lr = 0x82197E40;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x82197E50;
	sub_82154B70(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82197E64;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821984a4
	if (ctx.cr6.eq) goto loc_821984A4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120830
	ctx.lr = 0x82197E78;
	sub_82120830(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197ee4
	if (ctx.cr6.eq) goto loc_82197EE4;
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
	ctx.lr = 0x82197EA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82197ee4
	if (ctx.cr0.eq) goto loc_82197EE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-30924
	ctx.r4.s64 = ctx.r11.s64 + -30924;
	// bl 0x82120600
	ctx.lr = 0x82197EB8;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821208c0
	ctx.lr = 0x82197EC4;
	sub_821208C0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120c08
	ctx.lr = 0x82197ED4;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82197EE4;
	sub_82120AC0(ctx, base);
loc_82197EE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82153030
	ctx.lr = 0x82197EEC;
	sub_82153030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82197EFC;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x82198488
	if (ctx.cr0.eq) goto loc_82198488;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82153080
	ctx.lr = 0x82197F10;
	sub_82153080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82197F20;
	sub_821A4270(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82197f34
	if (!ctx.cr0.eq) goto loc_82197F34;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82197F34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82198488
	if (ctx.cr6.eq) goto loc_82198488;
	// li r29,2
	r29.s64 = 2;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x82197F70;
	sub_82154800(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r27,1
	r27.s64 = 1;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stb r27,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r27.u8);
	// bl 0x82154800
	ctx.lr = 0x82197F98;
	sub_82154800(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,8
	ctx.r10.s64 = 8;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// li r29,3
	r29.s64 = 3;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x82197FC4;
	sub_82154800(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// li r28,5
	r28.s64 = 5;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x82197FEC;
	sub_82154800(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stb r27,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r27.u8);
	// bl 0x82154800
	ctx.lr = 0x82198010;
	sub_82154800(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a48f8
	ctx.lr = 0x82198018;
	sub_821A48F8(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8216fc68
	ctx.lr = 0x8219802C;
	sub_8216FC68(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x8219803C;
	sub_8212E940(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r4,r10,27528
	ctx.r4.s64 = ctx.r10.s64 + 27528;
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
	ctx.lr = 0x82198068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r4,r10,-30908
	ctx.r4.s64 = ctx.r10.s64 + -30908;
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
	ctx.lr = 0x82198094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r4,r10,-30896
	ctx.r4.s64 = ctx.r10.s64 + -30896;
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
	ctx.lr = 0x821980C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r4,r10,-30884
	ctx.r4.s64 = ctx.r10.s64 + -30884;
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
	ctx.lr = 0x821980EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r4,r10,-30872
	ctx.r4.s64 = ctx.r10.s64 + -30872;
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
	ctx.lr = 0x82198118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r4,r10,-30860
	ctx.r4.s64 = ctx.r10.s64 + -30860;
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
	ctx.lr = 0x82198144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// addi r4,r10,26412
	ctx.r4.s64 = ctx.r10.s64 + 26412;
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
	ctx.lr = 0x82198170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r4,r10,-30844
	ctx.r4.s64 = ctx.r10.s64 + -30844;
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
	ctx.lr = 0x8219819C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r4,r10,-30828
	ctx.r4.s64 = ctx.r10.s64 + -30828;
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
	ctx.lr = 0x821981C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// addi r4,r10,-30808
	ctx.r4.s64 = ctx.r10.s64 + -30808;
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
	ctx.lr = 0x821981F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
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
	ctx.lr = 0x82198220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
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
	ctx.lr = 0x8219824C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
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
	ctx.lr = 0x82198278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
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
	ctx.lr = 0x821982A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
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
	ctx.lr = 0x821982D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
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
	ctx.lr = 0x821982FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r10,-30796
	ctx.r4.s64 = ctx.r10.s64 + -30796;
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
	ctx.lr = 0x82198328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r10,-30776
	ctx.r4.s64 = ctx.r10.s64 + -30776;
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
	ctx.lr = 0x82198354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// addi r4,r10,-30756
	ctx.r4.s64 = ctx.r10.s64 + -30756;
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
	ctx.lr = 0x82198380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r4,r10,-30740
	ctx.r4.s64 = ctx.r10.s64 + -30740;
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
	ctx.lr = 0x821983AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// addi r4,r10,-30724
	ctx.r4.s64 = ctx.r10.s64 + -30724;
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
	ctx.lr = 0x821983D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82198480
	if (ctx.cr6.eq) goto loc_82198480;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82198480
	if (ctx.cr6.lt) goto loc_82198480;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82198480
	if (ctx.cr6.lt) goto loc_82198480;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82154908
	ctx.lr = 0x8219845C;
	sub_82154908(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x82198470;
	sub_82120CC8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269ce98
	ctx.lr = 0x82198478;
	sub_8269CE98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821984a8
	goto loc_821984A8;
loc_82198480:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82154908
	ctx.lr = 0x82198488;
	sub_82154908(ctx, base);
loc_82198488:
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x8219849C;
	sub_82120CC8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269ce98
	ctx.lr = 0x821984A4;
	sub_8269CE98(ctx, base);
loc_821984A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821984A8:
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821C5410) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 752);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,856(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 856);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r11.u8);
	// lwz r10,860(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 860);
	// lwz r11,752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 752);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r11.u8);
	// lwz r11,864(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 864);
	// lwz r10,752(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 752);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lwz r11,868(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 868);
	// lwz r10,752(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 752);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lwz r11,872(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 872);
	// lwz r10,752(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 752);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// lwz r3,876(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c54a0
	if (ctx.cr6.eq) goto loc_821C54A0;
	// bl 0x821c5560
	ctx.lr = 0x821C54A0;
	sub_821C5560(ctx, base);
loc_821C54A0:
	// lwz r11,752(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 752);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821c5510
	if (!ctx.cr6.eq) goto loc_821C5510;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x822f6280
	ctx.lr = 0x821C54BC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c54cc
	if (ctx.cr0.eq) goto loc_821C54CC;
	// bl 0x821e5978
	ctx.lr = 0x821C54C8;
	sub_821E5978(ctx, base);
	// b 0x821c54d0
	goto loc_821C54D0;
loc_821C54CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C54D0:
	// stw r3,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r3.u32);
	// addi r11,r31,756
	ctx.r11.s64 = r31.s64 + 756;
	// lwz r10,776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821c54e8
	if (ctx.cr6.lt) goto loc_821C54E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821C54E8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x821C54F4;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,876(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 876);
	// bl 0x821e5ae0
	ctx.lr = 0x821C5500;
	sub_821E5AE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821C5510;
	sub_82120AC0(ctx, base);
loc_821C5510:
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

DEFINE_REX_FUNC(sub_821D0160) {
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
	ctx.lr = 0x821D0168;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d019c
	if (ctx.cr6.eq) goto loc_821D019C;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D0194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821D019C:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r27,6040(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,96(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r30,r10,-15384
	r30.s64 = ctx.r10.s64 + -15384;
	// lwz r4,-15384(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -15384);
	// bl 0x82120600
	ctx.lr = 0x821D01B8;
	sub_82120600(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D01D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821D01E8;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d026c
	if (ctx.cr0.eq) goto loc_821D026C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,6040(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r29,96(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82120600
	ctx.lr = 0x821D0204;
	sub_82120600(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D0220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821D0234;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821d0268
	if (ctx.cr6.eq) goto loc_821D0268;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121ec8
	ctx.lr = 0x821D0248;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d0268
	if (!ctx.cr0.eq) goto loc_821D0268;
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
	ctx.lr = 0x821D0268;
	sub_821231D0(ctx, base);
loc_821D0268:
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
loc_821D026C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821D86D0) {
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
	ctx.lr = 0x821D86D8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r11,10812
	ctx.r4.s64 = ctx.r11.s64 + 10812;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821D86F0;
	sub_8215F338(ctx, base);
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125bc8
	ctx.lr = 0x821D8700;
	sub_82125BC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,10820
	ctx.r4.s64 = ctx.r11.s64 + 10820;
	// bl 0x8215f338
	ctx.lr = 0x821D8710;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,-17324
	r25.s64 = ctx.r11.s64 + -17324;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x821D8720;
	sub_8215F338(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82167240
	ctx.lr = 0x821D8728;
	sub_82167240(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d8864
	if (ctx.cr0.eq) goto loc_821D8864;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,10828
	ctx.r4.s64 = ctx.r11.s64 + 10828;
	// bl 0x8215f338
	ctx.lr = 0x821D8740;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821D8744;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,10840
	ctx.r4.s64 = ctx.r11.s64 + 10840;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821D8758;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821D875C;
	sub_8215F990(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r10,r3,r30
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821d8864
	if (!ctx.cr6.eq) goto loc_821D8864;
	// lwz r31,4(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 4);
	// addi r29,r24,4
	r29.s64 = r24.s64 + 4;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x821d87cc
	if (ctx.cr6.lt) goto loc_821D87CC;
	// ble cr6,0x821d8790
	if (!ctx.cr6.gt) goto loc_821D8790;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d9738
	ctx.lr = 0x821D8790;
	sub_821D9738(ctx, base);
loc_821D8790:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bge cr6,0x821d87cc
	if (!ctx.cr6.lt) goto loc_821D87CC;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r31,r30
	ctx.r9.u64 = r30.u64 - r31.u64;
loc_821D87A0:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d87c0
	if (ctx.cr0.eq) goto loc_821D87C0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
loc_821D87C0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821d87a0
	if (!ctx.cr0.eq) goto loc_821D87A0;
loc_821D87CC:
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821d8864
	if (!ctx.cr6.gt) goto loc_821D8864;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_821D87E0:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x82125c98
	ctx.lr = 0x821D87F4;
	sub_82125C98(ctx, base);
	// lbz r11,3(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// lbz r11,7(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// stbu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// lbz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// lbz r11,5(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lbz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r11.u8);
	// bne 0x821d87e0
	if (!ctx.cr0.eq) goto loc_821D87E0;
loc_821D8864:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d1b8
	ctx.lr = 0x821D886C;
	sub_8269D1B8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125bc8
	ctx.lr = 0x821D8878;
	sub_82125BC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r31,r11,10852
	r31.s64 = ctx.r11.s64 + 10852;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821D888C;
	sub_8215F338(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x821D8894;
	sub_8215F338(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82167240
	ctx.lr = 0x821D889C;
	sub_82167240(ctx, base);
	// lwz r26,88(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d8994
	if (ctx.cr0.eq) goto loc_821D8994;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821D88B4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10860
	ctx.r4.s64 = ctx.r11.s64 + 10860;
	// bl 0x8215f338
	ctx.lr = 0x821D88C0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821D88C4;
	sub_8215F990(ctx, base);
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srawi r11,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r11.s64 = r28.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821d88f4
	if (ctx.cr6.eq) goto loc_821D88F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,10872
	ctx.r4.s64 = ctx.r11.s64 + 10872;
	// addi r3,r10,10928
	ctx.r3.s64 = ctx.r10.s64 + 10928;
	// li r5,102
	ctx.r5.s64 = 102;
	// bl 0x821231d0
	ctx.lr = 0x821D88F4;
	sub_821231D0(ctx, base);
loc_821D88F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821d8930
	if (!ctx.cr6.gt) goto loc_821D8930;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_821D8904:
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821d8904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D8904;
loc_821D8930:
	// lwz r30,20(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r29,r24,20
	r29.s64 = r24.s64 + 20;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x821d8980
	if (ctx.cr6.lt) goto loc_821D8980;
	// ble cr6,0x821d8950
	if (!ctx.cr6.gt) goto loc_821D8950;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d97e8
	ctx.lr = 0x821D8950;
	sub_821D97E8(ctx, base);
loc_821D8950:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bge cr6,0x821d8980
	if (!ctx.cr6.lt) goto loc_821D8980;
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D8964:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d8978
	if (ctx.cr0.eq) goto loc_821D8978;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821D8978:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821d8964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D8964;
loc_821D8980:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,28(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 28);
	// bl 0x826a1e70
	ctx.lr = 0x821D8994;
	sub_826A1E70(ctx, base);
loc_821D8994:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821D899C;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821EB660) {
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
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EB6A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 128);
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// divw r10,r3,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r3.s32 / ctx.r8.s32 : 0);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821eb728
	if (ctx.cr6.eq) goto loc_821EB728;
	// addi r9,r31,48
	ctx.r9.s64 = r31.s64 + 48;
loc_821EB6E0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x821eb710
	goto loc_821EB710;
loc_821EB6FC:
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
loc_821EB710:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821eb6fc
	if (!ctx.cr6.eq) goto loc_821EB6FC;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb6e0
	if (!ctx.cr6.eq) goto loc_821EB6E0;
loc_821EB728:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x821eb748
	goto loc_821EB748;
loc_821EB734:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821EB748:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821eb734
	if (!ctx.cr6.eq) goto loc_821EB734;
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

DEFINE_REX_FUNC(sub_821F6010) {
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
	ctx.lr = 0x821F6018;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8215f338
	ctx.lr = 0x821F603C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23352
	ctx.r4.s64 = ctx.r11.s64 + 23352;
	// bl 0x8215f338
	ctx.lr = 0x821F6048;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,23244
	ctx.r4.s64 = ctx.r11.s64 + 23244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821F605C;
	sub_8215F338(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
loc_821F6064:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f607c
	if (!ctx.cr6.eq) goto loc_821F607C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821f6080
	goto loc_821F6080;
loc_821F607C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F6080:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821f6124
	if (!ctx.cr6.lt) goto loc_821F6124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x821F6094;
	sub_8215F530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F60A4;
	sub_8215F2D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821f60c0
	if (!ctx.cr6.eq) goto loc_821F60C0;
	// bl 0x8215f990
	ctx.lr = 0x821F60B8;
	sub_8215F990(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x821f610c
	if (ctx.cr6.eq) goto loc_821F610C;
loc_821F60C0:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x821f6104
	if (!ctx.cr6.eq) goto loc_821F6104;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F60CC:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821f6104
	if (!ctx.cr6.lt) goto loc_821F6104;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821F60F0;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F60F4;
	sub_8215F990(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x821f610c
	if (ctx.cr6.eq) goto loc_821F610C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x821f60cc
	goto loc_821F60CC;
loc_821F6104:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821f6064
	goto loc_821F6064;
loc_821F610C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F6118;
	sub_8215F2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215fba8
	ctx.lr = 0x821F6120;
	sub_8215FBA8(ctx, base);
	// b 0x821f6128
	goto loc_821F6128;
loc_821F6124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F6128:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FD1E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FDD30) {
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
	// b 0x821fdd78
	goto loc_821FDD78;
loc_821FDD4C:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FDD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FDD78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FDD78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FDD8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821fdd4c
	if (!ctx.cr0.eq) goto loc_821FDD4C;
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

DEFINE_REX_FUNC(sub_82200B98) {
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
	ctx.lr = 0x82200BA0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,460(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 460);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82200BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,0
	r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82200bf0
	if (ctx.cr0.eq) goto loc_82200BF0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-13276
	ctx.r11.s64 = ctx.r11.s64 + -13276;
loc_82200BDC:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82200c74
	if (ctx.cr6.eq) goto loc_82200C74;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82200bdc
	if (!ctx.cr6.eq) goto loc_82200BDC;
loc_82200BF0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82200BF4:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,28428
	r29.s64 = ctx.r11.s64 + 28428;
	// bne 0x82200c18
	if (!ctx.cr0.eq) goto loc_82200C18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,28464
	ctx.r3.s64 = ctx.r11.s64 + 28464;
	// li r5,295
	ctx.r5.s64 = 295;
	// bl 0x821231d0
	ctx.lr = 0x82200C18;
	sub_821231D0(ctx, base);
loc_82200C18:
	// li r3,224
	ctx.r3.s64 = 224;
	// lwz r30,460(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 460);
	// bl 0x822f6280
	ctx.lr = 0x82200C24;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq 0x82200c7c
	if (ctx.cr0.eq) goto loc_82200C7C;
	// stfs f31,148(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r26,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r26.u32);
	// stfs f31,152(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stw r26,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, r26.u32);
	// stfs f31,156(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stfs f31,160(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r26,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, r26.u32);
	// stfs f31,172(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stw r26,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, r26.u32);
	// stfs f31,220(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r26,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, r26.u32);
	// stw r26,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, r26.u32);
	// stw r26,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, r26.u32);
	// stw r26,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, r26.u32);
	// b 0x82200c80
	goto loc_82200C80;
loc_82200C74:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82200bf4
	goto loc_82200BF4;
loc_82200C7C:
	// mr r27,r26
	r27.u64 = r26.u64;
loc_82200C80:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82200c9c
	if (!ctx.cr6.eq) goto loc_82200C9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,28584
	ctx.r3.s64 = ctx.r11.s64 + 28584;
	// li r5,301
	ctx.r5.s64 = 301;
	// bl 0x821231d0
	ctx.lr = 0x82200C9C;
	sub_821231D0(ctx, base);
loc_82200C9C:
	// stw r30,128(r27)
	REX_STORE_U32(r27.u32 + 128, r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,132(r27)
	REX_STORE_U32(r27.u32 + 132, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x8215f338
	ctx.lr = 0x82200CB4;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb50
	ctx.lr = 0x82200CBC;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82200cd0
	if (ctx.cr0.eq) goto loc_82200CD0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 160, temp.u32);
	// b 0x82200cd4
	goto loc_82200CD4;
loc_82200CD0:
	// stfs f31,160(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 160, temp.u32);
loc_82200CD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,28628
	ctx.r4.s64 = ctx.r11.s64 + 28628;
	// bl 0x8215f338
	ctx.lr = 0x82200CE4;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb50
	ctx.lr = 0x82200CEC;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,476(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 476);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// beq 0x82200d38
	if (ctx.cr0.eq) goto loc_82200D38;
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f0,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82200d44
	goto loc_82200D44;
loc_82200D38:
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82200D44:
	// stfs f0,156(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 156, temp.u32);
	// addi r31,r25,36
	r31.s64 = r25.s64 + 36;
	// stfs f0,172(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 172, temp.u32);
	// lwz r30,36(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 36);
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82200df0
	if (!ctx.cr6.eq) goto loc_82200DF0;
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r28,r30,1,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x82200d70
	if (!ctx.cr0.eq) goto loc_82200D70;
	// li r28,1
	r28.s64 = 1;
loc_82200D70:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x82200df0
	if (!ctx.cr6.lt) goto loc_82200DF0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82200d94
	if (ctx.cr6.eq) goto loc_82200D94;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82200D8C;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82200d98
	goto loc_82200D98;
loc_82200D94:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82200D98:
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82200dcc
	if (!ctx.cr0.gt) goto loc_82200DCC;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82200DAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200dc0
	if (ctx.cr6.eq) goto loc_82200DC0;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82200DC0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82200dac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82200DAC;
loc_82200DCC:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82200de0
	if (ctx.cr0.eq) goto loc_82200DE0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x82200DE0;
	sub_8269D1B8(ctx, base);
loc_82200DE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
loc_82200DF0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82200e08
	if (ctx.cr0.eq) goto loc_82200E08;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_82200E08:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8221A178) {
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
	// addi r3,r11,-26364
	ctx.r3.s64 = ctx.r11.s64 + -26364;
	// bl 0x8216bc98
	ctx.lr = 0x8221A198;
	sub_8216BC98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,832(r31)
	REX_STORE_U8(r31.u32 + 832, ctx.r11.u8);
	// lbz r11,833(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 833);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221a1b0
	if (ctx.cr0.eq) goto loc_8221A1B0;
	// bl 0x8221c0e8
	ctx.lr = 0x8221A1B0;
	sub_8221C0E8(ctx, base);
loc_8221A1B0:
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

DEFINE_REX_FUNC(sub_8221C578) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x8221C58C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c59c
	if (ctx.cr0.eq) goto loc_8221C59C;
	// bl 0x8221c5b0
	ctx.lr = 0x8221C598;
	sub_8221C5B0(ctx, base);
	// b 0x8221c5a0
	goto loc_8221C5A0;
loc_8221C59C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C5A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221F0A0) {
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
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8221F0D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82222268) {
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
	ctx.lr = 0x82222270;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2ca0
	ctx.lr = 0x82222278;
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82222294;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-31444
	ctx.r4.s64 = ctx.r11.s64 + -31444;
	// bl 0x8215f338
	ctx.lr = 0x822222A4;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r17,1
	r17.s64 = 1;
	// bl 0x8215f338
	ctx.lr = 0x822222BC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822222cc
	if (!ctx.cr6.eq) goto loc_822222CC;
	// lbz r17,8(r3)
	r17.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_822222CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r15,r11,16592
	r15.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r18,r11,-24968
	r18.s64 = ctx.r11.s64 + -24968;
	// lfs f27,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f27.f64 = double(temp.f32);
	// lfs f26,172(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 172);
	f26.f64 = double(temp.f32);
	// fmr f28,f26
	f28.f64 = f26.f64;
loc_822222F0:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82222314
	if (!ctx.cr6.eq) goto loc_82222314;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82222318
	goto loc_82222318;
loc_82222314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82222318:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82222364
	if (!ctx.cr6.lt) goto loc_82222364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8222232C;
	sub_8215F1B0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8215f338
	ctx.lr = 0x82222334;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82222338;
	sub_8215F9E0(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// addi r11,r15,256
	ctx.r11.s64 = r15.s64 + 256;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
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
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f28,f0,f28,f1
	f28.f64 = ctx.f0.f64 >= 0.0 ? f28.f64 : ctx.f1.f64;
	// b 0x822222f0
	goto loc_822222F0;
loc_82222364:
	// ld r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 128);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// addi r16,r31,128
	r16.s64 = r31.s64 + 128;
	// lfs f30,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r22,r11,24552
	r22.s64 = ctx.r11.s64 + 24552;
	// addi r21,r10,-24916
	r21.s64 = ctx.r10.s64 + -24916;
	// addi r20,r9,-24932
	r20.s64 = ctx.r9.s64 + -24932;
	// addi r23,r8,-24944
	r23.s64 = ctx.r8.s64 + -24944;
	// addi r25,r7,-24956
	r25.s64 = ctx.r7.s64 + -24956;
	// addi r24,r6,-25716
	r24.s64 = ctx.r6.s64 + -25716;
loc_822223B0:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822223d4
	if (!ctx.cr6.eq) goto loc_822223D4;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x822223d8
	goto loc_822223D8;
loc_822223D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822223D8:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82222678
	if (!ctx.cr6.lt) goto loc_82222678;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822223EC;
	sub_8215F1B0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x822223F8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822223FC;
	sub_8215F990(ctx, base);
	// addi r27,r28,1
	r27.s64 = r28.s64 + 1;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lfs f12,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f11,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8222243C;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82222758
	ctx.lr = 0x82222454;
	sub_82222758(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0568
	ctx.lr = 0x82222464;
	sub_826A0568(ctx, base);
	// lwz r3,6140(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222247C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82222490
	if (ctx.cr6.lt) goto loc_82222490;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82222494
	goto loc_82222494;
loc_82222490:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82222494:
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// lfs f12,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f11,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,268
	ctx.r5.s64 = r31.s64 + 268;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x822224D0;
	sub_82222758(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x822224DC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822224f0
	if (!ctx.cr6.eq) goto loc_822224F0;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x822224f4
	goto loc_822224F4;
loc_822224F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822224F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222668
	if (ctx.cr0.eq) goto loc_82222668;
	// clrlwi. r29,r17,24
	r29.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82222580
	if (ctx.cr0.eq) goto loc_82222580;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82222510;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82222514;
	sub_8215F9E0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// bne cr6,0x82222524
	if (!ctx.cr6.eq) goto loc_82222524;
	// fmr f31,f27
	f31.f64 = f27.f64;
loc_82222524:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ee668
	ctx.lr = 0x82222534;
	sub_822EE668(ctx, base);
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f28.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// beq cr6,0x82222544
	if (ctx.cr6.eq) goto loc_82222544;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82222544:
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lfs f13,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// lfs f12,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f11,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,376
	ctx.r5.s64 = r31.s64 + 376;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x82222580;
	sub_82222758(ctx, base);
loc_82222580:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222258C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82222590;
	sub_8215F990(ctx, base);
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82222608
	if (!ctx.cr6.lt) goto loc_82222608;
	// lwz r3,6140(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6140);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822225C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822225d4
	if (ctx.cr6.lt) goto loc_822225D4;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822225d8
	goto loc_822225D8;
loc_822225D4:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_822225D8:
	// lfs f0,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f12,476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f11,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// b 0x82222654
	goto loc_82222654;
loc_82222608:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82222614;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82222618;
	sub_8215F9E0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ee668
	ctx.lr = 0x82222624;
	sub_822EE668(ctx, base);
	// lfs f0,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f12,476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f11,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82222654:
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// addi r5,r31,484
	ctx.r5.s64 = r31.s64 + 484;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x82222668;
	sub_82222758(ctx, base);
loc_82222668:
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
	// b 0x822223b0
	goto loc_822223B0;
loc_82222678:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82222698
	if (!ctx.cr6.eq) goto loc_82222698;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8222269c
	goto loc_8222269C;
loc_82222698:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222269C:
	// stw r11,756(r31)
	REX_STORE_U32(r31.u32 + 756, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_822226A8:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822226cc
	if (!ctx.cr6.eq) goto loc_822226CC;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x822226d0
	goto loc_822226D0;
loc_822226CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822226D0:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82222720
	if (!ctx.cr6.lt) goto loc_82222720;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822226E4;
	sub_8215F1B0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x822226EC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822226F0;
	sub_8215F990(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 772);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 772);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x822226a8
	goto loc_822226A8;
loc_82222720:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f0,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r31,580
	ctx.r3.s64 = r31.s64 + 580;
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82222744;
	sub_8226BF68(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cec
	ctx.lr = 0x82222750;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8224C5E8) {
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
	// lbz r11,701(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 701);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224c648
	if (ctx.cr0.eq) goto loc_8224C648;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,468(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,701(r31)
	REX_STORE_U8(r31.u32 + 701, ctx.r11.u8);
loc_8224C648:
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

DEFINE_REX_FUNC(sub_8224FE10) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x8224FE18;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2c70
	ctx.lr = 0x8224FE20;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f1,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// addi r22,r11,16592
	r22.s64 = ctx.r11.s64 + 16592;
	// stfs f2,184(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// stfs f3,192(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// lfs f0,172(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// bl 0x8269d1d0
	ctx.lr = 0x8224FE90;
	sub_8269D1D0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8224FE9C;
	sub_8269D1B8(ctx, base);
	// li r29,8
	r29.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r21,208(r31)
	REX_STORE_U32(r31.u32 + 208, r21.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
	// addi r11,r31,220
	ctx.r11.s64 = r31.s64 + 220;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8224FEC4;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8224FED0;
	sub_8269D1B8(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stw r29,228(r31)
	REX_STORE_U32(r31.u32 + 228, r29.u32);
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// ld r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 8);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// ld r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 0);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 8);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f31,f10,f13
	f31.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmr f30,f6
	f30.f64 = ctx.f6.f64;
	// fsubs f29,f4,f5
	f29.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmuls f26,f3,f6
	f26.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// lfs f27,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f27.f64 = double(temp.f32);
	// fsubs f28,f2,f5
	f28.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// lfs f25,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f25.f64 = double(temp.f32);
	// fsubs f23,f9,f11
	f23.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f24,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f24.f64 = double(temp.f32);
	// fsubs f21,f5,f2
	f21.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f22,f13,f10
	f22.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmr f20,f29
	f20.f64 = f29.f64;
	// fsubs f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 - ctx.f8.f64));
	// fsubs f12,f25,f12
	ctx.f12.f64 = double(float(f25.f64 - ctx.f12.f64));
	// fsubs f4,f24,f4
	ctx.f4.f64 = double(float(f24.f64 - ctx.f4.f64));
	// fsubs f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 - f27.f64));
	// fmsubs f1,f1,f31,f26
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f26.f64)));
	// fmuls f19,f28,f7
	f19.f64 = double(float(f28.f64 * ctx.f7.f64));
	// fmuls f31,f29,f31
	f31.f64 = double(float(f29.f64 * f31.f64));
	// fsubs f10,f10,f25
	ctx.f10.f64 = double(float(ctx.f10.f64 - f25.f64));
	// fsubs f2,f2,f24
	ctx.f2.f64 = double(float(ctx.f2.f64 - f24.f64));
	// fmuls f26,f1,f1
	f26.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmsubs f3,f3,f29,f19
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, f29.f64, -f19.f64)));
	// fmsubs f31,f28,f6,f31
	f31.f64 = double(float(std::fma(f28.f64, ctx.f6.f64, -f31.f64)));
	// fmadds f30,f3,f3,f26
	f30.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, f26.f64)));
	// fmadds f30,f31,f31,f30
	f30.f64 = double(float(std::fma(f31.f64, f31.f64, f30.f64)));
	// fsqrts f30,f30
	f30.f64 = double(float(sqrt(f30.f64)));
	// fdivs f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fmuls f3,f30,f3
	ctx.f3.f64 = double(float(f30.f64 * ctx.f3.f64));
	// fmuls f31,f31,f30
	f31.f64 = double(float(f31.f64 * f30.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f30,f7,f3
	f30.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f28,f23,f3
	f28.f64 = double(float(f23.f64 * ctx.f3.f64));
	// fmuls f19,f21,f31
	f19.f64 = double(float(f21.f64 * f31.f64));
	// fmuls f17,f1,f6
	f17.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f20,f29,f31
	f20.f64 = double(float(f29.f64 * f31.f64));
	// fmuls f26,f8,f3
	f26.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f16,f1,f22
	f16.f64 = double(float(ctx.f1.f64 * f22.f64));
	// fmuls f15,f1,f12
	f15.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f18,f4,f31
	f18.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fmuls f14,f11,f3
	f14.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmsubs f6,f31,f6,f30
	ctx.f6.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, -f30.f64)));
	// fmsubs f30,f31,f22,f28
	f30.f64 = double(float(std::fma(f31.f64, f22.f64, -f28.f64)));
	// fmsubs f28,f23,f1,f19
	f28.f64 = double(float(std::fma(f23.f64, ctx.f1.f64, -f19.f64)));
	// fmsubs f29,f29,f3,f17
	f29.f64 = double(float(std::fma(f29.f64, ctx.f3.f64, -f17.f64)));
	// fmsubs f7,f7,f1,f20
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, -f20.f64)));
	// fmsubs f12,f31,f12,f26
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, -f26.f64)));
	// fmsubs f26,f21,f3,f16
	f26.f64 = double(float(std::fma(f21.f64, ctx.f3.f64, -f16.f64)));
	// fmsubs f4,f4,f3,f15
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, -f15.f64)));
	// fmsubs f8,f8,f1,f18
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, -f18.f64)));
	// fmuls f23,f6,f6
	f23.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f22,f30,f30
	f22.f64 = double(float(f30.f64 * f30.f64));
	// fmuls f21,f12,f12
	f21.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f23,f7,f7,f23
	f23.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, f23.f64)));
	// fmadds f22,f28,f28,f22
	f22.f64 = double(float(std::fma(f28.f64, f28.f64, f22.f64)));
	// fmadds f21,f8,f8,f21
	f21.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, f21.f64)));
	// fmadds f23,f29,f29,f23
	f23.f64 = double(float(std::fma(f29.f64, f29.f64, f23.f64)));
	// fmadds f22,f26,f26,f22
	f22.f64 = double(float(std::fma(f26.f64, f26.f64, f22.f64)));
	// fmadds f21,f4,f4,f21
	f21.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, f21.f64)));
	// fsqrts f23,f23
	f23.f64 = double(float(sqrt(f23.f64)));
	// fdivs f23,f0,f23
	f23.f64 = double(float(ctx.f0.f64 / f23.f64));
	// fsqrts f22,f22
	f22.f64 = double(float(sqrt(f22.f64)));
	// fmuls f6,f6,f23
	ctx.f6.f64 = double(float(ctx.f6.f64 * f23.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsqrts f21,f21
	f21.f64 = double(float(sqrt(f21.f64)));
	// fdivs f22,f0,f22
	f22.f64 = double(float(ctx.f0.f64 / f22.f64));
	// fmuls f7,f23,f7
	ctx.f7.f64 = double(float(f23.f64 * ctx.f7.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fdivs f21,f0,f21
	f21.f64 = double(float(ctx.f0.f64 / f21.f64));
	// fmuls f29,f29,f23
	f29.f64 = double(float(f29.f64 * f23.f64));
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f28,f22,f28
	f28.f64 = double(float(f22.f64 * f28.f64));
	// stfs f28,96(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f26,f26,f22
	f26.f64 = double(float(f26.f64 * f22.f64));
	// stfs f26,100(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f13,f13,f7,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f6.f64)));
	// fmuls f30,f30,f22
	f30.f64 = double(float(f30.f64 * f22.f64));
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f8,f21,f8
	ctx.f8.f64 = double(float(f21.f64 * ctx.f8.f64));
	// fmsubs f7,f31,f10,f14
	ctx.f7.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, -f14.f64)));
	// fmuls f6,f2,f31
	ctx.f6.f64 = double(float(ctx.f2.f64 * f31.f64));
	// fnmadds f13,f9,f29,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, f29.f64, ctx.f13.f64)));
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fmsubs f11,f11,f1,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, -ctx.f6.f64)));
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// std r10,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r10.u64);
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// lfs f9,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmsubs f10,f2,f3,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, -ctx.f10.f64)));
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// fmuls f5,f4,f21
	ctx.f5.f64 = double(float(ctx.f4.f64 * f21.f64));
	// lfs f4,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 * f21.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 * ctx.f9.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmadds f9,f6,f28,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, ctx.f9.f64)));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fnmadds f11,f26,f4,f9
	ctx.f11.f64 = double(float(-std::fma(f26.f64, ctx.f4.f64, ctx.f9.f64)));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmuls f11,f27,f10
	ctx.f11.f64 = double(float(f27.f64 * ctx.f10.f64));
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfs f10,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f10,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f10,f5,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f12.f64)));
	// lfs f10,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f24,f7,f11
	ctx.f11.f64 = double(float(std::fma(f24.f64, ctx.f7.f64, ctx.f11.f64)));
	// fnmadds f12,f10,f8,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f12.f64)));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fnmadds f13,f25,f13,f11
	ctx.f13.f64 = double(float(-std::fma(f25.f64, ctx.f13.f64, ctx.f11.f64)));
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r9,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r9.u64);
	// ld r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r10.u64);
	// std r9,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// ld r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 0);
	// std r10,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r10.u64);
	// ld r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 8);
	// std r10,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r10.u64);
	// ld r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U64(r23.u32 + 0);
	// std r10,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r10.u64);
	// ld r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U64(r23.u32 + 8);
	// std r10,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r10.u64);
	// lfs f11,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r10.u64);
	// std r11,160(r31)
	REX_STORE_U64(r31.u32 + 160, ctx.r11.u64);
	// lfs f10,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,160(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f11,176(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cbc
	ctx.lr = 0x8225024C;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82274158) {
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
	ctx.lr = 0x82274160;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// bl 0x823fbf60
	ctx.lr = 0x8227417C;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227418C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8227418c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227418C;
	// li r29,255
	r29.s64 = 255;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// li r30,128
	r30.s64 = 128;
	// stb r29,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r29.u8);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82137838
	ctx.lr = 0x822741D0;
	sub_82137838(ctx, base);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82274208
	if (!ctx.cr6.gt) goto loc_82274208;
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82137838
	ctx.lr = 0x82274208;
	sub_82137838(ctx, base);
loc_82274208:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82279000) {
	REX_FUNC_PROLOGUE();
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// b 0x82130d00
	sub_82130D00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82279E68) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82279E94;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x82279EA0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82279EA4;
	sub_8215FA30(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6304(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6304);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82279EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279f0c
	if (ctx.cr0.eq) goto loc_82279F0C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-1432
	ctx.r4.s64 = ctx.r11.s64 + -1432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213a1b0
	ctx.lr = 0x82279EE0;
	sub_8213A1B0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24348
	ctx.r4.s64 = ctx.r11.s64 + 24348;
	// bl 0x82121928
	ctx.lr = 0x82279EF0;
	sub_82121928(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223db98
	ctx.lr = 0x82279EFC;
	sub_8223DB98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82279F0C;
	sub_82120AC0(ctx, base);
loc_82279F0C:
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

DEFINE_REX_FUNC(sub_8227E480) {
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
	ctx.lr = 0x8227E488;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-608
	r30.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x8227e4bc
	if (!ctx.cr6.eq) goto loc_8227E4BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8227E4BC;
	sub_821231D0(ctx, base);
loc_8227E4BC:
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// bge cr6,0x8227e4d8
	if (!ctx.cr6.lt) goto loc_8227E4D8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x8227E4D8;
	sub_821231D0(ctx, base);
loc_8227E4D8:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32778
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32778, ctx.xer);
	// beq cr6,0x8227e4f8
	if (ctx.cr6.eq) goto loc_8227E4F8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x8227E4F8;
	sub_821231D0(ctx, base);
loc_8227E4F8:
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82284E80) {
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
	ctx.lr = 0x82284E88;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82284fec
	if (!ctx.cr6.gt) goto loc_82284FEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r26,0
	r26.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f31,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f31.f64 = double(temp.f32);
loc_82284EC0:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r31,r26,r11
	r31.u64 = r26.u64 + ctx.r11.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x826a1e70
	ctx.lr = 0x82284ED8;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82284f00
	if (ctx.cr6.lt) goto loc_82284F00;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,928(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 928);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218cc20
	ctx.lr = 0x82284F00;
	sub_8218CC20(ctx, base);
loc_82284F00:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8218cc20
	ctx.lr = 0x82284F14;
	sub_8218CC20(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,1024(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 1024);
	// ld r11,1032(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 1032);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8216cfa0
	ctx.lr = 0x82284F3C;
	sub_8216CFA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82284f94
	if (!ctx.cr6.eq) goto loc_82284F94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82284F94:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82284fd8
	if (ctx.cr0.eq) goto loc_82284FD8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r28,128
	r31.s64 = r28.s64 + 128;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82176218
	ctx.lr = 0x82284FC8;
	sub_82176218(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x82176218
	ctx.lr = 0x82284FD8;
	sub_82176218(ctx, base);
loc_82284FD8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,80
	r26.s64 = r26.s64 + 80;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284ec0
	if (ctx.cr6.lt) goto loc_82284EC0;
loc_82284FEC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8228C0B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228C0B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, r30.u8);
	// addi r29,r11,-26856
	r29.s64 = ctx.r11.s64 + -26856;
	// stb r30,97(r3)
	REX_STORE_U8(ctx.r3.u32 + 97, r30.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r30,98(r31)
	REX_STORE_U8(r31.u32 + 98, r30.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,101(r31)
	REX_STORE_U8(r31.u32 + 101, r30.u8);
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
	// stb r30,99(r31)
	REX_STORE_U8(r31.u32 + 99, r30.u8);
	// stb r30,102(r31)
	REX_STORE_U8(r31.u32 + 102, r30.u8);
	// stb r30,103(r31)
	REX_STORE_U8(r31.u32 + 103, r30.u8);
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// bl 0x82120c08
	ctx.lr = 0x8228C104;
	sub_82120C08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82120c08
	ctx.lr = 0x8228C114;
	sub_82120C08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82120c08
	ctx.lr = 0x8228C124;
	sub_82120C08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r30,120(r31)
	REX_STORE_U64(r31.u32 + 120, r30.u64);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8228F2E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228F2E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f330
	if (ctx.cr0.eq) goto loc_8228F330;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a6b68
	ctx.lr = 0x8228F32C;
	sub_822A6B68(ctx, base);
	// b 0x8228f334
	goto loc_8228F334;
loc_8228F330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82290DB0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,4696
	ctx.r9.s64 = ctx.r11.s64 + 4696;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r10,-24
	ctx.r11.s64 = ctx.r10.s64 + -24;
	// addi r9,r10,-40
	ctx.r9.s64 = ctx.r10.s64 + -40;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	r30.s64 = 0;
loc_82290DF0:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,60(r11)
	REX_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
	// stw r30,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r30.u32);
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r30.u32);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r30.u32);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r30.u32);
	// stwu r30,40(r9)
	ea = 40 + ctx.r9.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r9.u32 = ea;
	// stwu r30,40(r11)
	ea = 40 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82290df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82290DF0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r30,153(r31)
	REX_STORE_U8(r31.u32 + 153, r30.u8);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r10,154(r31)
	REX_STORE_U8(r31.u32 + 154, ctx.r10.u8);
	// stb r10,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r10.u8);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x822c1a70
	ctx.lr = 0x82290E64;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82290e74
	if (ctx.cr0.eq) goto loc_82290E74;
	// bl 0x822adaf0
	ctx.lr = 0x82290E70;
	sub_822ADAF0(ctx, base);
	// b 0x82290e78
	goto loc_82290E78;
loc_82290E74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82290E78:
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// addi r11,r31,84
	ctx.r11.s64 = r31.s64 + 84;
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
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

DEFINE_REX_FUNC(sub_8229DBE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8229DBF0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// lfs f13,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bge cr6,0x8229dc5c
	if (!ctx.cr6.lt) goto loc_8229DC5C;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
loc_8229DC5C:
	// lfs f9,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x8229dc70
	if (!ctx.cr6.lt) goto loc_8229DC70;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
loc_8229DC70:
	// lfs f10,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8229dc84
	if (!ctx.cr6.lt) goto loc_8229DC84;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
loc_8229DC84:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8229dc98
	if (!ctx.cr6.lt) goto loc_8229DC98;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
loc_8229DC98:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8229dca8
	if (!ctx.cr6.gt) goto loc_8229DCA8;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
loc_8229DCA8:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x8229dcb8
	if (!ctx.cr6.gt) goto loc_8229DCB8;
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
loc_8229DCB8:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x8229dcc8
	if (!ctx.cr6.gt) goto loc_8229DCC8;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
loc_8229DCC8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8229dcd8
	if (!ctx.cr6.gt) goto loc_8229DCD8;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8229DCD8:
	// lfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x8229dcf0
	if (!ctx.cr6.lt) goto loc_8229DCF0;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
loc_8229DCF0:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8229dd08
	if (!ctx.cr6.lt) goto loc_8229DD08;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_8229DD08:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bge cr6,0x8229dd20
	if (!ctx.cr6.lt) goto loc_8229DD20;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
loc_8229DD20:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x8229dd38
	if (!ctx.cr6.lt) goto loc_8229DD38;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
loc_8229DD38:
	// fcmpu cr6,f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x8229dd48
	if (!ctx.cr6.lt) goto loc_8229DD48;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
loc_8229DD48:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8229dd5c
	if (!ctx.cr6.lt) goto loc_8229DD5C;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
loc_8229DD5C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8229dd70
	if (!ctx.cr6.lt) goto loc_8229DD70;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_8229DD70:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8229dd84
	if (!ctx.cr6.lt) goto loc_8229DD84;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8229DD84:
	// lfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x8229dd98
	if (!ctx.cr6.lt) goto loc_8229DD98;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8229DD98:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8229ddac
	if (!ctx.cr6.lt) goto loc_8229DDAC;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8229DDAC:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bge cr6,0x8229ddc0
	if (!ctx.cr6.lt) goto loc_8229DDC0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8229DDC0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x8229ddd4
	if (!ctx.cr6.lt) goto loc_8229DDD4;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_8229DDD4:
	// fcmpu cr6,f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x8229dde0
	if (!ctx.cr6.lt) goto loc_8229DDE0;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8229DDE0:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8229ddf0
	if (!ctx.cr6.lt) goto loc_8229DDF0;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8229DDF0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8229de00
	if (!ctx.cr6.lt) goto loc_8229DE00;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8229DE00:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8229de10
	if (!ctx.cr6.lt) goto loc_8229DE10;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8229DE10:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,-1
	ctx.r7.s64 = -1;
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r30,0(r10)
	r30.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r29,8(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// std r4,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r3,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// std r30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r30.u64);
	// std r29,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r29.u64);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bne cr6,0x8229df40
	if (!ctx.cr6.eq) goto loc_8229DF40;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8229de74
	if (!ctx.cr0.eq) goto loc_8229DE74;
	// li r29,1
	r29.s64 = 1;
loc_8229DE74:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x8229df40
	if (!ctx.cr6.lt) goto loc_8229DF40;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8229de94
	if (ctx.cr6.eq) goto loc_8229DE94;
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x822c1a70
	ctx.lr = 0x8229DE8C;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8229de98
	goto loc_8229DE98;
loc_8229DE94:
	// li r30,0
	r30.s64 = 0;
loc_8229DE98:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229deec
	if (!ctx.cr6.gt) goto loc_8229DEEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_8229DEB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229dedc
	if (ctx.cr6.eq) goto loc_8229DEDC;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229DED0:
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x8229ded0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229DED0;
loc_8229DEDC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x8229deb0
	if (!ctx.cr0.eq) goto loc_8229DEB0;
loc_8229DEEC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229df30
	if (ctx.cr6.eq) goto loc_8229DF30;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8229df28
	if (ctx.cr0.eq) goto loc_8229DF28;
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
	ctx.lr = 0x8229DF28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229DF28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8229DF30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8229DF40:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229df74
	if (ctx.cr0.eq) goto loc_8229DF74;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8229DF68:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8229df68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229DF68;
loc_8229DF74:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822BE210) {
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
	// bl 0x826a1c84
	ctx.lr = 0x822BE218;
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f29.u64);
	// stfd f30,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7380
	ctx.r4.s64 = ctx.r11.s64 + 7380;
	// bl 0x82180150
	ctx.lr = 0x822BE240;
	sub_82180150(ctx, base);
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r16,r21
	r16.u64 = r21.u64;
	// ble cr6,0x822be4bc
	if (!ctx.cr6.gt) goto loc_822BE4BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r11,16592
	ctx.r6.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f31,15048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f30,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	f30.f64 = double(temp.f32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r17,r21
	r17.u64 = r21.u64;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r20,r11,5916
	r20.s64 = ctx.r11.s64 + 5916;
	// addi r24,r10,14568
	r24.s64 = ctx.r10.s64 + 14568;
	// addi r19,r9,5212
	r19.s64 = ctx.r9.s64 + 5212;
	// addi r23,r8,7448
	r23.s64 = ctx.r8.s64 + 7448;
	// addi r22,r7,7768
	r22.s64 = ctx.r7.s64 + 7768;
	// addi r18,r6,7400
	r18.s64 = ctx.r6.s64 + 7400;
loc_822BE2A0:
	// lwz r11,212(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 212);
	// lwzx r31,r17,r11
	r31.u64 = REX_LOAD_U32(r17.u32 + ctx.r11.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stfs f30,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822be2c4
	if (ctx.cr6.eq) goto loc_822BE2C4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822be2c8
	if (!ctx.cr6.eq) goto loc_822BE2C8;
loc_822BE2C4:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_822BE2C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822be4a8
	if (ctx.cr0.eq) goto loc_822BE4A8;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822be4a8
	if (!ctx.cr0.eq) goto loc_822BE4A8;
	// addi r26,r31,336
	r26.s64 = r31.s64 + 336;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r25,r31,320
	r25.s64 = r31.s64 + 320;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822afa30
	ctx.lr = 0x822BE300;
	sub_822AFA30(ctx, base);
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,328(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f11,324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// beq cr6,0x822be49c
	if (ctx.cr6.eq) goto loc_822BE49C;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822be49c
	if (!ctx.cr6.lt) goto loc_822BE49C;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82180150
	ctx.lr = 0x822BE358;
	sub_82180150(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x822be498
	if (!ctx.cr6.lt) goto loc_822BE498;
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// lwz r3,76(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r15,24(r28)
	r15.u64 = REX_LOAD_U32(r28.u32 + 24);
	// stw r11,92(r27)
	REX_STORE_U32(r27.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE38C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// sth r11,170(r1)
	REX_STORE_U16(ctx.r1.u32 + 170, ctx.r11.u16);
	// stfs f30,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// sth r10,168(r1)
	REX_STORE_U16(ctx.r1.u32 + 168, ctx.r10.u16);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// ld r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// li r11,8
	ctx.r11.s64 = 8;
	// ld r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r21,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r21.u32);
	// stw r22,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// stw r31,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// stw r30,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, r30.u32);
	// stw r15,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r15.u32);
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,168(r1)
	REX_STORE_U16(ctx.r1.u32 + 168, ctx.r11.u16);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// sth r11,170(r1)
	REX_STORE_U16(ctx.r1.u32 + 170, ctx.r11.u16);
	// bl 0x82296bc8
	ctx.lr = 0x822BE448;
	sub_82296BC8(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822be45c
	if (ctx.cr6.lt) goto loc_822BE45C;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_822BE45C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822be490
	if (ctx.cr0.eq) goto loc_822BE490;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x822be490
	if (!ctx.cr6.lt) goto loc_822BE490;
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822afa30
	ctx.lr = 0x822BE48C;
	sub_822AFA30(ctx, base);
	// stfs f31,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
loc_822BE490:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// stw r19,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r19.u32);
loc_822BE498:
	// bl 0x821800b8
	ctx.lr = 0x822BE49C;
	sub_821800B8(ctx, base);
loc_822BE49C:
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0f18
	ctx.lr = 0x822BE4A8;
	sub_822C0F18(ctx, base);
loc_822BE4A8:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be2a0
	if (ctx.cr6.lt) goto loc_822BE2A0;
loc_822BE4BC:
	// bl 0x821800b8
	ctx.lr = 0x822BE4C0;
	sub_821800B8(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_822CDD88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x822cb780
	sub_822CB780(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CE078) {
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
	ctx.lr = 0x822CE080;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,19900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822ce0a8
	if (!ctx.cr6.lt) goto loc_822CE0A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822ce144
	goto loc_822CE144;
loc_822CE0A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822ce338
	ctx.lr = 0x822CE0E0;
	sub_822CE338(ctx, base);
	// stw r3,19900(r31)
	REX_STORE_U32(r31.u32 + 19900, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822ce144
	if (ctx.cr0.lt) goto loc_822CE144;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r28,r5,r7
	r28.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// ble cr6,0x822ce10c
	if (!ctx.cr6.gt) goto loc_822CE10C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822ce144
	goto loc_822CE144;
loc_822CE10C:
	// add r6,r5,r30
	ctx.r6.u64 = ctx.r5.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9cb8
	ctx.lr = 0x822CE11C;
	sub_822C9CB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce338
	ctx.lr = 0x822CE128;
	sub_822CE338(ctx, base);
	// stw r3,19900(r31)
	REX_STORE_U32(r31.u32 + 19900, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822ce140
	if (ctx.cr0.lt) goto loc_822CE140;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822ce140
	if (ctx.cr6.eq) goto loc_822CE140;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
loc_822CE140:
	// lwz r3,19900(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19900);
loc_822CE144:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D52B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822D52C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21744(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21744);
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d5300
	if (ctx.cr6.eq) goto loc_822D5300;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d5300
	if (!ctx.cr6.eq) goto loc_822D5300;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D5300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D5300:
	// lwz r11,23568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d5324
	if (ctx.cr6.eq) goto loc_822D5324;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x822D5324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D5324:
	// lwz r30,10956(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 10956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,15112(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15112);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,15108(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15108);
	// bl 0x822d51f0
	ctx.lr = 0x822D5340;
	sub_822D51F0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d5380
	if (ctx.cr6.eq) goto loc_822D5380;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822D5354:
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r30,r7,r29
	r30.u64 = ctx.r7.u64 & r29.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r8,r28
	REX_STORE_U32(ctx.r8.u32 + r28.u32, ctx.r9.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822d5354
	if (ctx.cr6.lt) goto loc_822D5354;
loc_822D5380:
	// lwz r3,21744(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21744);
	// stw r30,10956(r31)
	REX_STORE_U32(r31.u32 + 10956, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d53a0
	if (ctx.cr6.eq) goto loc_822D53A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D53A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D53A0:
	// lwz r11,23568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 23568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d53c4
	if (ctx.cr6.eq) goto loc_822D53C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	ctx.lr = 0x822D53C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D53C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822DC6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822DC6B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r6,416
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(416));
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dc710
	if (!ctx.cr6.eq) goto loc_822DC710;
	// ld r9,12712(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 12712);
	// addi r29,r3,12704
	r29.s64 = ctx.r3.s64 + 12704;
	// ld r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 56);
	// ld r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 48);
	// ld r8,12704(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 12704);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// ld r6,32(r5)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// ld r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822dc7cc
	if (ctx.cr6.eq) goto loc_822DC7CC;
loc_822DC710:
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc740
	if (ctx.cr6.eq) goto loc_822DC740;
	// lwz r10,10896(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10896);
	// lwz r9,10908(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 10908);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822dc740
	if (!ctx.cr6.lt) goto loc_822DC740;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822dc7e0
	goto loc_822DC7E0;
loc_822DC740:
	// addi r11,r7,112
	ctx.r11.s64 = ctx.r7.s64 + 112;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r29,r30,12704
	r29.s64 = r30.s64 + 12704;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822dbb18
	ctx.lr = 0x822DC770;
	sub_822DBB18(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dc7b4
	if (!ctx.cr6.eq) goto loc_822DC7B4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r11,7180
	ctx.r10.s64 = ctx.r11.s64 + 7180;
loc_822DC784:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822DC788:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822dc788
	if (!ctx.cr0.eq) goto loc_822DC788;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x822dc784
	if (ctx.cr6.lt) goto loc_822DC784;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_822DC7B4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,40(r28)
	REX_STORE_U32(r28.u32 + 40, ctx.r11.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// std r11,48(r28)
	REX_STORE_U64(r28.u32 + 48, ctx.r11.u64);
	// ld r11,12712(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 12712);
	// std r11,56(r28)
	REX_STORE_U64(r28.u32 + 56, ctx.r11.u64);
loc_822DC7CC:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,12712(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 12712);
	// std r11,12008(r30)
	REX_STORE_U64(r30.u32 + 12008, ctx.r11.u64);
	// std r10,12016(r30)
	REX_STORE_U64(r30.u32 + 12016, ctx.r10.u64);
loc_822DC7E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822E6720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e6768
	if (ctx.cr6.eq) goto loc_822E6768;
loc_822E6754:
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// dcbz r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e6754
	if (ctx.cr6.lt) goto loc_822E6754;
loc_822E6768:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r5,r10,1
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,0,5,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7FFF000;
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r4,r9,31,20,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFFFFFFF80000FFF) | (ctx.r4.u64 & 0x7FFFF000);
	// rlwinm r10,r10,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// rlwinm r6,r6,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// clrlwi r9,r7,6
	ctx.r9.u64 = ctx.r7.u32 & 0x3FFFFFF;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r8,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// sth r8,82(r11)
	REX_STORE_U16(ctx.r11.u32 + 82, ctx.r8.u16);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EADB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB6C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,144(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 216, temp.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,213(r4)
	REX_STORE_U8(ctx.r4.u32 + 213, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EC218) {
	REX_FUNC_PROLOGUE();
	// lbz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 288);
	// stb r11,296(r3)
	REX_STORE_U8(ctx.r3.u32 + 296, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EC5E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12904
	ctx.r3.s64 = ctx.r11.s64 + -12904;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ECDF8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14744
	ctx.r4.s64 = ctx.r11.s64 + 14744;
	// bl 0x82120600
	ctx.lr = 0x822ECE1C;
	sub_82120600(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// bl 0x821dc4e0
	ctx.lr = 0x822ECE24;
	sub_821DC4E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821dd040
	ctx.lr = 0x822ECE2C;
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
	ctx.lr = 0x822ECE54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822ECE64;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_822EF448) {
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
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bne 0x822ef510
	if (!ctx.cr0.eq) goto loc_822EF510;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f11,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f11,f8,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f7,f13,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f0,f6,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f5,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f13,f4,f12,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f3,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
loc_822EF510:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EF548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ef560
	if (!ctx.cr0.eq) goto loc_822EF560;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822ef570
	goto loc_822EF570;
loc_822EF560:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
loc_822EF570:
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

DEFINE_REX_FUNC(sub_822F7A10) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// beq 0x822f7a48
	if (ctx.cr0.eq) goto loc_822F7A48;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x822f7a4c
	goto loc_822F7A4C;
loc_822F7A48:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_822F7A4C:
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FA9F0) {
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
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822faa18
	if (ctx.cr6.eq) goto loc_822FAA18;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faa1c
	goto loc_822FAA1C;
loc_822FAA18:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FAA1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822faa3c
	if (ctx.cr6.eq) goto loc_822FAA3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822faa34
	if (ctx.cr6.eq) goto loc_822FAA34;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faa40
	goto loc_822FAA40;
loc_822FAA34:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822faa40
	goto loc_822FAA40;
loc_822FAA3C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822FAA40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822faa50
	if (!ctx.cr6.eq) goto loc_822FAA50;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x822faa7c
	goto loc_822FAA7C;
loc_822FAA50:
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FAA68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822faa7c
	if (!ctx.cr0.eq) goto loc_822FAA7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822FAA7C:
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

DEFINE_REX_FUNC(sub_822FCB30) {
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
	ctx.lr = 0x822FCB38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcc14
	if (ctx.cr6.eq) goto loc_822FCC14;
	// lhz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fcb68
	if (ctx.cr0.eq) goto loc_822FCB68;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r28,56(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// b 0x822fcb6c
	goto loc_822FCB6C;
loc_822FCB68:
	// li r28,0
	r28.s64 = 0;
loc_822FCB6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822fcb7c
	if (ctx.cr6.eq) goto loc_822FCB7C;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// b 0x822fcb80
	goto loc_822FCB80;
loc_822FCB7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822FCB80:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822fcb90
	if (ctx.cr6.eq) goto loc_822FCB90;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// b 0x822fcb94
	goto loc_822FCB94;
loc_822FCB90:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822FCB94:
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r30,0
	r30.s64 = 0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r9,r10
	r29.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822fcc14
	if (!ctx.cr6.gt) goto loc_822FCC14;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_822FCBB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822fcbf0
	if (ctx.cr6.eq) goto loc_822FCBF0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fcc04
	if (ctx.cr6.eq) goto loc_822FCC04;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcbd8
	if (ctx.cr6.eq) goto loc_822FCBD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fcbdc
	goto loc_822FCBDC;
loc_822FCBD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FCBDC:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x822fcc04
	if (!ctx.cr6.eq) goto loc_822FCC04;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fcc04
	if (ctx.cr0.eq) goto loc_822FCC04;
loc_822FCBF0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fcc04
	if (ctx.cr6.eq) goto loc_822FCC04;
	// bl 0x822fcb30
	ctx.lr = 0x822FCBFC;
	sub_822FCB30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fcc28
	if (!ctx.cr0.eq) goto loc_822FCC28;
loc_822FCC04:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x822fcbb0
	if (ctx.cr6.lt) goto loc_822FCBB0;
loc_822FCC14:
	// lwz r11,104(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 104);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822FCC20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_822FCC28:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822fcc20
	goto loc_822FCC20;
}

DEFINE_REX_FUNC(sub_82303548) {
	REX_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230355c
	if (!ctx.cr6.eq) goto loc_8230355C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_8230355C:
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8232f770
	sub_8232F770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82304538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82304540;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,196
	ctx.r6.s64 = 196;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82304560;
	sub_82331A00(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230457c
	if (ctx.cr6.eq) goto loc_8230457C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82300f60
	ctx.lr = 0x82304574;
	sub_82300F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
loc_8230457C:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823045a8
	if (ctx.cr6.eq) goto loc_823045A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823045A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
loc_823045A8:
	// lwz r3,32(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823045cc
	if (ctx.cr6.eq) goto loc_823045CC;
	// bl 0x82331458
	ctx.lr = 0x823045B8;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x823045CC;
	sub_82331A00(ctx, base);
loc_823045CC:
	// lwz r3,36(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823045f0
	if (ctx.cr6.eq) goto loc_823045F0;
	// bl 0x82331458
	ctx.lr = 0x823045DC;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x823045F0;
	sub_82331A00(ctx, base);
loc_823045F0:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304668
	if (ctx.cr6.eq) goto loc_82304668;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82304668
	if (ctx.cr6.eq) goto loc_82304668;
	// li r30,0
	r30.s64 = 0;
	// ble cr6,0x82304654
	if (!ctx.cr6.gt) goto loc_82304654;
	// li r31,0
	r31.s64 = 0;
loc_82304614:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82304640
	if (ctx.cr6.eq) goto loc_82304640;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82331458
	ctx.lr = 0x8230462C;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82304640;
	sub_82331A00(ctx, base);
loc_82304640:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82304614
	if (ctx.cr6.lt) goto loc_82304614;
loc_82304654:
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82304668;
	sub_82331A00(ctx, base);
loc_82304668:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230468c
	if (ctx.cr6.eq) goto loc_8230468C;
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x8230468C;
	sub_82331A00(ctx, base);
loc_8230468C:
	// lwz r31,76(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 76);
	// addi r30,r28,76
	r30.s64 = r28.s64 + 76;
	// b 0x823046c8
	goto loc_823046C8;
loc_82304698:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bne cr6,0x823046a8
	if (!ctx.cr6.eq) goto loc_823046A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823046A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823046BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823046C8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82304698
	if (!ctx.cr6.eq) goto loc_82304698;
	// lwz r31,100(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 100);
	// addi r30,r28,100
	r30.s64 = r28.s64 + 100;
	// b 0x8230470c
	goto loc_8230470C;
loc_823046DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823046ec
	if (!ctx.cr6.eq) goto loc_823046EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823046EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8230470C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823046dc
	if (!ctx.cr6.eq) goto loc_823046DC;
	// lwz r31,112(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 112);
	// addi r30,r28,112
	r30.s64 = r28.s64 + 112;
	// b 0x82304750
	goto loc_82304750;
loc_82304720:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82304730
	if (!ctx.cr6.eq) goto loc_82304730;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82304730:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82304750:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82304720
	if (!ctx.cr6.eq) goto loc_82304720;
	// lwz r31,124(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 124);
	// addi r30,r28,124
	r30.s64 = r28.s64 + 124;
	// b 0x82304794
	goto loc_82304794;
loc_82304764:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82304774
	if (!ctx.cr6.eq) goto loc_82304774;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82304774:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82304794:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82304764
	if (!ctx.cr6.eq) goto loc_82304764;
	// lwz r31,136(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 136);
	// addi r30,r28,136
	r30.s64 = r28.s64 + 136;
	// b 0x823047d8
	goto loc_823047D8;
loc_823047A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823047b8
	if (!ctx.cr6.eq) goto loc_823047B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823047B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823047CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823047D8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823047a8
	if (!ctx.cr6.eq) goto loc_823047A8;
	// lwz r11,148(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230480c
	if (ctx.cr6.eq) goto loc_8230480C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
loc_8230480C:
	// lwz r11,184(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304830
	if (ctx.cr6.eq) goto loc_82304830;
	// lwz r11,188(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 188);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82304830;
	sub_82331A00(ctx, base);
loc_82304830:
	// bl 0x82316640
	ctx.lr = 0x82304834;
	sub_82316640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823049a0
	if (ctx.cr0.eq) goto loc_823049A0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82304850;
	sub_82331A00(ctx, base);
	// bl 0x82316640
	ctx.lr = 0x82304854;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// bl 0x82316640
	ctx.lr = 0x82304884;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823048A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// bl 0x82316640
	ctx.lr = 0x823048B4;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823048C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823048D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// bl 0x82316640
	ctx.lr = 0x823048E4;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823048F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// bl 0x82316640
	ctx.lr = 0x82304914;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// bl 0x82316640
	ctx.lr = 0x82304944;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
	// bl 0x82316640
	ctx.lr = 0x82304974;
	sub_82316640(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823049a4
	if (!ctx.cr0.eq) goto loc_823049A4;
loc_823049A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823049A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823261C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x823130c0
	ctx.lr = 0x823261E4;
	sub_823130C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326200
	if (ctx.cr6.eq) goto loc_82326200;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82326200:
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

DEFINE_REX_FUNC(sub_82328F58) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82328f90
	if (ctx.cr6.eq) goto loc_82328F90;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,7904
	ctx.r5.s64 = ctx.r10.s64 + 7904;
	// li r6,235
	ctx.r6.s64 = 235;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82328F90;
	sub_82330D00(ctx, base);
loc_82328F90:
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

DEFINE_REX_FUNC(sub_8232A370) {
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
	ctx.lr = 0x8232A378;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r24,r3,32
	r24.s64 = ctx.r3.s64 + 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82328c28
	ctx.lr = 0x8232A398;
	sub_82328C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232a5b0
	if (!ctx.cr0.eq) goto loc_8232A5B0;
	// bl 0x823165d8
	ctx.lr = 0x8232A3A4;
	sub_823165D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A3B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232a40c
	if (!ctx.cr6.eq) goto loc_8232A40C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8232d458
	ctx.lr = 0x8232A3E0;
	sub_8232D458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232a5b0
	if (!ctx.cr0.eq) goto loc_8232A5B0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232a5ac
	if (ctx.cr6.eq) goto loc_8232A5AC;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8232e1d0
	ctx.lr = 0x8232A400;
	sub_8232E1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232a5ac
	if (ctx.cr0.eq) goto loc_8232A5AC;
	// b 0x8232a5b0
	goto loc_8232A5B0;
loc_8232A40C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8232a5ac
	if (!ctx.cr6.eq) goto loc_8232A5AC;
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8232a438
	if (ctx.cr6.eq) goto loc_8232A438;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82329710
	ctx.lr = 0x8232A434;
	sub_82329710(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8232A438:
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8232a45c
	if (!ctx.cr6.eq) goto loc_8232A45C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82329fd0
	ctx.lr = 0x8232A450;
	sub_82329FD0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8232a5ac
	if (ctx.cr0.eq) goto loc_8232A5AC;
	// li r26,1
	r26.s64 = 1;
loc_8232A45C:
	// std r27,104(r30)
	REX_STORE_U64(r30.u32 + 104, r27.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r29,r30,88
	r29.s64 = r30.s64 + 88;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r30)
	REX_STORE_U64(r30.u32 + 112, ctx.f0.u64);
	// beq cr6,0x8232a55c
	if (ctx.cr6.eq) goto loc_8232A55C;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r27,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r29,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, r29.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x8232d758
	ctx.lr = 0x8232A4F8;
	sub_8232D758(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8232a564
	if (ctx.cr6.eq) goto loc_8232A564;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x8232d780
	ctx.lr = 0x8232A52C;
	sub_8232D780(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8232d440
	ctx.lr = 0x8232A534;
	sub_8232D440(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a5a4
	if (ctx.cr0.eq) goto loc_8232A5A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82330078
	ctx.lr = 0x8232A550;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232a5a4
	if (ctx.cr0.eq) goto loc_8232A5A4;
	// b 0x8232a5b0
	goto loc_8232A5B0;
loc_8232A55C:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8232a5b0
	goto loc_8232A5B0;
loc_8232A564:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8232fbb0
	ctx.lr = 0x8232A574;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232a5b0
	if (!ctx.cr0.eq) goto loc_8232A5B0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232A590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82329be8
	ctx.lr = 0x8232A5A0;
	sub_82329BE8(ctx, base);
	// std r3,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r3.u64);
loc_8232A5A4:
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_8232A5AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232A5B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8233F488) {
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
	// bl 0x8234aac0
	ctx.lr = 0x8233F4A4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233f4d0
	if (ctx.cr6.eq) goto loc_8233F4D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f4dc
	if (ctx.cr6.eq) goto loc_8233F4DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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
loc_8233F4D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234d800
	ctx.lr = 0x8233F4DC;
	sub_8234D800(ctx, base);
loc_8233F4DC:
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

DEFINE_REX_FUNC(sub_823415F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823415F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341764
	if (ctx.cr6.eq) goto loc_82341764;
	// addi r29,r3,388
	r29.s64 = ctx.r3.s64 + 388;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233e860
	ctx.lr = 0x82341620;
	sub_8233E860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341768
	if (!ctx.cr6.eq) goto loc_82341768;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8233e950
	ctx.lr = 0x82341634;
	sub_8233E950(ctx, base);
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(r30.u32, 2048, ctx.xer);
	// bge cr6,0x82341640
	if (!ctx.cr6.lt) goto loc_82341640;
	// li r30,2048
	r30.s64 = 2048;
loc_82341640:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82341650
	if (!ctx.cr6.lt) goto loc_82341650;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82341650:
	// divwu r10,r30,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r30,344(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 344);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r8,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r8.u32);
	// stw r8,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r8.u32);
	// stw r8,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r8.u32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r4,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x823416d0
	if (ctx.cr6.eq) goto loc_823416D0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// li r6,1976
	ctx.r6.s64 = 1976;
	// bl 0x82330e40
	ctx.lr = 0x823416A8;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r3.u32);
	// bne cr6,0x823416c0
	if (!ctx.cr6.eq) goto loc_823416C0;
loc_823416B4:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823416C0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823416CC;
	sub_823EF2F8(ctx, base);
	// b 0x823416f4
	goto loc_823416F4;
loc_823416D0:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 404);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r10,9276
	ctx.r6.s64 = ctx.r10.s64 + 9276;
	// li r7,1985
	ctx.r7.s64 = 1985;
	// bl 0x82330e48
	ctx.lr = 0x823416E8;
	sub_82330E48(ctx, base);
	// stw r3,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823416b4
	if (ctx.cr6.eq) goto loc_823416B4;
loc_823416F4:
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// bl 0x823414f0
	ctx.lr = 0x82341704;
	sub_823414F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341768
	if (!ctx.cr6.eq) goto loc_82341768;
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwz r3,332(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8233e7e0
	ctx.lr = 0x82341718;
	sub_8233E7E0(ctx, base);
	// lwz r10,384(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 + 312;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r6,384(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwz r3,332(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 332);
	// bl 0x8233e820
	ctx.lr = 0x8234174C;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340418
	ctx.lr = 0x82341754;
	sub_82340418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82341764
	if (ctx.cr6.eq) goto loc_82341764;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82341768
	if (!ctx.cr6.eq) goto loc_82341768;
loc_82341764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82341768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8234D750) {
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
	ctx.lr = 0x8234D758;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r3,76
	r31.s64 = ctx.r3.s64 + 76;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d784
	if (!ctx.cr6.eq) goto loc_8234D784;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8234D784:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// bge cr6,0x8234d798
	if (!ctx.cr6.lt) goto loc_8234D798;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8234D798:
	// lwz r11,72(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234d7e0
	if (!ctx.cr6.gt) goto loc_8234D7E0;
loc_8234D7A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234D7C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8234d7cc
	if (!ctx.cr6.eq) goto loc_8234D7CC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8234D7CC:
	// lwz r11,72(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234d7a8
	if (ctx.cr6.lt) goto loc_8234D7A8;
loc_8234D7E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82352670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,20,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x10;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r9,27,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x8;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r8,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r7,31,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r6,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,75
	ctx.r5.s64 = ctx.r11.s64 + 75;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r5,r4,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r4.u64;
loc_823526DC:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823526E0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823526f4
	if (ctx.cr6.eq) goto loc_823526F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x823526f8
	goto loc_823526F8;
loc_823526F4:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_823526F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235271c
	if (ctx.cr6.eq) goto loc_8235271C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823526e0
	if (!ctx.cr6.lt) goto loc_823526E0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x823526dc
	goto loc_823526DC;
loc_8235271C:
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8235294c
	if (ctx.cr6.lt) goto loc_8235294C;
	// add r31,r6,r4
	r31.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// bge cr6,0x8235294c
	if (!ctx.cr6.lt) goto loc_8235294C;
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r7,24(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8235275c
	if (ctx.cr6.eq) goto loc_8235275C;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823527b8
	if (ctx.cr6.lt) goto loc_823527B8;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x823527b8
	goto loc_823527B8;
loc_8235275C:
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// addi r9,r6,20
	ctx.r9.s64 = ctx.r6.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235277c
	if (!ctx.cr6.eq) goto loc_8235277C;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// addi r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823527b8
	if (ctx.cr6.eq) goto loc_823527B8;
loc_8235277C:
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8235279c
	if (!ctx.cr6.eq) goto loc_8235279C;
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823527a8
	if (ctx.cr6.eq) goto loc_823527A8;
loc_8235279C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8235277c
	goto loc_8235277C;
loc_823527A8:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823527b8
	if (ctx.cr6.lt) goto loc_823527B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_823527B8:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8235287c
	if (ctx.cr6.eq) goto loc_8235287C;
	// lwz r10,28(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// addi r10,r10,75
	ctx.r10.s64 = ctx.r10.s64 + 75;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82352800
	if (!ctx.cr6.eq) goto loc_82352800;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235282c
	if (!ctx.cr6.eq) goto loc_8235282C;
	// lwz r11,28(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// andc r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x8235287c
	goto loc_8235287C;
loc_82352800:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82352824
	if (ctx.cr6.lt) goto loc_82352824;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82352820
	if (!ctx.cr6.eq) goto loc_82352820;
	// stw r11,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// b 0x82352824
	goto loc_82352824;
loc_82352820:
	// stw r11,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
loc_82352824:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235287c
	if (ctx.cr6.eq) goto loc_8235287C;
loc_8235282C:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235287c
	if (ctx.cr6.lt) goto loc_8235287C;
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235285c
	if (ctx.cr6.eq) goto loc_8235285C;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8235285c
	if (ctx.cr6.lt) goto loc_8235285C;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_8235285C:
	// lwz r10,20(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235287c
	if (ctx.cr6.eq) goto loc_8235287C;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8235287c
	if (ctx.cr6.lt) goto loc_8235287C;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_8235287C:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x823528b8
	if (!ctx.cr6.lt) goto loc_823528B8;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// addi r3,r6,8
	ctx.r3.s64 = ctx.r6.s64 + 8;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823528B8:
	// ori r11,r4,3
	ctx.r11.u64 = ctx.r4.u64 | 3;
	// ori r10,r5,1
	ctx.r10.u64 = ctx.r5.u64 | 1;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stwx r5,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352934
	if (ctx.cr6.eq) goto loc_82352934;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// and r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x82352910
	if (!ctx.cr6.eq) goto loc_82352910;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82352924
	goto loc_82352924;
loc_82352910:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352924
	if (ctx.cr6.lt) goto loc_82352924;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82352924:
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r8,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
loc_82352934:
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// addi r3,r6,8
	ctx.r3.s64 = ctx.r6.s64 + 8;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8235294C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82365CA8) {
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
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82365cc4
	if (!ctx.cr6.eq) goto loc_82365CC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365CC4:
	// lwz r3,344(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365ce4
	if (ctx.cr6.eq) goto loc_82365CE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,356(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// bl 0x823ef5f0
	ctx.lr = 0x82365CE4;
	sub_823EF5F0(ctx, base);
loc_82365CE4:
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

DEFINE_REX_FUNC(sub_82369858) {
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
	// addi r31,r11,6320
	r31.s64 = ctx.r11.s64 + 6320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82369880;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,13968
	ctx.r4.s64 = ctx.r10.s64 + 13968;
	// bl 0x82331480
	ctx.lr = 0x82369890;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32202
	ctx.r3.s64 = -2110390272;
	// addi r9,r11,4072
	ctx.r9.s64 = ctx.r11.s64 + 4072;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r9,r3,31080
	ctx.r9.s64 = ctx.r3.s64 + 31080;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,31056
	ctx.r10.s64 = ctx.r10.s64 + 31056;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32202
	ctx.r4.s64 = -2110390272;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lis r8,-32201
	ctx.r8.s64 = -2110324736;
	// addi r11,r4,31200
	ctx.r11.s64 = ctx.r4.s64 + 31200;
	// addi r10,r5,-26608
	ctx.r10.s64 = ctx.r5.s64 + -26608;
	// addi r9,r8,-26560
	ctx.r9.s64 = ctx.r8.s64 + -26560;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// addi r11,r6,-26584
	ctx.r11.s64 = ctx.r6.s64 + -26584;
	// addi r10,r7,31224
	ctx.r10.s64 = ctx.r7.s64 + 31224;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,49496
	ctx.r9.u64 = ctx.r9.u64 | 49496;
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

DEFINE_REX_FUNC(sub_82370C98) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82370cec
	if (ctx.cr6.lt) goto loc_82370CEC;
	// bne cr6,0x82370d0c
	if (!ctx.cr6.eq) goto loc_82370D0C;
	// lfs f0,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82370CD8;
	sub_826A0568(ctx, base);
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
loc_82370CEC:
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82370D0C;
	sub_826A0568(ctx, base);
loc_82370D0C:
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

DEFINE_REX_FUNC(sub_82374D60) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374d70
	if (!ctx.cr6.eq) goto loc_82374D70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374D70:
	// b 0x82374bc0
	sub_82374BC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82375428) {
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
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823754a8
	if (ctx.cr6.eq) goto loc_823754A8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82375468
	if (ctx.cr6.eq) goto loc_82375468;
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
loc_82375468:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375474;
	sub_82340C58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82375484;
	sub_82340E38(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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
loc_823754A8:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8237D588) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237d5c4
	if (ctx.cr6.lt) goto loc_8237D5C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,22
	ctx.r3.s64 = 22;
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// b 0x8237d600
	goto loc_8237D600;
loc_8237D5C4:
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8237d5d4
	if (!ctx.cr6.gt) goto loc_8237D5D4;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8237D5D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237d5f0
	if (ctx.cr6.eq) goto loc_8237D5F0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8237D5F0;
	sub_823EF2F8(ctx, base);
loc_8237D5F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8237D600:
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

DEFINE_REX_FUNC(sub_82384430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82384438;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823845ec
	if (!ctx.cr6.eq) goto loc_823845EC;
	// lwz r11,2200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823844f4
	if (ctx.cr6.lt) goto loc_823844F4;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,2184(r3)
	REX_STORE_U32(ctx.r3.u32 + 2184, ctx.r11.u32);
	// lbz r9,532(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 532);
	// cmplwi cr6,r9,254
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 254, ctx.xer);
	// bne cr6,0x823844bc
	if (!ctx.cr6.eq) goto loc_823844BC;
loc_82384474:
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// lwz r10,1408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823844a8
	if (ctx.cr6.lt) goto loc_823844A8;
	// lbz r11,2166(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823844a0
	if (!ctx.cr6.eq) goto loc_823844A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c86b8
	ctx.lr = 0x823844A0;
	sub_823C86B8(ctx, base);
loc_823844A0:
	// lwz r11,2140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// stw r11,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r11.u32);
loc_823844A8:
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r10,532(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 532);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// beq cr6,0x82384474
	if (ctx.cr6.eq) goto loc_82384474;
loc_823844BC:
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r10,532(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 532);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x823844f4
	if (!ctx.cr6.eq) goto loc_823844F4;
	// lwz r11,2140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// lwz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r11.u32);
	// lbz r8,532(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 532);
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r6.u32);
loc_823844F4:
	// lwz r9,2196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82384510
	if (ctx.cr6.lt) goto loc_82384510;
	// lwz r11,2180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8238451c
	if (!ctx.cr6.eq) goto loc_8238451C;
loc_82384510:
	// lwz r11,2200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82384560
	if (ctx.cr6.lt) goto loc_82384560;
loc_8238451C:
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,520(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r30,r28
	r30.u64 = r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r9,532(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 532);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r7.u32);
	// ble cr6,0x82384560
	if (!ctx.cr6.gt) goto loc_82384560;
loc_82384548:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82381b68
	ctx.lr = 0x82384550;
	sub_82381B68(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82384548
	if (ctx.cr6.lt) goto loc_82384548;
loc_82384560:
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82384578
	if (ctx.cr6.lt) goto loc_82384578;
	// stw r11,2180(r31)
	REX_STORE_U32(r31.u32 + 2180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82381b68
	ctx.lr = 0x82384578;
	sub_82381B68(ctx, base);
loc_82384578:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, ctx.r11.u32);
	// bl 0x82381d78
	ctx.lr = 0x82384590;
	sub_82381D78(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823845f8
	if (!ctx.cr6.eq) goto loc_823845F8;
	// lwz r10,2184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// lwz r11,2180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2180);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, ctx.r11.u32);
	// lbz r7,532(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 532);
	// rotlwi r6,r7,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lwzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823845f8
	if (ctx.cr6.lt) goto loc_823845F8;
	// lwz r9,1408(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823845e4
	if (ctx.cr6.lt) goto loc_823845E4;
	// lwz r11,2140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
loc_823845E4:
	// stw r28,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, r28.u32);
	// b 0x823845f8
	goto loc_823845F8;
loc_823845EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82381d78
	ctx.lr = 0x823845F8;
	sub_82381D78(ctx, base);
loc_823845F8:
	// lwz r10,2172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2172);
	// lwz r8,2188(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 2188);
	// lwz r11,2168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2168);
	// lwz r9,2192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2192);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238462c
	if (ctx.cr6.lt) goto loc_8238462C;
	// stw r28,2188(r31)
	REX_STORE_U32(r31.u32 + 2188, r28.u32);
	// stw r28,2192(r31)
	REX_STORE_U32(r31.u32 + 2192, r28.u32);
	// stw r28,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, r28.u32);
loc_8238462C:
	// lwz r10,1260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1256);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8239B880) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,252
	ctx.r10.u64 = ctx.r11.u64 | 252;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239BD78) {
	REX_FUNC_PROLOGUE();
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239BE70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8239BE78;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x82342240
	ctx.lr = 0x8239BEA0;
	sub_82342240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239bef4
	if (!ctx.cr6.eq) goto loc_8239BEF4;
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239bef0
	if (!ctx.cr6.gt) goto loc_8239BEF0;
	// addi r30,r29,172
	r30.s64 = r29.s64 + 172;
loc_8239BEBC:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239BEE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,172(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 172);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239bebc
	if (ctx.cr6.lt) goto loc_8239BEBC;
loc_8239BEF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239BEF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823A0308) {
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
	ctx.lr = 0x823A0310;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x823A0318;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a03c0
	if (!ctx.cr6.gt) goto loc_823A03C0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// lis r28,8192
	r28.s64 = 536870912;
	// lfs f29,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfs f30,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	f30.f64 = double(temp.f32);
loc_823A0354:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823a0394
	if (!ctx.cr6.gt) goto loc_823A0394;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823a037c
	if (ctx.cr6.eq) goto loc_823A037C;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a0394
	if (ctx.cr6.eq) goto loc_823A0394;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x823a0394
	if (!ctx.cr6.eq) goto loc_823A0394;
loc_823A037C:
	// clrlwi r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a0390
	if (!ctx.cr6.eq) goto loc_823A0390;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// b 0x823a0394
	goto loc_823A0394;
loc_823A0390:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
loc_823A0394:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A03B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a0354
	if (ctx.cr6.lt) goto loc_823A0354;
loc_823A03C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x823A03CC;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823A32B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a32dc
	if (!ctx.cr6.eq) goto loc_823A32DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A32DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823a32fc
	if (!ctx.cr6.eq) goto loc_823A32FC;
	// li r3,37
	ctx.r3.s64 = 37;
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
loc_823A32FC:
	// bl 0x823a2d88
	ctx.lr = 0x823A3300;
	sub_823A2D88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3310
	if (!ctx.cr6.eq) goto loc_823A3310;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_823A3310:
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

DEFINE_REX_FUNC(sub_823A8798) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a8804
	if (ctx.cr6.eq) goto loc_823A8804;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r9,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x823a8260
	ctx.lr = 0x823A87E8;
	sub_823A8260(ctx, base);
	// lbz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823A8804:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AB5A8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,396(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ab600
	if (ctx.cr6.eq) goto loc_823AB600;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,144(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// stw r8,336(r10)
	REX_STORE_U32(ctx.r10.u32 + 336, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,148(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// stw r6,340(r10)
	REX_STORE_U32(ctx.r10.u32 + 340, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,152(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 152);
	// stw r4,344(r10)
	REX_STORE_U32(ctx.r10.u32 + 344, ctx.r4.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,156(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r9,348(r10)
	REX_STORE_U32(ctx.r10.u32 + 348, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,160(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 160);
	// stw r7,352(r10)
	REX_STORE_U32(ctx.r10.u32 + 352, ctx.r7.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,164(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 164);
	// stw r5,356(r10)
	REX_STORE_U32(ctx.r10.u32 + 356, ctx.r5.u32);
loc_823AB600:
	// lwz r10,780(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 780);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ab624
	if (!ctx.cr6.eq) goto loc_823AB624;
	// lwz r9,768(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ab684
	if (ctx.cr6.eq) goto loc_823AB684;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ab624
	if (!ctx.cr6.eq) goto loc_823AB624;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_823AB624:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,400(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// lwz r7,144(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r4,400(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,148(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 148);
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,152(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 152);
	// lwz r8,400(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,400(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// lwz r4,156(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 156);
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,400(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// lwz r7,160(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 160);
	// stw r7,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,400(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// lwz r4,164(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 164);
	// stw r4,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
loc_823AB684:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B2728) {
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
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823b275c
	if (!ctx.cr6.eq) goto loc_823B275C;
loc_823B2744:
	// li r3,53
	ctx.r3.s64 = 53;
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
loc_823B275C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264ced8
	ctx.lr = 0x823B2768;
	sub_8264CED8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823b2794
	if (!ctx.cr6.eq) goto loc_823B2794;
	// bl 0x8264d050
	ctx.lr = 0x823B2774;
	sub_8264D050(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// bne cr6,0x823b2744
	if (!ctx.cr6.eq) goto loc_823B2744;
	// li r3,55
	ctx.r3.s64 = 55;
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
loc_823B2794:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_823BC498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bc4dc
	if (ctx.cr6.eq) goto loc_823BC4DC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823bc4dc
	if (!ctx.cr6.gt) goto loc_823BC4DC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_823BC4C0:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823bc4c0
	if (ctx.cr6.lt) goto loc_823BC4C0;
loc_823BC4DC:
	// b 0x823baf10
	sub_823BAF10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BE258) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// b 0x823be088
	sub_823BE088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BF5B8) {
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
	ctx.lr = 0x823BF5C0;
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,16(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// stw r3,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x823bf60c
	if (!ctx.cr6.eq) goto loc_823BF60C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823bf7e8
	if (!ctx.cr6.eq) goto loc_823BF7E8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,72(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x823d7cb0
	ctx.lr = 0x823BF604;
	sub_823D7CB0(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x826a1cd0
	return;
loc_823BF60C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823bf7e8
	if (!ctx.cr6.eq) goto loc_823BF7E8;
	// lwz r18,8(r15)
	r18.u64 = REX_LOAD_U32(r15.u32 + 8);
	// addi r16,r15,56
	r16.s64 = r15.s64 + 56;
	// lwz r26,12(r15)
	r26.u64 = REX_LOAD_U32(r15.u32 + 12);
	// add r28,r26,r18
	r28.u64 = r26.u64 + r18.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823BF634;
	sub_826A2D14(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// rlwinm r17,r26,2,0,29
	r17.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r17
	ctx.r8.s64 = static_cast<int64_t>(-r17.u64);
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r8,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2d14
	ctx.lr = 0x823BF650;
	sub_826A2D14(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823bfa90
	if (!ctx.cr6.gt) goto loc_823BFA90;
	// rlwinm r22,r27,2,0,29
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	r21.s64 = 0;
	// mr r25,r14
	r25.u64 = r14.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r24,r22,r14
	r24.u64 = r22.u64 + r14.u64;
loc_823BF67C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x823bf6fc
	if (ctx.cr6.lt) goto loc_823BF6FC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// addi r9,r28,-4
	ctx.r9.s64 = r28.s64 + -4;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r6,r11,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r5,r7,r14
	ctx.r5.u64 = ctx.r7.u64 + r14.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// subf r8,r11,r25
	ctx.r8.u64 = r25.u64 - ctx.r11.u64;
	// add r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 + r14.u64;
	// subf r7,r11,r24
	ctx.r7.u64 = r24.u64 - ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BF6D8:
	// lfsux f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ea = ctx.r8.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsux f13,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// lfsux f12,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// lfsux f11,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bf6d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF6D8;
loc_823BF6FC:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x823bf738
	if (!ctx.cr6.lt) goto loc_823BF738;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r28
	ctx.r8.u64 = r28.u64 - ctx.r9.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// subf r10,r22,r7
	ctx.r10.u64 = ctx.r7.u64 - r22.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + r14.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823BF72C:
	// lfsux f0,r11,r22
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + r22.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823bf72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF72C;
loc_823BF738:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r6,72(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 72);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823d7cb0
	ctx.lr = 0x823BF750;
	sub_823D7CB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x823bf79c
	if (ctx.cr6.lt) goto loc_823BF79C;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r20,-4
	ctx.r9.s64 = r20.s64 + -4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823BF778:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823bf778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF778;
loc_823BF79C:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x823bf7c4
	if (!ctx.cr6.lt) goto loc_823BF7C4;
	// add r9,r21,r11
	ctx.r9.u64 = r21.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r11,r26
	ctx.r8.u64 = r26.u64 - ctx.r11.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + r23.u64;
	// add r3,r9,r19
	ctx.r3.u64 = ctx.r9.u64 + r19.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x823BF7C4;
	sub_826A22F8(ctx, base);
loc_823BF7C4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// add r21,r21,r26
	r21.u64 = r21.u64 + r26.u64;
	// add r20,r17,r20
	r20.u64 = r17.u64 + r20.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// blt cr6,0x823bf67c
	if (ctx.cr6.lt) goto loc_823BF67C;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x826a1cd0
	return;
loc_823BF7E8:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// lwz r28,80(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 80);
	// add r16,r28,r11
	r16.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823BF808;
	sub_826A2D14(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r6,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r17,r1,80
	r17.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2d14
	ctx.lr = 0x823BF824;
	sub_826A2D14(ctx, base);
	// lwz r5,0(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stwux r5,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823bfa90
	if (!ctx.cr6.gt) goto loc_823BFA90;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,80(r31)
	REX_STORE_U32(r31.u32 + 80, r14.u32);
	// li r26,2
	r26.s64 = 2;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + r14.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_823BF850:
	// lwz r30,76(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 76);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823bfa68
	if (!ctx.cr6.gt) goto loc_823BFA68;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r20,80(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,84(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r18,0
	r18.s64 = 0;
	// rlwinm r15,r8,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r10,r14
	r22.u64 = ctx.r10.u64 + r14.u64;
	// add r23,r11,r14
	r23.u64 = ctx.r11.u64 + r14.u64;
loc_823BF898:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(r16.s32, 4, ctx.xer);
	// blt cr6,0x823bf8f4
	if (ctx.cr6.lt) goto loc_823BF8F4;
	// addi r10,r16,-4
	ctx.r10.s64 = r16.s64 + -4;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r17,-4
	ctx.r10.s64 = r17.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r5,r11,r23
	ctx.r5.u64 = r23.u64 - ctx.r11.u64;
	// subf r6,r11,r22
	ctx.r6.u64 = r22.u64 - ctx.r11.u64;
	// subf r7,r11,r21
	ctx.r7.u64 = r21.u64 - ctx.r11.u64;
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BF8D0:
	// lfsux f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ea = ctx.r8.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsux f13,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// lfsux f12,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// lfsux f11,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bf8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF8D0;
loc_823BF8F4:
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r16.s32, ctx.xer);
	// bge cr6,0x823bf938
	if (!ctx.cr6.lt) goto loc_823BF938;
	// add r10,r18,r9
	ctx.r10.u64 = r18.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + r25.u64;
	// subf r7,r9,r16
	ctx.r7.u64 = r16.u64 - ctx.r9.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + r14.u64;
loc_823BF92C:
	// lfsux f0,r11,r8
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823bf92c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF92C;
loc_823BF938:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// lwz r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x823d7cb0
	ctx.lr = 0x823BF954;
	sub_823D7CB0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x823bf9fc
	if (ctx.cr6.lt) goto loc_823BF9FC;
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// addi r9,r26,1
	ctx.r9.s64 = r26.s64 + 1;
	// mullw r7,r30,r25
	ctx.r7.s64 = int64_t(r30.s32) * int64_t(r25.s32);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// addi r6,r28,-4
	ctx.r6.s64 = r28.s64 + -4;
	// mullw r9,r26,r30
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// mullw r11,r7,r28
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + r29.u64;
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + r29.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + r19.u64;
	// add r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 + r19.u64;
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + r19.u64;
	// add r8,r8,r19
	ctx.r8.u64 = ctx.r8.u64 + r19.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BF9D8:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfsux f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r8.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfsux f13,r7,r11
	temp.f32 = float(ctx.f13.f64);
	ea = ctx.r7.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsux f12,r6,r11
	temp.f32 = float(ctx.f12.f64);
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// stfsux f0,r5,r11
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x823bf9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF9D8;
loc_823BF9FC:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x823bfa44
	if (!ctx.cr6.lt) goto loc_823BFA44;
	// add r11,r26,r9
	ctx.r11.u64 = r26.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// subf r9,r9,r28
	ctx.r9.u64 = r28.u64 - ctx.r9.u64;
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + r19.u64;
loc_823BFA38:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsux f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r9.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823bfa38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BFA38;
loc_823BFA44:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r18,r18,r28
	r18.u64 = r18.u64 + r28.u64;
	// add r23,r15,r23
	r23.u64 = r15.u64 + r23.u64;
	// add r22,r15,r22
	r22.u64 = r15.u64 + r22.u64;
	// add r21,r15,r21
	r21.u64 = r15.u64 + r21.u64;
	// add r20,r15,r20
	r20.u64 = r15.u64 + r20.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x823bf898
	if (ctx.cr6.lt) goto loc_823BF898;
	// lwz r15,276(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 276);
loc_823BFA68:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(r25.s32, r27.s32, ctx.xer);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// blt cr6,0x823bf850
	if (ctx.cr6.lt) goto loc_823BF850;
loc_823BFA90:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823E1340) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e1354
	if (ctx.cr6.eq) goto loc_823E1354;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e135c
	if (!ctx.cr6.eq) goto loc_823E135C;
loc_823E1354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E135C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823e1220
	sub_823E1220(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E1A90) {
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
	// bl 0x823e19d8
	ctx.lr = 0x823E1AB0;
	sub_823E19D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e1ae0
	if (!ctx.cr6.eq) goto loc_823E1AE0;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e1acc
	if (ctx.cr6.eq) goto loc_823E1ACC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E1ACC;
	sub_82393BF0(ctx, base);
loc_823E1ACC:
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E1ADC;
	sub_823EF5F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E1AE0:
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

DEFINE_REX_FUNC(sub_823E45A0) {
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
	ctx.lr = 0x823E45A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e47d0
	if (!ctx.cr6.gt) goto loc_823E47D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x823e4668
	if (!ctx.cr6.gt) goto loc_823E4668;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823e47d0
	if (!ctx.cr6.gt) goto loc_823E47D0;
loc_823E45E0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e4188
	ctx.lr = 0x823E45EC;
	sub_823E4188(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e465c
	if (ctx.cr6.eq) goto loc_823E465C;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mullw r7,r8,r3
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ble cr6,0x823e4648
	if (!ctx.cr6.gt) goto loc_823E4648;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// add r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 + r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823E4624:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e4624
	if (ctx.cr6.lt) goto loc_823E4624;
loc_823E4648:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// blt cr6,0x823e45e0
	if (ctx.cr6.lt) goto loc_823E45E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823E465C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823E4668:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823e47d0
	if (!ctx.cr6.gt) goto loc_823E47D0;
	// addi r31,r28,-4
	r31.s64 = r28.s64 + -4;
loc_823E4678:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e4188
	ctx.lr = 0x823E4684;
	sub_823E4188(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e465c
	if (ctx.cr6.eq) goto loc_823E465C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bgt cr6,0x823e47c8
	if (ctx.cr6.gt) goto loc_823E47C8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823e47b0
	if (ctx.cr6.eq) goto loc_823E47B0;
	// bdz 0x823e4790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823E4790;
	// bdz 0x823e4770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823E4770;
	// bdz 0x823e4750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823E4750;
	// bdz 0x823e4730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823E4730;
	// bdz 0x823e4710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823E4710;
	// bdz 0x823e46f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823E46F0;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E46F0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E4710:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E4730:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E4750:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E4770:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E4790:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823E47B0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f12,4(r31)
	ea = 4 + r31.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
loc_823E47C8:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// blt cr6,0x823e4678
	if (ctx.cr6.lt) goto loc_823E4678;
loc_823E47D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823EE6B0) {
	REX_FUNC_PROLOGUE();
	// b 0x82793804
	__imp__XamUserAreUsersFriends(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE8B0) {
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
	ctx.lr = 0x823EE8B8;
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
	ctx.lr = 0x823EE8DC;
	sub_823F0480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ee908
	if (!ctx.cr0.eq) goto loc_823EE908;
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
	// clrldi r5,r30,32
	ctx.r5.u64 = r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793834
	ctx.lr = 0x823EE908;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_823EE908:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823EFA40) {
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
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x823efa9c
	if (!ctx.cr6.lt) goto loc_823EFA9C;
loc_823EFA74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823efa9c
	if (!ctx.cr6.eq) goto loc_823EFA9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823efa90
	if (ctx.cr6.eq) goto loc_823EFA90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EFA90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EFA90:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x823efa74
	if (ctx.cr6.lt) goto loc_823EFA74;
loc_823EFA9C:
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

DEFINE_REX_FUNC(sub_823F22E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823F22E8;
	// lbz r31,4(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x823f23fc
	goto loc_823F23FC;
loc_823F2314:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// ble cr6,0x823f2338
	if (!ctx.cr6.gt) goto loc_823F2338;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61441, ctx.xer);
	// bne cr6,0x823f232c
	if (!ctx.cr6.eq) goto loc_823F232C;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_823F232C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// b 0x823f2340
	goto loc_823F2340;
loc_823F2338:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, r29.u8);
loc_823F2340:
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, r31.u8);
	// sth r6,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r4)
	REX_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// bge cr6,0x823f23a4
	if (!ctx.cr6.lt) goto loc_823F23A4;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f23c8
	if (!ctx.cr6.eq) goto loc_823F23C8;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x823f23c8
	goto loc_823F23C8;
loc_823F23A4:
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x823f23c0
	goto loc_823F23C0;
loc_823F23B0:
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823f23c8
	if (!ctx.cr6.gt) goto loc_823F23C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_823F23C0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f23b0
	if (!ctx.cr6.eq) goto loc_823F23B0;
loc_823F23C8:
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r28,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823f2410
	if (!ctx.cr6.lt) goto loc_823F2410;
loc_823F23FC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823f2314
	if (!ctx.cr6.eq) goto loc_823F2314;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2410
	if (!ctx.cr0.eq) goto loc_823F2410;
	// sth r7,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_823F2410:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823FBD88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// li r11,11
	ctx.r11.s64 = 11;
	// lvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r8,63
	ctx.r8.s64 = 63;
	// lvx128 v61,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v59,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// vperm128 v59,v62,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v62,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v60,v60,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v60.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v60.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// vperm128 v13,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v12,v62,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v10,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vperm128 v11,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltw128 v8,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vperm128 v0,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v13,v13,v10,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v7,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vspltw128 v9,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// vmaddfp v13,v8,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v7,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v11,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vrefp v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v8,v11,v0,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v11,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v63,v12
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v61,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v63,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// stvewx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824093F8) {
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
	ctx.lr = 0x82409400;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r8,-29080
	ctx.r8.s64 = ctx.r8.s64 + -29080;
	// lwz r29,104(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r28,116(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r26,52(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// beq cr6,0x8240947c
	if (ctx.cr6.eq) goto loc_8240947C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8240947c
	if (ctx.cr6.eq) goto loc_8240947C;
	// addi r4,r3,36
	ctx.r4.s64 = ctx.r3.s64 + 36;
	// lwz r5,84(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r30,88(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r4,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// bl 0x82408848
	ctx.lr = 0x82409474;
	sub_82408848(ctx, base);
	// stw r5,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r5.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_8240947C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824094A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824094C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r28,116(r31)
	REX_STORE_U32(r31.u32 + 116, r28.u32);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8240F8E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8240F8E8;
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
	// beq cr6,0x8240f910
	if (ctx.cr6.eq) goto loc_8240F910;
	// bl 0x824094e0
	ctx.lr = 0x8240F90C;
	sub_824094E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8240F910:
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
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8240F938;
	sub_826A1E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824105F0) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824106d4
	if (!ctx.cr6.lt) goto loc_824106D4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
loc_8241064C:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
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
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
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
	// bdnz 0x8241064c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241064C;
loc_824106D4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824106f0
	if (ctx.cr6.eq) goto loc_824106F0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x824106F0;
	sub_825C73B8(ctx, base);
loc_824106F0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241070c
	if (ctx.cr6.eq) goto loc_8241070C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x8241070C;
	sub_82409820(ctx, base);
loc_8241070C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82413818) {
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
	// addi r11,r11,20280
	ctx.r11.s64 = ctx.r11.s64 + 20280;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82412330
	ctx.lr = 0x8241383C;
	sub_82412330(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82413850
	if (ctx.cr6.eq) goto loc_82413850;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x82413850;
	sub_823F0350(ctx, base);
loc_82413850:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409168
	ctx.lr = 0x82413858;
	sub_82409168(ctx, base);
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

DEFINE_REX_FUNC(sub_82414B88) {
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
	// lwz r11,628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82414bd8
	if (!ctx.cr6.eq) goto loc_82414BD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1508
	ctx.r5.s64 = 1508;
	// addi r6,r11,23348
	ctx.r6.s64 = ctx.r11.s64 + 23348;
loc_82414BB8:
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82414BC4;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82414c34
	goto loc_82414C34;
loc_82414BD8:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82414bf4
	if (ctx.cr6.eq) goto loc_82414BF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1513
	ctx.r5.s64 = 1513;
	// addi r6,r11,23312
	ctx.r6.s64 = ctx.r11.s64 + 23312;
	// b 0x82414bb8
	goto loc_82414BB8;
loc_82414BF4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82414c18
	if (ctx.cr6.eq) goto loc_82414C18;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82414c18
	if (!ctx.cr6.eq) goto loc_82414C18;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82414c1c
	if (!ctx.cr6.eq) goto loc_82414C1C;
loc_82414C18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82414C1C:
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82414c30
	if (ctx.cr6.eq) goto loc_82414C30;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82414C30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82414C34:
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

DEFINE_REX_FUNC(sub_824198C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824198D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82419974
	if (ctx.cr6.eq) goto loc_82419974;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824198f8
	if (!ctx.cr6.eq) goto loc_824198F8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82419974
	goto loc_82419974;
loc_824198F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82400740
	ctx.lr = 0x82419904;
	sub_82400740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82419978
	if (ctx.cr0.lt) goto loc_82419978;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82419920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r10,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// lwz r31,16(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 16);
	// b 0x8241996c
	goto loc_8241996C;
loc_82419938:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82419940:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82419940
	if (!ctx.cr6.eq) goto loc_82419940;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r30,r5,r30
	r30.u64 = r30.u64 - ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82419968;
	sub_826A1E70(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8241996C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82419938
	if (!ctx.cr6.eq) goto loc_82419938;
loc_82419974:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82419978:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8241DB28) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8241da80
	ctx.lr = 0x8241DB4C;
	sub_8241DA80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241db74
	if (ctx.cr0.lt) goto loc_8241DB74;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8241DB74:
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

DEFINE_REX_FUNC(sub_82422F90) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82422fe8
	if (ctx.cr6.eq) goto loc_82422FE8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82422FA4:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82422fc0
	if (!ctx.cr6.lt) goto loc_82422FC0;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x82422fc4
	goto loc_82422FC4;
loc_82422FC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82422FC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82422ff0
	if (ctx.cr6.eq) goto loc_82422FF0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82422ff0
	if (ctx.cr6.eq) goto loc_82422FF0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82422fa4
	if (ctx.cr6.lt) goto loc_82422FA4;
loc_82422FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82422FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82426090) {
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
	ctx.lr = 0x82426098;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r6,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r5.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r7,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r7.u32);
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82426108
	if (ctx.cr0.eq) goto loc_82426108;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// beq cr6,0x824260f8
	if (ctx.cr6.eq) goto loc_824260F8;
	// li r10,259
	ctx.r10.s64 = 259;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r5,r10,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x824269c0
	goto loc_824269C0;
loc_824260F8:
	// li r11,67
	ctx.r11.s64 = 67;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r5,r11,22,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x824269c0
	goto loc_824269C0;
loc_82426108:
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
	// lfd f1,-23024(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23024);
	// bl 0x82478758
	ctx.lr = 0x82426124;
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
	// lfd f1,-23032(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23032);
	// bl 0x82478758
	ctx.lr = 0x82426148;
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
	// lfd f1,-23040(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23040);
	// bl 0x82478758
	ctx.lr = 0x8242616C;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23048(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23048);
	// bl 0x82478758
	ctx.lr = 0x82426190;
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
	// lfd f1,-23056(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23056);
	// bl 0x82478758
	ctx.lr = 0x824261B4;
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
	// lfd f1,-23096(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23096);
	// bl 0x82478758
	ctx.lr = 0x824261D8;
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
	ctx.lr = 0x824261FC;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23672(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23672);
	// bl 0x82478758
	ctx.lr = 0x82426220;
	sub_82478758(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r31,192
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(192));
	// bl 0x823f02b8
	ctx.lr = 0x82426230;
	sub_823F02B8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82426248
	if (!ctx.cr0.eq) goto loc_82426248;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824269d0
	goto loc_824269D0;
loc_82426248:
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82426260:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82426260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426260;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,39
	ctx.r8.s64 = 39;
loc_82426274:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242629c
	if (ctx.cr6.eq) goto loc_8242629C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242629c
	if (ctx.cr0.eq) goto loc_8242629C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82426294:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82426294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426294;
loc_8242629C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82426274
	if (!ctx.cr0.eq) goto loc_82426274;
	// lwz r27,284(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r15,268(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r16,264(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r17,260(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r28,256(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// beq cr6,0x82426330
	if (ctx.cr6.eq) goto loc_82426330;
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// subf r10,r28,r18
	ctx.r10.u64 = r18.u64 - r28.u64;
	// subf r9,r28,r17
	ctx.r9.u64 = r17.u64 - r28.u64;
	// subf r8,r28,r16
	ctx.r8.u64 = r16.u64 - r28.u64;
	// subf r7,r28,r15
	ctx.r7.u64 = r15.u64 - r28.u64;
	// subf r6,r28,r6
	ctx.r6.u64 = ctx.r6.u64 - r28.u64;
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - r28.u64;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - r28.u64;
	// subf r3,r28,r27
	ctx.r3.u64 = r27.u64 - r28.u64;
loc_824262FC:
	// stwx r26,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r26.u32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stwx r24,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r24.u32);
	// stwx r23,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r23.u32);
	// stwx r22,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, r22.u32);
	// stwx r21,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, r21.u32);
	// stwx r20,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, r20.u32);
	// stwx r19,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, r19.u32);
	// lwz r14,32(r30)
	r14.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stwx r14,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r14.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824262fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824262FC;
	// lwz r14,484(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
loc_82426330:
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82426340
	if (!ctx.cr6.eq) goto loc_82426340;
	// stw r27,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, r27.u32);
loc_82426340:
	// clrlwi r19,r31,12
	r19.u64 = r31.u32 & 0xFFFFF;
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r26,r19,4112
	r26.u64 = r19.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426370;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// oris r24,r19,8208
	r24.u64 = r19.u64 | 537919488;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824263A4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r14,104(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r27,492(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824263D4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r22,108(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426400;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r25,112(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// oris r5,r19,8192
	ctx.r5.u64 = r19.u64 | 536870912;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426430;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,116(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242645C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,120(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r19,4144
	ctx.r5.u64 = r19.u64 | 271581184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426488;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r23,124(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// oris r24,r19,8272
	r24.u64 = r19.u64 | 542113792;
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824264B8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r25,128(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824264E4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426510;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,136(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// oris r21,r19,8256
	r21.u64 = r19.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426540;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,140(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242656C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,144(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426598;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824265C4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,152(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824265F0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242661C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426648;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r25,164(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426674;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,168(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// oris r23,r19,8224
	r23.u64 = r19.u64 | 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824266A4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,172(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r8,272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824266D0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,176(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824266FC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,180(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426728;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,184(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426754;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,200(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// li r9,23
	ctx.r9.s64 = 23;
	// lwz r25,492(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426784;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,204(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824267B0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r22,208(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824267DC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,212(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,484(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242680C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,216(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426838;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,220(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r20,88(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426868;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r25,224(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426894;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,228(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824268C0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,232(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r19,8240
	ctx.r5.u64 = r19.u64 | 540016640;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824268EC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r26,236(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426918;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,240(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426944;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r27,244(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82426970;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r28,248(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242699C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// lwz r6,500(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824269C0:
	// bl 0x82423f70
	ctx.lr = 0x824269C4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824269d0
	if (ctx.cr0.lt) goto loc_824269D0;
	// li r31,0
	r31.s64 = 0;
loc_824269D0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823f0350
	ctx.lr = 0x824269DC;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82468EC8) {
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
	ctx.lr = 0x82468ED0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82468fcc
	if (ctx.cr6.eq) goto loc_82468FCC;
loc_82468EF4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82468fb8
	if (!ctx.cr6.eq) goto loc_82468FB8;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82468f18
	if (ctx.cr6.eq) goto loc_82468F18;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82468F18:
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82468f2c
	if (ctx.cr6.eq) goto loc_82468F2C;
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82468F2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82468f98
	if (ctx.cr6.eq) goto loc_82468F98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82468fb8
	if (ctx.cr6.eq) goto loc_82468FB8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x82468F48;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82468fb8
	if (ctx.cr0.lt) goto loc_82468FB8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x82468F5C;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,99
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 99, ctx.xer);
	// bne cr6,0x82468fb8
	if (!ctx.cr6.eq) goto loc_82468FB8;
	// lwz r11,200(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 200);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82468f7c
	if (!ctx.cr6.eq) goto loc_82468F7C;
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x82468fb8
	goto loc_82468FB8;
loc_82468F7C:
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82468fb8
	if (!ctx.cr0.eq) goto loc_82468FB8;
	// clrlwi. r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82468fb8
	if (!ctx.cr0.eq) goto loc_82468FB8;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x82468fb8
	goto loc_82468FB8;
loc_82468F98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82468fb8
	if (ctx.cr6.eq) goto loc_82468FB8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x82468FAC;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,99
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 99, ctx.xer);
	// bne cr6,0x82468fb8
	if (!ctx.cr6.eq) goto loc_82468FB8;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82468FB8:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82468ef4
	if (!ctx.cr6.eq) goto loc_82468EF4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82468fe4
	if (!ctx.cr6.eq) goto loc_82468FE4;
loc_82468FCC:
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82468fe4
	if (!ctx.cr6.eq) goto loc_82468FE4;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824690a8
	if (ctx.cr6.eq) goto loc_824690A8;
loc_82468FE4:
	// lwz r11,348(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246909c
	if (ctx.cr6.eq) goto loc_8246909C;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x82468FFC;
	sub_826A14C8(ctx, base);
	// cmpwi cr6,r3,99
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 99, ctx.xer);
	// bne cr6,0x824690a8
	if (!ctx.cr6.eq) goto loc_824690A8;
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1);
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0820
	ctx.lr = 0x82469014;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824690a8
	if (ctx.cr0.eq) goto loc_824690A8;
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x82469030
	goto loc_82469030;
loc_8246902C:
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
loc_82469030:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0820
	ctx.lr = 0x82469038;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8246902c
	if (!ctx.cr0.eq) goto loc_8246902C;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824690a8
	if (!ctx.cr0.eq) goto loc_824690A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a08a0
	ctx.lr = 0x82469054;
	sub_826A08A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8191
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8191, ctx.xer);
	// ble cr6,0x82469088
	if (!ctx.cr6.gt) goto loc_82469088;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,-7544
	ctx.r6.s64 = ctx.r11.s64 + -7544;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82489c30
	ctx.lr = 0x8246907C;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824690ac
	goto loc_824690AC;
loc_82469088:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x824690a4
	goto loc_824690A4;
loc_8246909C:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_824690A4:
	// sth r11,10(r25)
	REX_STORE_U16(r25.u32 + 10, ctx.r11.u16);
loc_824690A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824690AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82474720) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474760) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474968) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,29608
	ctx.r11.s64 = ctx.r11.s64 + 29608;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824691d0
	sub_824691D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82475560) {
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
	// beq cr6,0x82475590
	if (ctx.cr6.eq) goto loc_82475590;
loc_82475588:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82475664
	goto loc_82475664;
loc_82475590:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82475588
	if (!ctx.cr0.eq) goto loc_82475588;
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x824715b8
	ctx.lr = 0x824755AC;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82475664
	if (ctx.cr0.lt) goto loc_82475664;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247561c
	if (!ctx.cr6.eq) goto loc_8247561C;
	// lis r4,-28672
	ctx.r4.s64 = -1879048192;
loc_824755C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824755CC:
	// bl 0x8246e840
	ctx.lr = 0x824755D0;
	sub_8246E840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82475664
	if (ctx.cr0.lt) goto loc_82475664;
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
	ctx.lr = 0x82475600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82475664
	if (ctx.cr0.lt) goto loc_82475664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82475610;
	sub_82468DD8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x82475664
	goto loc_82475664;
loc_8247561C:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82475630
	if (!ctx.cr6.eq) goto loc_82475630;
	// lis r4,-24576
	ctx.r4.s64 = -1610612736;
	// b 0x824755c8
	goto loc_824755C8;
loc_82475630:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82475648
	if (!ctx.cr6.eq) goto loc_82475648;
	// lis r4,-26624
	ctx.r4.s64 = -1744830464;
	// b 0x824755cc
	goto loc_824755CC;
loc_82475648:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4814
	ctx.r5.s64 = 4814;
	// addi r6,r11,13064
	ctx.r6.s64 = ctx.r11.s64 + 13064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x8247565C;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82475664:
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

DEFINE_REX_FUNC(sub_82479618) {
	REX_FUNC_PROLOGUE();
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// rlwinm r9,r9,0,3,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF9FFFFFFF;
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// oris r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 | 2097152;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r9.u32);
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247BF08) {
	REX_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247bf28
	if (!ctx.cr6.eq) goto loc_8247BF28;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8247BF28:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8247bfa0
	if (ctx.cr6.lt) goto loc_8247BFA0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8247bfa0
	if (!ctx.cr6.lt) goto loc_8247BFA0;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247bf84
	if (ctx.cr6.eq) goto loc_8247BF84;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_8247BF60:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8247bf84
	if (ctx.cr6.eq) goto loc_8247BF84;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247bf60
	if (!ctx.cr6.eq) goto loc_8247BF60;
loc_8247BF84:
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247bfa0
	if (!ctx.cr6.eq) goto loc_8247BFA0;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8247BFA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82481F80) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82481F88;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82481fdc
	if (ctx.cr6.eq) goto loc_82481FDC;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82481FB0:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82481fcc
	if (!ctx.cr6.gt) goto loc_82481FCC;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82481fcc
	if (ctx.cr6.eq) goto loc_82481FCC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82481FCC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82481fb0
	if (ctx.cr6.lt) goto loc_82481FB0;
loc_82481FDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r23,r9,1
	r23.s64 = ctx.r9.s64 + 1;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82482174
	if (!ctx.cr6.gt) goto loc_82482174;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	r24.s64 = 0;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82481FFC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r29,r24,r11
	r29.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248206c
	if (ctx.cr6.eq) goto loc_8248206C;
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
loc_82482024:
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r4,68(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8248205c
	if (!ctx.cr6.eq) goto loc_8248205C;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248205c
	if (ctx.cr0.eq) goto loc_8248205C;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_8248205C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82482024
	if (ctx.cr6.lt) goto loc_82482024;
loc_8248206C:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82482160
	if (ctx.cr6.eq) goto loc_82482160;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824820b8
	if (ctx.cr6.eq) goto loc_824820B8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824787f8
	ctx.lr = 0x82482098;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824821e4
	if (ctx.cr6.eq) goto loc_824821E4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r26,r10,r11
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82477420
	ctx.lr = 0x824820B8;
	sub_82477420(ctx, base);
loc_824820B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248215c
	if (!ctx.cr6.gt) goto loc_8248215C;
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_824820D0:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r21,r11,r10
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r6,16(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r9
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82478758
	ctx.lr = 0x8248210C;
	sub_82478758(ctx, base);
	// lwz r11,68(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82482124
	if (!ctx.cr6.eq) goto loc_82482124;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82482140
	if (!ctx.cr0.eq) goto loc_82482140;
loc_82482124:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stwx r11,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stwx r3,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_82482140:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824820d0
	if (ctx.cr6.lt) goto loc_824820D0;
loc_8248215C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_82482160:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82481ffc
	if (ctx.cr6.lt) goto loc_82481FFC;
loc_82482174:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481098
	ctx.lr = 0x8248217C;
	sub_82481098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824821d8
	if (ctx.cr0.lt) goto loc_824821D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824821d4
	if (!ctx.cr6.gt) goto loc_824821D4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82482198:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x824821c0
	if (!ctx.cr6.eq) goto loc_824821C0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x824821c0
	if (!ctx.cr6.eq) goto loc_824821C0;
	// lwz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_824821C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482198
	if (ctx.cr6.lt) goto loc_82482198;
loc_824821D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824821D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_824821E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824821d8
	goto loc_824821D8;
}

DEFINE_REX_FUNC(sub_8249AFC8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8249b034
	if (!ctx.cr6.eq) goto loc_8249B034;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249b01c
	if (ctx.cr6.eq) goto loc_8249B01C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8249b01c
	if (!ctx.cr6.eq) goto loc_8249B01C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8249b050
	if (ctx.cr6.eq) goto loc_8249B050;
loc_8249B01C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-11312
	ctx.r6.s64 = ctx.r11.s64 + -11312;
loc_8249B024:
	// li r5,3020
	ctx.r5.s64 = 3020;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249B034;
	sub_82494D48(ctx, base);
loc_8249B034:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249B038:
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
loc_8249B050:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249af20
	ctx.lr = 0x8249B060;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8249b074
	if (!ctx.cr0.lt) goto loc_8249B074;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-11340
	ctx.r6.s64 = ctx.r11.s64 + -11340;
	// b 0x8249b024
	goto loc_8249B024;
loc_8249B074:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x8249B07C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b09c
	if (ctx.cr0.eq) goto loc_8249B09C;
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82447910
	ctx.lr = 0x8249B094;
	sub_82447910(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8249b0a0
	goto loc_8249B0A0;
loc_8249B09C:
	// li r31,0
	r31.s64 = 0;
loc_8249B0A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8249b034
	if (ctx.cr6.eq) goto loc_8249B034;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249B0B0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b034
	if (ctx.cr0.eq) goto loc_8249B034;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82445bf8
	ctx.lr = 0x8249B0C0;
	sub_82445BF8(ctx, base);
	// b 0x8249b038
	goto loc_8249B038;
}

DEFINE_REX_FUNC(sub_824A78A0) {
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
	ctx.lr = 0x824A78A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a78c4
	if (ctx.cr6.eq) goto loc_824A78C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a7b64
	goto loc_824A7B64;
loc_824A78C4:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r23,0
	r23.s64 = 0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_824A78E0:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x824a78e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A78E0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r23,540(r30)
	REX_STORE_U32(r30.u32 + 540, r23.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r23,544(r30)
	REX_STORE_U32(r30.u32 + 544, r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,508
	ctx.r3.s64 = r30.s64 + 508;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// std r23,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r23.u64);
	// bl 0x826a2e60
	ctx.lr = 0x824A790C;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a7aa0
	if (!ctx.cr6.gt) goto loc_824A7AA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r23
	r28.u64 = r23.u64;
	// addi r27,r11,30208
	r27.s64 = ctx.r11.s64 + 30208;
loc_824A7928:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r31,r11,r28
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824a7a00
	if (ctx.cr0.eq) goto loc_824A7A00;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,11
	ctx.cr6.compare<uint32_t>(r29.u32, 11, ctx.xer);
	// beq cr6,0x824a79cc
	if (ctx.cr6.eq) goto loc_824A79CC;
	// cmplwi cr6,r29,13
	ctx.cr6.compare<uint32_t>(r29.u32, 13, ctx.xer);
	// bne cr6,0x824a7a8c
	if (!ctx.cr6.eq) goto loc_824A7A8C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a7a8c
	if (!ctx.cr6.eq) goto loc_824A7A8C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a7a8c
	if (ctx.cr6.eq) goto loc_824A7A8C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824a7a8c
	if (!ctx.cr6.eq) goto loc_824A7A8C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r5,4528
	ctx.r5.s64 = 4528;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x824A79C0;
	sub_82489C30(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r24,1
	r24.s64 = 1;
	// b 0x824a7a8c
	goto loc_824A7A8C;
loc_824A79CC:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x824a7a8c
	if (!ctx.cr6.lt) goto loc_824A7A8C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// b 0x824a7a8c
	goto loc_824A7A8C;
loc_824A7A00:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824a7a8c
	if (ctx.cr0.eq) goto loc_824A7A8C;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a7a8c
	if (!ctx.cr0.eq) goto loc_824A7A8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7A44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(r29.u32, 6, ctx.xer);
	// beq cr6,0x824a7a64
	if (ctx.cr6.eq) goto loc_824A7A64;
	// cmplwi cr6,r29,11
	ctx.cr6.compare<uint32_t>(r29.u32, 11, ctx.xer);
	// bne cr6,0x824a7a8c
	if (!ctx.cr6.eq) goto loc_824A7A8C;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x824a7a8c
	if (!ctx.cr6.lt) goto loc_824A7A8C;
	// addi r10,r3,135
	ctx.r10.s64 = ctx.r3.s64 + 135;
	// b 0x824a7a70
	goto loc_824A7A70;
loc_824A7A64:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x824a7a8c
	if (!ctx.cr6.lt) goto loc_824A7A8C;
	// addi r10,r3,127
	ctx.r10.s64 = ctx.r3.s64 + 127;
loc_824A7A70:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824a7a8c
	if (!ctx.cr6.lt) goto loc_824A7A8C;
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
loc_824A7A8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a7928
	if (ctx.cr6.lt) goto loc_824A7928;
loc_824A7AA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r27,r23
	r27.u64 = r23.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r31,r23
	r31.u64 = r23.u64;
	// addi r29,r11,30168
	r29.s64 = ctx.r11.s64 + 30168;
	// addi r28,r10,30104
	r28.s64 = ctx.r10.s64 + 30104;
loc_824A7ABC:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824A7AD0:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r8,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x824a7ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7AD0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824a7b6c
	if (!ctx.cr6.eq) goto loc_824A7B6C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824a7b1c
	if (!ctx.cr6.eq) goto loc_824A7B1C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4530
	ctx.r5.s64 = 4530;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x824A7B18;
	sub_82489C30(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_824A7B1C:
	// li r27,1
	r27.s64 = 1;
loc_824A7B20:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x824a7abc
	if (ctx.cr6.lt) goto loc_824A7ABC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824a7b50
	if (!ctx.cr6.eq) goto loc_824A7B50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4538
	ctx.r5.s64 = 4538;
	// addi r6,r11,30044
	ctx.r6.s64 = ctx.r11.s64 + 30044;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x824A7B4C;
	sub_82489C30(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_824A7B50:
	// subfic r11,r24,0
	ctx.xer.ca = r24.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r24.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_824A7B64:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
loc_824A7B6C:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x824a7b94
	if (ctx.cr6.eq) goto loc_824A7B94;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,4529
	ctx.r5.s64 = 4529;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82489c30
	ctx.lr = 0x824A7B90;
	sub_82489C30(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_824A7B94:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824a7b20
	if (ctx.cr6.eq) goto loc_824A7B20;
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x824a7b20
	goto loc_824A7B20;
}

DEFINE_REX_FUNC(sub_824BC3F8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,3288
	ctx.r11.s64 = ctx.r11.s64 + 3288;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x824691d0
	ctx.lr = 0x824BC424;
	sub_824691D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bc438
	if (ctx.cr0.eq) goto loc_824BC438;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824BC438;
	sub_823F0350(ctx, base);
loc_824BC438:
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

DEFINE_REX_FUNC(sub_824BF440) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x824bf464
	if (!ctx.cr6.eq) goto loc_824BF464;
	// li r30,64
	r30.s64 = 64;
	// b 0x824bf470
	goto loc_824BF470;
loc_824BF464:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x824bf49c
	if (!ctx.cr6.eq) goto loc_824BF49C;
	// li r30,1696
	r30.s64 = 1696;
loc_824BF470:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824BF47C;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824bf494
	if (ctx.cr0.eq) goto loc_824BF494;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824BF494;
	sub_826A2E60(ctx, base);
loc_824BF494:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824bf4a0
	goto loc_824BF4A0;
loc_824BF49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BF4A0:
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

DEFINE_REX_FUNC(sub_824C0420) {
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
	ctx.lr = 0x824C0428;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x824c0474
	if (ctx.cr6.eq) goto loc_824C0474;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r4.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824C0474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C0474:
	// li r5,584
	ctx.r5.s64 = 584;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bfec8
	ctx.lr = 0x824C0484;
	sub_824BFEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r25,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r25.u32);
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824C2C88) {
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
	// beq cr6,0x824c2cf4
	if (ctx.cr6.eq) goto loc_824C2CF4;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c2cf4
	if (ctx.cr6.eq) goto loc_824C2CF4;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c2cf4
	if (ctx.cr6.eq) goto loc_824C2CF4;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c2cd0
	if (ctx.cr6.eq) goto loc_824C2CD0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824cee50
	ctx.lr = 0x824C2CD0;
	sub_824CEE50(ctx, base);
loc_824C2CD0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C2CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// b 0x824c2cf8
	goto loc_824C2CF8;
loc_824C2CF4:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_824C2CF8:
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

DEFINE_REX_FUNC(sub_824C5050) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C5308) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x824C5328;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c533c
	if (ctx.cr0.eq) goto loc_824C533C;
	// bl 0x824c51f0
	ctx.lr = 0x824C5334;
	sub_824C51F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824c5340
	goto loc_824C5340;
loc_824C533C:
	// li r31,0
	r31.s64 = 0;
loc_824C5340:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824c5350
	if (!ctx.cr6.eq) goto loc_824C5350;
loc_824C5348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c5404
	goto loc_824C5404;
loc_824C5350:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c53ac
	if (ctx.cr6.eq) goto loc_824C53AC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C53A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c5348
	if (ctx.cr0.eq) goto loc_824C5348;
loc_824C53AC:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c53d8
	if (ctx.cr6.eq) goto loc_824C53D8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C53CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824c5348
	if (ctx.cr0.eq) goto loc_824C5348;
loc_824C53D8:
	// ld r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 48);
	// addi r10,r30,48
	ctx.r10.s64 = r30.s64 + 48;
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 56);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// ld r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// ld r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 72);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_824C5404:
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

DEFINE_REX_FUNC(sub_824CA600) {
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
	ctx.lr = 0x824CA608;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,452(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ca9e8
	if (!ctx.cr6.gt) goto loc_824CA9E8;
	// addi r30,r10,36
	r30.s64 = ctx.r10.s64 + 36;
	// addi r25,r11,44
	r25.s64 = ctx.r11.s64 + 44;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r23,48
	r23.s64 = 48;
	// li r22,7
	r22.s64 = 7;
	// addi r31,r11,8608
	r31.s64 = ctx.r11.s64 + 8608;
	// addi r29,r10,8480
	r29.s64 = ctx.r10.s64 + 8480;
loc_824CA650:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x824ca728
	if (ctx.cr6.gt) goto loc_824CA728;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824ca694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA694;
	// bdzf 4*cr6+eq,0x824ca728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA728;
	// bdzf 4*cr6+eq,0x824ca6a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA6A4;
	// bdzf 4*cr6+eq,0x824ca728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA728;
	// bdzf 4*cr6+eq,0x824ca728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA728;
	// bdzf 4*cr6+eq,0x824ca728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA728;
	// bne cr6,0x824ca6b4
	if (!ctx.cr6.eq) goto loc_824CA6B4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,1384
	r27.s64 = ctx.r11.s64 + 1384;
	// b 0x824ca750
	goto loc_824CA750;
loc_824CA694:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-112
	r27.s64 = ctx.r11.s64 + -112;
	// b 0x824ca750
	goto loc_824CA750;
loc_824CA6A4:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-936
	r27.s64 = ctx.r11.s64 + -936;
	// b 0x824ca750
	goto loc_824CA750;
loc_824CA6B4:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x824ca710
	if (ctx.cr6.gt) goto loc_824CA710;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824ca6f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA6F0;
	// bdzf 4*cr6+eq,0x824ca700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA700;
	// bdzf 4*cr6+eq,0x824ca6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA6E0;
	// bdzf 4*cr6+eq,0x824ca6f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA6F0;
	// bdzf 4*cr6+eq,0x824ca6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CA6E0;
	// bne cr6,0x824ca6f0
	if (!ctx.cr6.eq) goto loc_824CA6F0;
loc_824CA6E0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-2128
	r27.s64 = ctx.r11.s64 + -2128;
	// b 0x824ca750
	goto loc_824CA750;
loc_824CA6F0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,1
	r28.s64 = 1;
	// addi r27,r11,-3296
	r27.s64 = ctx.r11.s64 + -3296;
	// b 0x824ca750
	goto loc_824CA750;
loc_824CA700:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r28,2
	r28.s64 = 2;
	// addi r27,r11,-4400
	r27.s64 = ctx.r11.s64 + -4400;
	// b 0x824ca750
	goto loc_824CA750;
loc_824CA710:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r23.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x824ca748
	goto loc_824CA748;
loc_824CA728:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824CA748:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x824CA750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA750:
	// stw r27,-40(r25)
	REX_STORE_U32(r25.u32 + -40, r27.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824ca9d0
	if (ctx.cr6.eq) goto loc_824CA9D0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x824ca9d0
	if (ctx.cr6.eq) goto loc_824CA9D0;
	// lwz r6,40(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824ca9d0
	if (ctx.cr6.eq) goto loc_824CA9D0;
	// stw r28,0(r25)
	REX_STORE_U32(r25.u32 + 0, r28.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// blt cr6,0x824ca9b0
	if (ctx.cr6.lt) goto loc_824CA9B0;
	// beq cr6,0x824ca900
	if (ctx.cr6.eq) goto loc_824CA900;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x824ca7b0
	if (ctx.cr6.lt) goto loc_824CA7B0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r23.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824CA7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824ca9d0
	goto loc_824CA9D0;
loc_824CA7B0:
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824CA7C8:
	// lhz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lfd f10,8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f0,8(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lfd f13,16(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lfd f12,24(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lfd f11,40(r31)
	ctx.f11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f9,56(r31)
	ctx.f9.u64 = REX_LOAD_U64(r31.u32 + 56);
	// fmul f7,f8,f10
	ctx.f7.f64 = ctx.f8.f64 * ctx.f10.f64;
	// lfd f10,48(r31)
	ctx.f10.u64 = REX_LOAD_U64(r31.u32 + 48);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfd f5,8(r10)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lhz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f4,88(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f5
	ctx.f2.f64 = ctx.f3.f64 * ctx.f5.f64;
	// fmul f1,f2,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfd f8,8(r10)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmul f5,f6,f8
	ctx.f5.f64 = ctx.f6.f64 * ctx.f8.f64;
	// fmul f4,f5,f13
	ctx.f4.f64 = ctx.f5.f64 * ctx.f13.f64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,12(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfd f2,8(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fmul f13,f0,f2
	ctx.f13.f64 = ctx.f0.f64 * ctx.f2.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// stfs f8,16(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfd f7,8(r10)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lhz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// std r5,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmul f4,f5,f7
	ctx.f4.f64 = ctx.f5.f64 * ctx.f7.f64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,20(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lfd f2,8(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f1,120(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fmul f13,f0,f2
	ctx.f13.f64 = ctx.f0.f64 * ctx.f2.f64;
	// fmul f12,f13,f11
	ctx.f12.f64 = ctx.f13.f64 * ctx.f11.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,24(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lfd f8,8(r10)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lhz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// std r7,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmul f5,f6,f8
	ctx.f5.f64 = ctx.f6.f64 * ctx.f8.f64;
	// fmul f4,f5,f10
	ctx.f4.f64 = ctx.f5.f64 * ctx.f10.f64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,28(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfdu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// lhzu r6,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f2,136(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmul f13,f0,f9
	ctx.f13.f64 = ctx.f0.f64 * ctx.f9.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsu f12,32(r9)
	ea = 32 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x824ca7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CA7C8;
	// b 0x824ca9d0
	goto loc_824CA9D0;
loc_824CA900:
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r4,r29,2
	ctx.r4.s64 = r29.s64 + 2;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 + r29.u64;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r9,r29,-8
	ctx.r9.s64 = r29.s64 + -8;
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// subf r6,r8,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_824CA934:
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r3,r8,2048
	ctx.r3.s64 = ctx.r8.s64 + 2048;
	// srawi r8,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 12;
	// sth r8,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lhzx r3,r5,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r8,r8,2048
	ctx.r8.s64 = ctx.r8.s64 + 2048;
	// srawi r3,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 12;
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lhz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// addi r8,r8,2048
	ctx.r8.s64 = ctx.r8.s64 + 2048;
	// srawi r3,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 12;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r8,r8,2048
	ctx.r8.s64 = ctx.r8.s64 + 2048;
	// srawi r3,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 12;
	// sth r3,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x824ca934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CA934;
	// b 0x824ca9d0
	goto loc_824CA9D0;
loc_824CA9B0:
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824CA9C0:
	// lhzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x824ca9c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CA9C0;
loc_824CA9D0:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824ca650
	if (ctx.cr6.lt) goto loc_824CA650;
loc_824CA9E8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824DE660) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824de694
	if (ctx.cr6.eq) goto loc_824DE694;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x823f0350
	ctx.lr = 0x824DE690;
	sub_823F0350(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_824DE694:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_824E1160) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x824E1168;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e0f48
	ctx.lr = 0x824E119C;
	sub_824E0F48(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// blt 0x824e13d4
	if (ctx.cr0.lt) goto loc_824E13D4;
	// rlwinm. r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e13d4
	if (ctx.cr0.eq) goto loc_824E13D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,19072
	r29.s64 = ctx.r11.s64 + 19072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E11C0;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-19772
	r28.s64 = ctx.r11.s64 + -19772;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E11D4;
	sub_824DF9F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19228
	ctx.r4.s64 = ctx.r11.s64 + 19228;
	// bl 0x824e0480
	ctx.lr = 0x824E11E4;
	sub_824E0480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r6,24(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 24);
	// addi r4,r11,23928
	ctx.r4.s64 = ctx.r11.s64 + 23928;
	// lhz r5,26(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 26);
	// bl 0x824df9f0
	ctx.lr = 0x824E11FC;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E1208;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E1214;
	sub_824DF9F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23876
	ctx.r4.s64 = ctx.r11.s64 + 23876;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// bl 0x824df9f0
	ctx.lr = 0x824E1234;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E1240;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E124C;
	sub_824DF9F0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r17,r11,27,27,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq 0x824e13c4
	if (ctx.cr0.eq) goto loc_824E13C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23848
	ctx.r4.s64 = ctx.r11.s64 + 23848;
	// bl 0x824df9f0
	ctx.lr = 0x824E126C;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E1278;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E1284;
	sub_824DF9F0(ctx, base);
	// li r16,0
	r16.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824e13ac
	if (ctx.cr6.eq) goto loc_824E13AC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r9,23796
	r23.s64 = ctx.r9.s64 + 23796;
	// addi r26,r8,23768
	r26.s64 = ctx.r8.s64 + 23768;
	// addi r25,r7,-22352
	r25.s64 = ctx.r7.s64 + -22352;
	// addi r22,r6,17996
	r22.s64 = ctx.r6.s64 + 17996;
	// addi r21,r5,18000
	r21.s64 = ctx.r5.s64 + 18000;
	// addi r20,r4,18004
	r20.s64 = ctx.r4.s64 + 18004;
	// addi r24,r10,-26856
	r24.s64 = ctx.r10.s64 + -26856;
	// addi r19,r11,28512
	r19.s64 = ctx.r11.s64 + 28512;
loc_824E12D4:
	// lwz r30,0(r18)
	r30.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// rlwinm. r11,r30,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r30,28,28,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xF;
	// clrlwi r7,r30,28
	ctx.r7.u64 = r30.u32 & 0xF;
	// rlwinm r9,r30,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0xF;
	// bne 0x824e12f4
	if (!ctx.cr0.eq) goto loc_824E12F4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_824E12F4:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne 0x824e1304
	if (!ctx.cr0.eq) goto loc_824E1304;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_824E1304:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// bne 0x824e1314
	if (!ctx.cr0.eq) goto loc_824E1314;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_824E1314:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// bne 0x824e1324
	if (!ctx.cr0.eq) goto loc_824E1324;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_824E1324:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r30,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r6,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r25.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E1348;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E1354;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E1360;
	sub_824DF9F0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e1398
	if (ctx.cr6.eq) goto loc_824E1398;
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e1398
	if (ctx.cr6.lt) goto loc_824E1398;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E1380;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E138C;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E1398;
	sub_824DF9F0(ctx, base);
loc_824E1398:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r16,r30,24
	r16.u64 = r30.u32 & 0xFF;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(r27.u32, r17.u32, ctx.xer);
	// blt cr6,0x824e12d4
	if (ctx.cr6.lt) goto loc_824E12D4;
loc_824E13AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E13B8;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E13C4;
	sub_824DF9F0(ctx, base);
loc_824E13C4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19212
	ctx.r4.s64 = ctx.r11.s64 + 19212;
	// bl 0x824e0480
	ctx.lr = 0x824E13D4;
	sub_824E0480(ctx, base);
loc_824E13D4:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_824EFAF8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824efb40
	if (!ctx.cr6.eq) goto loc_824EFB40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26492
	ctx.r5.s64 = ctx.r10.s64 + -26492;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFB38;
	sub_824EA978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824efb44
	goto loc_824EFB44;
loc_824EFB40:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_824EFB44:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_824F19B8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,116(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F2628) {
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
	ctx.lr = 0x824F2630;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r8,-26848
	r27.s64 = ctx.r8.s64 + -26848;
	// addi r31,r9,22852
	r31.s64 = ctx.r9.s64 + 22852;
	// addi r26,r10,-23684
	r26.s64 = ctx.r10.s64 + -23684;
	// addi r30,r11,-23840
	r30.s64 = ctx.r11.s64 + -23840;
loc_824F265C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 36);
	// bl 0x824ee4d0
	ctx.lr = 0x824F2668;
	sub_824EE4D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824f26c4
	if (ctx.cr0.eq) goto loc_824F26C4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824f2684
	if (ctx.cr6.eq) goto loc_824F2684;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f269c
	if (!ctx.cr6.gt) goto loc_824F269C;
loc_824F2684:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,340
	ctx.r7.s64 = 340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F269C;
	sub_824EA978(ctx, base);
loc_824F269C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824edd70
	ctx.lr = 0x824F26A4;
	sub_824EDD70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f26c4
	if (ctx.cr0.eq) goto loc_824F26C4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,345
	ctx.r7.s64 = 345;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F26C4;
	sub_824EA978(ctx, base);
loc_824F26C4:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f265c
	if (!ctx.cr6.gt) goto loc_824F265C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F7C98) {
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
	// addi r30,r4,12
	r30.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824F7CC0;
	sub_823F02B8(ctx, base);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lwz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 152);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// lwz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 152);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824FEC50) {
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
	ctx.lr = 0x824FEC58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// lbz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 40);
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// addi r7,r7,-32680
	ctx.r7.s64 = ctx.r7.s64 + -32680;
	// addi r10,r10,-32676
	ctx.r10.s64 = ctx.r10.s64 + -32676;
	// addi r11,r11,-32672
	ctx.r11.s64 = ctx.r11.s64 + -32672;
	// addi r8,r8,-32668
	ctx.r8.s64 = ctx.r8.s64 + -32668;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r27,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r27.u32);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r27,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// beq 0x824fecd0
	if (ctx.cr0.eq) goto loc_824FECD0;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r9,r11,4,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x824fecc0
	if (ctx.cr6.lt) goto loc_824FECC0;
loc_824FECB0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824FECB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_824FECC0:
	// rlwinm r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x824fed14
	goto loc_824FED14;
loc_824FECD0:
	// lwz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r9,8,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x7;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824fecf0
	if (!ctx.cr6.eq) goto loc_824FECF0;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// b 0x824fecf8
	goto loc_824FECF8;
loc_824FECF0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824fecb0
	if (!ctx.cr6.eq) goto loc_824FECB0;
loc_824FECF8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x824fecb0
	if (ctx.cr6.gt) goto loc_824FECB0;
	// rlwinm r11,r9,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_824FED14:
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// bl 0x823f02b8
	ctx.lr = 0x824FED24;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824fecb0
	if (ctx.cr0.eq) goto loc_824FECB0;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824FED48;
	sub_826A2E60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addic. r11,r31,16
	ctx.xer.ca = r31.u32 > 4294967279;
	ctx.r11.s64 = r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// beq 0x824fecb0
	if (ctx.cr0.eq) goto loc_824FECB0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824FED6C:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x824fed6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824FED6C;
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r28,r30,84
	r28.s64 = r30.s64 + 84;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r29,1
	r29.s64 = 65536;
loc_824FED84:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824fdd20
	ctx.lr = 0x824FED98;
	sub_824FDD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fede0
	if (ctx.cr0.lt) goto loc_824FEDE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x824fede0
	if (!ctx.cr6.lt) goto loc_824FEDE0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x824fede0
	if (!ctx.cr6.lt) goto loc_824FEDE0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824fed84
	if (!ctx.cr6.gt) goto loc_824FED84;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824fede0
	if (!ctx.cr6.eq) goto loc_824FEDE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824fedfc
	if (!ctx.cr6.eq) goto loc_824FEDFC;
loc_824FEDE0:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_824FEDE8:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824FEDF4;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824fecb8
	goto loc_824FECB8;
loc_824FEDFC:
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x824fede8
	goto loc_824FEDE8;
}

DEFINE_REX_FUNC(sub_8250BA30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250BA38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ba60
	if (ctx.cr0.eq) goto loc_8250BA60;
	// li r31,0
	r31.s64 = 0;
	// b 0x8250bad8
	goto loc_8250BAD8;
loc_8250BA60:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8250bad8
	if (ctx.cr0.eq) goto loc_8250BAD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8250baac
	if (ctx.cr6.eq) goto loc_8250BAAC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8250baac
	if (ctx.cr6.eq) goto loc_8250BAAC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8250baac
	if (ctx.cr6.eq) goto loc_8250BAAC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8250baac
	if (ctx.cr6.eq) goto loc_8250BAAC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8250baac
	if (ctx.cr6.eq) goto loc_8250BAAC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8250bab0
	if (!ctx.cr6.eq) goto loc_8250BAB0;
loc_8250BAAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250BAB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250bad8
	if (ctx.cr0.eq) goto loc_8250BAD8;
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
	ctx.lr = 0x8250BAD0;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// lwzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
loc_8250BAD8:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8250bafc
	if (!ctx.cr6.eq) goto loc_8250BAFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250a580
	ctx.lr = 0x8250BAE8;
	sub_8250A580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250bb04
	if (ctx.cr0.eq) goto loc_8250BB04;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
loc_8250BAFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8250BB04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// beq cr6,0x8250bafc
	if (ctx.cr6.eq) goto loc_8250BAFC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250BB20;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8251E3D0) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x8251e414
	if (!ctx.cr6.lt) goto loc_8251E414;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8251E3F0:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8251e41c
	if (!ctx.cr6.eq) goto loc_8251E41C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8251e3f0
	if (ctx.cr6.lt) goto loc_8251E3F0;
loc_8251E414:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8251E41C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251F218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251F220;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8251ea80
	ctx.lr = 0x8251F23C;
	sub_8251EA80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251f254
	if (!ctx.cr6.eq) goto loc_8251F254;
	// li r4,3570
	ctx.r4.s64 = 3570;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824e4368
	ctx.lr = 0x8251F254;
	sub_824E4368(ctx, base);
loc_8251F254:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = r31.u32 & 0xF;
	// bl 0x82503970
	ctx.lr = 0x8251F260;
	sub_82503970(ctx, base);
	// rlwinm r11,r31,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r10,r31,28,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82524060) {
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
	ctx.lr = 0x82524068;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82524114
	if (!ctx.cr6.eq) goto loc_82524114;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82524094:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82524114
	if (ctx.cr6.eq) goto loc_82524114;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825240b8
	if (ctx.cr6.eq) goto loc_825240B8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// beq cr6,0x825240c0
	if (ctx.cr6.eq) goto loc_825240C0;
loc_825240B8:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82524094
	goto loc_82524094;
loc_825240C0:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_825240D4:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82524114
	if (!ctx.cr6.lt) goto loc_82524114;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// bne cr6,0x82524108
	if (!ctx.cr6.eq) goto loc_82524108;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// andc r7,r29,r7
	ctx.r7.u64 = r29.u64 & ~ctx.r7.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r29,r7,r11
	r29.u64 = ctx.r7.u64 | ctx.r11.u64;
loc_82524108:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x825240d4
	goto loc_825240D4;
loc_82524114:
	// addi r28,r26,4
	r28.s64 = r26.s64 + 4;
	// li r25,1
	r25.s64 = 1;
loc_8252411C:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82524338
	if (ctx.cr6.eq) goto loc_82524338;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82524324
	if (ctx.cr6.eq) goto loc_82524324;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r6,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825242c4
	if (ctx.cr0.eq) goto loc_825242C4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x825242c4
	if (!ctx.cr6.eq) goto loc_825242C4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// beq cr6,0x82524268
	if (ctx.cr6.eq) goto loc_82524268;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// beq cr6,0x82524268
	if (ctx.cr6.eq) goto loc_82524268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825241c4
	if (ctx.cr6.eq) goto loc_825241C4;
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r8,r6,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_82524188:
	// srw r5,r8,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r5,r25,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82524188
	if (ctx.cr6.lt) goto loc_82524188;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825241c4
	if (ctx.cr6.eq) goto loc_825241C4;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq 0x825241c8
	if (ctx.cr0.eq) goto loc_825241C8;
loc_825241C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825241C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82524268
	if (!ctx.cr0.eq) goto loc_82524268;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825241e0
	if (ctx.cr0.eq) goto loc_825241E0;
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825241E0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825242c4
	if (ctx.cr6.eq) goto loc_825242C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r10,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82524244
	goto loc_82524244;
loc_8252423C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82524244:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252423c
	if (!ctx.cr6.eq) goto loc_8252423C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r27)
	REX_STORE_U32(r27.u32 + 4, r31.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// b 0x82524324
	goto loc_82524324;
loc_82524268:
	// rlwinm r11,r6,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x3;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82524294
	goto loc_82524294;
loc_8252428C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82524294:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252428c
	if (!ctx.cr6.eq) goto loc_8252428C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82524324
	goto loc_82524324;
loc_825242C4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825242ec
	if (ctx.cr0.eq) goto loc_825242EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825242ec
	if (ctx.cr0.eq) goto loc_825242EC;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x825242E8;
	sub_8250B470(ctx, base);
	// b 0x82524324
	goto loc_82524324;
loc_825242EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82524304
	goto loc_82524304;
loc_825242FC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82524304:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x825242fc
	if (!ctx.cr6.eq) goto loc_825242FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_82524324:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8252411c
	if (!ctx.cr6.eq) goto loc_8252411C;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8252411c
	goto loc_8252411C;
loc_82524338:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252434c
	if (!ctx.cr0.eq) goto loc_8252434C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825226b0
	ctx.lr = 0x8252434C;
	sub_825226B0(ctx, base);
loc_8252434C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8252436c
	if (!ctx.cr6.eq) goto loc_8252436C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82548eb8
	ctx.lr = 0x82524368;
	sub_82548EB8(ctx, base);
	// b 0x8252437c
	goto loc_8252437C;
loc_8252436C:
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252437c
	if (!ctx.cr0.eq) goto loc_8252437C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8252437C;
	sub_8250AED8(ctx, base);
loc_8252437C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252440c
	if (ctx.cr0.eq) goto loc_8252440C;
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82524404
	if (ctx.cr0.eq) goto loc_82524404;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwimi r10,r25,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x82516990
	ctx.lr = 0x825243C0;
	sub_82516990(ctx, base);
	// sth r3,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r3.u16);
	// lwz r11,668(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 668);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8252440c
	if (!ctx.cr6.gt) goto loc_8252440C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825243D8:
	// lwz r10,708(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 708);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// bne cr6,0x825243ec
	if (!ctx.cr6.eq) goto loc_825243EC;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
loc_825243EC:
	// lwz r10,668(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 668);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825243d8
	if (ctx.cr6.lt) goto loc_825243D8;
	// b 0x8252440c
	goto loc_8252440C;
loc_82524404:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82549518
	ctx.lr = 0x8252440C;
	sub_82549518(ctx, base);
loc_8252440C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252449c
	if (ctx.cr0.eq) goto loc_8252449C;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_8252441C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252445c
	if (ctx.cr6.eq) goto loc_8252445C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252443c
	if (!ctx.cr0.eq) goto loc_8252443C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq 0x82524440
	if (ctx.cr0.eq) goto loc_82524440;
loc_8252443C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82524440:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82524454
	if (ctx.cr0.eq) goto loc_82524454;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524454;
	sub_8250AD28(ctx, base);
loc_82524454:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8252441c
	goto loc_8252441C;
loc_8252445C:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r10,r10,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
loc_82524484:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x82524494
	if (!ctx.cr6.eq) goto loc_82524494;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_82524494:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82524484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82524484;
loc_8252449C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7708
	ctx.lr = 0x825244A4;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82524500
	if (ctx.cr0.eq) goto loc_82524500;
loc_825244AC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825244c4
	if (ctx.cr0.eq) goto loc_825244C4;
	// li r31,0
	r31.s64 = 0;
	// b 0x825244cc
	goto loc_825244CC;
loc_825244C4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_825244CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7708
	ctx.lr = 0x825244D4;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825244f0
	if (ctx.cr0.eq) goto loc_825244F0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x825244F0;
	sub_825C2288(ctx, base);
loc_825244F0:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825244ac
	if (!ctx.cr6.eq) goto loc_825244AC;
	// b 0x8252451c
	goto loc_8252451C;
loc_82524500:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8252451c
	if (!ctx.cr6.eq) goto loc_8252451C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82523820
	ctx.lr = 0x8252451C;
	sub_82523820(ctx, base);
loc_8252451C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8255C678) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8255C680;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r23,0
	r23.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
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
	// bne 0x8255c7b8
	if (!ctx.cr0.eq) goto loc_8255C7B8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255c7b8
	if (ctx.cr0.eq) goto loc_8255C7B8;
loc_8255C6C0:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r10,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8255c7a0
	if (!ctx.cr6.eq) goto loc_8255C7A0;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm. r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c7a0
	if (ctx.cr0.eq) goto loc_8255C7A0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r23,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r23.u32);
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x8255c790
	if (ctx.cr0.eq) goto loc_8255C790;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r9,44
	ctx.r10.s64 = ctx.r9.s64 + 44;
loc_8255C704:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r6,r5,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// li r4,-1
	ctx.r4.s64 = -1;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// slw r6,r4,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8255c75c
	if (ctx.cr6.eq) goto loc_8255C75C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8255c774
	if (!ctx.cr6.eq) goto loc_8255C774;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x8255c768
	goto loc_8255C768;
loc_8255C75C:
	// lwa r7,0(r10)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + 0));
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
loc_8255C768:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8255C774:
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r7,18,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x7;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8255c704
	if (ctx.cr6.lt) goto loc_8255C704;
loc_8255C790:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,0,30,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
loc_8255C7A0:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c7b8
	if (!ctx.cr0.eq) goto loc_8255C7B8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8255c6c0
	if (!ctx.cr6.eq) goto loc_8255C6C0;
loc_8255C7B8:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c960
	if (ctx.cr0.eq) goto loc_8255C960;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r30,r23
	r30.u64 = r23.u64;
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
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c960
	if (!ctx.cr0.eq) goto loc_8255C960;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8255c960
	if (ctx.cr0.eq) goto loc_8255C960;
loc_8255C7EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8255c8c8
	if (!ctx.cr6.eq) goto loc_8255C8C8;
	// rlwinm. r4,r11,18,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// beq 0x8255c82c
	if (ctx.cr0.eq) goto loc_8255C82C;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
loc_8255C810:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r8,18,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x7;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8255c810
	if (ctx.cr6.lt) goto loc_8255C810;
loc_8255C82C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825bdf00
	ctx.lr = 0x8255C844;
	sub_825BDF00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8255c8c8
	if (ctx.cr6.eq) goto loc_8255C8C8;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8255C850:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255c8b4
	if (ctx.cr6.eq) goto loc_8255C8B4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255c8a0
	if (ctx.cr6.eq) goto loc_8255C8A0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8255c880
	goto loc_8255C880;
loc_8255C878:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8255C880:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255c878
	if (!ctx.cr6.eq) goto loc_8255C878;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8255C8A0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255c850
	if (!ctx.cr6.eq) goto loc_8255C850;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8255c850
	goto loc_8255C850;
loc_8255C8B4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x8255C8C8;
	sub_825C2288(ctx, base);
loc_8255C8C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255c910
	if (ctx.cr6.eq) goto loc_8255C910;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255c900
	if (!ctx.cr6.eq) goto loc_8255C900;
loc_8255C8F0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8255c950
	goto loc_8255C950;
loc_8255C900:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255c960
	if (!ctx.cr0.eq) goto loc_8255C960;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x8255c958
	goto loc_8255C958;
loc_8255C910:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8255c8f0
	if (ctx.cr6.eq) goto loc_8255C8F0;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8255C950:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255c960
	if (!ctx.cr0.eq) goto loc_8255C960;
loc_8255C958:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8255c7ec
	if (!ctx.cr6.eq) goto loc_8255C7EC;
loc_8255C960:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// rlwinm. r11,r11,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255cb50
	if (ctx.cr0.eq) goto loc_8255CB50;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255cb50
	if (!ctx.cr0.eq) goto loc_8255CB50;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255cb50
	if (ctx.cr0.eq) goto loc_8255CB50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8255C98C:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
loc_8255C990:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8255cb34
	if (ctx.cr6.eq) goto loc_8255CB34;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13184
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13184, ctx.xer);
	// bne cr6,0x8255caf0
	if (!ctx.cr6.eq) goto loc_8255CAF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8255C9CC;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8255cafc
	if (!ctx.cr6.lt) goto loc_8255CAFC;
	// rlwinm r31,r31,18,29,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,44(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x8255C9F8;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
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
	// beq cr6,0x8255ca70
	if (ctx.cr6.eq) goto loc_8255CA70;
	// addi r26,r3,40
	r26.s64 = ctx.r3.s64 + 40;
loc_8255CA44:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82580638
	ctx.lr = 0x8255CA54;
	sub_82580638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255CA60;
	sub_8250AD28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// blt cr6,0x8255ca44
	if (ctx.cr6.lt) goto loc_8255CA44;
loc_8255CA70:
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
loc_8255CA74:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255cad8
	if (ctx.cr6.eq) goto loc_8255CAD8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255cac4
	if (ctx.cr6.eq) goto loc_8255CAC4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8255caa4
	goto loc_8255CAA4;
loc_8255CA9C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8255CAA4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255ca9c
	if (!ctx.cr6.eq) goto loc_8255CA9C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
loc_8255CAC4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255ca74
	if (!ctx.cr6.eq) goto loc_8255CA74;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8255ca74
	goto loc_8255CA74;
loc_8255CAD8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x8255CAEC;
	sub_825C2288(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8255CAF0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8255c990
	goto loc_8255C990;
loc_8255CAFC:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8255cb5c
	if (!ctx.cr6.eq) goto loc_8255CB5C;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8255CB10;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne 0x8255cb68
	if (!ctx.cr0.eq) goto loc_8255CB68;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x825c2510
	ctx.lr = 0x8255CB30;
	sub_825C2510(ctx, base);
	// b 0x8255c98c
	goto loc_8255C98C;
loc_8255CB34:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255cb50
	if (!ctx.cr0.eq) goto loc_8255CB50;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255c98c
	if (!ctx.cr6.eq) goto loc_8255C98C;
loc_8255CB50:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
loc_8255CB5C:
	// li r4,3618
	ctx.r4.s64 = 3618;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255CB68;
	sub_824E4368(ctx, base);
loc_8255CB68:
	// li r4,3643
	ctx.r4.s64 = 3643;
	// bl 0x824e4368
	ctx.lr = 0x8255CB70;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8258C870) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8258C878;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c918
	if (ctx.cr6.eq) goto loc_8258C918;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8258c918
	if (ctx.cr6.eq) goto loc_8258C918;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258C8A8;
	sub_824E4368(ctx, base);
loc_8258C8A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8258c900
	if (!ctx.cr6.eq) goto loc_8258C900;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c92c
	if (ctx.cr6.eq) goto loc_8258C92C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8258c92c
	if (!ctx.cr6.eq) goto loc_8258C92C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258c900
	if (ctx.cr6.eq) goto loc_8258C900;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258c900
	if (ctx.cr0.eq) goto loc_8258C900;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,60(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8258c420
	ctx.lr = 0x8258C900;
	sub_8258C420(ctx, base);
loc_8258C900:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c918
	if (ctx.cr6.eq) goto loc_8258C918;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258c938
	if (!ctx.cr6.eq) goto loc_8258C938;
loc_8258C918:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bne cr6,0x8258c8a8
	if (!ctx.cr6.eq) goto loc_8258C8A8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8258C92C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C938;
	sub_824E4368(ctx, base);
loc_8258C938:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C944;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825A0A38) {
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
	ctx.lr = 0x825A0A40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-13840
	r29.s64 = ctx.r10.s64 + -13840;
	// bne cr6,0x825a0a8c
	if (!ctx.cr6.eq) goto loc_825A0A8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A0A8C;
	sub_824EA978(ctx, base);
loc_825A0A8C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825a0ab0
	if (!ctx.cr6.eq) goto loc_825A0AB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A0AB0;
	sub_824EA978(ctx, base);
loc_825A0AB0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825a0ad4
	if (!ctx.cr6.eq) goto loc_825A0AD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-13852
	ctx.r5.s64 = ctx.r11.s64 + -13852;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,77
	ctx.r7.s64 = 77;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A0AD4;
	sub_824EA978(ctx, base);
loc_825A0AD4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x825a0af8
	if (!ctx.cr6.eq) goto loc_825A0AF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-25924
	ctx.r5.s64 = ctx.r11.s64 + -25924;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,78
	ctx.r7.s64 = 78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A0AF8;
	sub_824EA978(ctx, base);
loc_825A0AF8:
	// li r4,20
	ctx.r4.s64 = 20;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x825A0B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a0b30
	if (!ctx.cr0.eq) goto loc_825A0B30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-13900
	ctx.r5.s64 = ctx.r11.s64 + -13900;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,84
	ctx.r7.s64 = 84;
	// bl 0x824ea978
	ctx.lr = 0x825A0B28;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825a0b44
	goto loc_825A0B44;
loc_825A0B30:
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r25,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r25.u32);
loc_825A0B44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825A43C0) {
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
	ctx.lr = 0x825A43C8;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-10504
	r28.s64 = ctx.r10.s64 + -10504;
	// bne cr6,0x825a4408
	if (!ctx.cr6.eq) goto loc_825A4408;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-10296
	ctx.r5.s64 = ctx.r11.s64 + -10296;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,496
	ctx.r7.s64 = 496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4408;
	sub_824EA978(ctx, base);
loc_825A4408:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x825a442c
	if (!ctx.cr6.eq) goto loc_825A442C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-10304
	ctx.r5.s64 = ctx.r11.s64 + -10304;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A442C;
	sub_824EA978(ctx, base);
loc_825A442C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f0e58
	ctx.lr = 0x825A4434;
	sub_824F0E58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824f0e58
	ctx.lr = 0x825A4440;
	sub_824F0E58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a4468
	if (!ctx.cr6.eq) goto loc_825A4468;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9832
	ctx.r5.s64 = ctx.r11.s64 + -9832;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4468;
	sub_824EA978(ctx, base);
loc_825A4468:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825a448c
	if (!ctx.cr6.eq) goto loc_825A448C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9840
	ctx.r5.s64 = ctx.r11.s64 + -9840;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,517
	ctx.r7.s64 = 517;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A448C;
	sub_824EA978(ctx, base);
loc_825A448C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82629600
	ctx.lr = 0x825A4494;
	sub_82629600(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629600
	ctx.lr = 0x825A44A0;
	sub_82629600(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r27.s32, ctx.xer);
	// bne cr6,0x825a44c4
	if (!ctx.cr6.eq) goto loc_825A44C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-9884
	ctx.r5.s64 = ctx.r11.s64 + -9884;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,518
	ctx.r7.s64 = 518;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A44C4;
	sub_824EA978(ctx, base);
loc_825A44C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a3610
	ctx.lr = 0x825A44CC;
	sub_825A3610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a3610
	ctx.lr = 0x825A44D8;
	sub_825A3610(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x825a4644
	if (!ctx.cr6.lt) goto loc_825A4644;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r23,0
	r23.s64 = 0;
	// addi r26,r10,-9928
	r26.s64 = ctx.r10.s64 + -9928;
	// addi r25,r9,-9972
	r25.s64 = ctx.r9.s64 + -9972;
	// addi r24,r8,-10020
	r24.s64 = ctx.r8.s64 + -10020;
	// addi r27,r11,-10068
	r27.s64 = ctx.r11.s64 + -10068;
loc_825A4508:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f06a0
	ctx.lr = 0x825A4518;
	sub_824F06A0(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a4630
	if (ctx.cr6.eq) goto loc_825A4630;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824f06a0
	ctx.lr = 0x825A4534;
	sub_824F06A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a4644
	if (ctx.cr6.eq) goto loc_825A4644;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825a4594
	if (ctx.cr6.eq) goto loc_825A4594;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x825a4570
	if (ctx.cr6.lt) goto loc_825A4570;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,554
	ctx.r7.s64 = 554;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4570;
	sub_824EA978(ctx, base);
loc_825A4570:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x825a4594
	if (ctx.cr6.lt) goto loc_825A4594;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4594;
	sub_824EA978(ctx, base);
loc_825A4594:
	// li r31,0
	r31.s64 = 0;
loc_825A4598:
	// addi r30,r1,84
	r30.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825a45f4
	if (ctx.cr6.eq) goto loc_825A45F4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x825a45d0
	if (ctx.cr6.lt) goto loc_825A45D0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,568
	ctx.r7.s64 = 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A45D0;
	sub_824EA978(ctx, base);
loc_825A45D0:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x825a45f4
	if (ctx.cr6.lt) goto loc_825A45F4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,569
	ctx.r7.s64 = 569;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A45F4;
	sub_824EA978(ctx, base);
loc_825A45F4:
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a4644
	if (!ctx.cr6.eq) goto loc_825A4644;
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a4644
	if (!ctx.cr6.eq) goto loc_825A4644;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// blt cr6,0x825a4598
	if (ctx.cr6.lt) goto loc_825A4598;
loc_825A4630:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(r23.u32, 16, ctx.xer);
	// blt cr6,0x825a4508
	if (ctx.cr6.lt) goto loc_825A4508;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a4648
	goto loc_825A4648;
loc_825A4644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4648:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825B3808) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x824f0f18
	sub_824F0F18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B3938) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_825B3D28) {
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
	ctx.lr = 0x825B3D30;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r4,r11,-4140
	ctx.r4.s64 = ctx.r11.s64 + -4140;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82130e88
	ctx.lr = 0x825B3D60;
	sub_82130E88(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x825b3ab0
	ctx.lr = 0x825B3D68;
	sub_825B3AB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lbz r11,1380(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3db4
	if (ctx.cr0.eq) goto loc_825B3DB4;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x825b3db8
	goto loc_825B3DB8;
loc_825B3DB4:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825B3DB8:
	// bl 0x824f13d0
	ctx.lr = 0x825B3DBC;
	sub_824F13D0(ctx, base);
	// lwz r11,1436(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1436);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,1444(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B7008) {
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
	ctx.lr = 0x825B7010;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-2432
	r27.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b7058
	if (!ctx.cr6.eq) goto loc_825B7058;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B7058;
	sub_824EA978(ctx, base);
loc_825B7058:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x825b7068
	if (!ctx.cr6.eq) goto loc_825B7068;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x825b7090
	goto loc_825B7090;
loc_825B7068:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// beq cr6,0x825b708c
	if (ctx.cr6.eq) goto loc_825B708C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25788
	ctx.r5.s64 = ctx.r11.s64 + -25788;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B708C;
	sub_824EA978(ctx, base);
loc_825B708C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_825B7090:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f0f80
	ctx.lr = 0x825B709C;
	sub_824F0F80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B83C8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825b83e4
	if (ctx.cr6.lt) goto loc_825B83E4;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825b83e8
	if (!ctx.cr6.gt) goto loc_825B83E8;
loc_825B83E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B83E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b8438
	if (!ctx.cr0.eq) goto loc_825B8438;
	// rlwinm. r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8400
	if (ctx.cr0.eq) goto loc_825B8400;
loc_825B83F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825B8400:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825b841c
	if (ctx.cr6.eq) goto loc_825B841C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b8420
	if (!ctx.cr6.eq) goto loc_825B8420;
loc_825B841C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825B8420:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_825B8424:
	// bne 0x825b83f8
	if (!ctx.cr0.eq) goto loc_825B83F8;
loc_825B8428:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b8520
	goto loc_825B8520;
loc_825B8438:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825b8454
	if (ctx.cr6.eq) goto loc_825B8454;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b8458
	if (!ctx.cr6.eq) goto loc_825B8458;
loc_825B8454:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825B8458:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8510
	if (ctx.cr0.eq) goto loc_825B8510;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825b8428
	if (!ctx.cr6.gt) goto loc_825B8428;
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825b8498
	if (ctx.cr6.eq) goto loc_825B8498;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b849c
	if (!ctx.cr6.eq) goto loc_825B849C;
loc_825B8498:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825B849C:
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825b84c0
	if (ctx.cr6.eq) goto loc_825B84C0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825b84c4
	if (!ctx.cr6.eq) goto loc_825B84C4;
loc_825B84C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825B84C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x825b84e8
	if (ctx.cr0.eq) goto loc_825B84E8;
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b84e8
	if (ctx.cr0.eq) goto loc_825B84E8;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// rlwinm. r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825b83f8
	if (!ctx.cr0.eq) goto loc_825B83F8;
loc_825B84E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b84f8
	if (!ctx.cr6.eq) goto loc_825B84F8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8428
	if (ctx.cr0.eq) goto loc_825B8428;
loc_825B84F8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x825b8424
	goto loc_825B8424;
loc_825B8510:
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x825b8424
	goto loc_825B8424;
loc_825B8518:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825B8520:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825b8518
	if (!ctx.cr6.eq) goto loc_825B8518;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r11,r6,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r7,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r5,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C4A48) {
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
	ctx.lr = 0x825C4A50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// clrlwi r26,r7,24
	r26.u64 = ctx.r7.u32 & 0xFF;
loc_825C4A6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c4a84
	if (ctx.cr6.eq) goto loc_825C4A84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8252dc68
	ctx.lr = 0x825C4A80;
	sub_8252DC68(ctx, base);
	// b 0x825c4ab0
	goto loc_825C4AB0;
loc_825C4A84:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_825C4A88:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4ad4
	if (!ctx.cr0.eq) goto loc_825C4AD4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4ad4
	if (ctx.cr0.eq) goto loc_825C4AD4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c4a88
	if (!ctx.cr6.eq) goto loc_825C4A88;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825C4AB0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c4adc
	if (ctx.cr0.eq) goto loc_825C4ADC;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x825c4a6c
	goto loc_825C4A6C;
loc_825C4AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825c4ab0
	goto loc_825C4AB0;
loc_825C4ADC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2f18
	ctx.lr = 0x825C4AF4;
	sub_825C2F18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825C8238) {
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
	ctx.lr = 0x825C8240;
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
	// beq cr6,0x825c8278
	if (ctx.cr6.eq) goto loc_825C8278;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825C8274;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825C8278:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825c8294
	if (ctx.cr6.eq) goto loc_825C8294;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825C8290;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825C8294:
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
	// bne 0x825c8300
	if (!ctx.cr0.eq) goto loc_825C8300;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825c8308
	goto loc_825C8308;
loc_825C8300:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825C8308:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c8320
	if (ctx.cr6.eq) goto loc_825C8320;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825C8320;
	sub_82409A88(ctx, base);
loc_825C8320:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825c85f8
	if (!ctx.cr6.gt) goto loc_825C85F8;
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
loc_825C8394:
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
	// beq cr6,0x825c8544
	if (ctx.cr6.eq) goto loc_825C8544;
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
loc_825C8544:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x825c8554
	if (ctx.cr6.lt) goto loc_825C8554;
	// li r11,31
	ctx.r11.s64 = 31;
loc_825C8554:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825c856c
	if (!ctx.cr6.gt) goto loc_825C856C;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x825c8570
	if (ctx.cr6.lt) goto loc_825C8570;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x825c8570
	goto loc_825C8570;
loc_825C856C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825C8570:
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825c8580
	if (ctx.cr6.lt) goto loc_825C8580;
	// li r11,63
	ctx.r11.s64 = 63;
loc_825C8580:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825c8598
	if (!ctx.cr6.gt) goto loc_825C8598;
	// cmpwi cr6,r5,63
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 63, ctx.xer);
	// blt cr6,0x825c859c
	if (ctx.cr6.lt) goto loc_825C859C;
	// li r5,63
	ctx.r5.s64 = 63;
	// b 0x825c859c
	goto loc_825C859C;
loc_825C8598:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825C859C:
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x825c85ac
	if (ctx.cr6.lt) goto loc_825C85AC;
	// li r11,31
	ctx.r11.s64 = 31;
loc_825C85AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825c85c4
	if (!ctx.cr6.gt) goto loc_825C85C4;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// blt cr6,0x825c85c8
	if (ctx.cr6.lt) goto loc_825C85C8;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x825c85c8
	goto loc_825C85C8;
loc_825C85C4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825C85C8:
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
	// blt cr6,0x825c8394
	if (ctx.cr6.lt) goto loc_825C8394;
loc_825C85F8:
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

DEFINE_REX_FUNC(sub_825DE448) {
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
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DE478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825d3008
	ctx.lr = 0x825DE494;
	sub_825D3008(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825de4cc
	if (ctx.cr6.eq) goto loc_825DE4CC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825de4d4
	if (!ctx.cr6.eq) goto loc_825DE4D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9792
	ctx.r6.s64 = ctx.r11.s64 + 9792;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2182
	ctx.r7.s64 = 2182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DE4C8;
	sub_824EA978(ctx, base);
	// b 0x825de4d4
	goto loc_825DE4D4;
loc_825DE4CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dd228
	ctx.lr = 0x825DE4D4;
	sub_825DD228(ctx, base);
loc_825DE4D4:
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

DEFINE_REX_FUNC(sub_825E2338) {
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
	ctx.lr = 0x825E2340;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,58
	ctx.r11.s64 = ctx.r5.s64 + 58;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwzx r23,r9,r3
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r22,r11,22852
	r22.s64 = ctx.r11.s64 + 22852;
	// addi r21,r10,11616
	r21.s64 = ctx.r10.s64 + 11616;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x825e2394
	if (!ctx.cr6.eq) goto loc_825E2394;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2188
	ctx.r7.s64 = 2188;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2394;
	sub_824EA978(ctx, base);
loc_825E2394:
	// lwz r11,952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 952);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E23A4;
	sub_82607F18(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x825e23c8
	if (!ctx.cr0.lt) goto loc_825E23C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,12356
	ctx.r5.s64 = ctx.r11.s64 + 12356;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2190
	ctx.r7.s64 = 2190;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E23C8;
	sub_824EA978(ctx, base);
loc_825E23C8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,80(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 80);
	// li r19,1
	r19.s64 = 1;
	// addi r11,r11,-17760
	ctx.r11.s64 = ctx.r11.s64 + -17760;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e23f8
	if (ctx.cr0.eq) goto loc_825E23F8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ble cr6,0x825e23fc
	if (!ctx.cr6.gt) goto loc_825E23FC;
loc_825E23F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E23FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x825f9d80
	ctx.lr = 0x825E2414;
	sub_825F9D80(ctx, base);
	// addi r11,r20,50
	ctx.r11.s64 = r20.s64 + 50;
	// mr r28,r30
	r28.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwzx r30,r11,r25
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// beq 0x825e2464
	if (ctx.cr0.eq) goto loc_825E2464;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825e2464
	if (!ctx.cr6.eq) goto loc_825E2464;
	// lwz r11,952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 952);
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x825d79a0
	ctx.lr = 0x825E2444;
	sub_825D79A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 952);
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// beq 0x825e245c
	if (ctx.cr0.eq) goto loc_825E245C;
	// lwz r11,2112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2112);
	// b 0x825e2460
	goto loc_825E2460;
loc_825E245C:
	// lwz r11,2132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2132);
loc_825E2460:
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_825E2464:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r27,r11,-21368
	r27.s64 = ctx.r11.s64 + -21368;
	// mulli r11,r10,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bne 0x825e2504
	if (!ctx.cr0.eq) goto loc_825E2504;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x825e24c4
	if (!ctx.cr6.eq) goto loc_825E24C4;
	// rlwimi r11,r28,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x825e24a4
	if (ctx.cr6.eq) goto loc_825E24A4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_825E24A4:
	// add r30,r20,r25
	r30.u64 = r20.u64 + r25.u64;
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
	// lbz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e253c
	if (ctx.cr0.eq) goto loc_825E253C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// b 0x825e2538
	goto loc_825E2538;
loc_825E24C4:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// bne cr6,0x825e2504
	if (!ctx.cr6.eq) goto loc_825E2504;
	// rlwimi r11,r28,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x825e24e4
	if (ctx.cr6.eq) goto loc_825E24E4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_825E24E4:
	// add r30,r20,r25
	r30.u64 = r20.u64 + r25.u64;
	// stb r11,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r11.u8);
	// lbz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e253c
	if (ctx.cr0.eq) goto loc_825E253C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x825e2538
	goto loc_825E2538;
loc_825E2504:
	// rlwimi r11,r28,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x825e251c
	if (ctx.cr6.eq) goto loc_825E251C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_825E251C:
	// stb r11,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r11.u8);
	// add r30,r20,r25
	r30.u64 = r20.u64 + r25.u64;
	// lbz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e253c
	if (ctx.cr0.eq) goto loc_825E253C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
loc_825E2538:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825E253C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825e261c
	if (ctx.cr6.eq) goto loc_825E261C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x825e2568
	if (!ctx.cr6.eq) goto loc_825E2568;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2568;
	sub_824EA978(ctx, base);
loc_825E2568:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e25ec
	if (!ctx.cr0.eq) goto loc_825E25EC;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x825e25b4
	if (!ctx.cr6.eq) goto loc_825E25B4;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x825e2598
	if (!ctx.cr6.eq) goto loc_825E2598;
	// lbz r11,9(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 9);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
loc_825E2598:
	// lbz r11,158(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e2898
	if (ctx.cr0.eq) goto loc_825E2898;
	// lbz r11,9(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 9);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
	// b 0x825e2898
	goto loc_825E2898;
loc_825E25B4:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// bne cr6,0x825e25ec
	if (!ctx.cr6.eq) goto loc_825E25EC;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x825e25d0
	if (!ctx.cr6.eq) goto loc_825E25D0;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r11.u8);
loc_825E25D0:
	// lbz r11,158(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e2898
	if (ctx.cr0.eq) goto loc_825E2898;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r11.u8);
	// b 0x825e2898
	goto loc_825E2898;
loc_825E25EC:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x825e2600
	if (!ctx.cr6.eq) goto loc_825E2600;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r11.u8);
loc_825E2600:
	// lbz r11,158(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 158);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e2898
	if (ctx.cr0.eq) goto loc_825E2898;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r19,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r11.u8);
	// b 0x825e2898
	goto loc_825E2898;
loc_825E261C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// subfic r10,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.u64 = static_cast<uint64_t>(3) - ctx.r10.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf. r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt 0x825e2658
	if (ctx.cr0.gt) goto loc_825E2658;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,12340
	ctx.r5.s64 = ctx.r11.s64 + 12340;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2267
	ctx.r7.s64 = 2267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2658;
	sub_824EA978(ctx, base);
loc_825E2658:
	// lbz r11,158(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 158);
	// lis r30,8192
	r30.s64 = 536870912;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e26a8
	if (ctx.cr0.eq) goto loc_825E26A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x825e2680
	if (!ctx.cr6.eq) goto loc_825E2680;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x825e2720
	goto loc_825E2720;
loc_825E2680:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x825e26a8
	if (ctx.cr6.eq) goto loc_825E26A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,12316
	ctx.r5.s64 = ctx.r11.s64 + 12316;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2273
	ctx.r7.s64 = 2273;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E26A8;
	sub_824EA978(ctx, base);
loc_825E26A8:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x825e2720
	if (!ctx.cr6.gt) goto loc_825E2720;
	// lwz r11,80(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// bne cr6,0x825e26ec
	if (!ctx.cr6.eq) goto loc_825E26EC;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x825e26dc
	if (!ctx.cr6.eq) goto loc_825E26DC;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e26dc
	if (!ctx.cr0.eq) goto loc_825E26DC;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e2720
	if (ctx.cr0.eq) goto loc_825E2720;
loc_825E26DC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2281
	ctx.r7.s64 = 2281;
	// addi r5,r11,12240
	ctx.r5.s64 = ctx.r11.s64 + 12240;
	// b 0x825e2710
	goto loc_825E2710;
loc_825E26EC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x825e2720
	if (!ctx.cr6.eq) goto loc_825E2720;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e2720
	if (!ctx.cr0.eq) goto loc_825E2720;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e2720
	if (!ctx.cr0.eq) goto loc_825E2720;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2285
	ctx.r7.s64 = 2285;
	// addi r5,r11,12160
	ctx.r5.s64 = ctx.r11.s64 + 12160;
loc_825E2710:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2720;
	sub_824EA978(ctx, base);
loc_825E2720:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x825e27a8
	if (!ctx.cr6.eq) goto loc_825E27A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x825e273c
	if (!ctx.cr6.eq) goto loc_825E273C;
	// oris r11,r11,40960
	ctx.r11.u64 = ctx.r11.u64 | 2684354560;
	// b 0x825e286c
	goto loc_825E286C;
loc_825E273C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// bne cr6,0x825e2780
	if (!ctx.cr6.eq) goto loc_825E2780;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x825e2774
	if (ctx.cr6.eq) goto loc_825E2774;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e2774
	if (ctx.cr0.eq) goto loc_825E2774;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,12112
	ctx.r5.s64 = ctx.r11.s64 + 12112;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2292
	ctx.r7.s64 = 2292;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2774;
	sub_824EA978(ctx, base);
loc_825E2774:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 1610612736;
	// b 0x825e286c
	goto loc_825E286C;
loc_825E2780:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x825e2798
	if (!ctx.cr6.eq) goto loc_825E2798;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e2898
	if (ctx.cr6.eq) goto loc_825E2898;
loc_825E2798:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2296
	ctx.r7.s64 = 2296;
	// addi r5,r11,12064
	ctx.r5.s64 = ctx.r11.s64 + 12064;
	// b 0x825e2888
	goto loc_825E2888;
loc_825E27A8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x825e282c
	if (!ctx.cr6.eq) goto loc_825E282C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x825e27c8
	if (!ctx.cr6.eq) goto loc_825E27C8;
	// rlwimi r11,r19,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r11,r19,31,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 31) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x825e286c
	goto loc_825E286C;
loc_825E27C8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825e2808
	if (!ctx.cr6.eq) goto loc_825E2808;
	// beq 0x825e27fc
	if (ctx.cr0.eq) goto loc_825E27FC;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e27fc
	if (ctx.cr0.eq) goto loc_825E27FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,12016
	ctx.r5.s64 = ctx.r11.s64 + 12016;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,2303
	ctx.r7.s64 = 2303;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E27FC;
	sub_824EA978(ctx, base);
loc_825E27FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r19,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// b 0x825e286c
	goto loc_825E286C;
loc_825E2808:
	// beq 0x825e2898
	if (ctx.cr0.eq) goto loc_825E2898;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e2898
	if (ctx.cr6.eq) goto loc_825E2898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2307
	ctx.r7.s64 = 2307;
	// addi r5,r11,11968
	ctx.r5.s64 = ctx.r11.s64 + 11968;
	// b 0x825e2888
	goto loc_825E2888;
loc_825E282C:
	// lwz r11,80(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825e284c
	if (!ctx.cr6.eq) goto loc_825E284C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x825e2898
	if (!ctx.cr6.eq) goto loc_825E2898;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r19,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// b 0x825e286c
	goto loc_825E286C;
loc_825E284C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x825e2860
	if (!ctx.cr6.eq) goto loc_825E2860;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// b 0x825e286c
	goto loc_825E286C;
loc_825E2860:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x825e2874
	if (!ctx.cr6.eq) goto loc_825E2874;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_825E286C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x825e2898
	goto loc_825E2898;
loc_825E2874:
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e2898
	if (ctx.cr0.eq) goto loc_825E2898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2325
	ctx.r7.s64 = 2325;
	// addi r5,r11,11944
	ctx.r5.s64 = ctx.r11.s64 + 11944;
loc_825E2888:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E2898;
	sub_824EA978(ctx, base);
loc_825E2898:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825e2270
	ctx.lr = 0x825E28A4;
	sub_825E2270(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8260C578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260C580;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823eea88
	ctx.lr = 0x8260C5A4;
	sub_823EEA88(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8260c5fc
	if (ctx.cr6.eq) goto loc_8260C5FC;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8260c5e8
	if (ctx.cr6.eq) goto loc_8260C5E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bc68
	ctx.lr = 0x8260C5E0;
	sub_8260BC68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_8260C5E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C5FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260C5FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260F5D0) {
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
	ctx.lr = 0x8260F5D8;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8260f600
	if (!ctx.cr6.eq) goto loc_8260F600;
	// lis r26,4919
	r26.s64 = 322371584;
	// ori r26,r26,61441
	r26.u64 = r26.u64 | 61441;
	// b 0x8260f604
	goto loc_8260F604;
loc_8260F600:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_8260F604:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260f618
	if (ctx.cr6.eq) goto loc_8260F618;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260f61c
	goto loc_8260F61C;
loc_8260F618:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
loc_8260F61C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8260F62C;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addic. r29,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	r29.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8260f660
	if (ctx.cr0.eq) goto loc_8260F660;
	// li r27,0
	r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// subf r8,r29,r5
	ctx.r8.u64 = ctx.r5.u64 - r29.u64;
loc_8260F64C:
	// lwz r10,52(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8260f66c
	if (ctx.cr6.eq) goto loc_8260F66C;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8260f670
	goto loc_8260F670;
loc_8260F660:
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,14
	r27.u64 = r27.u64 | 14;
	// b 0x8260f714
	goto loc_8260F714;
loc_8260F66C:
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
loc_8260F670:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8260f6ac
	if (!ctx.cr6.lt) goto loc_8260F6AC;
	// lwz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lfs f0,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8260f694
	if (ctx.cr0.eq) goto loc_8260F694;
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lfs f13,528(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8260F694:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8260f64c
	goto loc_8260F64C;
loc_8260F6AC:
	// lwz r30,32(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 32);
	// b 0x8260f6e4
	goto loc_8260F6E4;
loc_8260F6B4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8260f6cc
	if (ctx.cr6.eq) goto loc_8260F6CC;
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260f6d0
	goto loc_8260F6D0;
loc_8260F6CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260F6D0:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8260f478
	ctx.lr = 0x8260F6E4;
	sub_8260F478(ctx, base);
loc_8260F6E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8260f6b4
	if (!ctx.cr6.eq) goto loc_8260F6B4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8260f714
	if (!ctx.cr6.eq) goto loc_8260F714;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8260F714:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826165F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82616FA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82616FB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616FD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,324(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 324);
	// b 0x82616fec
	goto loc_82616FEC;
loc_82616FDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x82616ff4
	if (ctx.cr6.eq) goto loc_82616FF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82616FEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82616fdc
	if (!ctx.cr6.eq) goto loc_82616FDC;
loc_82616FF4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x826288a0
	ctx.lr = 0x82617000;
	sub_826288A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261A2E0) {
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
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x826a2e60
	ctx.lr = 0x8261A308;
	sub_826A2E60(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
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
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// beq cr6,0x8261a358
	if (ctx.cr6.eq) goto loc_8261A358;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A354;
	sub_8264C3D0(ctx, base);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
loc_8261A358:
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a36c
	if (ctx.cr6.eq) goto loc_8261A36C;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A368;
	sub_8264C3D0(ctx, base);
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
loc_8261A36C:
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a380
	if (ctx.cr6.eq) goto loc_8261A380;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A37C;
	sub_8264C3D0(ctx, base);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
loc_8261A380:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a394
	if (ctx.cr6.eq) goto loc_8261A394;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A390;
	sub_8264C3D0(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_8261A394:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a3a8
	if (ctx.cr6.eq) goto loc_8261A3A8;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A3A4;
	sub_8264C3D0(ctx, base);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_8261A3A8:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a3bc
	if (ctx.cr6.eq) goto loc_8261A3BC;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A3B8;
	sub_8264C3D0(ctx, base);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
loc_8261A3BC:
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a3d0
	if (ctx.cr6.eq) goto loc_8261A3D0;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A3CC;
	sub_8264C3D0(ctx, base);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_8261A3D0:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a3e4
	if (ctx.cr6.eq) goto loc_8261A3E4;
	// bl 0x8264c3d0
	ctx.lr = 0x8261A3E0;
	sub_8264C3D0(ctx, base);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_8261A3E4:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x826a2e60
	ctx.lr = 0x8261A3F4;
	sub_826A2E60(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826a2e60
	ctx.lr = 0x8261A404;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_82626F58) {
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
	ctx.lr = 0x82626F60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82634850
	ctx.lr = 0x82626F6C;
	sub_82634850(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r27,-1
	r27.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rldicl r10,r9,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// mulli r11,r11,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82626FA8:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x82641b90
	ctx.lr = 0x82626FB8;
	sub_82641B90(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x82626fd8
	goto loc_82626FD8;
loc_82626FC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82626fe0
	if (!ctx.cr6.lt) goto loc_82626FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82626de0
	ctx.lr = 0x82626FD4;
	sub_82626DE0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82626FD8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82626fc0
	if (!ctx.cr0.lt) goto loc_82626FC0;
loc_82626FE0:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82626ff0
	if (ctx.cr6.eq) goto loc_82626FF0;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82626FF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82627010
	if (ctx.cr6.lt) goto loc_82627010;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82625e88
	ctx.lr = 0x82627004;
	sub_82625E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82626fa8
	if (!ctx.cr0.eq) goto loc_82626FA8;
	// b 0x8262702c
	goto loc_8262702C;
loc_82627010:
	// stw r28,128(r31)
	REX_STORE_U32(r31.u32 + 128, r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262702C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262702C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8262B038) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x8262b080
	if (ctx.cr6.eq) goto loc_8262B080;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8262B080:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629a98
	ctx.lr = 0x8262B088;
	sub_82629A98(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8262b1cc
	if (ctx.cr6.eq) goto loc_8262B1CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8262b1b8
	if (ctx.cr6.eq) goto loc_8262B1B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8262b12c
	if (ctx.cr6.eq) goto loc_8262B12C;
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// ble cr6,0x8262b1e0
	if (!ctx.cr6.gt) goto loc_8262B1E0;
	// cmpwi cr6,r11,354
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 354, ctx.xer);
	// ble cr6,0x8262b0dc
	if (!ctx.cr6.gt) goto loc_8262B0DC;
	// cmpwi cr6,r11,357
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 357, ctx.xer);
	// beq cr6,0x8262b0d0
	if (ctx.cr6.eq) goto loc_8262B0D0;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// bne cr6,0x8262b1e0
	if (!ctx.cr6.eq) goto loc_8262B1E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629fd0
	ctx.lr = 0x8262B0CC;
	sub_82629FD0(ctx, base);
	// b 0x8262b1c0
	goto loc_8262B1C0;
loc_8262B0D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629ea0
	ctx.lr = 0x8262B0D8;
	sub_82629EA0(ctx, base);
	// b 0x8262b1c0
	goto loc_8262B1C0;
loc_8262B0DC:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x8262b114
	if (!ctx.cr6.eq) goto loc_8262B114;
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 18);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8262B114:
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// b 0x8262b19c
	goto loc_8262B19C;
loc_8262B12C:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// addic r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bne cr6,0x8262b168
	if (!ctx.cr6.eq) goto loc_8262B168;
	// lhz r9,18(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 18);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x8262b168
	if (ctx.cr6.eq) goto loc_8262B168;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8262B168:
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 12);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8262B19C:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8262b1e0
	if (!ctx.cr6.eq) goto loc_8262B1E0;
loc_8262B1B0:
	// li r30,0
	r30.s64 = 0;
	// b 0x8262b1e0
	goto loc_8262B1E0;
loc_8262B1B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629bd0
	ctx.lr = 0x8262B1C0;
	sub_82629BD0(ctx, base);
loc_8262B1C0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8262b1e0
	if (!ctx.cr0.eq) goto loc_8262B1E0;
	// b 0x8262b1b0
	goto loc_8262B1B0;
loc_8262B1CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629b00
	ctx.lr = 0x8262B1D4;
	sub_82629B00(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_8262B1E0:
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x8262b234
	if (!ctx.cr6.eq) goto loc_8262B234;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x8262b230
	if (ctx.cr6.lt) goto loc_8262B230;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262b234
	if (ctx.cr6.eq) goto loc_8262B234;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8262B208:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x8262b208
	if (!ctx.cr0.eq) goto loc_8262B208;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8262b234
	if (ctx.cr6.eq) goto loc_8262B234;
loc_8262B230:
	// li r30,0
	r30.s64 = 0;
loc_8262B234:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8262b254
	if (!ctx.cr6.eq) goto loc_8262B254;
	// cmplwi cr6,r9,357
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 357, ctx.xer);
	// beq cr6,0x8262b254
	if (ctx.cr6.eq) goto loc_8262B254;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262a100
	ctx.lr = 0x8262B254;
	sub_8262A100(ctx, base);
loc_8262B254:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82640468) {
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
	ctx.lr = 0x82640470;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,36(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r17,0
	r17.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r11,r24,8
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xFF) != 0);
	ctx.r11.s64 = r24.s32 >> 8;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r29,r3,224
	r29.s64 = ctx.r3.s64 + 224;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r31,r25,516
	r31.s64 = r25.s64 + 516;
	// li r16,2
	r16.s64 = 2;
	// li r23,5
	r23.s64 = 5;
	// lis r26,-32248
	r26.s64 = -2113404928;
	// li r15,3
	r15.s64 = 3;
	// lis r18,-32248
	r18.s64 = -2113404928;
	// lis r19,-32248
	r19.s64 = -2113404928;
	// addi r22,r10,-17600
	r22.s64 = ctx.r10.s64 + -17600;
	// addi r27,r9,-12856
	r27.s64 = ctx.r9.s64 + -12856;
	// addi r21,r8,-18144
	r21.s64 = ctx.r8.s64 + -18144;
	// addi r28,r7,-13112
	r28.s64 = ctx.r7.s64 + -13112;
	// addi r20,r11,-18624
	r20.s64 = ctx.r11.s64 + -18624;
loc_826404E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x826404e0
	if (ctx.cr6.gt) goto loc_826404E0;
	// lis r12,-32156
	ctx.r12.s64 = -2107375616;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1288
	ctx.r12.s64 = ctx.r12.s64 + 1288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82640544;
	case 1:
		goto loc_82640620;
	case 2:
		goto loc_826406BC;
	case 3:
		goto loc_82640738;
	case 4:
		goto loc_82640798;
	case 5:
		goto loc_826404E0;
	case 6:
		goto loc_826404E0;
	case 7:
		goto loc_826404E0;
	case 8:
		goto loc_826404E0;
	case 9:
		goto loc_826404E0;
	case 10:
		goto loc_826404E0;
	case 11:
		goto loc_826404E0;
	case 12:
		goto loc_826404E0;
	case 13:
		goto loc_82640860;
	case 14:
		goto loc_826409CC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82640544:
	// stw r17,8(r31)
	REX_STORE_U32(r31.u32 + 8, r17.u32);
	// lwz r11,592(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82640564
	if (ctx.cr6.eq) goto loc_82640564;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,484(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 484);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x826408ec
	if (ctx.cr6.eq) goto loc_826408EC;
loc_82640564:
	// lhz r10,202(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 202);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r24.s32, ctx.xer);
	// bge cr6,0x82640914
	if (!ctx.cr6.lt) goto loc_82640914;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82641440
	ctx.lr = 0x82640598;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82638ef0
	ctx.lr = 0x826405AC;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// lwz r10,-11680(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + -11680);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826405d8
	if (!ctx.cr6.eq) goto loc_826405D8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r16,0(r31)
	REX_STORE_U32(r31.u32 + 0, r16.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_826405D8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lbzx r8,r11,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// stw r7,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// lhzx r6,r11,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// rlwinm r5,r6,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// stw r5,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// lhzx r4,r11,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_82640620:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82641440
	ctx.lr = 0x82640638;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82638ef0
	ctx.lr = 0x8264064C;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// lwz r10,-11672(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + -11672);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8264066c
	if (!ctx.cr6.eq) goto loc_8264066C;
loc_82640664:
	// stw r15,0(r31)
	REX_STORE_U32(r31.u32 + 0, r15.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_8264066C:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r6,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r27.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stwx r10,r4,r31
	REX_STORE_U32(ctx.r4.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_826406AC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826404e0
	if (!ctx.cr6.eq) goto loc_826404E0;
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_826406BC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82641440
	ctx.lr = 0x826406D4;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82638ef0
	ctx.lr = 0x826406E8;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// lwz r11,-11664(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -11664);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8264070c
	if (!ctx.cr6.eq) goto loc_8264070C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_8264070C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826406ac
	if (!ctx.cr6.eq) goto loc_826406AC;
	// stw r16,0(r31)
	REX_STORE_U32(r31.u32 + 0, r16.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_82640738:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,-11664(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + -11664);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263fda8
	ctx.lr = 0x82640750;
	sub_8263FDA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82640788
	if (!ctx.cr6.eq) goto loc_82640788;
	// stw r16,0(r31)
	REX_STORE_U32(r31.u32 + 0, r16.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_82640788:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82640664
	if (!ctx.cr6.eq) goto loc_82640664;
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_82640798:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826f1e00
	ctx.lr = 0x826407A8;
	sub_826F1E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826407d8
	if (ctx.cr6.eq) goto loc_826407D8;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
loc_826407D8:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826407fc
	if (ctx.cr6.eq) goto loc_826407FC;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r8,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_826407FC:
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82640820
	if (ctx.cr6.eq) goto loc_82640820;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r8,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r7,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82640820:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82640840
	if (ctx.cr6.eq) goto loc_82640840;
	// subfic r9,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r9.u64 = static_cast<uint64_t>(31) - ctx.r4.u64;
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
loc_82640840:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638ef0
	ctx.lr = 0x82640848;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826409e4
	if (ctx.cr6.lt) goto loc_826409E4;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r17,8(r31)
	REX_STORE_U32(r31.u32 + 8, r17.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_82640860:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8264092c
	if (!ctx.cr6.eq) goto loc_8264092C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r10,592(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826408ac
	if (!ctx.cr6.eq) goto loc_826408AC;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826408ac
	if (!ctx.cr6.gt) goto loc_826408AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_826408AC:
	// lhz r10,202(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 202);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r24.s32, ctx.xer);
	// bge cr6,0x82640914
	if (!ctx.cr6.lt) goto loc_82640914;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x826404e0
	if (!ctx.cr6.eq) goto loc_826404E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// b 0x826404e0
	goto loc_826404E0;
loc_826408EC:
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r9,484(r30)
	REX_STORE_U32(r30.u32 + 484, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82640080
	ctx.lr = 0x8264090C;
	sub_82640080(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_82640914:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r17,20(r30)
	REX_STORE_U32(r30.u32 + 20, r17.u32);
	// stw r17,24(r30)
	REX_STORE_U32(r30.u32 + 24, r17.u32);
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_8264092C:
	// lwz r11,592(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82640950
	if (!ctx.cr6.eq) goto loc_82640950;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82640950
	if (!ctx.cr6.gt) goto loc_82640950;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82640950:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r17,12(r31)
	REX_STORE_U32(r31.u32 + 12, r17.u32);
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r6,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826409e4
	if (!ctx.cr6.eq) goto loc_826409E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826409bc
	if (ctx.cr6.eq) goto loc_826409BC;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_826409BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_826409CC:
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,484(r30)
	REX_STORE_U32(r30.u32 + 484, ctx.r10.u32);
	// bl 0x82640080
	ctx.lr = 0x826409E4;
	sub_82640080(ctx, base);
loc_826409E4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8265DB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8265DBA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8265dcd8
	if (ctx.cr6.eq) goto loc_8265DCD8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8265dc28
	if (ctx.cr6.eq) goto loc_8265DC28;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8265dcd8
	if (ctx.cr6.eq) goto loc_8265DCD8;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// beq cr6,0x8265dbe8
	if (ctx.cr6.eq) goto loc_8265DBE8;
loc_8265DBDC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8265dce0
	goto loc_8265DCE0;
loc_8265DBE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dcd0
	if (ctx.cr6.eq) goto loc_8265DCD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265dce0
	if (ctx.cr0.lt) goto loc_8265DCE0;
	// b 0x8265dcd0
	goto loc_8265DCD0;
loc_8265DC28:
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bne cr6,0x8265dbdc
	if (!ctx.cr6.eq) goto loc_8265DBDC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dcd0
	if (ctx.cr6.eq) goto loc_8265DCD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DC54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265dce0
	if (ctx.cr0.lt) goto loc_8265DCE0;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DC80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265dce0
	if (ctx.cr0.lt) goto loc_8265DCE0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dcbc
	if (ctx.cr6.eq) goto loc_8265DCBC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6216
	ctx.r5.s64 = ctx.r11.s64 + -6216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DCB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265dcc0
	goto loc_8265DCC0;
loc_8265DCBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265DCC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8265dce0
	if (ctx.cr6.lt) goto loc_8265DCE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8265DCD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8265dce0
	goto loc_8265DCE0;
loc_8265DCD8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_8265DCE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82663EE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82663EE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,132
	r29.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x82663F04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661398
	ctx.lr = 0x82663F10;
	sub_82661398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663f20
	if (ctx.cr0.eq) goto loc_82663F20;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82663f30
	if (!ctx.cr6.eq) goto loc_82663F30;
loc_82663F20:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x82663f38
	goto loc_82663F38;
loc_82663F30:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r31,0
	r31.s64 = 0;
loc_82663F38:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663F44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82667E40) {
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
	ctx.lr = 0x82667E48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r10,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82667e6c
	if (ctx.cr0.eq) goto loc_82667E6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x826682ac
	goto loc_826682AC;
loc_82667E6C:
	// lwz r29,168(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r30,172(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x82667ec4
	if (!ctx.cr6.eq) goto loc_82667EC4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x82667ecc
	if (!ctx.cr6.eq) goto loc_82667ECC;
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82667f6c
	if (!ctx.cr6.eq) goto loc_82667F6C;
	// lwz r9,256(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r31,256
	ctx.r11.s64 = r31.s64 + 256;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82667f6c
	if (!ctx.cr6.eq) goto loc_82667F6C;
	// li r30,3
	r30.s64 = 3;
	// rlwinm. r11,r10,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// beq 0x82667ecc
	if (ctx.cr0.eq) goto loc_82667ECC;
	// rlwinm r11,r10,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// addi r3,r31,388
	ctx.r3.s64 = r31.s64 + 388;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// bl 0x826710f8
	ctx.lr = 0x82667EC4;
	sub_826710F8(ctx, base);
loc_82667EC4:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// beq cr6,0x82667f6c
	if (ctx.cr6.eq) goto loc_82667F6C;
loc_82667ECC:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// beq cr6,0x82667f0c
	if (ctx.cr6.eq) goto loc_82667F0C;
loc_82667EE0:
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
	// bne 0x82667ee0
	if (!ctx.cr0.eq) goto loc_82667EE0;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82667f14
	goto loc_82667F14;
loc_82667F0C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82667F14:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r7,164(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r6,7
	ctx.r6.s64 = 7;
	// lwz r5,160(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 160);
	// oris r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 2147483648;
	// lwz r26,176(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r11,r31,268
	ctx.r11.s64 = r31.s64 + 268;
	// stw r6,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r8,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r8.u32);
	// stw r7,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r7.u32);
	// stw r5,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r5.u32);
	// stw r29,284(r31)
	REX_STORE_U32(r31.u32 + 284, r29.u32);
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r26,292(r31)
	REX_STORE_U32(r31.u32 + 292, r26.u32);
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// stw r9,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r9.u32);
	// stw r4,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r4.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// b 0x826682b0
	goto loc_826682B0;
loc_82667F6C:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r29,r31,256
	r29.s64 = r31.s64 + 256;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82668048
	if (ctx.cr6.eq) goto loc_82668048;
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
loc_82667F94:
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r30,r10,-12
	r30.s64 = ctx.r10.s64 + -12;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82667fb4
	if (!ctx.cr0.eq) goto loc_82667FB4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82667FB4:
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82667fec
	if (ctx.cr6.eq) goto loc_82667FEC;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82668030
	if (ctx.cr6.lt) goto loc_82668030;
	// lwz r8,240(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82667fe8
	if (ctx.cr6.eq) goto loc_82667FE8;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82668030
	if (ctx.cr0.eq) goto loc_82668030;
loc_82667FE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82667FEC:
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826680f4
	if (ctx.cr0.eq) goto loc_826680F4;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82672c40
	ctx.lr = 0x82668008;
	sub_82672C40(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82668048
	if (ctx.cr6.eq) goto loc_82668048;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// b 0x82667f94
	goto loc_82667F94;
loc_82668030:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82668048:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826682a8
	if (!ctx.cr0.eq) goto loc_826682A8;
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r30,r31,248
	r30.s64 = r31.s64 + 248;
loc_82668060:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x826682a8
	if (ctx.cr6.eq) goto loc_826682A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826680bc
	if (!ctx.cr0.eq) goto loc_826680BC;
	// rlwinm. r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826680bc
	if (!ctx.cr0.eq) goto loc_826680BC;
	// rlwinm. r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82668114
	if (!ctx.cr0.eq) goto loc_82668114;
	// rlwinm. r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826681c8
	if (!ctx.cr0.eq) goto loc_826681C8;
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82668234
	if (!ctx.cr0.eq) goto loc_82668234;
loc_826680BC:
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
	// bne 0x826680bc
	if (!ctx.cr0.eq) goto loc_826680BC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826680e8
	if (!ctx.cr6.eq) goto loc_826680E8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82670cd8
	ctx.lr = 0x826680E8;
	sub_82670CD8(ctx, base);
loc_826680E8:
	// stw r28,340(r31)
	REX_STORE_U32(r31.u32 + 340, r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82668060
	goto loc_82668060;
loc_826680F4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665388
	ctx.lr = 0x82668100;
	sub_82665388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82672c40
	ctx.lr = 0x8266810C;
	sub_82672C40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826682b0
	goto loc_826682B0;
loc_82668114:
	// lwz r4,92(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266813c
	if (ctx.cr6.eq) goto loc_8266813C;
loc_82668120:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82668120
	if (!ctx.cr0.eq) goto loc_82668120;
loc_8266813C:
	// stw r4,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r4.u32);
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// bl 0x82664c58
	ctx.lr = 0x82668148;
	sub_82664C58(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r9.u32);
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r10,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// addi r10,r31,268
	ctx.r10.s64 = r31.s64 + 268;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// stw r8,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// lwz r9,60(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// stw r9,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r9.u32);
	// lwz r9,76(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// stw r9,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r9.u32);
	// beq cr6,0x826681a0
	if (ctx.cr6.eq) goto loc_826681A0;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r9,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// b 0x826681a8
	goto loc_826681A8;
loc_826681A0:
	// stw r28,292(r31)
	REX_STORE_U32(r31.u32 + 292, r28.u32);
	// stw r28,296(r31)
	REX_STORE_U32(r31.u32 + 296, r28.u32);
loc_826681A8:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// b 0x8266829c
	goto loc_8266829C;
loc_826681C8:
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r10,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// addi r10,r31,268
	ctx.r10.s64 = r31.s64 + 268;
	// stw r7,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r7.u32);
	// lwz r7,428(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r8,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r8.u32);
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// oris r9,r7,32768
	ctx.r9.u64 = ctx.r7.u64 | 2147483648;
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r8,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r8.u32);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// stw r9,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// b 0x8266829c
	goto loc_8266829C;
loc_82668234:
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r10,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// addi r10,r31,268
	ctx.r10.s64 = r31.s64 + 268;
	// stw r7,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r7.u32);
	// lwz r7,428(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// stw r8,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r8.u32);
	// oris r9,r7,32768
	ctx.r9.u64 = ctx.r7.u64 | 2147483648;
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r8,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r8.u32);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// stw r9,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
loc_8266829C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// b 0x826682b0
	goto loc_826682B0;
loc_826682A8:
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
loc_826682AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826682B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82682D88) {
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
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bl 0x82682c48
	ctx.lr = 0x82682DA8;
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

DEFINE_REX_FUNC(sub_82684538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82684550
	if (ctx.cr6.eq) goto loc_82684550;
	// stw r4,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x82684558
	goto loc_82684558;
loc_82684550:
	// stw r4,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_82684558:
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82685250) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82685280
	if (ctx.cr6.eq) goto loc_82685280;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82685280:
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x82684848
	sub_82684848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82687100) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r5,1(r3)
	REX_STORE_U16(ctx.r3.u32 + 1, ctx.r5.u16);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stw r6,3(r3)
	REX_STORE_U32(ctx.r3.u32 + 3, ctx.r6.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// rlwimi r10,r9,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687B28) {
	REX_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r5,16383
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16383, ctx.xer);
	// ble cr6,0x82687b3c
	if (!ctx.cr6.gt) goto loc_82687B3C;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82687b58
	goto loc_82687B58;
loc_82687B3C:
	// cmplwi cr6,r5,127
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 127, ctx.xer);
	// ble cr6,0x82687b4c
	if (!ctx.cr6.gt) goto loc_82687B4C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82687b58
	goto loc_82687B58;
loc_82687B4C:
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x82687b58
	if (!ctx.cr6.gt) goto loc_82687B58;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82687B58:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82687b64
	if (ctx.cr6.eq) goto loc_82687B64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82687B64:
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82687b74
	if (!ctx.cr0.eq) goto loc_82687B74;
	// cmplwi cr6,r4,510
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 510, ctx.xer);
	// ble cr6,0x82687b80
	if (!ctx.cr6.gt) goto loc_82687B80;
loc_82687B74:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82687b80
	if (!ctx.cr6.eq) goto loc_82687B80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82687B80:
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x82687b8c
	if (ctx.cr6.eq) goto loc_82687B8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82687B8C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268A690) {
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
	ctx.lr = 0x8268A698;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a6d0
	if (ctx.cr6.eq) goto loc_8268A6D0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268a6d0
	if (ctx.cr6.eq) goto loc_8268A6D0;
loc_8268A6C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8268a6c4
	if (ctx.cr6.lt) goto loc_8268A6C4;
loc_8268A6D0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a6f8
	if (ctx.cr6.eq) goto loc_8268A6F8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268a6f8
	if (ctx.cr6.eq) goto loc_8268A6F8;
loc_8268A6EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8268a6ec
	if (ctx.cr6.lt) goto loc_8268A6EC;
loc_8268A6F8:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// li r3,1200
	ctx.r3.s64 = 1200;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823f02b8
	ctx.lr = 0x8268A708;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8268a71c
	if (!ctx.cr0.eq) goto loc_8268A71C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8268a948
	goto loc_8268A948;
loc_8268A71C:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-6016
	ctx.r7.s64 = ctx.r11.s64 + -6016;
loc_8268A728:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8268a74c
	if (!ctx.cr6.eq) goto loc_8268A74C;
	// stwcx. r31,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8268a728
	if (!ctx.cr0.eq) goto loc_8268A728;
	// b 0x8268a754
	goto loc_8268A754;
loc_8268A74C:
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8268A754:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268a77c
	if (ctx.cr6.eq) goto loc_8268A77C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823f0350
	ctx.lr = 0x8268A770;
	sub_823F0350(ctx, base);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x8268a944
	goto loc_8268A944;
loc_8268A77C:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r29,r11,-6104
	r29.s64 = ctx.r11.s64 + -6104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268a570
	ctx.lr = 0x8268A78C;
	sub_8268A570(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8268A7A8;
	sub_826A1E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826894c0
	ctx.lr = 0x8268A7B4;
	sub_826894C0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8268a93c
	if (ctx.cr0.lt) goto loc_8268A93C;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r31,72
	r27.s64 = r31.s64 + 72;
loc_8268A7C4:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268cb98
	ctx.lr = 0x8268A7DC;
	sub_8268CB98(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8268a93c
	if (ctx.cr0.lt) goto loc_8268A93C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// blt cr6,0x8268a7c4
	if (ctx.cr6.lt) goto loc_8268A7C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268a864
	if (!ctx.cr6.gt) goto loc_8268A864;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r31,88
	r27.s64 = r31.s64 + 88;
loc_8268A80C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a824
	if (ctx.cr6.eq) goto loc_8268A824;
	// lwzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
loc_8268A824:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268a834
	if (ctx.cr6.eq) goto loc_8268A834;
	// lwzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
loc_8268A834:
	// add r8,r27,r28
	ctx.r8.u64 = r27.u64 + r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x8268e6a8
	ctx.lr = 0x8268A848;
	sub_8268E6A8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8268a93c
	if (ctx.cr0.lt) goto loc_8268A93C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268a80c
	if (ctx.cr6.lt) goto loc_8268A80C;
loc_8268A864:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x8268A878;
	sub_823ED568(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// bne 0x8268a890
	if (!ctx.cr0.eq) goto loc_8268A890;
loc_8268A884:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x8268a93c
	goto loc_8268A93C;
loc_8268A890:
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82793704
	ctx.lr = 0x8268A89C;
	__imp__XamNotifyCreateListener(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268a884
	if (ctx.cr0.eq) goto loc_8268A884;
	// stw r25,276(r31)
	REX_STORE_U32(r31.u32 + 276, r25.u32);
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x82793894
	ctx.lr = 0x8268A8B4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268a934
	if (!ctx.cr6.eq) goto loc_8268A934;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-23360
	ctx.r5.s64 = ctx.r11.s64 + -23360;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f1840
	ctx.lr = 0x8268A8E4;
	sub_823F1840(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// beq 0x8268a884
	if (ctx.cr0.eq) goto loc_8268A884;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// bl 0x823eeb10
	ctx.lr = 0x8268A8FC;
	sub_823EEB10(ctx, base);
	// lwz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8268a934
	if (ctx.cr6.eq) goto loc_8268A934;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b4208
	ctx.lr = 0x8268A924;
	sub_826B4208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268a934
	if (!ctx.cr0.eq) goto loc_8268A934;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
loc_8268A934:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8268a948
	if (!ctx.cr6.lt) goto loc_8268A948;
loc_8268A93C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82689dd8
	ctx.lr = 0x8268A944;
	sub_82689DD8(ctx, base);
loc_8268A944:
	// li r31,0
	r31.s64 = 0;
loc_8268A948:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8269CBF8) {
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
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1047
	ctx.r4.u64 = ctx.r4.u64 | 1047;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8269cb58
	ctx.lr = 0x8269CC18;
	sub_8269CB58(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82793e04
	ctx.lr = 0x8269CC20;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_8269D438) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8269d278
	sub_8269D278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269D7D0) {
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
	ctx.lr = 0x8269D7D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8269D808;
	sub_826A2E60(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8269D80C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8269d80c
	if (!ctx.cr6.eq) goto loc_8269D80C;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bne cr6,0x8269d848
	if (!ctx.cr6.eq) goto loc_8269D848;
loc_8269D830:
	// bl 0x826a33d0
	ctx.lr = 0x8269D834;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269D840;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269d890
	goto loc_8269D890;
loc_8269D848:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8269d830
	if (ctx.cr6.eq) goto loc_8269D830;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r9,73
	ctx.r9.s64 = 73;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x8269d878
	if (ctx.cr6.gt) goto loc_8269D878;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8269D878:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8269D890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8269D890:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826A1A08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826A1A0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826a1a0c
	if (!ctx.cr0.eq) goto loc_826A1A0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826a1a4c
	if (ctx.cr6.eq) goto loc_826A1A4C;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_826A1A2C:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826a1a2c
	if (!ctx.cr6.eq) goto loc_826A1A2C;
loc_826A1A4C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A2B30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r3,25956(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 25956);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_23) {
	REX_FUNC_PROLOGUE();
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A3440) {
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
	// bl 0x826a3990
	ctx.lr = 0x826A345C;
	sub_826A3990(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,26344
	r31.s64 = ctx.r11.s64 + 26344;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// beq 0x826a3474
	if (ctx.cr0.eq) goto loc_826A3474;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_826A3474:
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// bl 0x826a3990
	ctx.lr = 0x826A347C;
	sub_826A3990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// beq 0x826a348c
	if (ctx.cr0.eq) goto loc_826A348C;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_826A348C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a3360
	ctx.lr = 0x826A3494;
	sub_826A3360(ctx, base);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(__savevmx_110) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_111) {
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

DEFINE_REX_FUNC(sub_826A9550) {
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
	ctx.lr = 0x826A9558;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x826a9928
	ctx.lr = 0x826A9570;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	r28.s64 = 3;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_826A9580:
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,31544(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 31544);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826a95f8
	if (!ctx.cr6.lt) goto loc_826A95F8;
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a95ec
	if (ctx.cr6.eq) goto loc_826A95EC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a95cc
	if (ctx.cr0.eq) goto loc_826A95CC;
	// bl 0x8269ef08
	ctx.lr = 0x826A95BC;
	sub_8269EF08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826a95cc
	if (ctx.cr6.eq) goto loc_826A95CC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
loc_826A95CC:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(r28.s32, 20, ctx.xer);
	// blt cr6,0x826a95ec
	if (ctx.cr6.lt) goto loc_826A95EC;
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8269d770
	ctx.lr = 0x826A95E0;
	sub_8269D770(ctx, base);
	// lwz r11,31540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 31540);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_826A95EC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x826a9580
	goto loc_826A9580;
loc_826A95F8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x826a9610
	ctx.lr = 0x826A9604;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826A9610(ctx, base);
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826AE058) {
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
	// bl 0x826a96a8
	ctx.lr = 0x826AE06C;
	sub_826A96A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AECF8) {
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
	ctx.lr = 0x826AED00;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// bl 0x826ae138
	ctx.lr = 0x826AED34;
	sub_826AE138(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x826aed4c
	if (ctx.cr6.lt) goto loc_826AED4C;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826aed50
	if (ctx.cr6.lt) goto loc_826AED50;
loc_826AED4C:
	// bl 0x826af230
	ctx.lr = 0x826AED50;
	sub_826AF230(ctx, base);
loc_826AED50:
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r28,r11,29539
	r28.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x826aef68
	if (!ctx.cr6.eq) goto loc_826AEF68;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lis r9,6547
	ctx.r9.s64 = 429064192;
	// lis r8,6547
	ctx.r8.s64 = 429064192;
	// ori r30,r10,1312
	r30.u64 = ctx.r10.u64 | 1312;
	// ori r29,r9,1313
	r29.u64 = ctx.r9.u64 | 1313;
	// ori r27,r8,1314
	r27.u64 = ctx.r8.u64 | 1314;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826aee2c
	if (!ctx.cr6.eq) goto loc_826AEE2C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x826aeda4
	if (ctx.cr6.eq) goto loc_826AEDA4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826aeda4
	if (ctx.cr6.eq) goto loc_826AEDA4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x826aee2c
	if (!ctx.cr6.eq) goto loc_826AEE2C;
loc_826AEDA4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826aee2c
	if (!ctx.cr6.eq) goto loc_826AEE2C;
	// bl 0x826a3a68
	ctx.lr = 0x826AEDB4;
	sub_826A3A68(ctx, base);
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826aef60
	if (ctx.cr6.eq) goto loc_826AEF60;
	// bl 0x826a3a68
	ctx.lr = 0x826AEDC4;
	sub_826A3A68(ctx, base);
	// lwz r31,124(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x826a3a68
	ctx.lr = 0x826AEDCC;
	sub_826A3A68(ctx, base);
	// lwz r19,128(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b2770
	ctx.lr = 0x826AEDDC;
	sub_826B2770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826aede8
	if (!ctx.cr0.eq) goto loc_826AEDE8;
	// bl 0x826af230
	ctx.lr = 0x826AEDE8;
	sub_826AF230(ctx, base);
loc_826AEDE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x826aef68
	if (!ctx.cr6.eq) goto loc_826AEF68;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826aee2c
	if (!ctx.cr6.eq) goto loc_826AEE2C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x826aee1c
	if (ctx.cr6.eq) goto loc_826AEE1C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826aee1c
	if (ctx.cr6.eq) goto loc_826AEE1C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x826aee2c
	if (!ctx.cr6.eq) goto loc_826AEE2C;
loc_826AEE1C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826aee2c
	if (!ctx.cr6.eq) goto loc_826AEE2C;
	// bl 0x826af230
	ctx.lr = 0x826AEE2C;
	sub_826AF230(ctx, base);
loc_826AEE2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x826aef68
	if (!ctx.cr6.eq) goto loc_826AEF68;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826aef68
	if (!ctx.cr6.eq) goto loc_826AEF68;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x826aee60
	if (ctx.cr6.eq) goto loc_826AEE60;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826aee60
	if (ctx.cr6.eq) goto loc_826AEE60;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x826aef68
	if (!ctx.cr6.eq) goto loc_826AEF68;
loc_826AEE60:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826aef60
	if (!ctx.cr6.gt) goto loc_826AEF60;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a26d8
	ctx.lr = 0x826AEE88;
	sub_826A26D8(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826aef60
	if (!ctx.cr6.lt) goto loc_826AEF60;
	// addi r25,r3,16
	r25.s64 = ctx.r3.s64 + 16;
loc_826AEE9C:
	// lwz r11,-16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -16);
	// addi r26,r25,-16
	r26.s64 = r25.s64 + -16;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// bgt cr6,0x826aef48
	if (ctx.cr6.gt) goto loc_826AEF48;
	// lwz r11,-12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -12);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826aef48
	if (ctx.cr6.gt) goto loc_826AEF48;
	// lwz r27,-4(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + -4);
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x826aef48
	if (!ctx.cr6.gt) goto loc_826AEF48;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_826AEED8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x826aef0c
	if (!ctx.cr0.gt) goto loc_826AEF0C;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
loc_826AEEEC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826ae198
	ctx.lr = 0x826AEEF8;
	sub_826AE198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826aef1c
	if (!ctx.cr0.eq) goto loc_826AEF1C;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bgt 0x826aeeec
	if (ctx.cr0.gt) goto loc_826AEEEC;
loc_826AEF0C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bgt 0x826aeed8
	if (ctx.cr0.gt) goto loc_826AEED8;
	// b 0x826aef48
	goto loc_826AEF48;
loc_826AEF1C:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aea38
	ctx.lr = 0x826AEF44;
	sub_826AEA38(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_826AEF48:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,20
	r25.s64 = r25.s64 + 20;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826aee9c
	if (ctx.cr6.lt) goto loc_826AEE9C;
loc_826AEF60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
loc_826AEF68:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826aef60
	if (!ctx.cr6.gt) goto loc_826AEF60;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aefa4
	if (!ctx.cr0.eq) goto loc_826AEFA4;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aeb80
	ctx.lr = 0x826AEFA0;
	sub_826AEB80(ctx, base);
	// b 0x826aef60
	goto loc_826AEF60;
loc_826AEFA4:
	// bl 0x826af1d0
	ctx.lr = 0x826AEFA8;
	sub_826AF1D0(ctx, base);
}

DEFINE_REX_FUNC(sub_826C34B0) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82793e64
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C3580) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82793e14
	__imp__KeResetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C44F8) {
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
	// stw r4,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c46c0
	if (ctx.cr6.lt) goto loc_826C46C0;
loc_826C4530:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x822c5618
	ctx.lr = 0x826C4538;
	sub_822C5618(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C454C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,264(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 264);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C4564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,268(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C457C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// bl 0x823ef910
	ctx.lr = 0x826C4584;
	sub_823EF910(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// bl 0x823ef910
	ctx.lr = 0x826C458C;
	sub_823EF910(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// bl 0x823ef910
	ctx.lr = 0x826C4594;
	sub_823EF910(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826C45A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C45BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,184(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C45D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,188(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 188);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C45E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,192(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x826C45F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x822c55d8
	ctx.lr = 0x826C4600;
	sub_822C55D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4614;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,252(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 252);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C4628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826c46ac
	if (ctx.cr6.eq) goto loc_826C46AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c46ac
	if (!ctx.cr6.eq) goto loc_826C46AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c46ac
	if (!ctx.cr6.eq) goto loc_826C46AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C4688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,160(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 160);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C469C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826c4530
	if (!ctx.cr6.lt) goto loc_826C4530;
	// b 0x826c46c0
	goto loc_826C46C0;
loc_826C46AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C46C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C46C0:
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

DEFINE_REX_FUNC(sub_826D7C20) {
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
	ctx.lr = 0x826D7C28;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lwz r23,28(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D7C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r31,48(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 48);
	// li r25,4
	r25.s64 = 4;
	// li r24,1
	r24.s64 = 1;
	// li r26,2
	r26.s64 = 2;
	// lbz r11,17(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d7d30
	if (ctx.cr6.eq) goto loc_826D7D30;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7cec
	if (ctx.cr6.eq) goto loc_826D7CEC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7d74
	if (!ctx.cr6.eq) goto loc_826D7D74;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// bge cr6,0x826d7cb4
	if (!ctx.cr6.lt) goto loc_826D7CB4;
loc_826D7CA4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_826D7CB4:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D7CD0;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// b 0x826d7d70
	goto loc_826D7D70;
loc_826D7CEC:
	// sth r27,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r27.u16);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// blt cr6,0x826d7ca4
	if (ctx.cr6.lt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7D18;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lhz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// b 0x826d7d6c
	goto loc_826D7D6C;
loc_826D7D30:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// blt cr6,0x826d7ca4
	if (ctx.cr6.lt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D7D58;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_826D7D6C:
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
loc_826D7D70:
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_826D7D74:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r11,19(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 19);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// beq cr6,0x826d7e24
	if (ctx.cr6.eq) goto loc_826D7E24;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7de0
	if (ctx.cr6.eq) goto loc_826D7DE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7e68
	if (!ctx.cr6.eq) goto loc_826D7E68;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D7DC4;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// b 0x826d7e64
	goto loc_826D7E64;
loc_826D7DE0:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// sth r27,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r27.u16);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7E0C;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lhz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// b 0x826d7e60
	goto loc_826D7E60;
loc_826D7E24:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D7E4C;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_826D7E60:
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
loc_826D7E64:
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_826D7E68:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// beq cr6,0x826d7f18
	if (ctx.cr6.eq) goto loc_826D7F18;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7ed4
	if (ctx.cr6.eq) goto loc_826D7ED4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7f5c
	if (!ctx.cr6.eq) goto loc_826D7F5C;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D7EB8;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// b 0x826d7f58
	goto loc_826D7F58;
loc_826D7ED4:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// sth r27,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r27.u16);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7F00;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lhz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// b 0x826d7f54
	goto loc_826D7F54;
loc_826D7F18:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D7F40;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_826D7F54:
	// stw r8,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r8.u32);
loc_826D7F58:
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_826D7F5C:
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D7F88;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7FB4;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x826d7fe0
	if (ctx.cr6.eq) goto loc_826D7FE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d7ca4
	if (!ctx.cr6.eq) goto loc_826D7CA4;
loc_826D7FE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// stb r27,26(r31)
	REX_STORE_U8(r31.u32 + 26, r27.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,27(r31)
	REX_STORE_U8(r31.u32 + 27, r27.u8);
	// stw r24,60(r31)
	REX_STORE_U32(r31.u32 + 60, r24.u32);
	// beq cr6,0x826d806c
	if (ctx.cr6.eq) goto loc_826D806C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bgt cr6,0x826d7ca4
	if (ctx.cr6.gt) goto loc_826D7CA4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D8024;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d806c
	if (ctx.cr6.lt) goto loc_826D806C;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r9,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// stb r11,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r11.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// beq cr6,0x826d8050
	if (ctx.cr6.eq) goto loc_826D8050;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826d7ca4
	if (!ctx.cr6.eq) goto loc_826D7CA4;
loc_826D8050:
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d7ca4
	if (ctx.cr6.eq) goto loc_826D7CA4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_826D806C:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d8098
	if (!ctx.cr6.eq) goto loc_826D8098;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// ld r10,24(r23)
	ctx.r10.u64 = REX_LOAD_U64(r23.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r23)
	REX_STORE_U32(r23.u32 + 80, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,32(r23)
	REX_STORE_U64(r23.u32 + 32, ctx.r8.u64);
loc_826D8098:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826F4FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_826F4FB4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826f4fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F4FB4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F5848) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,114(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 114);
	// lwz r11,424(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 424);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r6,52(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,-2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f58d4
	if (!ctx.cr6.gt) goto loc_826F58D4;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhz r7,118(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_826F58B4:
	// lwzux r8,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lhz r8,118(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826f58b4
	if (ctx.cr6.lt) goto loc_826F58B4;
	// blr 
	return;
loc_826F58D4:
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lhz r9,118(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// divw r7,r10,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// divw r4,r8,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addic. r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bltlr 
	if (ctx.cr0.lt) return;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_826F5928:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x826f5950
	if (!ctx.cr6.gt) goto loc_826F5950;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_826F5938:
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u32);
	// bdnz 0x826f5938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F5938;
loc_826F5950:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// bge 0x826f5928
	if (!ctx.cr0.lt) goto loc_826F5928;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82701CF8) {
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
	ctx.lr = 0x82701D00;
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82701d30
	if (!ctx.cr6.eq) goto loc_82701D30;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x826a1cd8
	return;
loc_82701D30:
	// lwz r11,3692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701d48
	if (!ctx.cr6.eq) goto loc_82701D48;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x826a1cd8
	return;
loc_82701D48:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// li r18,0
	r18.s64 = 0;
	// stw r18,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r18.u32);
	// lwz r10,3948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82701dd4
	if (ctx.cr6.eq) goto loc_82701DD4;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82701dac
	if (ctx.cr6.eq) goto loc_82701DAC;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82701dac
	if (ctx.cr6.eq) goto loc_82701DAC;
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82701dac
	if (ctx.cr6.eq) goto loc_82701DAC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82701db4
	if (ctx.cr6.eq) goto loc_82701DB4;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(r20.u32, 3, ctx.xer);
	// beq cr6,0x82701dac
	if (ctx.cr6.eq) goto loc_82701DAC;
loc_82701DA0:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x826a1cd8
	return;
loc_82701DAC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x82701dc0
	if (!ctx.cr6.eq) goto loc_82701DC0;
loc_82701DB4:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82701da0
	if (ctx.cr6.eq) goto loc_82701DA0;
loc_82701DC0:
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(r20.u32, 3, ctx.xer);
	// bne cr6,0x82701dd4
	if (!ctx.cr6.eq) goto loc_82701DD4;
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82701da0
	if (ctx.cr6.eq) goto loc_82701DA0;
loc_82701DD4:
	// lwz r11,22356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22356);
	// li r19,1
	r19.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701df0
	if (!ctx.cr6.eq) goto loc_82701DF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb770
	ctx.lr = 0x82701DEC;
	sub_826FB770(ctx, base);
	// b 0x82702738
	goto loc_82702738;
loc_82701DF0:
	// lwz r11,3448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701e18
	if (!ctx.cr6.eq) goto loc_82701E18;
	// lwz r11,22316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22316);
	// stw r18,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r18.u32);
	// sth r19,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r19.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82702738
	if (!ctx.cr6.eq) goto loc_82702738;
	// stw r18,22316(r31)
	REX_STORE_U32(r31.u32 + 22316, r18.u32);
	// b 0x82702320
	goto loc_82702320;
loc_82701E18:
	// lhz r11,3708(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 3708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82701e30
	if (!ctx.cr6.eq) goto loc_82701E30;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x826a1cd8
	return;
loc_82701E30:
	// lwz r11,15332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15332);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x82702084
	if (!ctx.cr6.eq) goto loc_82702084;
	// li r19,1
	r19.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701e54
	if (!ctx.cr6.eq) goto loc_82701E54;
	// lwz r11,15400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701e5c
	if (ctx.cr6.eq) goto loc_82701E5C;
loc_82701E54:
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
	// b 0x82701e60
	goto loc_82701E60;
loc_82701E5C:
	// stw r18,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r18.u32);
loc_82701E60:
	// lwz r11,14824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701ef4
	if (ctx.cr6.eq) goto loc_82701EF4;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701e80
	if (ctx.cr6.eq) goto loc_82701E80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82701ec8
	if (!ctx.cr6.eq) goto loc_82701EC8;
loc_82701E80:
	// lwz r10,14804(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82701e98
	if (!ctx.cr6.eq) goto loc_82701E98;
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// stw r11,14832(r31)
	REX_STORE_U32(r31.u32 + 14832, ctx.r11.u32);
	// b 0x82701ec8
	goto loc_82701EC8;
loc_82701E98:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82701ec8
	if (ctx.cr6.eq) goto loc_82701EC8;
	// lwz r11,14832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701ec0
	if (!ctx.cr6.eq) goto loc_82701EC0;
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701ec0
	if (!ctx.cr6.eq) goto loc_82701EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82703a00
	ctx.lr = 0x82701EC0;
	sub_82703A00(ctx, base);
loc_82701EC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274cbb8
	ctx.lr = 0x82701EC8;
	sub_8274CBB8(ctx, base);
loc_82701EC8:
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701ef4
	if (ctx.cr6.eq) goto loc_82701EF4;
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701eec
	if (!ctx.cr6.eq) goto loc_82701EEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82724e50
	ctx.lr = 0x82701EE8;
	sub_82724E50(ctx, base);
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
loc_82701EEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ccd8
	ctx.lr = 0x82701EF4;
	sub_8274CCD8(ctx, base);
loc_82701EF4:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82701f24
	if (!ctx.cr6.eq) goto loc_82701F24;
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701f18
	if (!ctx.cr6.eq) goto loc_82701F18;
	// lwz r11,22144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701f24
	if (ctx.cr6.eq) goto loc_82701F24;
loc_82701F18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274d0b0
	ctx.lr = 0x82701F20;
	sub_8274D0B0(ctx, base);
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
loc_82701F24:
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702014
	if (ctx.cr6.eq) goto loc_82702014;
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702014
	if (ctx.cr6.eq) goto loc_82702014;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271f9e0
	ctx.lr = 0x82701F48;
	sub_8271F9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x82701F50;
	sub_8271F4A8(ctx, base);
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r29,14856(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// lwz r28,14860(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r18,14856(r31)
	REX_STORE_U32(r31.u32 + 14856, r18.u32);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// stw r29,14860(r31)
	REX_STORE_U32(r31.u32 + 14860, r29.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// beq cr6,0x82701fcc
	if (ctx.cr6.eq) goto loc_82701FCC;
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r8,3772(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r6,3768(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3768);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,14936(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14936);
	// lwz r5,3808(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,3804(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r30,3800(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,14932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14932);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82720868
	ctx.lr = 0x82701FC0;
	sub_82720868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827038f8
	ctx.lr = 0x82701FC8;
	sub_827038F8(ctx, base);
	// b 0x82702008
	goto loc_82702008;
loc_82701FCC:
	// lwz r9,3808(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r8,3804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r6,3800(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,14936(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14936);
	// lwz r5,3752(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,3748(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r30,3744(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,14932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14932);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82720868
	ctx.lr = 0x82702008;
	sub_82720868(ctx, base);
loc_82702008:
	// stw r28,14860(r31)
	REX_STORE_U32(r31.u32 + 14860, r28.u32);
	// stw r29,14856(r31)
	REX_STORE_U32(r31.u32 + 14856, r29.u32);
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
loc_82702014:
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82702074
	if (!ctx.cr6.gt) goto loc_82702074;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82702034
	if (ctx.cr6.eq) goto loc_82702034;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82702054
	if (!ctx.cr6.eq) goto loc_82702054;
loc_82702034:
	// lwz r11,3476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270206c
	if (ctx.cr6.eq) goto loc_8270206C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270206c
	if (ctx.cr6.eq) goto loc_8270206C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8270206c
	if (ctx.cr6.eq) goto loc_8270206C;
loc_82702054:
	// stw r19,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r19,15532(r31)
	REX_STORE_U32(r31.u32 + 15532, r19.u32);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bl 0x826fb7d0
	ctx.lr = 0x82702068;
	sub_826FB7D0(ctx, base);
	// b 0x82702b90
	goto loc_82702B90;
loc_8270206C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// stw r18,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, r18.u32);
loc_82702074:
	// stw r19,15532(r31)
	REX_STORE_U32(r31.u32 + 15532, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb7d0
	ctx.lr = 0x82702080;
	sub_826FB7D0(ctx, base);
	// b 0x82702b90
	goto loc_82702B90;
loc_82702084:
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, ctx.r10.u32);
	// bne cr6,0x827020a0
	if (!ctx.cr6.eq) goto loc_827020A0;
	// lwz r11,15400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702238
	if (ctx.cr6.eq) goto loc_82702238;
loc_827020A0:
	// lwz r11,15340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// lwz r10,15344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// stw r18,220(r31)
	REX_STORE_U32(r31.u32 + 220, r18.u32);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// stw r18,224(r31)
	REX_STORE_U32(r31.u32 + 224, r18.u32);
	// srawi r3,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 4;
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
	// stw r6,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r6.u32);
	// stw r8,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r8.u32);
	// lwz r4,3380(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// bl 0x8275de48
	ctx.lr = 0x827020EC;
	sub_8275DE48(ctx, base);
	// lwz r8,3380(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r19,1
	r19.s64 = 1;
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,216(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 216);
	// divwu r8,r10,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r3,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, ctx.r3.u32);
	// stw r3,3872(r31)
	REX_STORE_U32(r31.u32 + 3872, ctx.r3.u32);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// stw r8,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, ctx.r8.u32);
	// stw r5,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// stw r4,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r4.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stw r6,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r6.u32);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// bne cr6,0x82702158
	if (!ctx.cr6.eq) goto loc_82702158;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq cr6,0x8270215c
	if (ctx.cr6.eq) goto loc_8270215C;
loc_82702158:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8270215C:
	// lwz r9,15340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,15344(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// addi r5,r8,15
	ctx.r5.s64 = ctx.r8.s64 + 15;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// bne cr6,0x827021a8
	if (!ctx.cr6.eq) goto loc_827021A8;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827021ac
	if (ctx.cr6.eq) goto loc_827021AC;
loc_827021A8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_827021AC:
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r20,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, r20.u32);
	// sth r21,15524(r31)
	REX_STORE_U16(r31.u32 + 15524, r21.u16);
	// stw r30,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, r30.u32);
	// beq cr6,0x827021d0
	if (ctx.cr6.eq) goto loc_827021D0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x827021d0
	if (ctx.cr6.eq) goto loc_827021D0;
	// stw r18,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, r18.u32);
loc_827021D0:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827021f8
	if (ctx.cr6.eq) goto loc_827021F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827021f8
	if (ctx.cr6.eq) goto loc_827021F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne cr6,0x82702208
	if (!ctx.cr6.eq) goto loc_82702208;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82702208
	goto loc_82702208;
loc_827021F8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne cr6,0x82702208
	if (!ctx.cr6.eq) goto loc_82702208;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82702208:
	// stw r11,15528(r31)
	REX_STORE_U32(r31.u32 + 15528, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275d920
	ctx.lr = 0x82702214;
	sub_8275D920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82702ba4
	if (!ctx.cr6.eq) goto loc_82702BA4;
	// stw r19,15516(r31)
	REX_STORE_U32(r31.u32 + 15516, r19.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275d7b8
	ctx.lr = 0x8270222C;
	sub_8275D7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82702ba4
	if (!ctx.cr6.eq) goto loc_82702BA4;
	// b 0x82702b90
	goto loc_82702B90;
loc_82702238:
	// stw r20,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, r20.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// sth r21,15524(r31)
	REX_STORE_U16(r31.u32 + 15524, r21.u16);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r30,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, r30.u32);
	// bne cr6,0x82702254
	if (!ctx.cr6.eq) goto loc_82702254;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_82702254:
	// stw r11,15528(r31)
	REX_STORE_U32(r31.u32 + 15528, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8270226c
	if (ctx.cr6.eq) goto loc_8270226C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x8270226c
	if (ctx.cr6.eq) goto loc_8270226C;
	// stw r18,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, r18.u32);
loc_8270226C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275d920
	ctx.lr = 0x82702274;
	sub_8275D920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82702ba4
	if (!ctx.cr6.eq) goto loc_82702BA4;
	// stw r19,15516(r31)
	REX_STORE_U32(r31.u32 + 15516, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82701658
	ctx.lr = 0x82702288;
	sub_82701658(ctx, base);
	// lwz r11,3668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3668);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827022b4
	if (!ctx.cr6.eq) goto loc_827022B4;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827022d0
	if (!ctx.cr6.eq) goto loc_827022D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827253e0
	ctx.lr = 0x827022A8;
	sub_827253E0(ctx, base);
	// lwz r11,15580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15580);
	// stw r11,3668(r31)
	REX_STORE_U32(r31.u32 + 3668, ctx.r11.u32);
	// b 0x827022d0
	goto loc_827022D0;
loc_827022B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827022c8
	if (ctx.cr6.lt) goto loc_827022C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x827022c8
	if (ctx.cr6.gt) goto loc_827022C8;
	// stw r11,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, ctx.r11.u32);
loc_827022C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827253e0
	ctx.lr = 0x827022D0;
	sub_827253E0(ctx, base);
loc_827022D0:
	// lwz r11,15540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702320
	if (ctx.cr6.eq) goto loc_82702320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc9b0
	ctx.lr = 0x827022E4;
	sub_826FC9B0(ctx, base);
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8270230c
	if (ctx.cr6.eq) goto loc_8270230C;
	// lwz r11,15892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15892);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82702314
	goto loc_82702314;
loc_8270230C:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82724fb8
	ctx.lr = 0x82702314;
	sub_82724FB8(ctx, base);
loc_82702314:
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fca10
	ctx.lr = 0x82702320;
	sub_826FCA10(ctx, base);
loc_82702320:
	// lwz r11,14824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827023b4
	if (ctx.cr6.eq) goto loc_827023B4;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702340
	if (ctx.cr6.eq) goto loc_82702340;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82702388
	if (!ctx.cr6.eq) goto loc_82702388;
loc_82702340:
	// lwz r10,14804(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82702358
	if (!ctx.cr6.eq) goto loc_82702358;
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// stw r11,14832(r31)
	REX_STORE_U32(r31.u32 + 14832, ctx.r11.u32);
	// b 0x82702388
	goto loc_82702388;
loc_82702358:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82702388
	if (ctx.cr6.eq) goto loc_82702388;
	// lwz r11,14832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82702380
	if (!ctx.cr6.eq) goto loc_82702380;
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82702380
	if (!ctx.cr6.eq) goto loc_82702380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82703a00
	ctx.lr = 0x82702380;
	sub_82703A00(ctx, base);
loc_82702380:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274cbb8
	ctx.lr = 0x82702388;
	sub_8274CBB8(ctx, base);
loc_82702388:
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827023b4
	if (ctx.cr6.eq) goto loc_827023B4;
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827023ac
	if (!ctx.cr6.eq) goto loc_827023AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82724e50
	ctx.lr = 0x827023A8;
	sub_82724E50(ctx, base);
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
loc_827023AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746050
	ctx.lr = 0x827023B4;
	sub_82746050(ctx, base);
loc_827023B4:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827023e4
	if (!ctx.cr6.eq) goto loc_827023E4;
	// lwz r11,22140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827023d8
	if (!ctx.cr6.eq) goto loc_827023D8;
	// lwz r11,22144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827023e4
	if (ctx.cr6.eq) goto loc_827023E4;
loc_827023D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274d0b0
	ctx.lr = 0x827023E0;
	sub_8274D0B0(ctx, base);
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
loc_827023E4:
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827026dc
	if (ctx.cr6.eq) goto loc_827026DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271f9e0
	ctx.lr = 0x827023FC;
	sub_8271F9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x82702404;
	sub_8271F4A8(ctx, base);
	// lwz r11,15596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,14856(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// lwz r28,14860(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// lwz r11,15932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// stw r18,14856(r31)
	REX_STORE_U32(r31.u32 + 14856, r18.u32);
	// stw r29,14860(r31)
	REX_STORE_U32(r31.u32 + 14860, r29.u32);
	// beq cr6,0x8270257c
	if (ctx.cr6.eq) goto loc_8270257C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270251c
	if (ctx.cr6.eq) goto loc_8270251C;
	// lwz r11,20640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270251c
	if (!ctx.cr6.eq) goto loc_8270251C;
	// lwz r10,3728(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,584(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 584);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// stw r7,584(r10)
	REX_STORE_U32(ctx.r10.u32 + 584, ctx.r7.u32);
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r6,3728(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,14860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14932(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14932);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r10,14860(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,14936(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14936);
	// stw r8,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r6,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// lwz r5,14856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// stw r5,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// lwz r4,14860(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// stw r4,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// lwz r3,14860(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r3,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r9,14916(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14916);
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r8,14860(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r8,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r6,14920(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 14920);
	// stw r6,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r6.u32);
	// lwz r5,14860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14904(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14904);
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r7,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 200);
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// b 0x827026d0
	goto loc_827026D0;
loc_8270251C:
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r8,3772(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r7,3768(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3768);
	// lwz r30,220(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,3808(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r5,3804(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r4,3800(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// lwz r10,14936(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14936);
	// lwz r11,14932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14932);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82720868
	ctx.lr = 0x82702570;
	sub_82720868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827038f8
	ctx.lr = 0x82702578;
	sub_827038F8(ctx, base);
	// b 0x827026d0
	goto loc_827026D0;
loc_8270257C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270267c
	if (ctx.cr6.eq) goto loc_8270267C;
	// lwz r11,20640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270267c
	if (!ctx.cr6.eq) goto loc_8270267C;
	// lwz r11,3728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r18,584(r11)
	REX_STORE_U32(ctx.r11.u32 + 584, r18.u32);
	// lwz r10,3728(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// lwz r9,584(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 584);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,584(r10)
	REX_STORE_U32(ctx.r10.u32 + 584, ctx.r7.u32);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r6,3712(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,14860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14932(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14932);
	// stw r3,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lwz r10,14860(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,14936(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14936);
	// stw r8,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r6,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// lwz r5,14856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// stw r5,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// lwz r4,14860(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// stw r4,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// lwz r3,14860(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r3,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r9,14916(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14916);
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r8,14860(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r8,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r6,14920(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 14920);
	// stw r6,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r6.u32);
	// lwz r5,14860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14904(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14904);
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r7,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 200);
	// stw r5,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// b 0x827026d0
	goto loc_827026D0;
loc_8270267C:
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r9,3808(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r8,3804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r7,3800(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r30,220(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,3752(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r5,3748(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// lwz r10,14936(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14936);
	// lwz r11,14932(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14932);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82720868
	ctx.lr = 0x827026D0;
	sub_82720868(ctx, base);
loc_827026D0:
	// stw r28,14860(r31)
	REX_STORE_U32(r31.u32 + 14860, r28.u32);
	// stw r29,14856(r31)
	REX_STORE_U32(r31.u32 + 14856, r29.u32);
	// stw r19,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r19.u32);
loc_827026DC:
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// stw r18,22360(r31)
	REX_STORE_U32(r31.u32 + 22360, r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82702730
	if (!ctx.cr6.gt) goto loc_82702730;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82702700
	if (ctx.cr6.eq) goto loc_82702700;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82702720
	if (!ctx.cr6.eq) goto loc_82702720;
loc_82702700:
	// lwz r11,3476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702728
	if (ctx.cr6.eq) goto loc_82702728;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82702728
	if (ctx.cr6.eq) goto loc_82702728;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82702728
	if (ctx.cr6.eq) goto loc_82702728;
loc_82702720:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// b 0x8270272c
	goto loc_8270272C;
loc_82702728:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8270272C:
	// stw r11,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, ctx.r11.u32);
loc_82702730:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb7d0
	ctx.lr = 0x82702738;
	sub_826FB7D0(ctx, base);
loc_82702738:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fbd38
	ctx.lr = 0x82702748;
	sub_826FBD38(ctx, base);
	// lwz r25,15504(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(r25.s32, 7, ctx.xer);
	// beq cr6,0x8270275c
	if (ctx.cr6.eq) goto loc_8270275C;
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(r25.s32, 6, ctx.xer);
	// bne cr6,0x82702b78
	if (!ctx.cr6.eq) goto loc_82702B78;
loc_8270275C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82702b74
	if (!ctx.cr6.eq) goto loc_82702B74;
	// lwz r11,3740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3740);
	// li r29,64
	r29.s64 = 64;
	// lwz r10,22112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22112);
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,8(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x827027dc
	if (!ctx.cr6.eq) goto loc_827027DC;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827027dc
	if (!ctx.cr6.gt) goto loc_827027DC;
	// ld r11,3600(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x827027dc
	if (!ctx.cr6.gt) goto loc_827027DC;
	// lwz r10,22280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22280);
	// lwz r11,22308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22308);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827027bc
	if (ctx.cr6.gt) goto loc_827027BC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_827027BC:
	// lwz r11,22312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22312);
	// lwz r10,22284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22284);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x827027d4
	if (!ctx.cr6.gt) goto loc_827027D4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x827027e4
	goto loc_827027E4;
loc_827027D4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x827027e4
	goto loc_827027E4;
loc_827027DC:
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_827027E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bne cr6,0x827027f4
	if (!ctx.cr6.eq) goto loc_827027F4;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_827027F4:
	// lwz r9,15332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15332);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r5,15528(r31)
	REX_STORE_U32(r31.u32 + 15528, ctx.r5.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82702818
	if (!ctx.cr6.eq) goto loc_82702818;
	// addi r11,r8,15
	ctx.r11.s64 = ctx.r8.s64 + 15;
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_82702818:
	// lwz r30,3948(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82702848
	if (ctx.cr6.eq) goto loc_82702848;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// addi r28,r8,64
	r28.s64 = ctx.r8.s64 + 64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// b 0x8270285c
	goto loc_8270285C;
loc_82702848:
	// mr r28,r18
	r28.u64 = r18.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r26,r18
	r26.u64 = r18.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,32
	ctx.r7.s64 = 32;
loc_8270285C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82702870
	if (!ctx.cr6.eq) goto loc_82702870;
	// lwz r11,15400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270287c
	if (ctx.cr6.eq) goto loc_8270287C;
loc_82702870:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_8270287C:
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(r20.u32, 3, ctx.xer);
	// bne cr6,0x827028f4
	if (!ctx.cr6.eq) goto loc_827028F4;
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// li r9,31
	ctx.r9.s64 = 31;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x827028ac
	if (!ctx.cr6.eq) goto loc_827028AC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r16,2016
	r16.s64 = 2016;
	// ori r3,r3,63488
	ctx.r3.u64 = ctx.r3.u64 | 63488;
	// stw r16,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r16.u32);
	// stw r3,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
loc_827028AC:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x827028cc
	if (!ctx.cr6.eq) goto loc_827028CC;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r11,31744
	ctx.r11.s64 = 31744;
	// li r9,992
	ctx.r9.s64 = 992;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r21,16
	r21.s64 = 16;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
loc_827028CC:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x827028f4
	if (!ctx.cr6.eq) goto loc_827028F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// ori r3,r11,65280
	ctx.r3.u64 = ctx.r11.u64 | 65280;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
loc_827028F4:
	// lwz r11,22264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22264);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bne cr6,0x82702914
	if (!ctx.cr6.eq) goto loc_82702914;
	// lwz r11,22344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22344);
loc_82702914:
	// clrlwi r3,r21,16
	ctx.r3.u64 = r21.u32 & 0xFFFF;
	// lwz r16,15536(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// sth r21,206(r1)
	REX_STORE_U16(ctx.r1.u32 + 206, r21.u16);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// stw r20,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r20.u32);
	// sth r19,204(r1)
	REX_STORE_U16(ctx.r1.u32 + 204, r19.u16);
	// stw r18,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// stw r18,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r18.u32);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r18,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r18.u32);
	// stw r18,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r18.u32);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r5,r3,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(r16.s32, 2, ctx.xer);
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// bne cr6,0x8270295c
	if (!ctx.cr6.eq) goto loc_8270295C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
loc_8270295C:
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,21880(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21880);
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + r29.u64;
	// add r9,r4,r29
	ctx.r9.u64 = ctx.r4.u64 + r29.u64;
	// sth r19,156(r1)
	REX_STORE_U16(ctx.r1.u32 + 156, r19.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r5,158(r1)
	REX_STORE_U16(ctx.r1.u32 + 158, ctx.r5.u16);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bne cr6,0x82702a38
	if (!ctx.cr6.eq) goto loc_82702A38;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8270299c
	if (ctx.cr6.eq) goto loc_8270299C;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r5,r8,13392
	ctx.r5.u64 = ctx.r8.u64 | 13392;
	// b 0x827029a4
	goto loc_827029A4;
loc_8270299C:
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r5,r8,13385
	ctx.r5.u64 = ctx.r8.u64 | 13385;
loc_827029A4:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(r25.s32, 7, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// bne cr6,0x827029ec
	if (!ctx.cr6.eq) goto loc_827029EC;
	// ld r11,3600(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x827029dc
	if (!ctx.cr6.gt) goto loc_827029DC;
	// lwz r11,21904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21904);
	// b 0x827029e0
	goto loc_827029E0;
loc_827029DC:
	// lwz r11,21900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21900);
loc_827029E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x827029f0
	if (ctx.cr6.eq) goto loc_827029F0;
loc_827029EC:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_827029F0:
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82759df8
	ctx.lr = 0x82702A1C;
	sub_82759DF8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,21880(r31)
	REX_STORE_U32(r31.u32 + 21880, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702ad4
	if (ctx.cr6.eq) goto loc_82702AD4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x826a1cd8
	return;
loc_82702A38:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82702a4c
	if (ctx.cr6.eq) goto loc_82702A4C;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r5,r8,13392
	ctx.r5.u64 = ctx.r8.u64 | 13392;
	// b 0x82702a54
	goto loc_82702A54;
loc_82702A4C:
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r5,r8,13385
	ctx.r5.u64 = ctx.r8.u64 | 13385;
loc_82702A54:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(r25.s32, 7, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// bne cr6,0x82702a9c
	if (!ctx.cr6.eq) goto loc_82702A9C;
	// ld r11,3600(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x82702a8c
	if (!ctx.cr6.gt) goto loc_82702A8C;
	// lwz r11,21904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21904);
	// b 0x82702a90
	goto loc_82702A90;
loc_82702A8C:
	// lwz r11,21900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21900);
loc_82702A90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82702aa0
	if (ctx.cr6.eq) goto loc_82702AA0;
loc_82702A9C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82702AA0:
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// bl 0x8275a138
	ctx.lr = 0x82702AC8;
	sub_8275A138(ctx, base);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82702ba4
	if (!ctx.cr6.eq) goto loc_82702BA4;
loc_82702AD4:
	// lwz r8,21880(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21880);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82701da0
	if (ctx.cr6.eq) goto loc_82701DA0;
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702b10
	if (ctx.cr6.eq) goto loc_82702B10;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// addi r7,r26,1
	ctx.r7.s64 = r26.s64 + 1;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r9,r24
	r24.u64 = ctx.r9.u64 + r24.u64;
	// add r23,r10,r23
	r23.u64 = ctx.r10.u64 + r23.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
loc_82702B10:
	// lwz r11,22368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22368);
	// stw r11,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// lwz r10,22368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22368);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82702b54
	if (!ctx.cr6.eq) goto loc_82702B54;
	// lwz r11,22372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22372);
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// lwz r10,22376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22376);
	// stw r10,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// lwz r9,22380(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22380);
	// stw r9,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// lwz r7,22384(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 22384);
	// stw r7,14624(r8)
	REX_STORE_U32(ctx.r8.u32 + 14624, ctx.r7.u32);
	// lwz r6,22388(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 22388);
	// stw r6,14628(r8)
	REX_STORE_U32(ctx.r8.u32 + 14628, ctx.r6.u32);
	// lwz r5,22392(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 22392);
	// stw r5,14632(r8)
	REX_STORE_U32(ctx.r8.u32 + 14632, ctx.r5.u32);
loc_82702B54:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r3,21880(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21880);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8275a108
	ctx.lr = 0x82702B6C;
	sub_8275A108(ctx, base);
	// stw r18,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r18.u32);
	// b 0x82702b94
	goto loc_82702B94;
loc_82702B74:
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(r25.s32, 6, ctx.xer);
loc_82702B78:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275d7b8
	ctx.lr = 0x82702B84;
	sub_8275D7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82702ba4
	if (!ctx.cr6.eq) goto loc_82702BA4;
	// stw r18,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r18.u32);
loc_82702B90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82702B94:
	// lhz r11,3708(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 3708);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, ctx.r10.u16);
loc_82702BA4:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_8276D260) {
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
	ctx.lr = 0x8276D268;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8276d530
	if (ctx.cr6.eq) goto loc_8276D530;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8276d298
	if (ctx.cr6.eq) goto loc_8276D298;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8276D284:
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// stdx r10,r11,r5
	REX_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u64);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x8276d284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276D284;
	// b 0x826a1cec
	return;
loc_8276D298:
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
loc_8276D2E8:
	// lwz r29,0(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// lwz r28,-1(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + -1);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r30,r29,31,1,31
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
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
	// or r29,r30,r29
	r29.u64 = r30.u64 | r29.u64;
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
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
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
	// or r29,r30,r29
	r29.u64 = r30.u64 | r29.u64;
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
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r28,-1(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + -1);
	// rlwinm r30,r28,31,1,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
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
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwzx r30,r9,r6
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r29,r31,r11
	r29.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r29,r30,r29
	r29.u64 = r30.u64 | r29.u64;
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
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
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
	// or r26,r28,r29
	r26.u64 = r28.u64 | r29.u64;
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
	// bdnz 0x8276d2e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276D2E8;
	// b 0x826a1cec
	return;
loc_8276D530:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8276d7d4
	if (ctx.cr6.eq) goto loc_8276D7D4;
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
loc_8276D58C:
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
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
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
	// lwz r29,0(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r27,r29,r4
	r27.u64 = r29.u64 | ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r29,r27,r12
	r29.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r28,r29,31,1,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r27,r29,r4
	r27.u64 = r29.u64 | ctx.r4.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r29,r4,31,1,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r27,r12
	ctx.r4.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
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
	// stwx r4,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
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
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
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
	// or r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 | r29.u64;
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
	// lwzx r4,r10,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r28,31,1,31
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// or r27,r4,r28
	r27.u64 = ctx.r4.u64 | r28.u64;
	// rlwinm r28,r4,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,257
	ctx.r12.s64 = 16842752;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// and r4,r27,r12
	ctx.r4.u64 = r27.u64 & ctx.r12.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8276d58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276D58C;
	// b 0x826a1cec
	return;
loc_8276D7D4:
	// lis r11,514
	ctx.r11.s64 = 33685504;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r25,r5,r6
	r25.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subfic r24,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r24.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// ori r8,r11,514
	ctx.r8.u64 = ctx.r11.u64 | 514;
loc_8276D7E8:
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
loc_8276D800:
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
	// lwzx r23,r9,r7
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r22,r3,r10
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r21,r10,r7
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r27,r3,r9
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r31,r27,r12
	r31.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r26,r27,30,2,31
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r28,r23,r12
	r28.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r28,r23,30,2,31
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// and r29,r22,r12
	r29.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r30,r21,r12
	r30.u64 = r21.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// and r26,r26,r12
	r26.u64 = r26.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// rlwinm r27,r30,30,6,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// add r31,r7,r6
	r31.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// rlwinm r29,r22,30,2,31
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r3,r27,r26
	ctx.r3.u64 = r27.u64 + r26.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// and r30,r30,r12
	r30.u64 = r30.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// stwux r3,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// lwzx r27,r7,r9
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r22,r9,r31
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r23,r10,r31
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r29,r7,r10
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r30,r29,r12
	r30.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r26,r23,r12
	r26.u64 = r23.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r3,r27,r12
	ctx.r3.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r28,r22,r12
	r28.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// rlwinm r28,r22,30,2,31
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r30,r3,r26
	r30.u64 = ctx.r3.u64 + r26.u64;
	// and r28,r28,r12
	r28.u64 = r28.u64 & ctx.r12.u64;
	// lis r12,-193
	ctx.r12.s64 = -12648448;
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// ori r12,r12,16191
	ctx.r12.u64 = ctx.r12.u64 | 16191;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// and r29,r29,r12
	r29.u64 = r29.u64 & ctx.r12.u64;
	// lis r12,-253
	ctx.r12.s64 = -16580608;
	// add r7,r31,r6
	ctx.r7.u64 = r31.u64 + ctx.r6.u64;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// rlwinm r31,r30,30,6,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFF;
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
	// lwzx r26,r3,r10
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r23,r10,r7
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r22,r9,r7
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and r30,r22,r12
	r30.u64 = r22.u64 & ctx.r12.u64;
	// lis r12,771
	ctx.r12.s64 = 50528256;
	// lwzx r28,r3,r9
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r27,r28,30,2,31
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r12,r12,771
	ctx.r12.u64 = ctx.r12.u64 | 771;
	// and r31,r28,r12
	r31.u64 = r28.u64 & ctx.r12.u64;
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
	// rlwinm r28,r22,30,2,31
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
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
	// bdnz 0x8276d800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276D800;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8276d7e8
	if (ctx.cr6.lt) goto loc_8276D7E8;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_827B1268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827B1270;
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
	// bl 0x827af298
	ctx.lr = 0x827B12B8;
	sub_827AF298(ctx, base);
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
	// bl 0x827afe10
	ctx.lr = 0x827B12D0;
	sub_827AFE10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827B2E40) {
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
	ctx.lr = 0x827B2E48;
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
	// bne cr6,0x827b2fec
	if (!ctx.cr6.eq) goto loc_827B2FEC;
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
	// b 0x827b2ff0
	goto loc_827B2FF0;
loc_827B2FEC:
	// blt cr6,0x827b307c
	if (ctx.cr6.lt) goto loc_827B307C;
loc_827B2FF0:
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,32
	ctx.r3.s64 = ctx.r1.s64 + 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827b307c
	if (!ctx.cr6.gt) goto loc_827B307C;
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
loc_827B3024:
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
	// add r8,r28,r31
	ctx.r8.u64 = r28.u64 + r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + r28.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r4,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r4.u16);
	// sthu r8,96(r10)
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827b3024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B3024;
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
loc_827B307C:
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
	// b 0x826a1d04
	return;
}

