#include "hydrothunder_funcs.104.h"

DEFINE_REX_FUNC(sub_82125DC8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-25060
	ctx.r11.s64 = ctx.r11.s64 + -25060;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82125DF8;
	sub_82120AC0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82125E08;
	sub_82120AC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82129190) {
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
	ctx.lr = 0x82129198;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x8212924c
	goto loc_8212924C;
loc_821291B4:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x82129234
	goto loc_82129234;
loc_821291C8:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821291dc
	if (ctx.cr6.lt) goto loc_821291DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821291DC:
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821291f0
	if (ctx.cr6.lt) goto loc_821291F0;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821291f4
	goto loc_821291F4;
loc_821291F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821291F4:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212920C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82129224
	if (ctx.cr0.eq) goto loc_82129224;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82129cf0
	ctx.lr = 0x82129224;
	sub_82129CF0(ctx, base);
loc_82129224:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a9b0
	ctx.lr = 0x8212922C;
	sub_8212A9B0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82129234:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821291c8
	if (!ctx.cr6.eq) goto loc_821291C8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8212a938
	ctx.lr = 0x82129244;
	sub_8212A938(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8212924C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821291b4
	if (!ctx.cr6.eq) goto loc_821291B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82130030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82130038;
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-3744(r1)
	ea = -3744 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r28,r11,-22452
	r28.s64 = ctx.r11.s64 + -22452;
	// bne cr6,0x8213007c
	if (!ctx.cr6.eq) goto loc_8213007C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-22404
	ctx.r3.s64 = ctx.r11.s64 + -22404;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x821231d0
	ctx.lr = 0x8213007C;
	sub_821231D0(ctx, base);
loc_8213007C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82130098
	if (!ctx.cr6.eq) goto loc_82130098;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-22368
	ctx.r3.s64 = ctx.r11.s64 + -22368;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x82130098;
	sub_821231D0(ctx, base);
loc_82130098:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82130134
	if (!ctx.cr6.eq) goto loc_82130134;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,3792
	ctx.r10.s64 = ctx.r1.s64 + 3792;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8269d1a8
	ctx.lr = 0x821300C4;
	sub_8269D1A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-22320
	ctx.r11.s64 = ctx.r11.s64 + -22320;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82170ea8
	ctx.lr = 0x821300E0;
	sub_82170EA8(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,1648
	ctx.r4.s64 = ctx.r1.s64 + 1648;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82170ea8
	ctx.lr = 0x821300F0;
	sub_82170EA8(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,1648
	ctx.r5.s64 = ctx.r1.s64 + 1648;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x823ed298
	ctx.lr = 0x8213011C;
	sub_823ED298(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82130134
	if (!ctx.cr0.eq) goto loc_82130134;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x82130138
	goto loc_82130138;
loc_82130134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82130138:
	// addi r1,r1,3744
	ctx.r1.s64 = ctx.r1.s64 + 3744;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821370B8) {
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
	ctx.lr = 0x821370C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6060(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6060);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x8212dd28
	ctx.lr = 0x821370EC;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821370FC;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r3,6060(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6060);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,29072
	ctx.r7.s64 = ctx.r10.s64 + 29072;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// std r11,64(r24)
	REX_STORE_U64(r24.u32 + 64, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r11,72(r24)
	REX_STORE_U64(r24.u32 + 72, ctx.r11.u64);
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// std r11,80(r24)
	REX_STORE_U64(r24.u32 + 80, ctx.r11.u64);
	// ld r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 8);
	// std r11,88(r24)
	REX_STORE_U64(r24.u32 + 88, ctx.r11.u64);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// stb r11,96(r24)
	REX_STORE_U8(r24.u32 + 96, ctx.r11.u8);
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1);
	// stb r11,97(r24)
	REX_STORE_U8(r24.u32 + 97, ctx.r11.u8);
	// lbz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 2);
	// stb r11,98(r24)
	REX_STORE_U8(r24.u32 + 98, ctx.r11.u8);
	// lbz r11,3(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 3);
	// stb r11,99(r24)
	REX_STORE_U8(r24.u32 + 99, ctx.r11.u8);
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// stb r11,100(r24)
	REX_STORE_U8(r24.u32 + 100, ctx.r11.u8);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// stb r11,101(r24)
	REX_STORE_U8(r24.u32 + 101, ctx.r11.u8);
	// lbz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2);
	// stb r11,102(r24)
	REX_STORE_U8(r24.u32 + 102, ctx.r11.u8);
	// lbz r11,3(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 3);
	// stb r11,103(r24)
	REX_STORE_U8(r24.u32 + 103, ctx.r11.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,108(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x82139b18
	ctx.lr = 0x82137188;
	sub_82139B18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8213D9F0) {
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
	ctx.lr = 0x8213D9F8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8213da58
	if (ctx.cr6.eq) goto loc_8213DA58;
loc_8213DA2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x8213DA40;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213DA48;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213da2c
	if (!ctx.cr6.eq) goto loc_8213DA2C;
loc_8213DA58:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82162298
	ctx.lr = 0x8213DA64;
	sub_82162298(ctx, base);
	// lbz r11,97(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 97);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213db7c
	if (ctx.cr0.eq) goto loc_8213DB7C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r25,0
	r25.s64 = 0;
	// addi r31,r29,104
	r31.s64 = r29.s64 + 104;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r30,r11,-17672
	r30.s64 = ctx.r11.s64 + -17672;
	// addi r28,r10,-17632
	r28.s64 = ctx.r10.s64 + -17632;
	// addi r27,r9,-17640
	r27.s64 = ctx.r9.s64 + -17640;
loc_8213DA94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8213daac
	if (!ctx.cr6.eq) goto loc_8213DAAC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8213dab0
	goto loc_8213DAB0;
loc_8213DAAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213DAB0:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8213dc04
	if (!ctx.cr6.lt) goto loc_8213DC04;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f530
	ctx.lr = 0x8213DAC4;
	sub_8215F530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r24,6072(r26)
	r24.u64 = REX_LOAD_U32(r26.u32 + 6072);
	// bl 0x8215f5f8
	ctx.lr = 0x8213DAD4;
	sub_8215F5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8213DADC;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213DAE0;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213DAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82126238
	ctx.lr = 0x8213DB08;
	sub_82126238(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82121928
	ctx.lr = 0x8213DB10;
	sub_82121928(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,68
	ctx.r4.s64 = r29.s64 + 68;
	// bl 0x82121dd0
	ctx.lr = 0x8213DB20;
	sub_82121DD0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82121928
	ctx.lr = 0x8213DB28;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120670
	ctx.lr = 0x8213DB34;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8213DB44;
	sub_82120AC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213dca0
	ctx.lr = 0x8213DB50;
	sub_8213DCA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x8213db70
	if (ctx.cr0.eq) goto loc_8213DB70;
	// bl 0x82120ac0
	ctx.lr = 0x8213DB68;
	sub_82120AC0(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8213da94
	goto loc_8213DA94;
loc_8213DB70:
	// bl 0x82120ac0
	ctx.lr = 0x8213DB74;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213dc08
	goto loc_8213DC08;
loc_8213DB7C:
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
	ctx.lr = 0x8213DB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-17620
	ctx.r5.s64 = ctx.r11.s64 + -17620;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82121610
	ctx.lr = 0x8213DBA8;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,68
	ctx.r4.s64 = r29.s64 + 68;
	// bl 0x82121dd0
	ctx.lr = 0x8213DBB8;
	sub_82121DD0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17640
	ctx.r4.s64 = ctx.r11.s64 + -17640;
	// bl 0x82121928
	ctx.lr = 0x8213DBC4;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120670
	ctx.lr = 0x8213DBD0;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8213DBE0;
	sub_82120AC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213dca0
	ctx.lr = 0x8213DBEC;
	sub_8213DCA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq 0x8213db70
	if (ctx.cr0.eq) goto loc_8213DB70;
	// bl 0x82120ac0
	ctx.lr = 0x8213DC04;
	sub_82120AC0(ctx, base);
loc_8213DC04:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213DC08:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8214CE08) {
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
	ctx.lr = 0x8214CE10;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x8214dbf0
	ctx.lr = 0x8214CE40;
	sub_8214DBF0(ctx, base);
	// lis r23,-32106
	r23.s64 = -2104098816;
	// li r28,1024
	r28.s64 = 1024;
	// lwz r11,6056(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8214ce5c
	if (ctx.cr6.lt) goto loc_8214CE5C;
	// li r28,512
	r28.s64 = 512;
loc_8214CE5C:
	// lwz r29,20(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8214ce94
	if (ctx.cr6.eq) goto loc_8214CE94;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8214ce94
	if (ctx.cr6.eq) goto loc_8214CE94;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x8214CE80;
	sub_8212E8B0(ctx, base);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82193250
	ctx.lr = 0x8214CE8C;
	sub_82193250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821930d0
	ctx.lr = 0x8214CE94;
	sub_821930D0(ctx, base);
loc_8214CE94:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// lwz r10,6056(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// li r29,0
	r29.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r28,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r28.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214d144
	if (!ctx.cr6.gt) goto loc_8214D144;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// addi r24,r11,1152
	r24.s64 = ctx.r11.s64 + 1152;
	// lfs f31,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_8214CF14:
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
	// li r12,-8
	ctx.r12.s64 = -8;
	// addi r28,r10,48
	r28.s64 = ctx.r10.s64 + 48;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r29,56,7
	ctx.r9.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFF00000000000000;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// addi r5,r11,88
	ctx.r5.s64 = ctx.r11.s64 + 88;
	// bl 0x82191a08
	ctx.lr = 0x8214CF54;
	sub_82191A08(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// addi r27,r11,88
	r27.s64 = ctx.r11.s64 + 88;
	// bl 0x8212dd28
	ctx.lr = 0x8214CF70;
	sub_8212DD28(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8214CF7C;
	sub_826A1E70(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r12,-128
	ctx.r12.s64 = -128;
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// addi r6,r10,-4392
	ctx.r6.s64 = ctx.r10.s64 + -4392;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ld r10,104(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 104);
	// ld r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// std r10,104(r22)
	REX_STORE_U64(r22.u32 + 104, ctx.r10.u64);
	// rldicl r11,r11,15,49
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 15) & 0x7FFF;
	// clrlwi r21,r11,27
	r21.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8212dc68
	ctx.lr = 0x8214CFBC;
	sub_8212DC68(ctx, base);
	// rldicl r10,r27,15,57
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 15) & 0x7F;
	// li r12,-128
	ctx.r12.s64 = -128;
	// ld r9,104(r22)
	ctx.r9.u64 = REX_LOAD_U64(r22.u32 + 104);
	// rldicr r10,r10,0,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFE0;
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 | r21.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// rldicr r10,r10,49,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 49) & 0xFFFE000000000000;
	// li r12,-2
	ctx.r12.s64 = -2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// std r10,104(r22)
	REX_STORE_U64(r22.u32 + 104, ctx.r10.u64);
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d080
	if (ctx.cr6.eq) goto loc_8214D080;
	// lbz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 24);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8214d080
	if (ctx.cr0.eq) goto loc_8214D080;
	// lwz r9,6056(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x8214d080
	if (!ctx.cr6.lt) goto loc_8214D080;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d05c
	if (ctx.cr6.eq) goto loc_8214D05C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 17);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8214D05C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r25,r9
	ctx.r10.u64 = r25.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lfs f1,704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 704);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82193988
	ctx.lr = 0x8214D07C;
	sub_82193988(ctx, base);
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
loc_8214D080:
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d0e8
	if (ctx.cr6.eq) goto loc_8214D0E8;
	// lbz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 17);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82192ae0
	ctx.lr = 0x8214D0E8;
	sub_82192AE0(ctx, base);
loc_8214D0E8:
	// lbz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214d100
	if (ctx.cr0.eq) goto loc_8214D100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214d2d0
	ctx.lr = 0x8214D100;
	sub_8214D2D0(ctx, base);
loc_8214D100:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214d428
	ctx.lr = 0x8214D110;
	sub_8214D428(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214d8c0
	ctx.lr = 0x8214D11C;
	sub_8214D8C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214dae0
	ctx.lr = 0x8214D128;
	sub_8214DAE0(ctx, base);
	// lwz r10,6056(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r25,r25,720
	r25.s64 = r25.s64 + 720;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214cf14
	if (ctx.cr6.lt) goto loc_8214CF14;
loc_8214D144:
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// li r12,-31872
	ctx.r12.s64 = -31872;
	// li r29,0
	r29.s64 = 0;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,60,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 60) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r9.u64);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8214d1b8
	if (!ctx.cr6.gt) goto loc_8214D1B8;
loc_8214D178:
	// li r12,-8
	ctx.r12.s64 = -8;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// rldicr r9,r29,56,7
	ctx.r9.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFF00000000000000;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x8214d570
	ctx.lr = 0x8214D1A0;
	sub_8214D570(ctx, base);
	// lwz r11,6056(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,6060(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// blt cr6,0x8214d178
	if (ctx.cr6.lt) goto loc_8214D178;
loc_8214D1B8:
	// li r12,-208
	ctx.r12.s64 = -208;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// rldicr r12,r12,50,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,513
	ctx.r12.s64 = 513;
	// addi r6,r9,21888
	ctx.r6.s64 = ctx.r9.s64 + 21888;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x8212dc68
	ctx.lr = 0x8214D1F0;
	sub_8212DC68(ctx, base);
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// li r12,-30
	ctx.r12.s64 = -30;
	// lwz r11,6056(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// li r28,0
	r28.s64 = 0;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,50,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r10.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8214d2b0
	if (!ctx.cr6.gt) goto loc_8214D2B0;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
loc_8214D230:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r29,r27,r11
	r29.u64 = r27.u64 + ctx.r11.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r25,r29,16
	r25.s64 = r29.s64 + 16;
	// lwzx r11,r10,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r24,72(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x8212dd28
	ctx.lr = 0x8214D24C;
	sub_8212DD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,22048
	ctx.r6.s64 = ctx.r10.s64 + 22048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bl 0x8212dc68
	ctx.lr = 0x8214D290;
	sub_8212DC68(ctx, base);
	// lwz r11,6056(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6056);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// addi r27,r27,720
	r27.s64 = r27.s64 + 720;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8214d230
	if (ctx.cr6.lt) goto loc_8214D230;
loc_8214D2B0:
	// li r12,-8
	ctx.r12.s64 = -8;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82173278) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82173280;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r10,27484
	ctx.r4.s64 = ctx.r10.s64 + 27484;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r30,r11,r31
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821732C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x821732E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27492
	ctx.r4.s64 = ctx.r10.s64 + 27492;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r30,r11,r31
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217330C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x8217332C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82179C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82179C78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x82179C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179cb4
	if (ctx.cr0.eq) goto loc_82179CB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82179CB4:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bctrl 
	ctx.lr = 0x82179CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179cdc
	if (ctx.cr0.eq) goto loc_82179CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82179CDC:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x82179CEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179d04
	if (ctx.cr0.eq) goto loc_82179D04;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82179D04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217D568) {
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
	ctx.lr = 0x8217D570;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217D59C;
	sub_8217A390(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217d748
	if (ctx.cr0.eq) goto loc_8217D748;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r11,-21370(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -21370);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d748
	if (ctx.cr0.eq) goto loc_8217D748;
	// li r27,0
	r27.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217D5C8;
	sub_8217D058(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217d884
	if (ctx.cr0.eq) goto loc_8217D884;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,15136
	r29.s64 = ctx.r11.s64 + 15136;
loc_8217D5D8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d858
	if (ctx.cr0.eq) goto loc_8217D858;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217D5F8;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217d858
	if (!ctx.cr0.eq) goto loc_8217D858;
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8217d734
	if (ctx.cr6.eq) goto loc_8217D734;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8217d734
	if (ctx.cr6.eq) goto loc_8217D734;
	// bl 0x8217cd98
	ctx.lr = 0x8217D61C;
	sub_8217CD98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217d734
	if (!ctx.cr0.eq) goto loc_8217D734;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217d648
	if (ctx.cr0.eq) goto loc_8217D648;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217D644;
	sub_8217A438(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8217D648:
	// stb r27,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r27.u8);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stb r27,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r27.u8);
	// stb r27,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r27.u8);
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r27.u8);
	// bne cr6,0x8217d670
	if (!ctx.cr6.eq) goto loc_8217D670;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// b 0x8217d674
	goto loc_8217D674;
loc_8217D670:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8217D674:
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8217d6b8
	if (!ctx.cr6.eq) goto loc_8217D6B8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x8217d6ac
	if (!ctx.cr6.eq) goto loc_8217D6AC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d270
	ctx.lr = 0x8217D6A0;
	sub_8217D270(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217d708
	goto loc_8217D708;
loc_8217D6AC:
	// stb r11,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8217d710
	goto loc_8217D710;
loc_8217D6B8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8217d704
	if (ctx.cr6.eq) goto loc_8217D704;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d6fc
	if (ctx.cr0.eq) goto loc_8217D6FC;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
loc_8217D6DC:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8217d6fc
	if (!ctx.cr6.lt) goto loc_8217D6FC;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x8217d6dc
	if (!ctx.cr0.eq) goto loc_8217D6DC;
loc_8217D6FC:
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// b 0x8217d708
	goto loc_8217D708;
loc_8217D704:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8217D708:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8217d72c
	if (!ctx.cr6.eq) goto loc_8217D72C;
loc_8217D710:
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8217D720:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217D728;
	sub_8217A438(ctx, base);
	// b 0x8217d73c
	goto loc_8217D73C;
loc_8217D72C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// b 0x8217d720
	goto loc_8217D720;
loc_8217D734:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r30,1
	r30.s64 = 1;
loc_8217D73C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217d5d8
	if (!ctx.cr6.eq) goto loc_8217D5D8;
	// b 0x8217d884
	goto loc_8217D884;
loc_8217D748:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217d884
	if (ctx.cr6.eq) goto loc_8217D884;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r11,15136
	r30.s64 = ctx.r11.s64 + 15136;
loc_8217D75C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d858
	if (ctx.cr0.eq) goto loc_8217D858;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217D77C;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217d858
	if (!ctx.cr0.eq) goto loc_8217D858;
	// stb r27,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r27.u8);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stb r27,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, r27.u8);
	// stb r27,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, r27.u8);
	// stb r27,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, r27.u8);
	// bne cr6,0x8217d7ac
	if (!ctx.cr6.eq) goto loc_8217D7AC;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// b 0x8217d7b0
	goto loc_8217D7B0;
loc_8217D7AC:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8217D7B0:
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8217d7f4
	if (!ctx.cr6.eq) goto loc_8217D7F4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x8217d7e8
	if (!ctx.cr6.eq) goto loc_8217D7E8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d270
	ctx.lr = 0x8217D7DC;
	sub_8217D270(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217d844
	goto loc_8217D844;
loc_8217D7E8:
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8217d844
	goto loc_8217D844;
loc_8217D7F4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8217d840
	if (ctx.cr6.eq) goto loc_8217D840;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d838
	if (ctx.cr0.eq) goto loc_8217D838;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
loc_8217D818:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8217d838
	if (!ctx.cr6.lt) goto loc_8217D838;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x8217d818
	if (!ctx.cr0.eq) goto loc_8217D818;
loc_8217D838:
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// b 0x8217d844
	goto loc_8217D844;
loc_8217D840:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8217D844:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217D850;
	sub_8217A438(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217d75c
	if (!ctx.cr6.eq) goto loc_8217D75C;
loc_8217D858:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217d884
	if (ctx.cr6.eq) goto loc_8217D884;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8217D864:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217d864
	if (!ctx.cr6.eq) goto loc_8217D864;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_8217D884:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82194AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,-17116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196388) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31480
	ctx.r11.s64 = ctx.r11.s64 + -31480;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r4,r10,160
	ctx.r4.s64 = ctx.r10.s64 + 160;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x826a1e70
	ctx.lr = 0x821963D0;
	sub_826A1E70(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,16592
	ctx.r10.s64 = ctx.r7.s64 + 16592;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// stw r7,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r7.u32);
	// stw r6,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r6.u32);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r5.u32);
	// stw r4,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r4.u32);
	// stw r9,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r8,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r8.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
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

DEFINE_REX_FUNC(sub_8219E210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// addi r9,r9,-28816
	ctx.r9.s64 = ctx.r9.s64 + -28816;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1E48) {
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
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821A2AA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a2ac4
	if (!ctx.cr6.eq) goto loc_821A2AC4;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821A2AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3B48) {
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
	// lwz r10,-20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3B80;
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

DEFINE_REX_FUNC(sub_821A47E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3a60
	sub_821A3A60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A5980;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r11,-26112
	r28.s64 = ctx.r11.s64 + -26112;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x821a59b8
	if (!ctx.cr6.eq) goto loc_821A59B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-25664
	ctx.r3.s64 = ctx.r11.s64 + -25664;
	// li r5,220
	ctx.r5.s64 = 220;
	// bl 0x821231d0
	ctx.lr = 0x821A59B8;
	sub_821231D0(ctx, base);
loc_821A59B8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821a59d8
	if (!ctx.cr6.eq) goto loc_821A59D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-25584
	ctx.r3.s64 = ctx.r11.s64 + -25584;
	// li r5,221
	ctx.r5.s64 = 221;
	// bl 0x821231d0
	ctx.lr = 0x821A59D8;
	sub_821231D0(ctx, base);
loc_821A59D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821a59e8
	if (ctx.cr6.eq) goto loc_821A59E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a59fc
	if (!ctx.cr6.eq) goto loc_821A59FC;
loc_821A59E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-25504
	ctx.r3.s64 = ctx.r11.s64 + -25504;
	// li r5,222
	ctx.r5.s64 = 222;
	// bl 0x821231d0
	ctx.lr = 0x821A59FC;
	sub_821231D0(ctx, base);
loc_821A59FC:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821A5A08;
	sub_82125C20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x826a1e70
	ctx.lr = 0x821A5A18;
	sub_826A1E70(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821A8C80) {
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
	// blt cr6,0x821a8cb0
	if (ctx.cr6.lt) goto loc_821A8CB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a8cc8
	if (ctx.cr6.lt) goto loc_821A8CC8;
loc_821A8CB0:
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
	ctx.lr = 0x821A8CC8;
	sub_821231D0(ctx, base);
loc_821A8CC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
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

DEFINE_REX_FUNC(sub_821ABCB8) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821abcec
	if (ctx.cr6.eq) goto loc_821ABCEC;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x821357c8
	ctx.lr = 0x821ABCE8;
	sub_821357C8(ctx, base);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
loc_821ABCEC:
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821abd00
	if (ctx.cr6.eq) goto loc_821ABD00;
	// bl 0x821357c8
	ctx.lr = 0x821ABCFC;
	sub_821357C8(ctx, base);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
loc_821ABD00:
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

DEFINE_REX_FUNC(sub_821AEFB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821de358
	ctx.lr = 0x821AEFDC;
	sub_821DE358(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// beq cr6,0x821af040
	if (ctx.cr6.eq) goto loc_821AF040;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821af00c
	if (!ctx.cr6.eq) goto loc_821AF00C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,29876
	ctx.r4.s64 = ctx.r11.s64 + 29876;
	// addi r3,r10,29912
	ctx.r3.s64 = ctx.r10.s64 + 29912;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x821231d0
	ctx.lr = 0x821AF00C;
	sub_821231D0(ctx, base);
loc_821AF00C:
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8217f4b0
	ctx.lr = 0x821AF018;
	sub_8217F4B0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,86(r1)
	REX_STORE_U32(ctx.r1.u32 + 86, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217fb30
	ctx.lr = 0x821AF038;
	sub_8217FB30(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
loc_821AF040:
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

DEFINE_REX_FUNC(sub_821B3EE0) {
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
	// bl 0x826a1c90
	ctx.lr = 0x821B3EE8;
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
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
	ctx.lr = 0x821B3F00;
	sub_82178268(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// lfs f12,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r10,r10,-18396
	ctx.r10.s64 = ctx.r10.s64 + -18396;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r6,-21952
	ctx.r6.s64 = ctx.r6.s64 + -21952;
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r5,-21912
	ctx.r9.s64 = ctx.r5.s64 + -21912;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lfs f11,-16132(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -16132);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,-19392(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -19392);
	ctx.f10.f64 = double(temp.f32);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lfs f9,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// lfs f8,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// li r3,52
	ctx.r3.s64 = 52;
	// lfs f7,220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// addi r18,r31,112
	r18.s64 = r31.s64 + 112;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r25,r31,132
	r25.s64 = r31.s64 + 132;
	// stfs f11,136(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r24,r31,136
	r24.s64 = r31.s64 + 136;
	// stfs f10,140(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r23,r31,140
	r23.s64 = r31.s64 + 140;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r22,r31,144
	r22.s64 = r31.s64 + 144;
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r21,r31,148
	r21.s64 = r31.s64 + 148;
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r20,r31,152
	r20.s64 = r31.s64 + 152;
	// stfs f9,156(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r19,r31,156
	r19.s64 = r31.s64 + 156;
	// stfs f8,160(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r26,r31,160
	r26.s64 = r31.s64 + 160;
	// stfs f7,164(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stw r10,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B3FC0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b3ff0
	if (ctx.cr0.eq) goto loc_821B3FF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-22200
	ctx.r4.s64 = ctx.r11.s64 + -22200;
	// bl 0x82120600
	ctx.lr = 0x821B3FD8;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B3FEC;
	sub_82196BA8(ctx, base);
	// b 0x821b3ff4
	goto loc_821B3FF4;
loc_821B3FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B3FF4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4008;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4024
	if (ctx.cr0.eq) goto loc_821B4024;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B4024;
	sub_82120AC0(ctx, base);
loc_821B4024:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B402C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b405c
	if (ctx.cr0.eq) goto loc_821B405C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-22184
	ctx.r4.s64 = ctx.r11.s64 + -22184;
	// bl 0x82120600
	ctx.lr = 0x821B4044;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821B4058;
	sub_82196BA8(ctx, base);
	// b 0x821b4060
	goto loc_821B4060;
loc_821B405C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4060:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4070;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b408c
	if (ctx.cr0.eq) goto loc_821B408C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B408C;
	sub_82120AC0(ctx, base);
loc_821B408C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4094;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b40c4
	if (ctx.cr0.eq) goto loc_821B40C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22164
	ctx.r4.s64 = ctx.r11.s64 + -22164;
	// bl 0x82120600
	ctx.lr = 0x821B40AC;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B40C0;
	sub_82196BA8(ctx, base);
	// b 0x821b40c8
	goto loc_821B40C8;
loc_821B40C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B40C8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B40D8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b40f4
	if (ctx.cr0.eq) goto loc_821B40F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B40F4;
	sub_82120AC0(ctx, base);
loc_821B40F4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B40FC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b412c
	if (ctx.cr0.eq) goto loc_821B412C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-22144
	ctx.r4.s64 = ctx.r11.s64 + -22144;
	// bl 0x82120600
	ctx.lr = 0x821B4114;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x821a0530
	ctx.lr = 0x821B4128;
	sub_821A0530(ctx, base);
	// b 0x821b4130
	goto loc_821B4130;
loc_821B412C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4130:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4140;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b415c
	if (ctx.cr0.eq) goto loc_821B415C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B415C;
	sub_82120AC0(ctx, base);
loc_821B415C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4164;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4194
	if (ctx.cr0.eq) goto loc_821B4194;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22124
	ctx.r4.s64 = ctx.r11.s64 + -22124;
	// bl 0x82120600
	ctx.lr = 0x821B417C;
	sub_82120600(ctx, base);
	// addi r5,r31,164
	ctx.r5.s64 = r31.s64 + 164;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x821a0530
	ctx.lr = 0x821B4190;
	sub_821A0530(ctx, base);
	// b 0x821b4198
	goto loc_821B4198;
loc_821B4194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4198:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B41A8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b41c4
	if (ctx.cr0.eq) goto loc_821B41C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821B41C4;
	sub_82120AC0(ctx, base);
loc_821B41C4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B41CC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b41fc
	if (ctx.cr0.eq) goto loc_821B41FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-20952
	ctx.r4.s64 = ctx.r11.s64 + -20952;
	// bl 0x82120600
	ctx.lr = 0x821B41E4;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821B41F8;
	sub_82196BA8(ctx, base);
	// b 0x821b4200
	goto loc_821B4200;
loc_821B41FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4200:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4210;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b422c
	if (ctx.cr0.eq) goto loc_821B422C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821B422C;
	sub_82120AC0(ctx, base);
loc_821B422C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4234;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4264
	if (ctx.cr0.eq) goto loc_821B4264;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22488
	ctx.r4.s64 = ctx.r11.s64 + -22488;
	// bl 0x82120600
	ctx.lr = 0x821B424C;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x821B4260;
	sub_82196BA8(ctx, base);
	// b 0x821b4268
	goto loc_821B4268;
loc_821B4264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4268:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4278;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4294
	if (ctx.cr0.eq) goto loc_821B4294;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821B4294;
	sub_82120AC0(ctx, base);
loc_821B4294:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B429C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b42cc
	if (ctx.cr0.eq) goto loc_821B42CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-22104
	ctx.r4.s64 = ctx.r11.s64 + -22104;
	// bl 0x82120600
	ctx.lr = 0x821B42B4;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82196ba8
	ctx.lr = 0x821B42C8;
	sub_82196BA8(ctx, base);
	// b 0x821b42d0
	goto loc_821B42D0;
loc_821B42CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B42D0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B42E0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b42fc
	if (ctx.cr0.eq) goto loc_821B42FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x821B42FC;
	sub_82120AC0(ctx, base);
loc_821B42FC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4304;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4334
	if (ctx.cr0.eq) goto loc_821B4334;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-22092
	ctx.r4.s64 = ctx.r11.s64 + -22092;
	// bl 0x82120600
	ctx.lr = 0x821B431C;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x821B4330;
	sub_82196BA8(ctx, base);
	// b 0x821b4338
	goto loc_821B4338;
loc_821B4334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4338:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4348;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4364
	if (ctx.cr0.eq) goto loc_821B4364;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B4364;
	sub_82120AC0(ctx, base);
loc_821B4364:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B436C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b439c
	if (ctx.cr0.eq) goto loc_821B439C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-23528
	ctx.r4.s64 = ctx.r11.s64 + -23528;
	// bl 0x82120600
	ctx.lr = 0x821B4384;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x82196ba8
	ctx.lr = 0x821B4398;
	sub_82196BA8(ctx, base);
	// b 0x821b43a0
	goto loc_821B43A0;
loc_821B439C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B43A0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B43B0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b43cc
	if (ctx.cr0.eq) goto loc_821B43CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x821B43CC;
	sub_82120AC0(ctx, base);
loc_821B43CC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B43D4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4404
	if (ctx.cr0.eq) goto loc_821B4404;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-22448
	ctx.r4.s64 = ctx.r11.s64 + -22448;
	// bl 0x82120600
	ctx.lr = 0x821B43EC;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x82196ba8
	ctx.lr = 0x821B4400;
	sub_82196BA8(ctx, base);
	// b 0x821b4408
	goto loc_821B4408;
loc_821B4404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4408:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4418;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4430
	if (ctx.cr0.eq) goto loc_821B4430;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82120ac0
	ctx.lr = 0x821B4430;
	sub_82120AC0(ctx, base);
loc_821B4430:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821B4438;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b4458
	if (ctx.cr0.eq) goto loc_821B4458;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821B4450;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b445c
	goto loc_821B445C;
loc_821B4458:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B445C:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B446C;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821B4474;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b4490
	if (ctx.cr0.eq) goto loc_821B4490;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821B4488;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b4494
	goto loc_821B4494;
loc_821B4490:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B4494:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B44A0;
	sub_821D3988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_821DD8D0) {
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
	ctx.lr = 0x821DD8D8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dd9e8
	if (!ctx.cr6.gt) goto loc_821DD9E8;
	// li r26,0
	r26.s64 = 0;
loc_821DD900:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r30,r26,r11
	r30.u64 = r26.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,64(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 64);
	// bl 0x823fbf60
	ctx.lr = 0x821DD91C;
	sub_823FBF60(ctx, base);
	// lfs f12,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// ld r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f4,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// fmsubs f0,f13,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f9.f64)));
	// fmsubs f13,f8,f12,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmsubs f12,f10,f11,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826a1e70
	ctx.lr = 0x821DD998;
	sub_826A1E70(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r9.u64);
	// std r8,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r8.u64);
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// std r10,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DD9D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,80
	r26.s64 = r26.s64 + 80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dd900
	if (ctx.cr6.lt) goto loc_821DD900;
loc_821DD9E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821E5528) {
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
	ctx.lr = 0x821E5530;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r8,40(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E55A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
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
	// rlwinm r10,r9,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f10,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
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
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
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
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// rlwinm r5,r7,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// fsel f0,f0,f11,f8
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfsx f0,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f12,f10
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfsx f0,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f13,f9
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821FAAF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,24948
	ctx.r4.s64 = ctx.r11.s64 + 24948;
	// b 0x8215f338
	sub_8215F338(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FAC90) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x8215efb0
	sub_8215EFB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FAF08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FAF10;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821faf44
	if (ctx.cr6.eq) goto loc_821FAF44;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,119
	ctx.r5.s64 = 119;
	// bl 0x821231d0
	ctx.lr = 0x821FAF44;
	sub_821231D0(ctx, base);
loc_821FAF44:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FAF58;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// bl 0x8215f338
	ctx.lr = 0x821FAF64;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x8215f338
	ctx.lr = 0x821FAF70;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FAF78;
	sub_8215F2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FAF80;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FAF84;
	sub_8215F990(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821FE288) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x821fe2b8
	goto loc_821FE2B8;
loc_821FE2A8:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821fe2c0
	if (ctx.cr6.eq) goto loc_821FE2C0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821FE2B8:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe2a8
	if (!ctx.cr6.eq) goto loc_821FE2A8;
loc_821FE2C0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x821FE2D8;
	sub_8269CC20(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82201148) {
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
	ctx.lr = 0x82201150;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 140);
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r26,144(r4)
	REX_STORE_U32(ctx.r4.u32 + 144, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201208
	if (ctx.cr6.eq) goto loc_82201208;
	// lfs f0,120(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,116(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f9,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f8,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f12,f6,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f12.f64)));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,152(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822011e4
	if (!ctx.cr6.gt) goto loc_822011E4;
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 152, temp.u32);
loc_822011E4:
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82201208
	if (!ctx.cr6.gt) goto loc_82201208;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,28428
	ctx.r4.s64 = ctx.r11.s64 + 28428;
	// addi r3,r10,28724
	ctx.r3.s64 = ctx.r10.s64 + 28724;
	// li r5,429
	ctx.r5.s64 = 429;
	// bl 0x821231d0
	ctx.lr = 0x82201208;
	sub_821231D0(ctx, base);
loc_82201208:
	// lbz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82201288
	if (ctx.cr0.eq) goto loc_82201288;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220122c
	if (ctx.cr6.lt) goto loc_8220122C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8220122C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,28768
	ctx.r5.s64 = ctx.r11.s64 + 28768;
	// bl 0x82202d10
	ctx.lr = 0x8220123C;
	sub_82202D10(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,108
	r29.s64 = r31.s64 + 108;
	// addi r27,r11,10560
	r27.s64 = ctx.r11.s64 + 10560;
loc_82201250:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfsu f31,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82201260;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x82201268;
	sub_8215F200(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82201270;
	sub_8215F0F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfs f31,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// blt cr6,0x82201250
	if (ctx.cr6.lt) goto loc_82201250;
loc_82201288:
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lbz r11,699(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 699);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822012a0
	if (!ctx.cr0.eq) goto loc_822012A0;
	// stb r26,699(r3)
	REX_STORE_U8(ctx.r3.u32 + 699, r26.u8);
	// bl 0x8224c5e8
	ctx.lr = 0x822012A0;
	sub_8224C5E8(ctx, base);
loc_822012A0:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,112(r10)
	REX_STORE_U8(ctx.r10.u32 + 112, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8220C3C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14324
	ctx.r3.s64 = ctx.r11.s64 + -14324;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C740) {
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
	// li r3,644
	ctx.r3.s64 = 644;
	// bl 0x822f6280
	ctx.lr = 0x8220C758;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220c784
	if (ctx.cr0.eq) goto loc_8220C784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268f38
	ctx.lr = 0x8220C768;
	sub_82268F38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32112
	ctx.r11.s64 = ctx.r11.s64 + -32112;
	// stw r10,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220c788
	goto loc_8220C788;
loc_8220C784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C788:
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

DEFINE_REX_FUNC(sub_8220EEF0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,288(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 288);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F700) {
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
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x822f6280
	ctx.lr = 0x8220F714;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220f724
	if (ctx.cr0.eq) goto loc_8220F724;
	// bl 0x8220f738
	ctx.lr = 0x8220F720;
	sub_8220F738(ctx, base);
	// b 0x8220f728
	goto loc_8220F728;
loc_8220F724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220F728:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212050) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82212138
	if (ctx.cr6.eq) goto loc_82212138;
	// lwz r10,96(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212138
	if (ctx.cr6.eq) goto loc_82212138;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,12(r10)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + 12));
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lwa r8,16(r10)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + 16));
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f13,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r3,6096(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 6096);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82136128
	ctx.lr = 0x82212138;
	sub_82136128(ctx, base);
loc_82212138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221E060) {
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
	ctx.lr = 0x8221E068;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8221e9d8
	ctx.lr = 0x8221E07C;
	sub_8221E9D8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// addi r10,r10,-25716
	ctx.r10.s64 = ctx.r10.s64 + -25716;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r9,-17264
	ctx.r11.s64 = ctx.r9.s64 + -17264;
	// addi r9,r8,16408
	ctx.r9.s64 = ctx.r8.s64 + 16408;
	// addi r10,r7,-31468
	ctx.r10.s64 = ctx.r7.s64 + -31468;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r16,0
	r16.s64 = 0;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r23,r31,1020
	r23.s64 = r31.s64 + 1020;
	// addi r6,r31,132
	ctx.r6.s64 = r31.s64 + 132;
	// lwz r11,1024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// lwz r10,1020(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1020);
	// ld r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 132);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// ble 0x8221e658
	if (!ctx.cr0.gt) goto loc_8221E658;
	// addi r11,r31,456
	ctx.r11.s64 = r31.s64 + 456;
	// lfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// addi r9,r31,672
	ctx.r9.s64 = r31.s64 + 672;
	// lfs f31,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f31.f64 = double(temp.f32);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r10,r31,564
	ctx.r10.s64 = r31.s64 + 564;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r11,r31,472
	ctx.r11.s64 = r31.s64 + 472;
	// addi r9,r31,688
	ctx.r9.s64 = r31.s64 + 688;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r10,r31,580
	ctx.r10.s64 = r31.s64 + 580;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r26,-32243
	r26.s64 = -2113077248;
	// lis r27,-32243
	r27.s64 = -2113077248;
	// lis r28,-32242
	r28.s64 = -2113011712;
	// lis r29,-32242
	r29.s64 = -2113011712;
	// lis r30,-32242
	r30.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,-25732
	ctx.r3.s64 = ctx.r3.s64 + -25732;
	// addi r4,r4,-25748
	ctx.r4.s64 = ctx.r4.s64 + -25748;
	// addi r5,r5,-26768
	ctx.r5.s64 = ctx.r5.s64 + -26768;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r6,r6,-26784
	ctx.r6.s64 = ctx.r6.s64 + -26784;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r7,r7,-25768
	ctx.r7.s64 = ctx.r7.s64 + -25768;
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r9,r9,-25800
	ctx.r9.s64 = ctx.r9.s64 + -25800;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lis r20,-32106
	r20.s64 = -2104098816;
	// stw r7,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// addi r14,r26,-26856
	r14.s64 = r26.s64 + -26856;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r24,r27,22808
	r24.s64 = r27.s64 + 22808;
	// addi r19,r28,16528
	r19.s64 = r28.s64 + 16528;
	// addi r18,r29,16492
	r18.s64 = r29.s64 + 16492;
	// addi r17,r30,17480
	r17.s64 = r30.s64 + 17480;
	// addi r15,r8,-25780
	r15.s64 = ctx.r8.s64 + -25780;
	// addi r22,r10,23052
	r22.s64 = ctx.r10.s64 + 23052;
	// addi r21,r11,16176
	r21.s64 = ctx.r11.s64 + 16176;
loc_8221E1B0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,1036(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1036);
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r16,r9
	ctx.r11.u64 = ctx.r9.u64 - r16.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x8221E1F4;
	sub_8215F338(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8215f338
	ctx.lr = 0x8221E1FC;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E204;
	sub_8215F338(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E210;
	sub_8215F338(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E21C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221E220;
	sub_8215FA30(ctx, base);
	// lwz r11,1004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1004);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221E234;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221E23C;
	sub_8215F2D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E244;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221e268
	if (!ctx.cr6.eq) goto loc_8221E268;
	// lwz r28,8(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221e26c
	if (ctx.cr6.lt) goto loc_8221E26C;
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8221e26c
	goto loc_8221E26C;
loc_8221E268:
	// mr r28,r14
	r28.u64 = r14.u64;
loc_8221E26C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8221E270:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e270
	if (!ctx.cr6.eq) goto loc_8221E270;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221e294
	if (!ctx.cr0.eq) goto loc_8221E294;
	// lwz r28,140(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_8221E294:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E2A0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221e2b4
	if (!ctx.cr6.eq) goto loc_8221E2B4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8221e2b8
	goto loc_8221E2B8;
loc_8221E2B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E2B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e2c4
	if (ctx.cr0.eq) goto loc_8221E2C4;
	// lwz r28,164(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_8221E2C4:
	// lwz r3,6140(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6140);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E2DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E2F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,136(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221e304
	if (!ctx.cr0.eq) goto loc_8221E304;
	// lwz r29,148(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8221E304:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E31C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8221e348
	if (ctx.cr6.eq) goto loc_8221E348;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221e348
	if (!ctx.cr0.eq) goto loc_8221E348;
	// lwz r29,120(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
loc_8221E348:
	// lwz r3,6140(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6140);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x8221E370;
	sub_8215F338(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E378;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221E37C;
	sub_8215FA30(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82125d00
	ctx.lr = 0x8221E384;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221e460
	if (ctx.cr0.eq) goto loc_8221E460;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221e3e8
	if (ctx.cr6.eq) goto loc_8221E3E8;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f13,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r16,1
	ctx.r3.s64 = r16.s64 + 1;
	// lfs f12,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f11,252(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221E3D0;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,256
	ctx.r5.s64 = r31.s64 + 256;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8221e7f0
	ctx.lr = 0x8221E3E8;
	sub_8221E7F0(ctx, base);
loc_8221E3E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8215f338
	ctx.lr = 0x8221E3F4;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215fb00
	ctx.lr = 0x8221E3FC;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e410
	if (ctx.cr0.eq) goto loc_8221E410;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221e460
	if (!ctx.cr6.eq) goto loc_8221E460;
loc_8221E410:
	// lfs f0,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f13,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f12,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f11,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221E448;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,364
	ctx.r5.s64 = r31.s64 + 364;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x8221e7f0
	ctx.lr = 0x8221E460;
	sub_8221E7F0(ctx, base);
loc_8221E460:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bctrl 
	ctx.lr = 0x8221E4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x8221e7f0
	ctx.lr = 0x8221E4B8;
	sub_8221E7F0(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221e4cc
	if (ctx.cr6.lt) goto loc_8221E4CC;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8221e4d0
	goto loc_8221E4D0;
loc_8221E4CC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_8221E4D0:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x8221e7f0
	ctx.lr = 0x8221E510;
	sub_8221E7F0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221e524
	if (ctx.cr6.lt) goto loc_8221E524;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8221e528
	goto loc_8221E528;
loc_8221E524:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8221E528:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x8221e7f0
	ctx.lr = 0x8221E568;
	sub_8221E7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E57C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221e5a0
	if (!ctx.cr0.eq) goto loc_8221E5A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e628
	if (ctx.cr0.eq) goto loc_8221E628;
loc_8221E5A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e5c8
	if (ctx.cr0.eq) goto loc_8221E5C8;
	// li r29,0
	r29.s64 = 0;
	// b 0x8221e5e8
	goto loc_8221E5E8;
loc_8221E5C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E5DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e5e8
	if (ctx.cr0.eq) goto loc_8221E5E8;
	// li r29,2
	r29.s64 = 2;
loc_8221E5E8:
	// lfs f0,780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 780);
	ctx.f0.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f13,784(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 784);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e8f0
	ctx.lr = 0x8221E628;
	sub_8221E8F0(ctx, base);
loc_8221E628:
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221e1b0
	if (ctx.cr6.lt) goto loc_8221E1B0;
loc_8221E658:
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221e768
	if (!ctx.cr6.gt) goto loc_8221E768;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_8221E66C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwzx r30,r11,r28
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x8221E698;
	sub_8215F338(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8215f338
	ctx.lr = 0x8221E6A0;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221E6A8;
	sub_8215F338(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8215f338
	ctx.lr = 0x8221E6B0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E6D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e6f4
	if (ctx.cr0.eq) goto loc_8221E6F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8221E6F4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8215f338
	ctx.lr = 0x8221E700;
	sub_8215F338(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8215fb00
	ctx.lr = 0x8221E708;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e730
	if (ctx.cr0.eq) goto loc_8221E730;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221e724
	if (!ctx.cr6.eq) goto loc_8221E724;
	// li r29,2
	r29.s64 = 2;
	// b 0x8221e730
	goto loc_8221E730;
loc_8221E724:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8221E730:
	// lwz r11,980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 980);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// stwx r29,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, r29.u32);
	// lwz r11,980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 980);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221e66c
	if (ctx.cr6.lt) goto loc_8221E66C;
loc_8221E768:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8221e7a0
	if (!ctx.cr6.lt) goto loc_8221E7A0;
	// subfic r10,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221E77C:
	// lwz r10,980(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 980);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,980(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 980);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bdnz 0x8221e77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E77C;
loc_8221E7A0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r5,r31,124
	ctx.r5.s64 = r31.s64 + 124;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lfs f0,16592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,788
	ctx.r3.s64 = r31.s64 + 788;
	// stw r11,964(r31)
	REX_STORE_U32(r31.u32 + 964, ctx.r11.u32);
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x8221E7E0;
	sub_8226BF68(ctx, base);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82256728) {
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
	// bl 0x82120d70
	ctx.lr = 0x82256748;
	sub_82120D70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// bne cr6,0x82256778
	if (!ctx.cr6.eq) goto loc_82256778;
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
	ctx.lr = 0x8225676C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_82256778:
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

DEFINE_REX_FUNC(sub_82258D40) {
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
	ctx.lr = 0x82258D48;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,6152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82145710
	ctx.lr = 0x82258D80;
	sub_82145710(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bne cr6,0x82258d94
	if (!ctx.cr6.eq) goto loc_82258D94;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82258D94:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bne cr6,0x82258dbc
	if (!ctx.cr6.eq) goto loc_82258DBC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82258DBC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bne cr6,0x82258de4
	if (!ctx.cr6.eq) goto loc_82258DE4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82258DE4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x82258E04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82258e14
	if (ctx.cr0.eq) goto loc_82258E14;
	// bl 0x82288068
	ctx.lr = 0x82258E10;
	sub_82288068(ctx, base);
	// b 0x82258e18
	goto loc_82258E18;
loc_82258E14:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82258E18:
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27060
	ctx.r4.s64 = ctx.r11.s64 + -27060;
	// bl 0x82120600
	ctx.lr = 0x82258E2C;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82258E3C;
	sub_82180E18(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82258E50;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16340
	ctx.r4.s64 = ctx.r11.s64 + 16340;
	// bl 0x82120600
	ctx.lr = 0x82258E60;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82258E6C;
	sub_82180E18(ctx, base);
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82258E80;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x82258E90;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82258E9C;
	sub_82180E18(ctx, base);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82258EB0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24252
	ctx.r4.s64 = ctx.r11.s64 + -24252;
	// bl 0x82120600
	ctx.lr = 0x82258EC0;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82258ECC;
	sub_82180E18(ctx, base);
	// stw r3,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82258EE0;
	sub_82120AC0(ctx, base);
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258EF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82258f04
	if (!ctx.cr6.eq) goto loc_82258F04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b238
	ctx.lr = 0x82258F04;
	sub_8225B238(ctx, base);
loc_82258F04:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-9452
	ctx.r4.s64 = ctx.r10.s64 + -9452;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258F24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82258f3c
	if (!ctx.cr6.eq) goto loc_82258F3C;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82258f40
	goto loc_82258F40;
loc_82258F3C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82258F40:
	// stb r11,26(r10)
	REX_STORE_U8(ctx.r10.u32 + 26, ctx.r11.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// addi r28,r11,-26856
	r28.s64 = ctx.r11.s64 + -26856;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120c08
	ctx.lr = 0x82258F60;
	sub_82120C08(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82120c08
	ctx.lr = 0x82258F70;
	sub_82120C08(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r24,272(r31)
	REX_STORE_U32(r31.u32 + 272, r24.u32);
	// stw r24,276(r31)
	REX_STORE_U32(r31.u32 + 276, r24.u32);
	// stb r24,1528(r31)
	REX_STORE_U8(r31.u32 + 1528, r24.u8);
	// stb r24,1529(r31)
	REX_STORE_U8(r31.u32 + 1529, r24.u8);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1532(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1532, temp.u32);
	// bl 0x8228c1d0
	ctx.lr = 0x82258F94;
	sub_8228C1D0(ctx, base);
	// addi r27,r30,248
	r27.s64 = r30.s64 + 248;
	// li r28,8
	r28.s64 = 8;
loc_82258F9C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228c0b0
	ctx.lr = 0x82258FA4;
	sub_8228C0B0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,136
	r27.s64 = r27.s64 + 136;
	// bne 0x82258f9c
	if (!ctx.cr0.eq) goto loc_82258F9C;
	// stw r24,60(r30)
	REX_STORE_U32(r30.u32 + 60, r24.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r24,72(r30)
	REX_STORE_U32(r30.u32 + 72, r24.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r25,r11,1624
	r25.s64 = ctx.r11.s64 + 1624;
	// addi r27,r10,16492
	r27.s64 = ctx.r10.s64 + 16492;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82258FD4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82258FE0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82258FE4;
	sub_8215FA30(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x82258FFC;
	sub_82120B20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82259008;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x82259014;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82259018;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x82120b20
	ctx.lr = 0x8225902C;
	sub_82120B20(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82259098
	if (!ctx.cr0.gt) goto loc_82259098;
	// addi r27,r31,248
	r27.s64 = r31.s64 + 248;
loc_82259050:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82264638
	ctx.lr = 0x82259078;
	sub_82264638(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82259050
	if (ctx.cr6.lt) goto loc_82259050;
loc_82259098:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r27,r24
	r27.u64 = r24.u64;
	// addi r28,r11,22808
	r28.s64 = ctx.r11.s64 + 22808;
	// addi r26,r10,32412
	r26.s64 = ctx.r10.s64 + 32412;
loc_822590AC:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822590BC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822590d4
	if (!ctx.cr6.eq) goto loc_822590D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822590d8
	goto loc_822590D8;
loc_822590D4:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822590D8:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82259160
	if (!ctx.cr6.lt) goto loc_82259160;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822590F0;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f530
	ctx.lr = 0x822590F8;
	sub_8215F530(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8225910C;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82259114;
	sub_8215F2D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225911C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82259158
	if (!ctx.cr6.eq) goto loc_82259158;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8225913c
	if (ctx.cr6.lt) goto loc_8225913C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82259140
	goto loc_82259140;
loc_8225913C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82259140:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x82259148;
	sub_82162AF8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82264638
	ctx.lr = 0x82259158;
	sub_82264638(ctx, base);
loc_82259158:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x822590ac
	goto loc_822590AC;
loc_82259160:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82125d00
	ctx.lr = 0x82259170;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822591b4
	if (ctx.cr0.eq) goto loc_822591B4;
	// bl 0x8228c1d0
	ctx.lr = 0x82259184;
	sub_8228C1D0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r10,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// addi r10,r31,204
	ctx.r10.s64 = r31.s64 + 204;
loc_82259194:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,76(r10)
	REX_STORE_U8(ctx.r10.u32 + 76, ctx.r9.u8);
	// stwu r24,80(r10)
	ea = 80 + ctx.r10.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r10.u32 = ea;
	// lwz r9,84(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82259194
	if (ctx.cr6.lt) goto loc_82259194;
	// b 0x822591b8
	goto loc_822591B8;
loc_822591B4:
	// bl 0x8228c1d0
	ctx.lr = 0x822591B8;
	sub_8228C1D0(ctx, base);
loc_822591B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ef630
	ctx.lr = 0x822591C0;
	sub_821EF630(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r30,r11,-31468
	r30.s64 = ctx.r11.s64 + -31468;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x822591D4;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-9428
	ctx.r4.s64 = ctx.r11.s64 + -9428;
	// bl 0x8215f670
	ctx.lr = 0x822591E0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x822591E4;
	sub_8215F0F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f670
	ctx.lr = 0x822591F0;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31460
	ctx.r4.s64 = ctx.r11.s64 + -31460;
	// bl 0x8215f670
	ctx.lr = 0x822591FC;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82259200;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b298
	ctx.lr = 0x82259208;
	sub_8225B298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822641b0
	ctx.lr = 0x82259210;
	sub_822641B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8227C270) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8227C278;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfd f0,168(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 168);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadd f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,176(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 176);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r11,16592
	r26.s64 = ctx.r11.s64 + 16592;
	// stfd f0,168(r3)
	REX_STORE_U64(ctx.r3.u32 + 168, ctx.f0.u64);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r31,0
	r31.s64 = 0;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227c388
	if (ctx.cr6.eq) goto loc_8227C388;
	// lfd f13,1112(r26)
	ctx.f13.u64 = REX_LOAD_U64(r26.u32 + 1112);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x8227c388
	if (ctx.cr6.gt) goto loc_8227C388;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bne cr6,0x8227c2fc
	if (!ctx.cr6.eq) goto loc_8227C2FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-952
	ctx.r4.s64 = ctx.r11.s64 + -952;
loc_8227C2FC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8227c30c
	if (!ctx.cr6.eq) goto loc_8227C30C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-924
	ctx.r4.s64 = ctx.r11.s64 + -924;
loc_8227C30C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8227c31c
	if (!ctx.cr6.eq) goto loc_8227C31C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-896
	ctx.r4.s64 = ctx.r11.s64 + -896;
loc_8227C31C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227c32c
	if (!ctx.cr6.eq) goto loc_8227C32C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-868
	ctx.r4.s64 = ctx.r11.s64 + -868;
loc_8227C32C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227c360
	if (!ctx.cr0.eq) goto loc_8227C360;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822fbe20
	ctx.lr = 0x8227C360;
	sub_822FBE20(ctx, base);
loc_8227C360:
	// stw r31,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8227C378;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-14704
	ctx.r3.s64 = ctx.r11.s64 + -14704;
	// bl 0x8216bc98
	ctx.lr = 0x8227C388;
	sub_8216BC98(ctx, base);
loc_8227C388:
	// lfd f0,168(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r27.u32 + 168);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stfd f0,176(r27)
	REX_STORE_U64(r27.u32 + 176, ctx.f0.u64);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C3A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfd f0,1120(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r26.u32 + 1120);
	// lfd f13,168(r27)
	ctx.f13.u64 = REX_LOAD_U64(r27.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8227c450
	if (ctx.cr6.lt) goto loc_8227C450;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8227c440
	if (!ctx.cr0.gt) goto loc_8227C440;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,-13400
	r29.s64 = ctx.r11.s64 + -13400;
	// addi r28,r10,-13532
	r28.s64 = ctx.r10.s64 + -13532;
loc_8227C3E8:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 616);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,616(r3)
	REX_STORE_U32(ctx.r3.u32 + 616, ctx.r11.u32);
	// bge 0x8227c420
	if (!ctx.cr0.lt) goto loc_8227C420;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,479
	ctx.r5.s64 = 479;
	// bl 0x821231d0
	ctx.lr = 0x8227C420;
	sub_821231D0(ctx, base);
loc_8227C420:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227C438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8227c3e8
	if (ctx.cr6.lt) goto loc_8227C3E8;
loc_8227C440:
	// li r11,5
	ctx.r11.s64 = 5;
	// lfd f0,136(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r26.u32 + 136);
	// stfd f0,160(r27)
	REX_STORE_U64(r27.u32 + 160, ctx.f0.u64);
	// stw r11,152(r27)
	REX_STORE_U32(r27.u32 + 152, ctx.r11.u32);
loc_8227C450:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82289BB0) {
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
	ctx.lr = 0x82289BB8;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,88(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82289bdc
	if (ctx.cr0.eq) goto loc_82289BDC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82289e78
	if (!ctx.cr6.eq) goto loc_82289E78;
loc_82289BDC:
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r29,36(r31)
	REX_STORE_U8(r31.u32 + 36, r29.u8);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289C08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x82289c2c
	if (!ctx.cr0.eq) goto loc_82289C2C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// addi r3,r10,2676
	ctx.r3.s64 = ctx.r10.s64 + 2676;
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x821231d0
	ctx.lr = 0x82289C2C;
	sub_821231D0(ctx, base);
loc_82289C2C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stb r30,52(r31)
	REX_STORE_U8(r31.u32 + 52, r30.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// beq cr6,0x82289e6c
	if (ctx.cr6.eq) goto loc_82289E6C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x82289C64;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289C70;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82289C84;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x82289C94;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289CA0;
	sub_82178B60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82289CB4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x82289CC4;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289CD0;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82289CE4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x82289CF4;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289D00;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82289D14;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x82289D24;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289D30;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82289D44;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x82289D54;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289D60;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82289D74;
	sub_82120AC0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r11,-19376
	r30.s64 = ctx.r11.s64 + -19376;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x82289D90;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x82289DA4;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288798
	ctx.lr = 0x82289DBC;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288798
	ctx.lr = 0x82289DD4;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288848
	ctx.lr = 0x82289DEC;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288848
	ctx.lr = 0x82289E04;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-11260
	ctx.r4.s64 = ctx.r11.s64 + -11260;
	// bl 0x82288848
	ctx.lr = 0x82289E14;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-11244
	ctx.r4.s64 = ctx.r11.s64 + -11244;
	// bl 0x82288848
	ctx.lr = 0x82289E24;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x82289E34;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82289E40;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82289E54;
	sub_82120AC0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288798
	ctx.lr = 0x82289E6C;
	sub_82288798(ctx, base);
loc_82289E6C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x82289E78;
	sub_8226AFB8(ctx, base);
loc_82289E78:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,108(r28)
	REX_STORE_U32(r28.u32 + 108, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8229EE48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229eef8
	if (ctx.cr0.eq) goto loc_8229EEF8;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f8,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f11,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// sth r9,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// sth r8,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// blr 
	return;
loc_8229EEF8:
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A5578) {
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
	// bl 0x822a55e8
	ctx.lr = 0x822A5598;
	sub_822A55E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a55cc
	if (ctx.cr0.eq) goto loc_822A55CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822a55cc
	if (ctx.cr6.eq) goto loc_822A55CC;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
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
	ctx.lr = 0x822A55CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A55CC:
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

DEFINE_REX_FUNC(sub_822A6EB0) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x822A6EB8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca4
	ctx.lr = 0x822A6EC0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r26,52(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lfs f31,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lfs f30,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a72a0
	if (ctx.cr6.eq) goto loc_822A72A0;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a72a0
	if (ctx.cr6.eq) goto loc_822A72A0;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a72a0
	if (ctx.cr0.eq) goto loc_822A72A0;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f29,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f29.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f29,f29,f2
	f29.f64 = double(float(f29.f64 * ctx.f2.f64));
	// lfs f28,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmadds f0,f10,f2,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f0.f64)));
	// lfs f27,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmadds f13,f12,f1,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f13.f64)));
	// fmadds f11,f11,f1,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, f29.f64)));
	// lfs f29,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f29.f64 = double(temp.f32);
	// fmadds f0,f7,f3,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f3.f64, ctx.f0.f64)));
	// fmadds f13,f2,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f12,f8,f3,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f11.f64)));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 * ctx.f13.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f3,f28,f3
	ctx.f3.f64 = double(float(f28.f64 * ctx.f3.f64));
	// fmadds f0,f27,f10,f0
	ctx.f0.f64 = double(float(std::fma(f27.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f13,f27,f12,f13
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f11,f27,f11,f3
	ctx.f11.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f3.f64)));
	// fmadds f0,f28,f7,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f0.f64)));
	// fmadds f13,f28,f9,f13
	ctx.f13.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f12,f29,f8,f11
	ctx.f12.f64 = double(float(std::fma(f29.f64, ctx.f8.f64, ctx.f11.f64)));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A7064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lfs f11,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r27,r29,32
	r27.s64 = r29.s64 + 32;
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f8,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f8,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f0.f64)));
	// lfs f2,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f7,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f13.f64)));
	// lfs f1,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f12,f10,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f12.f64)));
	// lfs f9,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f10,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f13,f4,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f3,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f2,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f9,f5
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f4,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f11,f11,f7,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f5.f64)));
	// lfs f3,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f7,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f0.f64)));
	// lfs f9,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f13,f6,f3,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f13.f64)));
	// fmadds f12,f9,f6,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f11.f64)));
	// fmadds f0,f5,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f0.f64)));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A7184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f8,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f6,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f8,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f12.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f11,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f6,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f0.f64)));
	// lfs f9,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f7,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f8,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f5,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f4,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f3,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f9,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f8,f10,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f7.f64)));
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f11,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f13.f64)));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f0,f3,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f0.f64)));
	// fmadds f12,f6,f11,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f13,f9,f5,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, ctx.f13.f64)));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f0,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A72A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A72A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x822a73e4
	if (!ctx.cr6.lt) goto loc_822A73E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// ld r9,32(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 32);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// ld r7,40(r29)
	ctx.r7.u64 = REX_LOAD_U64(r29.u32 + 40);
	// addi r10,r10,5344
	ctx.r10.s64 = ctx.r10.s64 + 5344;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f30,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stfs f30,212(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r3,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r9,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// std r7,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// lfs f0,60(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// ld r28,16(r29)
	r28.u64 = REX_LOAD_U64(r29.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ld r29,24(r29)
	r29.u64 = REX_LOAD_U64(r29.u32 + 24);
	// std r28,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r28.u64);
	// std r29,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r29.u64);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,68(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A7350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x822a7380
	if (!ctx.cr6.eq) goto loc_822A7380;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822a7384
	goto loc_822A7384;
loc_822A7380:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822A7384:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A738C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,48(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r6,56(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A73B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A73C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A73E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,204(r31)
	REX_STORE_U32(r31.u32 + 204, r28.u32);
loc_822A73E4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x822A73F0;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822D6A60) {
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
	ctx.lr = 0x822D6A68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d6b08
	if (ctx.cr0.eq) goto loc_822D6B08;
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d6a90
	if (ctx.cr0.eq) goto loc_822D6A90;
	// lwz r11,12924(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// b 0x822d6a94
	goto loc_822D6A94;
loc_822D6A90:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D6A94:
	// stw r11,148(r29)
	REX_STORE_U32(r29.u32 + 148, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822d6ab8
	if (!ctx.cr6.eq) goto loc_822D6AB8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de898
	ctx.lr = 0x822D6AB4;
	sub_822DE898(ctx, base);
	// b 0x822d6afc
	goto loc_822D6AFC;
loc_822D6AB8:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822d6afc
	if (!ctx.cr6.eq) goto loc_822D6AFC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d6ad8
	if (!ctx.cr6.gt) goto loc_822D6AD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D6AD8;
	sub_822D5B28(ctx, base);
loc_822D6AD8:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,25
	ctx.r10.s64 = 25;
	// ori r11,r11,17920
	ctx.r11.u64 = ctx.r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r11,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r11.u8);
loc_822D6AFC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,16(r29)
	REX_STORE_U8(r29.u32 + 16, ctx.r11.u8);
	// b 0x822d6ce0
	goto loc_822D6CE0;
loc_822D6B08:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d6ce0
	if (ctx.cr0.eq) goto loc_822D6CE0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822d6ccc
	if (ctx.cr6.eq) goto loc_822D6CCC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822d6c60
	if (!ctx.cr6.eq) goto loc_822D6C60;
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 148);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// beq cr6,0x822d6c34
	if (ctx.cr6.eq) goto loc_822D6C34;
	// lbz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 20);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d6c34
	if (!ctx.cr0.eq) goto loc_822D6C34;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d6b64
	if (!ctx.cr6.gt) goto loc_822D6B64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D6B64;
	sub_822D5B28(ctx, base);
loc_822D6B64:
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r11,r11,15616
	ctx.r11.u64 = ctx.r11.u64 | 15616;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-275
	ctx.r11.s64 = -275;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r6,r6,15616
	ctx.r6.u64 = ctx.r6.u64 | 15616;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r8,-1
	ctx.r8.s64 = -1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,-16380
	ctx.r9.s64 = -1073479680;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,15360
	ctx.r9.u64 = ctx.r9.u64 | 15360;
	// li r6,19
	ctx.r6.s64 = 19;
	// li r30,256
	r30.s64 = 256;
	// lis r27,-16380
	r27.s64 = -1073479680;
	// li r26,19
	r26.s64 = 19;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r27,r27,15360
	r27.u64 = r27.u64 | 15360;
	// li r25,256
	r25.s64 = 256;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x822d6c4c
	goto loc_822D6C4C;
loc_822D6C34:
	// lbz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 20);
	// li r11,-275
	ctx.r11.s64 = -275;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,20(r29)
	REX_STORE_U8(r29.u32 + 20, ctx.r10.u8);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_822D6C4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822de898
	ctx.lr = 0x822D6C5C;
	sub_822DE898(ctx, base);
	// b 0x822d6cc4
	goto loc_822D6CC4;
loc_822D6C60:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822d6cc4
	if (!ctx.cr6.eq) goto loc_822D6CC4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d6c80
	if (!ctx.cr6.gt) goto loc_822D6C80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D6C80;
	sub_822D5B28(ctx, base);
loc_822D6C80:
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// li r10,26
	ctx.r10.s64 = 26;
	// ori r11,r11,23040
	ctx.r11.u64 = ctx.r11.u64 | 23040;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r10,0,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r11,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r11.u8);
loc_822D6CC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r29)
	REX_STORE_U8(r29.u32 + 16, ctx.r11.u8);
loc_822D6CCC:
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// lbz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 20);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r11,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r11.u32);
	// stb r10,20(r29)
	REX_STORE_U8(r29.u32 + 20, ctx.r10.u8);
loc_822D6CE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822E8790) {
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
	// bl 0x826a1c98
	ctx.lr = 0x822E8798;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// bl 0x82178268
	ctx.lr = 0x822E87B8;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r6,r11,15048
	ctx.r6.s64 = ctx.r11.s64 + 15048;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r11,r10,-18396
	ctx.r11.s64 = ctx.r10.s64 + -18396;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// addi r9,r8,13996
	ctx.r9.s64 = ctx.r8.s64 + 13996;
	// lfs f0,-22312(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r7,-28804
	ctx.r8.s64 = ctx.r7.s64 + -28804;
	// li r21,1
	r21.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r8,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// stb r21,124(r31)
	REX_STORE_U8(r31.u32 + 124, r21.u8);
	// lfs f13,580(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,128(r31)
	REX_STORE_U8(r31.u32 + 128, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,127(r31)
	REX_STORE_U8(r31.u32 + 127, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,126(r31)
	REX_STORE_U8(r31.u32 + 126, ctx.r11.u8);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// stb r11,125(r31)
	REX_STORE_U8(r31.u32 + 125, ctx.r11.u8);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r22,r31,112
	r22.s64 = r31.s64 + 112;
	// lfs f0,88(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r31,124
	r26.s64 = r31.s64 + 124;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r30,r31,125
	r30.s64 = r31.s64 + 125;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r24,r31,132
	r24.s64 = r31.s64 + 132;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,140
	r28.s64 = r31.s64 + 140;
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r27,r31,156
	r27.s64 = r31.s64 + 156;
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r20,r31,172
	r20.s64 = r31.s64 + 172;
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x822E8874;
	sub_82120AC0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x822E887C;
	sub_822F6280(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x822e88ac
	if (ctx.cr0.eq) goto loc_822E88AC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-29284
	ctx.r4.s64 = ctx.r11.s64 + -29284;
	// bl 0x82120600
	ctx.lr = 0x822E8894;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// bl 0x82191600
	ctx.lr = 0x822E88A8;
	sub_82191600(ctx, base);
	// b 0x822e88b0
	goto loc_822E88B0;
loc_822E88AC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_822E88B0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x822E88C4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e88e0
	if (ctx.cr0.eq) goto loc_822E88E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822E88E0;
	sub_82120AC0(ctx, base);
loc_822E88E0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822E88E8;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x822e8918
	if (ctx.cr0.eq) goto loc_822E8918;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
	// bl 0x82120600
	ctx.lr = 0x822E8900;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x8219d708
	ctx.lr = 0x822E8914;
	sub_8219D708(ctx, base);
	// b 0x822e891c
	goto loc_822E891C;
loc_822E8918:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_822E891C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x822E892C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e8948
	if (ctx.cr0.eq) goto loc_822E8948;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822E8948;
	sub_82120AC0(ctx, base);
loc_822E8948:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x822E8950;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e8980
	if (ctx.cr0.eq) goto loc_822E8980;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x822E8968;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x821d13f8
	ctx.lr = 0x822E897C;
	sub_821D13F8(ctx, base);
	// b 0x822e8984
	goto loc_822E8984;
loc_822E8980:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_822E8984:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x822E8994;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e89b0
	if (ctx.cr0.eq) goto loc_822E89B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x822E89B0;
	sub_82120AC0(ctx, base);
loc_822E89B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-6704
	ctx.r4.s64 = ctx.r11.s64 + -6704;
	// bl 0x82120600
	ctx.lr = 0x822E89C0;
	sub_82120600(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822E89D0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822E89E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// bl 0x82120600
	ctx.lr = 0x822E89F0;
	sub_82120600(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822E8A00;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822E8A10;
	sub_82120AC0(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822E8A18;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r27,r11,-14416
	r27.s64 = ctx.r11.s64 + -14416;
	// beq 0x822e8a4c
	if (ctx.cr0.eq) goto loc_822E8A4C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120600
	ctx.lr = 0x822E8A34;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,8
	r29.u64 = r29.u64 | 8;
	// bl 0x8219e1a0
	ctx.lr = 0x822E8A48;
	sub_8219E1A0(ctx, base);
	// b 0x822e8a50
	goto loc_822E8A50;
loc_822E8A4C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_822E8A50:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x822E8A60;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e8a78
	if (ctx.cr0.eq) goto loc_822E8A78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x822E8A78;
	sub_82120AC0(ctx, base);
loc_822E8A78:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822E8A80;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e8aa0
	if (ctx.cr0.eq) goto loc_822E8AA0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x822E8A98;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e8aa4
	goto loc_822E8AA4;
loc_822E8AA0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_822E8AA4:
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E8AB0;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x822E8AB8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e8b28
	if (ctx.cr0.eq) goto loc_822E8B28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r21,4(r30)
	REX_STORE_U32(r30.u32 + 4, r21.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r23,8(r30)
	REX_STORE_U32(r30.u32 + 8, r23.u32);
	// addi r10,r10,22008
	ctx.r10.s64 = ctx.r10.s64 + 22008;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x822E8AF0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e8b18
	if (ctx.cr0.eq) goto loc_822E8B18;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822e8b1c
	goto loc_822E8B1C;
loc_822E8B18:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822E8B1C:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822e8b2c
	goto loc_822E8B2C;
loc_822E8B28:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_822E8B2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E8B34;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x822E8B3C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e8bb8
	if (ctx.cr0.eq) goto loc_822E8BB8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,32576
	ctx.r11.s64 = ctx.r11.s64 + 32576;
	// stw r21,4(r30)
	REX_STORE_U32(r30.u32 + 4, r21.u32);
	// stw r23,8(r30)
	REX_STORE_U32(r30.u32 + 8, r23.u32);
	// addi r10,r10,-30864
	ctx.r10.s64 = ctx.r10.s64 + -30864;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x822E8B78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e8ba0
	if (ctx.cr0.eq) goto loc_822E8BA0;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-13900
	ctx.r9.s64 = ctx.r9.s64 + -13900;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822e8ba4
	goto loc_822E8BA4;
loc_822E8BA0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822E8BA4:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7a50
	ctx.lr = 0x822E8BB0;
	sub_822E7A50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822e8bbc
	goto loc_822E8BBC;
loc_822E8BB8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_822E8BBC:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E8BC8;
	sub_821D3988(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x822E8BD0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e8c0c
	if (ctx.cr0.eq) goto loc_822E8C0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r22,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r22.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,11888
	ctx.r11.s64 = ctx.r11.s64 + 11888;
	// stw r21,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r21.u32);
	// stw r23,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r23,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r23.u32);
	// stw r23,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r23.u32);
	// stw r23,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r23.u32);
	// stw r23,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r23.u32);
	// b 0x822e8c10
	goto loc_822E8C10;
loc_822E8C0C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_822E8C10:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822E8C1C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822E8C24;
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
	// beq 0x822e8ca0
	if (ctx.cr0.eq) goto loc_822E8CA0;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r11,r11,-2360
	ctx.r11.s64 = ctx.r11.s64 + -2360;
	// addi r4,r10,-17920
	ctx.r4.s64 = ctx.r10.s64 + -17920;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E8C68;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x822E8C74;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e8c94
	if (ctx.cr0.eq) goto loc_822E8C94;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822e8c98
	goto loc_822E8C98;
loc_822E8C94:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822E8C98:
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822e8ca4
	goto loc_822E8CA4;
loc_822E8CA0:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_822E8CA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x822E8CB0;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x822E8CC0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822E8CC8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822e8d34
	if (ctx.cr0.eq) goto loc_822E8D34;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r11,r11,-30880
	ctx.r11.s64 = ctx.r11.s64 + -30880;
	// addi r4,r10,-17912
	ctx.r4.s64 = ctx.r10.s64 + -17912;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822E8CFC;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x822E8D08;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e8d28
	if (ctx.cr0.eq) goto loc_822E8D28;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822e8d2c
	goto loc_822E8D2C;
loc_822E8D28:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822E8D2C:
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822e8d38
	goto loc_822E8D38;
loc_822E8D34:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_822E8D38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x822E8D44;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x822E8D54;
	sub_82264568(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120600
	ctx.lr = 0x822E8D60;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lfs f1,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x821db828
	ctx.lr = 0x822E8D70;
	sub_821DB828(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x822E8D80;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8230F560) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230f5d0
	if (ctx.cr6.eq) goto loc_8230F5D0;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f5d0
	if (ctx.cr6.eq) goto loc_8230F5D0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8230f5b4
	if (ctx.cr6.lt) goto loc_8230F5B4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8230f5b4
	if (ctx.cr6.eq) goto loc_8230F5B4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230f5a8
	if (!ctx.cr6.gt) goto loc_8230F5A8;
loc_8230F598:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8230f5b4
	if (ctx.cr6.eq) goto loc_8230F5B4;
	// bdnz 0x8230f598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F598;
loc_8230F5A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8230f5b8
	if (!ctx.cr6.eq) goto loc_8230F5B8;
loc_8230F5B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F5B8:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r11,91
	ctx.r11.s64 = 91;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_8230F5D0:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82312998) {
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
	ctx.lr = 0x823129A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r28,r3,128
	r28.s64 = ctx.r3.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823129d0
	if (!ctx.cr6.eq) goto loc_823129D0;
	// li r29,0
	r29.s64 = 0;
loc_823129D0:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312a54
	if (ctx.cr6.eq) goto loc_82312A54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f3d8
	ctx.lr = 0x823129E4;
	sub_8233F3D8(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x823129fc
	if (ctx.cr6.eq) goto loc_823129FC;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x823129fc
	if (ctx.cr6.eq) goto loc_823129FC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82312a88
	if (!ctx.cr6.eq) goto loc_82312A88;
loc_823129FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312a54
	if (ctx.cr0.eq) goto loc_82312A54;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8233efc0
	ctx.lr = 0x82312A18;
	sub_8233EFC0(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82312a30
	if (ctx.cr6.eq) goto loc_82312A30;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82312a30
	if (ctx.cr6.eq) goto loc_82312A30;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82312a88
	if (!ctx.cr6.eq) goto loc_82312A88;
loc_82312A30:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233f0d8
	ctx.lr = 0x82312A3C;
	sub_8233F0D8(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82312a54
	if (ctx.cr6.eq) goto loc_82312A54;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82312a54
	if (ctx.cr6.eq) goto loc_82312A54;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82312a88
	if (!ctx.cr6.eq) goto loc_82312A88;
loc_82312A54:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82312a6c
	if (!ctx.cr6.eq) goto loc_82312A6C;
	// li r29,0
	r29.s64 = 0;
loc_82312A6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r11,r30,124
	ctx.r11.s64 = r30.s64 + 124;
	// bne cr6,0x82312a7c
	if (!ctx.cr6.eq) goto loc_82312A7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82312A7C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823129d0
	if (!ctx.cr6.eq) goto loc_823129D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82312A88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82316710) {
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
	ctx.lr = 0x82316718;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r28,40(r31)
	REX_STORE_U64(r31.u32 + 40, r28.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231682c
	if (ctx.cr0.eq) goto loc_8231682C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10788(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10788);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823167B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823167C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823167d8
	if (!ctx.cr0.eq) goto loc_823167D8;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x823168d0
	goto loc_823168D0;
loc_823167D8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823167f8
	if (!ctx.cr6.gt) goto loc_823167F8;
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ble cr6,0x823167fc
	if (!ctx.cr6.gt) goto loc_823167FC;
loc_823167F8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_823167FC:
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r29.u64, ctx.xer);
	// blt cr6,0x8231682c
	if (ctx.cr6.lt) goto loc_8231682C;
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// ble cr6,0x82316828
	if (!ctx.cr6.gt) goto loc_82316828;
	// divdu r10,r11,r29
	ctx.r10.u64 = r29.u64 ? ctx.r11.u64 / r29.u64 : 0;
	// tdllei r29,0
	if (r29.s64 == 0ll || r29.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r10,r10,r29
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * r29.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// b 0x8231682c
	goto loc_8231682C;
loc_82316828:
	// std r28,40(r31)
	REX_STORE_U64(r31.u32 + 40, r28.u64);
loc_8231682C:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82316858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82316870
	if (ctx.cr6.gt) goto loc_82316870;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82316870:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823168b4
	if (ctx.cr0.eq) goto loc_823168B4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231688C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231689C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823168ac
	if (!ctx.cr0.eq) goto loc_823168AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823168b8
	goto loc_823168B8;
loc_823168AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823168b8
	goto loc_823168B8;
loc_823168B4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_823168B8:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ld r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82315720
	ctx.lr = 0x823168D0;
	sub_82315720(ctx, base);
loc_823168D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82326360) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823265C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823265D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823265f4
	if (ctx.cr6.eq) goto loc_823265F4;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x823265f8
	goto loc_823265F8;
loc_823265F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823265F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82326614
	if (!ctx.cr6.eq) goto loc_82326614;
	// li r6,48
	ctx.r6.s64 = 48;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82326614;
	sub_82331A00(ctx, base);
loc_82326614:
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// b 0x82326650
	goto loc_82326650;
loc_82326620:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82326630
	if (!ctx.cr6.eq) goto loc_82326630;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326630:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823266e4
	if (!ctx.cr0.eq) goto loc_823266E4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82326650:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82326620
	if (!ctx.cr6.eq) goto loc_82326620;
	// lwz r31,24(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// b 0x82326694
	goto loc_82326694;
loc_82326664:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82326674
	if (!ctx.cr6.eq) goto loc_82326674;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326674:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823266e4
	if (!ctx.cr0.eq) goto loc_823266E4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82326694:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82326664
	if (!ctx.cr6.eq) goto loc_82326664;
	// lwz r31,36(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r30,r29,36
	r30.s64 = r29.s64 + 36;
	// b 0x823266d8
	goto loc_823266D8;
loc_823266A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823266b8
	if (!ctx.cr6.eq) goto loc_823266B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823266B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823266CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823266e4
	if (!ctx.cr0.eq) goto loc_823266E4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823266D8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823266a8
	if (!ctx.cr6.eq) goto loc_823266A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823266E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232E4E0) {
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
	ctx.lr = 0x8232E4E8;
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8232e524
	if (ctx.cr6.eq) goto loc_8232E524;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232e524
	if (ctx.cr6.eq) goto loc_8232E524;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// bne cr6,0x8232e528
	if (!ctx.cr6.eq) goto loc_8232E528;
loc_8232E524:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8232E528:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232e72c
	if (ctx.cr0.eq) goto loc_8232E72C;
	// lbz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 48);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8232e620
	if (ctx.cr0.eq) goto loc_8232E620;
	// ld r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 56);
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8232e57c
	if (!ctx.cr6.eq) goto loc_8232E57C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232e57c
	if (ctx.cr6.eq) goto loc_8232E57C;
	// ld r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// ld r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// bl 0x823300c0
	ctx.lr = 0x8232E574;
	sub_823300C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e730
	if (!ctx.cr0.eq) goto loc_8232E730;
loc_8232E57C:
	// ld r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 56);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8232e72c
	if (ctx.cr6.eq) goto loc_8232E72C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r30,64(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// lfs f30,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lfs f31,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// ble cr6,0x8232e5e4
	if (!ctx.cr6.gt) goto loc_8232E5E4;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x8232e5e4
	if (ctx.cr6.lt) goto loc_8232E5E4;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// ble cr6,0x8232e5e0
	if (!ctx.cr6.gt) goto loc_8232E5E0;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x826a2d40
	ctx.lr = 0x8232E5C4;
	sub_826A2D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64));
	// bl 0x826a2d40
	ctx.lr = 0x8232E5D0;
	sub_826A2D40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8232e5e4
	if (ctx.cr6.lt) goto loc_8232E5E4;
loc_8232E5E0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_8232E5E4:
	// fsubs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82330078
	ctx.lr = 0x8232E5FC;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e730
	if (!ctx.cr0.eq) goto loc_8232E730;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x8232e72c
	if (!ctx.cr6.eq) goto loc_8232E72C;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8232e238
	ctx.lr = 0x8232E614;
	sub_8232E238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232e72c
	if (ctx.cr0.eq) goto loc_8232E72C;
	// b 0x8232e730
	goto loc_8232E730;
loc_8232E620:
	// lbz r10,49(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 49);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8232e72c
	if (ctx.cr0.eq) goto loc_8232E72C;
	// ld r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 56);
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r29,16(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8232e66c
	if (!ctx.cr6.eq) goto loc_8232E66C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232e66c
	if (ctx.cr6.eq) goto loc_8232E66C;
	// ld r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// ld r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// bl 0x823300c0
	ctx.lr = 0x8232E664;
	sub_823300C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e730
	if (!ctx.cr0.eq) goto loc_8232E730;
loc_8232E66C:
	// ld r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 56);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8232e72c
	if (ctx.cr6.eq) goto loc_8232E72C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lfs f1,8516(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8516);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 56);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r30,64(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8232e6f4
	if (!ctx.cr6.gt) goto loc_8232E6F4;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x8232e6f4
	if (ctx.cr6.lt) goto loc_8232E6F4;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// ble cr6,0x8232e6f0
	if (!ctx.cr6.gt) goto loc_8232E6F0;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x826a2d40
	ctx.lr = 0x8232E6D4;
	sub_826A2D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// bl 0x826a2d40
	ctx.lr = 0x8232E6E0;
	sub_826A2D40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8232e6f4
	if (ctx.cr6.lt) goto loc_8232E6F4;
loc_8232E6F0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_8232E6F4:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f30,f13,f12,f0
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82330078
	ctx.lr = 0x8232E70C;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e730
	if (!ctx.cr0.eq) goto loc_8232E730;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x8232e72c
	if (!ctx.cr6.eq) goto loc_8232E72C;
	// stb r28,49(r31)
	REX_STORE_U8(r31.u32 + 49, r28.u8);
	// stb r28,48(r31)
	REX_STORE_U8(r31.u32 + 48, r28.u8);
	// std r28,64(r31)
	REX_STORE_U64(r31.u32 + 64, r28.u64);
	// std r28,56(r31)
	REX_STORE_U64(r31.u32 + 56, r28.u64);
loc_8232E72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E730:
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

DEFINE_REX_FUNC(sub_82349670) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82349680
	if (ctx.cr6.eq) goto loc_82349680;
	// lfs f0,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82349680:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82349690
	if (ctx.cr6.eq) goto loc_82349690;
	// lfs f0,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82349690:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823496a0
	if (ctx.cr6.eq) goto loc_823496A0;
	// lfs f0,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_823496A0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823496b0
	if (ctx.cr6.eq) goto loc_823496B0;
	// lwz r11,268(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_823496B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234BDC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234bdd8
	if (!ctx.cr6.eq) goto loc_8234BDD8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234BDD8:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234bdec
	if (!ctx.cr6.eq) goto loc_8234BDEC;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234BDEC:
	// lfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234CEC8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234cee0
	if (!ctx.cr6.eq) goto loc_8234CEE0;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234CEE0:
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234cef8
	if (!ctx.cr6.eq) goto loc_8234CEF8;
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
loc_8234CEF8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234cf08
	if (!ctx.cr6.eq) goto loc_8234CF08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234CF08:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stw r10,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,356(r11)
	REX_STORE_U32(ctx.r11.u32 + 356, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, ctx.r6.u32);
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234E580) {
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
	ctx.lr = 0x8234E588;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e5b0
	if (!ctx.cr6.eq) goto loc_8234E5B0;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234E5B0:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234e5cc
	if (!ctx.cr6.eq) goto loc_8234E5CC;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234E5CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234e6cc
	if (ctx.cr6.lt) goto loc_8234E6CC;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x8234e6cc
	if (ctx.cr6.lt) goto loc_8234E6CC;
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// blt cr6,0x8234e6cc
	if (ctx.cr6.lt) goto loc_8234E6CC;
	// lfs f0,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8234e604
	if (!ctx.cr6.eq) goto loc_8234E604;
	// lfs f0,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// beq cr6,0x8234e6c0
	if (ctx.cr6.eq) goto loc_8234E6C0;
loc_8234E604:
	// rlwinm r11,r11,0,5,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F00000;
	// stfs f1,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f2,332(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// rlwinm r11,r11,0,10,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFC3FFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e688
	if (!ctx.cr6.eq) goto loc_8234E688;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,21360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21360);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234e688
	if (!ctx.cr6.eq) goto loc_8234E688;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e670
	if (!ctx.cr6.gt) goto loc_8234E670;
loc_8234E63C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8234e65c
	if (!ctx.cr6.eq) goto loc_8234E65C;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8234E65C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234e63c
	if (ctx.cr6.lt) goto loc_8234E63C;
loc_8234E670:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234E688:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// bl 0x8234dcf8
	ctx.lr = 0x8234E6A4;
	sub_8234DCF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234e6d0
	if (!ctx.cr6.eq) goto loc_8234E6D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234bbc8
	ctx.lr = 0x8234E6BC;
	sub_8234BBC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8234E6C0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234E6CC:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8234E6D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82356778) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82356788
	if (!ctx.cr6.eq) goto loc_82356788;
loc_82356780:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82356788:
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,460
	ctx.r10.s64 = ctx.r3.s64 + 460;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82356780
	if (ctx.cr6.lt) goto loc_82356780;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82356780
	if (ctx.cr6.eq) goto loc_82356780;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823567bc
	if (!ctx.cr6.gt) goto loc_823567BC;
loc_823567AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82356780
	if (ctx.cr6.eq) goto loc_82356780;
	// bdnz 0x823567ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823567AC;
loc_823567BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356780
	if (ctx.cr6.eq) goto loc_82356780;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823588F0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82359BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82359BF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r6,r10,9656
	ctx.r6.s64 = ctx.r10.s64 + 9656;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r5,r7,10972
	ctx.r5.s64 = ctx.r7.s64 + 10972;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r29,r3,96
	r29.s64 = ctx.r3.s64 + 96;
	// lwz r10,1012(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 1012);
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// stb r30,44(r31)
	REX_STORE_U8(r31.u32 + 44, r30.u8);
	// stb r30,45(r31)
	REX_STORE_U8(r31.u32 + 45, r30.u8);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r9,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// stb r30,80(r31)
	REX_STORE_U8(r31.u32 + 80, r30.u8);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// bl 0x8233e6b8
	ctx.lr = 0x82359C9C;
	sub_8233E6B8(ctx, base);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8235F4C8) {
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
	// bl 0x8234a268
	ctx.lr = 0x8235F4E0;
	sub_8234A268(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10784
	ctx.r9.s64 = ctx.r10.s64 + 10784;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// std r11,320(r31)
	REX_STORE_U64(r31.u32 + 320, ctx.r11.u64);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r8,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// stw r7,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r7.u32);
	// stw r6,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r6.u32);
	// std r11,336(r31)
	REX_STORE_U64(r31.u32 + 336, ctx.r11.u64);
	// std r11,312(r31)
	REX_STORE_U64(r31.u32 + 312, ctx.r11.u64);
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x8235F538;
	sub_823EF5F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82362460) {
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
	// bne cr6,0x8236247c
	if (!ctx.cr6.eq) goto loc_8236247C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236247C:
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// bl 0x823bbff0
	ctx.lr = 0x82362484;
	sub_823BBFF0(ctx, base);
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

DEFINE_REX_FUNC(sub_82363F30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82363f40
	if (!ctx.cr6.eq) goto loc_82363F40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82363F40:
	// b 0x82363cf0
	sub_82363CF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823648E8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823648f8
	if (!ctx.cr6.eq) goto loc_823648F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823648F8:
	// b 0x823640f0
	sub_823640F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82364BA8) {
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
	ctx.lr = 0x82364BB0;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r26,r4,4
	r26.s64 = ctx.r4.s64 + 4;
	// addi r25,r5,4
	r25.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82364c4c
	if (ctx.cr6.eq) goto loc_82364C4C;
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364c04
	if (!ctx.cr6.eq) goto loc_82364C04;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82364BF8;
	sub_823EF2F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82364C04:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bgt cr6,0x82364c14
	if (ctx.cr6.gt) goto loc_82364C14;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82364c28
	if (ctx.cr6.eq) goto loc_82364C28;
loc_82364C14:
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82364C28;
	sub_823EF2F8(ctx, base);
loc_82364C28:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lhz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 36);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r27,312
	ctx.r3.s64 = r27.s64 + 312;
	// bl 0x823bd6f0
	ctx.lr = 0x82364C4C;
	sub_823BD6F0(ctx, base);
loc_82364C4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8236B300) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8236b318
	if (ctx.cr6.eq) goto loc_8236B318;
	// stfs f1,284(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// blr 
	return;
loc_8236B318:
	// stfs f1,312(0)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(312, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236C7F0) {
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
	// addi r31,r11,7688
	r31.s64 = ctx.r11.s64 + 7688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8236C818;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,15204
	ctx.r4.s64 = ctx.r10.s64 + 15204;
	// bl 0x82331480
	ctx.lr = 0x8236C828;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// addi r9,r11,7304
	ctx.r9.s64 = ctx.r11.s64 + 7304;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r10,r10,-14376
	ctx.r10.s64 = ctx.r10.s64 + -14376;
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
	// addi r11,r4,-15016
	ctx.r11.s64 = ctx.r4.s64 + -15016;
	// addi r10,r5,-14944
	ctx.r10.s64 = ctx.r5.s64 + -14944;
	// li r9,8
	ctx.r9.s64 = 8;
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
	// addi r11,r6,-14920
	ctx.r11.s64 = ctx.r6.s64 + -14920;
	// addi r10,r7,-14896
	ctx.r10.s64 = ctx.r7.s64 + -14896;
	// addi r9,r8,16224
	ctx.r9.s64 = ctx.r8.s64 + 16224;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,800
	ctx.r9.s64 = 800;
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

DEFINE_REX_FUNC(sub_82374580) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374590
	if (!ctx.cr6.eq) goto loc_82374590;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374590:
	// b 0x82373a90
	sub_82373A90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374910) {
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
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-7920(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7920);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-7920(r10)
	REX_STORE_U32(ctx.r10.u32 + -7920, ctx.r11.u32);
	// bne 0x82374944
	if (!ctx.cr0.eq) goto loc_82374944;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r3,-7928(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -7928);
	// bl 0x823bedc0
	ctx.lr = 0x82374944;
	sub_823BEDC0(ctx, base);
loc_82374944:
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwz r11,-7916(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7916);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-7916(r10)
	REX_STORE_U32(ctx.r10.u32 + -7916, ctx.r11.u32);
	// bne 0x82374964
	if (!ctx.cr0.eq) goto loc_82374964;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r3,-7924(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -7924);
	// bl 0x823bedc0
	ctx.lr = 0x82374964;
	sub_823BEDC0(ctx, base);
loc_82374964:
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82374998
	if (ctx.cr6.eq) goto loc_82374998;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,17640
	ctx.r5.s64 = ctx.r10.s64 + 17640;
	// li r6,293
	ctx.r6.s64 = 293;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82374990;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r9.u32);
loc_82374998:
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

DEFINE_REX_FUNC(sub_82379FA0) {
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
	ctx.lr = 0x82379FA8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// addi r27,r11,18240
	r27.s64 = ctx.r11.s64 + 18240;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82379fe8
	if (ctx.cr6.eq) goto loc_82379FE8;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,717
	ctx.r6.s64 = 717;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82379FE4;
	sub_82330D00(ctx, base);
	// stw r24,32(r31)
	REX_STORE_U32(r31.u32 + 32, r24.u32);
loc_82379FE8:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237a104
	if (ctx.cr6.eq) goto loc_8237A104;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237a0e4
	if (!ctx.cr6.gt) goto loc_8237A0E4;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8237A008:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237a0a4
	if (ctx.cr6.eq) goto loc_8237A0A4;
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237a080
	if (!ctx.cr6.gt) goto loc_8237A080;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8237A030:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// lwz r4,64(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237a064
	if (ctx.cr6.eq) goto loc_8237A064;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,738
	ctx.r6.s64 = 738;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237A064;
	sub_82330D00(ctx, base);
loc_8237A064:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,68
	r29.s64 = r29.s64 + 68;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237a030
	if (ctx.cr6.lt) goto loc_8237A030;
loc_8237A080:
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// li r6,742
	ctx.r6.s64 = 742;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,268(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// bl 0x82330d00
	ctx.lr = 0x8237A0A4;
	sub_82330D00(ctx, base);
loc_8237A0A4:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,276(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237a0d0
	if (ctx.cr6.eq) goto loc_8237A0D0;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,746
	ctx.r6.s64 = 746;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237A0D0;
	sub_82330D00(ctx, base);
loc_8237A0D0:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,280
	r30.s64 = r30.s64 + 280;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237a008
	if (ctx.cr6.lt) goto loc_8237A008;
loc_8237A0E4:
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r6,750
	ctx.r6.s64 = 750;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237A100;
	sub_82330D00(ctx, base);
	// stw r24,272(r31)
	REX_STORE_U32(r31.u32 + 272, r24.u32);
loc_8237A104:
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237a12c
	if (ctx.cr6.eq) goto loc_8237A12C;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,756
	ctx.r6.s64 = 756;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237A128;
	sub_82330D00(ctx, base);
	// stw r24,284(r31)
	REX_STORE_U32(r31.u32 + 284, r24.u32);
loc_8237A12C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8238F668) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,640(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8238f69c
	if (!ctx.cr6.lt) goto loc_8238F69C;
	// lbz r9,644(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 644);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// lwz r9,640(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8238f69c
	if (!ctx.cr6.gt) goto loc_8238F69C;
	// stw r9,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
loc_8238F69C:
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r9,640(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8238f6d0
	if (!ctx.cr6.gt) goto loc_8238F6D0;
	// lbz r10,644(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 644);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// lwz r10,640(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8238f6d0
	if (!ctx.cr6.lt) goto loc_8238F6D0;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
loc_8238F6D0:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82392CE8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82392cf8
	if (!ctx.cr6.eq) goto loc_82392CF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82392CF8:
	// b 0x82392940
	sub_82392940(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823937D8) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,256(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 256);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82393840
	if (ctx.cr6.gt) goto loc_82393840;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14352
	ctx.r12.s64 = ctx.r12.s64 + 14352;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82393854;
	case 1:
		goto loc_82393854;
	case 2:
		goto loc_82393854;
	case 3:
		goto loc_82393854;
	case 4:
		goto loc_82393854;
	case 5:
		goto loc_82393854;
	case 6:
		goto loc_82393854;
	case 7:
		goto loc_82393854;
	case 8:
		goto loc_82393854;
	case 9:
		goto loc_82393854;
	case 10:
		goto loc_82393854;
	case 11:
		goto loc_82393854;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82393840:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82393854:
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,256(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// lwz r9,260(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82393988
	if (ctx.cr6.gt) goto loc_82393988;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14464
	ctx.r12.s64 = ctx.r12.s64 + 14464;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823938E8;
	case 1:
		goto loc_823938B0;
	case 2:
		goto loc_823938B8;
	case 3:
		goto loc_823938C0;
	case 4:
		goto loc_823938C8;
	case 5:
		goto loc_823938C8;
	case 6:
		goto loc_823938E8;
	case 7:
		goto loc_823938E8;
	case 8:
		goto loc_823938E8;
	case 9:
		goto loc_823938E8;
	case 10:
		goto loc_823938E8;
	case 11:
		goto loc_823938E8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823938B0:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823938cc
	goto loc_823938CC;
loc_823938B8:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823938cc
	goto loc_823938CC;
loc_823938C0:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x823938cc
	goto loc_823938CC;
loc_823938C8:
	// li r10,32
	ctx.r10.s64 = 32;
loc_823938CC:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r8,r10,r11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r11.u64);
	// rldicl r7,r8,61,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// b 0x8239398c
	goto loc_8239398C;
loc_823938E8:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14592
	ctx.r12.s64 = ctx.r12.s64 + 14592;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8239397C;
	case 1:
		goto loc_82393988;
	case 2:
		goto loc_82393988;
	case 3:
		goto loc_82393988;
	case 4:
		goto loc_82393988;
	case 5:
		goto loc_82393988;
	case 6:
		goto loc_82393930;
	case 7:
		goto loc_82393948;
	case 8:
		goto loc_82393964;
	case 9:
		goto loc_8239398C;
	case 10:
		goto loc_8239398C;
	case 11:
		goto loc_8239398C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82393930:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// b 0x8239398c
	goto loc_8239398C;
loc_82393948:
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// b 0x8239398c
	goto loc_8239398C;
loc_82393964:
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// b 0x8239398c
	goto loc_8239398C;
loc_8239397C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// b 0x8239398c
	goto loc_8239398C;
loc_82393988:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8239398C:
	// lwz r10,188(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82340e38
	ctx.lr = 0x823939A0;
	sub_82340E38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A05F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823A0600;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a0644
	if (!ctx.cr6.gt) goto loc_823A0644;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_823A0620:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A0634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a0620
	if (ctx.cr6.lt) goto loc_823A0620;
loc_823A0644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A21B8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,21556
	ctx.r6.s64 = ctx.r8.s64 + 21556;
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// mulli r10,r7,61
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(61));
	// lwz r11,1012(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,197
	ctx.r7.s64 = 197;
	// addi r5,r10,17
	ctx.r5.s64 = ctx.r10.s64 + 17;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e48
	ctx.lr = 0x823A2204;
	sub_82330E48(ctx, base);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a2230
	if (!ctx.cr6.eq) goto loc_823A2230;
	// addi r10,r11,17
	ctx.r10.s64 = ctx.r11.s64 + 17;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_823A2230:
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

DEFINE_REX_FUNC(sub_823A6A80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// lfs f0,148(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a6b2c
	if (!ctx.cr6.gt) goto loc_823A6B2C;
	// addi r7,r4,104
	ctx.r7.s64 = ctx.r4.s64 + 104;
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// subf r6,r3,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_823A6AB0:
	// lhz r11,38(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 38);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823a6b10
	if (!ctx.cr6.gt) goto loc_823A6B10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A6AC8:
	// lwzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// sthx r3,r31,r11
	REX_STORE_U16(r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwz r3,-32(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + -32);
	// lhzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lwz r31,32(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// sthx r3,r31,r11
	REX_STORE_U16(r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lhzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lwz r31,64(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// sthx r3,r31,r11
	REX_STORE_U16(r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r3,38(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 38);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823a6ac8
	if (ctx.cr6.lt) goto loc_823A6AC8;
loc_823A6B10:
	// lhz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 36);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a6ab0
	if (ctx.cr6.lt) goto loc_823A6AB0;
loc_823A6B2C:
	// lhz r11,144(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 144);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,144(r8)
	REX_STORE_U16(ctx.r8.u32 + 144, ctx.r11.u16);
	// lhz r10,146(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 146);
	// sth r10,146(r8)
	REX_STORE_U16(ctx.r8.u32 + 146, ctx.r10.u16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ABF80) {
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
	ctx.lr = 0x823ABF88;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,6048
	r27.s64 = ctx.r11.s64 + 6048;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,-26720(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -26720);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823abfcc
	if (!ctx.cr6.eq) goto loc_823ABFCC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,-26720(r10)
	REX_STORE_U32(ctx.r10.u32 + -26720, ctx.r11.u32);
	// bl 0x82359ef0
	ctx.lr = 0x823ABFCC;
	sub_82359EF0(ctx, base);
loc_823ABFCC:
	// lwz r28,84(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x823abfe4
	if (!ctx.cr6.eq) goto loc_823ABFE4;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_823ABFE4:
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(r31.s32, 128, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(r31.s32, 256, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(r31.s32, 512, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,2048
	ctx.cr6.compare<int32_t>(r31.s32, 2048, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,4096
	ctx.cr6.compare<int32_t>(r31.s32, 4096, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,8192
	ctx.cr6.compare<int32_t>(r31.s32, 8192, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(r31.s32, 16384, ctx.xer);
	// beq cr6,0x823ac034
	if (ctx.cr6.eq) goto loc_823AC034;
loc_823AC028:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_823AC034:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac048
	if (ctx.cr6.eq) goto loc_823AC048;
	// lwz r30,72(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x823ac058
	goto loc_823AC058;
loc_823AC048:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac0ec
	if (ctx.cr6.eq) goto loc_823AC0EC;
	// lwz r30,140(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
loc_823AC058:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// bge cr6,0x823ac028
	if (!ctx.cr6.lt) goto loc_823AC028;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82354980
	ctx.lr = 0x823AC068;
	sub_82354980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac0f0
	if (!ctx.cr6.eq) goto loc_823AC0F0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823548e8
	ctx.lr = 0x823AC084;
	sub_823548E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac0f0
	if (!ctx.cr6.eq) goto loc_823AC0F0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823ac028
	if (ctx.cr6.gt) goto loc_823AC028;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82333b20
	ctx.lr = 0x823AC0A8;
	sub_82333B20(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf. r5,r31,r11
	ctx.r5.u64 = ctx.r11.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bge 0x823ac0c4
	if (!ctx.cr0.lt) goto loc_823AC0C4;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
loc_823AC0C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x8235a348
	ctx.lr = 0x823AC0E4;
	sub_8235A348(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_823AC0EC:
	// li r3,36
	ctx.r3.s64 = 36;
loc_823AC0F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823BE1E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32528);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// b 0x823be088
	sub_823BE088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BEB90) {
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
	ctx.lr = 0x823BEB98;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,16(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,32584
	r27.s64 = ctx.r11.s64 + 32584;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r24,1
	r24.s64 = 1;
	// addi r11,r27,6
	ctx.r11.s64 = r27.s64 + 6;
loc_823BEBBC:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823bec70
	if (!ctx.cr6.lt) goto loc_823BEC70;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823bec4c
	if (!ctx.cr6.lt) goto loc_823BEC4C;
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823bec54
	if (!ctx.cr6.lt) goto loc_823BEC54;
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823bec5c
	if (!ctx.cr6.lt) goto loc_823BEC5C;
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823bec64
	if (!ctx.cr6.lt) goto loc_823BEC64;
	// lhz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823bec6c
	if (!ctx.cr6.lt) goto loc_823BEC6C;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r27,54
	ctx.r9.s64 = r27.s64 + 54;
	// addi r24,r24,6
	r24.s64 = r24.s64 + 6;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823bebbc
	if (ctx.cr6.lt) goto loc_823BEBBC;
	// b 0x823bec70
	goto loc_823BEC70;
loc_823BEC4C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x823bec70
	goto loc_823BEC70;
loc_823BEC54:
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// b 0x823bec70
	goto loc_823BEC70;
loc_823BEC5C:
	// addi r24,r24,3
	r24.s64 = r24.s64 + 3;
	// b 0x823bec70
	goto loc_823BEC70;
loc_823BEC64:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x823bec70
	goto loc_823BEC70;
loc_823BEC6C:
	// addi r24,r24,5
	r24.s64 = r24.s64 + 5;
loc_823BEC70:
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,62
	ctx.r5.s64 = 62;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,-31680
	ctx.r4.s64 = ctx.r9.s64 + -31680;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82331180
	ctx.lr = 0x823BEC98;
	sub_82331180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bedb4
	if (ctx.cr6.eq) goto loc_823BEDB4;
	// addi r28,r27,72
	r28.s64 = r27.s64 + 72;
	// li r30,0
	r30.s64 = 0;
loc_823BECA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823bed78
	if (!ctx.cr6.gt) goto loc_823BED78;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_823BECC8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r6,2(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// lwz r23,12(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// lhz r7,2(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mullw r7,r7,r26
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r26.s32);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823bed68
	if (!ctx.cr6.lt) goto loc_823BED68;
	// lhz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r23,20(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsh r22,r6
	r22.s64 = ctx.r6.s16;
	// mullw r6,r23,r30
	ctx.r6.s64 = int64_t(r23.s32) * int64_t(r30.s32);
	// subf r23,r22,r11
	r23.u64 = ctx.r11.u64 - r22.u64;
	// subf r11,r22,r7
	ctx.r11.u64 = ctx.r7.u64 - r22.u64;
	// srawi r22,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r22.s64 = r23.s32 >> 1;
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addze r11,r22
	temp.s64 = r22.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r22.u32;
	ctx.r11.s64 = temp.s64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r22,r6,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r7,r23
	ctx.r11.u64 = uint32_t((r23.s32 && !(ctx.r7.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r7.s32 / r23.s32 : 0);
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r4,r7,128
	ctx.r4.s64 = ctx.r7.s64 + 128;
	// andc r7,r23,r6
	ctx.r7.u64 = r23.u64 & ~ctx.r6.u64;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// twllei r23,0
	if (r23.s32 == 0 || r23.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r7,r22,r3
	REX_STORE_U16(r22.u32 + ctx.r3.u32, ctx.r7.u16);
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x823bed6c
	goto loc_823BED6C;
loc_823BED68:
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_823BED6C:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x823becc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BECC8;
loc_823BED78:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r4,128
	ctx.r9.s64 = ctx.r4.s64 + 128;
	// addi r11,r27,72
	ctx.r11.s64 = r27.s64 + 72;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r7,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// addi r28,r28,100
	r28.s64 = r28.s64 + 100;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthx r5,r4,r3
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u16);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823beca8
	if (ctx.cr6.lt) goto loc_823BECA8;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_823BEDB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823CD858) {
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
	// bl 0x823e0758
	ctx.lr = 0x823CD878;
	sub_823E0758(ctx, base);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823cd8a4
	if (ctx.cr6.eq) goto loc_823CD8A4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823cd8a4
	if (ctx.cr6.eq) goto loc_823CD8A4;
loc_823CD890:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823cd8c0
	if (ctx.cr6.eq) goto loc_823CD8C0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823cd890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CD890;
loc_823CD8A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CD8A8:
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
loc_823CD8C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cd8a8
	goto loc_823CD8A8;
}

DEFINE_REX_FUNC(sub_823CE8E0) {
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
	ctx.lr = 0x823CE8E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823cea20
	if (ctx.cr6.eq) goto loc_823CEA20;
	// addi r4,r4,576
	ctx.r4.s64 = ctx.r4.s64 + 576;
	// bl 0x823e1a90
	ctx.lr = 0x823CE904;
	sub_823E1A90(ctx, base);
	// addi r4,r31,472
	ctx.r4.s64 = r31.s64 + 472;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e1ef8
	ctx.lr = 0x823CE910;
	sub_823E1EF8(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e0788
	ctx.lr = 0x823CE91C;
	sub_823E0788(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ce994
	if (ctx.cr6.eq) goto loc_823CE994;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ce994
	if (ctx.cr6.eq) goto loc_823CE994;
	// li r28,0
	r28.s64 = 0;
	// ble cr6,0x823ce97c
	if (!ctx.cr6.gt) goto loc_823CE97C;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_823CE944:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x823d02f8
	ctx.lr = 0x823CE954;
	sub_823D02F8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x823d01b8
	ctx.lr = 0x823CE964;
	sub_823D01B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ce944
	if (ctx.cr6.lt) goto loc_823CE944;
loc_823CE97C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x82393bf0
	ctx.lr = 0x823CE988;
	sub_82393BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x82393bf0
	ctx.lr = 0x823CE994;
	sub_82393BF0(ctx, base);
loc_823CE994:
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ce9a8
	if (ctx.cr6.eq) goto loc_823CE9A8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823CE9A8;
	sub_82393BF0(ctx, base);
loc_823CE9A8:
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ce9bc
	if (ctx.cr6.eq) goto loc_823CE9BC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823CE9BC;
	sub_82393BF0(ctx, base);
loc_823CE9BC:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ce9d0
	if (ctx.cr6.eq) goto loc_823CE9D0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823CE9D0;
	sub_82393BF0(ctx, base);
loc_823CE9D0:
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ce9e4
	if (ctx.cr6.eq) goto loc_823CE9E4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823CE9E4;
	sub_82393BF0(ctx, base);
loc_823CE9E4:
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e0930
	ctx.lr = 0x823CE9F0;
	sub_823E0930(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cea10
	if (ctx.cr6.eq) goto loc_823CEA10;
	// lwz r11,688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cea10
	if (ctx.cr6.eq) goto loc_823CEA10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CEA10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CEA10:
	// li r5,696
	ctx.r5.s64 = 696;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823CEA20;
	sub_823EF5F0(ctx, base);
loc_823CEA20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823D6618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823D6620;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,256
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 256, ctx.xer);
	// beq cr6,0x823d6644
	if (ctx.cr6.eq) goto loc_823D6644;
	// li r3,-104
	ctx.r3.s64 = -104;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823D6644:
	// li r8,256
	ctx.r8.s64 = 256;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r31,1036
	ctx.r9.s64 = r31.s64 + 1036;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r6,r31,5140
	ctx.r6.s64 = r31.s64 + 5140;
	// lfs f0,3716(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,5136
	ctx.r7.s64 = r31.s64 + 5136;
	// addi r8,r3,1024
	ctx.r8.s64 = ctx.r3.s64 + 1024;
	// subf r5,r31,r3
	ctx.r5.u64 = ctx.r3.u64 - r31.u64;
loc_823D6670:
	// lwz r4,1024(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsu f0,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfsu f13,-4(r8)
	ea = -4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfsu f10,-8(r7)
	ea = -8 + ctx.r7.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// stfsu f0,-8(r6)
	ea = -8 + ctx.r6.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lfsx f9,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d6670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6670;
	// addi r5,r31,5136
	ctx.r5.s64 = r31.s64 + 5136;
	// lwz r3,1036(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1036);
	// addi r4,r31,1040
	ctx.r4.s64 = r31.s64 + 1040;
	// bl 0x823e5e08
	ctx.lr = 0x823D66BC;
	sub_823E5E08(ctx, base);
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// addi r11,r31,5132
	ctx.r11.s64 = r31.s64 + 5132;
	// subf r7,r29,r30
	ctx.r7.u64 = r30.u64 - r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D66D4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r7,r10
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f7,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f6,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lfs f5,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f4,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lfs f3,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f2,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfs f1,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,32(r9)
	ea = 32 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfsu f0,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x823d66d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D66D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823DDCF8) {
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
	// bl 0x826a1c94
	ctx.lr = 0x823DDD00;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// xor r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// xor r30,r5,r11
	r30.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// lwz r8,8(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 8);
	// stw r10,-132(r1)
	REX_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r3,12(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 12);
	// stw r4,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r31,16(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 16);
	// stw r8,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// addis r7,r10,-10389
	ctx.r7.s64 = ctx.r10.s64 + -680853504;
	// lwz r26,20(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 20);
	// stw r3,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// addi r7,r7,-23432
	ctx.r7.s64 = ctx.r7.s64 + -23432;
	// stw r6,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// lwz r27,24(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rotlwi r10,r7,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// lwz r6,28(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 28);
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,32(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r29,36(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 36);
	// and r7,r30,r10
	ctx.r7.u64 = r30.u64 & ctx.r10.u64;
	// lwz r30,40(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 40);
	// xor r23,r11,r10
	r23.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r26,-148(r1)
	REX_STORE_U32(ctx.r1.u32 + -148, r26.u32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// stw r27,-136(r1)
	REX_STORE_U32(ctx.r1.u32 + -136, r27.u32);
	// stw r6,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addis r9,r4,-5944
	ctx.r9.s64 = ctx.r4.s64 + -389545984;
	// addi r9,r9,-18602
	ctx.r9.s64 = ctx.r9.s64 + -18602;
	// rotlwi r9,r9,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r7,r23,r9
	ctx.r7.u64 = r23.u64 & ctx.r9.u64;
	// xor r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addis r7,r8,9248
	ctx.r7.s64 = ctx.r8.s64 + 606076928;
	// addi r7,r7,28891
	ctx.r7.s64 = ctx.r7.s64 + 28891;
	// rotlwi r8,r7,17
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 17);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// xor r23,r9,r8
	r23.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addis r7,r3,-15938
	ctx.r7.s64 = ctx.r3.s64 + -1044512768;
	// addi r7,r7,-12562
	ctx.r7.s64 = ctx.r7.s64 + -12562;
	// rotlwi r7,r7,22
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 22);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// and r4,r23,r7
	ctx.r4.u64 = r23.u64 & ctx.r7.u64;
	// xor r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addis r4,r10,-2692
	ctx.r4.s64 = ctx.r10.s64 + -176422912;
	// addi r4,r4,4015
	ctx.r4.s64 = ctx.r4.s64 + 4015;
	// rotlwi r10,r4,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 7);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// xor r31,r7,r10
	r31.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + r26.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addis r4,r9,18312
	ctx.r4.s64 = ctx.r9.s64 + 1200095232;
	// addi r4,r4,-14806
	ctx.r4.s64 = ctx.r4.s64 + -14806;
	// rotlwi r9,r4,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r22,48(r24)
	r22.u64 = REX_LOAD_U32(r24.u32 + 48);
	// and r3,r31,r9
	ctx.r3.u64 = r31.u64 & ctx.r9.u64;
	// lwz r31,44(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 44);
	// xor r23,r9,r10
	r23.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwz r3,52(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 52);
	// mr r20,r22
	r20.u64 = r22.u64;
	// stw r22,-140(r1)
	REX_STORE_U32(ctx.r1.u32 + -140, r22.u32);
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + r27.u64;
	// rotlwi r22,r22,0
	r22.u64 = __builtin_rotateleft32(r22.u32, 0);
	// stw r20,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, r20.u32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addis r4,r8,-22480
	ctx.r4.s64 = ctx.r8.s64 + -1473249280;
	// addi r4,r4,17939
	ctx.r4.s64 = ctx.r4.s64 + 17939;
	// rotlwi r8,r4,17
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 17);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r4,r23,r8
	ctx.r4.u64 = r23.u64 & ctx.r8.u64;
	// lwz r23,60(r24)
	r23.u64 = REX_LOAD_U32(r24.u32 + 60);
	// xor r21,r9,r8
	r21.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lwz r4,56(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 56);
	// stw r23,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, r23.u32);
	// rotlwi r23,r23,0
	r23.u64 = __builtin_rotateleft32(r23.u32, 0);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,-697
	ctx.r6.s64 = ctx.r7.s64 + -45678592;
	// addi r6,r6,-27391
	ctx.r6.s64 = ctx.r6.s64 + -27391;
	// rotlwi r7,r6,22
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 22);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// and r6,r21,r7
	ctx.r6.u64 = r21.u64 & ctx.r7.u64;
	// xor r21,r8,r7
	r21.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,27009
	ctx.r6.s64 = ctx.r10.s64 + 1770061824;
	// addi r6,r6,-26408
	ctx.r6.s64 = ctx.r6.s64 + -26408;
	// rotlwi r10,r6,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// and r6,r21,r10
	ctx.r6.u64 = r21.u64 & ctx.r10.u64;
	// xor r21,r7,r10
	r21.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,-29883
	ctx.r6.s64 = ctx.r9.s64 + -1958412288;
	// addi r6,r6,-2129
	ctx.r6.s64 = ctx.r6.s64 + -2129;
	// rotlwi r9,r6,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r6,r21,r9
	ctx.r6.u64 = r21.u64 & ctx.r9.u64;
	// xor r21,r9,r10
	r21.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -65536;
	// addi r6,r6,23473
	ctx.r6.s64 = ctx.r6.s64 + 23473;
	// rotlwi r8,r6,17
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 17);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r6,r21,r8
	ctx.r6.u64 = r21.u64 & ctx.r8.u64;
	// xor r21,r9,r8
	r21.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,-30371
	ctx.r6.s64 = ctx.r7.s64 + -1990393856;
	// addi r6,r6,-10306
	ctx.r6.s64 = ctx.r6.s64 + -10306;
	// rotlwi r7,r6,22
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 22);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// and r6,r21,r7
	ctx.r6.u64 = r21.u64 & ctx.r7.u64;
	// xor r21,r8,r7
	r21.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + r22.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,27536
	ctx.r6.s64 = ctx.r10.s64 + 1804599296;
	// addi r6,r6,4386
	ctx.r6.s64 = ctx.r6.s64 + 4386;
	// rotlwi r10,r6,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// and r6,r21,r10
	ctx.r6.u64 = r21.u64 & ctx.r10.u64;
	// xor r22,r7,r10
	r22.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,-616
	ctx.r6.s64 = ctx.r9.s64 + -40370176;
	// addi r6,r6,29075
	ctx.r6.s64 = ctx.r6.s64 + 29075;
	// lwz r21,-156(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r20,-160(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// rotlwi r9,r6,12
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 12);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r9,r22,r6
	ctx.r9.u64 = r22.u64 & ctx.r6.u64;
	// xor r22,r6,r10
	r22.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r9,r8,-22919
	ctx.r9.s64 = ctx.r8.s64 + -1502019584;
	// addi r9,r9,17294
	ctx.r9.s64 = ctx.r9.s64 + 17294;
	// rotlwi r9,r9,17
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 17);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// and r8,r22,r9
	ctx.r8.u64 = r22.u64 & ctx.r9.u64;
	// lwz r22,-176(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + r23.u64;
	// lwz r23,-164(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addis r8,r7,18868
	ctx.r8.s64 = ctx.r7.s64 + 1236533248;
	// addi r8,r8,2081
	ctx.r8.s64 = ctx.r8.s64 + 2081;
	// rotlwi r8,r8,22
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 22);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + r23.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addis r7,r10,-2530
	ctx.r7.s64 = ctx.r10.s64 + -165806080;
	// addi r7,r7,9570
	ctx.r7.s64 = ctx.r7.s64 + 9570;
	// rotlwi r10,r7,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xor r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addis r7,r6,-16319
	ctx.r7.s64 = ctx.r6.s64 + -1069481984;
	// addi r7,r7,-19648
	ctx.r7.s64 = ctx.r7.s64 + -19648;
	// rotlwi r7,r7,9
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 9);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// and r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ctx.r8.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,9822
	ctx.r6.s64 = ctx.r9.s64 + 643694592;
	// addi r6,r6,23121
	ctx.r6.s64 = ctx.r6.s64 + 23121;
	// rotlwi r9,r6,14
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 14);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + r22.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,-5705
	ctx.r6.s64 = ctx.r8.s64 + -373882880;
	// addi r6,r6,-14422
	ctx.r6.s64 = ctx.r6.s64 + -14422;
	// rotlwi r8,r6,20
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 20);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// and r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 & ctx.r7.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,-10705
	ctx.r6.s64 = ctx.r10.s64 + -701562880;
	// addi r6,r6,4189
	ctx.r6.s64 = ctx.r6.s64 + 4189;
	// rotlwi r10,r6,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,580
	ctx.r6.s64 = ctx.r7.s64 + 38010880;
	// addi r6,r6,5203
	ctx.r6.s64 = ctx.r6.s64 + 5203;
	// rotlwi r7,r6,9
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 9);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// and r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ctx.r8.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + r21.u64;
	// lwz r27,-168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r26,-144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r23,-172(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r24,60(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 60);
	// addis r6,r9,-10078
	ctx.r6.s64 = ctx.r9.s64 + -660471808;
	// lwz r22,-152(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lwz r21,-148(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// addi r6,r6,-6527
	ctx.r6.s64 = ctx.r6.s64 + -6527;
	// rotlwi r9,r6,14
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 14);
	// stw r24,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, r24.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// add r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 + r20.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,-6188
	ctx.r6.s64 = ctx.r8.s64 + -405536768;
	// addi r6,r6,-1080
	ctx.r6.s64 = ctx.r6.s64 + -1080;
	// rotlwi r8,r6,20
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 20);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// and r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 & ctx.r7.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,8674
	ctx.r6.s64 = ctx.r10.s64 + 568459264;
	// addi r6,r6,-12826
	ctx.r6.s64 = ctx.r6.s64 + -12826;
	// rotlwi r10,r6,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,-15561
	ctx.r6.s64 = ctx.r7.s64 + -1019805696;
	// addi r6,r6,2006
	ctx.r6.s64 = ctx.r6.s64 + 2006;
	// rotlwi r7,r6,9
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 9);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// and r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ctx.r8.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,-2859
	ctx.r6.s64 = ctx.r9.s64 + -187367424;
	// addi r6,r6,3463
	ctx.r6.s64 = ctx.r6.s64 + 3463;
	// rotlwi r9,r6,14
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 14);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,17754
	ctx.r6.s64 = ctx.r8.s64 + 1163526144;
	// addi r6,r6,5357
	ctx.r6.s64 = ctx.r6.s64 + 5357;
	// rotlwi r8,r6,20
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 20);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// and r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 & ctx.r7.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,-22044
	ctx.r6.s64 = ctx.r10.s64 + -1444675584;
	// addi r6,r6,-5883
	ctx.r6.s64 = ctx.r6.s64 + -5883;
	// rotlwi r10,r6,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,-784
	ctx.r6.s64 = ctx.r7.s64 + -51380224;
	// addi r6,r6,-23560
	ctx.r6.s64 = ctx.r6.s64 + -23560;
	// rotlwi r7,r6,9
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 9);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// and r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ctx.r8.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + r23.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,26479
	ctx.r6.s64 = ctx.r9.s64 + 1735327744;
	// lwz r26,-164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// rotlwi r24,r20,0
	r24.u64 = __builtin_rotateleft32(r20.u32, 0);
	// lwz r20,-136(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -136);
	// addi r6,r6,729
	ctx.r6.s64 = ctx.r6.s64 + 729;
	// lwz r19,-152(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// rotlwi r23,r23,0
	r23.u64 = __builtin_rotateleft32(r23.u32, 0);
	// rotlwi r9,r6,14
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 14);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r27,r7,r6
	r27.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// and r9,r27,r10
	ctx.r9.u64 = r27.u64 & ctx.r10.u64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + r22.u64;
	// lwz r22,-176(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r9,r8,-29398
	ctx.r9.s64 = ctx.r8.s64 + -1926627328;
	// addi r9,r9,19594
	ctx.r9.s64 = ctx.r9.s64 + 19594;
	// rotlwi r9,r9,20
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 20);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// xor r8,r27,r9
	ctx.r8.u64 = r27.u64 ^ ctx.r9.u64;
	// xor r27,r6,r9
	r27.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + r21.u64;
	// lwz r21,-168(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addis r10,r8,-6
	ctx.r10.s64 = ctx.r8.s64 + -393216;
	// addi r10,r10,14658
	ctx.r10.s64 = ctx.r10.s64 + 14658;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xor r8,r27,r10
	ctx.r8.u64 = r27.u64 ^ ctx.r10.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addis r7,r8,-30862
	ctx.r7.s64 = ctx.r8.s64 + -2022572032;
	// addi r7,r7,-2431
	ctx.r7.s64 = ctx.r7.s64 + -2431;
	// rotlwi r8,r7,11
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 11);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addis r7,r6,28061
	ctx.r7.s64 = ctx.r6.s64 + 1839005696;
	// addi r7,r7,24866
	ctx.r7.s64 = ctx.r7.s64 + 24866;
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// xor r27,r8,r7
	r27.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r6,r27,r10
	ctx.r6.u64 = r27.u64 ^ ctx.r10.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r9,r6,-539
	ctx.r9.s64 = ctx.r6.s64 + -35323904;
	// addi r9,r9,14348
	ctx.r9.s64 = ctx.r9.s64 + 14348;
	// rotlwi r9,r9,23
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 23);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r6,r27,r9
	ctx.r6.u64 = r27.u64 ^ ctx.r9.u64;
	// xor r27,r7,r9
	r27.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r10,r6,-23361
	ctx.r10.s64 = ctx.r6.s64 + -1530986496;
	// addi r10,r10,-5564
	ctx.r10.s64 = ctx.r10.s64 + -5564;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xor r6,r27,r10
	ctx.r6.u64 = r27.u64 ^ ctx.r10.u64;
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + r24.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,19423
	ctx.r6.s64 = ctx.r8.s64 + 1272905728;
	// addi r6,r6,-12375
	ctx.r6.s64 = ctx.r6.s64 + -12375;
	// rotlwi r8,r6,11
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 11);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + r23.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,-2373
	ctx.r6.s64 = ctx.r7.s64 + -155516928;
	// addi r6,r6,19296
	ctx.r6.s64 = ctx.r6.s64 + 19296;
	// rotlwi r7,r6,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// xor r27,r8,r7
	r27.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r6,r27,r10
	ctx.r6.u64 = r27.u64 ^ ctx.r10.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,-16704
	ctx.r6.s64 = ctx.r9.s64 + -1094713344;
	// addi r6,r6,-17296
	ctx.r6.s64 = ctx.r6.s64 + -17296;
	// rotlwi r9,r6,23
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 23);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r23,-172(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// mr r24,r22
	r24.u64 = r22.u64;
	// xor r6,r27,r9
	ctx.r6.u64 = r27.u64 ^ ctx.r9.u64;
	// xor r27,r7,r9
	r27.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,10395
	ctx.r6.s64 = ctx.r10.s64 + 681246720;
	// addi r6,r6,32454
	ctx.r6.s64 = ctx.r6.s64 + 32454;
	// rotlwi r10,r6,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xor r6,r27,r10
	ctx.r6.u64 = r27.u64 ^ ctx.r10.u64;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + r22.u64;
	// lwz r22,-148(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,-5471
	ctx.r6.s64 = ctx.r8.s64 + -358547456;
	// addi r6,r6,10234
	ctx.r6.s64 = ctx.r6.s64 + 10234;
	// rotlwi r8,r6,11
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 11);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + r21.u64;
	// lwz r21,-140(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,-11025
	ctx.r6.s64 = ctx.r7.s64 + -722534400;
	// addi r6,r6,12421
	ctx.r6.s64 = ctx.r6.s64 + 12421;
	// rotlwi r7,r6,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// xor r27,r8,r7
	r27.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r6,r27,r10
	ctx.r6.u64 = r27.u64 ^ ctx.r10.u64;
	// add r6,r6,r20
	ctx.r6.u64 = ctx.r6.u64 + r20.u64;
	// lwz r20,-168(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addis r6,r9,1160
	ctx.r6.s64 = ctx.r9.s64 + 76021760;
	// addi r6,r6,7429
	ctx.r6.s64 = ctx.r6.s64 + 7429;
	// rotlwi r9,r6,23
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 23);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r6,r27,r9
	ctx.r6.u64 = r27.u64 ^ ctx.r9.u64;
	// xor r27,r7,r9
	r27.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addis r6,r10,-9771
	ctx.r6.s64 = ctx.r10.s64 + -640352256;
	// addi r6,r6,-12231
	ctx.r6.s64 = ctx.r6.s64 + -12231;
	// rotlwi r10,r6,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xor r6,r27,r10
	ctx.r6.u64 = r27.u64 ^ ctx.r10.u64;
	// lwz r27,-156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// add r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 + r19.u64;
	// mr r19,r26
	r19.u64 = r26.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addis r6,r8,-6436
	ctx.r6.s64 = ctx.r8.s64 + -421789696;
	// addi r6,r6,-26139
	ctx.r6.s64 = ctx.r6.s64 + -26139;
	// rotlwi r8,r6,11
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 11);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r6,-144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// addis r7,r7,8098
	ctx.r7.s64 = ctx.r7.s64 + 530710528;
	// addi r7,r7,31992
	ctx.r7.s64 = ctx.r7.s64 + 31992;
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// xor r26,r8,r7
	r26.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r26,r26,r10
	r26.u64 = r26.u64 ^ ctx.r10.u64;
	// add r26,r26,r6
	r26.u64 = r26.u64 + ctx.r6.u64;
	// add r9,r26,r9
	ctx.r9.u64 = r26.u64 + ctx.r9.u64;
	// addis r9,r9,-15188
	ctx.r9.s64 = ctx.r9.s64 + -995360768;
	// addi r9,r9,22117
	ctx.r9.s64 = ctx.r9.s64 + 22117;
	// rotlwi r9,r9,23
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 23);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// orc r26,r9,r8
	r26.u64 = ctx.r9.u64 | ~ctx.r8.u64;
	// xor r26,r26,r7
	r26.u64 = r26.u64 ^ ctx.r7.u64;
	// add r26,r26,r24
	r26.u64 = r26.u64 + r24.u64;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// addis r10,r10,-3031
	ctx.r10.s64 = ctx.r10.s64 + -198639616;
	// addi r10,r10,8772
	ctx.r10.s64 = ctx.r10.s64 + 8772;
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// orc r26,r10,r7
	r26.u64 = ctx.r10.u64 | ~ctx.r7.u64;
	// xor r26,r26,r9
	r26.u64 = r26.u64 ^ ctx.r9.u64;
	// add r26,r26,r23
	r26.u64 = r26.u64 + r23.u64;
	// lwz r24,-128(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// add r8,r26,r8
	ctx.r8.u64 = r26.u64 + ctx.r8.u64;
	// addis r8,r8,17195
	ctx.r8.s64 = ctx.r8.s64 + 1126891520;
	// addi r8,r8,-105
	ctx.r8.s64 = ctx.r8.s64 + -105;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// orc r26,r8,r9
	r26.u64 = ctx.r8.u64 | ~ctx.r9.u64;
	// xor r26,r26,r10
	r26.u64 = r26.u64 ^ ctx.r10.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// lwz r26,-132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -132);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addis r4,r7,-21612
	ctx.r4.s64 = ctx.r7.s64 + -1416364032;
	// addi r4,r4,9127
	ctx.r4.s64 = ctx.r4.s64 + 9127;
	// rotlwi r7,r4,15
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 15);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// orc r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ~ctx.r10.u64;
	// xor r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + r22.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addis r4,r9,-876
	ctx.r4.s64 = ctx.r9.s64 + -57409536;
	// addi r4,r4,-24519
	ctx.r4.s64 = ctx.r4.s64 + -24519;
	// rotlwi r9,r4,21
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 21);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// orc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ~ctx.r8.u64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + r21.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addis r4,r10,25947
	ctx.r4.s64 = ctx.r10.s64 + 1700462592;
	// addi r4,r4,22979
	ctx.r4.s64 = ctx.r4.s64 + 22979;
	// rotlwi r10,r4,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// orc r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ~ctx.r7.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// add r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 + r20.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addis r4,r8,-28915
	ctx.r4.s64 = ctx.r8.s64 + -1894973440;
	// addi r4,r4,-13166
	ctx.r4.s64 = ctx.r4.s64 + -13166;
	// rotlwi r8,r4,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 10);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// orc r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ~ctx.r9.u64;
	// xor r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// lwz r30,-136(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -136);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addis r4,r7,-16
	ctx.r4.s64 = ctx.r7.s64 + -1048576;
	// addi r4,r4,-2947
	ctx.r4.s64 = ctx.r4.s64 + -2947;
	// rotlwi r7,r4,15
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 15);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// orc r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ~ctx.r10.u64;
	// xor r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + r19.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addis r4,r9,-31356
	ctx.r4.s64 = ctx.r9.s64 + -2054946816;
	// addi r4,r4,24017
	ctx.r4.s64 = ctx.r4.s64 + 24017;
	// rotlwi r9,r4,21
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 21);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// orc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ~ctx.r8.u64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// lwz r28,-160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addis r4,r10,28584
	ctx.r4.s64 = ctx.r10.s64 + 1873281024;
	// addi r4,r4,32335
	ctx.r4.s64 = ctx.r4.s64 + 32335;
	// rotlwi r10,r4,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// orc r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ~ctx.r7.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + r27.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addis r4,r8,-467
	ctx.r4.s64 = ctx.r8.s64 + -30605312;
	// addi r4,r4,-6432
	ctx.r4.s64 = ctx.r4.s64 + -6432;
	// rotlwi r8,r4,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 10);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// orc r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ~ctx.r9.u64;
	// xor r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addis r4,r7,-23807
	ctx.r4.s64 = ctx.r7.s64 + -1560215552;
	// addi r4,r4,17172
	ctx.r4.s64 = ctx.r4.s64 + 17172;
	// rotlwi r7,r4,15
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 15);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// orc r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ~ctx.r10.u64;
	// xor r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addis r9,r3,19976
	ctx.r9.s64 = ctx.r3.s64 + 1309147136;
	// addi r9,r9,4513
	ctx.r9.s64 = ctx.r9.s64 + 4513;
	// rotlwi r9,r9,21
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 21);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// orc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ~ctx.r8.u64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addis r10,r3,-2221
	ctx.r10.s64 = ctx.r3.s64 + -145555456;
	// addi r10,r10,32386
	ctx.r10.s64 = ctx.r10.s64 + 32386;
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// orc r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ~ctx.r7.u64;
	// add r3,r26,r10
	ctx.r3.u64 = r26.u64 + ctx.r10.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addis r4,r8,-17093
	ctx.r4.s64 = ctx.r8.s64 + -1120206848;
	// addi r4,r4,-3531
	ctx.r4.s64 = ctx.r4.s64 + -3531;
	// rotlwi r8,r4,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 10);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// orc r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ~ctx.r9.u64;
	// add r31,r24,r8
	r31.u64 = r24.u64 + ctx.r8.u64;
	// xor r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// stw r31,12(r25)
	REX_STORE_U32(r25.u32 + 12, r31.u32);
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addis r6,r7,10968
	ctx.r6.s64 = ctx.r7.s64 + 718798848;
	// addi r6,r6,-11589
	ctx.r6.s64 = ctx.r6.s64 + -11589;
	// rotlwi r7,r6,15
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 15);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// orc r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ~ctx.r10.u64;
	// add r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64;
	// xor r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// stw r3,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r3.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r10,-5241
	ctx.r9.s64 = ctx.r10.s64 + -343474176;
	// addi r9,r9,-11375
	ctx.r9.s64 = ctx.r9.s64 + -11375;
	// rotlwi r10,r9,21
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 21);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r8.u32);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82411270) {
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
	// bge cr6,0x82411350
	if (!ctx.cr6.lt) goto loc_82411350;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,19656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_824112D4:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
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
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
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
	// bdnz 0x824112d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824112D4;
loc_82411350:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241136c
	if (ctx.cr6.eq) goto loc_8241136C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x8241136C;
	sub_825C73B8(ctx, base);
loc_8241136C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411388
	if (ctx.cr6.eq) goto loc_82411388;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82411388;
	sub_82409820(ctx, base);
loc_82411388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82415A50) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415a80
	if (ctx.cr6.eq) goto loc_82415A80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415a50
	ctx.lr = 0x82415A80;
	sub_82415A50(ctx, base);
loc_82415A80:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82415a94
	if (ctx.cr0.eq) goto loc_82415A94;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82415A94;
	sub_823F0350(ctx, base);
loc_82415A94:
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

DEFINE_REX_FUNC(sub_82417AF0) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82417028
	ctx.lr = 0x82417B28;
	sub_82417028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241A0F8) {
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
	// b 0x8241a124
	goto loc_8241A124;
loc_8241A114:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8241A120;
	sub_823F0350(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_8241A124:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241a114
	if (!ctx.cr6.eq) goto loc_8241A114;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x8241A13C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x8241A148;
	sub_823F0350(ctx, base);
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

DEFINE_REX_FUNC(sub_8241C158) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241c180
	if (ctx.cr6.eq) goto loc_8241C180;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8241c1b4
	goto loc_8241C1B4;
loc_8241C180:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241c1ac
	if (!ctx.cr6.eq) goto loc_8241C1AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,23496
	ctx.r6.s64 = ctx.r11.s64 + 23496;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x8241a4f0
	ctx.lr = 0x8241C1A8;
	sub_8241A4F0(ctx, base);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
loc_8241C1AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
loc_8241C1B4:
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

DEFINE_REX_FUNC(sub_82421B20) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82421B28;
	// mullw. r20,r5,r6
	r20.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82421c9c
	if (ctx.cr0.eq) goto loc_82421C9C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82421b7c
	if (!ctx.cr6.eq) goto loc_82421B7C;
	// rlwinm. r11,r7,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421b7c
	if (!ctx.cr0.eq) goto loc_82421B7C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r19,1
	r19.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82421B50:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r6,3
	ctx.r7.s64 = ctx.r6.s64 + 3;
	// rlwinm r22,r7,30,2,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r21,r22,r5
	r21.s64 = int64_t(r22.s32) * int64_t(ctx.r5.s32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82421b84
	if (!ctx.cr6.lt) goto loc_82421B84;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x82421b88
	goto loc_82421B88;
loc_82421B7C:
	// li r19,0
	r19.s64 = 0;
	// b 0x82421b50
	goto loc_82421B50;
loc_82421B84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421B88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421b9c
	if (!ctx.cr6.eq) goto loc_82421B9C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82421cb0
	goto loc_82421CB0;
loc_82421B9C:
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r28,r21
	ctx.r7.u64 = r28.u64 + r21.u64;
	// rlwinm. r4,r4,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// beq 0x82421bb8
	if (ctx.cr0.eq) goto loc_82421BB8;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_82421BB8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82421c8c
	if (ctx.cr6.eq) goto loc_82421C8C;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
loc_82421BD0:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82421c78
	if (ctx.cr6.eq) goto loc_82421C78;
	// rlwinm r23,r5,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_82421BE8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82421c00
	if (ctx.cr6.eq) goto loc_82421C00;
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x82421c0c
	goto loc_82421C0C;
loc_82421C00:
	// add r7,r27,r30
	ctx.r7.u64 = r27.u64 + r30.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_82421C0C:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82421c24
	if (!ctx.cr6.lt) goto loc_82421C24;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// b 0x82421c28
	goto loc_82421C28;
loc_82421C24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421C28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421c6c
	if (ctx.cr6.eq) goto loc_82421C6C;
	// rlwinm r7,r30,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r30,30
	ctx.r4.u64 = r30.u32 & 0x3;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// stw r31,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r31.u32);
	// subf r18,r28,r7
	r18.u64 = ctx.r7.u64 - r28.u64;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r18,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r7,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
loc_82421C6C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r26,r23,r26
	r26.u64 = r23.u64 + r26.u64;
	// bdnz 0x82421be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421BE8;
loc_82421C78:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// add r27,r27,r6
	r27.u64 = r27.u64 + ctx.r6.u64;
	// add r29,r29,r22
	r29.u64 = r29.u64 + r22.u64;
	// bne 0x82421bd0
	if (!ctx.cr0.eq) goto loc_82421BD0;
loc_82421C8C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82421C9C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421cac
	if (ctx.cr6.eq) goto loc_82421CAC;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
loc_82421CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82421CB0:
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8243B020) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243B028;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x8243b04c
	goto loc_8243B04C;
loc_8243B040:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243b070
	if (ctx.cr6.eq) goto loc_8243B070;
loc_8243B04C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824395e8
	ctx.lr = 0x8243B064;
	sub_824395E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243b040
	if (!ctx.cr0.lt) goto loc_8243B040;
	// b 0x8243b074
	goto loc_8243B074;
loc_8243B070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243B074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243CA30) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8243cb24
	if (ctx.cr6.gt) goto loc_8243CB24;
	// lis r12,-32188
	ctx.r12.s64 = -2109472768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13708
	ctx.r12.s64 = ctx.r12.s64 + -13708;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8243CAA0;
	case 1:
		goto loc_8243CAD0;
	case 2:
		goto loc_8243CB04;
	case 3:
		goto loc_8243CB0C;
	case 4:
		goto loc_8243CB0C;
	case 5:
		goto loc_8243CB0C;
	case 6:
		goto loc_8243CB0C;
	case 7:
		goto loc_8243CB0C;
	case 8:
		goto loc_8243CB0C;
	case 9:
		goto loc_8243CB24;
	case 10:
		goto loc_8243CB0C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8243CAA0:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243CAC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,201
	ctx.r7.s64 = 201;
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
loc_8243CAD0:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CAE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8243cb50
	if (!ctx.cr6.eq) goto loc_8243CB50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c808
	ctx.lr = 0x8243CAF8;
	sub_8243C808(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8243cb50
	goto loc_8243CB50;
loc_8243CB04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8243cb54
	goto loc_8243CB54;
loc_8243CB0C:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243CB20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8243cb54
	goto loc_8243CB54;
loc_8243CB24:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243CB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243CB50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8243CB54:
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

DEFINE_REX_FUNC(sub_82444400) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82444424:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82444424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82444424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82443dc8
	ctx.lr = 0x82444464;
	sub_82443DC8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82445150) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82445250
	if (ctx.cr6.eq) goto loc_82445250;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82445250
	if (!ctx.cr6.eq) goto loc_82445250;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82445250
	if (!ctx.cr6.eq) goto loc_82445250;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82445250
	if (!ctx.cr6.eq) goto loc_82445250;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824451c8
	if (ctx.cr6.eq) goto loc_824451C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824451C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824451d4
	goto loc_824451D4;
loc_824451C8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824451D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82445250
	if (ctx.cr6.eq) goto loc_82445250;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445200
	if (ctx.cr6.eq) goto loc_82445200;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824451FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244520c
	goto loc_8244520C;
loc_82445200:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8244520C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82445250
	if (ctx.cr6.eq) goto loc_82445250;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445238
	if (ctx.cr6.eq) goto loc_82445238;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445244
	goto loc_82445244;
loc_82445238:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445244:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82445254
	if (!ctx.cr6.eq) goto loc_82445254;
loc_82445250:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82445254:
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

DEFINE_REX_FUNC(sub_8244A068) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8244A070;
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8244A084:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244a084
	if (!ctx.cr6.eq) goto loc_8244A084;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8244a0e0
	goto loc_8244A0E0;
loc_8244A0A4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8244A0A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244a0a8
	if (!ctx.cr6.eq) goto loc_8244A0A8;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8244a0dc
	if (!ctx.cr6.eq) goto loc_8244A0DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4a90
	ctx.lr = 0x8244A0D4;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8244a104
	if (ctx.cr0.eq) goto loc_8244A104;
loc_8244A0DC:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8244A0E0:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8244a0a4
	if (!ctx.cr6.eq) goto loc_8244A0A4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8244A0F8:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8244A104:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8244a0f8
	goto loc_8244A0F8;
}

DEFINE_REX_FUNC(sub_82450910) {
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
	ctx.lr = 0x82450918;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, r28.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,245
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 245, ctx.xer);
	// beq cr6,0x82450ef4
	if (ctx.cr6.eq) goto loc_82450EF4;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// beq cr6,0x82450d74
	if (ctx.cr6.eq) goto loc_82450D74;
	// cmplwi cr6,r11,247
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 247, ctx.xer);
	// beq cr6,0x82450cbc
	if (ctx.cr6.eq) goto loc_82450CBC;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82451008
	if (!ctx.cr6.eq) goto loc_82451008;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450968
	if (ctx.cr6.eq) goto loc_82450968;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9724
	ctx.r4.s64 = ctx.r11.s64 + 9724;
	// bl 0x8244beb0
	ctx.lr = 0x82450968;
	sub_8244BEB0(ctx, base);
loc_82450968:
	// lwz r27,84(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,16(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r24,r11,10,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// clrlwi r23,r10,28
	r23.u64 = ctx.r10.u32 & 0xF;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r29,r10,16,28,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r22,r11,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x82450998
	if (ctx.cr0.eq) goto loc_82450998;
	// li r24,2
	r24.s64 = 2;
loc_82450998:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r26,32(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r25,r11,9704
	r25.s64 = ctx.r11.s64 + 9704;
loc_824509A8:
	// srw r11,r26,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r26.u32 >> (r30.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82450a10
	if (ctx.cr6.eq) goto loc_82450A10;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82450a08
	if (ctx.cr6.eq) goto loc_82450A08;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82450a00
	if (ctx.cr6.eq) goto loc_82450A00;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824509f8
	if (ctx.cr6.eq) goto loc_824509F8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82450a64
	if (ctx.cr6.eq) goto loc_82450A64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82450a58
	if (ctx.cr6.eq) goto loc_82450A58;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82450a14
	if (!ctx.cr6.eq) goto loc_82450A14;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244beb0
	ctx.lr = 0x824509F4;
	sub_8244BEB0(ctx, base);
	// b 0x82450a14
	goto loc_82450A14;
loc_824509F8:
	// ori r28,r28,8
	r28.u64 = r28.u64 | 8;
	// b 0x82450a14
	goto loc_82450A14;
loc_82450A00:
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
	// b 0x82450a14
	goto loc_82450A14;
loc_82450A08:
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// b 0x82450a14
	goto loc_82450A14;
loc_82450A10:
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
loc_82450A14:
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(r30.s32, 12, ctx.xer);
	// blt cr6,0x824509a8
	if (ctx.cr6.lt) goto loc_824509A8;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82450b7c
	if (!ctx.cr6.eq) goto loc_82450B7C;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450b7c
	if (ctx.cr0.eq) goto loc_82450B7C;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(r23.u32, 9, ctx.xer);
	// beq cr6,0x82450a80
	if (ctx.cr6.eq) goto loc_82450A80;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(r23.u32, 13, ctx.xer);
	// ble cr6,0x82450a4c
	if (!ctx.cr6.gt) goto loc_82450A4C;
	// cmplwi cr6,r23,15
	ctx.cr6.compare<uint32_t>(r23.u32, 15, ctx.xer);
	// ble cr6,0x82450a80
	if (!ctx.cr6.gt) goto loc_82450A80;
loc_82450A4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9600
	ctx.r4.s64 = ctx.r11.s64 + 9600;
	// b 0x82450a6c
	goto loc_82450A6C;
loc_82450A58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9580
	ctx.r4.s64 = ctx.r11.s64 + 9580;
	// b 0x82450a6c
	goto loc_82450A6C;
loc_82450A64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9560
	ctx.r4.s64 = ctx.r11.s64 + 9560;
loc_82450A6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244beb0
	ctx.lr = 0x82450A74;
	sub_8244BEB0(ctx, base);
loc_82450A74:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8245100c
	goto loc_8245100C;
loc_82450A80:
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r10,45
	ctx.r8.s64 = ctx.r10.s64 + 45;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450af4
	if (ctx.cr0.eq) goto loc_82450AF4;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(r23.u32, 9, ctx.xer);
	// bne cr6,0x82450ac0
	if (!ctx.cr6.eq) goto loc_82450AC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,2912
	ctx.r5.s64 = ctx.r11.s64 + 2912;
	// b 0x82450adc
	goto loc_82450ADC;
loc_82450AC0:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(r23.u32, 14, ctx.xer);
	// bne cr6,0x82450ad4
	if (!ctx.cr6.eq) goto loc_82450AD4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,2920
	ctx.r5.s64 = ctx.r11.s64 + 2920;
	// b 0x82450adc
	goto loc_82450ADC;
loc_82450AD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,2932
	ctx.r5.s64 = ctx.r11.s64 + 2932;
loc_82450ADC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,9520
	ctx.r4.s64 = ctx.r11.s64 + 9520;
loc_82450AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82450AEC:
	// bl 0x8244beb0
	ctx.lr = 0x82450AF0;
	sub_8244BEB0(ctx, base);
	// b 0x82450a74
	goto loc_82450A74;
loc_82450AF4:
	// addi r11,r31,180
	ctx.r11.s64 = r31.s64 + 180;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x82450b20
	if (ctx.cr6.lt) goto loc_82450B20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9448
	ctx.r4.s64 = ctx.r11.s64 + 9448;
	// b 0x82450a6c
	goto loc_82450A6C;
loc_82450B20:
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 212);
	// and. r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82450b54
	if (ctx.cr0.eq) goto loc_82450B54;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,9376
	ctx.r4.s64 = ctx.r9.s64 + 9376;
loc_82450B40:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r11,r11,-28320
	ctx.r11.s64 = ctx.r11.s64 + -28320;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82450aec
	goto loc_82450AEC;
loc_82450B54:
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,212(r11)
	REX_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// bl 0x82450858
	ctx.lr = 0x82450B64;
	sub_82450858(ctx, base);
	// rlwimi r29,r23,4,24,27
	r29.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xF0) | (r29.u64 & 0xFFFFFFFFFFFFFF0F);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r6,r29,24
	ctx.r6.u64 = r29.u32 & 0xFF;
	// bl 0x822cdb70
	ctx.lr = 0x82450B78;
	sub_822CDB70(ctx, base);
	// b 0x82451008
	goto loc_82451008;
loc_82450B7C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r24,4,26,27
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwimi r29,r11,4,0,27
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0) | (r29.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r10,r29,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7;
	// clrlwi r11,r29,27
	ctx.r11.u64 = r29.u32 & 0x1F;
	// addi r8,r10,33
	ctx.r8.s64 = ctx.r10.s64 + 33;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450bbc
	if (ctx.cr0.eq) goto loc_82450BBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9312
	ctx.r4.s64 = ctx.r11.s64 + 9312;
	// b 0x82450a6c
	goto loc_82450A6C;
loc_82450BBC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,132
	ctx.r11.s64 = r31.s64 + 132;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(r30.u32, 15, ctx.xer);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// ble cr6,0x82450c04
	if (!ctx.cr6.gt) goto loc_82450C04;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r11,9268
	ctx.r4.s64 = ctx.r11.s64 + 9268;
	// b 0x82450ae8
	goto loc_82450AE8;
loc_82450C04:
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(r23.u32, 9, ctx.xer);
	// bne cr6,0x82450c18
	if (!ctx.cr6.eq) goto loc_82450C18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9192
	ctx.r4.s64 = ctx.r11.s64 + 9192;
	// b 0x82450a6c
	goto loc_82450A6C;
loc_82450C18:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(r23.u32, 14, ctx.xer);
	// bne cr6,0x82450c2c
	if (!ctx.cr6.eq) goto loc_82450C2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,9104
	ctx.r4.s64 = ctx.r11.s64 + 9104;
	// b 0x82450a6c
	goto loc_82450A6C;
loc_82450C2C:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,16(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82450c74
	if (ctx.cr6.eq) goto loc_82450C74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450c5c
	if (ctx.cr6.eq) goto loc_82450C5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5888
	ctx.r5.s64 = ctx.r11.s64 + 5888;
	// b 0x82450c64
	goto loc_82450C64;
loc_82450C5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5896
	ctx.r5.s64 = ctx.r11.s64 + 5896;
loc_82450C64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// addi r4,r11,9048
	ctx.r4.s64 = ctx.r11.s64 + 9048;
	// b 0x82450ae8
	goto loc_82450AE8;
loc_82450C74:
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 164);
	// and. r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 & r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82450c98
	if (ctx.cr0.eq) goto loc_82450C98;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,8984
	ctx.r4.s64 = ctx.r9.s64 + 8984;
	// b 0x82450b40
	goto loc_82450B40;
loc_82450C98:
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// bl 0x82450858
	ctx.lr = 0x82450CA8;
	sub_82450858(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822cdad8
	ctx.lr = 0x82450CB8;
	sub_822CDAD8(ctx, base);
	// b 0x82451008
	goto loc_82451008;
loc_82450CBC:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450cd8
	if (ctx.cr6.eq) goto loc_82450CD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8944
	ctx.r4.s64 = ctx.r11.s64 + 8944;
	// bl 0x8244beb0
	ctx.lr = 0x82450CD8;
	sub_8244BEB0(ctx, base);
loc_82450CD8:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x82450d68
	if (!ctx.cr6.eq) goto loc_82450D68;
	// lwz r29,24(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r10,r29,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r29,27
	ctx.r9.u64 = r29.u32 & 0x1F;
	// addi r7,r10,63
	ctx.r7.s64 = ctx.r10.s64 + 63;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r30,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450d38
	if (ctx.cr0.eq) goto loc_82450D38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,8896
	ctx.r4.s64 = ctx.r11.s64 + 8896;
loc_82450D2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244beb0
	ctx.lr = 0x82450D34;
	sub_8244BEB0(ctx, base);
	// b 0x82451008
	goto loc_82451008;
loc_82450D38:
	// addi r11,r31,252
	ctx.r11.s64 = r31.s64 + 252;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82450858
	ctx.lr = 0x82450D58;
	sub_82450858(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822cd8e8
	ctx.lr = 0x82450D64;
	sub_822CD8E8(ctx, base);
	// b 0x82451008
	goto loc_82451008;
loc_82450D68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,8860
	ctx.r4.s64 = ctx.r11.s64 + 8860;
	// b 0x82451000
	goto loc_82451000;
loc_82450D74:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450d90
	if (ctx.cr6.eq) goto loc_82450D90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8820
	ctx.r4.s64 = ctx.r11.s64 + 8820;
	// bl 0x8244beb0
	ctx.lr = 0x82450D90;
	sub_8244BEB0(ctx, base);
loc_82450D90:
	// lwz r29,84(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82450ee8
	if (!ctx.cr6.eq) goto loc_82450EE8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r30,96
	ctx.r10.s64 = r30.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82450DB4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82450dcc
	if (ctx.cr6.eq) goto loc_82450DCC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82450dd4
	if (!ctx.cr6.eq) goto loc_82450DD4;
loc_82450DCC:
	// lwz r11,24(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82450DD4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82450db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450DB4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82450df4
	if (ctx.cr6.lt) goto loc_82450DF4;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82450e08
	if (!ctx.cr6.gt) goto loc_82450E08;
loc_82450DF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8752
	ctx.r4.s64 = ctx.r11.s64 + 8752;
	// bl 0x8244beb0
	ctx.lr = 0x82450E04;
	sub_8244BEB0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82450E08:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82450e1c
	if (ctx.cr6.lt) goto loc_82450E1C;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82450e30
	if (!ctx.cr6.gt) goto loc_82450E30;
loc_82450E1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8680
	ctx.r4.s64 = ctx.r11.s64 + 8680;
	// bl 0x8244beb0
	ctx.lr = 0x82450E2C;
	sub_8244BEB0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82450E30:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x82450e44
	if (ctx.cr6.lt) goto loc_82450E44;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82450e58
	if (!ctx.cr6.gt) goto loc_82450E58;
loc_82450E44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8608
	ctx.r4.s64 = ctx.r11.s64 + 8608;
	// bl 0x8244beb0
	ctx.lr = 0x82450E54;
	sub_8244BEB0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82450E58:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450e78
	if (ctx.cr6.eq) goto loc_82450E78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8548
	ctx.r4.s64 = ctx.r11.s64 + 8548;
	// bl 0x8244beb0
	ctx.lr = 0x82450E74;
	sub_8244BEB0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82450E78:
	// lwz r30,24(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r8,r10,62
	ctx.r8.s64 = ctx.r10.s64 + 62;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450eb0
	if (ctx.cr0.eq) goto loc_82450EB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,8500
	ctx.r4.s64 = ctx.r11.s64 + 8500;
	// b 0x82450d2c
	goto loc_82450D2C;
loc_82450EB0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82451008
	if (!ctx.cr6.eq) goto loc_82451008;
	// addi r11,r31,248
	ctx.r11.s64 = r31.s64 + 248;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82450858
	ctx.lr = 0x82450ED8;
	sub_82450858(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822cd968
	ctx.lr = 0x82450EE4;
	sub_822CD968(ctx, base);
	// b 0x82451008
	goto loc_82451008;
loc_82450EE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,8460
	ctx.r4.s64 = ctx.r11.s64 + 8460;
	// b 0x82451000
	goto loc_82451000;
loc_82450EF4:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82450f10
	if (ctx.cr6.eq) goto loc_82450F10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8420
	ctx.r4.s64 = ctx.r11.s64 + 8420;
	// bl 0x8244beb0
	ctx.lr = 0x82450F10;
	sub_8244BEB0(ctx, base);
loc_82450F10:
	// lwz r26,84(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82450ff8
	if (!ctx.cr6.eq) goto loc_82450FF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// li r28,4
	r28.s64 = 4;
	// addi r27,r11,8384
	r27.s64 = ctx.r11.s64 + 8384;
loc_82450F34:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82450fac
	if (ctx.cr6.eq) goto loc_82450FAC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82450fac
	if (ctx.cr6.eq) goto loc_82450FAC;
	// ble cr6,0x82450fb0
	if (!ctx.cr6.gt) goto loc_82450FB0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82450fb0
	if (ctx.cr6.gt) goto loc_82450FB0;
loc_82450F58:
	// lfd f0,24(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_82450F64:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82450f34
	if (!ctx.cr0.eq) goto loc_82450F34;
	// lwz r30,24(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r8,r10,54
	ctx.r8.s64 = ctx.r10.s64 + 54;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450fc8
	if (ctx.cr0.eq) goto loc_82450FC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,8336
	ctx.r4.s64 = ctx.r11.s64 + 8336;
	// b 0x82450d2c
	goto loc_82450D2C;
loc_82450FAC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82450FB0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82450f58
	if (ctx.cr6.eq) goto loc_82450F58;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244beb0
	ctx.lr = 0x82450FC4;
	sub_8244BEB0(ctx, base);
	// b 0x82450f64
	goto loc_82450F64;
loc_82450FC8:
	// addi r11,r31,216
	ctx.r11.s64 = r31.s64 + 216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82450858
	ctx.lr = 0x82450FE8;
	sub_82450858(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822cd9e8
	ctx.lr = 0x82450FF4;
	sub_822CD9E8(ctx, base);
	// b 0x82451008
	goto loc_82451008;
loc_82450FF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,8300
	ctx.r4.s64 = ctx.r11.s64 + 8300;
loc_82451000:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244beb0
	ctx.lr = 0x82451008;
	sub_8244BEB0(ctx, base);
loc_82451008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245100C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82482C68) {
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
	ctx.lr = 0x82482C70;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x82481098
	ctx.lr = 0x82482C80;
	sub_82481098(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82482C90;
	sub_823F02B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x82482ca4
	if (!ctx.cr0.eq) goto loc_82482CA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82482f04
	goto loc_82482F04;
loc_82482CA4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82482d20
	if (!ctx.cr6.gt) goto loc_82482D20;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r26,-4
	ctx.r8.s64 = r26.s64 + -4;
loc_82482CC4:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r7,r10,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82482d0c
	if (ctx.cr0.eq) goto loc_82482D0C;
	// rlwinm. r7,r10,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82482d0c
	if (!ctx.cr0.eq) goto loc_82482D0C;
	// rlwinm. r7,r10,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82482d0c
	if (!ctx.cr0.eq) goto loc_82482D0C;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82482d0c
	if (!ctx.cr0.eq) goto loc_82482D0C;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82482D0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82482cc4
	if (ctx.cr6.lt) goto loc_82482CC4;
loc_82482D20:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,-29216
	ctx.r3.s64 = ctx.r11.s64 + -29216;
	// bl 0x824793b0
	ctx.lr = 0x82482D38;
	sub_824793B0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82482dd0
	if (!ctx.cr6.gt) goto loc_82482DD0;
	// addi r7,r26,4
	ctx.r7.s64 = r26.s64 + 4;
	// addi r6,r30,-1
	ctx.r6.s64 = r30.s64 + -1;
loc_82482D48:
	// lwz r11,-4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82478de0
	ctx.lr = 0x82482D68;
	sub_82478DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82482db0
	if (!ctx.cr0.eq) goto loc_82482DB0;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r29,1
	r29.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,-4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
loc_82482DB0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82482d48
	if (!ctx.cr0.eq) goto loc_82482D48;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82482dd0
	if (ctx.cr6.eq) goto loc_82482DD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481920
	ctx.lr = 0x82482DCC;
	sub_82481920(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_82482DD0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82482e4c
	if (!ctx.cr6.gt) goto loc_82482E4C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r26,-4
	ctx.r8.s64 = r26.s64 + -4;
loc_82482DF0:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82482e38
	if (ctx.cr6.eq) goto loc_82482E38;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82482e30
	if (!ctx.cr0.eq) goto loc_82482E30;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82482e38
	if (ctx.cr6.eq) goto loc_82482E38;
loc_82482E30:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82482E38:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82482df0
	if (ctx.cr6.lt) goto loc_82482DF0;
loc_82482E4C:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// bl 0x824793b0
	ctx.lr = 0x82482E64;
	sub_824793B0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82482e74
	if (ctx.cr6.eq) goto loc_82482E74;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_82482E74:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x82482ef0
	if (!ctx.cr6.gt) goto loc_82482EF0;
	// addi r30,r26,4
	r30.s64 = r26.s64 + 4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_82482E84:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82478e68
	ctx.lr = 0x82482E94;
	sub_82478E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82482ecc
	if (!ctx.cr0.eq) goto loc_82482ECC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247da28
	ctx.lr = 0x82482EAC;
	sub_8247DA28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r27,1
	r27.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82482ed0
	goto loc_82482ED0;
loc_82482ECC:
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_82482ED0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82482e84
	if (!ctx.cr0.eq) goto loc_82482E84;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82482ef0
	if (ctx.cr6.eq) goto loc_82482EF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481920
	ctx.lr = 0x82482EEC;
	sub_82481920(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_82482EF0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823f0350
	ctx.lr = 0x82482EFC;
	sub_823F0350(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82482F04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8249CA08) {
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
	ctx.lr = 0x8249CA10;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8249ca40
	if (ctx.cr6.eq) goto loc_8249CA40;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8249ca40
	if (ctx.cr6.eq) goto loc_8249CA40;
loc_8249CA38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249d008
	goto loc_8249D008;
loc_8249CA40:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8249ca54
	if (ctx.cr6.eq) goto loc_8249CA54;
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8249ca38
	if (!ctx.cr6.eq) goto loc_8249CA38;
loc_8249CA54:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8249ca68
	if (ctx.cr6.eq) goto loc_8249CA68;
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8249ca38
	if (!ctx.cr6.eq) goto loc_8249CA38;
loc_8249CA68:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// addi r22,r23,48
	r22.s64 = r23.s64 + 48;
	// bne cr6,0x8249ca7c
	if (!ctx.cr6.eq) goto loc_8249CA7C;
	// addi r22,r21,40
	r22.s64 = r21.s64 + 40;
	// beq cr6,0x8249ca84
	if (ctx.cr6.eq) goto loc_8249CA84;
loc_8249CA7C:
	// lwz r25,16(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 16);
	// b 0x8249ca88
	goto loc_8249CA88;
loc_8249CA84:
	// li r25,0
	r25.s64 = 0;
loc_8249CA88:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8249ca98
	if (ctx.cr6.eq) goto loc_8249CA98;
	// lwz r20,16(r17)
	r20.u64 = REX_LOAD_U32(r17.u32 + 16);
	// b 0x8249ca9c
	goto loc_8249CA9C;
loc_8249CA98:
	// li r20,0
	r20.s64 = 0;
loc_8249CA9C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8249caac
	if (ctx.cr6.eq) goto loc_8249CAAC;
	// lwz r19,16(r16)
	r19.u64 = REX_LOAD_U32(r16.u32 + 16);
	// b 0x8249cab0
	goto loc_8249CAB0;
loc_8249CAAC:
	// li r19,0
	r19.s64 = 0;
loc_8249CAB0:
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// li r27,0
	r27.s64 = 0;
	// bl 0x82444750
	ctx.lr = 0x8249CAC4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249caf0
	if (ctx.cr0.eq) goto loc_8249CAF0;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x8249CAE8;
	sub_824474C0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// b 0x8249caf4
	goto loc_8249CAF4;
loc_8249CAF0:
	// li r18,0
	r18.s64 = 0;
loc_8249CAF4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82495798
	ctx.lr = 0x8249CB08;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bne 0x8249cb20
	if (!ctx.cr0.eq) goto loc_8249CB20;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-10124
	ctx.r6.s64 = ctx.r11.s64 + -10124;
	// b 0x8249cd74
	goto loc_8249CD74;
loc_8249CB20:
	// addi r28,r18,16
	r28.s64 = r18.s64 + 16;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82499060
	ctx.lr = 0x8249CB3C;
	sub_82499060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8249cb50
	if (!ctx.cr0.lt) goto loc_8249CB50;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-10168
	ctx.r6.s64 = ctx.r11.s64 + -10168;
	// b 0x8249cd70
	goto loc_8249CD70;
loc_8249CB50:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r30,116(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// beq cr6,0x8249ccc8
	if (ctx.cr6.eq) goto loc_8249CCC8;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8249ccc8
	if (!ctx.cr6.eq) goto loc_8249CCC8;
	// lwz r31,28(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,32(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 32);
	// beq cr6,0x8249cbf8
	if (ctx.cr6.eq) goto loc_8249CBF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8249cbf8
	if (!ctx.cr6.eq) goto loc_8249CBF8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8249cba8
	if (ctx.cr6.lt) goto loc_8249CBA8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x8249cbf8
	if (!ctx.cr6.lt) goto loc_8249CBF8;
loc_8249CBA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249CBB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8249cbcc
	if (!ctx.cr6.lt) goto loc_8249CBCC;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
loc_8249CBCC:
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x8249cbdc
	if (!ctx.cr6.lt) goto loc_8249CBDC;
	// stw r29,32(r26)
	REX_STORE_U32(r26.u32 + 32, r29.u32);
loc_8249CBDC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824987e0
	ctx.lr = 0x8249CBF0;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249cd68
	if (ctx.cr0.eq) goto loc_8249CD68;
loc_8249CBF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8249cc78
	if (ctx.cr6.eq) goto loc_8249CC78;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8249cc78
	if (!ctx.cr6.eq) goto loc_8249CC78;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8249cc24
	if (ctx.cr6.lt) goto loc_8249CC24;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x8249cc78
	if (!ctx.cr6.lt) goto loc_8249CC78;
loc_8249CC24:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249CC38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8249cc4c
	if (!ctx.cr6.lt) goto loc_8249CC4C;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
loc_8249CC4C:
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x8249cc5c
	if (!ctx.cr6.lt) goto loc_8249CC5C;
	// stw r29,32(r24)
	REX_STORE_U32(r24.u32 + 32, r29.u32);
loc_8249CC5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824987e0
	ctx.lr = 0x8249CC70;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249cd68
	if (ctx.cr0.eq) goto loc_8249CD68;
loc_8249CC78:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249ccc8
	if (ctx.cr6.eq) goto loc_8249CCC8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8249ccc8
	if (!ctx.cr6.eq) goto loc_8249CCC8;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x8249ccb0
	if (ctx.cr6.lt) goto loc_8249CCB0;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bge cr6,0x8249ccc8
	if (!ctx.cr6.lt) goto loc_8249CCC8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x8249ccb4
	if (!ctx.cr6.lt) goto loc_8249CCB4;
loc_8249CCB0:
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
loc_8249CCB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x8249ccc8
	if (!ctx.cr6.lt) goto loc_8249CCC8;
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r29.u32);
loc_8249CCC8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249cd88
	if (ctx.cr6.eq) goto loc_8249CD88;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,40
	ctx.r3.s64 = 40;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8249cd00
	if (!ctx.cr6.eq) goto loc_8249CD00;
	// bl 0x82444750
	ctx.lr = 0x8249CCE8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249cd40
	if (ctx.cr0.eq) goto loc_8249CD40;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8249cd24
	goto loc_8249CD24;
loc_8249CD00:
	// bl 0x82444750
	ctx.lr = 0x8249CD04;
	sub_82444750(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8249cd40
	if (ctx.cr0.eq) goto loc_8249CD40;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82495868
	ctx.lr = 0x8249CD18;
	sub_82495868(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249CD24:
	// li r9,512
	ctx.r9.s64 = 512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824461c0
	ctx.lr = 0x8249CD38;
	sub_824461C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8249cd44
	goto loc_8249CD44;
loc_8249CD40:
	// li r27,0
	r27.s64 = 0;
loc_8249CD44:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824987e0
	ctx.lr = 0x8249CD60;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249cd88
	if (!ctx.cr0.eq) goto loc_8249CD88;
loc_8249CD68:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-10216
	ctx.r6.s64 = ctx.r11.s64 + -10216;
loc_8249CD70:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8249CD74:
	// li r5,3020
	ctx.r5.s64 = 3020;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249CD80;
	sub_82494D48(ctx, base);
loc_8249CD80:
	// li r18,0
	r18.s64 = 0;
	// b 0x8249d004
	goto loc_8249D004;
loc_8249CD88:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8249cdb4
	if (ctx.cr6.eq) goto loc_8249CDB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x8249CDA8;
	sub_8249C6F0(ctx, base);
	// stw r3,32(r18)
	REX_STORE_U32(r18.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249cd80
	if (ctx.cr0.eq) goto loc_8249CD80;
loc_8249CDB4:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x8249CDBC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249cde8
	if (ctx.cr0.eq) goto loc_8249CDE8;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
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
	ctx.lr = 0x8249CDE0;
	sub_824474C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8249cdec
	goto loc_8249CDEC;
loc_8249CDE8:
	// li r31,0
	r31.s64 = 0;
loc_8249CDEC:
	// stw r31,36(r18)
	REX_STORE_U32(r18.u32 + 36, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249CE00;
	sub_82444750(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-11392
	r29.s64 = ctx.r11.s64 + -11392;
	// beq 0x8249ce24
	if (ctx.cr0.eq) goto loc_8249CE24;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x8249CE20;
	sub_82444918(ctx, base);
	// b 0x8249ce28
	goto loc_8249CE28;
loc_8249CE24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249CE28:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8249ce60
	if (ctx.cr6.eq) goto loc_8249CE60;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249CE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x8249cd80
	if (ctx.cr0.eq) goto loc_8249CD80;
loc_8249CE60:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249CE68;
	sub_82444750(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-17164
	r30.s64 = ctx.r11.s64 + -17164;
	// beq 0x8249ce8c
	if (ctx.cr0.eq) goto loc_8249CE8C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x8249CE88;
	sub_82444918(ctx, base);
	// b 0x8249ce90
	goto loc_8249CE90;
loc_8249CE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249CE90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8249cef8
	if (ctx.cr6.eq) goto loc_8249CEF8;
	// cmplw cr6,r20,r26
	ctx.cr6.compare<uint32_t>(r20.u32, r26.u32, ctx.xer);
	// beq cr6,0x8249cee0
	if (ctx.cr6.eq) goto loc_8249CEE0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824937e8
	ctx.lr = 0x8249CEBC;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249cee0
	if (!ctx.cr0.eq) goto loc_8249CEE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x8249CEDC;
	sub_8249C6F0(ctx, base);
	// b 0x8249cee8
	goto loc_8249CEE8;
loc_8249CEE0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82444890
	ctx.lr = 0x8249CEE8;
	sub_82444890(ctx, base);
loc_8249CEE8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x8249cd80
	if (ctx.cr0.eq) goto loc_8249CD80;
loc_8249CEF8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249CF00;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249cf1c
	if (ctx.cr0.eq) goto loc_8249CF1C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x8249CF18;
	sub_82444918(ctx, base);
	// b 0x8249cf20
	goto loc_8249CF20;
loc_8249CF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249CF20:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8249cf60
	if (ctx.cr6.eq) goto loc_8249CF60;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249CF4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x8249cd80
	if (ctx.cr0.eq) goto loc_8249CD80;
loc_8249CF60:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249CF68;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249cf84
	if (ctx.cr0.eq) goto loc_8249CF84;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x8249CF80;
	sub_82444918(ctx, base);
	// b 0x8249cf88
	goto loc_8249CF88;
loc_8249CF84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249CF88:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// beq cr6,0x8249cd80
	if (ctx.cr6.eq) goto loc_8249CD80;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8249cfec
	if (ctx.cr6.eq) goto loc_8249CFEC;
	// cmplw cr6,r19,r24
	ctx.cr6.compare<uint32_t>(r19.u32, r24.u32, ctx.xer);
	// beq cr6,0x8249d010
	if (ctx.cr6.eq) goto loc_8249D010;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824937e8
	ctx.lr = 0x8249CFB8;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249d010
	if (!ctx.cr0.eq) goto loc_8249D010;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8249c6f0
	ctx.lr = 0x8249CFD8;
	sub_8249C6F0(ctx, base);
loc_8249CFD8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x8249cd80
	if (ctx.cr0.eq) goto loc_8249CD80;
loc_8249CFEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824974b0
	ctx.lr = 0x8249CFF8;
	sub_824974B0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824974b0
	ctx.lr = 0x8249D004;
	sub_824974B0(ctx, base);
loc_8249D004:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_8249D008:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
loc_8249D010:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82444890
	ctx.lr = 0x8249D018;
	sub_82444890(ctx, base);
	// b 0x8249cfd8
	goto loc_8249CFD8;
}

DEFINE_REX_FUNC(sub_824C51F0) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824447b0
	ctx.lr = 0x824C520C;
	sub_824447B0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,7452
	ctx.r10.s64 = ctx.r10.s64 + 7452;
	// li r9,2257
	ctx.r9.s64 = 2257;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// li r8,228
	ctx.r8.s64 = 228;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_824C6DB8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,-1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C6F20) {
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
	// bl 0x826a53f0
	ctx.lr = 0x824C6F40;
	sub_826A53F0(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824c6f84
	if (!ctx.cr6.eq) goto loc_824C6F84;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,63
	ctx.r10.s64 = 63;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r9,-26856
	ctx.r4.s64 = ctx.r9.s64 + -26856;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8269cd20
	ctx.lr = 0x824C6F70;
	sub_8269CD20(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824C6F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C6F84:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r8,r11,28136
	ctx.r8.s64 = ctx.r11.s64 + 28136;
	// addi r7,r10,28288
	ctx.r7.s64 = ctx.r10.s64 + 28288;
	// addi r6,r9,28440
	ctx.r6.s64 = ctx.r9.s64 + 28440;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
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

DEFINE_REX_FUNC(sub_824CA9F0) {
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
	ctx.lr = 0x824CA9F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CAA18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// stw r3,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r8,r9,-23040
	ctx.r8.s64 = ctx.r9.s64 + -23040;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// ble cr6,0x824caa88
	if (!ctx.cr6.gt) goto loc_824CAA88;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// li r27,-1
	r27.s64 = -1;
loc_824CAA48:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CAA64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stwu r3,84(r29)
	ea = 84 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824CAA74;
	sub_826A2E60(ctx, base);
	// stwu r27,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r27.u32);
	r28.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824caa48
	if (ctx.cr6.lt) goto loc_824CAA48;
loc_824CAA88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824CD530) {
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
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x824cd5bc
	if (!ctx.cr6.gt) goto loc_824CD5BC;
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x824cd5d8
	goto loc_824CD5D8;
loc_824CD5BC:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD5D8:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x824cd650
	if (!ctx.cr6.gt) goto loc_824CD650;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x824cd66c
	goto loc_824CD66C;
loc_824CD650:
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD66C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x824cd6e0
	if (!ctx.cr6.gt) goto loc_824CD6E0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// srw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x824cd6f8
	goto loc_824CD6F8;
loc_824CD6E0:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_824CD6F8:
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824cd7b4
	if (!ctx.cr6.gt) goto loc_824CD7B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r11,8788
	ctx.r8.s64 = ctx.r11.s64 + 8788;
loc_824CD714:
	// lbzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r10,2678(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2678);
	// ble cr6,0x824cd794
	if (!ctx.cr6.gt) goto loc_824CD794;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r7,5808(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// srw r11,r7,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x824cd7a8
	goto loc_824CD7A8;
loc_824CD794:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lhz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_824CD7A8:
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x824cd714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CD714;
loc_824CD7B4:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// bl 0x824ccfe0
	ctx.lr = 0x824CD7C0;
	sub_824CCFE0(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// bl 0x824ccfe0
	ctx.lr = 0x824CD7CC;
	sub_824CCFE0(ctx, base);
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

DEFINE_REX_FUNC(sub_824DC0E8) {
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
	ctx.lr = 0x824DC0F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r27,r3,144
	r27.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc170
	if (ctx.cr6.lt) goto loc_824DC170;
	// lwz r30,120(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc154
	if (ctx.cr6.gt) goto loc_824DC154;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc144
	if (!ctx.cr6.gt) goto loc_824DC144;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d7ff8
	ctx.lr = 0x824DC144;
	sub_824D7FF8(ctx, base);
loc_824DC144:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc170
	if (ctx.cr6.lt) goto loc_824DC170;
loc_824DC154:
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 120);
	// mulli r11,r31,24
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_824DC170:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824DE5A0) {
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
	ctx.lr = 0x824DE5A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,23200
	r26.s64 = ctx.r10.s64 + 23200;
	// blt cr6,0x824de5f4
	if (ctx.cr6.lt) goto loc_824DE5F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,23360
	ctx.r5.s64 = ctx.r11.s64 + 23360;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824DE5F4;
	sub_824EA978(ctx, base);
loc_824DE5F4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r30,r30,12
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824de628
	if (ctx.cr6.lt) goto loc_824DE628;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,23288
	ctx.r5.s64 = ctx.r11.s64 + 23288;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824DE628;
	sub_824EA978(ctx, base);
loc_824DE628:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824de4b0
	ctx.lr = 0x824DE658;
	sub_824DE4B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824E3FD8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,552(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E4308) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x824e4348
	if (!ctx.cr6.gt) goto loc_824E4348;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
loc_824E4348:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E7658) {
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
	ctx.lr = 0x824E7660;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzu r10,4(r30)
	ea = 4 + r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// rlwinm r27,r11,0,3,3
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7694
	if (!ctx.cr0.eq) goto loc_824E7694;
	// bl 0x826b40a0
	ctx.lr = 0x824E7694;
	sub_826B40A0(ctx, base);
loc_824E7694:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r24,r30,4
	r24.s64 = r30.s64 + 4;
	// ori r30,r11,512
	r30.u64 = ctx.r11.u64 | 512;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824e76d4
	if (ctx.cr6.eq) goto loc_824E76D4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e76bc
	if (!ctx.cr0.eq) goto loc_824E76BC;
	// bl 0x826b40a0
	ctx.lr = 0x824E76BC;
	sub_826B40A0(ctx, base);
loc_824E76BC:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x824e76c8
	if (!ctx.cr6.lt) goto loc_824E76C8;
	// bl 0x826b40a0
	ctx.lr = 0x824E76C8;
	sub_826B40A0(ctx, base);
loc_824E76C8:
	// lwz r25,0(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x824e76d8
	goto loc_824E76D8;
loc_824E76D4:
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E76D8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824e76f4
	if (ctx.cr6.gt) goto loc_824E76F4;
	// clrlwi r3,r29,21
	ctx.r3.u64 = r29.u32 & 0x7FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// b 0x824e7708
	goto loc_824E7708;
loc_824E76F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e6198
	ctx.lr = 0x824E7704;
	sub_824E6198(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E7708:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x824e7734
	if (!ctx.cr6.lt) goto loc_824E7734;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r11,r9,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r9,55
	ctx.r9.s64 = 55;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r10,21008
	ctx.r10.s64 = 21008;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// b 0x824e7830
	goto loc_824E7830;
loc_824E7734:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824e7820
	if (ctx.cr6.eq) goto loc_824E7820;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// ori r8,r10,33
	ctx.r8.u64 = ctx.r10.u64 | 33;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r25,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFF0000;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// stwu r8,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824e77c4
	if (ctx.cr6.eq) goto loc_824E77C4;
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// addi r7,r7,-19960
	ctx.r7.s64 = ctx.r7.s64 + -19960;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r4,r6,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r6,r6,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r5,r4,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r6,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x824e77d0
	goto loc_824E77D0;
loc_824E77C4:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824E77D0:
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF000000;
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r8,21845
	ctx.r8.s64 = 21845;
	// bne cr6,0x824e7804
	if (!ctx.cr6.eq) goto loc_824E7804;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// b 0x824e7814
	goto loc_824E7814;
loc_824E7804:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_824E7814:
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824E7820:
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r11,55
	ctx.r11.s64 = 55;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824E7830:
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824F5D68) {
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
	// lwz r10,1092(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1092);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824f5d98
	if (ctx.cr6.eq) goto loc_824F5D98;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824F5D94;
	sub_826A2E60(ctx, base);
	// b 0x824f62dc
	goto loc_824F62DC;
loc_824F5D98:
	// lwz r10,1084(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1084);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,3776(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3776);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,19092(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19092);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-22620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -22620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,3720(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3720);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,1080(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1080);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,1088(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1088);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r10,1060(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1060);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,1068(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1068);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824f5e48
	if (ctx.cr6.gt) goto loc_824F5E48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_824F5E48:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,1064(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1064);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,1056(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1056);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x824f5e8c
	if (!ctx.cr6.gt) goto loc_824F5E8C;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_824F5E8C:
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,1076(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1076);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f9,15196(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,1072(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1072);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824f5ee8
	if (ctx.cr6.eq) goto loc_824F5EE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f10.f64 = double(temp.f32);
	// b 0x824f5f58
	goto loc_824F5F58;
loc_824F5EE8:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x824f5f34
	if (!ctx.cr6.eq) goto loc_824F5F34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,8300(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8300);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bgt cr6,0x824f5f44
	if (ctx.cr6.gt) goto loc_824F5F44;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,3712(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3712);
	ctx.f10.f64 = double(temp.f32);
	// b 0x824f5f58
	goto loc_824F5F58;
loc_824F5F34:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,3804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x824f5f50
	if (!ctx.cr6.gt) goto loc_824F5F50;
loc_824F5F44:
	// fmuls f13,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x824f5f5c
	goto loc_824F5F5C;
loc_824F5F50:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,16236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16236);
	ctx.f10.f64 = double(temp.f32);
loc_824F5F58:
	// stfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_824F5F5C:
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f5f74
	if (!ctx.cr6.gt) goto loc_824F5F74;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f5f78
	goto loc_824F5F78;
loc_824F5F74:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F5F78:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x824f5f88
	if (!ctx.cr6.gt) goto loc_824F5F88;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x824f5f9c
	goto loc_824F5F9C;
loc_824F5F88:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f5f98
	if (!ctx.cr6.gt) goto loc_824F5F98;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f5f9c
	goto loc_824F5F9C;
loc_824F5F98:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F5F9C:
	// lfs f6,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f10
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x824f5fb0
	if (!ctx.cr6.gt) goto loc_824F5FB0;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x824f5fe8
	goto loc_824F5FE8;
loc_824F5FB0:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f5fc0
	if (!ctx.cr6.gt) goto loc_824F5FC0;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f5fc4
	goto loc_824F5FC4;
loc_824F5FC0:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F5FC4:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x824f5fd4
	if (!ctx.cr6.gt) goto loc_824F5FD4;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x824f5fe8
	goto loc_824F5FE8;
loc_824F5FD4:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f5fe4
	if (!ctx.cr6.gt) goto loc_824F5FE4;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f5fe8
	goto loc_824F5FE8;
loc_824F5FE4:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F5FE8:
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x824f5ffc
	if (!ctx.cr6.gt) goto loc_824F5FFC;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x824f6074
	goto loc_824F6074;
loc_824F5FFC:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f600c
	if (!ctx.cr6.gt) goto loc_824F600C;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f6010
	goto loc_824F6010;
loc_824F600C:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F6010:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x824f6020
	if (!ctx.cr6.gt) goto loc_824F6020;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x824f6034
	goto loc_824F6034;
loc_824F6020:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f6030
	if (!ctx.cr6.gt) goto loc_824F6030;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f6034
	goto loc_824F6034;
loc_824F6030:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F6034:
	// fcmpu cr6,f6,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x824f6044
	if (!ctx.cr6.gt) goto loc_824F6044;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x824f6074
	goto loc_824F6074;
loc_824F6044:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f6054
	if (!ctx.cr6.gt) goto loc_824F6054;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824f6058
	goto loc_824F6058;
loc_824F6054:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824F6058:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x824f6074
	if (ctx.cr6.gt) goto loc_824F6074;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824f6070
	if (!ctx.cr6.gt) goto loc_824F6070;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x824f6074
	goto loc_824F6074;
loc_824F6070:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F6074:
	// lfs f10,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fcmpu cr6,f10,f7
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f608c
	if (!ctx.cr6.gt) goto loc_824F608C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f6090
	goto loc_824F6090;
loc_824F608C:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F6090:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x824f60a0
	if (!ctx.cr6.gt) goto loc_824F60A0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x824f60b4
	goto loc_824F60B4;
loc_824F60A0:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f60b0
	if (!ctx.cr6.gt) goto loc_824F60B0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f60b4
	goto loc_824F60B4;
loc_824F60B0:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F60B4:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x824f60c4
	if (!ctx.cr6.gt) goto loc_824F60C4;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// b 0x824f60fc
	goto loc_824F60FC;
loc_824F60C4:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f60d4
	if (!ctx.cr6.gt) goto loc_824F60D4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f60d8
	goto loc_824F60D8;
loc_824F60D4:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F60D8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x824f60e8
	if (!ctx.cr6.gt) goto loc_824F60E8;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x824f60fc
	goto loc_824F60FC;
loc_824F60E8:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f60f8
	if (!ctx.cr6.gt) goto loc_824F60F8;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x824f60fc
	goto loc_824F60FC;
loc_824F60F8:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_824F60FC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x824f6188
	if (ctx.cr6.gt) goto loc_824F6188;
	// fcmpu cr6,f10,f7
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f6118
	if (!ctx.cr6.gt) goto loc_824F6118;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f611c
	goto loc_824F611C;
loc_824F6118:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F611C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x824f612c
	if (!ctx.cr6.gt) goto loc_824F612C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x824f6140
	goto loc_824F6140;
loc_824F612C:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f613c
	if (!ctx.cr6.gt) goto loc_824F613C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f6140
	goto loc_824F6140;
loc_824F613C:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F6140:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x824f6150
	if (!ctx.cr6.gt) goto loc_824F6150;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x824f6188
	goto loc_824F6188;
loc_824F6150:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f6160
	if (!ctx.cr6.gt) goto loc_824F6160;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f6164
	goto loc_824F6164;
loc_824F6160:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F6164:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x824f6174
	if (!ctx.cr6.gt) goto loc_824F6174;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x824f6188
	goto loc_824F6188;
loc_824F6174:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824f6184
	if (!ctx.cr6.gt) goto loc_824F6184;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x824f6188
	goto loc_824F6188;
loc_824F6184:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_824F6188:
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824f61bc
	if (!ctx.cr6.lt) goto loc_824F61BC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,32324(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32324);
	ctx.f0.f64 = double(temp.f32);
loc_824F61A4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824f61a4
	if (ctx.cr6.lt) goto loc_824F61A4;
loc_824F61BC:
	// lwz r10,1036(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1036);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,1028(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1028);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,1032(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1032);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r10,1040(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1040);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r10,1044(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1044);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,1048(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1048);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x824f6204
	if (ctx.cr6.eq) goto loc_824F6204;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// b 0x824f6208
	goto loc_824F6208;
loc_824F6204:
	// rlwinm r10,r10,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
loc_824F6208:
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r10,1112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1112);
	// lwz r9,1108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1108);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r10,1132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1132);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,1136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1136);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r9,1104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1104);
	// lwz r10,1100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1100);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r10,1128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1128);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,1124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1124);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
loc_824F62DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82531440) {
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
	ctx.lr = 0x82531448;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825318dc
	if (!ctx.cr0.eq) goto loc_825318DC;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825318dc
	if (ctx.cr0.eq) goto loc_825318DC;
	// clrlwi r17,r4,24
	r17.u64 = ctx.r4.u32 & 0xFF;
	// li r21,1
	r21.s64 = 1;
loc_82531470:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x82531480
	if (!ctx.cr6.eq) goto loc_82531480;
	// lwz r11,88(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 88);
	// stw r11,84(r19)
	REX_STORE_U32(r19.u32 + 84, ctx.r11.u32);
loc_82531480:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,672(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,88(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 88);
	// bl 0x82501ce0
	ctx.lr = 0x82531490;
	sub_82501CE0(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82531554
	if (ctx.cr6.gt) goto loc_82531554;
loc_825314A0:
	// lwz r9,672(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// mullw r10,r9,r3
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lwz r8,88(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 88);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825314f8
	if (!ctx.cr6.lt) goto loc_825314F8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r8,-8
	ctx.r9.s64 = ctx.r8.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825314E4:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x825314e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825314E4;
loc_825314F8:
	// lwz r9,672(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 672);
	// rlwinm r10,r3,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// clrldi r8,r3,58
	ctx.r8.u64 = ctx.r3.u64 & 0x3F;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r8,r21,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r8.u8 & 0x7F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ldx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x8253153c
	if (!ctx.cr6.eq) goto loc_8253153C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8253154c
	goto loc_8253154C;
loc_8253153C:
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// lwz r5,672(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,88(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 88);
	// bl 0x82501ce0
	ctx.lr = 0x8253154C;
	sub_82501CE0(ctx, base);
loc_8253154C:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// ble cr6,0x825314a0
	if (!ctx.cr6.gt) goto loc_825314A0;
loc_82531554:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// addi r18,r19,16
	r18.s64 = r19.s64 + 16;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82531648
	if (!ctx.cr0.eq) goto loc_82531648;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82531648
	if (ctx.cr0.eq) goto loc_82531648;
loc_82531570:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8253162c
	if (!ctx.cr6.eq) goto loc_8253162C;
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// lhz r9,18(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253162c
	if (!ctx.cr0.eq) goto loc_8253162C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8253162c
	if (ctx.cr0.eq) goto loc_8253162C;
loc_8253159C:
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82531610
	if (!ctx.cr6.eq) goto loc_82531610;
	// lhz r11,18(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 18);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82531610
	if (ctx.cr6.eq) goto loc_82531610;
	// lwz r8,672(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 672);
	// rlwinm r7,r11,29,3,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// lwz r10,684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 684);
	// clrldi r4,r11,58
	ctx.r4.u64 = ctx.r11.u64 & 0x3F;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r4,r21,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r4.u8 & 0x7F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r3,r9,58
	ctx.r3.u64 = ctx.r9.u64 & 0x3F;
	// sld r3,r21,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r3.u8 & 0x7F));
	// ldx r30,r7,r10
	r30.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | r30.u64;
	// stdx r4,r7,r10
	REX_STORE_U64(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u64);
	// lwz r10,684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 684);
	// lwz r7,672(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 672);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stdx r10,r8,r11
	REX_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u64);
loc_82531610:
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253162c
	if (!ctx.cr0.eq) goto loc_8253162C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253159c
	if (!ctx.cr6.eq) goto loc_8253159C;
loc_8253162C:
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82531648
	if (!ctx.cr0.eq) goto loc_82531648;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82531570
	if (!ctx.cr6.eq) goto loc_82531570;
loc_82531648:
	// lwz r11,28(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82531670
	if (ctx.cr0.eq) goto loc_82531670;
	// lwz r11,36(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 36);
	// addi r20,r19,32
	r20.s64 = r19.s64 + 32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r10,r11
	r22.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82531688
	goto loc_82531688;
loc_82531670:
	// lwz r10,28(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 28);
	// addi r20,r19,24
	r20.s64 = r19.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r11,r10
	r22.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82531688:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x825318c0
	if (ctx.cr6.eq) goto loc_825318C0;
loc_82531690:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253187c
	if (ctx.cr0.eq) goto loc_8253187C;
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 16);
	// clrlwi r23,r11,16
	r23.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// mr r30,r23
	r30.u64 = r23.u64;
	// add r27,r23,r11
	r27.u64 = r23.u64 + ctx.r11.u64;
	// cmplw cr6,r23,r27
	ctx.cr6.compare<uint32_t>(r23.u32, r27.u32, ctx.xer);
	// bge cr6,0x82531754
	if (!ctx.cr6.lt) goto loc_82531754;
loc_825316B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x825316C4;
	sub_825164C0(ctx, base);
	// addi r25,r30,1
	r25.s64 = r30.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(r25.u32, r27.u32, ctx.xer);
	// bge cr6,0x82531748
	if (!ctx.cr6.lt) goto loc_82531748;
	// clrldi r11,r3,58
	ctx.r11.u64 = ctx.r3.u64 & 0x3F;
	// rlwinm r29,r3,29,3,28
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// sld r26,r21,r11
	r26.u64 = ctx.r11.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r11.u8 & 0x7F));
loc_825316E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x825316F0;
	sub_825164C0(ctx, base);
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r9,684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 684);
	// rlwinm r10,r3,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r9,r3,58
	ctx.r9.u64 = ctx.r3.u64 & 0x3F;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// sld r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwz r10,684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 684);
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + r29.u32);
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | r26.u64;
	// stdx r10,r11,r29
	REX_STORE_U64(ctx.r11.u32 + r29.u32, ctx.r10.u64);
	// blt cr6,0x825316e4
	if (ctx.cr6.lt) goto loc_825316E4;
loc_82531748:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(r25.u32, r27.u32, ctx.xer);
	// blt cr6,0x825316b8
	if (ctx.cr6.lt) goto loc_825316B8;
loc_82531754:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253187c
	if (!ctx.cr0.eq) goto loc_8253187C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8253187c
	if (ctx.cr0.eq) goto loc_8253187C;
loc_8253176C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82531860
	if (!ctx.cr6.eq) goto loc_82531860;
	// cmplw cr6,r25,r22
	ctx.cr6.compare<uint32_t>(r25.u32, r22.u32, ctx.xer);
	// beq cr6,0x82531860
	if (ctx.cr6.eq) goto loc_82531860;
	// lwz r24,4(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_82531788:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82531860
	if (ctx.cr6.eq) goto loc_82531860;
	// lwz r3,16(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531858
	if (ctx.cr6.eq) goto loc_82531858;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x82531858
	if (!ctx.cr6.eq) goto loc_82531858;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, ctx.xer);
	// beq cr6,0x82531858
	if (ctx.cr6.eq) goto loc_82531858;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x825c28f8
	ctx.lr = 0x825317C4;
	sub_825C28F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82531858
	if (ctx.cr0.eq) goto loc_82531858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r4,18(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x825317D8;
	sub_825164C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplw cr6,r23,r27
	ctx.cr6.compare<uint32_t>(r23.u32, r27.u32, ctx.xer);
	// bge cr6,0x82531858
	if (!ctx.cr6.lt) goto loc_82531858;
	// clrldi r11,r3,58
	ctx.r11.u64 = ctx.r3.u64 & 0x3F;
	// rlwinm r29,r3,29,3,28
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// sld r26,r21,r11
	r26.u64 = ctx.r11.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r11.u8 & 0x7F));
loc_825317F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x82531800;
	sub_825164C0(ctx, base);
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r9,684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 684);
	// rlwinm r10,r3,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r9,r3,58
	ctx.r9.u64 = ctx.r3.u64 & 0x3F;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// sld r8,r21,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (r21.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + ctx.r11.u32);
	// or r9,r26,r9
	ctx.r9.u64 = r26.u64 | ctx.r9.u64;
	// stdx r9,r29,r11
	REX_STORE_U64(r29.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// lwz r9,684(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 684);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ldx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blt cr6,0x825317f4
	if (ctx.cr6.lt) goto loc_825317F4;
loc_82531858:
	// lwz r24,8(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 8);
	// b 0x82531788
	goto loc_82531788;
loc_82531860:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253187c
	if (!ctx.cr0.eq) goto loc_8253187C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253176c
	if (!ctx.cr6.eq) goto loc_8253176C;
loc_8253187C:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82531898
	if (!ctx.cr0.eq) goto loc_82531898;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82531690
	if (!ctx.cr6.eq) goto loc_82531690;
loc_82531898:
	// addi r11,r19,32
	ctx.r11.s64 = r19.s64 + 32;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825318c0
	if (ctx.cr6.eq) goto loc_825318C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825318c0
	if (!ctx.cr0.eq) goto loc_825318C0;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82531690
	if (!ctx.cr0.eq) goto loc_82531690;
loc_825318C0:
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825318dc
	if (!ctx.cr0.eq) goto loc_825318DC;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82531470
	if (!ctx.cr6.eq) goto loc_82531470;
loc_825318DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8257B1B8) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8257B1DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8257b284
	if (ctx.cr6.eq) goto loc_8257B284;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r31,40(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r30,r10,13
	r30.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r30,27
	r30.u64 = r30.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r30,r4,r30
	r30.u64 = r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257b274
	if (ctx.cr0.eq) goto loc_8257B274;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8257b24c
	if (ctx.cr6.eq) goto loc_8257B24C;
	// lwz r10,48(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r30,r10,13
	r30.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r30,27
	r30.u64 = r30.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r30,r4,r30
	r30.u64 = r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257b274
	if (ctx.cr0.eq) goto loc_8257B274;
loc_8257B24C:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257b26c
	if (!ctx.cr6.eq) goto loc_8257B26C;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8257b264
	if (!ctx.cr6.eq) goto loc_8257B264;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x8257b274
	goto loc_8257B274;
loc_8257B264:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8257b27c
	if (!ctx.cr6.eq) goto loc_8257B27C;
loc_8257B26C:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8257B274:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8257b1dc
	goto loc_8257B1DC;
loc_8257B27C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8257B284;
	sub_824E4368(ctx, base);
loc_8257B284:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
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

DEFINE_REX_FUNC(sub_8257E9A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e9c4
	if (ctx.cr6.eq) goto loc_8257E9C4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8257e9c4
	if (!ctx.cr6.eq) goto loc_8257E9C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8257E9C4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257EC10) {
	REX_FUNC_PROLOGUE();
	// b 0x8257ec24
	goto loc_8257EC24;
loc_8257EC14:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257ec34
	if (!ctx.cr6.eq) goto loc_8257EC34;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_8257EC24:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8257ec14
	if (ctx.cr6.eq) goto loc_8257EC14;
	// b 0x8257eb90
	sub_8257EB90(ctx, base);
	return;
loc_8257EC34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257F6F8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f754
	if (ctx.cr6.eq) goto loc_8257F754;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8257f754
	if (!ctx.cr6.eq) goto loc_8257F754;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f74c
	if (ctx.cr6.eq) goto loc_8257F74C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8257f74c
	if (!ctx.cr6.eq) goto loc_8257F74C;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8257f834
	goto loc_8257F834;
loc_8257F74C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8257F754;
	sub_824E4368(ctx, base);
loc_8257F754:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257f770
	if (ctx.cr0.eq) goto loc_8257F770;
	// cmplwi cr6,r4,727
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 727, ctx.xer);
	// bge cr6,0x8257f770
	if (!ctx.cr6.lt) goto loc_8257F770;
	// bl 0x8257f238
	ctx.lr = 0x8257F76C;
	sub_8257F238(ctx, base);
	// b 0x8257f834
	goto loc_8257F834;
loc_8257F770:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257f7a8
	if (ctx.cr0.eq) goto loc_8257F7A8;
	// lwz r11,600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 600);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8257f7a8
	if (ctx.cr6.lt) goto loc_8257F7A8;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8257f7a8
	if (!ctx.cr6.lt) goto loc_8257F7A8;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-17656
	ctx.r10.s64 = ctx.r10.s64 + -17656;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8257f834
	goto loc_8257F834;
loc_8257F7A8:
	// lwz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f80c
	if (ctx.cr6.eq) goto loc_8257F80C;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8257f80c
	if (ctx.cr6.lt) goto loc_8257F80C;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,600(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 600);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8257f7d8
	if (!ctx.cr6.gt) goto loc_8257F7D8;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8257F7D8:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8257f80c
	if (!ctx.cr6.lt) goto loc_8257F80C;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r31,r10,20368
	r31.s64 = ctx.r10.s64 + 20368;
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r9,-18704
	ctx.r5.s64 = ctx.r9.s64 + -18704;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x826a1a58
	ctx.lr = 0x8257F804;
	sub_826A1A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8257f834
	goto loc_8257F834;
loc_8257F80C:
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f82c
	if (ctx.cr6.eq) goto loc_8257F82C;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257f82c
	if (!ctx.cr6.eq) goto loc_8257F82C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// b 0x8257f834
	goto loc_8257F834;
loc_8257F82C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18756
	ctx.r3.s64 = ctx.r11.s64 + -18756;
loc_8257F834:
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

DEFINE_REX_FUNC(sub_82582B28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82582B30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582B54;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582B64;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582B70;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82584BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82584BD8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82584bfc
	if (ctx.cr6.eq) goto loc_82584BFC;
loc_82584BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_82584BFC:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82584d38
	if (ctx.cr6.lt) goto loc_82584D38;
	// beq cr6,0x82584ce0
	if (ctx.cr6.eq) goto loc_82584CE0;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82584c1c
	if (ctx.cr6.lt) goto loc_82584C1C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82584C1C;
	sub_824E4368(ctx, base);
loc_82584C1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583bb0
	ctx.lr = 0x82584C44;
	sub_82583BB0(ctx, base);
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82584cd4
	if (ctx.cr6.eq) goto loc_82584CD4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82584cd4
	if (!ctx.cr6.eq) goto loc_82584CD4;
	// lwa r11,12(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r29.u32 + 12));
	// li r5,4
	ctx.r5.s64 = 4;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwa r9,4(r29)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r29.u32 + 4));
	// lwa r10,0(r29)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r29.u32 + 0));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwa r8,8(r29)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(r29.u32 + 8));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82584dac
	goto loc_82584DAC;
loc_82584CD4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82584CE0;
	sub_824E4368(ctx, base);
loc_82584CE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583bb0
	ctx.lr = 0x82584D08;
	sub_82583BB0(ctx, base);
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82584d2c
	if (ctx.cr6.eq) goto loc_82584D2C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82584d2c
	if (!ctx.cr6.eq) goto loc_82584D2C;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82584da4
	goto loc_82584DA4;
loc_82584D2C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82584D38;
	sub_824E4368(ctx, base);
loc_82584D38:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,352
	ctx.r5.s64 = ctx.r11.s64 + 352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583bb0
	ctx.lr = 0x82584D60;
	sub_82583BB0(ctx, base);
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82584dc0
	if (ctx.cr6.eq) goto loc_82584DC0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82584dc0
	if (!ctx.cr6.eq) goto loc_82584DC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82584d90
	if (ctx.cr6.eq) goto loc_82584D90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82584d98
	goto loc_82584D98;
loc_82584D90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82584D98:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82584DA4:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82584DAC:
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fc80
	ctx.lr = 0x82584DB8;
	sub_8257FC80(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// b 0x82584bf0
	goto loc_82584BF0;
loc_82584DC0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82584DCC;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8259F060) {
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
	// bl 0x826a1c80
	ctx.lr = 0x8259F068;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c90
	ctx.lr = 0x8259F070;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r16,0
	r16.s64 = 0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8259f09c
	if (ctx.cr6.eq) goto loc_8259F09C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8259f5b4
	goto loc_8259F5B4;
loc_8259F09C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r9,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// rlwinm r30,r7,15,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r29,r11,14,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// lwz r4,104(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x8259eba0
	ctx.lr = 0x8259F0C8;
	sub_8259EBA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x8259eba0
	ctx.lr = 0x8259F0E4;
	sub_8259EBA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x8259eba0
	ctx.lr = 0x8259F100;
	sub_8259EBA0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8259f580
	if (ctx.cr6.eq) goto loc_8259F580;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8259f580
	if (ctx.cr6.eq) goto loc_8259F580;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f580
	if (ctx.cr6.eq) goto loc_8259F580;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r17,-1
	r17.s64 = -1;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259f144
	if (!ctx.cr6.gt) goto loc_8259F144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8259F144:
	// bl 0x822f6280
	ctx.lr = 0x8259F148;
	sub_822F6280(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f580
	if (ctx.cr6.eq) goto loc_8259F580;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259f170
	if (!ctx.cr6.gt) goto loc_8259F170;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8259F170:
	// bl 0x822f6280
	ctx.lr = 0x8259F174;
	sub_822F6280(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259f580
	if (ctx.cr6.eq) goto loc_8259F580;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r18,0
	r18.s64 = 0;
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,112(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(48));
	// add r29,r10,r3
	r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r28,r9,r3
	r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r27,r8,r3
	r27.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x8259f578
	if (!ctx.cr6.gt) goto loc_8259F578;
	// addi r26,r25,8
	r26.s64 = r25.s64 + 8;
loc_8259F1BC:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r20,0
	r20.s64 = 0;
	// mr r21,r17
	r21.u64 = r17.u64;
	// mr r22,r17
	r22.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8259f564
	if (!ctx.cr6.gt) goto loc_8259F564;
	// addi r25,r14,8
	r25.s64 = r14.s64 + 8;
loc_8259F1D8:
	// lwz r23,-8(r25)
	r23.u64 = REX_LOAD_U32(r25.u32 + -8);
	// li r24,0
	r24.s64 = 0;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(r23.u32, r21.u32, ctx.xer);
	// beq cr6,0x8259f258
	if (ctx.cr6.eq) goto loc_8259F258;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x8259f238
	if (ctx.cr6.eq) goto loc_8259F238;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,-8(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + -8);
	// mr r21,r23
	r21.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8259f258
	goto loc_8259F258;
loc_8259F238:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r22,r17
	r22.u64 = r17.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8259F258:
	// lwz r23,0(r25)
	r23.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x8259f2a8
	if (ctx.cr6.eq) goto loc_8259F2A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,-8(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + -8);
	// mr r22,r23
	r22.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259F2A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259f528
	if (!ctx.cr6.gt) goto loc_8259F528;
	// addi r8,r15,-12
	ctx.r8.s64 = r15.s64 + -12;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
loc_8259F2C0:
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f13,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f12,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// lfs f9,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + r28.u64;
	// lfsx f8,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f2,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f31,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f28,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	f31.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f28,f28,f12
	f28.f64 = double(float(f28.f64 * ctx.f12.f64));
	// lfs f4,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f1,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f30,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f30.f64 = double(temp.f32);
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f29,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f27,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmuls f29,f29,f13
	f29.f64 = double(float(f29.f64 * ctx.f13.f64));
	// lfs f26,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f26.f64 = double(temp.f32);
	// fmuls f27,f27,f12
	f27.f64 = double(float(f27.f64 * ctx.f12.f64));
	// lfsx f25,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	f25.f64 = double(temp.f32);
	// fmuls f26,f26,f12
	f26.f64 = double(float(f26.f64 * ctx.f12.f64));
	// lfsx f24,r10,r28
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	f24.f64 = double(temp.f32);
	// fmuls f25,f25,f13
	f25.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmuls f24,f24,f12
	f24.f64 = double(float(f24.f64 * ctx.f12.f64));
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + r29.u64;
	// fadds f2,f28,f31
	ctx.f2.f64 = double(float(f28.f64 + f31.f64));
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfsx f7,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f31,f27,f30
	f31.f64 = double(float(f27.f64 + f30.f64));
	// lfs f1,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f29,f26,f29
	f29.f64 = double(float(f26.f64 + f29.f64));
	// lfs f30,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fadds f28,f24,f25
	f28.f64 = double(float(f24.f64 + f25.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f2,f2,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f31,f31,f10
	f31.f64 = double(float(f31.f64 * ctx.f10.f64));
	// fmuls f29,f29,f10
	f29.f64 = double(float(f29.f64 * ctx.f10.f64));
	// fmuls f28,f28,f10
	f28.f64 = double(float(f28.f64 * ctx.f10.f64));
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f5,f31,f5
	ctx.f5.f64 = double(float(f31.f64 + ctx.f5.f64));
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(f29.f64 + ctx.f4.f64));
	// fadds f8,f28,f8
	ctx.f8.f64 = double(float(f28.f64 + ctx.f8.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfsx f8,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f30,f13
	f31.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f30,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f28,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	f28.f64 = double(temp.f32);
	// fmuls f30,f30,f12
	f30.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmuls f29,f29,f12
	f29.f64 = double(float(f29.f64 * ctx.f12.f64));
	// lfs f27,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f27.f64 = double(temp.f32);
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfsx f1,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 * ctx.f12.f64));
	// lfs f28,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f28.f64 = double(temp.f32);
	// lfs f26,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f26.f64 = double(temp.f32);
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfsx f25,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	f25.f64 = double(temp.f32);
	// fmuls f27,f27,f13
	f27.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fmuls f28,f28,f13
	f28.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f24,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f24.f64 = double(temp.f32);
	// fmuls f13,f26,f13
	ctx.f13.f64 = double(float(f26.f64 * ctx.f13.f64));
	// lfs f26,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f26.f64 = double(temp.f32);
	// fmuls f25,f0,f25
	f25.f64 = double(float(ctx.f0.f64 * f25.f64));
	// lfs f23,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f23.f64 = double(temp.f32);
	// fmuls f24,f24,f0
	f24.f64 = double(float(f24.f64 * ctx.f0.f64));
	// lfs f22,-4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -4);
	f22.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	f26.f64 = double(float(f26.f64 * ctx.f0.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f23,f0
	ctx.f0.f64 = double(float(f23.f64 * ctx.f0.f64));
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f7,f30,f3
	ctx.f7.f64 = double(float(f30.f64 + ctx.f3.f64));
	// fadds f3,f29,f2
	ctx.f3.f64 = double(float(f29.f64 + ctx.f2.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// fadds f2,f25,f1
	ctx.f2.f64 = double(float(f25.f64 + ctx.f1.f64));
	// fadds f1,f24,f27
	ctx.f1.f64 = double(float(f24.f64 + f27.f64));
	// fadds f31,f26,f28
	f31.f64 = double(float(f26.f64 + f28.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f7,f3,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f3,f1,f10
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f2,f31,f10
	ctx.f2.f64 = double(float(f31.f64 * ctx.f10.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f11,f3,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f10,f2,f7
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * f22.f64));
	// fmuls f12,f11,f22
	ctx.f12.f64 = double(float(ctx.f11.f64 * f22.f64));
	// fmuls f11,f10,f22
	ctx.f11.f64 = double(float(ctx.f10.f64 * f22.f64));
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259f2c0
	if (ctx.cr6.lt) goto loc_8259F2C0;
loc_8259F528:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259f1d8
	if (ctx.cr6.lt) goto loc_8259F1D8;
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8259F564:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259f1bc
	if (ctx.cr6.lt) goto loc_8259F1BC;
loc_8259F578:
	// li r31,0
	r31.s64 = 0;
	// b 0x8259f588
	goto loc_8259F588;
loc_8259F580:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_8259F588:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F590;
	sub_8269CE98(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F598;
	sub_8269CE98(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F5A0;
	sub_8269CE98(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F5A8;
	sub_8269CE98(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259F5B0;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259F5B4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cdc
	ctx.lr = 0x8259F5C0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825C0B40) {
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
	ctx.lr = 0x825C0B48;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82503da0
	ctx.lr = 0x825C0B68;
	sub_82503DA0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x825c0bb4
	if (ctx.cr0.eq) goto loc_825C0BB4;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_825C0B90:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825c0b90
	if (ctx.cr6.lt) goto loc_825C0B90;
loc_825C0BB4:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r8,r8,36262
	ctx.r8.u64 = ctx.r8.u64 | 36262;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// li r26,3
	r26.s64 = 3;
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r27,0
	r27.s64 = 0;
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// li r29,0
	r29.s64 = 0;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c0c48
	if (ctx.cr6.eq) goto loc_825C0C48;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825C0C04:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// andc r7,r27,r7
	ctx.r7.u64 = r27.u64 & ~ctx.r7.u64;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r8,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r6.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r5,r26,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// andc r5,r29,r5
	ctx.r5.u64 = r29.u64 & ~ctx.r5.u64;
	// or r27,r7,r8
	r27.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r29,r5,r6
	r29.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x825c0c04
	if (!ctx.cr0.eq) goto loc_825C0C04;
loc_825C0C48:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// lwz r24,12(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0d94
	if (ctx.cr0.eq) goto loc_825C0D94;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x825c0d94
	if (!ctx.cr6.eq) goto loc_825C0D94;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_825C0C68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c0ca8
	if (ctx.cr6.eq) goto loc_825C0CA8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825c0c98
	if (ctx.cr6.eq) goto loc_825C0C98;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825c0c98
	if (!ctx.cr6.eq) goto loc_825C0C98;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825c0ca0
	if (!ctx.cr0.eq) goto loc_825C0CA0;
loc_825C0C98:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825c0c68
	goto loc_825C0C68;
loc_825C0CA0:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x825c0cac
	goto loc_825C0CAC;
loc_825C0CA8:
	// li r28,0
	r28.s64 = 0;
loc_825C0CAC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825c0d94
	if (ctx.cr6.eq) goto loc_825C0D94;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c0a88
	ctx.lr = 0x825C0CC4;
	sub_825C0A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0d94
	if (ctx.cr0.eq) goto loc_825C0D94;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0d50
	if (ctx.cr0.eq) goto loc_825C0D50;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r28,44
	ctx.r7.s64 = r28.s64 + 44;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r6,r9,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825C0CF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_825C0CFC:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x825c0d48
	if (!ctx.cr6.lt) goto loc_825C0D48;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r24.u32, ctx.xer);
	// bne cr6,0x825c0d2c
	if (!ctx.cr6.eq) goto loc_825C0D2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srw r5,r27,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0d38
	if (ctx.cr0.eq) goto loc_825C0D38;
loc_825C0D2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x825c0cfc
	goto loc_825C0CFC;
loc_825C0D38:
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r11,r27,r11
	ctx.r11.u64 = r27.u64 & ~ctx.r11.u64;
	// or r27,r11,r9
	r27.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_825C0D48:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x825c0cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C0CF4;
loc_825C0D50:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825c0d68
	goto loc_825C0D68;
loc_825C0D60:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825C0D68:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c0d60
	if (!ctx.cr6.eq) goto loc_825C0D60;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825C0D94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwimi r11,r27,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250c998
	ctx.lr = 0x825C0DB8;
	sub_8250C998(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825bb658
	ctx.lr = 0x825C0DCC;
	sub_825BB658(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825c0e2c
	goto loc_825C0E2C;
loc_825C0E24:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825C0E2C:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x825c0e24
	if (!ctx.cr6.eq) goto loc_825C0E24;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0e60
	if (ctx.cr0.eq) goto loc_825C0E60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x825C0E60;
	sub_8250AED8(ctx, base);
loc_825C0E60:
	// lbz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0e80
	if (ctx.cr0.eq) goto loc_825C0E80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825226b0
	ctx.lr = 0x825C0E74;
	sub_825226B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_825C0E80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825D2B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D2B80;
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
	// bne cr6,0x825d2bbc
	if (!ctx.cr6.eq) goto loc_825D2BBC;
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
	// li r7,1622
	ctx.r7.s64 = 1622;
	// bl 0x824ea978
	ctx.lr = 0x825D2BBC;
	sub_824EA978(ctx, base);
loc_825D2BBC:
	// li r4,615
	ctx.r4.s64 = 615;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2BC8;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d2c2c
	if (!ctx.cr6.eq) goto loc_825D2C2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2bec
	if (ctx.cr6.eq) goto loc_825D2BEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2BEC;
	sub_824F0950(ctx, base);
loc_825D2BEC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2c24
	if (ctx.cr6.eq) goto loc_825D2C24;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2c24
	if (ctx.cr6.eq) goto loc_825D2C24;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bctrl 
	ctx.lr = 0x825D2C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2C24:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2c84
	goto loc_825D2C84;
loc_825D2C2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2c48
	if (ctx.cr6.eq) goto loc_825D2C48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2C48;
	sub_824F0950(ctx, base);
loc_825D2C48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2c80
	if (ctx.cr6.eq) goto loc_825D2C80;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2c80
	if (ctx.cr6.eq) goto loc_825D2C80;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bctrl 
	ctx.lr = 0x825D2C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2C80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5928) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,20328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D6470) {
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
	ctx.lr = 0x825D6478;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,5624
	r28.s64 = ctx.r10.s64 + 5624;
	// bne cr6,0x825d64c4
	if (!ctx.cr6.eq) goto loc_825D64C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,23184
	ctx.r5.s64 = ctx.r11.s64 + 23184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D64C4;
	sub_824EA978(ctx, base);
loc_825D64C4:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x825d64e8
	if (ctx.cr6.lt) goto loc_825D64E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,6300
	ctx.r5.s64 = ctx.r11.s64 + 6300;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,562
	ctx.r7.s64 = 562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D64E8;
	sub_824EA978(ctx, base);
loc_825D64E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x825d650c
	if (!ctx.cr6.lt) goto loc_825D650C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,6288
	ctx.r5.s64 = ctx.r11.s64 + 6288;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,563
	ctx.r7.s64 = 563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D650C;
	sub_824EA978(ctx, base);
loc_825D650C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D6518;
	sub_824F02C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D652C;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d659c
	if (!ctx.cr6.eq) goto loc_825D659C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825d659c
	if (!ctx.cr6.eq) goto loc_825D659C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d6558
	if (ctx.cr6.eq) goto loc_825D6558;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D6558;
	sub_824F0950(ctx, base);
loc_825D6558:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d6594
	if (ctx.cr6.eq) goto loc_825D6594;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d6594
	if (ctx.cr6.eq) goto loc_825D6594;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x825D6594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6594:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d65f8
	goto loc_825D65F8;
loc_825D659C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d65b8
	if (ctx.cr6.eq) goto loc_825D65B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D65B8;
	sub_824F0950(ctx, base);
loc_825D65B8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d65f4
	if (ctx.cr6.eq) goto loc_825D65F4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d65f4
	if (ctx.cr6.eq) goto loc_825D65F4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x825D65F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D65F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D65F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825E0E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E0E60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825E0E80:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// bdnz 0x825e0e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E0E80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825f9ad0
	ctx.lr = 0x825E0EB0;
	sub_825F9AD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x825d7c78
	ctx.lr = 0x825E0ED4;
	sub_825D7C78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E68D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e6934
	if (!ctx.cr6.eq) goto loc_825E6934;
	// lwz r11,900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r10,900(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e6934
	if (!ctx.cr6.eq) goto loc_825E6934;
	// lwz r11,932(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r10,932(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 932);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e6934
	if (!ctx.cr6.eq) goto loc_825E6934;
	// lwz r11,908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,908(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 908);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e6934
	if (!ctx.cr6.eq) goto loc_825E6934;
	// lwz r11,936(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 936);
	// lwz r10,936(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 936);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e6934
	if (!ctx.cr6.eq) goto loc_825E6934;
	// lwz r11,916(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 916);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,916(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 916);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_825E6934:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EABE0) {
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
	ctx.lr = 0x825EABE8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r18,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r18.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r18,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r18.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r18,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r18.u32);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// stw r18,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r18.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// stw r18,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r18.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r24,r18
	r24.u64 = r18.u64;
loc_825EAC34:
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825eac4c
	if (!ctx.cr6.gt) goto loc_825EAC4C;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x825eac58
	goto loc_825EAC58;
loc_825EAC4C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r26,r10,r24
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
loc_825EAC58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eae04
	if (ctx.cr0.eq) goto loc_825EAE04;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825fcfa8
	ctx.lr = 0x825EAC6C;
	sub_825FCFA8(ctx, base);
	// lwz r28,28(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r17,2148(r16)
	r17.u64 = REX_LOAD_U32(r16.u32 + 2148);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x825eadec
	goto loc_825EADEC;
loc_825EAC7C:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eade8
	if (ctx.cr0.eq) goto loc_825EADE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAC9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825eade8
	if (ctx.cr0.eq) goto loc_825EADE8;
	// addi r11,r25,58
	ctx.r11.s64 = r25.s64 + 58;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r31
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825eacd0
	if (!ctx.cr6.eq) goto loc_825EACD0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,80(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825eade8
	if (ctx.cr6.eq) goto loc_825EADE8;
loc_825EACD0:
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 892);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// bgt cr6,0x825ead04
	if (ctx.cr6.gt) goto loc_825EAD04;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EACE8;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// add r11,r30,r17
	ctx.r11.u64 = r30.u64 + r17.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,892(r31)
	REX_STORE_U32(r31.u32 + 892, ctx.r11.u32);
	// b 0x825ead0c
	goto loc_825EAD0C;
loc_825EAD04:
	// subf r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - r17.u64;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_825EAD0C:
	// lwz r11,892(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 892);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// bgt cr6,0x825ead40
	if (ctx.cr6.gt) goto loc_825EAD40;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EAD24;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// add r11,r31,r17
	ctx.r11.u64 = r31.u64 + r17.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,892(r29)
	REX_STORE_U32(r29.u32 + 892, ctx.r11.u32);
	// b 0x825ead48
	goto loc_825EAD48;
loc_825EAD40:
	// subf r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - r17.u64;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
loc_825EAD48:
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000;
	// lwz r4,4(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAD5C;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ead7c
	if (!ctx.cr6.lt) goto loc_825EAD7C;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825ead88
	goto loc_825EAD88;
loc_825EAD7C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAD88;
	sub_825F7718(ctx, base);
loc_825EAD88:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eada8
	if (!ctx.cr6.lt) goto loc_825EADA8;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eadb4
	goto loc_825EADB4;
loc_825EADA8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EADB4;
	sub_825F7718(ctx, base);
loc_825EADB4:
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eadd4
	if (!ctx.cr6.lt) goto loc_825EADD4;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eade0
	goto loc_825EADE0;
loc_825EADD4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EADE0;
	sub_825F7718(ctx, base);
loc_825EADE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_825EADE8:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_825EADEC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825eac7c
	if (!ctx.cr6.eq) goto loc_825EAC7C;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x825eac34
	goto loc_825EAC34;
loc_825EAE04:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x825eae9c
	if (ctx.cr0.lt) goto loc_825EAE9C;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_825EAE14:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eae2c
	if (!ctx.cr6.lt) goto loc_825EAE2C;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825eae38
	goto loc_825EAE38;
loc_825EAE2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAE38;
	sub_825F7718(ctx, base);
loc_825EAE38:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eae5c
	if (!ctx.cr6.lt) goto loc_825EAE5C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eae64
	goto loc_825EAE64;
loc_825EAE5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAE64;
	sub_825F7718(ctx, base);
loc_825EAE64:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825eae90
	if (ctx.cr6.eq) goto loc_825EAE90;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EAE7C;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// bl 0x825f7658
	ctx.lr = 0x825EAE90;
	sub_825F7658(ctx, base);
loc_825EAE90:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x825eae14
	if (!ctx.cr0.lt) goto loc_825EAE14;
loc_825EAE9C:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825eaecc
	if (!ctx.cr6.eq) goto loc_825EAECC;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825eb078
	if (!ctx.cr6.eq) goto loc_825EB078;
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r11,2148(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 2148);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,2148(r16)
	REX_STORE_U32(r16.u32 + 2148, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_825EAECC:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eaeec
	if (!ctx.cr6.lt) goto loc_825EAEEC;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eaef8
	goto loc_825EAEF8;
loc_825EAEEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAEF8;
	sub_825F7718(ctx, base);
loc_825EAEF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// srawi r28,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r28.s64 = ctx.r11.s32 >> 16;
	// clrlwi r27,r11,16
	r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x825f7658
	ctx.lr = 0x825EAF10;
	sub_825F7658(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eaf2c
	if (!ctx.cr6.lt) goto loc_825EAF2C;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eaf38
	goto loc_825EAF38;
loc_825EAF2C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAF38;
	sub_825F7718(ctx, base);
loc_825EAF38:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r29,56(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bge cr6,0x825eaf5c
	if (!ctx.cr6.lt) goto loc_825EAF5C;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eaf6c
	goto loc_825EAF6C;
loc_825EAF5C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAF68;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825EAF6C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 12);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825f9ad0
	ctx.lr = 0x825EAF7C;
	sub_825F9AD0(ctx, base);
	// stw r18,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r18.u32);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eafa4
	if (!ctx.cr6.lt) goto loc_825EAFA4;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eafb0
	goto loc_825EAFB0;
loc_825EAFA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAFB0;
	sub_825F7718(ctx, base);
loc_825EAFB0:
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825EAFC0;
	sub_825D7C78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825EAFCC;
	sub_825FCB18(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eafe8
	if (!ctx.cr6.lt) goto loc_825EAFE8;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eaff4
	goto loc_825EAFF4;
loc_825EAFE8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EAFF4;
	sub_825F7718(ctx, base);
loc_825EAFF4:
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x825eb06c
	if (ctx.cr0.lt) goto loc_825EB06C;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_825EB008:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eb020
	if (!ctx.cr6.lt) goto loc_825EB020;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825eb02c
	goto loc_825EB02C;
loc_825EB020:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EB02C;
	sub_825F7718(ctx, base);
loc_825EB02C:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825eb04c
	if (ctx.cr6.eq) goto loc_825EB04C;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x825eb008
	if (!ctx.cr0.lt) goto loc_825EB008;
	// b 0x825eb06c
	goto loc_825EB06C;
loc_825EB04C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EB058;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// bl 0x825f7658
	ctx.lr = 0x825EB06C;
	sub_825F7658(ctx, base);
loc_825EB06C:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825eaecc
	if (!ctx.cr6.eq) goto loc_825EAECC;
loc_825EB078:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eae9c
	if (ctx.cr6.eq) goto loc_825EAE9C;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eb0a0
	if (!ctx.cr6.lt) goto loc_825EB0A0;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eb0ac
	goto loc_825EB0AC;
loc_825EB0A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EB0AC;
	sub_825F7718(ctx, base);
loc_825EB0AC:
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// clrlwi r29,r28,16
	r29.u64 = r28.u32 & 0xFFFF;
	// bl 0x825f7658
	ctx.lr = 0x825EB0C0;
	sub_825F7658(ctx, base);
	// lwz r10,12(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1524(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1524);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// stw r30,1524(r10)
	REX_STORE_U32(ctx.r10.u32 + 1524, r30.u32);
	// lwz r4,12(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825EB0DC;
	sub_825F9AD0(ctx, base);
	// stw r30,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// stw r18,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r18.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eb104
	if (!ctx.cr6.lt) goto loc_825EB104;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825eb110
	goto loc_825EB110;
loc_825EB104:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EB110;
	sub_825F7718(ctx, base);
loc_825EB110:
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825EB120;
	sub_825D7C78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825EB12C;
	sub_825FCB18(ctx, base);
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 892);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// bgt cr6,0x825eb160
	if (ctx.cr6.gt) goto loc_825EB160;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EB144;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// add r11,r30,r17
	ctx.r11.u64 = r30.u64 + r17.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,892(r31)
	REX_STORE_U32(r31.u32 + 892, ctx.r11.u32);
	// b 0x825eb168
	goto loc_825EB168;
loc_825EB160:
	// subf r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - r17.u64;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_825EB168:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825eb184
	if (!ctx.cr6.lt) goto loc_825EB184;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825eb190
	goto loc_825EB190;
loc_825EB184:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EB190;
	sub_825F7718(ctx, base);
loc_825EB190:
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825EB1A0;
	sub_825F7718(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// b 0x825eae9c
	goto loc_825EAE9C;
}

DEFINE_REX_FUNC(sub_826118B0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826118E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260f988
	ctx.lr = 0x826118EC;
	sub_8260F988(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261190c
	if (ctx.cr6.eq) goto loc_8261190C;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261190c
	if (ctx.cr6.eq) goto loc_8261190C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82611910
	goto loc_82611910;
loc_8261190C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82611910:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// ld r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 496);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261194C;
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

DEFINE_REX_FUNC(sub_82615350) {
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
	ctx.lr = 0x82615358;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82615398
	if (!ctx.cr0.eq) goto loc_82615398;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82615384
	if (!ctx.cr6.eq) goto loc_82615384;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82615398
	goto loc_82615398;
loc_82615384:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,32
	ctx.r10.s64 = 32;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82615398:
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// sth r6,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r6.u16);
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r7,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// clrlwi r28,r5,16
	r28.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r29,14(r31)
	REX_STORE_U16(r31.u32 + 14, r29.u16);
	// sth r10,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r10.u16);
	// clrlwi r30,r6,16
	r30.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x826153e8
	if (ctx.cr6.eq) goto loc_826153E8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// sth r11,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r11.u16);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x8261545c
	goto loc_8261545C;
loc_826153E8:
	// lhz r11,246(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 246);
	// li r10,7
	ctx.r10.s64 = 7;
	// mulli r9,r30,7
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(7));
	// sth r10,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,20
	ctx.r6.s64 = r31.s64 + 20;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r10,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r10.u16);
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-14904
	ctx.r11.s64 = ctx.r11.s64 + -14904;
loc_82615440:
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lhzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x82615440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82615440;
loc_8261545C:
	// cmplwi cr6,r4,40
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 40, ctx.xer);
	// beq cr6,0x8261546c
	if (ctx.cr6.eq) goto loc_8261546C;
	// sth r5,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// b 0x82615504
	goto loc_82615504;
loc_8261546C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,-2
	ctx.r10.s64 = -2;
	// addi r9,r11,2720
	ctx.r9.s64 = ctx.r11.s64 + 2720;
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,2720(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2720);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x826a1e70
	ctx.lr = 0x826154B4;
	sub_826A1E70(ctx, base);
	// clrlwi. r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne 0x826154c4
	if (!ctx.cr0.eq) goto loc_826154C4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_826154C4:
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// bne cr6,0x82615500
	if (!ctx.cr6.eq) goto loc_82615500;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x826154f8
	if (ctx.cr6.lt) goto loc_826154F8;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(r30.u32, 8, ctx.xer);
	// bgt cr6,0x826154f8
	if (ctx.cr6.gt) goto loc_826154F8;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-13504
	ctx.r11.s64 = ctx.r11.s64 + -13504;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_826154F8:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82615504
	goto loc_82615504;
loc_82615500:
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
loc_82615504:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82626564) {
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

DEFINE_REX_FUNC(sub_82626B50) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// addi r11,r11,2232
	ctx.r11.s64 = ctx.r11.s64 + 2232;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 556);
	// b 0x82626b9c
	goto loc_82626B9C;
loc_82626B80:
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
loc_82626B9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82626b80
	if (!ctx.cr6.eq) goto loc_82626B80;
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// addi r31,r30,132
	r31.s64 = r30.s64 + 132;
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lwz r10,336(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 336);
	// b 0x82626bd4
	goto loc_82626BD4;
loc_82626BB8:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r8.u32);
loc_82626BD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82626bb8
	if (!ctx.cr6.eq) goto loc_82626BB8;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// bl 0x8260c698
	ctx.lr = 0x82626BE8;
	sub_8260C698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c698
	ctx.lr = 0x82626BF0;
	sub_8260C698(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x8260b670
	ctx.lr = 0x82626BF8;
	sub_8260B670(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82626588
	ctx.lr = 0x82626C00;
	sub_82626588(ctx, base);
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

DEFINE_REX_FUNC(sub_82629910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82629918;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,31748(r8)
	REX_STORE_U32(ctx.r8.u32 + 31748, ctx.r11.u32);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,32
	ctx.r7.s64 = 32;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82615510
	ctx.lr = 0x82629954;
	sub_82615510(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82629a64
	if (ctx.cr0.eq) goto loc_82629A64;
	// lhz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// rotlwi r4,r11,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r4,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r4.u32);
	// addi r3,r10,20576
	ctx.r3.s64 = ctx.r10.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8260b5b8
	ctx.lr = 0x82629984;
	sub_8260B5B8(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82629a64
	if (ctx.cr0.eq) goto loc_82629A64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82625d70
	ctx.lr = 0x8262999C;
	sub_82625D70(ctx, base);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82629a64
	if (ctx.cr0.eq) goto loc_82629A64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82629a64
	if (ctx.cr6.eq) goto loc_82629A64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82625d70
	ctx.lr = 0x826299BC;
	sub_82625D70(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82629a64
	if (ctx.cr0.eq) goto loc_82629A64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82629a64
	if (ctx.cr6.eq) goto loc_82629A64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82625d70
	ctx.lr = 0x826299DC;
	sub_82625D70(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82629a64
	if (ctx.cr0.eq) goto loc_82629A64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82629a64
	if (ctx.cr6.eq) goto loc_82629A64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x82793ec4
	ctx.lr = 0x826299F8;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r29,r11,-5944
	r29.s64 = ctx.r11.s64 + -5944;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x82629A08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-32120
	r31.s64 = -2105016320;
	// lwz r11,22040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82629a2c
	if (!ctx.cr6.eq) goto loc_82629A2C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-5960
	ctx.r3.s64 = ctx.r11.s64 + -5960;
	// bl 0x82793df4
	ctx.lr = 0x82629A28;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lwz r11,22040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22040);
loc_82629A2C:
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,22008
	ctx.r10.s64 = ctx.r10.s64 + 22008;
	// stw r11,22040(r31)
	REX_STORE_U32(r31.u32 + 22040, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82629A44:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82629a70
	if (ctx.cr6.eq) goto loc_82629A70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82629a44
	if (ctx.cr6.lt) goto loc_82629A44;
	// b 0x82629a78
	goto loc_82629A78;
loc_82629A64:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82629a8c
	goto loc_82629A8C;
loc_82629A70:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
loc_82629A78:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x82629A88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82793eb4
	ctx.lr = 0x82629A8C;
	__imp__KeLeaveCriticalRegion(ctx, base);
loc_82629A8C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82637630) {
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
	ctx.lr = 0x82637638;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82637738
	if (!ctx.cr6.gt) goto loc_82637738;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263765C;
	sub_826E07E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// beq cr6,0x82637744
	if (ctx.cr6.eq) goto loc_82637744;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82637678;
	sub_826A2E60(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82637738
	if (!ctx.cr6.gt) goto loc_82637738;
	// li r29,0
	r29.s64 = 0;
loc_8263768C:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x82637698;
	sub_826E07E0(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r3,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82637744
	if (ctx.cr6.eq) goto loc_82637744;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826376C4;
	sub_826A2E60(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82637724
	if (!ctx.cr6.gt) goto loc_82637724;
	// li r30,0
	r30.s64 = 0;
loc_826376D8:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x826e07e0
	ctx.lr = 0x826376E0;
	sub_826E07E0(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82637744
	if (ctx.cr6.eq) goto loc_82637744;
	// li r5,28
	ctx.r5.s64 = 28;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82637710;
	sub_826A2E60(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826376d8
	if (ctx.cr6.lt) goto loc_826376D8;
loc_82637724:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8263768c
	if (ctx.cr6.lt) goto loc_8263768C;
loc_82637738:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82637744:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8263EA50) {
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
	ctx.lr = 0x8263EA58;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r9,r9,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(152));
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r28,r9,r10
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bne cr6,0x8263eac0
	if (!ctx.cr6.eq) goto loc_8263EAC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8263EAC0:
	// addi r30,r11,224
	r30.s64 = ctx.r11.s64 + 224;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8263eba8
	if (!ctx.cr6.eq) goto loc_8263EBA8;
	// bl 0x82638d80
	ctx.lr = 0x8263EAE0;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263edb4
	if (ctx.cr6.lt) goto loc_8263EDB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263eb38
	if (!ctx.cr6.eq) goto loc_8263EB38;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lfs f0,-11456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f13,-11460(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -11460);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8263EB38:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263EB4C;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263edb4
	if (ctx.cr6.lt) goto loc_8263EDB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263edb4
	if (!ctx.cr6.eq) goto loc_8263EDB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f13,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8263EBA8:
	// bl 0x82638d80
	ctx.lr = 0x8263EBAC;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263edb4
	if (ctx.cr6.lt) goto loc_8263EDB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263ec70
	if (!ctx.cr6.eq) goto loc_8263EC70;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8263ec3c
	if (ctx.cr6.lt) goto loc_8263EC3C;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
loc_8263EBF4:
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stfsx f0,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f0,r4,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// blt cr6,0x8263ebf4
	if (ctx.cr6.lt) goto loc_8263EBF4;
loc_8263EC3C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x8263edb4
	if (!ctx.cr6.lt) goto loc_8263EDB4;
	// subf r9,r11,r28
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8263EC54:
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8263ec54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263EC54;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8263EC70:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263EC84;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263edb4
	if (ctx.cr6.lt) goto loc_8263EDB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263edac
	if (!ctx.cr6.eq) goto loc_8263EDAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x8263edb4
	if (!ctx.cr6.gt) goto loc_8263EDB4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
loc_8263ECBC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x8263ed50
	if (ctx.cr6.lt) goto loc_8263ED50;
	// lwz r9,548(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,3
	r30.s64 = ctx.r6.s64 + 3;
	// addi r29,r28,-3
	r29.s64 = r28.s64 + -3;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
loc_8263ECE4:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r23,148(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r22,r4,2
	r22.s64 = ctx.r4.s64 + 2;
	// add r21,r30,r11
	r21.u64 = r30.u64 + ctx.r11.u64;
	// stfsx f0,r7,r23
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + r23.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// rlwinm r7,r21,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f12,-4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfsx f12,r4,r5
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfsx f11,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// stfsx f11,r7,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// blt cr6,0x8263ece4
	if (ctx.cr6.lt) goto loc_8263ECE4;
loc_8263ED50:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x8263ed94
	if (!ctx.cr6.lt) goto loc_8263ED94;
	// lwz r9,548(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r28
	ctx.r7.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwzx r9,r5,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r27.u32);
loc_8263ED74:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsx f0,r5,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// bdnz 0x8263ed74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263ED74;
loc_8263ED94:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// bne 0x8263ecbc
	if (!ctx.cr0.eq) goto loc_8263ECBC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8263EDAC:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
loc_8263EDB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82650430) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82650438;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r29.u64);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8265d780
	ctx.lr = 0x82650468;
	sub_8265D780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82650534
	if (ctx.cr0.lt) goto loc_82650534;
	// ld r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 664);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// li r8,8
	ctx.r8.s64 = 8;
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r29.u64);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// ori r6,r6,7
	ctx.r6.u64 = ctx.r6.u64 | 7;
	// std r11,664(r31)
	REX_STORE_U64(r31.u32 + 664, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8265d780
	ctx.lr = 0x826504A4;
	sub_8265D780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82650534
	if (ctx.cr0.lt) goto loc_82650534;
	// ld r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 672);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// std r11,672(r31)
	REX_STORE_U64(r31.u32 + 672, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8265d780
	ctx.lr = 0x826504E0;
	sub_8265D780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82650534
	if (ctx.cr0.lt) goto loc_82650534;
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 728);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// ori r6,r6,6
	ctx.r6.u64 = ctx.r6.u64 | 6;
	// stw r11,728(r31)
	REX_STORE_U32(r31.u32 + 728, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8265d780
	ctx.lr = 0x8265051C;
	sub_8265D780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82650534
	if (ctx.cr0.lt) goto loc_82650534;
	// lwz r11,732(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 732);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r11.u32);
loc_82650534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82658338) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8265838c
	if (ctx.cr6.eq) goto loc_8265838C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82658380
	if (!ctx.cr6.eq) goto loc_82658380;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82658380
	if (ctx.cr6.eq) goto loc_82658380;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265838c
	if (!ctx.cr0.eq) goto loc_8265838C;
loc_82658380:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x826585b8
	goto loc_826585B8;
loc_8265838C:
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826583c4
	if (ctx.cr6.eq) goto loc_826583C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826583bc
	if (ctx.cr0.eq) goto loc_826583BC;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x826585b8
	goto loc_826585B8;
loc_826583BC:
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x826585b8
	goto loc_826585B8;
loc_826583C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// slw r30,r11,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652168
	ctx.lr = 0x826583E4;
	sub_82652168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826585b8
	if (ctx.cr0.lt) goto loc_826585B8;
	// lbz r11,170(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 170);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 168);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82658410
	if (ctx.cr6.lt) goto loc_82658410;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,20994
	ctx.r3.u64 = ctx.r3.u64 | 20994;
	// b 0x826585b8
	goto loc_826585B8;
loc_82658410:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,380
	ctx.r10.s64 = r31.s64 + 380;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82658420:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265843c
	if (ctx.cr6.eq) goto loc_8265843C;
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8265843c
	if (!ctx.cr6.eq) goto loc_8265843C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8265843C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82658420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82658420;
	// lwz r11,396(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r8,r11,4,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82658468
	if (ctx.cr0.eq) goto loc_82658468;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82658468
	if (ctx.cr6.eq) goto loc_82658468;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,21001
	ctx.r3.u64 = ctx.r3.u64 | 21001;
	// b 0x826585b8
	goto loc_826585B8;
loc_82658468:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,254
	ctx.r6.s64 = 254;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655208
	ctx.lr = 0x82658480;
	sub_82655208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826585b8
	if (ctx.cr0.lt) goto loc_826585B8;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826584cc
	if (ctx.cr6.eq) goto loc_826584CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8264dd38
	ctx.lr = 0x826584A8;
	sub_8264DD38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826584cc
	if (ctx.cr0.eq) goto loc_826584CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x826584B8;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826585b8
	if (ctx.cr0.lt) goto loc_826585B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x826585b8
	goto loc_826585B8;
loc_826584CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654388
	ctx.lr = 0x826584D4;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826585b8
	if (ctx.cr0.lt) goto loc_826585B8;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82658500
	if (ctx.cr0.eq) goto loc_82658500;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656c50
	ctx.lr = 0x826584F8;
	sub_82656C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826585b8
	if (ctx.cr0.lt) goto loc_826585B8;
loc_82658500:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654b58
	ctx.lr = 0x8265850C;
	sub_82654B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826585b8
	if (ctx.cr0.lt) goto loc_826585B8;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658540
	if (ctx.cr6.eq) goto loc_82658540;
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// b 0x826585b4
	goto loc_826585B4;
loc_82658540:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8264c918
	ctx.lr = 0x8265854C;
	sub_8264C918(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8265dd20
	ctx.lr = 0x82658568;
	sub_8265DD20(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// addi r11,r10,95
	ctx.r11.s64 = ctx.r10.s64 + 95;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826585B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826585B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826585B8:
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

DEFINE_REX_FUNC(sub_82666D88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82666D90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r30,32(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82666e28
	if (ctx.cr0.eq) goto loc_82666E28;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82671ac0
	ctx.lr = 0x82666DC4;
	sub_82671AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82666e38
	if (ctx.cr0.eq) goto loc_82666E38;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82666de8
	if (ctx.cr0.eq) goto loc_82666DE8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82666e20
	if (ctx.cr6.eq) goto loc_82666E20;
loc_82666DE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82666e04
	goto loc_82666E04;
loc_82666DF0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82666e20
	if (ctx.cr6.eq) goto loc_82666E20;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82666E04:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82671978
	ctx.lr = 0x82666E14;
	sub_82671978(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82666df0
	if (!ctx.cr0.eq) goto loc_82666DF0;
	// b 0x82666e38
	goto loc_82666E38;
loc_82666E20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82666e3c
	goto loc_82666E3C;
loc_82666E28:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82666e3c
	if (ctx.cr6.eq) goto loc_82666E3C;
loc_82666E38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82666E3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8266BB58) {
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
	ctx.lr = 0x8266BB60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r10,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// rlwimi r11,r10,26,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r8,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,428(r3)
	REX_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// addi r27,r3,240
	r27.s64 = ctx.r3.s64 + 240;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// b 0x8266bc30
	goto loc_8266BC30;
loc_8266BB98:
	// addi r30,r26,-4
	r30.s64 = r26.s64 + -4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661f28
	ctx.lr = 0x8266BBAC;
	sub_82661F28(ctx, base);
	// lwz r11,288(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 288);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266bc00
	if (ctx.cr0.eq) goto loc_8266BC00;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82672760
	ctx.lr = 0x8266BBC8;
	sub_82672760(ctx, base);
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,292(r30)
	REX_STORE_U32(r30.u32 + 292, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826748e8
	ctx.lr = 0x8266BBE8;
	sub_826748E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82672c40
	ctx.lr = 0x8266BBF8;
	sub_82672C40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8266bc7c
	if (!ctx.cr6.eq) goto loc_8266BC7C;
loc_8266BC00:
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266bc2c
	if (ctx.cr0.eq) goto loc_8266BC2C;
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,292(r30)
	REX_STORE_U32(r30.u32 + 292, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661c08
	ctx.lr = 0x8266BC24;
	sub_82661C08(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266bc7c
	if (!ctx.cr0.eq) goto loc_8266BC7C;
loc_8266BC2C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_8266BC30:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8266bc44
	if (ctx.cr6.eq) goto loc_8266BC44;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// bne 0x8266bb98
	if (!ctx.cr0.eq) goto loc_8266BB98;
loc_8266BC44:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// li r5,15000
	ctx.r5.s64 = 15000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// addi r3,r31,388
	ctx.r3.s64 = r31.s64 + 388;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// bl 0x82671018
	ctx.lr = 0x8266BC60;
	sub_82671018(ctx, base);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8266bc78
	if (!ctx.cr6.gt) goto loc_8266BC78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266b038
	ctx.lr = 0x8266BC78;
	sub_8266B038(ctx, base);
loc_8266BC78:
	// li r29,0
	r29.s64 = 0;
loc_8266BC7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82672760) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// b 0x82672780
	goto loc_82672780;
loc_8267276C:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82672798
	if (ctx.cr6.eq) goto loc_82672798;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82672780:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82672790
	if (ctx.cr6.eq) goto loc_82672790;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267276c
	if (!ctx.cr0.eq) goto loc_8267276C;
loc_82672790:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82672798:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82672798
	if (!ctx.cr0.eq) goto loc_82672798;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675A50) {
	REX_FUNC_PROLOGUE();
	// b 0x82678990
	sub_82678990(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675A68) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r3,r3,-208
	ctx.r3.s64 = ctx.r3.s64 + -208;
	// addi r7,r11,30
	ctx.r7.s64 = ctx.r11.s64 + 30;
	// b 0x826781d0
	sub_826781D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675CF0) {
	REX_FUNC_PROLOGUE();
	// b 0x8267e780
	sub_8267E780(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675DC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 68);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826765E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826765F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,220(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,61
	ctx.r3.s64 = r31.s64 + 61;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r5,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stw r5,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r6,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stb r10,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r10.u8);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x826a1e70
	ctx.lr = 0x82676660;
	sub_826A1E70(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267668c
	if (ctx.cr6.eq) goto loc_8267668C;
loc_82676670:
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
	// bne 0x82676670
	if (!ctx.cr0.eq) goto loc_82676670;
loc_8267668C:
	// lis r10,4626
	ctx.r10.s64 = 303169536;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// ori r11,r10,4626
	ctx.r11.u64 = ctx.r10.u64 | 4626;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267A260) {
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
	ctx.lr = 0x8267A268;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,40
	r24.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267A284;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r27,r31,476
	r27.s64 = r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826825c0
	ctx.lr = 0x8267A2A0;
	sub_826825C0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8267a300
	if (!ctx.cr0.eq) goto loc_8267A300;
	// addi r26,r31,592
	r26.s64 = r31.s64 + 592;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,676
	ctx.r5.s64 = r31.s64 + 676;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826828d8
	ctx.lr = 0x8267A2C4;
	sub_826828D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8267a31c
	if (!ctx.cr0.eq) goto loc_8267A31C;
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// rlwinm r10,r30,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000000;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267a2f0
	if (!ctx.cr6.eq) goto loc_8267A2F0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82682570
	ctx.lr = 0x8267A2E8;
	sub_82682570(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8267a304
	goto loc_8267A304;
loc_8267A2F0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82682838
	ctx.lr = 0x8267A2F8;
	sub_82682838(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8267a304
	goto loc_8267A304;
loc_8267A300:
	// li r29,0
	r29.s64 = 0;
loc_8267A304:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8267a314
	if (ctx.cr6.eq) goto loc_8267A314;
	// stw r25,160(r28)
	REX_STORE_U32(r28.u32 + 160, r25.u32);
	// b 0x8267a320
	goto loc_8267A320;
loc_8267A314:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8267a328
	if (ctx.cr6.eq) goto loc_8267A328;
loc_8267A31C:
	// stw r25,84(r29)
	REX_STORE_U32(r29.u32 + 84, r25.u32);
loc_8267A320:
	// li r31,0
	r31.s64 = 0;
	// b 0x8267a330
	goto loc_8267A330;
loc_8267A328:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4111
	r31.u64 = r31.u64 | 4111;
loc_8267A330:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267A338;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8267FE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267FE80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x827938a4
	ctx.lr = 0x8267FE98;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8267ff58
	if (ctx.cr6.eq) goto loc_8267FF58;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82680a30
	ctx.lr = 0x8267FEB0;
	sub_82680A30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8267ff48
	if (ctx.cr6.eq) goto loc_8267FF48;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8267ff38
	if (ctx.cr6.eq) goto loc_8267FF38;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8267ff28
	if (ctx.cr6.eq) goto loc_8267FF28;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8267ff18
	if (ctx.cr6.eq) goto loc_8267FF18;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8267ff08
	if (ctx.cr6.eq) goto loc_8267FF08;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x8267fef8
	if (ctx.cr6.eq) goto loc_8267FEF8;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bne cr6,0x8267ff58
	if (!ctx.cr6.eq) goto loc_8267FF58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267fc18
	ctx.lr = 0x8267FEF4;
	sub_8267FC18(ctx, base);
	// b 0x8267ff54
	goto loc_8267FF54;
loc_8267FEF8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d980
	ctx.lr = 0x8267FF04;
	sub_8267D980(ctx, base);
	// b 0x8267ff54
	goto loc_8267FF54;
loc_8267FF08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d530
	ctx.lr = 0x8267FF14;
	sub_8267D530(ctx, base);
	// b 0x8267ff54
	goto loc_8267FF54;
loc_8267FF18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b7f8
	ctx.lr = 0x8267FF24;
	sub_8267B7F8(ctx, base);
	// b 0x8267ff54
	goto loc_8267FF54;
loc_8267FF28:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b730
	ctx.lr = 0x8267FF34;
	sub_8267B730(ctx, base);
	// b 0x8267ff54
	goto loc_8267FF54;
loc_8267FF38:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d8e8
	ctx.lr = 0x8267FF44;
	sub_8267D8E8(ctx, base);
	// b 0x8267ff54
	goto loc_8267FF54;
loc_8267FF48:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d668
	ctx.lr = 0x8267FF54;
	sub_8267D668(ctx, base);
loc_8267FF54:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8267FF58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267cae0
	ctx.lr = 0x8267FF60;
	sub_8267CAE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82683298) {
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
	ctx.lr = 0x826832A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8265d838
	ctx.lr = 0x826832C4;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826832d8
	if (!ctx.cr0.eq) goto loc_826832D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826832f4
	goto loc_826832F4;
loc_826832D8:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82682ee8
	ctx.lr = 0x826832EC;
	sub_82682EE8(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826832F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826852A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r9,r3,72
	ctx.r9.s64 = ctx.r3.s64 + 72;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
loc_826852B8:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r8,140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lwz r6,40(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8268534c
	if (!ctx.cr6.lt) goto loc_8268534C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82685310
	if (ctx.cr6.eq) goto loc_82685310;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82685310:
	// lhz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 76);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268533c
	if (!ctx.cr0.eq) goto loc_8268533C;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,564(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 564);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,564(r8)
	REX_STORE_U32(ctx.r8.u32 + 564, ctx.r11.u32);
	// lhz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 76);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// sth r11,76(r10)
	REX_STORE_U16(ctx.r10.u32 + 76, ctx.r11.u16);
loc_8268533C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826852b8
	if (!ctx.cr6.eq) goto loc_826852B8;
loc_8268534C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subfc r10,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x826829f0
	sub_826829F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8268B1C0) {
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
	ctx.lr = 0x8268B1C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// lwz r9,24(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bl 0x8268f0e8
	ctx.lr = 0x8268B210;
	sub_8268F0E8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x8268b288
	if (ctx.cr0.lt) goto loc_8268B288;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268b26c
	if (!ctx.cr6.gt) goto loc_8268B26C;
	// li r30,0
	r30.s64 = 0;
loc_8268B22C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8268ab68
	ctx.lr = 0x8268B258;
	sub_8268AB68(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268b22c
	if (ctx.cr6.lt) goto loc_8268B22C;
loc_8268B26C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268b288
	if (!ctx.cr6.eq) goto loc_8268B288;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8268fd38
	ctx.lr = 0x8268B284;
	sub_8268FD38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8268B288:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82692818) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82692820;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82692888
	if (ctx.cr6.lt) goto loc_82692888;
	// beq cr6,0x82692850
	if (ctx.cr6.eq) goto loc_82692850;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82692840
	if (ctx.cr6.lt) goto loc_82692840;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82692980
	goto loc_82692980;
loc_82692840:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r29,6
	r29.s64 = 6;
	// addi r30,r11,23832
	r30.s64 = ctx.r11.s64 + 23832;
	// b 0x82692894
	goto loc_82692894;
loc_82692850:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8269287c
	if (ctx.cr6.eq) goto loc_8269287C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
loc_82692864:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82692864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82692864;
loc_8269287C:
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x8269288c
	goto loc_8269288C;
loc_82692888:
	// li r29,2
	r29.s64 = 2;
loc_8269288C:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r30,r11,23576
	r30.s64 = ctx.r11.s64 + 23576;
loc_82692894:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82692978
	if (ctx.cr6.eq) goto loc_82692978;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r4,-2
	ctx.r7.s64 = ctx.r4.s64 + -2;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lfd f11,-9920(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + -9920);
	// lfd f12,-3744(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_826928B8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82692900
	if (ctx.cr6.eq) goto loc_82692900;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
loc_826928CC:
	// lhau r11,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r5.u32 = ea;
	// std r11,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f13,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmul f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f11.f64;
	// stfdx f13,r10,r3
	REX_STORE_U64(ctx.r10.u32 + ctx.r3.u32, ctx.f13.u64);
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// stw r11,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// bdnz 0x826928cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826928CC;
loc_82692900:
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r8,256(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82692914:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfdu f13,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.f13.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,3,24,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// lfdx f10,r9,r3
	ctx.f10.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// fmadd f0,f10,f13,f0
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64);
	// bdnz 0x82692914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82692914;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f0.u64);
	// lwz r10,-36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r10,-32767
	ctx.r11.s64 = ctx.r10.s64 + -32767;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sthu r11,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r7.u32 = ea;
	// blt cr6,0x826928b8
	if (ctx.cr6.lt) goto loc_826928B8;
loc_82692978:
	// divwu r3,r31,r29
	ctx.r3.u64 = uint32_t(r29.u32 ? r31.u32 / r29.u32 : 0);
	// twllei r29,0
	if (r29.s32 == 0 || r29.u32 < 0u) ppc_trap(ctx, base, 0);
loc_82692980:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269BBC0) {
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
	ctx.lr = 0x8269BBC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,23
	ctx.r8.s64 = 23;
	// rlwinm r28,r5,20,0,11
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFF00000;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// extsh r23,r5
	r23.s64 = ctx.r5.s16;
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-r28.u64);
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_8269BBEC:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mulli r7,r7,12288
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(12288));
	// srawi r7,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 15;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// mulli r8,r8,24576
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24576));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addis r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 524288;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lhau r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r9.u32 = ea;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8269bbec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269BBEC;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,264
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(264));
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// mulli r11,r11,528
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(528));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8269bb60
	ctx.lr = 0x8269BC40;
	sub_8269BB60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,1
	r26.s64 = 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x8269bd84
	if (ctx.cr6.eq) goto loc_8269BD84;
	// subf r9,r28,r11
	ctx.r9.u64 = ctx.r11.u64 - r28.u64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// mulli r10,r10,264
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(264));
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// mulli r9,r9,528
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(528));
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8269BC6C:
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x8269bb60
	ctx.lr = 0x8269BC80;
	sub_8269BB60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r28,r31
	ctx.r9.u64 = r31.u64 - r28.u64;
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// srawi r8,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 20;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mullw. r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8269bca8
	if (!ctx.cr0.gt) goto loc_8269BCA8;
	// cmpwi cr6,r26,20
	ctx.cr6.compare<int32_t>(r26.s32, 20, ctx.xer);
	// blt cr6,0x8269bc6c
	if (ctx.cr6.lt) goto loc_8269BC6C;
loc_8269BCA8:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x8269bd84
	if (ctx.cr6.eq) goto loc_8269BD84;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8269bcc4
	if (!ctx.cr6.gt) goto loc_8269BCC4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x8269bcd4
	goto loc_8269BCD4;
loc_8269BCC4:
	// mr r29,r30
	r29.u64 = r30.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8269BCD4:
	// li r25,0
	r25.s64 = 0;
loc_8269BCD8:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x8269bb60
	ctx.lr = 0x8269BCE8;
	sub_8269BB60(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,20
	ctx.cr6.compare<int32_t>(r26.s32, 20, ctx.xer);
	// blt cr6,0x8269bcf8
	if (ctx.cr6.lt) goto loc_8269BCF8;
	// li r25,1
	r25.s64 = 1;
loc_8269BCF8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8269bd1c
	if (!ctx.cr0.gt) goto loc_8269BD1C;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8269bd10
	if (!ctx.cr6.eq) goto loc_8269BD10;
	// li r25,1
	r25.s64 = 1;
loc_8269BD10:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x8269bd40
	goto loc_8269BD40;
loc_8269BD1C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8269bd3c
	if (!ctx.cr6.lt) goto loc_8269BD3C;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8269bd30
	if (!ctx.cr6.eq) goto loc_8269BD30;
	// li r25,1
	r25.s64 = 1;
loc_8269BD30:
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x8269bd40
	goto loc_8269BD40;
loc_8269BD3C:
	// li r25,1
	r25.s64 = 1;
loc_8269BD40:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8269bcd8
	if (ctx.cr6.eq) goto loc_8269BCD8;
	// subf r11,r28,r31
	ctx.r11.u64 = r31.u64 - r28.u64;
	// subf r10,r28,r27
	ctx.r10.u64 = r27.u64 - r28.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8269bd7c
	if (!ctx.cr6.lt) goto loc_8269BD7C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// b 0x8269bd84
	goto loc_8269BD84;
loc_8269BD7C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8269BD84:
	// li r10,23
	ctx.r10.s64 = 23;
	// addi r8,r24,-2
	ctx.r8.s64 = r24.s64 + -2;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8269BD94:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// srawi. r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8269bdac
	if (!ctx.cr0.lt) goto loc_8269BDAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8269bdb8
	goto loc_8269BDB8;
loc_8269BDAC:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// ble cr6,0x8269bdb8
	if (!ctx.cr6.gt) goto loc_8269BDB8;
	// li r10,6
	ctx.r10.s64 = 6;
loc_8269BDB8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sthu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8269bd94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269BD94;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// subf. r10,r11,r23
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8269be00
	if (!ctx.cr0.gt) goto loc_8269BE00;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// subf r8,r24,r4
	ctx.r8.u64 = ctx.r4.u64 - r24.u64;
loc_8269BDD8:
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bge cr6,0x8269bdf4
	if (!ctx.cr6.lt) goto loc_8269BDF4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhax r9,r8,r11
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32));
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_8269BDF4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8269bdd8
	if (ctx.cr6.gt) goto loc_8269BDD8;
loc_8269BE00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(__restvmx_27) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_81) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B3DC8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B4388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826B4390;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x826b43b4
	if (!ctx.cr6.eq) goto loc_826B43B4;
	// bl 0x826a5ac8
	ctx.lr = 0x826B43B0;
	sub_826A5AC8(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
loc_826B43B4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x826b448c
	if (!ctx.cr6.gt) goto loc_826B448C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B43C4:
	// lhz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x826b43f0
	if (ctx.cr6.gt) goto loc_826B43F0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x826b4484
	if (ctx.cr6.gt) goto loc_826B4484;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4484
	if (ctx.cr6.eq) goto loc_826B4484;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// b 0x826b4480
	goto loc_826B4480;
loc_826B43F0:
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// bgt cr6,0x826b4418
	if (ctx.cr6.gt) goto loc_826B4418;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bgt cr6,0x826b4460
	if (ctx.cr6.gt) goto loc_826B4460;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4460
	if (ctx.cr6.eq) goto loc_826B4460;
	// li r8,192
	ctx.r8.s64 = 192;
	// rlwimi r8,r10,26,27,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x826b4458
	goto loc_826B4458;
loc_826B4418:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bgt cr6,0x826b4438
	if (ctx.cr6.gt) goto loc_826B4438;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4438
	if (ctx.cr6.eq) goto loc_826B4438;
	// li r8,224
	ctx.r8.s64 = 224;
	// rlwimi r8,r10,20,28,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r8,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826B4438:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bgt cr6,0x826b4460
	if (ctx.cr6.gt) goto loc_826B4460;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4460
	if (ctx.cr6.eq) goto loc_826B4460;
	// lhz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 0);
	// li r8,128
	ctx.r8.s64 = 128;
	// rlwimi r8,r10,26,26,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
loc_826B4458:
	// stb r8,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826B4460:
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x826b4484
	if (ctx.cr6.gt) goto loc_826B4484;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4484
	if (ctx.cr6.eq) goto loc_826B4484;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// rlwimi r11,r9,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_826B4480:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826B4484:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// bdnz 0x826b43c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B43C4;
loc_826B448C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826b44ac
	if (ctx.cr6.eq) goto loc_826B44AC;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bge cr6,0x826b44ac
	if (!ctx.cr6.lt) goto loc_826B44AC;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x823f0188
	ctx.lr = 0x826B44A4;
	sub_823F0188(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b44b0
	goto loc_826B44B0;
loc_826B44AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826B44B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826BDDE0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826bddf8
	if (!ctx.cr6.eq) goto loc_826BDDF8;
loc_826BDDEC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_826BDDF8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bddec
	if (ctx.cr6.eq) goto loc_826BDDEC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826bddec
	if (ctx.cr6.eq) goto loc_826BDDEC;
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bde20
	if (ctx.cr6.eq) goto loc_826BDE20;
	// lwz r4,60(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r3,608(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 608);
	// b 0x826c6478
	sub_826C6478(ctx, base);
	return;
loc_826BDE20:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1580) {
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
	ctx.lr = 0x826C1588;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c16fc
	if (ctx.cr6.eq) goto loc_826C16FC;
	// lwz r3,584(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c16fc
	if (ctx.cr6.eq) goto loc_826C16FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826c16fc
	if (ctx.cr6.eq) goto loc_826C16FC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826c16fc
	if (ctx.cr6.eq) goto loc_826C16FC;
	// lwz r11,588(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 588);
	// addi r28,r30,588
	r28.s64 = r30.s64 + 588;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c16fc
	if (!ctx.cr6.eq) goto loc_826C16FC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c166c
	if (ctx.cr6.eq) goto loc_826C166C;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826c166c
	if (ctx.cr6.eq) goto loc_826C166C;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826c166c
	if (!ctx.cr6.gt) goto loc_826C166C;
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r4,31,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d2178
	ctx.lr = 0x826C1624;
	sub_826D2178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c169c
	if (ctx.cr6.lt) goto loc_826C169C;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826c1694
	if (ctx.cr6.eq) goto loc_826C1694;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r9,r27,-2
	ctx.r9.s64 = r27.s64 + -2;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
loc_826C1644:
	// lhz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lhzu r8,2(r31)
	ea = 2 + r31.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x826c1644
	if (ctx.cr6.lt) goto loc_826C1644;
	// b 0x826c1694
	goto loc_826C1694;
loc_826C166C:
	// lwz r11,616(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826d2178
	ctx.lr = 0x826C1690;
	sub_826D2178(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_826C1694:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826c16cc
	if (!ctx.cr6.lt) goto loc_826C16CC;
loc_826C169C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,556(r30)
	REX_STORE_U32(r30.u32 + 556, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r11,392(r30)
	REX_STORE_U32(r30.u32 + 392, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r3,584(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 584);
	// bl 0x8261df08
	ctx.lr = 0x826C16BC;
	sub_8261DF08(ctx, base);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
loc_826C16CC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826c16ec
	if (!ctx.cr6.eq) goto loc_826C16EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,556(r30)
	REX_STORE_U32(r30.u32 + 556, r29.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
loc_826C16EC:
	// stw r7,556(r30)
	REX_STORE_U32(r30.u32 + 556, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
loc_826C16FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826CE390) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x826ce3ac
	if (ctx.cr6.gt) goto loc_826CE3AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
loc_826CE3AC:
	// lwz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826D1460) {
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
	ctx.lr = 0x826D1468;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r29,34(r8)
	r29.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826d14b4
	if (!ctx.cr6.gt) goto loc_826D14B4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D1494:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r7,388(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 388);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// stwx r4,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826d1494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D1494;
loc_826D14B4:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d17ac
	if (ctx.cr6.eq) goto loc_826D17AC;
	// clrlwi r26,r5,16
	r26.u64 = ctx.r5.u32 & 0xFFFF;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x826d17ac
	if (!ctx.cr6.gt) goto loc_826D17AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mullw r28,r29,r29
	r28.s64 = int64_t(r29.s32) * int64_t(r29.s32);
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lfs f30,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
loc_826D14E4:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d1618
	if (ctx.cr6.eq) goto loc_826D1618;
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r8,0
	ctx.r8.s64 = 0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - ctx.f0.f64));
	// blt cr6,0x826d15d8
	if (ctx.cr6.lt) goto loc_826D15D8;
	// addi r5,r28,-3
	ctx.r5.s64 = r28.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D1534:
	// lwz r7,464(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 464);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r6,448(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r4,468(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lfsx f12,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f10,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsx f9,r4,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,448(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r7,464(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 464);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,468(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lfs f8,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f5,4(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r7,468(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lfsx f4,r9,r4
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r9,r3
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f1,f4,f0,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfsx f1,r9,r7
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r6,448(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r4,464(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r4
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f9,f12,f0,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfsx f9,r10,r3
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blt cr6,0x826d1534
	if (ctx.cr6.lt) goto loc_826D1534;
loc_826D15D8:
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r28.s32, ctx.xer);
	// bge cr6,0x826d1628
	if (!ctx.cr6.lt) goto loc_826D1628;
	// subf r10,r8,r28
	ctx.r10.u64 = r28.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826D15EC:
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r9,448(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r8,468(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsx f9,r11,r8
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d15ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D15EC;
	// b 0x826d1628
	goto loc_826D1628;
loc_826D1618:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// bl 0x826a1e70
	ctx.lr = 0x826D1628;
	sub_826A1E70(ctx, base);
loc_826D1628:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x826d16ac
	if (ctx.cr6.lt) goto loc_826D16AC;
	// addi r5,r29,-3
	ctx.r5.s64 = r29.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D163C:
	// lwz r7,388(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 388);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r6,384(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// lwzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwz r7,384(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwz r6,388(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 388);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwzx r7,r3,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r6,384(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r6,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r4,384(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r4,r10
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x826d163c
	if (ctx.cr6.lt) goto loc_826D163C;
loc_826D16AC:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// bge cr6,0x826d16dc
	if (!ctx.cr6.lt) goto loc_826D16DC;
	// subf r10,r9,r29
	ctx.r10.u64 = r29.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826D16C0:
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r9,384(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 384);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826d16c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D16C0;
loc_826D16DC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826d17a0
	if (!ctx.cr6.gt) goto loc_826D17A0;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_826D16F4:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// blt cr6,0x826d1750
	if (ctx.cr6.lt) goto loc_826D1750;
	// lwz r9,384(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826D1720:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfsx f11,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfsx f10,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f8,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f13.f64)));
	// blt cr6,0x826d1720
	if (ctx.cr6.lt) goto loc_826D1720;
loc_826D1750:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x826d176c
	if (!ctx.cr6.lt) goto loc_826D176C;
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_826D176C:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// add r4,r30,r4
	ctx.r4.u64 = r30.u64 + ctx.r4.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bdnz 0x826d16f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D16F4;
loc_826D17A0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x826d14e4
	if (ctx.cr6.lt) goto loc_826D14E4;
loc_826D17AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826ED860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-32119
	ctx.r8.s64 = -2104950784;
	// lwz r11,12664(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ed8b4
	if (!ctx.cr6.eq) goto loc_826ED8B4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r11,30208
	ctx.r10.s64 = ctx.r11.s64 + 30208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826ED888:
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// srawi r9,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r9,15
	ctx.r4.s64 = ctx.r9.s64 + 15;
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826ed888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826ED888;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12664(r8)
	REX_STORE_U32(ctx.r8.u32 + 12664, ctx.r11.u32);
loc_826ED8B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F09D0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x826F09D8;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lhz r26,34(r24)
	r26.u64 = REX_LOAD_U16(r24.u32 + 34);
	// beq cr6,0x826f0c38
	if (ctx.cr6.eq) goto loc_826F0C38;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r21,1
	r21.s64 = 1;
	// li r25,4
	r25.s64 = 4;
	// lfs f29,-6796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6796);
	f29.f64 = double(temp.f32);
	// li r22,3
	r22.s64 = 3;
	// lfs f30,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	f30.f64 = double(temp.f32);
	// li r23,-16
	r23.s64 = -16;
	// lfs f31,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_826F0A34:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826f0c2c
	if (ctx.cr6.gt) goto loc_826F0C2C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826f0acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F0ACC;
	// bdzf 4*cr6+eq,0x826f0b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F0B14;
	// bne cr6,0x826f0ba0
	if (!ctx.cr6.eq) goto loc_826F0BA0;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// beq cr6,0x826f0a80
	if (ctx.cr6.eq) goto loc_826F0A80;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826f0a80
	if (ctx.cr6.eq) goto loc_826F0A80;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x826F0A80;
	sub_826A1E70(ctx, base);
loc_826F0A80:
	// lwz r3,448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 448);
	// stw r27,440(r31)
	REX_STORE_U32(r31.u32 + 440, r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,444(r31)
	REX_STORE_U32(r31.u32 + 444, r27.u32);
	// beq cr6,0x826f0aa4
	if (ctx.cr6.eq) goto loc_826F0AA4;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826F0AA4;
	sub_826A2E60(ctx, base);
loc_826F0AA4:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826f0c28
	if (!ctx.cr6.gt) goto loc_826F0C28;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x826f0c28
	if (ctx.cr6.lt) goto loc_826F0C28;
	// lwz r11,176(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826f0c28
	if (ctx.cr6.eq) goto loc_826F0C28;
	// stw r21,436(r31)
	REX_STORE_U32(r31.u32 + 436, r21.u32);
	// b 0x826f0c2c
	goto loc_826F0C2C;
loc_826F0ACC:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826F0AE0;
	sub_826E58B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0c38
	if (ctx.cr6.lt) goto loc_826F0C38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r7.u32);
	// b 0x826f0c2c
	goto loc_826F0C2C;
loc_826F0B14:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826F0B28;
	sub_826E58B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0c38
	if (ctx.cr6.lt) goto loc_826F0C38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// beq 0x826f0b54
	if (ctx.cr0.eq) goto loc_826F0B54;
	// stw r27,452(r31)
	REX_STORE_U32(r31.u32 + 452, r27.u32);
	// stw r22,436(r31)
	REX_STORE_U32(r31.u32 + 436, r22.u32);
	// b 0x826f0c2c
	goto loc_826F0C2C;
loc_826F0B54:
	// lhz r11,34(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 34);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x826f0b98
	if (!ctx.cr6.eq) goto loc_826F0B98;
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x826f0b98
	if (!ctx.cr6.eq) goto loc_826F0B98;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f0c28
	if (ctx.cr6.eq) goto loc_826F0C28;
	// stfs f31,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,52(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f30,48(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x826f0c28
	goto loc_826F0C28;
loc_826F0B98:
	// stw r27,440(r31)
	REX_STORE_U32(r31.u32 + 440, r27.u32);
	// b 0x826f0c28
	goto loc_826F0C28;
loc_826F0BA0:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// mullw r30,r26,r26
	r30.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x826f0c28
	if (!ctx.cr6.lt) goto loc_826F0C28;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_826F0BB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0BC4;
	sub_826E58B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0c38
	if (ctx.cr6.lt) goto loc_826F0C38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826f0be8
	if (ctx.cr6.eq) goto loc_826F0BE8;
	// or r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 | r23.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826F0BE8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r9,448(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 448);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfsx f11,r8,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r7.u32);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x826f0bb4
	if (ctx.cr6.lt) goto loc_826F0BB4;
loc_826F0C28:
	// stw r25,436(r31)
	REX_STORE_U32(r31.u32 + 436, r25.u32);
loc_826F0C2C:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826f0a34
	if (!ctx.cr6.eq) goto loc_826F0A34;
loc_826F0C38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8270F440) {
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
	ctx.lr = 0x8270F448;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15504(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270f470
	if (!ctx.cr6.eq) goto loc_8270F470;
	// bl 0x82705a30
	ctx.lr = 0x8270F468;
	sub_82705A30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_8270F470:
	// li r24,1
	r24.s64 = 1;
	// stw r29,3424(r27)
	REX_STORE_U32(r27.u32 + 3424, r29.u32);
	// li r25,2
	r25.s64 = 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8270f600
	if (!ctx.cr6.eq) goto loc_8270F600;
	// lwz r11,3468(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270f4bc
	if (ctx.cr6.eq) goto loc_8270F4BC;
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
	// bge 0x8270f4b8
	if (!ctx.cr0.lt) goto loc_8270F4B8;
	// bl 0x82725e38
	ctx.lr = 0x8270F4B8;
	sub_82725E38(ctx, base);
loc_8270F4B8:
	// stw r31,3472(r27)
	REX_STORE_U32(r27.u32 + 3472, r31.u32);
loc_8270F4BC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270f514
	if (!ctx.cr6.lt) goto loc_8270F514;
loc_8270F4D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f514
	if (ctx.cr6.eq) goto loc_8270F514;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8270f504
	if (!ctx.cr0.lt) goto loc_8270F504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F504;
	sub_82725E38(ctx, base);
loc_8270F504:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f4d4
	if (ctx.cr6.gt) goto loc_8270F4D4;
loc_8270F514:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8270f538
	if (!ctx.cr0.lt) goto loc_8270F538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F538;
	sub_82725E38(ctx, base);
loc_8270F538:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8270f600
	if (!ctx.cr6.eq) goto loc_8270F600;
	// lwz r11,14824(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270f600
	if (ctx.cr6.eq) goto loc_8270F600;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f5c4
	if (!ctx.cr6.lt) goto loc_8270F5C4;
loc_8270F56C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f5c4
	if (ctx.cr6.eq) goto loc_8270F5C4;
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
	// bge 0x8270f5b4
	if (!ctx.cr0.lt) goto loc_8270F5B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F5B4;
	sub_82725E38(ctx, base);
loc_8270F5B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f56c
	if (ctx.cr6.gt) goto loc_8270F56C;
loc_8270F5C4:
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
	// bge 0x8270f5fc
	if (!ctx.cr0.lt) goto loc_8270F5FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F5FC;
	sub_82725E38(ctx, base);
loc_8270F5FC:
	// stw r30,14828(r27)
	REX_STORE_U32(r27.u32 + 14828, r30.u32);
loc_8270F600:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// li r23,4
	r23.s64 = 4;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8270fda0
	if (!ctx.cr6.eq) goto loc_8270FDA0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r11,15228(r27)
	REX_STORE_U32(r27.u32 + 15228, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f68c
	if (!ctx.cr6.lt) goto loc_8270F68C;
loc_8270F634:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f68c
	if (ctx.cr6.eq) goto loc_8270F68C;
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
	// bge 0x8270f67c
	if (!ctx.cr0.lt) goto loc_8270F67C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F67C;
	sub_82725E38(ctx, base);
loc_8270F67C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f634
	if (ctx.cr6.gt) goto loc_8270F634;
loc_8270F68C:
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
	// bge 0x8270f6c4
	if (!ctx.cr0.lt) goto loc_8270F6C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F6C4;
	sub_82725E38(ctx, base);
loc_8270F6C4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270f6d4
	if (!ctx.cr6.eq) goto loc_8270F6D4;
	// stw r24,284(r27)
	REX_STORE_U32(r27.u32 + 284, r24.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270F6D4:
	// lwz r11,14804(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,15224(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15224);
	// bne cr6,0x8270f880
	if (!ctx.cr6.eq) goto loc_8270F880;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270f6f4
	if (!ctx.cr6.eq) goto loc_8270F6F4;
	// stw r29,284(r27)
	REX_STORE_U32(r27.u32 + 284, r29.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270F6F4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f768
	if (!ctx.cr6.lt) goto loc_8270F768;
loc_8270F710:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f768
	if (ctx.cr6.eq) goto loc_8270F768;
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
	// bge 0x8270f758
	if (!ctx.cr0.lt) goto loc_8270F758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F758;
	sub_82725E38(ctx, base);
loc_8270F758:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f710
	if (ctx.cr6.gt) goto loc_8270F710;
loc_8270F768:
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
	// bge 0x8270f7a0
	if (!ctx.cr0.lt) goto loc_8270F7A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F7A0;
	sub_82725E38(ctx, base);
loc_8270F7A0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270f7b0
	if (!ctx.cr6.eq) goto loc_8270F7B0;
	// stw r29,284(r27)
	REX_STORE_U32(r27.u32 + 284, r29.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270F7B0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f824
	if (!ctx.cr6.lt) goto loc_8270F824;
loc_8270F7CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f824
	if (ctx.cr6.eq) goto loc_8270F824;
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
	// bge 0x8270f814
	if (!ctx.cr0.lt) goto loc_8270F814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F814;
	sub_82725E38(ctx, base);
loc_8270F814:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f7cc
	if (ctx.cr6.gt) goto loc_8270F7CC;
loc_8270F824:
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
	// bge 0x8270f85c
	if (!ctx.cr0.lt) goto loc_8270F85C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F85C;
	sub_82725E38(ctx, base);
loc_8270F85C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270f874
	if (!ctx.cr6.eq) goto loc_8270F874;
	// stw r29,284(r27)
	REX_STORE_U32(r27.u32 + 284, r29.u32);
	// lwz r3,15236(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 15236);
	// bl 0x82767ab8
	ctx.lr = 0x8270F870;
	sub_82767AB8(ctx, base);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270F874:
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r24,284(r27)
	REX_STORE_U32(r27.u32 + 284, r24.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270F880:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8270f944
	if (!ctx.cr6.eq) goto loc_8270F944;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f8fc
	if (!ctx.cr6.lt) goto loc_8270F8FC;
loc_8270F8A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f8fc
	if (ctx.cr6.eq) goto loc_8270F8FC;
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
	// bge 0x8270f8ec
	if (!ctx.cr0.lt) goto loc_8270F8EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F8EC;
	sub_82725E38(ctx, base);
loc_8270F8EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f8a4
	if (ctx.cr6.gt) goto loc_8270F8A4;
loc_8270F8FC:
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
	// bge 0x8270f934
	if (!ctx.cr0.lt) goto loc_8270F934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F934;
	sub_82725E38(ctx, base);
loc_8270F934:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270f9e4
	if (!ctx.cr6.eq) goto loc_8270F9E4;
	// stw r29,284(r27)
	REX_STORE_U32(r27.u32 + 284, r29.u32);
	// b 0x8270fb74
	goto loc_8270FB74;
loc_8270F944:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270f9a4
	if (!ctx.cr6.lt) goto loc_8270F9A4;
loc_8270F94C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f9a4
	if (ctx.cr6.eq) goto loc_8270F9A4;
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
	// bge 0x8270f994
	if (!ctx.cr0.lt) goto loc_8270F994;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F994;
	sub_82725E38(ctx, base);
loc_8270F994:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270f94c
	if (ctx.cr6.gt) goto loc_8270F94C;
loc_8270F9A4:
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
	// bge 0x8270f9dc
	if (!ctx.cr0.lt) goto loc_8270F9DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270F9DC;
	sub_82725E38(ctx, base);
loc_8270F9DC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270f9ec
	if (!ctx.cr6.eq) goto loc_8270F9EC;
loc_8270F9E4:
	// stw r25,284(r27)
	REX_STORE_U32(r27.u32 + 284, r25.u32);
	// b 0x8270fb74
	goto loc_8270FB74;
loc_8270F9EC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270fa60
	if (!ctx.cr6.lt) goto loc_8270FA60;
loc_8270FA08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fa60
	if (ctx.cr6.eq) goto loc_8270FA60;
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
	// bge 0x8270fa50
	if (!ctx.cr0.lt) goto loc_8270FA50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FA50;
	sub_82725E38(ctx, base);
loc_8270FA50:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270fa08
	if (ctx.cr6.gt) goto loc_8270FA08;
loc_8270FA60:
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
	// bge 0x8270fa98
	if (!ctx.cr0.lt) goto loc_8270FA98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FA98;
	sub_82725E38(ctx, base);
loc_8270FA98:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270faa8
	if (!ctx.cr6.eq) goto loc_8270FAA8;
	// stw r29,284(r27)
	REX_STORE_U32(r27.u32 + 284, r29.u32);
	// b 0x8270fb74
	goto loc_8270FB74;
loc_8270FAA8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270fb1c
	if (!ctx.cr6.lt) goto loc_8270FB1C;
loc_8270FAC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fb1c
	if (ctx.cr6.eq) goto loc_8270FB1C;
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
	// bge 0x8270fb0c
	if (!ctx.cr0.lt) goto loc_8270FB0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FB0C;
	sub_82725E38(ctx, base);
loc_8270FB0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270fac4
	if (ctx.cr6.gt) goto loc_8270FAC4;
loc_8270FB1C:
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
	// bge 0x8270fb54
	if (!ctx.cr0.lt) goto loc_8270FB54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FB54;
	sub_82725E38(ctx, base);
loc_8270FB54:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8270fb6c
	if (!ctx.cr6.eq) goto loc_8270FB6C;
	// stw r29,284(r27)
	REX_STORE_U32(r27.u32 + 284, r29.u32);
	// lwz r3,15236(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 15236);
	// bl 0x82767ab8
	ctx.lr = 0x8270FB68;
	sub_82767AB8(ctx, base);
	// b 0x8270fb74
	goto loc_8270FB74;
loc_8270FB6C:
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r24,284(r27)
	REX_STORE_U32(r27.u32 + 284, r24.u32);
loc_8270FB74:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270fe80
	if (!ctx.cr6.eq) goto loc_8270FE80;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8270fbf4
	if (!ctx.cr6.lt) goto loc_8270FBF4;
loc_8270FB9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fbf4
	if (ctx.cr6.eq) goto loc_8270FBF4;
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
	// bge 0x8270fbe4
	if (!ctx.cr0.lt) goto loc_8270FBE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FBE4;
	sub_82725E38(ctx, base);
loc_8270FBE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270fb9c
	if (ctx.cr6.gt) goto loc_8270FB9C;
loc_8270FBF4:
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
	// bge 0x8270fc2c
	if (!ctx.cr0.lt) goto loc_8270FC2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FC2C;
	sub_82725E38(ctx, base);
loc_8270FC2C:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x8270fd50
	if (!ctx.cr6.eq) goto loc_8270FD50;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8270fca8
	if (!ctx.cr6.lt) goto loc_8270FCA8;
loc_8270FC50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fca8
	if (ctx.cr6.eq) goto loc_8270FCA8;
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
	// bge 0x8270fc98
	if (!ctx.cr0.lt) goto loc_8270FC98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FC98;
	sub_82725E38(ctx, base);
loc_8270FC98:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270fc50
	if (ctx.cr6.gt) goto loc_8270FC50;
loc_8270FCA8:
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
	// bge 0x8270fce0
	if (!ctx.cr0.lt) goto loc_8270FCE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FCE0;
	sub_82725E38(ctx, base);
loc_8270FCE0:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// beq cr6,0x82711360
	if (ctx.cr6.eq) goto loc_82711360;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x8270fcf8
	if (!ctx.cr6.eq) goto loc_8270FCF8;
	// stw r24,3424(r27)
	REX_STORE_U32(r27.u32 + 3424, r24.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270FCF8:
	// addi r11,r30,112
	ctx.r11.s64 = r30.s64 + 112;
	// lwz r10,14804(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 14804);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// addi r7,r9,26208
	ctx.r7.s64 = ctx.r9.s64 + 26208;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// addi r3,r5,26264
	ctx.r3.s64 = ctx.r5.s64 + 26264;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r4,26648
	ctx.r11.s64 = ctx.r4.s64 + 26648;
	// stw r9,3416(r27)
	REX_STORE_U32(r27.u32 + 3416, ctx.r9.u32);
	// lwzx r8,r6,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,3412(r27)
	REX_STORE_U32(r27.u32 + 3412, ctx.r8.u32);
	// lwz r6,-4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stw r6,14808(r27)
	REX_STORE_U32(r27.u32 + 14808, ctx.r6.u32);
	// bne cr6,0x8270fe80
	if (!ctx.cr6.eq) goto loc_8270FE80;
	// stw r24,14804(r27)
	REX_STORE_U32(r27.u32 + 14804, r24.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270FD50:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,14804(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 14804);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,26152
	ctx.r8.s64 = ctx.r11.s64 + 26152;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r5,r7,26180
	ctx.r5.s64 = ctx.r7.s64 + 26180;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r6,26648
	ctx.r11.s64 = ctx.r6.s64 + 26648;
	// stw r4,3416(r27)
	REX_STORE_U32(r27.u32 + 3416, ctx.r4.u32);
	// lwzx r3,r9,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,3412(r27)
	REX_STORE_U32(r27.u32 + 3412, ctx.r3.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,14808(r27)
	REX_STORE_U32(r27.u32 + 14808, ctx.r10.u32);
	// bne cr6,0x8270fe80
	if (!ctx.cr6.eq) goto loc_8270FE80;
	// stw r24,14804(r27)
	REX_STORE_U32(r27.u32 + 14804, r24.u32);
	// b 0x8270fe80
	goto loc_8270FE80;
loc_8270FDA0:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x8270fdd0
	if (!ctx.cr6.gt) goto loc_8270FDD0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8270fe7c
	goto loc_8270FE7C;
loc_8270FDD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270fde0
	if (!ctx.cr6.eq) goto loc_8270FDE0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8270fe7c
	goto loc_8270FE7C;
loc_8270FDE0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8270fe40
	if (!ctx.cr6.gt) goto loc_8270FE40;
loc_8270FDE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fe40
	if (ctx.cr6.eq) goto loc_8270FE40;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8270fe30
	if (!ctx.cr0.lt) goto loc_8270FE30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FE30;
	sub_82725E38(ctx, base);
loc_8270FE30:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270fde8
	if (ctx.cr6.gt) goto loc_8270FDE8;
loc_8270FE40:
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
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8270fe78
	if (!ctx.cr0.lt) goto loc_8270FE78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FE78;
	sub_82725E38(ctx, base);
loc_8270FE78:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8270FE7C:
	// stw r11,284(r27)
	REX_STORE_U32(r27.u32 + 284, ctx.r11.u32);
loc_8270FE80:
	// lwz r11,3424(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270fe90
	if (ctx.cr6.eq) goto loc_8270FE90;
	// stw r23,284(r27)
	REX_STORE_U32(r27.u32 + 284, r23.u32);
loc_8270FE90:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270feb4
	if (ctx.cr6.eq) goto loc_8270FEB4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8270feb4
	if (ctx.cr6.eq) goto loc_8270FEB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270feb4
	if (ctx.cr6.eq) goto loc_8270FEB4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82711360
	if (!ctx.cr6.eq) goto loc_82711360;
loc_8270FEB4:
	// lwz r10,15504(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8270fed0
	if (!ctx.cr6.eq) goto loc_8270FED0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270fed0
	if (ctx.cr6.eq) goto loc_8270FED0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82711360
	if (!ctx.cr6.eq) goto loc_82711360;
loc_8270FED0:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8270ff74
	if (ctx.cr6.lt) goto loc_8270FF74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270fee8
	if (ctx.cr6.eq) goto loc_8270FEE8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8270ff74
	if (!ctx.cr6.eq) goto loc_8270FF74;
loc_8270FEE8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,7
	r30.s64 = 7;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x8270ff40
	if (!ctx.cr6.lt) goto loc_8270FF40;
loc_8270FF00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ff40
	if (ctx.cr6.eq) goto loc_8270FF40;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8270ff30
	if (!ctx.cr0.lt) goto loc_8270FF30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FF30;
	sub_82725E38(ctx, base);
loc_8270FF30:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ff00
	if (ctx.cr6.gt) goto loc_8270FF00;
loc_8270FF40:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8270ff64
	if (!ctx.cr0.lt) goto loc_8270FF64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FF64;
	sub_82725E38(ctx, base);
loc_8270FF64:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82711360
	if (!ctx.cr6.eq) goto loc_82711360;
loc_8270FF74:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8270ffe8
	if (!ctx.cr6.lt) goto loc_8270FFE8;
loc_8270FF90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ffe8
	if (ctx.cr6.eq) goto loc_8270FFE8;
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
	// bge 0x8270ffd8
	if (!ctx.cr0.lt) goto loc_8270FFD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270FFD8;
	sub_82725E38(ctx, base);
loc_8270FFD8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ff90
	if (ctx.cr6.gt) goto loc_8270FF90;
loc_8270FFE8:
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
	// bge 0x82710020
	if (!ctx.cr0.lt) goto loc_82710020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710020;
	sub_82725E38(ctx, base);
loc_82710020:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82711360
	if (!ctx.cr6.eq) goto loc_82711360;
	// lwz r10,15504(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x827102dc
	if (ctx.cr6.lt) goto loc_827102DC;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// stw r30,3976(r27)
	REX_STORE_U32(r27.u32 + 3976, r30.u32);
	// bgt cr6,0x827100fc
	if (ctx.cr6.gt) goto loc_827100FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827100bc
	if (!ctx.cr6.lt) goto loc_827100BC;
loc_82710064:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827100bc
	if (ctx.cr6.eq) goto loc_827100BC;
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
	// bge 0x827100ac
	if (!ctx.cr0.lt) goto loc_827100AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827100AC;
	sub_82725E38(ctx, base);
loc_827100AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710064
	if (ctx.cr6.gt) goto loc_82710064;
loc_827100BC:
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
	// bge 0x827100f4
	if (!ctx.cr0.lt) goto loc_827100F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827100F4;
	sub_82725E38(ctx, base);
loc_827100F4:
	// stw r30,252(r27)
	REX_STORE_U32(r27.u32 + 252, r30.u32);
	// b 0x82710100
	goto loc_82710100;
loc_827100FC:
	// stw r29,252(r27)
	REX_STORE_U32(r27.u32 + 252, r29.u32);
loc_82710100:
	// lwz r11,3464(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827101bc
	if (ctx.cr6.eq) goto loc_827101BC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710180
	if (!ctx.cr6.lt) goto loc_82710180;
loc_82710128:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710180
	if (ctx.cr6.eq) goto loc_82710180;
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
	// bge 0x82710170
	if (!ctx.cr0.lt) goto loc_82710170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710170;
	sub_82725E38(ctx, base);
loc_82710170:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710128
	if (ctx.cr6.gt) goto loc_82710128;
loc_82710180:
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
	// bge 0x827101b8
	if (!ctx.cr0.lt) goto loc_827101B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827101B8;
	sub_82725E38(ctx, base);
loc_827101B8:
	// stw r30,3452(r27)
	REX_STORE_U32(r27.u32 + 3452, r30.u32);
loc_827101BC:
	// lwz r11,3456(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,3976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3976);
	// bne cr6,0x827101f4
	if (!ctx.cr6.eq) goto loc_827101F4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x827101dc
	if (ctx.cr6.gt) goto loc_827101DC;
	// stw r24,3452(r27)
	REX_STORE_U32(r27.u32 + 3452, r24.u32);
	// b 0x827101f4
	goto loc_827101F4;
loc_827101DC:
	// stw r29,3452(r27)
	REX_STORE_U32(r27.u32 + 3452, r29.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,26320
	ctx.r11.s64 = ctx.r9.s64 + 26320;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
loc_827101F4:
	// lwz r10,2996(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2996);
	// stw r11,248(r27)
	REX_STORE_U32(r27.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, r29.u32);
	// beq cr6,0x82710254
	if (ctx.cr6.eq) goto loc_82710254;
	// lwz r10,284(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82710220
	if (!ctx.cr6.eq) goto loc_82710220;
	// lwz r9,3424(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3424);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82710254
	if (ctx.cr6.eq) goto loc_82710254;
loc_82710220:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82710230
	if (ctx.cr6.lt) goto loc_82710230;
	// stw r24,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, r24.u32);
	// b 0x82710254
	goto loc_82710254;
loc_82710230:
	// lwz r9,20984(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20984);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82710254
	if (ctx.cr6.eq) goto loc_82710254;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8271024c
	if (ctx.cr6.eq) goto loc_8271024C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82710254
	if (!ctx.cr6.eq) goto loc_82710254;
loc_8271024C:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,2992(r27)
	REX_STORE_U32(r27.u32 + 2992, ctx.r10.u32);
loc_82710254:
	// lwz r10,2992(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2992);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82710288
	if (ctx.cr6.eq) goto loc_82710288;
	// lwz r10,1900(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// sth r29,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, r29.u16);
	// lwz r9,1900(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// sth r29,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, r29.u16);
	// lwz r8,1904(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r29,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, r29.u16);
	// lwz r7,1904(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r29,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r29.u16);
	// b 0x827102ac
	goto loc_827102AC;
loc_82710288:
	// lwz r9,1900(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r10,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// lwz r8,1900(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1900);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// lwz r7,1904(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r10,16(r7)
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r10.u16);
	// lwz r6,1904(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1904);
	// sth r10,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
loc_827102AC:
	// lwz r9,3452(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3452);
	// addi r10,r27,4016
	ctx.r10.s64 = r27.s64 + 4016;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827102c0
	if (!ctx.cr6.eq) goto loc_827102C0;
	// addi r10,r27,5296
	ctx.r10.s64 = r27.s64 + 5296;
loc_827102C0:
	// stw r10,6576(r27)
	REX_STORE_U32(r27.u32 + 6576, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r27,6592
	ctx.r10.s64 = r27.s64 + 6592;
	// bne cr6,0x827102d4
	if (!ctx.cr6.eq) goto loc_827102D4;
	// addi r10,r27,10688
	ctx.r10.s64 = r27.s64 + 10688;
loc_827102D4:
	// stw r10,14784(r27)
	REX_STORE_U32(r27.u32 + 14784, ctx.r10.u32);
	// b 0x827102ec
	goto loc_827102EC;
loc_827102DC:
	// addi r10,r27,5296
	ctx.r10.s64 = r27.s64 + 5296;
	// addi r9,r27,10688
	ctx.r9.s64 = r27.s64 + 10688;
	// stw r10,6576(r27)
	REX_STORE_U32(r27.u32 + 6576, ctx.r10.u32);
	// stw r9,14784(r27)
	REX_STORE_U32(r27.u32 + 14784, ctx.r9.u32);
loc_827102EC:
	// stw r11,248(r27)
	REX_STORE_U32(r27.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82711360
	if (!ctx.cr6.gt) goto loc_82711360;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x82711360
	if (ctx.cr6.gt) goto loc_82711360;
	// lwz r11,3976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3976);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82710328
	if (ctx.cr6.gt) goto loc_82710328;
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82710328
	if (!ctx.cr6.eq) goto loc_82710328;
	// addi r11,r27,2864
	ctx.r11.s64 = r27.s64 + 2864;
	// addi r10,r27,2824
	ctx.r10.s64 = r27.s64 + 2824;
	// stw r11,2928(r27)
	REX_STORE_U32(r27.u32 + 2928, ctx.r11.u32);
	// stw r10,2940(r27)
	REX_STORE_U32(r27.u32 + 2940, ctx.r10.u32);
loc_82710328:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x827103ec
	if (ctx.cr6.eq) goto loc_827103EC;
	// lwz r11,15224(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827103ec
	if (ctx.cr6.eq) goto loc_827103EC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827103b0
	if (!ctx.cr6.lt) goto loc_827103B0;
loc_82710358:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827103b0
	if (ctx.cr6.eq) goto loc_827103B0;
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
	// bge 0x827103a0
	if (!ctx.cr0.lt) goto loc_827103A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827103A0;
	sub_82725E38(ctx, base);
loc_827103A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710358
	if (ctx.cr6.gt) goto loc_82710358;
loc_827103B0:
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
	// bge 0x827103e8
	if (!ctx.cr0.lt) goto loc_827103E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827103E8;
	sub_82725E38(ctx, base);
loc_827103E8:
	// stw r30,15228(r27)
	REX_STORE_U32(r27.u32 + 15228, r30.u32);
loc_827103EC:
	// lwz r11,21792(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710638
	if (ctx.cr6.eq) goto loc_82710638;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8271046c
	if (!ctx.cr6.lt) goto loc_8271046C;
loc_82710414:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271046c
	if (ctx.cr6.eq) goto loc_8271046C;
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
	// bge 0x8271045c
	if (!ctx.cr0.lt) goto loc_8271045C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8271045C;
	sub_82725E38(ctx, base);
loc_8271045C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710414
	if (ctx.cr6.gt) goto loc_82710414;
loc_8271046C:
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
	// bge 0x827104a4
	if (!ctx.cr0.lt) goto loc_827104A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827104A4;
	sub_82725E38(ctx, base);
loc_827104A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,404(r27)
	REX_STORE_U32(r27.u32 + 404, r30.u32);
	// beq cr6,0x82710568
	if (ctx.cr6.eq) goto loc_82710568;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710524
	if (!ctx.cr6.lt) goto loc_82710524;
loc_827104CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710524
	if (ctx.cr6.eq) goto loc_82710524;
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
	// bge 0x82710514
	if (!ctx.cr0.lt) goto loc_82710514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710514;
	sub_82725E38(ctx, base);
loc_82710514:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827104cc
	if (ctx.cr6.gt) goto loc_827104CC;
loc_82710524:
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
	// bge 0x8271055c
	if (!ctx.cr0.lt) goto loc_8271055C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8271055C;
	sub_82725E38(ctx, base);
loc_8271055C:
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 404);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,404(r27)
	REX_STORE_U32(r27.u32 + 404, ctx.r11.u32);
loc_82710568:
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8271062c
	if (!ctx.cr6.eq) goto loc_8271062C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827105e8
	if (!ctx.cr6.lt) goto loc_827105E8;
loc_82710590:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827105e8
	if (ctx.cr6.eq) goto loc_827105E8;
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
	// bge 0x827105d8
	if (!ctx.cr0.lt) goto loc_827105D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827105D8;
	sub_82725E38(ctx, base);
loc_827105D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710590
	if (ctx.cr6.gt) goto loc_82710590;
loc_827105E8:
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
	// bge 0x82710620
	if (!ctx.cr0.lt) goto loc_82710620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710620;
	sub_82725E38(ctx, base);
loc_82710620:
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 404);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,404(r27)
	REX_STORE_U32(r27.u32 + 404, ctx.r11.u32);
loc_8271062C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,404(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 404);
	// bl 0x8271ab38
	ctx.lr = 0x82710638;
	sub_8271AB38(ctx, base);
loc_82710638:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82710788
	if (ctx.cr6.eq) goto loc_82710788;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82710788
	if (ctx.cr6.eq) goto loc_82710788;
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82710788
	if (!ctx.cr6.eq) goto loc_82710788;
	// lwz r11,14852(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710788
	if (ctx.cr6.eq) goto loc_82710788;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r11,3948(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x827106e8
	if (ctx.cr6.eq) goto loc_827106E8;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8271074c
	if (!ctx.cr6.lt) goto loc_8271074C;
loc_8271068C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271074c
	if (ctx.cr6.eq) goto loc_8271074C;
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
	// bge 0x827106d4
	if (!ctx.cr0.lt) goto loc_827106D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827106D4;
	sub_82725E38(ctx, base);
loc_827106D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8271068c
	if (ctx.cr6.gt) goto loc_8271068C;
	// b 0x8271074c
	goto loc_8271074C;
loc_827106E8:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8271074c
	if (!ctx.cr6.lt) goto loc_8271074C;
loc_827106F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271074c
	if (ctx.cr6.eq) goto loc_8271074C;
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
	// bge 0x8271073c
	if (!ctx.cr0.lt) goto loc_8271073C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8271073C;
	sub_82725E38(ctx, base);
loc_8271073C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827106f4
	if (ctx.cr6.gt) goto loc_827106F4;
loc_8271074C:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// bge 0x82710784
	if (!ctx.cr0.lt) goto loc_82710784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710784;
	sub_82725E38(ctx, base);
loc_82710784:
	// stw r30,14856(r27)
	REX_STORE_U32(r27.u32 + 14856, r30.u32);
loc_82710788:
	// lwz r4,14856(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 14856);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827107a4
	if (ctx.cr6.eq) goto loc_827107A4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8271f9e0
	ctx.lr = 0x8271079C;
	sub_8271F9E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x827107A4;
	sub_8271F4A8(ctx, base);
loc_827107A4:
	// lwz r11,3948(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710914
	if (ctx.cr6.eq) goto loc_82710914;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710824
	if (!ctx.cr6.lt) goto loc_82710824;
loc_827107CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710824
	if (ctx.cr6.eq) goto loc_82710824;
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
	// bge 0x82710814
	if (!ctx.cr0.lt) goto loc_82710814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710814;
	sub_82725E38(ctx, base);
loc_82710814:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827107cc
	if (ctx.cr6.gt) goto loc_827107CC;
loc_82710824:
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
	// bge 0x8271085c
	if (!ctx.cr0.lt) goto loc_8271085C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8271085C;
	sub_82725E38(ctx, base);
loc_8271085C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827108d8
	if (ctx.cr6.eq) goto loc_827108D8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82767668
	ctx.lr = 0x8271086C;
	sub_82767668(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82706ca8
	ctx.lr = 0x82710878;
	sub_82706CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82711364
	if (!ctx.cr6.eq) goto loc_82711364;
	// lwz r11,348(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710914
	if (ctx.cr6.eq) goto loc_82710914;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82710914
	if (!ctx.cr6.gt) goto loc_82710914;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_827108A0:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 268);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,10,22,22
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x200) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFDFF);
	// rlwinm r6,r7,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r6,r6,0,22,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,144(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x827108a0
	if (ctx.cr6.lt) goto loc_827108A0;
	// b 0x82710914
	goto loc_82710914;
loc_827108D8:
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82710914
	if (!ctx.cr6.gt) goto loc_82710914;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_827108EC:
	// lwz r9,268(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 268);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,24,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,144(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x827108ec
	if (ctx.cr6.lt) goto loc_827108EC;
loc_82710914:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710d30
	if (ctx.cr6.eq) goto loc_82710D30;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82710d30
	if (ctx.cr6.eq) goto loc_82710D30;
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8271094c
	if (!ctx.cr6.eq) goto loc_8271094C;
	// bl 0x8270cbf8
	ctx.lr = 0x8271093C;
	sub_8270CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82710950
	if (ctx.cr6.eq) goto loc_82710950;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_8271094C:
	// bl 0x8270c158
	ctx.lr = 0x82710950;
	sub_8270C158(ctx, base);
loc_82710950:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82710d14
	if (ctx.cr6.lt) goto loc_82710D14;
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710a18
	if (ctx.cr6.eq) goto loc_82710A18;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827109dc
	if (!ctx.cr6.lt) goto loc_827109DC;
loc_82710984:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827109dc
	if (ctx.cr6.eq) goto loc_827109DC;
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
	// bge 0x827109cc
	if (!ctx.cr0.lt) goto loc_827109CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827109CC;
	sub_82725E38(ctx, base);
loc_827109CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710984
	if (ctx.cr6.gt) goto loc_82710984;
loc_827109DC:
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
	// bge 0x82710a14
	if (!ctx.cr0.lt) goto loc_82710A14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710A14;
	sub_82725E38(ctx, base);
loc_82710A14:
	// stw r30,392(r27)
	REX_STORE_U32(r27.u32 + 392, r30.u32);
loc_82710A18:
	// lwz r11,392(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82710b94
	if (!ctx.cr6.eq) goto loc_82710B94;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710a98
	if (!ctx.cr6.lt) goto loc_82710A98;
loc_82710A40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710a98
	if (ctx.cr6.eq) goto loc_82710A98;
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
	// bge 0x82710a88
	if (!ctx.cr0.lt) goto loc_82710A88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710A88;
	sub_82725E38(ctx, base);
loc_82710A88:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710a40
	if (ctx.cr6.gt) goto loc_82710A40;
loc_82710A98:
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
	// bge 0x82710ad0
	if (!ctx.cr0.lt) goto loc_82710AD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710AD0;
	sub_82725E38(ctx, base);
loc_82710AD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, r30.u32);
	// beq cr6,0x82710b94
	if (ctx.cr6.eq) goto loc_82710B94;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710b50
	if (!ctx.cr6.lt) goto loc_82710B50;
loc_82710AF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710b50
	if (ctx.cr6.eq) goto loc_82710B50;
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
	// bge 0x82710b40
	if (!ctx.cr0.lt) goto loc_82710B40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710B40;
	sub_82725E38(ctx, base);
loc_82710B40:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710af8
	if (ctx.cr6.gt) goto loc_82710AF8;
loc_82710B50:
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
	// bge 0x82710b88
	if (!ctx.cr0.lt) goto loc_82710B88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710B88;
	sub_82725E38(ctx, base);
loc_82710B88:
	// lwz r11,2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2952);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, ctx.r11.u32);
loc_82710B94:
	// lwz r11,2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2952);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r11,2956(r27)
	REX_STORE_U32(r27.u32 + 2956, ctx.r11.u32);
	// stw r11,2968(r27)
	REX_STORE_U32(r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
	// stw r11,2960(r27)
	REX_STORE_U32(r27.u32 + 2960, ctx.r11.u32);
	// stw r11,2972(r27)
	REX_STORE_U32(r27.u32 + 2972, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710c20
	if (!ctx.cr6.lt) goto loc_82710C20;
loc_82710BC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710c20
	if (ctx.cr6.eq) goto loc_82710C20;
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
	// bge 0x82710c10
	if (!ctx.cr0.lt) goto loc_82710C10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710C10;
	sub_82725E38(ctx, base);
loc_82710C10:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710bc8
	if (ctx.cr6.gt) goto loc_82710BC8;
loc_82710C20:
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
	// bge 0x82710c58
	if (!ctx.cr0.lt) goto loc_82710C58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710C58;
	sub_82725E38(ctx, base);
loc_82710C58:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// stw r30,2112(r27)
	REX_STORE_U32(r27.u32 + 2112, r30.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82710d14
	if (!ctx.cr6.lt) goto loc_82710D14;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710cd8
	if (!ctx.cr6.lt) goto loc_82710CD8;
loc_82710C80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710cd8
	if (ctx.cr6.eq) goto loc_82710CD8;
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
	// bge 0x82710cc8
	if (!ctx.cr0.lt) goto loc_82710CC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710CC8;
	sub_82725E38(ctx, base);
loc_82710CC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710c80
	if (ctx.cr6.gt) goto loc_82710C80;
loc_82710CD8:
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
	// bge 0x82710d10
	if (!ctx.cr0.lt) goto loc_82710D10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710D10;
	sub_82725E38(ctx, base);
loc_82710D10:
	// stw r30,2060(r27)
	REX_STORE_U32(r27.u32 + 2060, r30.u32);
loc_82710D14:
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82711344
	if (!ctx.cr6.eq) goto loc_82711344;
	// lwz r11,3928(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3928);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,3928(r27)
	REX_STORE_U32(r27.u32 + 3928, ctx.r10.u32);
	// b 0x82711344
	goto loc_82711344;
loc_82710D30:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82710dec
	if (!ctx.cr6.lt) goto loc_82710DEC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82710db0
	if (!ctx.cr6.lt) goto loc_82710DB0;
loc_82710D58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710db0
	if (ctx.cr6.eq) goto loc_82710DB0;
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
	// bge 0x82710da0
	if (!ctx.cr0.lt) goto loc_82710DA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710DA0;
	sub_82725E38(ctx, base);
loc_82710DA0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710d58
	if (ctx.cr6.gt) goto loc_82710D58;
loc_82710DB0:
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
	// bge 0x82710de8
	if (!ctx.cr0.lt) goto loc_82710DE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710DE8;
	sub_82725E38(ctx, base);
loc_82710DE8:
	// stw r30,15496(r27)
	REX_STORE_U32(r27.u32 + 15496, r30.u32);
loc_82710DEC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,15496(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 15496);
	// bl 0x827052e8
	ctx.lr = 0x82710DF8;
	sub_827052E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82711364
	if (!ctx.cr6.eq) goto loc_82711364;
	// lwz r10,15504(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82710e90
	if (ctx.cr6.lt) goto loc_82710E90;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82704f80
	ctx.lr = 0x82710E14;
	sub_82704F80(ctx, base);
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82711364
	if (!ctx.cr6.eq) goto loc_82711364;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82711364
	if (!ctx.cr6.eq) goto loc_82711364;
	// lwz r10,15504(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x82710e40
	if (ctx.cr6.lt) goto loc_82710E40;
	// stw r29,400(r27)
	REX_STORE_U32(r27.u32 + 400, r29.u32);
	// b 0x82710e90
	goto loc_82710E90;
loc_82710E40:
	// lwz r9,3684(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 3684);
	// li r11,50
	ctx.r11.s64 = 50;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r7,r9,r11
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stw r4,396(r27)
	REX_STORE_U32(r27.u32 + 396, ctx.r4.u32);
	// bgt cr6,0x82710e88
	if (ctx.cr6.gt) goto loc_82710E88;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,156(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 156);
	// ori r7,r9,11264
	ctx.r7.u64 = ctx.r9.u64 | 11264;
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// blt cr6,0x82710e8c
	if (ctx.cr6.lt) goto loc_82710E8C;
loc_82710E88:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82710E8C:
	// stw r11,400(r27)
	REX_STORE_U32(r27.u32 + 400, ctx.r11.u32);
loc_82710E90:
	// lwz r11,3972(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82711304
	if (!ctx.cr6.eq) goto loc_82711304;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82711304
	if (ctx.cr6.lt) goto loc_82711304;
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82710f60
	if (ctx.cr6.eq) goto loc_82710F60;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710f24
	if (!ctx.cr6.lt) goto loc_82710F24;
loc_82710ECC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710f24
	if (ctx.cr6.eq) goto loc_82710F24;
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
	// bge 0x82710f14
	if (!ctx.cr0.lt) goto loc_82710F14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710F14;
	sub_82725E38(ctx, base);
loc_82710F14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710ecc
	if (ctx.cr6.gt) goto loc_82710ECC;
loc_82710F24:
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
	// bge 0x82710f5c
	if (!ctx.cr0.lt) goto loc_82710F5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710F5C;
	sub_82725E38(ctx, base);
loc_82710F5C:
	// stw r30,392(r27)
	REX_STORE_U32(r27.u32 + 392, r30.u32);
loc_82710F60:
	// lwz r11,392(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82711258
	if (!ctx.cr6.eq) goto loc_82711258;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82710fe0
	if (!ctx.cr6.lt) goto loc_82710FE0;
loc_82710F88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82710fe0
	if (ctx.cr6.eq) goto loc_82710FE0;
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
	// bge 0x82710fd0
	if (!ctx.cr0.lt) goto loc_82710FD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82710FD0;
	sub_82725E38(ctx, base);
loc_82710FD0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82710f88
	if (ctx.cr6.gt) goto loc_82710F88;
loc_82710FE0:
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
	// bge 0x82711018
	if (!ctx.cr0.lt) goto loc_82711018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711018;
	sub_82725E38(ctx, base);
loc_82711018:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, r30.u32);
	// beq cr6,0x827110dc
	if (ctx.cr6.eq) goto loc_827110DC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82711098
	if (!ctx.cr6.lt) goto loc_82711098;
loc_82711040:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82711098
	if (ctx.cr6.eq) goto loc_82711098;
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
	// bge 0x82711088
	if (!ctx.cr0.lt) goto loc_82711088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711088;
	sub_82725E38(ctx, base);
loc_82711088:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82711040
	if (ctx.cr6.gt) goto loc_82711040;
loc_82711098:
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
	// bge 0x827110d0
	if (!ctx.cr0.lt) goto loc_827110D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827110D0;
	sub_82725E38(ctx, base);
loc_827110D0:
	// lwz r11,2952(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2952);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, ctx.r11.u32);
loc_827110DC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82711150
	if (!ctx.cr6.lt) goto loc_82711150;
loc_827110F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82711150
	if (ctx.cr6.eq) goto loc_82711150;
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
	// bge 0x82711140
	if (!ctx.cr0.lt) goto loc_82711140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711140;
	sub_82725E38(ctx, base);
loc_82711140:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827110f8
	if (ctx.cr6.gt) goto loc_827110F8;
loc_82711150:
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
	// bge 0x82711188
	if (!ctx.cr0.lt) goto loc_82711188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711188;
	sub_82725E38(ctx, base);
loc_82711188:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, r30.u32);
	// beq cr6,0x8271124c
	if (ctx.cr6.eq) goto loc_8271124C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82711208
	if (!ctx.cr6.lt) goto loc_82711208;
loc_827111B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82711208
	if (ctx.cr6.eq) goto loc_82711208;
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
	// bge 0x827111f8
	if (!ctx.cr0.lt) goto loc_827111F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827111F8;
	sub_82725E38(ctx, base);
loc_827111F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827111b0
	if (ctx.cr6.gt) goto loc_827111B0;
loc_82711208:
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
	// bge 0x82711240
	if (!ctx.cr0.lt) goto loc_82711240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711240;
	sub_82725E38(ctx, base);
loc_82711240:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
loc_8271124C:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// stw r11,2972(r27)
	REX_STORE_U32(r27.u32 + 2972, ctx.r11.u32);
	// stw r11,2968(r27)
	REX_STORE_U32(r27.u32 + 2968, ctx.r11.u32);
loc_82711258:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827112c8
	if (!ctx.cr6.lt) goto loc_827112C8;
loc_82711270:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827112c8
	if (ctx.cr6.eq) goto loc_827112C8;
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
	// bge 0x827112b8
	if (!ctx.cr0.lt) goto loc_827112B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827112B8;
	sub_82725E38(ctx, base);
loc_827112B8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82711270
	if (ctx.cr6.gt) goto loc_82711270;
loc_827112C8:
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
	// bge 0x82711300
	if (!ctx.cr0.lt) goto loc_82711300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711300;
	sub_82725E38(ctx, base);
loc_82711300:
	// stw r30,2112(r27)
	REX_STORE_U32(r27.u32 + 2112, r30.u32);
loc_82711304:
	// lwz r11,20984(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271131c
	if (!ctx.cr6.eq) goto loc_8271131C;
	// lwz r11,3948(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82711338
	if (ctx.cr6.eq) goto loc_82711338;
loc_8271131C:
	// lwz r11,4008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82711338
	if (ctx.cr6.eq) goto loc_82711338;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827078c8
	ctx.lr = 0x82711334;
	sub_827078C8(ctx, base);
	// b 0x82711340
	goto loc_82711340;
loc_82711338:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82749960
	ctx.lr = 0x82711340;
	sub_82749960(ctx, base);
loc_82711340:
	// stw r24,3928(r27)
	REX_STORE_U32(r27.u32 + 3928, r24.u32);
loc_82711344:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r23
	ctx.r3.u64 = ctx.r7.u64 & r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82711360:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82711364:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

