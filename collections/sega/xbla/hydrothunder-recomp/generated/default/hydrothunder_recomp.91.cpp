#include "hydrothunder_funcs.91.h"

DEFINE_REX_FUNC(sub_821257A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821257B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821257e8
	goto loc_821257E8;
loc_821257C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821257E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821257E8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821257c8
	if (!ctx.cr6.eq) goto loc_821257C8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82125814
	if (ctx.cr6.eq) goto loc_82125814;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82125814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212A0A8) {
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
	ctx.lr = 0x8212A0B0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x8212a0ec
	goto loc_8212A0EC;
loc_8212A0C8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212A0D4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212a0e4
	if (!ctx.cr0.lt) goto loc_8212A0E4;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8212a0ec
	goto loc_8212A0EC;
loc_8212A0E4:
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8212A0EC:
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212a0c8
	if (ctx.cr0.eq) goto loc_8212A0C8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212a11c
	if (ctx.cr6.eq) goto loc_8212A11C;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8212A114;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212a228
	if (!ctx.cr0.lt) goto loc_8212A228;
loc_8212A11C:
	// li r27,0
	r27.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// bl 0x822f6280
	ctx.lr = 0x8212A12C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212a24c
	if (ctx.cr0.eq) goto loc_8212A24C;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r10,65(r11)
	REX_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// bl 0x82120d70
	ctx.lr = 0x8212A16C;
	sub_82120D70(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8212add8
	ctx.lr = 0x8212A178;
	sub_8212ADD8(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x8212A180;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8212a234
	if (ctx.cr0.eq) goto loc_8212A234;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addic. r29,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r29.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r27,56(r31)
	REX_STORE_U8(r31.u32 + 56, r27.u8);
	// stb r27,57(r31)
	REX_STORE_U8(r31.u32 + 57, r27.u8);
	// beq 0x8212a1c8
	if (ctx.cr0.eq) goto loc_8212A1C8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x8212A1BC;
	sub_82120D70(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x8212add8
	ctx.lr = 0x8212A1C8;
	sub_8212ADD8(ctx, base);
loc_8212A1C8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212b0e0
	ctx.lr = 0x8212A1DC;
	sub_8212B0E0(ctx, base);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215e198
	ctx.lr = 0x8212A1F4;
	sub_8215E198(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8269ce98
	ctx.lr = 0x8212A1FC;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8212A20C;
	sub_82120AC0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8215e198
	ctx.lr = 0x8212A220;
	sub_8215E198(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8269ce98
	ctx.lr = 0x8212A228;
	sub_8269CE98(ctx, base);
loc_8212A228:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
loc_8212A234:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8212A24C;
	sub_82120018(ctx, base);
loc_8212A24C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8212A264;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82137190) {
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
	ctx.lr = 0x82137198;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,27504
	ctx.r4.s64 = ctx.r11.s64 + 27504;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,96(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
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
	ctx.lr = 0x821371E0;
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
	ctx.lr = 0x82137200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
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
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// bctrl 
	ctx.lr = 0x82137228;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82137244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,100(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lfs f13,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lfs f11,80(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f10,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f9,88(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821372A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82141690) {
	REX_FUNC_PROLOGUE();
	// lbz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,312(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
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

DEFINE_REX_FUNC(sub_82142B20) {
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
	ctx.lr = 0x82142B28;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82142b60
	if (ctx.cr0.eq) goto loc_82142B60;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,284(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142B60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142B60:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x82142B68;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82142bd4
	if (ctx.cr0.eq) goto loc_82142BD4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// addi r11,r11,29672
	ctx.r11.s64 = ctx.r11.s64 + 29672;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82142B94;
	sub_82120AC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82142bc8
	goto loc_82142BC8;
loc_82142BBC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82170f90
	ctx.lr = 0x82142BC4;
	sub_82170F90(ctx, base);
	// lhzu r3,2(r29)
	ea = 2 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
loc_82142BC8:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82142bbc
	if (!ctx.cr0.eq) goto loc_82142BBC;
	// b 0x82142bd8
	goto loc_82142BD8;
loc_82142BD4:
	// li r31,0
	r31.s64 = 0;
loc_82142BD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142BF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r27,-36
	ctx.r3.s64 = r27.s64 + -36;
	// bl 0x82143d18
	ctx.lr = 0x82142BFC;
	sub_82143D18(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r11,-17021(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -17021);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82142c58
	if (ctx.cr0.eq) goto loc_82142C58;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264d8e8
	ctx.lr = 0x82142C58;
	sub_8264D8E8(ctx, base);
loc_82142C58:
	// lwz r30,-32(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + -32);
	// b 0x82142c7c
	goto loc_82142C7C;
loc_82142C60:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142C78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82142C7C:
	// lwz r11,-28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82142c60
	if (!ctx.cr6.eq) goto loc_82142C60;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8214CBB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// ld r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// rldicl r10,r11,10,54
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8214cbe4
	if (!ctx.cr6.eq) goto loc_8214CBE4;
	// rldicl r11,r11,8,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// blr 
	return;
loc_8214CBE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214FA18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8214FA20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8214fa6c
	goto loc_8214FA6C;
loc_8214FA40:
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x8214FA4C;
	sub_8215F5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x8214fa18
	ctx.lr = 0x8214FA5C;
	sub_8214FA18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821502b0
	ctx.lr = 0x8214FA64;
	sub_821502B0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8214FA6C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214fa40
	if (!ctx.cr6.eq) goto loc_8214FA40;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82151B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82151B98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mulli r10,r10,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82151c20
	goto loc_82151C20;
loc_82151BBC:
	// ld r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 48);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 56);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r7,r31,48
	ctx.r7.s64 = r31.s64 + 48;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// std r9,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// std r8,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// bl 0x823fbd18
	ctx.lr = 0x82151BF0;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r10.u64);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82151C20:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82151bbc
	if (!ctx.cr6.eq) goto loc_82151BBC;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// b 0x82151c54
	goto loc_82151C54;
loc_82151C38:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82151C54:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82151c38
	if (!ctx.cr6.eq) goto loc_82151C38;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r7,r11,-42
	ctx.r7.s64 = ctx.r11.s64 + -42;
	// lbz r11,-1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82151ca0
	if (ctx.cr0.eq) goto loc_82151CA0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r9,r11,80
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x82151c98
	goto loc_82151C98;
loc_82151C94:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
loc_82151C98:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82151c94
	if (!ctx.cr6.eq) goto loc_82151C94;
loc_82151CA0:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82151ce8
	if (ctx.cr0.eq) goto loc_82151CE8;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82151ce8
	if (ctx.cr6.eq) goto loc_82151CE8;
loc_82151CB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82151cb8
	if (!ctx.cr6.eq) goto loc_82151CB8;
loc_82151CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215C328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8215C330;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r11,513
	ctx.r11.s64 = 513;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r30.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// std r30,32(r31)
	REX_STORE_U64(r31.u32 + 32, r30.u64);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8215C374;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8215c394
	if (ctx.cr0.eq) goto loc_8215C394;
	// bl 0x822f6e10
	ctx.lr = 0x8215C380;
	sub_822F6E10(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x822f6940
	ctx.lr = 0x8215C388;
	sub_822F6940(ctx, base);
	// bl 0x8215cbf0
	ctx.lr = 0x8215C38C;
	sub_8215CBF0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8215c398
	goto loc_8215C398;
loc_8215C394:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8215C398:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r28,56(r31)
	REX_STORE_U32(r31.u32 + 56, r28.u32);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x8215cbf0
	ctx.lr = 0x8215C3B4;
	sub_8215CBF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215cab8
	ctx.lr = 0x8215C3BC;
	sub_8215CAB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8215c3ec
	if (ctx.cr6.eq) goto loc_8215C3EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215cee0
	ctx.lr = 0x8215C3D0;
	sub_8215CEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215c3ec
	if (ctx.cr0.eq) goto loc_8215C3EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C3EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C3EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stb r3,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r3.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215c43c
	if (!ctx.cr6.eq) goto loc_8215C43C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// and. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// beq 0x8215c43c
	if (ctx.cr0.eq) goto loc_8215C43C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215d170
	ctx.lr = 0x8215C43C;
	sub_8215D170(ctx, base);
loc_8215C43C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82167098) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,23064
	ctx.r4.s64 = ctx.r11.s64 + 23064;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821670C0;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x821670C8;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82167160
	if (ctx.cr0.eq) goto loc_82167160;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23072
	ctx.r4.s64 = ctx.r11.s64 + 23072;
	// bl 0x8215f338
	ctx.lr = 0x821670E0;
	sub_8215F338(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8215fb00
	ctx.lr = 0x821670E8;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82167160
	if (ctx.cr0.eq) goto loc_82167160;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x8215f338
	ctx.lr = 0x82167100;
	sub_8215F338(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8215fb00
	ctx.lr = 0x82167108;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82167160
	if (ctx.cr0.eq) goto loc_82167160;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8215f338
	ctx.lr = 0x82167128;
	sub_8215F338(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8215fb00
	ctx.lr = 0x82167130;
	sub_8215FB00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82167164
	goto loc_82167164;
loc_82167160:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82167164:
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

DEFINE_REX_FUNC(sub_8216CE38) {
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
	// blt cr6,0x8216ce68
	if (ctx.cr6.lt) goto loc_8216CE68;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216ce80
	if (ctx.cr6.lt) goto loc_8216CE80;
loc_8216CE68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8216CE80;
	sub_821231D0(ctx, base);
loc_8216CE80:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r10,r31,272
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(272));
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

DEFINE_REX_FUNC(sub_821704F0) {
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
	ctx.lr = 0x821704F8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1888
	ctx.r5.s64 = 1888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82170508;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r10,2040(r30)
	REX_STORE_U32(r30.u32 + 2040, ctx.r10.u32);
	// stw r28,1888(r30)
	REX_STORE_U32(r30.u32 + 1888, r28.u32);
	// stw r11,1892(r30)
	REX_STORE_U32(r30.u32 + 1892, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217053C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,1896(r30)
	REX_STORE_U32(r30.u32 + 1896, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1880(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821705f4
	if (!ctx.cr6.gt) goto loc_821705F4;
	// addi r29,r30,1900
	r29.s64 = r30.s64 + 1900;
	// addi r31,r30,840
	r31.s64 = r30.s64 + 840;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_82170578:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821705a8
	if (!ctx.cr6.eq) goto loc_821705A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x82170590;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x8217059C;
	sub_82154C08(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x821705d0
	goto loc_821705D0;
loc_821705A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821705dc
	if (!ctx.cr6.eq) goto loc_821705DC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x821705BC;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// bl 0x82170b20
	ctx.lr = 0x821705C8;
	sub_82170B20(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_821705D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821705DC;
	sub_82120AC0(ctx, base);
loc_821705DC:
	// lwz r11,1880(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1880);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,136
	r31.s64 = r31.s64 + 136;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82170578
	if (ctx.cr6.lt) goto loc_82170578;
loc_821705F4:
	// lwz r29,1892(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1892);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,1896(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 1896);
	// addi r4,r11,26136
	ctx.r4.s64 = ctx.r11.s64 + 26136;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1932(r30)
	REX_STORE_U32(r30.u32 + 1932, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26148
	ctx.r4.s64 = ctx.r11.s64 + 26148;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1936(r30)
	REX_STORE_U32(r30.u32 + 1936, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r11,26164
	r28.s64 = ctx.r11.s64 + 26164;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1940(r30)
	REX_STORE_U32(r30.u32 + 1940, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r27,r11,26176
	r27.s64 = ctx.r11.s64 + 26176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821706A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1944(r30)
	REX_STORE_U32(r30.u32 + 1944, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821706C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1948(r30)
	REX_STORE_U32(r30.u32 + 1948, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821706E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1952(r30)
	REX_STORE_U32(r30.u32 + 1952, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26188
	ctx.r4.s64 = ctx.r11.s64 + 26188;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1956(r30)
	REX_STORE_U32(r30.u32 + 1956, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26204
	ctx.r4.s64 = ctx.r11.s64 + 26204;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170738;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1960(r30)
	REX_STORE_U32(r30.u32 + 1960, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26220
	ctx.r4.s64 = ctx.r11.s64 + 26220;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1964(r30)
	REX_STORE_U32(r30.u32 + 1964, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26240
	ctx.r4.s64 = ctx.r11.s64 + 26240;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1968(r30)
	REX_STORE_U32(r30.u32 + 1968, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26260
	ctx.r4.s64 = ctx.r11.s64 + 26260;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821707B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1972(r30)
	REX_STORE_U32(r30.u32 + 1972, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26284
	ctx.r4.s64 = ctx.r11.s64 + 26284;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821707D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1976(r30)
	REX_STORE_U32(r30.u32 + 1976, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26296
	ctx.r4.s64 = ctx.r11.s64 + 26296;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170800;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1980(r30)
	REX_STORE_U32(r30.u32 + 1980, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26304
	ctx.r4.s64 = ctx.r11.s64 + 26304;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1984(r30)
	REX_STORE_U32(r30.u32 + 1984, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26316
	ctx.r4.s64 = ctx.r11.s64 + 26316;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1988(r30)
	REX_STORE_U32(r30.u32 + 1988, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26340
	ctx.r4.s64 = ctx.r11.s64 + 26340;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1992(r30)
	REX_STORE_U32(r30.u32 + 1992, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26356
	ctx.r4.s64 = ctx.r11.s64 + 26356;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821708A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,1996(r30)
	REX_STORE_U32(r30.u32 + 1996, ctx.r3.u32);
	// addi r4,r11,26372
	ctx.r4.s64 = ctx.r11.s64 + 26372;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821708C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2000(r30)
	REX_STORE_U32(r30.u32 + 2000, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26388
	ctx.r4.s64 = ctx.r11.s64 + 26388;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821708F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,2004(r30)
	REX_STORE_U32(r30.u32 + 2004, ctx.r3.u32);
	// addi r4,r11,26400
	ctx.r4.s64 = ctx.r11.s64 + 26400;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2008(r30)
	REX_STORE_U32(r30.u32 + 2008, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26412
	ctx.r4.s64 = ctx.r11.s64 + 26412;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2012(r30)
	REX_STORE_U32(r30.u32 + 2012, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26428
	ctx.r4.s64 = ctx.r11.s64 + 26428;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2016(r30)
	REX_STORE_U32(r30.u32 + 2016, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26452
	ctx.r4.s64 = ctx.r11.s64 + 26452;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2020(r30)
	REX_STORE_U32(r30.u32 + 2020, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26468
	ctx.r4.s64 = ctx.r11.s64 + 26468;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821709B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2024(r30)
	REX_STORE_U32(r30.u32 + 2024, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,26484
	ctx.r4.s64 = ctx.r11.s64 + 26484;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821709E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2028(r30)
	REX_STORE_U32(r30.u32 + 2028, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,26504
	ctx.r4.s64 = ctx.r11.s64 + 26504;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2032(r30)
	REX_STORE_U32(r30.u32 + 2032, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r11,26516
	ctx.r4.s64 = ctx.r11.s64 + 26516;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,2036(r30)
	REX_STORE_U32(r30.u32 + 2036, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82196720) {
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
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x82196748;
	sub_826A1E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821264e8
	ctx.lr = 0x82196754;
	sub_821264E8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_821977F8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,44(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x8215f0f0
	ctx.lr = 0x82197820;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8219B8B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8219B8B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8219b918
	if (!ctx.cr0.gt) goto loc_8219B918;
	// li r30,0
	r30.s64 = 0;
loc_8219B8E0:
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82120780
	ctx.lr = 0x8219B8F0;
	sub_82120780(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8219b924
	if (ctx.cr0.eq) goto loc_8219B924;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8219b8e0
	if (ctx.cr6.lt) goto loc_8219B8E0;
loc_8219B918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219B91C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8219B924:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8219b91c
	goto loc_8219B91C;
}

DEFINE_REX_FUNC(sub_8219EA88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F980) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15464
	ctx.r3.s64 = ctx.r11.s64 + -15464;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0290) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x821A0298;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A02BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A02CC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a02cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A02CC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x821A02F8;
	sub_821884B0(ctx, base);
	// lwz r31,44(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a0424
	if (ctx.cr6.eq) goto loc_821A0424;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f31,656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 656);
	f31.f64 = double(temp.f32);
loc_821A0314:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A032C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821a032c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A032C;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216d040
	ctx.lr = 0x821A0344;
	sub_8216D040(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821263d8
	ctx.lr = 0x821A0350;
	sub_821263D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823fbf60
	ctx.lr = 0x821A0360;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0370:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a0370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0370;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x821A0398;
	sub_821884B0(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lbz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 116);
	// lfs f11,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,148(r30)
	REX_STORE_U8(r30.u32 + 148, ctx.r11.u8);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// fctiw f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// fctiw f0,f12
	ctx.f0.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiw f0,f11
	ctx.f0.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r9,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r11.u32);
	// bl 0x821d5bd0
	ctx.lr = 0x821A0418;
	sub_821D5BD0(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821a0314
	if (!ctx.cr6.eq) goto loc_821A0314;
loc_821A0424:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821ABF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821ABF90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821abfc4
	if (ctx.cr6.eq) goto loc_821ABFC4;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ABFBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821ABFC4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r28,6040(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,96(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r4,-15360(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -15360);
	// bl 0x82120600
	ctx.lr = 0x821ABFDC;
	sub_82120600(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ABFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821AC00C;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac024
	if (ctx.cr0.eq) goto loc_821AC024;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821ac1d8
	ctx.lr = 0x821AC020;
	sub_821AC1D8(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_821AC024:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B0F48) {
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
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x822f6280
	ctx.lr = 0x821B0F5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0f6c
	if (ctx.cr0.eq) goto loc_821B0F6C;
	// bl 0x821b0f80
	ctx.lr = 0x821B0F68;
	sub_821B0F80(ctx, base);
	// b 0x821b0f70
	goto loc_821B0F70;
loc_821B0F6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0F70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B23B0) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821B23D4;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B23DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b2408
	if (ctx.cr0.eq) goto loc_821B2408;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,8240
	ctx.r10.s64 = ctx.r10.s64 + 8240;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b240c
	goto loc_821B240C;
loc_821B2408:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B240C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821B5B90) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821B5BB4;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B5BBC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5be8
	if (ctx.cr0.eq) goto loc_821B5BE8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,22352
	ctx.r10.s64 = ctx.r10.s64 + 22352;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b5bec
	goto loc_821B5BEC;
loc_821B5BE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B5BEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821B8D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B8D18;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B8D30:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b8d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B8D30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,120(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lfs f13,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// lfs f12,140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// lfs f11,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// li r3,272
	ctx.r3.s64 = 272;
	// lfs f10,148(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// ld r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lwz r29,6168(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 6168);
	// lfs f6,152(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// std r6,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B8DC8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821b8e24
	if (ctx.cr0.eq) goto loc_821B8E24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3ac0
	ctx.lr = 0x821B8DDC;
	sub_821D3AC0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,-32756
	ctx.r9.s64 = ctx.r10.s64 + -32756;
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B8DF8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b8df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B8DF8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x82188608
	ctx.lr = 0x821B8E18;
	sub_82188608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218f0c0
	ctx.lr = 0x821B8E20;
	sub_8218F0C0(ctx, base);
	// b 0x821b8e28
	goto loc_821B8E28;
loc_821B8E24:
	// li r31,0
	r31.s64 = 0;
loc_821B8E28:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8214abd8
	ctx.lr = 0x821B8E44;
	sub_8214ABD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B8E50;
	sub_82149E08(ctx, base);
	// stw r31,156(r30)
	REX_STORE_U32(r30.u32 + 156, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C3268) {
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
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x822f6280
	ctx.lr = 0x821C327C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c328c
	if (ctx.cr0.eq) goto loc_821C328C;
	// bl 0x821c32a0
	ctx.lr = 0x821C3288;
	sub_821C32A0(ctx, base);
	// b 0x821c3290
	goto loc_821C3290;
loc_821C328C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C3290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C49E0) {
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
	// addi r11,r11,-24540
	ctx.r11.s64 = ctx.r11.s64 + -24540;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x82120ac0
	ctx.lr = 0x821C4A10;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821C4A20;
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

DEFINE_REX_FUNC(sub_821C68E8) {
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
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C6910:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c6910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C6910;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821C692C;
	sub_821884B0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x82191578
	ctx.lr = 0x821C693C;
	sub_82191578(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C6980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c69a8
	ctx.lr = 0x821C6988;
	sub_821C69A8(ctx, base);
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

DEFINE_REX_FUNC(sub_821CD358) {
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
	// lwz r11,164(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cd390
	if (ctx.cr6.eq) goto loc_821CD390;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CD390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821CD390:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_821CFD18) {
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
	ctx.lr = 0x821CFD20;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,194(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 194);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cfd5c
	if (ctx.cr0.eq) goto loc_821CFD5C;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CFD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cff00
	if (ctx.cr0.eq) goto loc_821CFF00;
loc_821CFD5C:
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cff00
	if (!ctx.cr0.eq) goto loc_821CFF00;
	// lbz r11,193(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 193);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cfd7c
	if (ctx.cr0.eq) goto loc_821CFD7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
loc_821CFD7C:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cff00
	if (ctx.cr6.eq) goto loc_821CFF00;
	// stw r29,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216b6a8
	ctx.lr = 0x821CFDAC;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,180
	ctx.r5.s64 = r31.s64 + 180;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216b6a8
	ctx.lr = 0x821CFDC0;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216b6a8
	ctx.lr = 0x821CFDD4;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216b6a8
	ctx.lr = 0x821CFDE8;
	sub_8216B6A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216b6a8
	ctx.lr = 0x821CFDFC;
	sub_8216B6A8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cfe28
	if (ctx.cr6.eq) goto loc_821CFE28;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8216b6a8
	ctx.lr = 0x821CFE28;
	sub_8216B6A8(ctx, base);
loc_821CFE28:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,19784
	ctx.r4.s64 = ctx.r11.s64 + 19784;
	// bl 0x82120600
	ctx.lr = 0x821CFE38;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821dd040
	ctx.lr = 0x821CFE44;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CFE64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821CFE74;
	sub_82120AC0(ctx, base);
	// lbz r11,194(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 194);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cff00
	if (ctx.cr0.eq) goto loc_821CFF00;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CFE94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cff00
	if (ctx.cr0.eq) goto loc_821CFF00;
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
	ctx.lr = 0x821CFEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,120(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8217f4b0
	ctx.lr = 0x821CFEC8;
	sub_8217F4B0(ctx, base);
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// stw r27,106(r1)
	REX_STORE_U32(ctx.r1.u32 + 106, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CFF00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821CFF00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821DD150) {
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
	ctx.lr = 0x821DD158;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,12196
	r27.s64 = ctx.r11.s64 + 12196;
	// addi r26,r10,12092
	r26.s64 = ctx.r10.s64 + 12092;
loc_821DD178:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821dd19c
	if (!ctx.cr6.eq) goto loc_821DD19C;
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
	// b 0x821dd1a0
	goto loc_821DD1A0;
loc_821DD19C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DD1A0:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821dd2dc
	if (!ctx.cr6.lt) goto loc_821DD2DC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821DD1B4;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DD1BC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821DD1C0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x821DD1CC;
	sub_82120D70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821DD1D8;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DD1E0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821DD1E4;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120d70
	ctx.lr = 0x821DD1F0;
	sub_82120D70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821dd204
	if (!ctx.cr6.lt) goto loc_821DD204;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_821DD204:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x821DD20C;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82178b60
	ctx.lr = 0x821DD218;
	sub_82178B60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821DD22C;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd2b4
	if (ctx.cr6.eq) goto loc_821DD2B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dc4e0
	ctx.lr = 0x821DD23C;
	sub_821DC4E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dd2b4
	if (ctx.cr0.eq) goto loc_821DD2B4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821dd0c8
	ctx.lr = 0x821DD24C;
	sub_821DD0C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821dd2b4
	if (ctx.cr0.eq) goto loc_821DD2B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd350
	ctx.lr = 0x821DD260;
	sub_821DD350(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dd2b4
	if (ctx.cr0.eq) goto loc_821DD2B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd350
	ctx.lr = 0x821DD274;
	sub_821DD350(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dd2b4
	if (ctx.cr0.eq) goto loc_821DD2B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd3e0
	ctx.lr = 0x821DD284;
	sub_821DD3E0(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82145710
	ctx.lr = 0x821DD298;
	sub_82145710(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd2b4
	if (ctx.cr6.eq) goto loc_821DD2B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DD2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DD2B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821DD2C4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821DD2D4;
	sub_82120AC0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821dd178
	goto loc_821DD178;
loc_821DD2DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E5AE0) {
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
	ctx.lr = 0x821E5AE8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e5b20
	if (ctx.cr6.eq) goto loc_821E5B20;
	// lwz r3,6040(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
loc_821E5B20:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r26,6040(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,-15328
	r30.s64 = ctx.r10.s64 + -15328;
	// lwz r4,-15328(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -15328);
	// bl 0x82120600
	ctx.lr = 0x821E5B38;
	sub_82120600(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821E5B68;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e5be8
	if (ctx.cr0.eq) goto loc_821E5BE8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,6040(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// bl 0x82120600
	ctx.lr = 0x821E5B80;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821E5BB0;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821e5be4
	if (ctx.cr6.eq) goto loc_821E5BE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x821E5BC4;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e5be4
	if (!ctx.cr0.eq) goto loc_821E5BE4;
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
	ctx.lr = 0x821E5BE4;
	sub_821231D0(ctx, base);
loc_821E5BE4:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_821E5BE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r27,76(r29)
	REX_STORE_U32(r29.u32 + 76, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,88(r29)
	REX_STORE_U32(r29.u32 + 88, r27.u32);
	// beq cr6,0x821e5d24
	if (ctx.cr6.eq) goto loc_821E5D24;
	// lwz r31,132(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// addi r27,r29,72
	r27.s64 = r29.s64 + 72;
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 80);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821e5c60
	if (!ctx.cr6.gt) goto loc_821E5C60;
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
	// bgt cr6,0x821e5c28
	if (ctx.cr6.gt) goto loc_821E5C28;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821E5C28:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821e5c60
	if (!ctx.cr6.gt) goto loc_821E5C60;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,48
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821E5C3C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821E5C50;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821E5C58;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// stw r30,8(r27)
	REX_STORE_U32(r27.u32 + 8, r30.u32);
loc_821E5C60:
	// stw r31,4(r27)
	REX_STORE_U32(r27.u32 + 4, r31.u32);
	// addi r31,r29,84
	r31.s64 = r29.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lwz r30,144(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821e5ccc
	if (!ctx.cr6.gt) goto loc_821E5CCC;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// bgt cr6,0x821e5c94
	if (ctx.cr6.gt) goto loc_821E5C94;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_821E5C94:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821e5ccc
	if (!ctx.cr6.gt) goto loc_821E5CCC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r28,48
	ctx.r3.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821E5CA8;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821E5CBC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821E5CC4;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_821E5CCC:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r30,76(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 76);
	// bl 0x821afa30
	ctx.lr = 0x821E5CE0;
	sub_821AFA30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r30,48
	ctx.r5.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
	// bl 0x826a2e60
	ctx.lr = 0x821E5CEC;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,88(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 88);
	// bgt cr6,0x821e5d14
	if (ctx.cr6.gt) goto loc_821E5D14;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821E5D14;
	sub_821231D0(ctx, base);
loc_821E5D14:
	// mulli r5,r30,48
	ctx.r5.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x821E5D24;
	sub_826A2E60(ctx, base);
loc_821E5D24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FABE8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,24980
	ctx.r4.s64 = ctx.r11.s64 + 24980;
	// bl 0x8215f670
	ctx.lr = 0x821FAC08;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FAC10;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
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

DEFINE_REX_FUNC(sub_821FBBC0) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC390) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC630) {
	REX_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,45(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FCA50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FCA58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,25880
	ctx.r4.s64 = ctx.r11.s64 + 25880;
	// bl 0x8215f338
	ctx.lr = 0x821FCA74;
	sub_8215F338(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x8215fba8
	ctx.lr = 0x821FCA7C;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25888
	ctx.r4.s64 = ctx.r11.s64 + 25888;
	// bl 0x8215f338
	ctx.lr = 0x821FCA8C;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb50
	ctx.lr = 0x821FCA94;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fcab4
	if (ctx.cr0.eq) goto loc_821FCAB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FCAB4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25900
	ctx.r4.s64 = ctx.r11.s64 + 25900;
	// bl 0x8215f338
	ctx.lr = 0x821FCAC4;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb50
	ctx.lr = 0x821FCACC;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fcaec
	if (ctx.cr0.eq) goto loc_821FCAEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCAEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FCAEC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25912
	ctx.r4.s64 = ctx.r11.s64 + 25912;
	// bl 0x8215f338
	ctx.lr = 0x821FCAFC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821fcb10
	if (!ctx.cr6.eq) goto loc_821FCB10;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,40(r30)
	REX_STORE_U8(r30.u32 + 40, ctx.r11.u8);
loc_821FCB10:
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
	ctx.lr = 0x821FCB28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,25932
	ctx.r4.s64 = ctx.r11.s64 + 25932;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FCB3C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821fcb54
	if (!ctx.cr6.eq) goto loc_821FCB54;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// stb r11,41(r10)
	REX_STORE_U8(ctx.r10.u32 + 41, ctx.r11.u8);
loc_821FCB54:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25952
	ctx.r4.s64 = ctx.r11.s64 + 25952;
	// bl 0x8215f338
	ctx.lr = 0x821FCB64;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821fcb7c
	if (!ctx.cr6.eq) goto loc_821FCB7C;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
loc_821FCB7C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25968
	ctx.r4.s64 = ctx.r11.s64 + 25968;
	// bl 0x8215f338
	ctx.lr = 0x821FCB8C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821fcba4
	if (!ctx.cr6.eq) goto loc_821FCBA4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// stb r11,49(r10)
	REX_STORE_U8(ctx.r10.u32 + 49, ctx.r11.u8);
loc_821FCBA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25988
	ctx.r4.s64 = ctx.r11.s64 + 25988;
	// bl 0x8215f338
	ctx.lr = 0x821FCBB4;
	sub_8215F338(ctx, base);
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8215fba8
	ctx.lr = 0x821FCBC4;
	sub_8215FBA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82206820) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82206878
	if (!ctx.cr6.eq) goto loc_82206878;
	// lbz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 110);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82206878
	if (!ctx.cr0.eq) goto loc_82206878;
	// lbz r11,109(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82206878
	if (!ctx.cr0.eq) goto loc_82206878;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x82206860;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82206870
	if (ctx.cr0.eq) goto loc_82206870;
	// bl 0x82252528
	ctx.lr = 0x8220686C;
	sub_82252528(ctx, base);
	// b 0x82206874
	goto loc_82206874;
loc_82206870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82206874:
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_82206878:
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

DEFINE_REX_FUNC(sub_82208A98) {
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
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x822f6280
	ctx.lr = 0x82208AB0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82208ad4
	if (ctx.cr0.eq) goto loc_82208AD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219ef38
	ctx.lr = 0x82208AC0;
	sub_8219EF38(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,31568
	ctx.r11.s64 = ctx.r11.s64 + 31568;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82208ad8
	goto loc_82208AD8;
loc_82208AD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82208AD8:
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

DEFINE_REX_FUNC(sub_8220BCD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14356
	ctx.r3.s64 = ctx.r11.s64 + -14356;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C010) {
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
	// lwz r4,112(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6080(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6080);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220c060
	if (ctx.cr0.eq) goto loc_8220C060;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8220C060:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r31,4(r30)
	REX_STORE_U8(r30.u32 + 4, r31.u8);
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

DEFINE_REX_FUNC(sub_8220EF08) {
	REX_FUNC_PROLOGUE();
	// lbz r11,289(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 289);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F738) {
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
	// bl 0x822e8790
	ctx.lr = 0x8220F754;
	sub_822E8790(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-29940
	ctx.r11.s64 = ctx.r11.s64 + -29940;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,-28804
	ctx.r10.s64 = ctx.r10.s64 + -28804;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-1912
	ctx.r11.s64 = ctx.r11.s64 + -1912;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8220F78C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220f7b4
	if (ctx.cr0.eq) goto loc_8220F7B4;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,-12728
	ctx.r10.s64 = ctx.r10.s64 + -12728;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x8220f7b8
	goto loc_8220F7B8;
loc_8220F7B4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8220F7B8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-29960
	ctx.r5.s64 = ctx.r11.s64 + -29960;
	// bl 0x8216be80
	ctx.lr = 0x8220F7C8;
	sub_8216BE80(ctx, base);
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

DEFINE_REX_FUNC(sub_822153B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822153C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,1064(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 1064);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r4,224
	ctx.r3.s64 = ctx.r4.s64 + 224;
	// addi r4,r11,-7880
	ctx.r4.s64 = ctx.r11.s64 + -7880;
	// bl 0x8215f338
	ctx.lr = 0x822153DC;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822153E4;
	sub_8215F1B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-7872
	ctx.r4.s64 = ctx.r11.s64 + -7872;
	// bl 0x8215f338
	ctx.lr = 0x822153F0;
	sub_8215F338(ctx, base);
	// bl 0x8215fab8
	ctx.lr = 0x822153F4;
	sub_8215FAB8(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r31,6208(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221541C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82215434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221C1E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8221C1F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8221c22c
	if (!ctx.cr6.gt) goto loc_8221C22C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8221C20C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8221C220;
	sub_82120AC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// bne 0x8221c20c
	if (!ctx.cr0.eq) goto loc_8221C20C;
loc_8221C22C:
	// lbz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221c240
	if (ctx.cr0.eq) goto loc_8221C240;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8221C240;
	sub_8269D1B8(ctx, base);
loc_8221C240:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// stb r11,12(r29)
	REX_STORE_U8(r29.u32 + 12, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82221688) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13996
	ctx.r3.s64 = ctx.r11.s64 + -13996;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82221F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82221F50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x82221F70;
	sub_821B2D80(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 756);
	// lwz r10,760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 760);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82221fe0
	if (!ctx.cr6.lt) goto loc_82221FE0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82221F98;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x82221FA4;
	sub_8215F338(ctx, base);
	// lwz r4,760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 760);
	// bl 0x8215f1b0
	ctx.lr = 0x82221FAC;
	sub_8215F1B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-7872
	ctx.r4.s64 = ctx.r11.s64 + -7872;
	// bl 0x8215f338
	ctx.lr = 0x82221FB8;
	sub_8215F338(ctx, base);
	// bl 0x8215fab8
	ctx.lr = 0x82221FBC;
	sub_8215FAB8(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6208(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221FE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822279E0) {
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
	ctx.lr = 0x822279E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227A08;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82227A0C;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-17148
	ctx.r4.s64 = ctx.r11.s64 + -17148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227A20;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x82227A34;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82227b00
	if (!ctx.cr0.eq) goto loc_82227B00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r11,-17164
	r26.s64 = ctx.r11.s64 + -17164;
loc_82227A48:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82227a6c
	if (!ctx.cr6.eq) goto loc_82227A6C;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82227a70
	goto loc_82227A70;
loc_82227A6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227A70:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82227b00
	if (!ctx.cr6.lt) goto loc_82227B00;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82227A84;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227A8C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82227A90;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82227adc
	if (!ctx.cr0.eq) goto loc_82227ADC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82227AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227ae4
	if (ctx.cr0.eq) goto loc_82227AE4;
loc_82227ADC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82227a48
	goto loc_82227A48;
loc_82227AE4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120b20
	ctx.lr = 0x82227AF8;
	sub_82120B20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82227b04
	goto loc_82227B04;
loc_82227B00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82227B04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8222B780) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,-22844
	ctx.r4.s64 = ctx.r10.s64 + -22844;
	// addi r3,r9,1624
	ctx.r3.s64 = ctx.r9.s64 + 1624;
	// addi r31,r11,112
	r31.s64 = ctx.r11.s64 + 112;
	// bl 0x8215f670
	ctx.lr = 0x8222B7B4;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222b7c8
	if (ctx.cr6.lt) goto loc_8222B7C8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8222b7cc
	goto loc_8222B7CC;
loc_8222B7C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8222B7CC:
	// bl 0x8215fbf8
	ctx.lr = 0x8222B7D0;
	sub_8215FBF8(ctx, base);
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

DEFINE_REX_FUNC(sub_8222F8E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222f948
	if (ctx.cr0.eq) goto loc_8222F948;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
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
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r11,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8222f9c8
	ctx.lr = 0x8222F944;
	sub_8222F9C8(ctx, base);
	// b 0x8222f9b4
	goto loc_8222F9B4;
loc_8222F948:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222F95C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8222f95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222F95C;
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r4,r9,16592
	ctx.r4.s64 = ctx.r9.s64 + 16592;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r9,r10,176
	ctx.r9.s64 = ctx.r10.s64 + 176;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,6096(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 6096);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821380d0
	ctx.lr = 0x8222F9B4;
	sub_821380D0(ctx, base);
loc_8222F9B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236F10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13532
	ctx.r3.s64 = ctx.r11.s64 + -13532;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237388) {
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
	// addi r4,r3,376
	ctx.r4.s64 = ctx.r3.s64 + 376;
	// lwz r3,6304(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6304);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822373B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822373c8
	if (!ctx.cr0.eq) goto loc_822373C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822764c8
	ctx.lr = 0x822373C8;
	sub_822764C8(ctx, base);
loc_822373C8:
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

DEFINE_REX_FUNC(sub_82238868) {
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
	ctx.lr = 0x82238870;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,3880
	ctx.r3.s64 = ctx.r3.s64 + 3880;
	// bl 0x82120ac0
	ctx.lr = 0x8223888C;
	sub_82120AC0(ctx, base);
	// lwz r3,3852(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223889c
	if (ctx.cr6.eq) goto loc_8223889C;
	// bl 0x8269ce98
	ctx.lr = 0x8223889C;
	sub_8269CE98(ctx, base);
loc_8223889C:
	// li r29,0
	r29.s64 = 0;
	// stw r29,3852(r31)
	REX_STORE_U32(r31.u32 + 3852, r29.u32);
	// stw r29,3856(r31)
	REX_STORE_U32(r31.u32 + 3856, r29.u32);
	// stw r29,3860(r31)
	REX_STORE_U32(r31.u32 + 3860, r29.u32);
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822388bc
	if (ctx.cr6.eq) goto loc_822388BC;
	// bl 0x8269ce98
	ctx.lr = 0x822388BC;
	sub_8269CE98(ctx, base);
loc_822388BC:
	// stw r29,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, r29.u32);
	// addi r30,r31,3820
	r30.s64 = r31.s64 + 3820;
	// stw r29,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, r29.u32);
	// stw r29,3844(r31)
	REX_STORE_U32(r31.u32 + 3844, r29.u32);
	// lwz r28,3820(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82238904
	if (!ctx.cr6.gt) goto loc_82238904;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_822388DC:
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
	ctx.lr = 0x822388F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,320
	r27.s64 = r27.s64 + 320;
	// bne 0x822388dc
	if (!ctx.cr0.eq) goto loc_822388DC;
loc_82238904:
	// lbz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82238918
	if (ctx.cr0.eq) goto loc_82238918;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x82238918;
	sub_8269D1B8(ctx, base);
loc_82238918:
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
	// addi r3,r31,3788
	ctx.r3.s64 = r31.s64 + 3788;
	// bl 0x82120ac0
	ctx.lr = 0x8223893C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278050
	ctx.lr = 0x82238944;
	sub_82278050(ctx, base);
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82238954
	if (ctx.cr0.eq) goto loc_82238954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82238954;
	sub_8269CE98(ctx, base);
loc_82238954:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82241910) {
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
	// addi r3,r3,3788
	ctx.r3.s64 = ctx.r3.s64 + 3788;
	// bl 0x8226c9a8
	ctx.lr = 0x82241924;
	sub_8226C9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82243B80) {
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
	ctx.lr = 0x82243B88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stw r6,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// addi r29,r5,-4
	r29.s64 = ctx.r5.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r10,r4,r29
	ctx.r10.u64 = r29.u64 - ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ble cr6,0x82243c30
	if (!ctx.cr6.gt) goto loc_82243C30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r28,r4
	r27.u64 = r28.u64 + ctx.r4.u64;
	// add r5,r26,r4
	ctx.r5.u64 = r26.u64 + ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82244080
	ctx.lr = 0x82243BF4;
	sub_82244080(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r28,r31
	ctx.r5.u64 = r28.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r28,r31
	ctx.r3.u64 = r31.u64 - r28.u64;
	// bl 0x82244080
	ctx.lr = 0x82243C08;
	sub_82244080(ctx, base);
	// subf r28,r28,r29
	r28.u64 = r29.u64 - r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r3,r26,r29
	ctx.r3.u64 = r29.u64 - r26.u64;
	// bl 0x82244080
	ctx.lr = 0x82243C20;
	sub_82244080(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82243c34
	goto loc_82243C34;
loc_82243C30:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82243C34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82244080
	ctx.lr = 0x82243C3C;
	sub_82244080(ctx, base);
	// addi r26,r31,4
	r26.s64 = r31.s64 + 4;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bge cr6,0x82243c8c
	if (!ctx.cr6.lt) goto loc_82243C8C;
loc_82243C48:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,-4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82243368
	ctx.lr = 0x82243C60;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243c8c
	if (!ctx.cr0.eq) goto loc_82243C8C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82243368
	ctx.lr = 0x82243C78;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243c8c
	if (!ctx.cr0.eq) goto loc_82243C8C;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// blt cr6,0x82243c48
	if (ctx.cr6.lt) goto loc_82243C48;
loc_82243C8C:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// bge cr6,0x82243cd4
	if (!ctx.cr6.lt) goto loc_82243CD4;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82243C98:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82243368
	ctx.lr = 0x82243CA8;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243cd4
	if (!ctx.cr0.eq) goto loc_82243CD4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82243368
	ctx.lr = 0x82243CC0;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243cd4
	if (!ctx.cr0.eq) goto loc_82243CD4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// blt cr6,0x82243c98
	if (ctx.cr6.lt) goto loc_82243C98;
loc_82243CD4:
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x82243d2c
	goto loc_82243D2C;
loc_82243CE0:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82243368
	ctx.lr = 0x82243CF4;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243d28
	if (!ctx.cr0.eq) goto loc_82243D28;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82243368
	ctx.lr = 0x82243D0C;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243d34
	if (!ctx.cr0.eq) goto loc_82243D34;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82243D24:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_82243D28:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82243D2C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// blt cr6,0x82243ce0
	if (ctx.cr6.lt) goto loc_82243CE0;
loc_82243D34:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// ble cr6,0x82243d94
	if (!ctx.cr6.gt) goto loc_82243D94;
loc_82243D3C:
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,-4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + -4);
	// addi r30,r27,-4
	r30.s64 = r27.s64 + -4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82243368
	ctx.lr = 0x82243D54;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243d84
	if (!ctx.cr0.eq) goto loc_82243D84;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82243368
	ctx.lr = 0x82243D6C;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243d90
	if (!ctx.cr0.eq) goto loc_82243D90;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzu r11,-4(r31)
	ea = -4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82243D84:
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// blt cr6,0x82243d3c
	if (ctx.cr6.lt) goto loc_82243D3C;
loc_82243D90:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
loc_82243D94:
	// bne cr6,0x82243dd8
	if (!ctx.cr6.eq) goto loc_82243DD8;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// beq cr6,0x82243e2c
	if (ctx.cr6.eq) goto loc_82243E2C;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// beq cr6,0x82243db8
	if (ctx.cr6.eq) goto loc_82243DB8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82243DB8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// b 0x82243d24
	goto loc_82243D24;
loc_82243DD8:
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// bne cr6,0x82243e18
	if (!ctx.cr6.eq) goto loc_82243E18;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82243e04
	if (ctx.cr6.eq) goto loc_82243E04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82243E04:
	// lwzu r11,-4(r26)
	ea = -4 + r26.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82243d2c
	goto loc_82243D2C;
loc_82243E18:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82243d28
	goto loc_82243D28;
loc_82243E2C:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r26,4(r23)
	REX_STORE_U32(r23.u32 + 4, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82256330) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82256338;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// addi r30,r11,30316
	r30.s64 = ctx.r11.s64 + 30316;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x82256358;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82256400
	if (ctx.cr0.eq) goto loc_82256400;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82125d00
	ctx.lr = 0x82256370;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82256400
	if (ctx.cr0.eq) goto loc_82256400;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6192(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256400
	if (ctx.cr0.eq) goto loc_82256400;
	// lwz r3,6192(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822563AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r29,-1
	r29.s64 = -1;
	// addi r6,r11,-10708
	ctx.r6.s64 = ctx.r11.s64 + -10708;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r10,-26720
	ctx.r5.s64 = ctx.r10.s64 + -26720;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82288100
	ctx.lr = 0x822563D4;
	sub_82288100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x822563E0;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256010
	ctx.lr = 0x822563F0;
	sub_82256010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82256400;
	sub_82120AC0(ctx, base);
loc_82256400:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8225D2B0) {
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
	ctx.lr = 0x8225D2B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D2D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d394
	if (ctx.cr0.eq) goto loc_8225D394;
	// lwz r11,272(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 272);
	// li r26,1
	r26.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225d37c
	if (!ctx.cr6.gt) goto loc_8225D37C;
	// addi r27,r28,192
	r27.s64 = r28.s64 + 192;
loc_8225D2F8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225D304;
	sub_8228C340(ctx, base);
	// lbz r11,98(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 98);
	// lwz r30,128(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225d36c
	if (ctx.cr0.eq) goto loc_8225D36C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D32C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d35c
	if (ctx.cr0.eq) goto loc_8225D35C;
	// lbz r11,101(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 101);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225d35c
	if (!ctx.cr0.eq) goto loc_8225D35C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,101(r31)
	REX_STORE_U8(r31.u32 + 101, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227d560
	ctx.lr = 0x8225D35C;
	sub_8227D560(ctx, base);
loc_8225D35C:
	// lbz r11,101(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 101);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r26
	r26.u64 = ctx.r11.u64 & r26.u64;
loc_8225D36C:
	// lwz r11,272(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 272);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225d2f8
	if (ctx.cr6.lt) goto loc_8225D2F8;
loc_8225D37C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d394
	if (ctx.cr0.eq) goto loc_8225D394;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225D394;
	sub_8225B1C8(ctx, base);
loc_8225D394:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82264638) {
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
	ctx.lr = 0x82264640;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822646ac
	if (!ctx.cr6.gt) goto loc_822646AC;
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
	// bgt cr6,0x82264678
	if (ctx.cr6.gt) goto loc_82264678;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82264678:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822646ac
	if (!ctx.cr6.gt) goto loc_822646AC;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8226468C;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8226469C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x822646A4;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_822646AC:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822646BC;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82268670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82268678;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x822686b4
	goto loc_822686B4;
loc_82268690:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8226869C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822686ac
	if (!ctx.cr0.lt) goto loc_822686AC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x822686b4
	goto loc_822686B4;
loc_822686AC:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822686B4:
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82268690
	if (ctx.cr0.eq) goto loc_82268690;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822686e4
	if (ctx.cr6.eq) goto loc_822686E4;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x822686DC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822687bc
	if (!ctx.cr0.lt) goto loc_822687BC;
loc_822686E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8213c418
	ctx.lr = 0x822686EC;
	sub_8213C418(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120d70
	ctx.lr = 0x822686FC;
	sub_82120D70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82268898
	ctx.lr = 0x82268708;
	sub_82268898(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x82268710;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822687c8
	if (ctx.cr0.eq) goto loc_822687C8;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r28.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,56(r31)
	REX_STORE_U8(r31.u32 + 56, ctx.r11.u8);
	// stb r11,57(r31)
	REX_STORE_U8(r31.u32 + 57, ctx.r11.u8);
	// beq 0x8226875c
	if (ctx.cr0.eq) goto loc_8226875C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x82268750;
	sub_82120D70(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x82268898
	ctx.lr = 0x8226875C;
	sub_82268898(ctx, base);
loc_8226875C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822689c8
	ctx.lr = 0x82268770;
	sub_822689C8(ctx, base);
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8213cc48
	ctx.lr = 0x82268788;
	sub_8213CC48(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8269ce98
	ctx.lr = 0x82268790;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822687A0;
	sub_82120AC0(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8213cc48
	ctx.lr = 0x822687B4;
	sub_8213CC48(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8269ce98
	ctx.lr = 0x822687BC;
	sub_8269CE98(ctx, base);
loc_822687BC:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
loc_822687C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x822687E4;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82271E38) {
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
	ctx.lr = 0x82271E40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,6276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271f00
	if (ctx.cr6.eq) goto loc_82271F00;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// addi r31,r3,648
	r31.s64 = ctx.r3.s64 + 648;
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// li r25,0
	r25.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82271f00
	if (!ctx.cr0.gt) goto loc_82271F00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-17296
	r27.s64 = ctx.r11.s64 + -17296;
	// addi r26,r10,-17164
	r26.s64 = ctx.r10.s64 + -17164;
loc_82271E88:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r24,r11,r28
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82273438
	ctx.lr = 0x82271E9C;
	sub_82273438(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x82271EA8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82271EAC;
	sub_8215FA30(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82271EBC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82271EC0;
	sub_8215FA30(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82271ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82271f0c
	if (!ctx.cr0.eq) goto loc_82271F0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82271e88
	if (ctx.cr6.lt) goto loc_82271E88;
loc_82271F00:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82271F04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82271F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82271f04
	goto loc_82271F04;
}

DEFINE_REX_FUNC(sub_82277BB8) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,365(r3)
	REX_STORE_U8(ctx.r3.u32 + 365, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82278B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82278B90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	ctx.lr = 0x82278BAC;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82278BB8;
	sub_82120600(ctx, base);
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120780
	ctx.lr = 0x82278BC4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82278c90
	if (!ctx.cr0.eq) goto loc_82278C90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82278BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,228(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82278BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// lwz r29,244(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82278c20
	if (ctx.cr6.eq) goto loc_82278C20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82208770
	ctx.lr = 0x82278C18;
	sub_82208770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82278C20;
	sub_8269CE98(ctx, base);
loc_82278C20:
	// lwz r3,248(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 248);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82278c34
	if (ctx.cr6.eq) goto loc_82278C34;
	// bl 0x8221a260
	ctx.lr = 0x82278C34;
	sub_8221A260(ctx, base);
loc_82278C34:
	// lwz r29,252(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 252);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82278c54
	if (ctx.cr6.eq) goto loc_82278C54;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82208770
	ctx.lr = 0x82278C4C;
	sub_82208770(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82278C54;
	sub_8269CE98(ctx, base);
loc_82278C54:
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82278C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82278C90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82278C90:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82278CA0;
	sub_82120AC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82280D70) {
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
	ctx.lr = 0x82280D78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r28,468(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f13,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82280e4c
	if (!ctx.cr6.gt) goto loc_82280E4C;
	// lfs f12,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82280e4c
	if (!ctx.cr6.lt) goto loc_82280E4C;
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 0);
	// lfs f12,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// addi r7,r10,320
	ctx.r7.s64 = ctx.r10.s64 + 320;
	// lfs f10,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// ld r7,320(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 320);
	// ld r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 328);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f12,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f9.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f12,f10,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
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
	// lfsx f11,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f0,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
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
	// fsel f0,f13,f10,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
loc_82280E4C:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 436);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lfs f13,576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,584(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 584);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f10,580(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r9.u64);
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r10,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// bl 0x821e5d30
	ctx.lr = 0x82280EF4;
	sub_821E5D30(ctx, base);
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280f0c
	if (ctx.cr6.eq) goto loc_82280F0C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821e6230
	ctx.lr = 0x82280F0C;
	sub_821E6230(ctx, base);
loc_82280F0C:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82294E48) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82294E50;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c70
	ctx.lr = 0x82294E58;
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r23,0
	r23.s64 = 0;
	// addi r8,r8,14568
	ctx.r8.s64 = ctx.r8.s64 + 14568;
	// lfs f31,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// stfs f30,416(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f30,420(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stfs f30,424(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stfs f31,432(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stw r23,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, r23.u32);
	// stfs f31,448(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stw r8,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r8.u32);
	// stw r7,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bge cr6,0x8229505c
	if (!ctx.cr6.lt) goto loc_8229505C;
	// lhz r10,1408(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 1408);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f29,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	f29.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,5224
	ctx.r10.s64 = ctx.r9.s64 + 5224;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r8,6904
	ctx.r9.s64 = ctx.r8.s64 + 6904;
	// stfs f31,984(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 984, temp.u32);
	// stw r10,800(r1)
	REX_STORE_U32(ctx.r1.u32 + 800, ctx.r10.u32);
	// addi r8,r1,1056
	ctx.r8.s64 = ctx.r1.s64 + 1056;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// stfs f29,1376(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 1376, temp.u32);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f0,976(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r23,980(r1)
	REX_STORE_U32(ctx.r1.u32 + 980, r23.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,1408(r1)
	REX_STORE_U16(ctx.r1.u32 + 1408, ctx.r11.u16);
	// addi r8,r1,800
	ctx.r8.s64 = ctx.r1.s64 + 800;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aeb88
	ctx.lr = 0x82294F38;
	sub_822AEB88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229579c
	if (ctx.cr0.eq) goto loc_8229579C;
	// lfs f0,952(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,948(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,944(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 944);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, f29.f64);
	// ble cr6,0x8229579c
	if (!ctx.cr6.gt) goto loc_8229579C;
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,976(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 976);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8229579c
	if (!ctx.cr6.lt) goto loc_8229579C;
	// lfs f11,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f10,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f7,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f6,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// lfs f5,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,944
	ctx.r9.s64 = ctx.r1.s64 + 944;
	// lfs f4,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r27,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, r27.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stw r23,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, r23.u32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// li r5,1
	ctx.r5.s64 = 1;
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f0.f64)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f13,f12,f6,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f11.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f12,f5,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f10.f64)));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f4,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f12,948(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 948);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,952(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 952);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,976(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 976);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,944(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 944, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,948(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 948, temp.u32);
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,952(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 952, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f9,496(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// bctrl 
	ctx.lr = 0x82295058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229579c
	goto loc_8229579C;
loc_8229505C:
	// ble cr6,0x8229506c
	if (!ctx.cr6.gt) goto loc_8229506C;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82295070
	if (ctx.cr6.lt) goto loc_82295070;
loc_8229506C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82295070:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822954c0
	if (ctx.cr0.eq) goto loc_822954C0;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x82295278
	if (!ctx.cr6.eq) goto loc_82295278;
	// bl 0x822940c8
	ctx.lr = 0x8229508C;
	sub_822940C8(ctx, base);
	// lfs f2,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f3,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f29,f2,f13
	f29.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f28,f3,f12
	f28.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// lfs f10,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f8,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lfs f6,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lfs f7,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// lfs f4,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// lfs f5,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// fmadds f1,f2,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f2,f2,f8,f28
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, f28.f64)));
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r6,r6,5236
	ctx.r6.s64 = ctx.r6.s64 + 5236;
	// lis r25,-32241
	r25.s64 = -2112946176;
	// addi r17,r1,512
	r17.s64 = ctx.r1.s64 + 512;
	// lfs f30,52(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 52);
	f30.f64 = double(temp.f32);
	// ld r24,0(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fmuls f24,f30,f11
	f24.f64 = double(float(f30.f64 * ctx.f11.f64));
	// lfs f27,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	f27.f64 = double(temp.f32);
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(f30.f64 * ctx.f12.f64));
	// lfs f25,48(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 48);
	f25.f64 = double(temp.f32);
	// fmuls f26,f30,f0
	f26.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f23,56(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 56);
	f23.f64 = double(temp.f32);
	// fmadds f30,f9,f27,f29
	f30.f64 = double(float(std::fma(ctx.f9.f64, f27.f64, f29.f64)));
	// lfs f0,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// ld r30,8(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 8);
	// ld r26,16(r31)
	r26.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r23,24(r31)
	r23.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r22,32(r31)
	r22.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r21,40(r31)
	r21.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r20,48(r31)
	r20.u64 = REX_LOAD_U64(r31.u32 + 48);
	// fmadds f13,f25,f13,f24
	ctx.f13.f64 = double(float(std::fma(f25.f64, ctx.f13.f64, f24.f64)));
	// ld r31,56(r31)
	r31.u64 = REX_LOAD_U64(r31.u32 + 56);
	// fmadds f12,f25,f8,f12
	ctx.f12.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, ctx.f12.f64)));
	// lwz r16,48(r28)
	r16.u64 = REX_LOAD_U32(r28.u32 + 48);
	// fmadds f8,f27,f7,f1
	ctx.f8.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f11,f3,f11,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, f30.f64)));
	// fmadds f3,f27,f6,f2
	ctx.f3.f64 = double(float(std::fma(f27.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f10,f25,f10,f26
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, f26.f64)));
	// fmadds f13,f9,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f23.f64, ctx.f13.f64)));
	// fmadds f12,f23,f6,f12
	ctx.f12.f64 = double(float(std::fma(f23.f64, ctx.f6.f64, ctx.f12.f64)));
	// fadds f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f10,f23,f7,f10
	ctx.f10.f64 = double(float(std::fma(f23.f64, ctx.f7.f64, ctx.f10.f64)));
	// ld r19,0(r9)
	r19.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r19,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r19.u64);
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f11,f10,f5
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,16(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 16);
	// ld r18,0(r8)
	r18.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// addi r25,r25,5748
	r25.s64 = r25.s64 + 5748;
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// std r18,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r18.u64);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r6,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r6.u32);
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r19,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, r19.u32);
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r29,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, r29.u32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r27,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, r27.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r28,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, r28.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// std r20,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r20.u64);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r16,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, r16.u32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// std r31,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r31.u64);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r3,64(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r26,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r26.u64);
	// std r23,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, r23.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r22,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r22.u64);
	// std r21,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r21.u64);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// std r24,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r24.u64);
	// std r30,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r30.u64);
	// stfs f0,564(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stw r25,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r25.u32);
	// stw r17,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, r17.u32);
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82295270
	if (ctx.cr0.eq) goto loc_82295270;
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x822a0888
	ctx.lr = 0x8229526C;
	sub_822A0888(ctx, base);
	// b 0x8229579c
	goto loc_8229579C;
loc_82295270:
	// bl 0x822a0430
	ctx.lr = 0x82295274;
	sub_822A0430(ctx, base);
	// b 0x8229579c
	goto loc_8229579C;
loc_82295278:
	// bl 0x822940c8
	ctx.lr = 0x8229527C;
	sub_822940C8(ctx, base);
	// lfs f4,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f1,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f26,f1,f13
	f26.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f2,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lfs f10,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lfs f7,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lfs f8,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// lfs f5,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// fmadds f3,f2,f9,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f3.f64)));
	// lfs f6,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// fmadds f29,f2,f11,f29
	f29.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f2,f2,f10,f26
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, f26.f64)));
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r7,r7,5236
	ctx.r7.s64 = ctx.r7.s64 + 5236;
	// addi r15,r1,176
	r15.s64 = ctx.r1.s64 + 176;
	// lfs f30,56(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 56);
	f30.f64 = double(temp.f32);
	// ld r24,0(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fmuls f27,f30,f0
	f27.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f28,48(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 48);
	f28.f64 = double(temp.f32);
	// fmuls f24,f30,f13
	f24.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f25,52(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 52);
	f25.f64 = double(temp.f32);
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 * ctx.f12.f64));
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// ld r30,8(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 8);
	// ld r26,16(r31)
	r26.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ld r23,24(r31)
	r23.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r22,32(r31)
	r22.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r21,40(r31)
	r21.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r20,48(r31)
	r20.u64 = REX_LOAD_U64(r31.u32 + 48);
	// ld r31,56(r31)
	r31.u64 = REX_LOAD_U64(r31.u32 + 56);
	// fmadds f11,f25,f11,f27
	ctx.f11.f64 = double(float(std::fma(f25.f64, ctx.f11.f64, f27.f64)));
	// lwz r19,16(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 16);
	// fmadds f10,f25,f10,f24
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, f24.f64)));
	// fmadds f12,f25,f9,f12
	ctx.f12.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f9,f1,f7,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, ctx.f3.f64)));
	// fmadds f3,f4,f8,f29
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, f29.f64)));
	// fmadds f11,f28,f8,f11
	ctx.f11.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f8,f4,f0,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f2.f64)));
	// fmadds f10,f28,f0,f10
	ctx.f10.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f10.f64)));
	// fadds f0,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f7,f30,f7,f12
	ctx.f7.f64 = double(float(std::fma(f30.f64, ctx.f7.f64, ctx.f12.f64)));
	// fadds f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f10,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r16,0(r25)
	r16.u64 = REX_LOAD_U64(r25.u32 + 0);
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f7,f5
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r17,0(r8)
	r17.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r25,8(r25)
	r25.u64 = REX_LOAD_U64(r25.u32 + 8);
	// ld r18,8(r9)
	r18.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// std r18,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r18.u64);
	// std r17,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r17.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stw r7,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r7.u32);
	// stw r19,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, r19.u32);
	// stw r29,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, r29.u32);
	// stw r27,724(r1)
	REX_STORE_U32(ctx.r1.u32 + 724, r27.u32);
	// stw r28,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, r28.u32);
	// std r24,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r24.u64);
	// std r30,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r30.u64);
	// std r26,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r26.u64);
	// std r23,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, r23.u64);
	// std r22,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r22.u64);
	// std r21,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r21.u64);
	// std r20,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r20.u64);
	// std r31,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r31.u64);
	// stfs f10,708(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// std r16,0(r15)
	REX_STORE_U64(r15.u32 + 0, r16.u64);
	// std r25,8(r15)
	REX_STORE_U64(r15.u32 + 8, r25.u64);
	// bge cr6,0x82295418
	if (!ctx.cr6.lt) goto loc_82295418;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_82295418:
	// lfs f10,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x82295428
	if (!ctx.cr6.lt) goto loc_82295428;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
loc_82295428:
	// lfs f10,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82295438
	if (!ctx.cr6.lt) goto loc_82295438;
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
loc_82295438:
	// lfs f10,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// ble cr6,0x82295448
	if (!ctx.cr6.gt) goto loc_82295448;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
loc_82295448:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bge cr6,0x8229546c
	if (!ctx.cr6.lt) goto loc_8229546C;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
loc_8229546C:
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229547c
	if (!ctx.cr6.lt) goto loc_8229547C;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
loc_8229547C:
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8229548c
	if (!ctx.cr6.lt) goto loc_8229548C;
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
loc_8229548C:
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8229549c
	if (!ctx.cr6.lt) goto loc_8229549C;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_8229549C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822954BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8229579c
	goto loc_8229579C;
loc_822954C0:
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x8229579c
	if (!ctx.cr6.eq) goto loc_8229579C;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r25,r23
	r25.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229579c
	if (!ctx.cr6.gt) goto loc_8229579C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stfs f31,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,5200
	ctx.r11.s64 = ctx.r11.s64 + 5200;
	// addi r10,r10,5248
	ctx.r10.s64 = ctx.r10.s64 + 5248;
	// mr r24,r23
	r24.u64 = r23.u64;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
loc_822954F8:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f4,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// lfs f30,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f30.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f3,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f1,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f27,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f27.f64 = double(temp.f32);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lfs f26,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f26.f64 = double(temp.f32);
	// ld r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// lfs f29,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f29.f64 = double(temp.f32);
	// ld r22,32(r11)
	r22.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lfs f28,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f28.f64 = double(temp.f32);
	// ld r19,56(r11)
	r19.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfs f25,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	f25.f64 = double(temp.f32);
	// ld r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f24,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f24.f64 = double(temp.f32);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// lfs f23,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f23.f64 = double(temp.f32);
	// std r3,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r22,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r22.u64);
	// std r19,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, r19.u64);
	// ld r21,40(r11)
	r21.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// ld r20,48(r11)
	r20.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// std r4,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// std r21,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r21.u64);
	// std r20,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r20.u64);
	// lfs f7,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f5,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f19,f0,f4
	f19.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f20,f0,f30
	f20.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f12,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f18,f0,f3
	f18.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f10,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f22,f11,f1
	f22.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f17,f13,f1
	f17.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f16,f12,f1
	f16.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f15,f13,f2
	f15.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f14,f12,f2
	f14.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmadds f20,f10,f26,f20
	f20.f64 = double(float(std::fma(ctx.f10.f64, f26.f64, f20.f64)));
	// fmadds f19,f10,f27,f19
	f19.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, f19.f64)));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f10,f10,f28,f18
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, f18.f64)));
	// fmuls f21,f11,f2
	f21.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmadds f18,f0,f3,f17
	f18.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, f17.f64)));
	// fmadds f22,f8,f3,f22
	f22.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, f22.f64)));
	// fmadds f3,f9,f3,f16
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, f16.f64)));
	// fmadds f17,f0,f4,f15
	f17.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, f15.f64)));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmadds f16,f9,f4,f14
	f16.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, f14.f64)));
	// fmadds f13,f0,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f9,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f12.f64)));
	// fmadds f9,f7,f2,f19
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, f19.f64)));
	// fmadds f10,f7,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f10.f64)));
	// fmadds f29,f7,f29,f20
	f29.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, f20.f64)));
	// fmadds f4,f8,f4,f21
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, f21.f64)));
	// fmadds f7,f6,f28,f18
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, f18.f64)));
	// fmadds f3,f5,f28,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, f28.f64, ctx.f3.f64)));
	// fmadds f2,f0,f28,f22
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, f22.f64)));
	// fmadds f1,f6,f27,f17
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, f27.f64, f17.f64)));
	// fmadds f11,f8,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, f30.f64, ctx.f11.f64)));
	// fmadds f8,f5,f27,f16
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f27.f64, f16.f64)));
	// stfs f8,340(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmadds f13,f6,f26,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, f26.f64, ctx.f13.f64)));
	// stfs f13,328(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fmadds f8,f0,f27,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, ctx.f4.f64)));
	// stfs f8,336(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fmadds f13,f5,f26,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, f26.f64, ctx.f12.f64)));
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmadds f0,f0,f26,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, ctx.f11.f64)));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f1,344(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fadds f0,f10,f23
	ctx.f0.f64 = double(float(ctx.f10.f64 + f23.f64));
	// stfs f2,352(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stfs f3,356(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stfs f7,360(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// lwz r17,204(r27)
	r17.u64 = REX_LOAD_U32(r27.u32 + 204);
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stw r6,204(r27)
	REX_STORE_U32(r27.u32 + 204, ctx.r6.u32);
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fadds f13,f29,f25
	ctx.f13.f64 = double(float(f29.f64 + f25.f64));
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f9,f24
	ctx.f12.f64 = double(float(ctx.f9.f64 + f24.f64));
	// stfs f13,368(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// addi r22,r1,368
	r22.s64 = ctx.r1.s64 + 368;
	// stfs f12,372(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// addi r20,r1,992
	r20.s64 = ctx.r1.s64 + 992;
	// addi r19,r1,1008
	r19.s64 = ctx.r1.s64 + 1008;
	// lwz r21,240(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r16,r1,1040
	r16.s64 = ctx.r1.s64 + 1040;
	// stw r23,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, r23.u32);
	// addi r18,r1,1024
	r18.s64 = ctx.r1.s64 + 1024;
	// stw r25,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, r25.u32);
	// li r15,-1
	r15.s64 = -1;
	// stw r29,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, r29.u32);
	// li r14,1
	r14.s64 = 1;
	// li r23,0
	r23.s64 = 0;
	// stw r21,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r21.u32);
	// sth r14,300(r1)
	REX_STORE_U16(ctx.r1.u32 + 300, r14.u16);
	// sth r15,302(r1)
	REX_STORE_U16(ctx.r1.u32 + 302, r15.u16);
	// stw r23,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, r23.u32);
	// ld r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r7,392(r1)
	REX_STORE_U64(ctx.r1.u32 + 392, ctx.r7.u64);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// ld r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r4,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r8,0(r22)
	ctx.r8.u64 = REX_LOAD_U64(r22.u32 + 0);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// std r8,384(r1)
	REX_STORE_U64(ctx.r1.u32 + 384, ctx.r8.u64);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// std r11,0(r20)
	REX_STORE_U64(r20.u32 + 0, ctx.r11.u64);
	// ld r11,392(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 392);
	// ld r22,8(r22)
	r22.u64 = REX_LOAD_U64(r22.u32 + 8);
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r10,0(r18)
	REX_STORE_U64(r18.u32 + 0, ctx.r10.u64);
	// std r11,8(r20)
	REX_STORE_U64(r20.u32 + 8, ctx.r11.u64);
	// ld r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// std r22,8(r16)
	REX_STORE_U64(r16.u32 + 8, r22.u64);
	// ld r22,384(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + 384);
	// std r11,0(r19)
	REX_STORE_U64(r19.u32 + 0, ctx.r11.u64);
	// ld r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// std r22,0(r16)
	REX_STORE_U64(r16.u32 + 0, r22.u64);
	// std r11,8(r19)
	REX_STORE_U64(r19.u32 + 8, ctx.r11.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,8(r18)
	REX_STORE_U64(r18.u32 + 8, ctx.r11.u64);
	// bl 0x82294e48
	ctx.lr = 0x82295778;
	sub_82294E48(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stw r17,204(r27)
	REX_STORE_U32(r27.u32 + 204, r17.u32);
	// addi r24,r24,80
	r24.s64 = r24.s64 + 80;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// blt cr6,0x822954f8
	if (ctx.cr6.lt) goto loc_822954F8;
loc_8229579C:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cbc
	ctx.lr = 0x822957A8;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822E7300) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E7348) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x822E7364;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r11,r11,13696
	ctx.r11.s64 = ctx.r11.s64 + 13696;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822E7378;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e7390
	if (ctx.cr0.eq) goto loc_822E7390;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822e7998
	ctx.lr = 0x822E7388;
	sub_822E7998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822e7394
	goto loc_822E7394;
loc_822E7390:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E7394:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822E739C;
	sub_821D3988(ctx, base);
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

DEFINE_REX_FUNC(sub_822E9968) {
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
	// bl 0x82208568
	ctx.lr = 0x822E9994;
	sub_82208568(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213bce8
	ctx.lr = 0x822E99A0;
	sub_8213BCE8(ctx, base);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,281(r31)
	REX_STORE_U8(r31.u32 + 281, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822EC5F0) {
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
	ctx.lr = 0x822EC604;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec614
	if (ctx.cr0.eq) goto loc_822EC614;
	// bl 0x822ec628
	ctx.lr = 0x822EC610;
	sub_822EC628(ctx, base);
	// b 0x822ec618
	goto loc_822EC618;
loc_822EC614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EC618:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED5E8) {
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
	ctx.lr = 0x822ED5FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed60c
	if (ctx.cr0.eq) goto loc_822ED60C;
	// bl 0x822ed620
	ctx.lr = 0x822ED608;
	sub_822ED620(ctx, base);
	// b 0x822ed610
	goto loc_822ED610;
loc_822ED60C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822ED610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EEB50) {
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
	ctx.lr = 0x822EEB58;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EEB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// li r26,0
	r26.s64 = 0;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822eedd4
	if (!ctx.cr6.gt) goto loc_822EEDD4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
loc_822EEBA8:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r31,r28,r11
	r31.u64 = r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x823fbf60
	ctx.lr = 0x822EEBC4;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822EEBD4:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822eebd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EEBD4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823fbd18
	ctx.lr = 0x822EEBF0;
	sub_823FBD18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// bl 0x821264e8
	ctx.lr = 0x822EEC14;
	sub_821264E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r31,112
	r27.s64 = r31.s64 + 112;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
	// bl 0x821a33a0
	ctx.lr = 0x822EEC34;
	sub_821A33A0(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822EEC58;
	sub_821A33A0(ctx, base);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822EEC78;
	sub_821A33A0(ctx, base);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822EEC98;
	sub_821A33A0(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822EECB8;
	sub_821A33A0(ctx, base);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822EECD8;
	sub_821A33A0(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x822EECF8;
	sub_821A33A0(ctx, base);
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,96(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f12,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// bl 0x82126320
	ctx.lr = 0x822EED4C;
	sub_82126320(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821262a8
	ctx.lr = 0x822EED58;
	sub_821262A8(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8216d040
	ctx.lr = 0x822EEDA0;
	sub_8216D040(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbf60
	ctx.lr = 0x822EEDB0;
	sub_823FBF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822EEDC0;
	sub_826A1E70(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,240
	r28.s64 = r28.s64 + 240;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eeba8
	if (ctx.cr6.lt) goto loc_822EEBA8;
loc_822EEDD4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822FFDD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FFDD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ffeac
	if (ctx.cr6.eq) goto loc_822FFEAC;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ffe18
	if (ctx.cr6.eq) goto loc_822FFE18;
	// bl 0x823317f0
	ctx.lr = 0x822FFE04;
	sub_823317F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ffe1c
	if (!ctx.cr0.eq) goto loc_822FFE1C;
loc_822FFE10:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x822ffedc
	goto loc_822FFEDC;
loc_822FFE18:
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_822FFE1C:
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x822ffed4
	if (ctx.cr6.eq) goto loc_822FFED4;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,4008
	ctx.r5.s64 = ctx.r9.s64 + 4008;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// li r6,1434
	ctx.r6.s64 = 1434;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x822FFE8C;
	sub_82330A38(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ffe10
	if (ctx.cr0.eq) goto loc_822FFE10;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x822FFEA8;
	sub_823EF2F8(ctx, base);
	// b 0x822ffed8
	goto loc_822FFED8;
loc_822FFEAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_822FFED4:
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_822FFED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FFEDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8230A0E0) {
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
	ctx.lr = 0x8230A0E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82309ee8
	ctx.lr = 0x8230A104;
	sub_82309EE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a3c8
	if (!ctx.cr0.eq) goto loc_8230A3C8;
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// addi r26,r27,52
	r26.s64 = r27.s64 + 52;
	// li r25,0
	r25.s64 = 0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8230a1cc
	if (ctx.cr6.eq) goto loc_8230A1CC;
loc_8230A120:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-8
	r30.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8230a130
	if (!ctx.cr6.eq) goto loc_8230A130;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8230A130:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822f7a88
	ctx.lr = 0x8230A13C;
	sub_822F7A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230a1a8
	if (!ctx.cr0.eq) goto loc_8230A1A8;
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230a1a8
	if (!ctx.cr6.gt) goto loc_8230A1A8;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8230A15C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230a190
	if (ctx.cr6.eq) goto loc_8230A190;
	// li r5,1
	ctx.r5.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fdeb8
	ctx.lr = 0x8230A17C;
	sub_822FDEB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a3c8
	if (!ctx.cr0.eq) goto loc_8230A3C8;
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r25,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r25.u32);
loc_8230A190:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230a15c
	if (ctx.cr6.lt) goto loc_8230A15C;
loc_8230A1A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822fdeb8
	ctx.lr = 0x8230A1B8;
	sub_822FDEB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a3c8
	if (!ctx.cr0.eq) goto loc_8230A3C8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// bne cr6,0x8230a120
	if (!ctx.cr6.eq) goto loc_8230A120;
loc_8230A1CC:
	// lwz r3,40(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a234
	if (ctx.cr6.eq) goto loc_8230A234;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8230A1DC:
	// lwz r3,40(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8230a1f0
	if (!ctx.cr6.eq) goto loc_8230A1F0;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8230A1F0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230a220
	if (ctx.cr6.eq) goto loc_8230A220;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8230a208
	if (!ctx.cr6.eq) goto loc_8230A208;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8230A208:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8230a0e0
	ctx.lr = 0x8230A214;
	sub_8230A0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230a1dc
	if (ctx.cr0.eq) goto loc_8230A1DC;
	// b 0x8230a3c8
	goto loc_8230A3C8;
loc_8230A220:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230a234
	if (ctx.cr6.eq) goto loc_8230A234;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8230a0e0
	ctx.lr = 0x8230A230;
	sub_8230A0E0(ctx, base);
	// stw r25,40(r27)
	REX_STORE_U32(r27.u32 + 40, r25.u32);
loc_8230A234:
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// addi r30,r27,64
	r30.s64 = r27.s64 + 64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8230a284
	if (ctx.cr6.eq) goto loc_8230A284;
loc_8230A244:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
	// bl 0x823288f0
	ctx.lr = 0x8230A278;
	sub_823288F0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8230a244
	if (!ctx.cr6.eq) goto loc_8230A244;
loc_8230A284:
	// lwz r4,20(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,4900
	r30.s64 = ctx.r11.s64 + 4900;
	// beq cr6,0x8230a2b4
	if (ctx.cr6.eq) goto loc_8230A2B4;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,860
	ctx.r6.s64 = 860;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230A2B4;
	sub_82330D00(ctx, base);
loc_8230A2B4:
	// lwz r4,92(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230a2d8
	if (ctx.cr6.eq) goto loc_8230A2D8;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,865
	ctx.r6.s64 = 865;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230A2D8;
	sub_82330D00(ctx, base);
loc_8230A2D8:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a354
	if (ctx.cr6.eq) goto loc_8230A354;
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a338
	if (!ctx.cr6.gt) goto loc_8230A338;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8230A2F8:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230a324
	if (ctx.cr6.eq) goto loc_8230A324;
	// lwz r10,1012(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// li r6,874
	ctx.r6.s64 = 874;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230A324;
	sub_82330D00(ctx, base);
loc_8230A324:
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230a2f8
	if (ctx.cr6.lt) goto loc_8230A2F8;
loc_8230A338:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,96(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 96);
	// li r6,878
	ctx.r6.s64 = 878;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230A354;
	sub_82330D00(ctx, base);
loc_8230A354:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// stw r25,12(r27)
	REX_STORE_U32(r27.u32 + 12, r25.u32);
	// lwz r4,76(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230a3a0
	if (ctx.cr6.eq) goto loc_8230A3A0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,885
	ctx.r6.s64 = 885;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230A3A0;
	sub_82330D00(ctx, base);
loc_8230A3A0:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230a3c4
	if (ctx.cr0.eq) goto loc_8230A3C4;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,890
	ctx.r6.s64 = 890;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230A3C4;
	sub_82330D00(ctx, base);
loc_8230A3C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230A3C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8231D378) {
	REX_FUNC_PROLOGUE();
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d388
	if (ctx.cr6.eq) goto loc_8231D388;
	// b 0x82350fd0
	sub_82350FD0(ctx, base);
	return;
loc_8231D388:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231E110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8231E118;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8231e1b4
	if (!ctx.cr6.eq) goto loc_8231E1B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,6908
	ctx.r5.s64 = ctx.r11.s64 + 6908;
	// li r6,519
	ctx.r6.s64 = 519;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231E158;
	sub_82330E40(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8231e16c
	if (!ctx.cr0.eq) goto loc_8231E16C;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231e1ac
	goto loc_8231E1AC;
loc_8231E16C:
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// b 0x8231e1a0
	goto loc_8231E1A0;
loc_8231E178:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// bne cr6,0x8231e188
	if (!ctx.cr6.eq) goto loc_8231E188;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8231E188:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231e110
	ctx.lr = 0x8231E194;
	sub_8231E110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e1ac
	if (!ctx.cr0.eq) goto loc_8231E1AC;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8231E1A0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8231e178
	if (!ctx.cr6.eq) goto loc_8231E178;
loc_8231E1A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231E1AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8231E1B4:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r10,r29,52
	ctx.r10.s64 = r29.s64 + 52;
	// b 0x8231e208
	goto loc_8231E208;
loc_8231E1C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8231e1d0
	if (!ctx.cr6.eq) goto loc_8231E1D0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231E1D0:
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,168(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// stw r8,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8231E208:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231e1c0
	if (!ctx.cr6.eq) goto loc_8231E1C0;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231e1a8
	if (ctx.cr6.eq) goto loc_8231E1A8;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8231E220:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8231e234
	if (!ctx.cr6.eq) goto loc_8231E234;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231E234:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231e1a8
	if (ctx.cr6.eq) goto loc_8231E1A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// bne cr6,0x8231e24c
	if (!ctx.cr6.eq) goto loc_8231E24C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8231E24C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231e110
	ctx.lr = 0x8231E258;
	sub_8231E110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e1ac
	if (!ctx.cr0.eq) goto loc_8231E1AC;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8231e220
	goto loc_8231E220;
}

DEFINE_REX_FUNC(sub_823295B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823295B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82329624
	if (!ctx.cr6.gt) goto loc_82329624;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823295DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8232de80
	ctx.lr = 0x823295F4;
	sub_8232DE80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329628
	if (!ctx.cr0.eq) goto loc_82329628;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82329610
	if (ctx.cr0.eq) goto loc_82329610;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82329610:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823295dc
	if (ctx.cr6.lt) goto loc_823295DC;
loc_82329624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82329628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232CFC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232cff0
	if (ctx.cr6.eq) goto loc_8232CFF0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8232CFF0:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D740) {
	REX_FUNC_PROLOGUE();
	// lbz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DD68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232DD70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232dd8c
	if (!ctx.cr6.eq) goto loc_8232DD8C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8232de78
	goto loc_8232DE78;
loc_8232DD8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232dda8
	if (ctx.cr6.eq) goto loc_8232DDA8;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232ddac
	goto loc_8232DDAC;
loc_8232DDA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DDAC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232de6c
	if (!ctx.cr6.eq) goto loc_8232DE6C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DDC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x8232ddec
	if (ctx.cr0.eq) goto loc_8232DDEC;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DDE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// b 0x8232de04
	goto loc_8232DE04;
loc_8232DDEC:
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DDFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232de78
	if (!ctx.cr0.eq) goto loc_8232DE78;
loc_8232DE04:
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232de20
	if (ctx.cr6.eq) goto loc_8232DE20;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82315f40
	ctx.lr = 0x8232DE1C;
	sub_82315F40(ctx, base);
	// b 0x8232de2c
	goto loc_8232DE2C;
loc_8232DE20:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_8232DE2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232de78
	if (!ctx.cr6.eq) goto loc_8232DE78;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ld r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DE4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r29
	REX_STORE_U32(r29.u32, ctx.f0.u32);
	// b 0x8232de74
	goto loc_8232DE74;
loc_8232DE6C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8232DE74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232DE78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8233E338) {
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
	// bl 0x823ef900
	ctx.lr = 0x8233E350;
	sub_823EF900(ctx, base);
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

DEFINE_REX_FUNC(sub_8233EB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8234aac0
	ctx.lr = 0x8233EB8C;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233eba0
	if (!ctx.cr6.eq) goto loc_8233EBA0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234e480
	ctx.lr = 0x8233EBA0;
	sub_8234E480(ctx, base);
loc_8233EBA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233F3D8) {
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
	ctx.lr = 0x8233F3F4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233f420
	if (ctx.cr6.eq) goto loc_8233F420;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f42c
	if (ctx.cr6.eq) goto loc_8233F42C;
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
loc_8233F420:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234d718
	ctx.lr = 0x8233F42C;
	sub_8234D718(ctx, base);
loc_8233F42C:
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

DEFINE_REX_FUNC(sub_82341420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82341428;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r4.u32);
	// addi r29,r3,332
	r29.s64 = ctx.r3.s64 + 332;
	// stb r5,340(r3)
	REX_STORE_U8(ctx.r3.u32 + 340, ctx.r5.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8233e6b8
	ctx.lr = 0x8234144C;
	sub_8233E6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823414e4
	if (!ctx.cr6.eq) goto loc_823414E4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r10,9176
	ctx.r4.s64 = ctx.r10.s64 + 9176;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,5144
	ctx.r5.s64 = ctx.r11.s64 + 5144;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82353870
	ctx.lr = 0x8234148C;
	sub_82353870(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823414b0
	if (ctx.cr6.eq) goto loc_823414B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8233e770
	ctx.lr = 0x823414A4;
	sub_8233E770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823414B0:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r10.u8);
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r31,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r31.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r31.u32);
loc_823414E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234A268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r9,9656
	ctx.r6.s64 = ctx.r9.s64 + 9656;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r9,r5,9664
	ctx.r9.s64 = ctx.r5.s64 + 9664;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r8,1012(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 1012);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r8,r3,196
	ctx.r8.s64 = ctx.r3.s64 + 196;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lfs f0,3704(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lfs f13,9368(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 9368);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// lfs f12,3716(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r8.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stw r11,272(r3)
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stfs f12,264(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// sth r5,84(r3)
	REX_STORE_U16(ctx.r3.u32 + 84, ctx.r5.u16);
	// stw r10,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D650) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d660
	if (!ctx.cr6.eq) goto loc_8234D660;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234D660:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d674
	if (!ctx.cr6.eq) goto loc_8234D674;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234D674:
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8234F290) {
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
	ctx.lr = 0x8234F298;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r24,r3,76
	r24.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234f2c0
	if (!ctx.cr6.eq) goto loc_8234F2C0;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_8234F2C0:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f674
	if (!ctx.cr6.eq) goto loc_8234F674;
	// rlwinm r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f300
	if (ctx.cr6.eq) goto loc_8234F300;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f300
	if (ctx.cr6.eq) goto loc_8234F300;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_8234F300:
	// rlwinm r11,r23,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f318
	if (ctx.cr6.eq) goto loc_8234F318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d998
	ctx.lr = 0x8234F318;
	sub_8234D998(ctx, base);
loc_8234F318:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r25,0
	r25.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234f390
	if (!ctx.cr6.gt) goto loc_8234F390;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
loc_8234F330:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,36(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r7,r8,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r7,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,36(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// rlwinm r4,r5,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r4,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r10,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,36(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// rlwinm r5,r6,0,27,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r5,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r5.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r4,36(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// ori r3,r4,128
	ctx.r3.u64 = ctx.r4.u64 | 128;
	// stw r3,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r3.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8234f330
	if (ctx.cr6.lt) goto loc_8234F330;
loc_8234F390:
	// rlwinm r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f3b8
	if (ctx.cr6.eq) goto loc_8234F3B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234e760
	ctx.lr = 0x8234F3B0;
	sub_8234E760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234f678
	if (!ctx.cr6.eq) goto loc_8234F678;
loc_8234F3B8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234f458
	if (!ctx.cr6.gt) goto loc_8234F458;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8234F3CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234f678
	if (!ctx.cr6.eq) goto loc_8234F678;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f444
	if (ctx.cr6.eq) goto loc_8234F444;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,240(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 240);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8234f444
	if (!ctx.cr6.eq) goto loc_8234F444;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f434
	if (ctx.cr6.eq) goto loc_8234F434;
	// ld r11,20888(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 20888);
	// b 0x8234f438
	goto loc_8234F438;
loc_8234F434:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8234F438:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// std r11,248(r9)
	REX_STORE_U64(ctx.r9.u32 + 248, ctx.r11.u64);
loc_8234F444:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234f3cc
	if (ctx.cr6.lt) goto loc_8234F3CC;
loc_8234F458:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f498
	if (ctx.cr6.eq) goto loc_8234F498;
	// stw r25,136(r31)
	REX_STORE_U32(r31.u32 + 136, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r25,144(r31)
	REX_STORE_U32(r31.u32 + 144, r25.u32);
	// stw r25,148(r31)
	REX_STORE_U32(r31.u32 + 148, r25.u32);
	// bl 0x8234ab98
	ctx.lr = 0x8234F478;
	sub_8234AB98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234f678
	if (!ctx.cr6.eq) goto loc_8234F678;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r25,172(r31)
	REX_STORE_U32(r31.u32 + 172, r25.u32);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
loc_8234F498:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// rlwinm r9,r11,0,25,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// ble cr6,0x8234f4c4
	if (!ctx.cr6.gt) goto loc_8234F4C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x8234F4C4;
	sub_826A22F8(ctx, base);
loc_8234F4C4:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f4f4
	if (ctx.cr6.eq) goto loc_8234F4F4;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f4f4
	if (ctx.cr6.eq) goto loc_8234F4F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x8234F4F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F4F4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234f5b4
	if (!ctx.cr6.gt) goto loc_8234F5B4;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8234F50C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234f52c
	if (ctx.cr6.eq) goto loc_8234F52C;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234f59c
	if (ctx.cr6.eq) goto loc_8234F59C;
loc_8234F52C:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f564
	if (ctx.cr6.eq) goto loc_8234F564;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234f564
	if (ctx.cr6.eq) goto loc_8234F564;
	// li r29,1
	r29.s64 = 1;
loc_8234F564:
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8234f57c
	if (ctx.cr6.eq) goto loc_8234F57C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r3,23372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// bl 0x8233e7e0
	ctx.lr = 0x8234F57C;
	sub_8233E7E0(ctx, base);
loc_8234F57C:
	// stw r25,24(r30)
	REX_STORE_U32(r30.u32 + 24, r25.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r25,28(r30)
	REX_STORE_U32(r30.u32 + 28, r25.u32);
	// stw r25,16(r30)
	REX_STORE_U32(r30.u32 + 16, r25.u32);
	// beq cr6,0x8234f59c
	if (ctx.cr6.eq) goto loc_8234F59C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r3,23372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// bl 0x8233e820
	ctx.lr = 0x8234F59C;
	sub_8233E820(ctx, base);
loc_8234F59C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234f50c
	if (ctx.cr6.lt) goto loc_8234F50C;
loc_8234F5B4:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8234f64c
	if (!ctx.cr6.eq) goto loc_8234F64C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f64c
	if (!ctx.cr6.eq) goto loc_8234F64C;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234f5f8
	if (!ctx.cr6.gt) goto loc_8234F5F8;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
loc_8234F5E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r25,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r10.u32 = ea;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8234f5e4
	if (ctx.cr6.lt) goto loc_8234F5E4;
loc_8234F5F8:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f60c
	if (ctx.cr6.eq) goto loc_8234F60C;
	// stw r25,416(r31)
	REX_STORE_U32(r31.u32 + 416, r25.u32);
	// stw r25,104(r31)
	REX_STORE_U32(r31.u32 + 104, r25.u32);
loc_8234F60C:
	// clrlwi r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f64c
	if (ctx.cr6.eq) goto loc_8234F64C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r10,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,16,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x8234f63c
	if (!ctx.cr6.gt) goto loc_8234F63C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8234F63C:
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
loc_8234F64C:
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234f674
	if (ctx.cr6.eq) goto loc_8234F674;
	// rlwinm r11,r23,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234f670
	if (!ctx.cr6.eq) goto loc_8234F670;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// bl 0x823607d8
	ctx.lr = 0x8234F670;
	sub_823607D8(ctx, base);
loc_8234F670:
	// stw r25,284(r31)
	REX_STORE_U32(r31.u32 + 284, r25.u32);
loc_8234F674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234F678:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8236D300) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236d310
	if (!ctx.cr6.eq) goto loc_8236D310;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D310:
	// b 0x8236c8d0
	sub_8236C8D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D4B0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236d4c0
	if (!ctx.cr6.eq) goto loc_8236D4C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D4C0:
	// b 0x8236d420
	sub_8236D420(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236E2E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236e33c
	if (ctx.cr6.eq) goto loc_8236E33C;
	// lbz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236e368
	if (!ctx.cr6.eq) goto loc_8236E368;
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e334
	if (ctx.cr6.eq) goto loc_8236E334;
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// bl 0x82331a00
	ctx.lr = 0x8236E334;
	sub_82331A00(ctx, base);
loc_8236E334:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8236e364
	goto loc_8236E364;
loc_8236E33C:
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e360
	if (ctx.cr6.eq) goto loc_8236E360;
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x8236E360;
	sub_82331A00(ctx, base);
loc_8236E360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236E364:
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
loc_8236E368:
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

DEFINE_REX_FUNC(sub_82374568) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374578
	if (!ctx.cr6.eq) goto loc_82374578;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374578:
	// b 0x82373a10
	sub_82373A10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374868) {
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
	ctx.lr = 0x82374870;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,17640
	ctx.r5.s64 = ctx.r10.s64 + 17640;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,215
	ctx.r6.s64 = 215;
	// mulli r4,r4,5520
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(5520));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823748A0;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,268(r28)
	REX_STORE_U32(r28.u32 + 268, ctx.r3.u32);
	// bne cr6,0x823748b8
	if (!ctx.cr6.eq) goto loc_823748B8;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823748B8:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823748f8
	if (!ctx.cr6.gt) goto loc_823748F8;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r28,272
	r31.s64 = r28.s64 + 272;
loc_823748CC:
	// lwz r11,268(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 268);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x823c15a0
	ctx.lr = 0x823748D8;
	sub_823C15A0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374904
	if (ctx.cr6.eq) goto loc_82374904;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,5520
	r30.s64 = r30.s64 + 5520;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x823748cc
	if (ctx.cr6.lt) goto loc_823748CC;
loc_823748F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82374904:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82379EE0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82379ef0
	if (!ctx.cr6.eq) goto loc_82379EF0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82379EF0:
	// b 0x82379bd8
	sub_82379BD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8237BF58) {
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
	// addi r30,r31,12528
	r30.s64 = r31.s64 + 12528;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8237BF84;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,18524
	ctx.r11.s64 = ctx.r11.s64 + 18524;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,12528(r31)
	REX_STORE_U32(r31.u32 + 12528, ctx.r11.u32);
	// lis r5,-32200
	ctx.r5.s64 = -2110259200;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r6,-32200
	ctx.r6.s64 = -2110259200;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r7,-32200
	ctx.r7.s64 = -2110259200;
	// addi r11,r5,-16600
	ctx.r11.s64 = ctx.r5.s64 + -16600;
	// addi r10,r6,-24048
	ctx.r10.s64 = ctx.r6.s64 + -24048;
	// addi r9,r7,-24024
	ctx.r9.s64 = ctx.r7.s64 + -24024;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r8,-16576
	ctx.r11.s64 = ctx.r8.s64 + -16576;
	// li r9,296
	ctx.r9.s64 = 296;
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

DEFINE_REX_FUNC(sub_82381838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82381840;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// li r3,64
	ctx.r3.s64 = 64;
	// li r30,0
	r30.s64 = 0;
	// lwz r29,688(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 688);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// beq cr6,0x82381924
	if (ctx.cr6.eq) goto loc_82381924;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bgt cr6,0x82381880
	if (ctx.cr6.gt) goto loc_82381880;
	// stw r9,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r9.u32);
loc_82381880:
	// cmplwi cr6,r9,65
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65, ctx.xer);
	// blt cr6,0x823818c0
	if (ctx.cr6.lt) goto loc_823818C0;
	// cmplwi cr6,r9,74
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 74, ctx.xer);
	// bgt cr6,0x823818c0
	if (ctx.cr6.gt) goto loc_823818C0;
	// addi r11,r9,191
	ctx.r11.s64 = ctx.r9.s64 + 191;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823818a4
	if (ctx.cr6.eq) goto loc_823818A4;
	// stb r11,687(r6)
	REX_STORE_U8(ctx.r6.u32 + 687, ctx.r11.u8);
loc_823818A4:
	// lwz r11,604(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 604);
	// lbz r10,687(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 687);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x823818c0
	if (!ctx.cr6.gt) goto loc_823818C0;
	// stw r3,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r3.u32);
loc_823818C0:
	// cmplwi cr6,r9,75
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 75, ctx.xer);
	// blt cr6,0x823818fc
	if (ctx.cr6.lt) goto loc_823818FC;
	// cmplwi cr6,r9,84
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 84, ctx.xer);
	// bgt cr6,0x823818fc
	if (ctx.cr6.gt) goto loc_823818FC;
	// addi r11,r9,181
	ctx.r11.s64 = ctx.r9.s64 + 181;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823818e4
	if (ctx.cr6.eq) goto loc_823818E4;
	// stb r11,687(r6)
	REX_STORE_U8(ctx.r6.u32 + 687, ctx.r11.u8);
loc_823818E4:
	// lwz r11,604(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 604);
	// lbz r10,687(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 687);
	// subf. r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r5.u32);
	// bge 0x823818fc
	if (!ctx.cr0.lt) goto loc_823818FC;
	// stw r30,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, r30.u32);
loc_823818FC:
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// blt cr6,0x82381924
	if (ctx.cr6.lt) goto loc_82381924;
	// cmplwi cr6,r9,192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 192, ctx.xer);
	// bgt cr6,0x82381924
	if (ctx.cr6.gt) goto loc_82381924;
	// addi r11,r9,-128
	ctx.r11.s64 = ctx.r9.s64 + -128;
	// stw r11,608(r6)
	REX_STORE_U32(ctx.r6.u32 + 608, ctx.r11.u32);
	// lbz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// stb r9,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r9.u8);
loc_82381924:
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r5,85
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 85, ctx.xer);
	// blt cr6,0x82381970
	if (ctx.cr6.lt) goto loc_82381970;
	// cmplwi cr6,r5,94
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 94, ctx.xer);
	// bgt cr6,0x82381970
	if (ctx.cr6.gt) goto loc_82381970;
	// addi r11,r5,171
	ctx.r11.s64 = ctx.r5.s64 + 171;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238194c
	if (ctx.cr6.eq) goto loc_8238194C;
	// stb r11,687(r6)
	REX_STORE_U8(ctx.r6.u32 + 687, ctx.r11.u8);
loc_8238194C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82381970
	if (!ctx.cr6.eq) goto loc_82381970;
	// lwz r10,604(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 604);
	// lbz r11,687(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 687);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82381970
	if (!ctx.cr6.gt) goto loc_82381970;
	// stw r3,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r3.u32);
loc_82381970:
	// cmplwi cr6,r5,95
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 95, ctx.xer);
	// blt cr6,0x823819b4
	if (ctx.cr6.lt) goto loc_823819B4;
	// cmplwi cr6,r5,104
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 104, ctx.xer);
	// bgt cr6,0x823819b4
	if (ctx.cr6.gt) goto loc_823819B4;
	// addi r11,r5,161
	ctx.r11.s64 = ctx.r5.s64 + 161;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381994
	if (ctx.cr6.eq) goto loc_82381994;
	// stb r11,687(r6)
	REX_STORE_U8(ctx.r6.u32 + 687, ctx.r11.u8);
loc_82381994:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823819b4
	if (!ctx.cr6.eq) goto loc_823819B4;
	// lwz r11,604(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 604);
	// lbz r10,687(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 687);
	// subf. r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, ctx.r9.u32);
	// bge 0x823819b4
	if (!ctx.cr0.lt) goto loc_823819B4;
	// stw r30,604(r6)
	REX_STORE_U32(ctx.r6.u32 + 604, r30.u32);
loc_823819B4:
	// cmplwi cr6,r5,105
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 105, ctx.xer);
	// blt cr6,0x823819ec
	if (ctx.cr6.lt) goto loc_823819EC;
	// cmplwi cr6,r5,114
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 114, ctx.xer);
	// bgt cr6,0x823819ec
	if (ctx.cr6.gt) goto loc_823819EC;
	// addi r11,r5,151
	ctx.r11.s64 = ctx.r5.s64 + 151;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823819d8
	if (ctx.cr6.eq) goto loc_823819D8;
	// stb r11,628(r6)
	REX_STORE_U8(ctx.r6.u32 + 628, ctx.r11.u8);
loc_823819D8:
	// lbz r11,628(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 628);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r10.u32);
loc_823819EC:
	// cmplwi cr6,r5,115
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 115, ctx.xer);
	// blt cr6,0x82381a3c
	if (ctx.cr6.lt) goto loc_82381A3C;
	// cmplwi cr6,r5,124
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 124, ctx.xer);
	// bgt cr6,0x82381a3c
	if (ctx.cr6.gt) goto loc_82381A3C;
	// addi r11,r5,141
	ctx.r11.s64 = ctx.r5.s64 + 141;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381a10
	if (ctx.cr6.eq) goto loc_82381A10;
	// stb r11,628(r6)
	REX_STORE_U8(ctx.r6.u32 + 628, ctx.r11.u8);
loc_82381A10:
	// lbz r11,628(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 628);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r8,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r8.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// blt cr6,0x82381a38
	if (ctx.cr6.lt) goto loc_82381A38;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
loc_82381A38:
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
loc_82381A3C:
	// cmplwi cr6,r5,193
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 193, ctx.xer);
	// blt cr6,0x82381ab0
	if (ctx.cr6.lt) goto loc_82381AB0;
	// cmplwi cr6,r5,202
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 202, ctx.xer);
	// bgt cr6,0x82381ab0
	if (ctx.cr6.gt) goto loc_82381AB0;
	// lwz r11,2168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2168);
	// addi r10,r5,63
	ctx.r10.s64 = ctx.r5.s64 + 63;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x82381aa8
	if (!ctx.cr6.eq) goto loc_82381AA8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381a8c
	if (ctx.cr6.eq) goto loc_82381A8C;
	// lhz r10,2162(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 2162);
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381a88
	if (ctx.cr6.eq) goto loc_82381A88;
	// stb r11,644(r6)
	REX_STORE_U8(ctx.r6.u32 + 644, ctx.r11.u8);
	// b 0x82381a8c
	goto loc_82381A8C;
loc_82381A88:
	// stb r11,628(r6)
	REX_STORE_U8(ctx.r6.u32 + 628, ctx.r11.u8);
loc_82381A8C:
	// lwz r11,596(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 596);
	// stw r11,640(r6)
	REX_STORE_U32(ctx.r6.u32 + 640, ctx.r11.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82381ab0
	if (ctx.cr6.eq) goto loc_82381AB0;
	// stb r30,645(r6)
	REX_STORE_U8(ctx.r6.u32 + 645, r30.u8);
	// b 0x82381ab0
	goto loc_82381AB0;
loc_82381AA8:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82380a70
	ctx.lr = 0x82381AB0;
	sub_82380A70(ctx, base);
loc_82381AB0:
	// cmplwi cr6,r5,203
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 203, ctx.xer);
	// blt cr6,0x82381b58
	if (ctx.cr6.lt) goto loc_82381B58;
	// cmplwi cr6,r5,212
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 212, ctx.xer);
	// bgt cr6,0x82381b58
	if (ctx.cr6.gt) goto loc_82381B58;
	// lwz r11,2168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2168);
	// addi r10,r5,53
	ctx.r10.s64 = ctx.r5.s64 + 53;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x82381b28
	if (!ctx.cr6.eq) goto loc_82381B28;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82381aec
	if (ctx.cr6.eq) goto loc_82381AEC;
	// stb r11,648(r6)
	REX_STORE_U8(ctx.r6.u32 + 648, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,649(r6)
	REX_STORE_U8(ctx.r6.u32 + 649, ctx.r11.u8);
loc_82381AEC:
	// lbz r11,459(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82381b58
	if (!ctx.cr6.eq) goto loc_82381B58;
	// lhz r11,2162(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2162);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82381b58
	if (!ctx.cr6.eq) goto loc_82381B58;
	// lbz r11,649(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 649);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82381b54
	if (!ctx.cr6.eq) goto loc_82381B54;
	// bl 0x82380c70
	ctx.lr = 0x82381B1C;
	sub_82380C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82381B28:
	// lbz r11,459(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82381b58
	if (!ctx.cr6.eq) goto loc_82381B58;
	// lbz r11,649(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 649);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82381b54
	if (!ctx.cr6.eq) goto loc_82381B54;
	// bl 0x82380c70
	ctx.lr = 0x82381B48;
	sub_82380C70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82381B54:
	// bl 0x82380b30
	ctx.lr = 0x82381B58;
	sub_82380B30(ctx, base);
loc_82381B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A1220) {
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
	ctx.lr = 0x823A1228;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a125c
	if (ctx.cr6.eq) goto loc_823A125C;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A125C:
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a1274
	if (!ctx.cr6.eq) goto loc_823A1274;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A1274:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823a1298
	if (!ctx.cr6.eq) goto loc_823A1298;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1298
	if (!ctx.cr6.eq) goto loc_823A1298;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A1298:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// beq cr6,0x823a1404
	if (ctx.cr6.eq) goto loc_823A1404;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// beq cr6,0x823a12b0
	if (ctx.cr6.eq) goto loc_823A12B0;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// bne cr6,0x823a1440
	if (!ctx.cr6.eq) goto loc_823A1440;
loc_823A12B0:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// bne cr6,0x823a1440
	if (!ctx.cr6.eq) goto loc_823A1440;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a13fc
	if (ctx.cr6.eq) goto loc_823A13FC;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823a13fc
	if (ctx.cr6.gt) goto loc_823A13FC;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4840
	ctx.r12.s64 = ctx.r12.s64 + 4840;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A135C;
	case 1:
		goto loc_823A1318;
	case 2:
		goto loc_823A1320;
	case 3:
		goto loc_823A1328;
	case 4:
		goto loc_823A1330;
	case 5:
		goto loc_823A1330;
	case 6:
		goto loc_823A135C;
	case 7:
		goto loc_823A135C;
	case 8:
		goto loc_823A135C;
	case 9:
		goto loc_823A135C;
	case 10:
		goto loc_823A135C;
	case 11:
		goto loc_823A135C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A1318:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823a1334
	goto loc_823A1334;
loc_823A1320:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823a1334
	goto loc_823A1334;
loc_823A1328:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823a1334
	goto loc_823A1334;
loc_823A1330:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823A1334:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r26,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(r26.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 ? ctx.r9.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r27,2
	r27.s64 = 2;
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823a1464
	goto loc_823A1464;
loc_823A135C:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4980
	ctx.r12.s64 = ctx.r12.s64 + 4980;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A13F0;
	case 1:
		goto loc_823A13FC;
	case 2:
		goto loc_823A13FC;
	case 3:
		goto loc_823A13FC;
	case 4:
		goto loc_823A13FC;
	case 5:
		goto loc_823A13FC;
	case 6:
		goto loc_823A13A4;
	case 7:
		goto loc_823A13BC;
	case 8:
		goto loc_823A13D8;
	case 9:
		goto loc_823A13FC;
	case 10:
		goto loc_823A13FC;
	case 11:
		goto loc_823A13FC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A13A4:
	// mulli r11,r26,14
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r27,2
	r27.s64 = 2;
	// b 0x823a1464
	goto loc_823A1464;
loc_823A13BC:
	// rlwinm r11,r26,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,36
	ctx.r9.s64 = 36;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// li r27,2
	r27.s64 = 2;
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x823a1464
	goto loc_823A1464;
loc_823A13D8:
	// mulli r11,r26,28
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r27,2
	r27.s64 = 2;
	// b 0x823a1464
	goto loc_823A1464;
loc_823A13F0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// divwu r26,r24,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? r24.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
loc_823A13FC:
	// li r27,2
	r27.s64 = 2;
	// b 0x823a1464
	goto loc_823A1464;
loc_823A1404:
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// lfs f13,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r27,2
	r27.s64 = 2;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x823a1464
	goto loc_823A1464;
loc_823A1440:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a1464
	if (!ctx.cr6.eq) goto loc_823A1464;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// li r27,1
	r27.s64 = 1;
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,156(r30)
	REX_STORE_U32(r30.u32 + 156, ctx.r9.u32);
loc_823A1464:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a14d4
	if (ctx.cr6.eq) goto loc_823A14D4;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a14b4
	if (!ctx.cr6.gt) goto loc_823A14B4;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
loc_823A1488:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A14A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a1488
	if (ctx.cr6.lt) goto loc_823A1488;
loc_823A14B4:
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r26,44(r31)
	REX_STORE_U32(r31.u32 + 44, r26.u32);
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r24,108(r31)
	REX_STORE_U32(r31.u32 + 108, r24.u32);
	// stw r24,104(r31)
	REX_STORE_U32(r31.u32 + 104, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A14D4:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x823a1558
	if (!ctx.cr6.eq) goto loc_823A1558;
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r4,156(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 156);
	// lwz r9,200(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 200);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823a1558
	if (!ctx.cr6.eq) goto loc_823A1558;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1558
	if (!ctx.cr6.eq) goto loc_823A1558;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a1520
	if (ctx.cr6.eq) goto loc_823A1520;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a1558
	if (ctx.cr6.eq) goto loc_823A1558;
loc_823A1520:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1804
	if (ctx.cr6.eq) goto loc_823A1804;
	// lwz r3,140(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a1804
	if (ctx.cr6.eq) goto loc_823A1804;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823a1804
	if (ctx.cr6.eq) goto loc_823A1804;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82344be0
	ctx.lr = 0x823A154C;
	sub_82344BE0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A1558:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a1678
	if (ctx.cr6.eq) goto loc_823A1678;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a1678
	if (!ctx.cr6.eq) goto loc_823A1678;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82341f30
	ctx.lr = 0x823A157C;
	sub_82341F30(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a1804
	if (!ctx.cr6.eq) goto loc_823A1804;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// ble cr6,0x823a15d0
	if (!ctx.cr6.gt) goto loc_823A15D0;
	// addi r28,r31,124
	r28.s64 = r31.s64 + 124;
loc_823A15A8:
	// lwzu r3,4(r28)
	ea = 4 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A15C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a15a8
	if (ctx.cr6.lt) goto loc_823A15A8;
loc_823A15D0:
	// lwz r3,292(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,44(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x823457c0
	ctx.lr = 0x823A15E0;
	sub_823457C0(ctx, base);
	// lwz r11,216(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 216);
	// lwz r10,520(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// lwz r3,324(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x823A15F0;
	sub_8233E7E0(ctx, base);
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1608
	if (ctx.cr6.eq) goto loc_823A1608;
	// stw r10,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
loc_823A1608:
	// lwz r11,216(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 216);
	// stw r26,656(r11)
	REX_STORE_U32(ctx.r11.u32 + 656, r26.u32);
	// lwz r10,216(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 216);
	// stw r27,660(r10)
	REX_STORE_U32(ctx.r10.u32 + 660, r27.u32);
	// lwz r9,216(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 216);
	// stw r30,532(r9)
	REX_STORE_U32(ctx.r9.u32 + 532, r30.u32);
	// lwz r11,216(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 216);
	// addi r10,r11,524
	ctx.r10.s64 = ctx.r11.s64 + 524;
	// lwz r9,520(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// addi r9,r9,312
	ctx.r9.s64 = ctx.r9.s64 + 312;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, ctx.r8.u32);
	// stw r9,524(r11)
	REX_STORE_U32(ctx.r11.u32 + 524, ctx.r9.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r7,528(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r6,216(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 216);
	// lwz r5,520(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 520);
	// lwz r3,324(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 324);
	// bl 0x8233e820
	ctx.lr = 0x823A1658;
	sub_8233E820(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x823537f0
	ctx.lr = 0x823A166C;
	sub_823537F0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A1678:
	// clrlwi r25,r6,24
	r25.u64 = ctx.r6.u32 & 0xFF;
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x823a1710
	if (!ctx.cr6.eq) goto loc_823A1710;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e7e0
	ctx.lr = 0x823A1694;
	sub_8233E7E0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,128
	r28.s64 = r31.s64 + 128;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A16B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a16d4
	if (ctx.cr6.eq) goto loc_823A16D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e820
	ctx.lr = 0x823A16C8;
	sub_8233E820(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_823A16D4:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a1710
	if (!ctx.cr6.gt) goto loc_823A1710;
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
loc_823A16E8:
	// lwzu r3,4(r28)
	ea = 4 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A1700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a16e8
	if (ctx.cr6.lt) goto loc_823A16E8;
loc_823A1710:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239e9f8
	ctx.lr = 0x823A1720;
	sub_8239E9F8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a17b4
	if (!ctx.cr6.eq) goto loc_823A17B4;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// lwz r3,23372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// bl 0x8233e7e0
	ctx.lr = 0x823A1738;
	sub_8233E7E0(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a1788
	if (!ctx.cr6.gt) goto loc_823A1788;
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
loc_823A174C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1774
	if (ctx.cr6.eq) goto loc_823A1774;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A1774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A1774:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a174c
	if (ctx.cr6.lt) goto loc_823A174C;
loc_823A1788:
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// lwz r3,23372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// bl 0x8233e820
	ctx.lr = 0x823A1794;
	sub_8233E820(ctx, base);
	// stw r26,44(r31)
	REX_STORE_U32(r31.u32 + 44, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r24,96(r31)
	REX_STORE_U32(r31.u32 + 96, r24.u32);
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r24,108(r31)
	REX_STORE_U32(r31.u32 + 108, r24.u32);
	// stw r24,104(r31)
	REX_STORE_U32(r31.u32 + 104, r24.u32);
	// bl 0x8239f860
	ctx.lr = 0x823A17B0;
	sub_8239F860(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823A17B4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x823a1804
	if (!ctx.cr6.eq) goto loc_823A1804;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a17f8
	if (!ctx.cr6.gt) goto loc_823A17F8;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
loc_823A17D0:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A17E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a17d0
	if (ctx.cr6.lt) goto loc_823A17D0;
loc_823A17F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e820
	ctx.lr = 0x823A1804;
	sub_8233E820(ctx, base);
loc_823A1804:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823CF700) {
	REX_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823cf714
	if (!ctx.cr6.lt) goto loc_823CF714;
	// li r3,-131
	ctx.r3.s64 = -131;
	// blr 
	return;
loc_823CF714:
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CFCE0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823cf7e0
	ctx.lr = 0x823CFCFC;
	sub_823CF7E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D0270) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0288
	if (ctx.cr6.eq) goto loc_823D0288;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_823D0288:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D0838) {
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
	ctx.lr = 0x823D0840;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r24,-133
	r24.s64 = -133;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x823d086c
	if (!ctx.cr6.eq) goto loc_823D086C;
	// li r3,-129
	ctx.r3.s64 = -129;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823D086C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0878;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r11.u32);
	// ble 0x823d0bc8
	if (!ctx.cr0.gt) goto loc_823D0BC8;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d08dc
	if (!ctx.cr6.gt) goto loc_823D08DC;
	// addi r31,r27,1820
	r31.s64 = r27.s64 + 1820;
loc_823D0894:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82393af8
	ctx.lr = 0x823D08A4;
	sub_82393AF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0be0
	if (ctx.cr6.eq) goto loc_823D0BE0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e3de8
	ctx.lr = 0x823D08C0;
	sub_823E3DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d0be8
	if (!ctx.cr6.eq) goto loc_823D0BE8;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0894
	if (ctx.cr6.lt) goto loc_823D0894;
loc_823D08DC:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D08E8;
	sub_823E2DA8(ctx, base);
	// addic. r29,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	r29.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x823d0bc8
	if (!ctx.cr0.gt) goto loc_823D0BC8;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823d0924
	if (!ctx.cr6.gt) goto loc_823D0924;
loc_823D08FC:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0908;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823d0bc8
	if (ctx.cr6.lt) goto loc_823D0BC8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x823d08fc
	if (ctx.cr6.lt) goto loc_823D08FC;
loc_823D0924:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0930;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// ble 0x823d0bc8
	if (!ctx.cr0.gt) goto loc_823D0BC8;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d09b8
	if (!ctx.cr6.gt) goto loc_823D09B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r27,1052
	r31.s64 = r27.s64 + 1052;
	// addi r29,r11,-2284
	r29.s64 = ctx.r11.s64 + -2284;
loc_823D0954:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0960;
	sub_823E2DA8(ctx, base);
	// stw r3,-256(r31)
	REX_STORE_U32(r31.u32 + -256, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d0bf0
	if (ctx.cr6.eq) goto loc_823D0BF0;
	// blt cr6,0x823d0bc8
	if (ctx.cr6.lt) goto loc_823D0BC8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D0998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0bc8
	if (ctx.cr6.eq) goto loc_823D0BC8;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0954
	if (ctx.cr6.lt) goto loc_823D0954;
loc_823D09B8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D09C4;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r11.u32);
	// ble 0x823d0bc8
	if (!ctx.cr0.gt) goto loc_823D0BC8;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d0a48
	if (!ctx.cr6.gt) goto loc_823D0A48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r27,1564
	r31.s64 = r27.s64 + 1564;
	// addi r29,r11,-2276
	r29.s64 = ctx.r11.s64 + -2276;
loc_823D09E8:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D09F4;
	sub_823E2DA8(ctx, base);
	// stw r3,-256(r31)
	REX_STORE_U32(r31.u32 + -256, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823d0bc8
	if (ctx.cr6.lt) goto loc_823D0BC8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D0A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0bc8
	if (ctx.cr6.eq) goto loc_823D0BC8;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d09e8
	if (ctx.cr6.lt) goto loc_823D09E8;
loc_823D0A48:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0A54;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r11.u32);
	// ble 0x823d0bc8
	if (!ctx.cr0.gt) goto loc_823D0BC8;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d0ad8
	if (!ctx.cr6.gt) goto loc_823D0AD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r27,540
	r31.s64 = r27.s64 + 540;
	// addi r29,r11,-2264
	r29.s64 = ctx.r11.s64 + -2264;
loc_823D0A78:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0A84;
	sub_823E2DA8(ctx, base);
	// stw r3,-256(r31)
	REX_STORE_U32(r31.u32 + -256, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823d0bc8
	if (ctx.cr6.lt) goto loc_823D0BC8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D0AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0bc8
	if (ctx.cr6.eq) goto loc_823D0BC8;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0a78
	if (ctx.cr6.lt) goto loc_823D0A78;
loc_823D0AD8:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0AE4;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// ble 0x823d0bc8
	if (!ctx.cr0.gt) goto loc_823D0BC8;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d0bb4
	if (!ctx.cr6.gt) goto loc_823D0BB4;
	// addi r31,r27,28
	r31.s64 = r27.s64 + 28;
loc_823D0B00:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82393af8
	ctx.lr = 0x823D0B10;
	sub_82393AF8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0be0
	if (ctx.cr6.eq) goto loc_823D0BE0;
	// rotlwi r28,r3,0
	r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0B2C;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0B40;
	sub_823E2DA8(ctx, base);
	// stw r3,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0B54;
	sub_823E2DA8(ctx, base);
	// stw r3,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0B68;
	sub_823E2DA8(ctx, base);
	// stw r3,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823d0bc8
	if (!ctx.cr6.lt) goto loc_823D0BC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d0bc8
	if (ctx.cr6.lt) goto loc_823D0BC8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0b00
	if (ctx.cr6.lt) goto loc_823D0B00;
loc_823D0BB4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823D0BC0;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823d0bf8
	if (ctx.cr6.eq) goto loc_823D0BF8;
loc_823D0BC8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d02f8
	ctx.lr = 0x823D0BD4;
	sub_823D02F8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823D0BE0:
	// li r24,-139
	r24.s64 = -139;
	// b 0x823d0bc8
	goto loc_823D0BC8;
loc_823D0BE8:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x823d0bc8
	goto loc_823D0BC8;
loc_823D0BF0:
	// li r24,-134
	r24.s64 = -134;
	// b 0x823d0bc8
	goto loc_823D0BC8;
loc_823D0BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823E6C38) {
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
	ctx.lr = 0x823E6C40;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r6,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r6,r11
	r25.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823e6dbc
	if (!ctx.cr6.gt) goto loc_823E6DBC;
	// addi r24,r5,268
	r24.s64 = ctx.r5.s64 + 268;
	// rlwinm r22,r8,3,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
loc_823E6C70:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823e6db0
	if (!ctx.cr6.gt) goto loc_823E6DB0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r4,r11
	r28.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r26,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + r31.u64;
	// add r27,r8,r31
	r27.u64 = ctx.r8.u64 + r31.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r4,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r28,3,0,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
loc_823E6CC4:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f5,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f8,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
	// lfs f31,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f31.f64 = double(temp.f32);
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// lfs f30,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmsubs f5,f11,f5,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f5.f64, -ctx.f9.f64)));
	// fmsubs f4,f8,f4,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, -ctx.f7.f64)));
	// fmsubs f1,f31,f1,f6
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f1.f64, -ctx.f6.f64)));
	// fmadds f0,f11,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f13,f8,f13,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f12,f31,f12,f10
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f10.f64)));
	// fadds f11,f4,f5
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f10,f30,f1
	ctx.f10.f64 = double(float(f30.f64 + ctx.f1.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f9,f30,f1
	ctx.f9.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f7,f29,f12
	ctx.f7.f64 = double(float(f29.f64 + ctx.f12.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f4,f29,f12
	ctx.f4.f64 = double(float(f29.f64 - ctx.f12.f64));
	// fsubs f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfsu f1,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfsu f10,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fsubs f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfsu f8,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f6,f5,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f7,4(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsu f6,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823e6cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6CC4;
loc_823E6DB0:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// add r31,r22,r31
	r31.u64 = r22.u64 + r31.u64;
	// bne 0x823e6c70
	if (!ctx.cr0.eq) goto loc_823E6C70;
loc_823E6DBC:
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

DEFINE_REX_FUNC(sub_823EDD88) {
	REX_FUNC_PROLOGUE();
	// b 0x827937b4
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDE98) {
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
	ctx.lr = 0x823EDEA0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823edf18
	if (ctx.cr6.eq) goto loc_823EDF18;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x823edf10
	if (ctx.cr6.eq) goto loc_823EDF10;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x823edf08
	if (ctx.cr6.eq) goto loc_823EDF08;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x823edf00
	if (ctx.cr6.eq) goto loc_823EDF00;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x823edeec
	if (!ctx.cr6.eq) goto loc_823EDEEC;
	// rlwinm. r11,r4,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// bne 0x823edf1c
	if (!ctx.cr0.eq) goto loc_823EDF1C;
loc_823EDEEC:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x823f0020
	ctx.lr = 0x823EDEF8;
	sub_823F0020(ctx, base);
loc_823EDEF8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ee084
	goto loc_823EE084;
loc_823EDF00:
	// li r30,3
	r30.s64 = 3;
	// b 0x823edf1c
	goto loc_823EDF1C;
loc_823EDF08:
	// li r30,1
	r30.s64 = 1;
	// b 0x823edf1c
	goto loc_823EDF1C;
loc_823EDF10:
	// li r30,5
	r30.s64 = 5;
	// b 0x823edf1c
	goto loc_823EDF1C;
loc_823EDF18:
	// li r30,2
	r30.s64 = 2;
loc_823EDF1C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82793934
	ctx.lr = 0x823EDF28;
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823edf48
	if (!ctx.cr6.gt) goto loc_823EDF48;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x823edf4c
	if (ctx.cr6.eq) goto loc_823EDF4C;
loc_823EDF48:
	// li r29,0
	r29.s64 = 0;
loc_823EDF4C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~r31.u64;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq 0x823edfb4
	if (ctx.cr0.eq) goto loc_823EDFB4;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r28,r28,1
	r28.u64 = r28.u64 | 65536;
loc_823EDFB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823edfc0
	if (!ctx.cr6.eq) goto loc_823EDFC0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_823EDFC0:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,-32128
	ctx.r6.s64 = -2105540608;
	// oris r4,r28,16
	ctx.r4.u64 = r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = r31.u64 & 32679;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,-30824(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -30824);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EDFFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x823ee04c
	if (!ctx.cr0.lt) goto loc_823EE04C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0020
	ctx.lr = 0x823EE00C;
	sub_823F0020(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823ee024
	if (!ctx.cr6.eq) goto loc_823EE024;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x823ee044
	goto loc_823EE044;
loc_823EE024:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823edef8
	if (!ctx.cr6.eq) goto loc_823EDEF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x823ee044
	if (!ctx.cr6.eq) goto loc_823EE044;
	// li r3,5
	ctx.r3.s64 = 5;
loc_823EE044:
	// bl 0x823f0188
	ctx.lr = 0x823EE048;
	sub_823F0188(ctx, base);
	// b 0x823edef8
	goto loc_823EDEF8;
loc_823EE04C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x823ee060
	if (!ctx.cr6.eq) goto loc_823EE060;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823ee070
	if (ctx.cr6.eq) goto loc_823EE070;
loc_823EE060:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// bne cr6,0x823ee078
	if (!ctx.cr6.eq) goto loc_823EE078;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823ee078
	if (!ctx.cr6.eq) goto loc_823EE078;
loc_823EE070:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x823ee07c
	goto loc_823EE07C;
loc_823EE078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EE07C:
	// bl 0x823f0188
	ctx.lr = 0x823EE080;
	sub_823F0188(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823EE084:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823FB748) {
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
	ctx.lr = 0x823FB750;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_823FB778:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fb778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB778;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823fb7b0
	if (ctx.cr6.eq) goto loc_823FB7B0;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823FB790:
	// lbzx r9,r11,r24
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r24.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x823fb790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB790;
loc_823FB7B0:
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r28,1
	r28.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823FB7C8:
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// subfic r7,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r7.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// slw r8,r4,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823fb7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB7C8;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823fb834
	if (ctx.cr6.eq) goto loc_823FB834;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fb82c
	if (!ctx.cr6.eq) goto loc_823FB82C;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823FB828;
	sub_826A2E60(ctx, base);
	// b 0x823fb9f8
	goto loc_823FB9F8;
loc_823FB82C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823fb9fc
	goto loc_823FB9FC;
loc_823FB834:
	// clrlwi r31,r6,24
	r31.u64 = ctx.r6.u32 & 0xFF;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// subfic r10,r31,16
	ctx.xer.ca = r31.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - r31.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// blt cr6,0x823fb890
	if (ctx.cr6.lt) goto loc_823FB890;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_823FB854:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// subf r6,r11,r31
	ctx.r6.u64 = r31.u64 - ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// slw r6,r28,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r6,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// srw r6,r3,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// ble cr6,0x823fb854
	if (!ctx.cr6.gt) goto loc_823FB854;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x823fb8bc
	if (ctx.cr6.gt) goto loc_823FB8BC;
loc_823FB890:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// subfic r11,r11,17
	ctx.xer.ca = ctx.r11.u32 <= 17;
	ctx.r11.u64 = static_cast<uint64_t>(17) - ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823FB8AC:
	// slw r11,r28,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x823fb8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB8AC;
loc_823FB8BC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r30,r7,24
	r30.u64 = ctx.r7.u32 & 0xFF;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r30.u8 & 0x3F));
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823fb8f4
	if (ctx.cr6.eq) goto loc_823FB8F4;
	// slw r9,r28,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 << (r31.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823FB8F4;
	sub_826A2E60(ctx, base);
loc_823FB8F4:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x823fb9f8
	if (!ctx.cr6.gt) goto loc_823FB9F8;
loc_823FB904:
	// lbzx r9,r4,r24
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r24.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823fb9ec
	if (ctx.cr0.eq) goto loc_823FB9EC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x823fb96c
	if (ctx.cr6.gt) goto loc_823FB96C;
	// slw r9,r28,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 << (r31.u8 & 0x3F));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823fb82c
	if (ctx.cr6.gt) goto loc_823FB82C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823fb964
	if (!ctx.cr6.lt) goto loc_823FB964;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823FB95C:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823fb95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB95C;
loc_823FB964:
	// stwx r10,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// b 0x823fb9ec
	goto loc_823FB9EC;
loc_823FB96C:
	// stwx r10,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// subf r6,r31,r9
	ctx.r6.u64 = ctx.r9.u64 - r31.u64;
	// srw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r30.u8 & 0x3F));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// slw r6,r11,r31
	ctx.r6.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// neg r7,r5
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_823FB998:
	// lhz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x823fb9b8
	if (!ctx.cr0.eq) goto loc_823FB9B8;
	// sth r26,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, r26.u16);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sthu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U16(ea, r26.u16);
	ctx.r11.u32 = ea;
	// sth r7,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_823FB9B8:
	// extsh. r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lha r9,0(r8)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 0));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bge 0x823fb9d4
	if (!ctx.cr0.lt) goto loc_823FB9D4;
	// subf r9,r9,r27
	ctx.r9.u64 = r27.u64 - ctx.r9.u64;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// b 0x823fb9d8
	goto loc_823FB9D8;
loc_823FB9D4:
	// subf r8,r9,r27
	ctx.r8.u64 = r27.u64 - ctx.r9.u64;
loc_823FB9D8:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823fb998
	if (!ctx.cr0.eq) goto loc_823FB998;
	// sth r4,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
loc_823FB9EC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r25.s32, ctx.xer);
	// blt cr6,0x823fb904
	if (ctx.cr6.lt) goto loc_823FB904;
loc_823FB9F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823FB9FC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8240F648) {
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
	ctx.lr = 0x8240F650;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240f678
	if (ctx.cr6.eq) goto loc_8240F678;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240F674;
	sub_824094E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8240F678:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8240f6d0
	if (!ctx.cr6.gt) goto loc_8240F6D0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_8240F6A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fbc68
	ctx.lr = 0x8240F6B8;
	sub_823FBC68(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240f6a8
	if (ctx.cr6.lt) goto loc_8240F6A8;
loc_8240F6D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82410720) {
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
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241080c
	if (!ctx.cr6.lt) goto loc_8241080C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20256);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,10980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10980);
	ctx.f13.f64 = double(temp.f32);
loc_82410784:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,22,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,12,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3FF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82410784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410784;
loc_8241080C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410828
	if (ctx.cr6.eq) goto loc_82410828;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82410828;
	sub_825C73B8(ctx, base);
loc_82410828:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410844
	if (ctx.cr6.eq) goto loc_82410844;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82410844;
	sub_82409820(ctx, base);
loc_82410844:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82414588) {
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
	ctx.lr = 0x82414590;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_824145A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824145a8
	if (!ctx.cr6.eq) goto loc_824145A8;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r27,r11,0
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r27,1
	r30.s64 = r27.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444608
	ctx.lr = 0x824145D8;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// beq 0x82414600
	if (ctx.cr0.eq) goto loc_82414600;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82444608
	ctx.lr = 0x824145F4;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// bne 0x8241460c
	if (!ctx.cr0.eq) goto loc_8241460C;
loc_82414600:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x82414658
	goto loc_82414658;
loc_8241460C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269cd20
	ctx.lr = 0x8241461C;
	sub_8269CD20(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x826a4a30
	ctx.lr = 0x82414628;
	sub_826A4A30(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82414634
	if (ctx.cr0.eq) goto loc_82414634;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82414634:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stbx r26,r11,r27
	REX_STORE_U8(ctx.r11.u32 + r27.u32, r26.u8);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x826a1e70
	ctx.lr = 0x8241464C;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82414658
	if (ctx.cr6.eq) goto loc_82414658;
	// stb r26,0(r29)
	REX_STORE_U8(r29.u32 + 0, r26.u8);
loc_82414658:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82418988) {
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
	ctx.lr = 0x82418990;
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82418d5c
	if (!ctx.cr6.eq) goto loc_82418D5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// addi r22,r11,-26856
	r22.s64 = ctx.r11.s64 + -26856;
	// addi r25,r10,23796
	r25.s64 = ctx.r10.s64 + 23796;
	// addi r26,r9,24388
	r26.s64 = ctx.r9.s64 + 24388;
	// addi r23,r8,24336
	r23.s64 = ctx.r8.s64 + 24336;
	// addi r24,r7,-18472
	r24.s64 = ctx.r7.s64 + -18472;
loc_824189D8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824189f0
	if (ctx.cr6.eq) goto loc_824189F0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418d88
	if (ctx.cr6.eq) goto loc_82418D88;
loc_824189F0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418a50
	if (ctx.cr6.eq) goto loc_82418A50;
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,16(r29)
	REX_STORE_U64(r29.u32 + 16, ctx.r10.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,24(r29)
	REX_STORE_U64(r29.u32 + 24, ctx.r10.u64);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// b 0x82418a68
	goto loc_82418A68;
loc_82418A50:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82418A60;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82418e8c
	if (ctx.cr0.lt) goto loc_82418E8C;
loc_82418A68:
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82418c10
	if (!ctx.cr6.eq) goto loc_82418C10;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
loc_82418A7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82418aa0
	if (ctx.cr0.eq) goto loc_82418AA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82418a7c
	if (ctx.cr6.eq) goto loc_82418A7C;
loc_82418AA0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82418c10
	if (!ctx.cr0.eq) goto loc_82418C10;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82418c10
	if (ctx.cr6.eq) goto loc_82418C10;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82418AD8;
	sub_826A2E60(ctx, base);
	// stw r31,3128(r1)
	REX_STORE_U32(ctx.r1.u32 + 3128, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824183c8
	ctx.lr = 0x82418AE4;
	sub_824183C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82418af0
	if (ctx.cr0.eq) goto loc_82418AF0;
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
loc_82418AF0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r28,104(r31)
	REX_STORE_U32(r31.u32 + 104, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82418b68
	if (!ctx.cr6.eq) goto loc_82418B68;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82418b68
	if (!ctx.cr6.eq) goto loc_82418B68;
	// addi r30,r31,640
	r30.s64 = r31.s64 + 640;
	// lwz r4,672(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8241b778
	ctx.lr = 0x82418B20;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82418e8c
	if (ctx.cr0.lt) goto loc_82418E8C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82418b64
	if (ctx.cr6.eq) goto loc_82418B64;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82418b64
	if (ctx.cr6.eq) goto loc_82418B64;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82418b5c
	if (ctx.cr6.eq) goto loc_82418B5C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,1501
	ctx.r5.s64 = 1501;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82418B5C;
	sub_8241A4F0(ctx, base);
loc_82418B5C:
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// b 0x82418b68
	goto loc_82418B68;
loc_82418B64:
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
loc_82418B68:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82418ba0
	if (!ctx.cr6.eq) goto loc_82418BA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8241ab70
	ctx.lr = 0x82418B80;
	sub_8241AB70(ctx, base);
	// stw r28,112(r31)
	REX_STORE_U32(r31.u32 + 112, r28.u32);
	// addi r5,r31,640
	ctx.r5.s64 = r31.s64 + 640;
	// lwz r4,672(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82418B94;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82418e8c
	if (ctx.cr0.lt) goto loc_82418E8C;
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
loc_82418BA0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r10,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r10.u32);
	// beq cr6,0x82418d50
	if (ctx.cr6.eq) goto loc_82418D50;
	// ld r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 640);
	// addi r10,r31,640
	ctx.r10.s64 = r31.s64 + 640;
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// ld r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 648);
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// ld r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 656);
	// std r11,16(r29)
	REX_STORE_U64(r29.u32 + 16, ctx.r11.u64);
	// ld r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 664);
	// std r11,24(r29)
	REX_STORE_U64(r29.u32 + 24, ctx.r11.u64);
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418bf4
	if (ctx.cr6.eq) goto loc_82418BF4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82418BF4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// b 0x82418e8c
	goto loc_82418E8C;
loc_82418C10:
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// beq cr6,0x82418d90
	if (ctx.cr6.eq) goto loc_82418D90;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82418c80
	if (ctx.cr6.eq) goto loc_82418C80;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// bne cr6,0x82418c80
	if (!ctx.cr6.eq) goto loc_82418C80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415868
	ctx.lr = 0x82418C40;
	sub_82415868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82418c80
	if (ctx.cr0.eq) goto loc_82418C80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82418f38
	ctx.lr = 0x82418C5C;
	sub_82418F38(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82418c80
	if (ctx.cr6.eq) goto loc_82418C80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82418d50
	if (!ctx.cr6.eq) goto loc_82418D50;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r27,84(r31)
	REX_STORE_U32(r31.u32 + 84, r27.u32);
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82418e8c
	goto loc_82418E8C;
loc_82418C80:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82418d30
	if (!ctx.cr6.eq) goto loc_82418D30;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82418C98:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82418cbc
	if (ctx.cr0.eq) goto loc_82418CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82418c98
	if (ctx.cr6.eq) goto loc_82418C98;
loc_82418CBC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82418ce8
	if (!ctx.cr0.eq) goto loc_82418CE8;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82418d30
	if (!ctx.cr6.eq) goto loc_82418D30;
	// stw r22,8(r29)
	REX_STORE_U32(r29.u32 + 8, r22.u32);
	// b 0x82418d30
	goto loc_82418D30;
loc_82418CE8:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82418CF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82418d14
	if (ctx.cr0.eq) goto loc_82418D14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82418cf0
	if (ctx.cr6.eq) goto loc_82418CF0;
loc_82418D14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82418d30
	if (!ctx.cr0.eq) goto loc_82418D30;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_82418D30:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bne cr6,0x82418e00
	if (!ctx.cr6.eq) goto loc_82418E00;
loc_82418D50:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824189d8
	if (ctx.cr6.eq) goto loc_824189D8;
loc_82418D5C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82418D64:
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82418e8c
	goto loc_82418E8C;
loc_82418D88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82418d64
	goto loc_82418D64;
loc_82418D90:
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 628);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418db8
	if (ctx.cr6.eq) goto loc_82418DB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1502
	ctx.r5.s64 = 1502;
	// addi r6,r11,24312
	ctx.r6.s64 = ctx.r11.s64 + 24312;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82418DB8;
	sub_8241A4F0(ctx, base);
loc_82418DB8:
	// lwz r30,628(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 628);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418e88
	if (ctx.cr6.eq) goto loc_82418E88;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,628(r31)
	REX_STORE_U32(r31.u32 + 628, ctx.r11.u32);
	// stw r28,92(r30)
	REX_STORE_U32(r30.u32 + 92, r28.u32);
	// bl 0x82415ab0
	ctx.lr = 0x82418DDC;
	sub_82415AB0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x82418DE8;
	sub_823F0350(ctx, base);
	// lwz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 628);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
	// b 0x82418e88
	goto loc_82418E88;
loc_82418E00:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418e88
	if (ctx.cr6.eq) goto loc_82418E88;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82418e88
	if (ctx.cr6.eq) goto loc_82418E88;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82418e70
	if (!ctx.cr6.eq) goto loc_82418E70;
	// lbz r10,9(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 9);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82418e70
	if (!ctx.cr0.eq) goto loc_82418E70;
	// lbz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 8);
	// cmplwi cr6,r10,123
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 123, ctx.xer);
	// bne cr6,0x82418e48
	if (!ctx.cr6.eq) goto loc_82418E48;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82418E48:
	// lbz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 8);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x82418e70
	if (!ctx.cr6.eq) goto loc_82418E70;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82418e70
	if (ctx.cr6.eq) goto loc_82418E70;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82418E70:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418e88
	if (!ctx.cr6.eq) goto loc_82418E88;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82418E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82418E8C:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824466F0) {
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
	// bl 0x82448598
	ctx.lr = 0x8244670C;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82444608
	ctx.lr = 0x8244671C;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8244678c
	if (ctx.cr0.eq) goto loc_8244678C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r10,-7948
	ctx.r10.s64 = ctx.r10.s64 + -7948;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// b 0x82446790
	goto loc_82446790;
loc_8244678C:
	// li r30,0
	r30.s64 = 0;
loc_82446790:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824467a0
	if (!ctx.cr6.eq) goto loc_824467A0;
loc_82446798:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82446968
	goto loc_82446968;
loc_824467A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82446804
	if (ctx.cr6.eq) goto loc_82446804;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824467F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_82446804:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82446830
	if (ctx.cr6.eq) goto loc_82446830;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_82446830:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244685c
	if (ctx.cr6.eq) goto loc_8244685C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_8244685C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82446888
	if (ctx.cr6.eq) goto loc_82446888;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244687C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_82446888:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824468b4
	if (ctx.cr6.eq) goto loc_824468B4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824468A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_824468B4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824468e0
	if (ctx.cr6.eq) goto loc_824468E0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824468D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_824468E0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244690c
	if (ctx.cr6.eq) goto loc_8244690C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_8244690C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82446938
	if (ctx.cr6.eq) goto loc_82446938;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244692C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_82446938:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82446964
	if (ctx.cr6.eq) goto loc_82446964;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446798
	if (ctx.cr0.eq) goto loc_82446798;
loc_82446964:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82446968:
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

DEFINE_REX_FUNC(sub_82458878) {
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
	// neg r10,r5
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r9,15260
	ctx.r4.s64 = ctx.r9.s64 + 15260;
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x824555b8
	ctx.lr = 0x824588A4;
	sub_824555B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245A240) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,16216
	ctx.r4.s64 = ctx.r11.s64 + 16216;
	// bl 0x824555b8
	ctx.lr = 0x8245A25C;
	sub_824555B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245AD00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82455688
	ctx.lr = 0x8245AD18;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245ad74
	if (ctx.cr0.lt) goto loc_8245AD74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,1816(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17208
	ctx.r4.s64 = ctx.r11.s64 + 17208;
	// bl 0x824555b8
	ctx.lr = 0x8245AD34;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245ad74
	if (ctx.cr0.lt) goto loc_8245AD74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245AD44;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245ad74
	if (ctx.cr0.lt) goto loc_8245AD74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14296
	ctx.r4.s64 = ctx.r11.s64 + 14296;
	// bl 0x824555b8
	ctx.lr = 0x8245AD5C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245ad74
	if (ctx.cr0.lt) goto loc_8245AD74;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	REX_STORE_U32(r31.u32 + 1544, ctx.r11.u32);
loc_8245AD74:
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

DEFINE_REX_FUNC(sub_8245EEC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245FB18) {
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
	ctx.lr = 0x8245FB20;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8245fb8c
	if (ctx.cr6.eq) goto loc_8245FB8C;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// stw r6,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245fb8c
	if (!ctx.cr6.gt) goto loc_8245FB8C;
	// li r29,0
	r29.s64 = 0;
loc_8245FB58:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bl 0x8245fb18
	ctx.lr = 0x8245FB78;
	sub_8245FB18(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245fb58
	if (ctx.cr6.lt) goto loc_8245FB58;
loc_8245FB8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824665A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824665e0
	if (ctx.cr6.eq) goto loc_824665E0;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824665e0
	if (ctx.cr6.eq) goto loc_824665E0;
	// lis r11,29760
	ctx.r11.s64 = 1950351360;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824665e0
	if (ctx.cr6.eq) goto loc_824665E0;
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824665e0
	if (ctx.cr6.eq) goto loc_824665E0;
	// lis r11,29744
	ctx.r11.s64 = 1949302784;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824665E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82468388) {
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
	ctx.lr = 0x82468390;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824683d0
	if (ctx.cr0.eq) goto loc_824683D0;
	// lis r23,256
	r23.s64 = 16777216;
	// b 0x8246841c
	goto loc_8246841C;
loc_824683D0:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824683e0
	if (ctx.cr0.eq) goto loc_824683E0;
	// lis r23,512
	r23.s64 = 33554432;
	// b 0x8246841c
	goto loc_8246841C;
loc_824683E0:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824683f0
	if (ctx.cr0.eq) goto loc_824683F0;
	// lis r23,768
	r23.s64 = 50331648;
	// b 0x8246841c
	goto loc_8246841C;
loc_824683F0:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82468400
	if (ctx.cr0.eq) goto loc_82468400;
	// lis r23,3840
	r23.s64 = 251658240;
	// b 0x8246841c
	goto loc_8246841C;
loc_82468400:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82468410
	if (ctx.cr0.eq) goto loc_82468410;
	// lis r23,3584
	r23.s64 = 234881024;
	// b 0x8246841c
	goto loc_8246841C;
loc_82468410:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246841c
	if (ctx.cr0.eq) goto loc_8246841C;
	// lis r23,3328
	r23.s64 = 218103808;
loc_8246841C:
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82468428
	if (ctx.cr0.eq) goto loc_82468428;
	// oris r23,r23,16
	r23.u64 = r23.u64 | 1048576;
loc_82468428:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82468438
	if (ctx.cr6.eq) goto loc_82468438;
	// lis r26,15
	r26.s64 = 983040;
	// b 0x824684cc
	goto loc_824684CC;
loc_82468438:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824684cc
	if (ctx.cr6.eq) goto loc_824684CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r27,r11,13120
	r27.s64 = ctx.r11.s64 + 13120;
loc_82468450:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82468498
	if (ctx.cr6.lt) goto loc_82468498;
	// beq cr6,0x82468490
	if (ctx.cr6.eq) goto loc_82468490;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82468488
	if (ctx.cr6.lt) goto loc_82468488;
	// bne cr6,0x8246849c
	if (!ctx.cr6.eq) goto loc_8246849C;
	// lis r31,8
	r31.s64 = 524288;
	// b 0x8246849c
	goto loc_8246849C;
loc_82468488:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x8246849c
	goto loc_8246849C;
loc_82468490:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x8246849c
	goto loc_8246849C;
loc_82468498:
	// lis r31,1
	r31.s64 = 65536;
loc_8246849C:
	// and. r11,r31,r26
	ctx.r11.u64 = r31.u64 & r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824684bc
	if (ctx.cr0.eq) goto loc_824684BC;
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824684BC;
	sub_82489C30(ctx, base);
loc_824684BC:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// or r26,r31,r26
	r26.u64 = r31.u64 | r26.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82468450
	if (!ctx.cr0.eq) goto loc_82468450;
loc_824684CC:
	// lwz r11,108(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 108);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824684f4
	if (ctx.cr0.eq) goto loc_824684F4;
	// rlwinm. r11,r26,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824684e8
	if (!ctx.cr0.eq) goto loc_824684E8;
	// lis r26,7
	r26.s64 = 458752;
	// b 0x824684f4
	goto loc_824684F4;
loc_824684E8:
	// rlwinm. r11,r26,0,13,15
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824684f4
	if (ctx.cr0.eq) goto loc_824684F4;
	// lis r26,15
	r26.s64 = 983040;
loc_824684F4:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82468548
	if (ctx.cr0.eq) goto loc_82468548;
	// lwz r11,296(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82468548
	if (ctx.cr6.eq) goto loc_82468548;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82468548
	if (ctx.cr6.eq) goto loc_82468548;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
loc_82468520:
	// lwz r8,300(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 300);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r8,r8,6
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(6));
	// lwz r7,296(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 296);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x82468520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82468520;
loc_82468548:
	// or r11,r23,r26
	ctx.r11.u64 = r23.u64 | r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82474650) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824746C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82473f80
	sub_82473F80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824748B0) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474F40) {
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
	ctx.lr = 0x82474F48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82474ff8
	if (ctx.cr0.eq) goto loc_82474FF8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82474fb0
	if (ctx.cr6.eq) goto loc_82474FB0;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82474FB0:
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(r30.u32, 5, ctx.xer);
	// bne cr6,0x82474fd4
	if (!ctx.cr6.eq) goto loc_82474FD4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82474fe4
	if (!ctx.cr6.eq) goto loc_82474FE4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82474fe4
	if (ctx.cr6.eq) goto loc_82474FE4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_82474FD4:
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// bne cr6,0x82474fe4
	if (!ctx.cr6.eq) goto loc_82474FE4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x8247508c
	goto loc_8247508C;
loc_82474FE4:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x8247508c
	goto loc_8247508C;
loc_82474FF8:
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(r30.u32, 11, ctx.xer);
	// bne cr6,0x82475010
	if (!ctx.cr6.eq) goto loc_82475010;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82475094
	if (!ctx.cr6.lt) goto loc_82475094;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82475028
	goto loc_82475028;
loc_82475010:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// bne cr6,0x82475030
	if (!ctx.cr6.eq) goto loc_82475030;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82475094
	if (!ctx.cr6.eq) goto loc_82475094;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82475028:
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82475080
	goto loc_82475080;
loc_82475030:
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(r30.u32, 17, ctx.xer);
	// bne cr6,0x82475054
	if (!ctx.cr6.eq) goto loc_82475054;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82475094
	if (!ctx.cr6.eq) goto loc_82475094;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// b 0x82475080
	goto loc_82475080;
loc_82475054:
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(r30.u32, 18, ctx.xer);
	// bne cr6,0x82475074
	if (!ctx.cr6.eq) goto loc_82475074;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82475094
	if (!ctx.cr6.eq) goto loc_82475094;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82475080
	goto loc_82475080;
loc_82475074:
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// bne cr6,0x82475094
	if (!ctx.cr6.eq) goto loc_82475094;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82475080:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8247508c
	if (ctx.cr6.eq) goto loc_8247508C;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_8247508C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247509c
	goto loc_8247509C;
loc_82475094:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8247509C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8247C200) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8247C208;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247c258
	if (!ctx.cr6.gt) goto loc_8247C258;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8247C220:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r11,r5
	r31.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247c244
	if (!ctx.cr6.eq) goto loc_8247C244;
	// and. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247c244
	if (!ctx.cr0.eq) goto loc_8247C244;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_8247C244:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247c220
	if (ctx.cr6.lt) goto loc_8247C220;
loc_8247C258:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247c2c8
	if (!ctx.cr6.gt) goto loc_8247C2C8;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8247C26C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r30,r9,r5
	r30.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247c2b4
	if (!ctx.cr6.eq) goto loc_8247C2B4;
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247c2b4
	if (!ctx.cr0.eq) goto loc_8247C2B4;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8247c2b4
	if (ctx.cr6.gt) goto loc_8247C2B4;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8247C2B4:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247c26c
	if (ctx.cr6.lt) goto loc_8247C26C;
loc_8247C2C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247c338
	if (!ctx.cr6.gt) goto loc_8247C338;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8247C2E4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r29,r10,r5
	r29.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247c324
	if (!ctx.cr6.eq) goto loc_8247C324;
	// and. r29,r10,r6
	r29.u64 = ctx.r10.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8247c324
	if (!ctx.cr0.eq) goto loc_8247C324;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// beq 0x8247c318
	if (ctx.cr0.eq) goto loc_8247C318;
	// li r30,1
	r30.s64 = 1;
loc_8247C318:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
loc_8247C324:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247c2e4
	if (ctx.cr6.lt) goto loc_8247C2E4;
loc_8247C338:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247c3a4
	if (!ctx.cr6.gt) goto loc_8247C3A4;
loc_8247C348:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r29,r9,r5
	r29.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8247c390
	if (!ctx.cr6.eq) goto loc_8247C390;
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247c390
	if (!ctx.cr0.eq) goto loc_8247C390;
	// lwz r29,24(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8247C390:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247c348
	if (ctx.cr6.lt) goto loc_8247C348;
loc_8247C3A4:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// beq cr6,0x8247c3d0
	if (ctx.cr6.eq) goto loc_8247C3D0;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8247C3D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824944D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82494548
	if (ctx.cr6.lt) goto loc_82494548;
	// beq cr6,0x8249452c
	if (ctx.cr6.eq) goto loc_8249452C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82494508
	if (ctx.cr6.lt) goto loc_82494508;
	// beq cr6,0x82494500
	if (ctx.cr6.eq) goto loc_82494500;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82494500:
	// stfd f1,8(r4)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.f1.u64);
	// b 0x82494564
	goto loc_82494564;
loc_82494508:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-23680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -23680);
	// fadd f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fsel f0,f1,f13,f0
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
loc_82494520:
	// li r10,8
	ctx.r10.s64 = 8;
	// stfiwx f0,r4,r10
	ctx.fpscr.disableFlushMode();
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f0.u32);
	// b 0x82494564
	goto loc_82494564;
loc_8249452C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-23680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -23680);
	// fadd f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fsel f0,f1,f13,f0
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// b 0x82494520
	goto loc_82494520;
loc_82494548:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82494560
	if (!ctx.cr6.eq) goto loc_82494560;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82494560:
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82494564:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82495EA8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// andis. r11,r11,528
	ctx.r11.u64 = ctx.r11.u64 & 34603008;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82495ef4
	if (ctx.cr0.eq) goto loc_82495EF4;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82495eec
	goto loc_82495EEC;
loc_82495ECC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82495f08
	if (ctx.cr6.eq) goto loc_82495F08;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82495f08
	if (ctx.cr6.eq) goto loc_82495F08;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82495f08
	if (ctx.cr6.eq) goto loc_82495F08;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_82495EEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82495ecc
	if (!ctx.cr6.eq) goto loc_82495ECC;
loc_82495EF4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82495EF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82495F08:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// li r5,3064
	ctx.r5.s64 = 3064;
	// addi r6,r11,-11776
	ctx.r6.s64 = ctx.r11.s64 + -11776;
	// bl 0x82494d48
	ctx.lr = 0x82495F1C;
	sub_82494D48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82495ef8
	goto loc_82495EF8;
}

DEFINE_REX_FUNC(sub_8249AA78) {
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
	ctx.lr = 0x8249AA80;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8249ab60
	if (ctx.cr6.eq) goto loc_8249AB60;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249ab60
	if (ctx.cr6.eq) goto loc_8249AB60;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x8249AAC0;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249ab20
	if (ctx.cr0.lt) goto loc_8249AB20;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x8249AAD8;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249ab20
	if (ctx.cr0.lt) goto loc_8249AB20;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8249ab88
	if (ctx.cr6.eq) goto loc_8249AB88;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8249ab58
	if (!ctx.cr0.eq) goto loc_8249AB58;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8249ab0c
	if (ctx.cr0.eq) goto loc_8249AB0C;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8249ab58
	if (!ctx.cr0.eq) goto loc_8249AB58;
loc_8249AB0C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
	// b 0x8249ab88
	goto loc_8249AB88;
loc_8249AB20:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8249AB2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8249ab50
	if (ctx.cr0.eq) goto loc_8249AB50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8249ab2c
	if (ctx.cr6.eq) goto loc_8249AB2C;
loc_8249AB50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8249ab88
	if (ctx.cr0.eq) goto loc_8249AB88;
loc_8249AB58:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8249acbc
	goto loc_8249ACBC;
loc_8249AB60:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r10,r31,0
	ctx.r10.s64 = r31.s64 + 0;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8249ab88
	if (ctx.cr6.eq) goto loc_8249AB88;
	// li r25,2
	r25.s64 = 2;
loc_8249AB88:
	// lwz r28,44(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8249acac
	if (ctx.cr6.eq) goto loc_8249ACAC;
	// rlwinm r26,r26,0,27,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
loc_8249AB9C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8249abc8
	if (ctx.cr6.eq) goto loc_8249ABC8;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x8249abc8
	if (!ctx.cr6.eq) goto loc_8249ABC8;
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8249ABC8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8249abe0
	if (ctx.cr6.eq) goto loc_8249ABE0;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8249aca4
	if (ctx.cr0.eq) goto loc_8249ACA4;
loc_8249ABE0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8249ac9c
	if (ctx.cr6.eq) goto loc_8249AC9C;
	// lwz r29,24(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,48(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 48);
	// beq cr6,0x8249ac04
	if (ctx.cr6.eq) goto loc_8249AC04;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8249ac08
	goto loc_8249AC08;
loc_8249AC04:
	// li r31,0
	r31.s64 = 0;
loc_8249AC08:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249ac44
	if (ctx.cr0.eq) goto loc_8249AC44;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824987e0
	ctx.lr = 0x8249AC28;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249ab58
	if (ctx.cr0.eq) goto loc_8249AB58;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82498390
	ctx.lr = 0x8249AC40;
	sub_82498390(ctx, base);
	// add r25,r3,r25
	r25.u64 = ctx.r3.u64 + r25.u64;
loc_8249AC44:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249ac94
	if (ctx.cr0.eq) goto loc_8249AC94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824956c8
	ctx.lr = 0x8249AC5C;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249ab58
	if (!ctx.cr0.eq) goto loc_8249AB58;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824987e0
	ctx.lr = 0x8249AC78;
	sub_824987E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249ab58
	if (ctx.cr0.eq) goto loc_8249AB58;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82498390
	ctx.lr = 0x8249AC90;
	sub_82498390(ctx, base);
	// add r25,r3,r25
	r25.u64 = ctx.r3.u64 + r25.u64;
loc_8249AC94:
	// lwz r27,12(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 12);
	// b 0x8249aca4
	goto loc_8249ACA4;
loc_8249AC9C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8249ab58
	if (ctx.cr6.eq) goto loc_8249AB58;
loc_8249ACA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8249ab9c
	if (!ctx.cr6.eq) goto loc_8249AB9C;
loc_8249ACAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8249acbc
	if (!ctx.cr6.eq) goto loc_8249ACBC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8249ACBC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824AF658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824AF660;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,708(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 708);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824af6d8
	if (!ctx.cr6.gt) goto loc_824AF6D8;
	// li r30,0
	r30.s64 = 0;
loc_824AF67C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x824AF6A0;
	sub_826A1E70(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x824AF6C4;
	sub_826A1E70(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 708);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824af67c
	if (ctx.cr6.lt) goto loc_824AF67C;
loc_824AF6D8:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824af718
	if (!ctx.cr6.gt) goto loc_824AF718;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824AF6EC:
	// lwz r9,700(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 700);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,56(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// stw r9,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r9.u32);
	// lwz r9,704(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824af6ec
	if (ctx.cr6.lt) goto loc_824AF6EC;
loc_824AF718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824B5978) {
	REX_FUNC_PROLOGUE();
	// lbz r11,110(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 110);
	// lbz r10,111(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 111);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x824b59a8
	if (!ctx.cr6.eq) goto loc_824B59A8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x824b59d8
	if (!ctx.cr6.lt) goto loc_824B59D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824b59d0
	if (ctx.cr6.eq) goto loc_824B59D0;
	// b 0x824b59cc
	goto loc_824B59CC;
loc_824B59A8:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x824b59d8
	if (!ctx.cr6.eq) goto loc_824B59D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b59d8
	if (!ctx.cr6.eq) goto loc_824B59D8;
	// li r11,9
	ctx.r11.s64 = 9;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824b59d0
	if (ctx.cr6.eq) goto loc_824B59D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824B59CC:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_824B59D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824B59D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B8BA0) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x824B8BA8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824b8bb8
	if (!ctx.cr6.eq) goto loc_824B8BB8;
loc_824B8BB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824b8e64
	goto loc_824B8E64;
loc_824B8BB8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b8e60
	if (ctx.cr0.eq) goto loc_824B8E60;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b8e60
	if (ctx.cr6.eq) goto loc_824B8E60;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu r22,r9,r10
	r22.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// ble cr6,0x824b8e60
	if (!ctx.cr6.gt) goto loc_824B8E60;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r30,r1,-256
	r30.s64 = ctx.r1.s64 + -256;
	// lwz r6,124(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,-256
	r28.s64 = ctx.r1.s64 + -256;
	// li r24,0
	r24.s64 = 0;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// stwx r24,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, r24.u32);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,-176
	r29.s64 = ctx.r1.s64 + -176;
	// stwx r24,r8,r30
	REX_STORE_U32(ctx.r8.u32 + r30.u32, r24.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stwx r24,r6,r28
	REX_STORE_U32(ctx.r6.u32 + r28.u32, r24.u32);
	// addi r26,r1,-176
	r26.s64 = ctx.r1.s64 + -176;
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// stwx r11,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r30,r1,-176
	r30.s64 = ctx.r1.s64 + -176;
	// li r28,3
	r28.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r28,r8,r29
	REX_STORE_U32(ctx.r8.u32 + r29.u32, r28.u32);
	// mr r21,r24
	r21.u64 = r24.u64;
	// stwx r11,r6,r26
	REX_STORE_U32(ctx.r6.u32 + r26.u32, ctx.r11.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// stwx r24,r27,r9
	REX_STORE_U32(r27.u32 + ctx.r9.u32, r24.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stwx r7,r27,r30
	REX_STORE_U32(r27.u32 + r30.u32, ctx.r7.u32);
	// beq cr6,0x824b8e60
	if (ctx.cr6.eq) goto loc_824B8E60;
	// lwz r26,8(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r23,r10,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,20(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r25,16(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r26
	r28.u64 = r26.u64;
loc_824B8C7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r27
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r25,r6
	r30.u64 = REX_LOAD_U32(r25.u32 + ctx.r6.u32);
	// beq cr6,0x824b8d24
	if (ctx.cr6.eq) goto loc_824B8D24;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_824B8CA4:
	// lwzx r11,r7,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b8d14
	if (!ctx.cr6.eq) goto loc_824B8D14;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r20,8(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bne cr6,0x824b8d14
	if (!ctx.cr6.eq) goto loc_824B8D14;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r20,12(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bne cr6,0x824b8d14
	if (!ctx.cr6.eq) goto loc_824B8D14;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r20,r10,r6
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r20,4(r20)
	r20.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm. r20,r20,0,23,23
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x824b8d24
	if (ctx.cr0.eq) goto loc_824B8D24;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b8d24
	if (ctx.cr0.eq) goto loc_824B8D24;
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lfd f13,32(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x824b8d24
	if (ctx.cr6.eq) goto loc_824B8D24;
loc_824B8D14:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r23,r7
	ctx.r7.u64 = r23.u64 + ctx.r7.u64;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// blt cr6,0x824b8ca4
	if (ctx.cr6.lt) goto loc_824B8CA4;
loc_824B8D24:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// bne cr6,0x824b8e50
	if (!ctx.cr6.eq) goto loc_824B8E50;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824b8d6c
	if (!ctx.cr6.eq) goto loc_824B8D6C;
	// lbz r10,111(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 111);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824b8d9c
	if (!ctx.cr6.eq) goto loc_824B8D9C;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x824b8d64
	if (!ctx.cr6.eq) goto loc_824B8D64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// ble cr6,0x824b8d64
	if (!ctx.cr6.gt) goto loc_824B8D64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b8bb0
	if (ctx.cr6.eq) goto loc_824B8BB0;
loc_824B8D64:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x824b8d9c
	goto loc_824B8D9C;
loc_824B8D6C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b8d88
	if (ctx.cr0.eq) goto loc_824B8D88;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824b8d88
	if (!ctx.cr0.eq) goto loc_824B8D88;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// b 0x824b8d9c
	goto loc_824B8D9C;
loc_824B8D88:
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b8d98
	if (ctx.cr0.eq) goto loc_824B8D98;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x824b8d9c
	goto loc_824B8D9C;
loc_824B8D98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824B8D9C:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824b8e24
	if (ctx.cr6.eq) goto loc_824B8E24;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b8e24
	if (!ctx.cr6.eq) goto loc_824B8E24;
	// lhz r8,202(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r8,257
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 257, ctx.xer);
	// bne cr6,0x824b8e24
	if (!ctx.cr6.eq) goto loc_824B8E24;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b8e20
	if (ctx.cr6.eq) goto loc_824B8E20;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8e0c
	if (ctx.cr6.eq) goto loc_824B8E0C;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8e0c
	if (ctx.cr6.eq) goto loc_824B8E0C;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8e0c
	if (ctx.cr6.eq) goto loc_824B8E0C;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b8e20
	if (!ctx.cr6.eq) goto loc_824B8E20;
loc_824B8E0C:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// ble cr6,0x824b8e20
	if (!ctx.cr6.gt) goto loc_824B8E20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b8bb0
	if (ctx.cr6.eq) goto loc_824B8BB0;
loc_824B8E20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824B8E24:
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bge cr6,0x824b8e50
	if (!ctx.cr6.lt) goto loc_824B8E50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x824b8e68
	if (ctx.cr6.gt) goto loc_824B8E68;
loc_824B8E50:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r28,r28,r23
	r28.u64 = r28.u64 + r23.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// blt cr6,0x824b8c7c
	if (ctx.cr6.lt) goto loc_824B8C7C;
loc_824B8E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B8E64:
	// b 0x826a1ce8
	return;
loc_824B8E68:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b8bb0
	if (ctx.cr6.eq) goto loc_824B8BB0;
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r29.u32);
	// b 0x824b8bb0
	goto loc_824B8BB0;
}

DEFINE_REX_FUNC(sub_824C8AA8) {
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
	ctx.lr = 0x824C8AB0;
	// stwu r1,-1488(r1)
	ea = -1488 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r29,50
	r29.s64 = 50;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x824c8ad8
	if (ctx.cr6.lt) goto loc_824C8AD8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x824c8afc
	if (ctx.cr6.lt) goto loc_824C8AFC;
loc_824C8AD8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r31,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r31.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C8AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C8AFC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r11,r31,46
	ctx.r11.s64 = r31.s64 + 46;
	// bne cr6,0x824c8b0c
	if (!ctx.cr6.eq) goto loc_824C8B0C;
	// addi r11,r31,50
	ctx.r11.s64 = r31.s64 + 50;
loc_824C8B0C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r24
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824c8b40
	if (!ctx.cr6.eq) goto loc_824C8B40;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r31,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r31.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C8B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C8B40:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8b6c
	if (!ctx.cr6.eq) goto loc_824C8B6C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C8B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_824C8B6C:
	// lwz r26,0(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r25
	r29.u64 = r25.u64;
	// li r22,8
	r22.s64 = 8;
	// stw r27,140(r26)
	REX_STORE_U32(r26.u32 + 140, r27.u32);
loc_824C8B84:
	// lbzx r30,r29,r27
	r30.u64 = REX_LOAD_U8(r29.u32 + r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824c8b9c
	if (ctx.cr6.lt) goto loc_824C8B9C;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x824c8bb8
	if (!ctx.cr6.gt) goto loc_824C8BB8;
loc_824C8B9C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C8BB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C8BB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824c8be0
	if (ctx.cr6.eq) goto loc_824C8BE0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// extsb r10,r29
	ctx.r10.s64 = r29.s8;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824C8BD8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824c8bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C8BD8;
loc_824C8BE0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x824c8b84
	if (!ctx.cr6.gt) goto loc_824C8B84;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r23,r31
	r23.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// li r31,0
	r31.s64 = 0;
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r29,r9
	r29.s64 = ctx.r9.s8;
	// rotlw r28,r25,r29
	r28.u64 = __builtin_rotateleft32(r25.u32, r29.u8 & 0x1F);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824c8c9c
	if (ctx.cr6.eq) goto loc_824C8C9C;
loc_824C8C18:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// bne cr6,0x824c8c5c
	if (!ctx.cr6.eq) goto loc_824C8C5C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_824C8C40:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// beq cr6,0x824c8c40
	if (ctx.cr6.eq) goto loc_824C8C40;
loc_824C8C5C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x824c8c80
	if (ctx.cr6.lt) goto loc_824C8C80;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C8C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C8C80:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r28,r28,1
	r28.u64 = __builtin_rotateleft32(r28.u32, 1);
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824c8c18
	if (!ctx.cr6.eq) goto loc_824C8C18;
loc_824C8C9C:
	// li r8,16
	ctx.r8.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824C8CB4:
	// lbzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824c8cf4
	if (ctx.cr6.eq) goto loc_824C8CF4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r4,r8,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r3,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r3.u32);
	// lbzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,-4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x824c8cf8
	goto loc_824C8CF8;
loc_824C8CF4:
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_824C8CF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824c8cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C8CB4;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,144
	ctx.r3.s64 = r26.s64 + 144;
	// stw r10,68(r26)
	REX_STORE_U32(r26.u32 + 68, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824C8D20;
	sub_826A2E60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r31,7
	r31.s64 = 7;
loc_824C8D2C:
	// lbzx r11,r6,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r27.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824c8da8
	if (ctx.cr6.lt) goto loc_824C8DA8;
	// add r11,r4,r27
	ctx.r11.u64 = ctx.r4.u64 + r27.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// slw r3,r25,r31
	ctx.r3.u64 = r31.u8 & 0x20 ? 0 : (r25.u32 << (r31.u8 & 0x3F));
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_824C8D54:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// ble cr6,0x824c8d8c
	if (!ctx.cr6.gt) goto loc_824C8D8C;
	// addi r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 35;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r8,r26,1168
	ctx.r8.s64 = r26.s64 + 1168;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
loc_824C8D78:
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r30,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824c8d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C8D78;
loc_824C8D8C:
	// lbzx r11,r6,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r27.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x824c8d54
	if (!ctx.cr6.gt) goto loc_824C8D54;
loc_824C8DA8:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bge 0x824c8d2c
	if (!ctx.cr0.lt) goto loc_824C8D2C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x824c8e08
	if (ctx.cr6.eq) goto loc_824C8E08;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x824c8e08
	if (!ctx.cr6.gt) goto loc_824C8E08;
	// addi r30,r27,17
	r30.s64 = r27.s64 + 17;
loc_824C8DCC:
	// lbzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c8de0
	if (ctx.cr6.lt) goto loc_824C8DE0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x824c8dfc
	if (!ctx.cr6.gt) goto loc_824C8DFC;
loc_824C8DE0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r22,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C8DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C8DFC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(r31.s32, r23.s32, ctx.xer);
	// blt cr6,0x824c8dcc
	if (ctx.cr6.lt) goto loc_824C8DCC;
loc_824C8E08:
	// addi r1,r1,1488
	ctx.r1.s64 = ctx.r1.s64 + 1488;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824DB238) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824db264
	if (!ctx.cr6.eq) goto loc_824DB264;
	// bl 0x824db1c8
	ctx.lr = 0x824DB264;
	sub_824DB1C8(ctx, base);
loc_824DB264:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824db294
	if (ctx.cr6.eq) goto loc_824DB294;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_824DB294:
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

DEFINE_REX_FUNC(sub_824DCBA0) {
	REX_FUNC_PROLOGUE();
	// b 0x824dc088
	sub_824DC088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD048) {
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
	ctx.lr = 0x824DD050;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// addi r30,r3,144
	r30.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dd0c0
	if (ctx.cr6.lt) goto loc_824DD0C0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x824dc558
	ctx.lr = 0x824DD088;
	sub_824DC558(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824dd0c0
	if (ctx.cr0.lt) goto loc_824DD0C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x824da8e0
	ctx.lr = 0x824DD0C0;
	sub_824DA8E0(ctx, base);
loc_824DD0C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824DF838) {
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
	// b 0x824df8d0
	goto loc_824DF8D0;
loc_824DF858:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x822cded0
	ctx.lr = 0x824DF864;
	sub_822CDED0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824df8cc
	if (ctx.cr0.eq) goto loc_824DF8CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824df8ec
	if (ctx.cr6.eq) goto loc_824DF8EC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x824df8ac
	if (!ctx.cr6.gt) goto loc_824DF8AC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x824df8a0
	if (ctx.cr6.eq) goto loc_824DF8A0;
	// ble cr6,0x824df8ec
	if (!ctx.cr6.gt) goto loc_824DF8EC;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x824df8ac
	if (!ctx.cr6.gt) goto loc_824DF8AC;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x824df8ec
	if (!ctx.cr6.eq) goto loc_824DF8EC;
	// b 0x824df8cc
	goto loc_824DF8CC;
loc_824DF8A0:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824df8ec
	if (ctx.cr0.eq) goto loc_824DF8EC;
	// b 0x824df8cc
	goto loc_824DF8CC;
loc_824DF8AC:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r9,r10,0,17,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824df8e4
	if (!ctx.cr0.eq) goto loc_824DF8E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,16468
	ctx.r11.u64 = ctx.r11.u64 & 16468;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824df8ec
	if (!ctx.cr0.eq) goto loc_824DF8EC;
loc_824DF8CC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_824DF8D0:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x822cdda0
	ctx.lr = 0x824DF8D8;
	sub_822CDDA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bgt cr6,0x824df858
	if (ctx.cr6.gt) goto loc_824DF858;
	// b 0x824df8ec
	goto loc_824DF8EC;
loc_824DF8E4:
	// oris r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 131072;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_824DF8EC:
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

DEFINE_REX_FUNC(sub_824E5268) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E5C68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824E5C70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e5d50
	if (ctx.cr6.eq) goto loc_824E5D50;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x824e5d14
	if (ctx.cr6.eq) goto loc_824E5D14;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x824e5cb8
	if (ctx.cr6.eq) goto loc_824E5CB8;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x824e5d48
	if (!ctx.cr6.eq) goto loc_824E5D48;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r31,34
	r31.s64 = 34;
	// stw r10,156(r5)
	REX_STORE_U32(ctx.r5.u32 + 156, ctx.r10.u32);
	// b 0x824e5d58
	goto loc_824E5D58;
loc_824E5CB8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r29,r11,512
	r29.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x824e5cd0
	if (!ctx.cr6.lt) goto loc_824E5CD0;
	// bl 0x826b40a0
	ctx.lr = 0x824E5CD0;
	sub_826B40A0(ctx, base);
loc_824E5CD0:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x824e5cdc
	if (ctx.cr6.lt) goto loc_824E5CDC;
	// bl 0x826b40a0
	ctx.lr = 0x824E5CDC;
	sub_826B40A0(ctx, base);
loc_824E5CDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x824e5d0c
	if (!ctx.cr6.eq) goto loc_824E5D0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,160(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 160);
	// li r9,4
	ctx.r9.s64 = 4;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,35
	r31.s64 = r31.s64 + 35;
	// stw r11,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r11.u32);
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// b 0x824e5d58
	goto loc_824E5D58;
loc_824E5D0C:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x824e5d54
	goto loc_824E5D54;
loc_824E5D14:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e5d2c
	if (ctx.cr6.lt) goto loc_824E5D2C;
	// bl 0x826b40a0
	ctx.lr = 0x824E5D2C;
	sub_826B40A0(ctx, base);
loc_824E5D2C:
	// addi r11,r31,41
	ctx.r11.s64 = r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824e5d58
	if (!ctx.cr6.eq) goto loc_824E5D58;
loc_824E5D48:
	// bl 0x826b40a0
	ctx.lr = 0x824E5D4C;
	sub_826B40A0(ctx, base);
	// b 0x824e5d58
	goto loc_824E5D58;
loc_824E5D50:
	// li r11,4
	ctx.r11.s64 = 4;
loc_824E5D54:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_824E5D58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EC2C0) {
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
	ctx.lr = 0x824EC2C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	r29.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// bl 0x824ead48
	ctx.lr = 0x824EC2E0;
	sub_824EAD48(ctx, base);
	// li r27,-1
	r27.s64 = -1;
	// li r26,-1
	r26.s64 = -1;
loc_824EC2E8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// srawi r11,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r11.s64 = r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// beq cr6,0x824ec3a0
	if (ctx.cr6.eq) goto loc_824EC3A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ea888
	ctx.lr = 0x824EC30C;
	sub_824EA888(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x824ec394
	if (ctx.cr6.gt) goto loc_824EC394;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-28296
	ctx.r12.s64 = ctx.r12.s64 + -28296;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32177
	ctx.r12.s64 = -2108751872;
	// nop 
	// addi r12,r12,-15552
	ctx.r12.s64 = ctx.r12.s64 + -15552;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824EC340;
	case 1:
		goto loc_824EC340;
	case 2:
		goto loc_824EC360;
	case 3:
		goto loc_824EC360;
	case 4:
		goto loc_824EC360;
	case 5:
		goto loc_824EC360;
	case 6:
		goto loc_824EC368;
	case 7:
		goto loc_824EC368;
	case 8:
		goto loc_824EC368;
	case 9:
		goto loc_824EC394;
	case 10:
		goto loc_824EC368;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824EC340:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ea888
	ctx.lr = 0x824EC350;
	sub_824EA888(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// bne cr6,0x824ec394
	if (!ctx.cr6.eq) goto loc_824EC394;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824ec394
	goto loc_824EC394;
loc_824EC360:
	// li r28,0
	r28.s64 = 0;
	// b 0x824ec394
	goto loc_824EC394;
loc_824EC368:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ea888
	ctx.lr = 0x824EC378;
	sub_824EA888(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_824EC394:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// bne 0x824ec2e8
	if (!ctx.cr0.eq) goto loc_824EC2E8;
loc_824EC3A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F0CA0) {
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
	ctx.lr = 0x824F0CA8;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-25912
	r29.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f0cf4
	if (!ctx.cr6.eq) goto loc_824F0CF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0CF4;
	sub_824EA978(ctx, base);
loc_824F0CF4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f0d1c
	if (!ctx.cr6.eq) goto loc_824F0D1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-24992
	ctx.r5.s64 = ctx.r11.s64 + -24992;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0D1C;
	sub_824EA978(ctx, base);
loc_824F0D1C:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825a3618
	ctx.lr = 0x824F0D34;
	sub_825A3618(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F6D00) {
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
	ctx.lr = 0x824F6D08;
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x822c91b8
	ctx.lr = 0x824F6D20;
	sub_822C91B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// beq 0x824f6d60
	if (ctx.cr0.eq) goto loc_824F6D60;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,28(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824f6d68
	goto loc_824F6D68;
loc_824F6D60:
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824F6D68:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x824f6dc8
	if (!ctx.cr6.eq) goto loc_824F6DC8;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r5,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xF;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// rlwinm. r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824f6dc4
	if (ctx.cr0.eq) goto loc_824F6DC4;
loc_824F6DA0:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r30,24,28,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bgt cr6,0x824f6db4
	if (ctx.cr6.gt) goto loc_824F6DB4;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_824F6DB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f6da0
	if (ctx.cr6.lt) goto loc_824F6DA0;
loc_824F6DC4:
	// rlwimi r5,r9,20,8,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF00000) | (ctx.r5.u64 & 0xFFFFFFFFFF0FFFFF);
loc_824F6DC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824f5c60
	ctx.lr = 0x824F6DE8;
	sub_824F5C60(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,25328
	ctx.r5.s64 = ctx.r11.s64 + 25328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cee40
	ctx.lr = 0x824F6DFC;
	sub_822CEE40(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r6,r11,25520
	ctx.r6.s64 = ctx.r11.s64 + 25520;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6b38
	ctx.lr = 0x824F6E14;
	sub_824F6B38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824f6ad0
	ctx.lr = 0x824F6E1C;
	sub_824F6AD0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824f5d68
	ctx.lr = 0x824F6E28;
	sub_824F5D68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82501E48) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501ec0
	if (ctx.cr0.eq) goto loc_82501EC0;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_82501E78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82501ec0
	if (ctx.cr6.eq) goto loc_82501EC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82501eb0
	if (ctx.cr6.eq) goto loc_82501EB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x82501E94;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501eb0
	if (ctx.cr0.eq) goto loc_82501EB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,19,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFF0;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ r30.u64;
	// rlwinm. r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501eb8
	if (ctx.cr0.eq) goto loc_82501EB8;
loc_82501EB0:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82501e78
	goto loc_82501E78;
loc_82501EB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82501ec4
	goto loc_82501EC4;
loc_82501EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82501EC4:
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

DEFINE_REX_FUNC(sub_82504DB8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82504e8c
	if (!ctx.cr6.eq) goto loc_82504E8C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7d10
	ctx.lr = 0x82504DF4;
	sub_824F7D10(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82504e80
	if (!ctx.cr6.lt) goto loc_82504E80;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82504E70;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82504e8c
	goto loc_82504E8C;
loc_82504E80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82504E8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82504EBC;
	sub_8269CC20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
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

DEFINE_REX_FUNC(sub_82516808) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82516830:
	// ldx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x82516830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82516830;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825192D0) {
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
	ctx.lr = 0x825192D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82519338
	if (!ctx.cr6.eq) goto loc_82519338;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// lwz r10,192(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82519338
	if (ctx.cr6.gt) goto loc_82519338;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519338
	if (!ctx.cr0.eq) goto loc_82519338;
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519338
	if (!ctx.cr0.eq) goto loc_82519338;
loc_82519330:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82519468
	goto loc_82519468;
loc_82519338:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82518c38
	ctx.lr = 0x8251935C;
	sub_82518C38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519330
	if (!ctx.cr0.eq) goto loc_82519330;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82519378
	if (ctx.cr6.eq) goto loc_82519378;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82519468
	goto loc_82519468;
loc_82519378:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82519430
	if (ctx.cr6.eq) goto loc_82519430;
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8251939C:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// and r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 & ctx.r6.u64;
	// slw r31,r8,r4
	r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r10,r7,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r31,r7,27
	r31.u64 = ctx.r7.u32 & 0x1F;
	// srw r7,r3,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// lwzx r3,r10,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// slw r7,r7,r31
	ctx.r7.u64 = r31.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r31.u8 & 0x3F));
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stwx r7,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// slw r3,r8,r31
	ctx.r3.u64 = r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r31.u8 & 0x3F));
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r6,r10,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// srw r7,r7,r31
	ctx.r7.u64 = r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r31.u8 & 0x3F));
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r7,r7,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// bdnz 0x8251939c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251939C;
loc_82519430:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82518c38
	ctx.lr = 0x82519454;
	sub_82518C38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82519468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82529AE8) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x824f7dc0
	sub_824F7DC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8252DC68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dca0
	if (ctx.cr0.eq) goto loc_8252DCA0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252dca0
	if (ctx.cr0.eq) goto loc_8252DCA0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
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
loc_8252DCA0:
	// b 0x825bcf88
	sub_825BCF88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8252FEC8) {
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
	ctx.lr = 0x8252FED0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ffb8
	if (ctx.cr0.eq) goto loc_8252FFB8;
	// addi r26,r4,44
	r26.s64 = ctx.r4.s64 + 44;
loc_8252FEF8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8252ff40
	if (ctx.cr6.eq) goto loc_8252FF40;
	// addi r9,r27,44
	ctx.r9.s64 = r27.s64 + 44;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8252FF14:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bne cr6,0x8252ff38
	if (!ctx.cr6.eq) goto loc_8252FF38;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8252FF38:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8252ff14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252FF14;
loc_8252FF40:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r9,r30,10
	ctx.r9.s64 = r30.s64 + 10;
	// rlwinm r8,r11,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r10,r8
	r31.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r29,r11,r27
	r29.u64 = ctx.r11.u64 + r27.u64;
loc_8252FF58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252ffa0
	if (ctx.cr6.eq) goto loc_8252FFA0;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r5,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8252FF7C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252FF88;
	sub_8250AD28(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// b 0x8252ff58
	goto loc_8252FF58;
loc_8252FFA0:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8252fef8
	if (ctx.cr6.lt) goto loc_8252FEF8;
loc_8252FFB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8253C510) {
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
	ctx.lr = 0x8253C518;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca8
	ctx.lr = 0x8253C520;
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r3,1236(r1)
	REX_STORE_U32(ctx.r1.u32 + 1236, ctx.r3.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// rlwinm r11,r8,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7F;
	// stw r4,1244(r1)
	REX_STORE_U32(ctx.r1.u32 + 1244, ctx.r4.u32);
	// stw r5,1252(r1)
	REX_STORE_U32(ctx.r1.u32 + 1252, ctx.r5.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8253fb2c
	if (ctx.cr6.eq) goto loc_8253FB2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8253f2a8
	if (ctx.cr6.eq) goto loc_8253F2A8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8253e098
	if (ctx.cr6.eq) goto loc_8253E098;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8253dc7c
	if (ctx.cr6.eq) goto loc_8253DC7C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8253d80c
	if (ctx.cr6.eq) goto loc_8253D80C;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x8253d4e4
	if (!ctx.cr6.eq) goto loc_8253D4E4;
	// bl 0x82534560
	ctx.lr = 0x8253C578;
	sub_82534560(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253d4e8
	if (!ctx.cr0.eq) goto loc_8253D4E8;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8252e3f8
	ctx.lr = 0x8253C594;
	sub_8252E3F8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r20,0
	r20.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r15,0
	r15.s64 = 0;
	// rlwinm. r14,r11,13,29,31
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x8253d288
	if (ctx.cr0.eq) goto loc_8253D288;
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(r25.u32, 0);
	// li r28,0
	r28.s64 = 0;
	// addi r16,r11,44
	r16.s64 = ctx.r11.s64 + 44;
	// li r25,1
	r25.s64 = 1;
loc_8253C5D4:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253c628
	if (ctx.cr6.eq) goto loc_8253C628;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8253C5E8:
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lwzx r9,r28,r9
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8253c620
	if (!ctx.cr6.eq) goto loc_8253C620;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// lwzx r9,r28,r9
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_8253C620:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8253c5e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253C5E8;
loc_8253C628:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253c65c
	if (ctx.cr0.eq) goto loc_8253C65C;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// slw r10,r25,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// or r19,r10,r19
	r19.u64 = ctx.r10.u64 | r19.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8253c65c
	if (ctx.cr6.eq) goto loc_8253C65C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x8253c65c
	if (!ctx.cr6.eq) goto loc_8253C65C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8253C65C:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r29,r11,25,25,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,125
	ctx.cr6.compare<uint32_t>(r29.u32, 125, ctx.xer);
	// bne cr6,0x8253c684
	if (!ctx.cr6.eq) goto loc_8253C684;
	// slw r11,r25,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// or r31,r11,r31
	r31.u64 = ctx.r11.u64 | r31.u64;
	// b 0x8253c6dc
	goto loc_8253C6DC;
loc_8253C684:
	// cmplwi cr6,r29,124
	ctx.cr6.compare<uint32_t>(r29.u32, 124, ctx.xer);
	// bne cr6,0x8253c69c
	if (!ctx.cr6.eq) goto loc_8253C69C;
	// slw r11,r25,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// b 0x8253c6dc
	goto loc_8253C6DC;
loc_8253C69C:
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r16.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253c6b4
	if (ctx.cr6.eq) goto loc_8253C6B4;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// b 0x8253c6dc
	goto loc_8253C6DC;
loc_8253C6B4:
	// bl 0x8252e918
	ctx.lr = 0x8253C6B8;
	sub_8252E918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253c6dc
	if (ctx.cr0.eq) goto loc_8253C6DC;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bne cr6,0x8253c6d0
	if (!ctx.cr6.eq) goto loc_8253C6D0;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x8253c6dc
	goto loc_8253C6DC;
loc_8253C6D0:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// bne cr6,0x8253c6dc
	if (!ctx.cr6.eq) goto loc_8253C6DC;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
loc_8253C6DC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// blt cr6,0x8253c5d4
	if (ctx.cr6.lt) goto loc_8253C5D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8253cac4
	if (!ctx.cr6.eq) goto loc_8253CAC4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8253cac4
	if (ctx.cr6.eq) goto loc_8253CAC4;
	// add r11,r21,r20
	ctx.r11.u64 = r21.u64 + r20.u64;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x8253cac4
	if (!ctx.cr6.eq) goto loc_8253CAC4;
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// andc r11,r27,r11
	ctx.r11.u64 = r27.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r24,r11,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r24,r10
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253cac4
	if (!ctx.cr0.eq) goto loc_8253CAC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
loc_8253C74C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c7ac
	if (ctx.cr6.eq) goto loc_8253C7AC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r4,r8,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// andc r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// subfic r9,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// slw r29,r8,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// slw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// andc r4,r22,r29
	ctx.r4.u64 = r22.u64 & ~r29.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r22,r4,r9
	r22.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// b 0x8253c74c
	goto loc_8253C74C;
loc_8253C7AC:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bge cr6,0x8253c7e8
	if (!ctx.cr6.lt) goto loc_8253C7E8;
	// subfic r10,r30,4
	ctx.xer.ca = r30.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - r30.u64;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8253C7C8:
	// srw r10,r6,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r5,r8,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// andc r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// bdnz 0x8253c7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253C7C8;
loc_8253C7E8:
	// addi r27,r1,336
	r27.s64 = ctx.r1.s64 + 336;
	// lwz r3,1236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwzx r4,r24,r27
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + r27.u32);
	// bl 0x8250ac20
	ctx.lr = 0x8253C7FC;
	sub_8250AC20(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r25,2
	r25.s64 = 2;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r28,r1,496
	r28.s64 = ctx.r1.s64 + 496;
loc_8253C810:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253c88c
	if (ctx.cr6.eq) goto loc_8253C88C;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// andc r10,r22,r10
	ctx.r10.u64 = r22.u64 & ~ctx.r10.u64;
	// slw r9,r29,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// or r22,r10,r9
	r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x825b8558
	ctx.lr = 0x8253C860;
	sub_825B8558(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8253c870
	if (!ctx.cr6.lt) goto loc_8253C870;
	// li r25,1
	r25.s64 = 1;
loc_8253C870:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// b 0x8253c810
	goto loc_8253C810;
loc_8253C88C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// lwz r3,1236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r4,r24,r27
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + r27.u32);
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x8253C8AC;
	sub_8252DEA8(ctx, base);
	// or r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 | r25.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8253cac4
	if (ctx.cr6.eq) goto loc_8253CAC4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r25,4
	r25.s64 = 4;
	// li r27,4
	r27.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lfs f13,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8253c910
	if (ctx.cr6.eq) goto loc_8253C910;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_8253C8DC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8253c8f0
	if (!ctx.cr6.eq) goto loc_8253C8F0;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// b 0x8253c8fc
	goto loc_8253C8FC;
loc_8253C8F0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8253c8fc
	if (!ctx.cr6.eq) goto loc_8253C8FC;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8253C8FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8253c8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253C8DC;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// bne cr6,0x8253c92c
	if (!ctx.cr6.eq) goto loc_8253C92C;
loc_8253C910:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bge cr6,0x8253c92c
	if (!ctx.cr6.lt) goto loc_8253C92C;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// mr r25,r26
	r25.u64 = r26.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_8253C92C:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// bne cr6,0x8253c950
	if (!ctx.cr6.eq) goto loc_8253C950;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bge cr6,0x8253c950
	if (!ctx.cr6.lt) goto loc_8253C950;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// mr r27,r26
	r27.u64 = r26.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_8253C950:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// beq cr6,0x8253cac4
	if (ctx.cr6.eq) goto loc_8253CAC4;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// beq cr6,0x8253cac4
	if (ctx.cr6.eq) goto loc_8253CAC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,-21476
	ctx.r11.s64 = ctx.r11.s64 + -21476;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r29,-1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x8253c99c
	if (ctx.cr6.eq) goto loc_8253C99C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8253C980:
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r29,r10
	ctx.r10.u64 = r29.u64 & ~ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r29,r10,r9
	r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bdnz 0x8253c980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253C980;
loc_8253C99C:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x8253c9ac
	if (ctx.cr0.eq) goto loc_8253C9AC;
	// li r28,2
	r28.s64 = 2;
loc_8253C9AC:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r26,1236(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825bdf00
	ctx.lr = 0x8253C9D0;
	sub_825BDF00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ac20
	ctx.lr = 0x8253C9EC;
	sub_8250AC20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253ca30
	if (ctx.cr6.eq) goto loc_8253CA30;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8253CA0C:
	// li r9,3
	ctx.r9.s64 = 3;
	// slw r8,r27,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// bdnz 0x8253ca0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253CA0C;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bge cr6,0x8253ca58
	if (!ctx.cr6.lt) goto loc_8253CA58;
loc_8253CA30:
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.u64 = static_cast<uint64_t>(4) - ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8253CA3C:
	// li r10,3
	ctx.r10.s64 = 3;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bdnz 0x8253ca3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253CA3C;
loc_8253CA58:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ac20
	ctx.lr = 0x8253CA6C;
	sub_8250AC20(ctx, base);
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825299e8
	ctx.lr = 0x8253CA8C;
	sub_825299E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8253CA98;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82537760
	ctx.lr = 0x8253CAC0;
	sub_82537760(ctx, base);
	// b 0x8253eab0
	goto loc_8253EAB0;
loc_8253CAC4:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(r19.u32, 1, ctx.xer);
	// bne cr6,0x8253cb5c
	if (!ctx.cr6.eq) goto loc_8253CB5C;
	// lwz r4,336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x8253caf8
	if (!ctx.cr6.eq) goto loc_8253CAF8;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x8253caf8
	if (!ctx.cr6.eq) goto loc_8253CAF8;
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8253cb60
	if (!ctx.cr6.eq) goto loc_8253CB60;
	// b 0x8253cafc
	goto loc_8253CAFC;
loc_8253CAF8:
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
loc_8253CAFC:
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253CB0C:
	// li r8,3
	ctx.r8.s64 = 3;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bdnz 0x8253cb0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253CB0C;
	// lwz r31,1236(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r7,272(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac20
	ctx.lr = 0x8253CB40;
	sub_8250AC20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825380f0
	ctx.lr = 0x8253CB54;
	sub_825380F0(ctx, base);
	// lwz r3,336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253CB5C:
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
loc_8253CB60:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8253d288
	if (ctx.cr6.eq) goto loc_8253D288;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8253cc90
	if (ctx.cr6.eq) goto loc_8253CC90;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r16
	r27.u64 = r16.u64;
loc_8253CB78:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253cc7c
	if (!ctx.cr0.eq) goto loc_8253CC7C;
	// lwz r24,12(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x8253cc7c
	if (!ctx.cr6.eq) goto loc_8253CC7C;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r16
	r28.u64 = r16.u64;
loc_8253CBA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253cc6c
	if (!ctx.cr0.eq) goto loc_8253CC6C;
	// lwz r23,12(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8253cc6c
	if (!ctx.cr6.eq) goto loc_8253CC6C;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r21,1244(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
loc_8253CBD0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253cbfc
	if (ctx.cr6.eq) goto loc_8253CBFC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253cbec
	if (ctx.cr6.eq) goto loc_8253CBEC;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x8253cbf4
	if (!ctx.cr6.eq) goto loc_8253CBF4;
loc_8253CBEC:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253cbd0
	goto loc_8253CBD0;
loc_8253CBF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253cc00
	goto loc_8253CC00;
loc_8253CBFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253CC00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253cc6c
	if (!ctx.cr0.eq) goto loc_8253CC6C;
	// lwz r25,44(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 44);
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 48);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f7010
	ctx.lr = 0x8253CC18;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253cc6c
	if (ctx.cr0.eq) goto loc_8253CC6C;
	// lwz r22,1236(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// rlwinm r5,r31,27,30,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x3;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82580638
	ctx.lr = 0x8253CC34;
	sub_82580638(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825321e0
	ctx.lr = 0x8253CC54;
	sub_825321E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne 0x8253cd00
	if (!ctx.cr0.eq) goto loc_8253CD00;
	// beq cr6,0x8253d4e4
	if (ctx.cr6.eq) goto loc_8253D4E4;
loc_8253CC6C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// blt cr6,0x8253cba4
	if (ctx.cr6.lt) goto loc_8253CBA4;
loc_8253CC7C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r14
	ctx.cr6.compare<uint32_t>(r26.u32, r14.u32, ctx.xer);
	// blt cr6,0x8253cb78
	if (ctx.cr6.lt) goto loc_8253CB78;
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
loc_8253CC90:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8253d288
	if (ctx.cr6.eq) goto loc_8253D288;
	// lwz r11,1236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r11,664(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 664);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8253d288
	if (ctx.cr6.lt) goto loc_8253D288;
	// li r16,0
	r16.s64 = 0;
loc_8253CCAC:
	// addi r17,r30,44
	r17.s64 = r30.s64 + 44;
	// li r18,0
	r18.s64 = 0;
	// mr r19,r17
	r19.u64 = r17.u64;
loc_8253CCB8:
	// cmplw cr6,r18,r14
	ctx.cr6.compare<uint32_t>(r18.u32, r14.u32, ctx.xer);
	// bge cr6,0x8253d280
	if (!ctx.cr6.lt) goto loc_8253D280;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r21,12(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8253d048
	if (!ctx.cr6.eq) goto loc_8253D048;
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 4);
loc_8253CCDC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253ce9c
	if (ctx.cr6.eq) goto loc_8253CE9C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ccf8
	if (ctx.cr6.eq) goto loc_8253CCF8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8253ce94
	if (!ctx.cr6.eq) goto loc_8253CE94;
loc_8253CCF8:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253ccdc
	goto loc_8253CCDC;
loc_8253CD00:
	// bne cr6,0x8253cd7c
	if (!ctx.cr6.eq) goto loc_8253CD7C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82509448
	ctx.lr = 0x8253CD0C;
	sub_82509448(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r9,r11,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253cd70
	if (ctx.cr0.eq) goto loc_8253CD70;
	// addi r16,r3,44
	r16.s64 = ctx.r3.s64 + 44;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8253CD28:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8253cd58
	if (!ctx.cr0.eq) goto loc_8253CD58;
	// lwz r23,12(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 384, ctx.xer);
	// bne cr6,0x8253cd58
	if (!ctx.cr6.eq) goto loc_8253CD58;
	// lwz r10,44(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 44);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8253cd68
	if (ctx.cr6.eq) goto loc_8253CD68;
loc_8253CD58:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8253cd28
	if (ctx.cr6.lt) goto loc_8253CD28;
loc_8253CD68:
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8253cd7c
	if (ctx.cr6.lt) goto loc_8253CD7C;
loc_8253CD70:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x8253CD7C;
	sub_824E4368(ctx, base);
loc_8253CD7C:
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825348d8
	ctx.lr = 0x8253CD94;
	sub_825348D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8250c958
	ctx.lr = 0x8253CDAC;
	sub_8250C958(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
loc_8253CDB4:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253ce18
	if (!ctx.cr6.lt) goto loc_8253CE18;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x8253ce0c
	if (!ctx.cr6.eq) goto loc_8253CE0C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253cdec
	goto loc_8253CDEC;
loc_8253CDE4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253CDEC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253cde4
	if (!ctx.cr6.eq) goto loc_8253CDE4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_8253CE0C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8253cdb4
	goto loc_8253CDB4;
loc_8253CE18:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253ce60
	if (!ctx.cr6.eq) goto loc_8253CE60;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8253ce3c
	goto loc_8253CE3C;
loc_8253CE34:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8253CE3C:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8253ce34
	if (!ctx.cr6.eq) goto loc_8253CE34;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8253CE60;
	sub_824F7A20(ctx, base);
loc_8253CE60:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8253CE68;
	sub_8250AED8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253CE74;
	sub_825335B8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253CE80;
	sub_825335B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253CE8C;
	sub_825335B8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253CE94:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253cea0
	goto loc_8253CEA0;
loc_8253CE9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253CEA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d048
	if (!ctx.cr0.eq) goto loc_8253D048;
	// rlwinm r11,r9,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bge cr6,0x8253d048
	if (!ctx.cr6.lt) goto loc_8253D048;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8253d048
	if (ctx.cr6.eq) goto loc_8253D048;
	// mr r20,r17
	r20.u64 = r17.u64;
loc_8253CEC4:
	// lwz r23,0(r20)
	r23.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d038
	if (!ctx.cr0.eq) goto loc_8253D038;
	// lwz r24,12(r23)
	r24.u64 = REX_LOAD_U32(r23.u32 + 12);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 384, ctx.xer);
	// bne cr6,0x8253d038
	if (!ctx.cr6.eq) goto loc_8253D038;
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d038
	if (!ctx.cr0.eq) goto loc_8253D038;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8253CEFC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253cf28
	if (ctx.cr6.eq) goto loc_8253CF28;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253cf18
	if (ctx.cr6.eq) goto loc_8253CF18;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8253cf20
	if (!ctx.cr6.eq) goto loc_8253CF20;
loc_8253CF18:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253cefc
	goto loc_8253CEFC;
loc_8253CF20:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253cf2c
	goto loc_8253CF2C;
loc_8253CF28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253CF2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d038
	if (!ctx.cr0.eq) goto loc_8253D038;
	// lwz r28,44(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwz r4,48(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f7010
	ctx.lr = 0x8253CF44;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d038
	if (ctx.cr0.eq) goto loc_8253D038;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d038
	if (!ctx.cr0.eq) goto loc_8253D038;
	// li r25,0
	r25.s64 = 0;
	// addi r27,r21,44
	r27.s64 = r21.s64 + 44;
	// addi r26,r21,48
	r26.s64 = r21.s64 + 48;
loc_8253CF64:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8253d020
	if (!ctx.cr6.eq) goto loc_8253D020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d020
	if (!ctx.cr0.eq) goto loc_8253D020;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x8253d020
	if (!ctx.cr6.eq) goto loc_8253D020;
	// lwz r15,1236(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8253CFC4;
	sub_825C1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8253CFD8;
	sub_8250AC70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825321e0
	ctx.lr = 0x8253CFF8;
	sub_825321E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d054
	if (!ctx.cr0.eq) goto loc_8253D054;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d020
	if (!ctx.cr0.eq) goto loc_8253D020;
	// li r6,1
	ctx.r6.s64 = 1;
	// rotlwi r3,r15,0
	ctx.r3.u64 = __builtin_rotateleft32(r15.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253D020;
	sub_825C2288(ctx, base);
loc_8253D020:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r26,r26,-4
	r26.s64 = r26.s64 + -4;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// blt cr6,0x8253cf64
	if (ctx.cr6.lt) goto loc_8253CF64;
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
loc_8253D038:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r22,r14
	ctx.cr6.compare<uint32_t>(r22.u32, r14.u32, ctx.xer);
	// blt cr6,0x8253cec4
	if (ctx.cr6.lt) goto loc_8253CEC4;
loc_8253D048:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// b 0x8253ccb8
	goto loc_8253CCB8;
loc_8253D054:
	// lwz r27,1244(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne cr6,0x8253d0bc
	if (!ctx.cr6.eq) goto loc_8253D0BC;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82509448
	ctx.lr = 0x8253D070;
	sub_82509448(ctx, base);
	// stw r3,1244(r1)
	REX_STORE_U32(ctx.r1.u32 + 1244, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253d0b0
	if (ctx.cr0.eq) goto loc_8253D0B0;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r14,r10,13,29,31
	r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// bne 0x8253d0a4
	if (!ctx.cr0.eq) goto loc_8253D0A4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253D0A4;
	sub_825C2288(ctx, base);
loc_8253D0A4:
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// li r16,1
	r16.s64 = 1;
	// b 0x8253ccac
	goto loc_8253CCAC;
loc_8253D0B0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x8253D0BC;
	sub_824E4368(ctx, base);
loc_8253D0BC:
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825348d8
	ctx.lr = 0x8253D0D4;
	sub_825348D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825bba68
	ctx.lr = 0x8253D0E4;
	sub_825BBA68(ctx, base);
	// lis r12,-17410
	ctx.r12.s64 = -1140981760;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r12,r12,32739
	ctx.r12.u64 = ctx.r12.u64 | 32739;
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82503360
	ctx.lr = 0x8253D10C;
	sub_82503360(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r5,r11,27,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x82580638
	ctx.lr = 0x8253D120;
	sub_82580638(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503360
	ctx.lr = 0x8253D130;
	sub_82503360(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x8254fb38
	ctx.lr = 0x8253D140;
	sub_8254FB38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254fbd8
	ctx.lr = 0x8253D150;
	sub_8254FBD8(ctx, base);
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
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
	// bl 0x8250ac70
	ctx.lr = 0x8253D198;
	sub_8250AC70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// bl 0x8250c958
	ctx.lr = 0x8253D1AC;
	sub_8250C958(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8253D1B4;
	sub_8250AED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8253D1BC;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8250aed8
	ctx.lr = 0x8253D1D0;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq 0x8253d248
	if (ctx.cr0.eq) goto loc_8253D248;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d224
	if (!ctx.cr0.eq) goto loc_8253D224;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d224
	if (ctx.cr0.eq) goto loc_8253D224;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8253d230
	if (!ctx.cr6.gt) goto loc_8253D230;
loc_8253D224:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8253D22C;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253D230:
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
loc_8253D248:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253D254;
	sub_825335B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253D260;
	sub_825335B8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253D26C;
	sub_825335B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253D278;
	sub_825335B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253D280:
	// clrlwi. r11,r16,24
	ctx.r11.u64 = r16.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541b8c
	if (!ctx.cr0.eq) goto loc_82541B8C;
loc_8253D288:
	// lwz r11,1244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r26,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e4
	if (!ctx.cr0.eq) goto loc_8253D4E4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r17,1244(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// li r23,0
	r23.s64 = 0;
	// addi r21,r17,4
	r21.s64 = r17.s64 + 4;
	// li r18,1
	r18.s64 = 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// lwz r31,4(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 4);
loc_8253D2B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253d328
	if (ctx.cr6.eq) goto loc_8253D328;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253d320
	if (ctx.cr6.eq) goto loc_8253D320;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d320
	if (ctx.cr0.eq) goto loc_8253D320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8253D2DC;
	sub_824F6FC8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8253D2EC:
	// slw r10,r18,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// and. r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253d314
	if (ctx.cr0.eq) goto loc_8253D314;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// slw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r7,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8253D314:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8253d2ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253D2EC;
loc_8253D320:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8253d2b4
	goto loc_8253D2B4;
loc_8253D328:
	// addi r27,r17,44
	r27.s64 = r17.s64 + 44;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// rlwinm r28,r26,13,29,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 13) & 0x7;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_8253D338:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bge cr6,0x8253d3a0
	if (!ctx.cr6.lt) goto loc_8253D3A0;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_8253D350:
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// bge cr6,0x8253d394
	if (!ctx.cr6.lt) goto loc_8253D394;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8253d388
	if (!ctx.cr6.eq) goto loc_8253D388;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// slw r4,r18,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r31,r10,r9
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | r31.u64;
	// stwx r4,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8253D388:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8253d350
	goto loc_8253D350;
loc_8253D394:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8253d338
	goto loc_8253D338;
loc_8253D3A0:
	// li r30,-1
	r30.s64 = -1;
	// li r25,2
	r25.s64 = 2;
loc_8253D3A8:
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8253d47c
	if (ctx.cr6.eq) goto loc_8253D47C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8253D3BC:
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r7,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// slw r6,r30,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// and r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ctx.r4.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// srw r3,r8,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8253D3FC:
	// slw r6,r18,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r4.u8 & 0x3F));
	// and. r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8253d464
	if (ctx.cr0.eq) goto loc_8253D464;
	// addi r6,r8,3
	ctx.r6.s64 = ctx.r8.s64 + 3;
	// lwzx r24,r9,r10
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r20,r1,112
	r20.s64 = ctx.r1.s64 + 112;
	// rlwinm r22,r8,29,3,29
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// and r24,r5,r24
	r24.u64 = ctx.r5.u64 & r24.u64;
	// slw r6,r25,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r22,r22,r20
	r22.u64 = REX_LOAD_U32(r22.u32 + r20.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// clrlwi r20,r8,27
	r20.u64 = ctx.r8.u32 & 0x1F;
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & r22.u64;
	// slw r19,r30,r20
	r19.u64 = r20.u8 & 0x20 ? 0 : (r30.u32 << (r20.u8 & 0x3F));
	// and r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 & r19.u64;
	// srw r24,r24,r11
	r24.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r6,r6,r20
	ctx.r6.u64 = r20.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r20.u8 & 0x3F));
	// or r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 | r24.u64;
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r24.u32, ctx.xer);
	// beq cr6,0x8253d464
	if (ctx.cr6.eq) goto loc_8253D464;
	// lwzx r29,r9,r10
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 | r29.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// stwx r6,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8253D464:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8253d3fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253D3FC;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8253d3bc
	if (!ctx.cr0.eq) goto loc_8253D3BC;
loc_8253D47C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d3a8
	if (!ctx.cr0.eq) goto loc_8253D3A8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8253d4e4
	if (ctx.cr6.eq) goto loc_8253D4E4;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8253D494:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r7.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// srw. r24,r10,r7
	r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8253d4f8
	if (ctx.cr0.eq) goto loc_8253D4F8;
	// rlwinm r10,r26,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0xF;
	// subf. r31,r24,r10
	r31.u64 = ctx.r10.u64 - r24.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8253d504
	if (!ctx.cr0.eq) goto loc_8253D504;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// blt cr6,0x8253d494
	if (ctx.cr6.lt) goto loc_8253D494;
loc_8253D4E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253D4E8:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x8253D4F4;
	// b 0x826a1cd0
	return;
loc_8253D4F8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,1236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// bl 0x824e4368
	ctx.lr = 0x8253D504;
	sub_824E4368(ctx, base);
loc_8253D504:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lwz r19,1236(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r24,32
	ctx.r9.u64 = r24.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825309c8
	ctx.lr = 0x8253D540;
	sub_825309C8(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r31,32
	ctx.r9.u64 = r31.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825309c8
	ctx.lr = 0x8253D57C;
	sub_825309C8(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// li r20,3
	r20.s64 = 3;
loc_8253D598:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253d60c
	if (!ctx.cr6.lt) goto loc_8253D60C;
	// slw r11,r18,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r18.u32 << (r28.u8 & 0x3F));
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// and. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d5dc
	if (ctx.cr0.eq) goto loc_8253D5DC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82503360
	ctx.lr = 0x8253D5C4;
	sub_82503360(ctx, base);
	// slw r11,r20,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// slw r10,r29,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r29.u32 << (r31.u8 & 0x3F));
	// andc r11,r22,r11
	ctx.r11.u64 = r22.u64 & ~ctx.r11.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// or r22,r11,r10
	r22.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8253d5fc
	goto loc_8253D5FC;
loc_8253D5DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82503360
	ctx.lr = 0x8253D5E8;
	sub_82503360(ctx, base);
	// slw r11,r20,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// slw r10,r30,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// andc r11,r23,r11
	ctx.r11.u64 = r23.u64 & ~ctx.r11.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r23,r11,r10
	r23.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8253D5FC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x8253d598
	goto loc_8253D598;
loc_8253D60C:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8253D610:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253d738
	if (ctx.cr6.eq) goto loc_8253D738;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253d724
	if (ctx.cr6.eq) goto loc_8253D724;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d6c4
	if (ctx.cr0.eq) goto loc_8253D6C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8253D63C;
	sub_824F6FC8(ctx, base);
	// and. r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq 0x8253d688
	if (ctx.cr0.eq) goto loc_8253D688;
	// beq cr6,0x8253d668
	if (ctx.cr6.eq) goto loc_8253D668;
loc_8253D658:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253d658
	if (!ctx.cr6.eq) goto loc_8253D658;
loc_8253D668:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r26)
	REX_STORE_U32(r26.u32 + 4, r31.u32);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x8253d6b8
	goto loc_8253D6B8;
loc_8253D688:
	// beq cr6,0x8253d69c
	if (ctx.cr6.eq) goto loc_8253D69C;
loc_8253D68C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253d68c
	if (!ctx.cr6.eq) goto loc_8253D68C;
loc_8253D69C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r25)
	REX_STORE_U32(r25.u32 + 4, r31.u32);
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_8253D6B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a18
	ctx.lr = 0x8253D6C0;
	sub_82503A18(ctx, base);
	// b 0x8253d718
	goto loc_8253D718;
loc_8253D6C4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82503da0
	ctx.lr = 0x8253D6D4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253D6E0;
	sub_8250AD28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253d6f8
	goto loc_8253D6F8;
loc_8253D6F0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253D6F8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253d6f0
	if (!ctx.cr6.eq) goto loc_8253D6F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r25)
	REX_STORE_U32(r25.u32 + 4, r31.u32);
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_8253D718:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825335b8
	ctx.lr = 0x8253D724;
	sub_825335B8(ctx, base);
loc_8253D724:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253d610
	if (!ctx.cr6.eq) goto loc_8253D610;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x8253d610
	goto loc_8253D610;
loc_8253D738:
	// mr r30,r17
	r30.u64 = r17.u64;
loc_8253D73C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253d7a8
	if (ctx.cr6.eq) goto loc_8253D7A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d794
	if (!ctx.cr0.eq) goto loc_8253D794;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253D760;
	sub_8250AD28(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253d774
	goto loc_8253D774;
loc_8253D76C:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8253D774:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253d76c
	if (!ctx.cr6.eq) goto loc_8253D76C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// stw r25,16(r31)
	REX_STORE_U32(r31.u32 + 16, r25.u32);
loc_8253D794:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253d73c
	if (!ctx.cr6.eq) goto loc_8253D73C;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x8253d73c
	goto loc_8253D73C;
loc_8253D7A8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82548eb8
	ctx.lr = 0x8253D7B4;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// bl 0x82548eb8
	ctx.lr = 0x8253D7CC;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253D7E4;
	sub_825335B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253D7F0;
	sub_825335B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r5,652(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 652);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253D804;
	sub_825C2288(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253D80C:
	// lwz r7,52(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 52);
	// lwz r31,44(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r27,48(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lwz r23,12(r7)
	r23.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8253dd74
	if (!ctx.cr6.eq) goto loc_8253DD74;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253dd74
	if (!ctx.cr0.eq) goto loc_8253DD74;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_8253D83C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253d860
	if (ctx.cr6.eq) goto loc_8253D860;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253d858
	if (ctx.cr6.eq) goto loc_8253D858;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x8253dc7c
	if (!ctx.cr6.eq) goto loc_8253DC7C;
loc_8253D858:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8253d83c
	goto loc_8253D83C;
loc_8253D860:
	// oris r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 67108864;
	// rlwinm r22,r11,6,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// stw r10,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r10.u32);
	// rlwinm r21,r8,6,31,31
	r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	// mr r24,r30
	r24.u64 = r30.u64;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// lwz r11,652(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 652);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253d8b8
	if (!ctx.cr0.eq) goto loc_8253D8B8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8253d8b8
	if (ctx.cr0.eq) goto loc_8253D8B8;
loc_8253D898:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253d8b8
	if (!ctx.cr0.eq) goto loc_8253D8B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253d898
	if (!ctx.cr6.eq) goto loc_8253D898;
loc_8253D8B8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,44(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 44);
	// rlwinm r29,r11,27,30,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r7,r1,440
	ctx.r7.s64 = ctx.r1.s64 + 440;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r1,456
	ctx.r6.s64 = ctx.r1.s64 + 456;
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// bl 0x825ba3a0
	ctx.lr = 0x8253D8E4;
	sub_825BA3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// lwz r3,48(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 48);
	// addi r6,r1,468
	ctx.r6.s64 = ctx.r1.s64 + 468;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8253D908;
	sub_825BA3A0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r6,440(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r5,456(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x8250acc8
	ctx.lr = 0x8253D91C;
	sub_8250ACC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r6,416(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r5,468(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x8250acc8
	ctx.lr = 0x8253D934;
	sub_8250ACC8(ctx, base);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82533238
	ctx.lr = 0x8253D984;
	sub_82533238(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253dbc8
	if (ctx.cr0.eq) goto loc_8253DBC8;
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm. r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d9a4
	if (ctx.cr0.eq) goto loc_8253D9A4;
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm. r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253dbc8
	if (!ctx.cr0.eq) goto loc_8253DBC8;
loc_8253D9A4:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825355f8
	ctx.lr = 0x8253D9C8;
	sub_825355F8(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8253d9f0
	if (ctx.cr6.lt) goto loc_8253D9F0;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8253d9f4
	if (!ctx.cr6.gt) goto loc_8253D9F4;
loc_8253D9F0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8253D9F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253da0c
	if (ctx.cr0.eq) goto loc_8253DA0C;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ad88
	ctx.lr = 0x8253DA08;
	sub_8250AD88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8253DA0C:
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82533008
	ctx.lr = 0x8253DA30;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253dba8
	if (ctx.cr0.eq) goto loc_8253DBA8;
	// lwz r25,208(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm. r11,r25,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253da50
	if (ctx.cr0.eq) goto loc_8253DA50;
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm. r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253dba8
	if (!ctx.cr0.eq) goto loc_8253DBA8;
loc_8253DA50:
	// lwz r28,1244(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r27,1236(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,28(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825355f8
	ctx.lr = 0x8253DA7C;
	sub_825355F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253da98
	if (ctx.cr6.eq) goto loc_8253DA98;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b470
	ctx.lr = 0x8253DA98;
	sub_8250B470(ctx, base);
loc_8253DA98:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825311e8
	ctx.lr = 0x8253DAB0;
	sub_825311E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_8253DAB8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253db18
	if (ctx.cr6.eq) goto loc_8253DB18;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253db04
	if (!ctx.cr0.eq) goto loc_8253DB04;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253dae4
	goto loc_8253DAE4;
loc_8253DADC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8253DAE4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253dadc
	if (!ctx.cr6.eq) goto loc_8253DADC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
loc_8253DB04:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253dab8
	if (!ctx.cr6.eq) goto loc_8253DAB8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x8253dab8
	goto loc_8253DAB8;
loc_8253DB18:
	// rlwinm. r5,r25,17,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 17) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8253db2c
	if (ctx.cr0.eq) goto loc_8253DB2C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8252ffc8
	ctx.lr = 0x8253DB2C;
	sub_8252FFC8(ctx, base);
loc_8253DB2C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253db44
	if (ctx.cr0.eq) goto loc_8253DB44;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8253DB44:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253db58
	if (!ctx.cr0.eq) goto loc_8253DB58;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
loc_8253DB58:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253db6c
	if (!ctx.cr0.eq) goto loc_8253DB6C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_8253DB6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82537760
	ctx.lr = 0x8253DB9C;
	sub_82537760(ctx, base);
loc_8253DB9C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82541b88
	goto loc_82541B88;
loc_8253DBA8:
	// lwz r20,1236(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r25,1244(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// beq cr6,0x8253dbc8
	if (ctx.cr6.eq) goto loc_8253DBC8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250b470
	ctx.lr = 0x8253DBC8;
	sub_8250B470(ctx, base);
loc_8253DBC8:
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253dbe0
	goto loc_8253DBE0;
loc_8253DBD8:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8253DBE0:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8253dbd8
	if (!ctx.cr6.eq) goto loc_8253DBD8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8253DC04;
	sub_824F7A20(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253dc1c
	goto loc_8253DC1C;
loc_8253DC14:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8253DC1C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8253dc14
	if (!ctx.cr6.eq) goto loc_8253DC14;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8253DC40;
	sub_824F7A20(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82536980
	ctx.lr = 0x8253DC54;
	sub_82536980(ctx, base);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253dc68
	if (!ctx.cr0.eq) goto loc_8253DC68;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
loc_8253DC68:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253dc7c
	if (!ctx.cr0.eq) goto loc_8253DC7C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
loc_8253DC7C:
	// lwz r23,1236(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r24,r25,4
	r24.s64 = r25.s64 + 4;
loc_8253DC84:
	// lwz r25,0(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253d4e4
	if (ctx.cr6.eq) goto loc_8253D4E4;
	// lwz r4,16(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253e084
	if (ctx.cr6.eq) goto loc_8253E084;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8253e07c
	if (ctx.cr6.eq) goto loc_8253E07C;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x8253e07c
	if (ctx.cr6.eq) goto loc_8253E07C;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bne cr6,0x8253e084
	if (!ctx.cr6.eq) goto loc_8253E084;
	// rlwinm. r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x8253dce8
	if (ctx.cr0.eq) goto loc_8253DCE8;
	// addi r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 + 44;
loc_8253DCCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// beq cr6,0x8253dce8
	if (ctx.cr6.eq) goto loc_8253DCE8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8253dccc
	if (ctx.cr6.lt) goto loc_8253DCCC;
loc_8253DCE8:
	// addi r27,r4,4
	r27.s64 = ctx.r4.s64 + 4;
loc_8253DCEC:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253e084
	if (ctx.cr6.eq) goto loc_8253E084;
	// lwz r28,16(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8253dd60
	if (ctx.cr6.eq) goto loc_8253DD60;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8253dd60
	if (!ctx.cr6.eq) goto loc_8253DD60;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253dd60
	if (ctx.cr0.eq) goto loc_8253DD60;
	// li r31,0
	r31.s64 = 0;
loc_8253DD28:
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x8253dd48
	if (!ctx.cr6.eq) goto loc_8253DD48;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253DD48;
	sub_825335B8(ctx, base);
loc_8253DD48:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8253dd28
	if (ctx.cr6.lt) goto loc_8253DD28;
loc_8253DD60:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8253dcec
	if (!ctx.cr6.eq) goto loc_8253DCEC;
	// addi r27,r30,8
	r27.s64 = r30.s64 + 8;
	// b 0x8253dcec
	goto loc_8253DCEC;
loc_8253DD74:
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bne cr6,0x8253dc7c
	if (!ctx.cr6.eq) goto loc_8253DC7C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253dc7c
	if (!ctx.cr0.eq) goto loc_8253DC7C;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_8253DD8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253ddb8
	if (ctx.cr6.eq) goto loc_8253DDB8;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dda8
	if (ctx.cr6.eq) goto loc_8253DDA8;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8253ddb0
	if (!ctx.cr6.eq) goto loc_8253DDB0;
loc_8253DDA8:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253dd8c
	goto loc_8253DD8C;
loc_8253DDB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253ddbc
	goto loc_8253DDBC;
loc_8253DDB8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8253DDBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253dc7c
	if (!ctx.cr0.eq) goto loc_8253DC7C;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r31,44(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r30,48(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 48);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r8,44(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 44);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,48(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82533238
	ctx.lr = 0x8253DE10;
	sub_82533238(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253dc7c
	if (ctx.cr0.eq) goto loc_8253DC7C;
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,240(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// lwz r8,664(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 664);
	// rlwinm r11,r9,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8253dc7c
	if (ctx.cr6.gt) goto loc_8253DC7C;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825396e8
	ctx.lr = 0x8253DE7C;
	sub_825396E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253dc7c
	if (ctx.cr0.eq) goto loc_8253DC7C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82531120
	ctx.lr = 0x8253DE9C;
	sub_82531120(ctx, base);
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253dec4
	if (ctx.cr6.eq) goto loc_8253DEC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82503400
	ctx.lr = 0x8253DEB8;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253DEC4;
	sub_8250AD28(ctx, base);
loc_8253DEC4:
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253dee8
	if (ctx.cr6.eq) goto loc_8253DEE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82503400
	ctx.lr = 0x8253DEDC;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253DEE8;
	sub_8250AD28(ctx, base);
loc_8253DEE8:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_8253DEEC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253df5c
	if (ctx.cr6.eq) goto loc_8253DF5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253df48
	if (!ctx.cr0.eq) goto loc_8253DF48;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253df14
	if (ctx.cr0.eq) goto loc_8253DF14;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253df48
	if (ctx.cr0.eq) goto loc_8253DF48;
loc_8253DF14:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253df28
	goto loc_8253DF28;
loc_8253DF20:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8253DF28:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253df20
	if (!ctx.cr6.eq) goto loc_8253DF20;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_8253DF48:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253deec
	if (!ctx.cr6.eq) goto loc_8253DEEC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x8253deec
	goto loc_8253DEEC;
loc_8253DF5C:
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_8253DF60:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dfd0
	if (ctx.cr6.eq) goto loc_8253DFD0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253dfbc
	if (!ctx.cr0.eq) goto loc_8253DFBC;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253df88
	if (ctx.cr0.eq) goto loc_8253DF88;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253dfbc
	if (ctx.cr0.eq) goto loc_8253DFBC;
loc_8253DF88:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253df9c
	goto loc_8253DF9C;
loc_8253DF94:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8253DF9C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253df94
	if (!ctx.cr6.eq) goto loc_8253DF94;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_8253DFBC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253df60
	if (!ctx.cr6.eq) goto loc_8253DF60;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x8253df60
	goto loc_8253DF60;
loc_8253DFD0:
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm. r5,r11,17,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8253dfe8
	if (ctx.cr0.eq) goto loc_8253DFE8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8252ffc8
	ctx.lr = 0x8253DFE8;
	sub_8252FFC8(ctx, base);
loc_8253DFE8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,52(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 52);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8253DFF8;
	sub_8250AB60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82530a10
	ctx.lr = 0x8253E010;
	sub_82530A10(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253e02c
	if (ctx.cr0.eq) goto loc_8253E02C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8253E02C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8253E034;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82537760
	ctx.lr = 0x8253E05C;
	sub_82537760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253E068;
	sub_825335B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253E074;
	sub_825335B8(ctx, base);
	// lwz r27,1236(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// b 0x8253db9c
	goto loc_8253DB9C;
loc_8253E07C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253E084;
	sub_825335B8(ctx, base);
loc_8253E084:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8253dc84
	if (!ctx.cr6.eq) goto loc_8253DC84;
	// addi r24,r25,8
	r24.s64 = r25.s64 + 8;
	// b 0x8253dc84
	goto loc_8253DC84;
loc_8253E098:
	// lwz r19,44(r25)
	r19.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r16,52(r25)
	r16.u64 = REX_LOAD_U32(r25.u32 + 52);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r15,48(r25)
	r15.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r22,0
	r22.s64 = 0;
	// lwz r23,12(r19)
	r23.u64 = REX_LOAD_U32(r19.u32 + 12);
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lwz r26,12(r16)
	r26.u64 = REX_LOAD_U32(r16.u32 + 12);
	// lfs f28,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f28.f64 = double(temp.f32);
	// addi r28,r23,8
	r28.s64 = r23.s64 + 8;
	// lwz r14,12(r15)
	r14.u64 = REX_LOAD_U32(r15.u32 + 12);
	// lfs f30,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f30.f64 = double(temp.f32);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8253eb1c
	if (!ctx.cr6.eq) goto loc_8253EB1C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r24,r22
	r24.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm. r25,r11,7,29,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r21,3
	r21.s64 = 3;
	// li r20,1
	r20.s64 = 1;
	// beq 0x8253e150
	if (ctx.cr0.eq) goto loc_8253E150;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8253E10C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r10,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x8253E128;
	sub_825B8558(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x8253e144
	if (ctx.cr6.eq) goto loc_8253E144;
	// slw r11,r21,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r21.u32 << (r31.u8 & 0x3F));
	// andc r11,r24,r11
	ctx.r11.u64 = r24.u64 & ~ctx.r11.u64;
	// slw r10,r20,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// or r24,r11,r10
	r24.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8253E144:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bne 0x8253e10c
	if (!ctx.cr0.eq) goto loc_8253E10C;
loc_8253E150:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r27,57
	r27.s64 = 57;
	// lwz r10,8(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8253e284
	if (!ctx.cr6.lt) goto loc_8253E284;
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253e1bc
	if (ctx.cr6.eq) goto loc_8253E1BC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
loc_8253E184:
	// srw r9,r24,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8253e19c
	if (!ctx.cr6.eq) goto loc_8253E19C;
	// stfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8253e1b0
	goto loc_8253E1B0;
loc_8253E19C:
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// stfs f28,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// andc r9,r30,r9
	ctx.r9.u64 = r30.u64 & ~ctx.r9.u64;
	// slw r8,r20,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// or r30,r9,r8
	r30.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_8253E1B0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8253e184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253E184;
loc_8253E1BC:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// lwz r17,1236(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r5,r1,992
	ctx.r5.s64 = ctx.r1.s64 + 992;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825bdf00
	ctx.lr = 0x8253E1DC;
	sub_825BDF00(ctx, base);
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253e1f8
	goto loc_8253E1F8;
loc_8253E1F0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253E1F8:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bne cr6,0x8253e1f0
	if (!ctx.cr6.eq) goto loc_8253E1F0;
	// lwz r8,8(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// mr r15,r16
	r15.u64 = r16.u64;
	// stw r14,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r14.u32);
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r14,r26
	r14.u64 = r26.u64;
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// mr r24,r30
	r24.u64 = r30.u64;
	// stw r19,4(r31)
	REX_STORE_U32(r31.u32 + 4, r19.u32);
	// subf r29,r29,r25
	r29.u64 = r25.u64 - r29.u64;
	// stw r31,12(r19)
	REX_STORE_U32(r19.u32 + 12, r31.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwimi r11,r7,7,31,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r11,r27,7,19,29
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0x1FFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE003);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 52);
	// lwz r10,48(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 48);
	// stw r11,48(r18)
	REX_STORE_U32(r18.u32 + 48, ctx.r11.u32);
	// stw r10,52(r18)
	REX_STORE_U32(r18.u32 + 52, ctx.r10.u32);
	// bl 0x82528fd8
	ctx.lr = 0x8253E268;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253E280;
	sub_825335B8(ctx, base);
	// b 0x8253e28c
	goto loc_8253E28C;
loc_8253E284:
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r17,1236(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
loc_8253E28C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253e498
	if (ctx.cr6.eq) goto loc_8253E498;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8253E29C:
	// srw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253e2b8
	if (!ctx.cr0.eq) goto loc_8253E2B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// blt cr6,0x8253e29c
	if (ctx.cr6.lt) goto loc_8253E29C;
loc_8253E2B8:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x8253e498
	if (!ctx.cr6.lt) goto loc_8253E498;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8253E2C4:
	// srw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8253e2e4
	if (!ctx.cr6.eq) goto loc_8253E2E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// blt cr6,0x8253e2c4
	if (ctx.cr6.lt) goto loc_8253E2C4;
loc_8253E2E4:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x8253e498
	if (!ctx.cr6.lt) goto loc_8253E498;
	// subf r11,r29,r25
	ctx.r11.u64 = r25.u64 - r29.u64;
	// stfs f30,512(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// stfs f30,516(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f30,520(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stfs f30,524(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_8253E338:
	// srw r4,r24,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r3,r21,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi. r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// andc r3,r29,r3
	ctx.r3.u64 = r29.u64 & ~ctx.r3.u64;
	// bne 0x8253e36c
	if (!ctx.cr0.eq) goto loc_8253E36C;
	// slw r4,r21,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r6.u8 & 0x3F));
	// slw r31,r9,r6
	r31.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// andc r4,r30,r4
	ctx.r4.u64 = r30.u64 & ~ctx.r4.u64;
	// slw r26,r5,r10
	r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r30,r4,r31
	r30.u64 = ctx.r4.u64 | r31.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// b 0x8253e39c
	goto loc_8253E39C;
loc_8253E36C:
	// slw r4,r21,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// stfsu f28,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// not r4,r4
	ctx.r4.u64 = ~ctx.r4.u64;
	// slw r31,r9,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r30,r30,r4
	r30.u64 = r30.u64 & ctx.r4.u64;
	// slw r23,r20,r11
	r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// and r4,r28,r4
	ctx.r4.u64 = r28.u64 & ctx.r4.u64;
	// slw r26,r8,r10
	r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r30,r30,r31
	r30.u64 = r30.u64 | r31.u64;
	// or r28,r4,r23
	r28.u64 = ctx.r4.u64 | r23.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8253E39C:
	// or r29,r3,r26
	r29.u64 = ctx.r3.u64 | r26.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8253e338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253E338;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825bdf00
	ctx.lr = 0x8253E3C8;
	sub_825BDF00(ctx, base);
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253e3e4
	goto loc_8253E3E4;
loc_8253E3DC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253E3E4:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bne cr6,0x8253e3dc
	if (!ctx.cr6.eq) goto loc_8253E3DC;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r23,r31
	r23.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// stw r19,4(r31)
	REX_STORE_U32(r31.u32 + 4, r19.u32);
	// stw r31,12(r19)
	REX_STORE_U32(r19.u32 + 12, r31.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwimi r11,r27,7,31,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r11,r27,7,19,29
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0x1FFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE003);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// bl 0x82528e18
	ctx.lr = 0x8253E424;
	sub_82528E18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82528e18
	ctx.lr = 0x8253E430;
	sub_82528E18(ctx, base);
	// lwz r30,4(r18)
	r30.u64 = REX_LOAD_U32(r18.u32 + 4);
loc_8253E434:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253e468
	if (ctx.cr6.eq) goto loc_8253E468;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e460
	if (ctx.cr6.eq) goto loc_8253E460;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253e460
	if (ctx.cr0.eq) goto loc_8253E460;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82503a18
	ctx.lr = 0x8253E460;
	sub_82503A18(ctx, base);
loc_8253E460:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8253e434
	goto loc_8253E434;
loc_8253E468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8253E470;
	sub_82528FD8(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253E490;
	sub_825335B8(ctx, base);
	// mr r24,r28
	r24.u64 = r28.u64;
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8253E498:
	// lwz r5,0(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r7,r5,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r10,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// beq cr6,0x8253e4d4
	if (ctx.cr6.eq) goto loc_8253E4D4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8253E4B8:
	// srw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253e4d4
	if (!ctx.cr0.eq) goto loc_8253E4D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// blt cr6,0x8253e4b8
	if (ctx.cr6.lt) goto loc_8253E4B8;
loc_8253E4D4:
	// mr. r27,r11
	r27.u64 = ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x8253e518
	if (ctx.cr0.eq) goto loc_8253E518;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8253E500:
	// slw r4,r21,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// slw r3,r9,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r4,r26,r4
	ctx.r4.u64 = r26.u64 & ~ctx.r4.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// or r26,r4,r3
	r26.u64 = ctx.r4.u64 | ctx.r3.u64;
	// bdnz 0x8253e500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253E500;
loc_8253E518:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x8253e55c
	if (!ctx.cr6.lt) goto loc_8253E55C;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// subf r9,r11,r25
	ctx.r9.u64 = r25.u64 - ctx.r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8253E53C:
	// slw r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// bdnz 0x8253e53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253E53C;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8253e564
	if (!ctx.cr6.eq) goto loc_8253E564;
loc_8253E55C:
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8253e584
	if (ctx.cr6.eq) goto loc_8253E584;
loc_8253E564:
	// rlwimi r5,r8,5,19,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1FE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r5,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r5.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwimi r11,r26,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253E584;
	sub_825335B8(ctx, base);
loc_8253E584:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8253eab8
	if (ctx.cr6.eq) goto loc_8253EAB8;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// beq cr6,0x8253eac0
	if (ctx.cr6.eq) goto loc_8253EAC0;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253e720
	if (!ctx.cr0.eq) goto loc_8253E720;
	// addi r29,r18,4
	r29.s64 = r18.s64 + 4;
	// li r30,-1
	r30.s64 = -1;
loc_8253E5A8:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253e720
	if (ctx.cr6.eq) goto loc_8253E720;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253e70c
	if (ctx.cr6.eq) goto loc_8253E70C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253e70c
	if (ctx.cr0.eq) goto loc_8253E70C;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,28(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8253e70c
	if (!ctx.cr6.eq) goto loc_8253E70C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x8253e70c
	if (ctx.cr6.eq) goto loc_8253E70C;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x8253e70c
	if (ctx.cr6.eq) goto loc_8253E70C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8253E5FC;
	sub_824F6FC8(ctx, base);
	// slw r11,r20,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (r20.u32 << (r27.u8 & 0x3F));
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253e678
	if (!ctx.cr6.lt) goto loc_8253E678;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8252f1c0
	ctx.lr = 0x8253E620;
	sub_8252F1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253e70c
	if (ctx.cr0.eq) goto loc_8253E70C;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253e70c
	if (!ctx.cr0.eq) goto loc_8253E70C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r11,r10,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r4,r11,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// bl 0x82503a18
	ctx.lr = 0x8253E650;
	sub_82503A18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253e66c
	goto loc_8253E66C;
loc_8253E664:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253E66C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253e664
	if (!ctx.cr6.eq) goto loc_8253E664;
	// b 0x8253e6f4
	goto loc_8253E6F4;
loc_8253E678:
	// slw r11,r30,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (r30.u32 << (r27.u8 & 0x3F));
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253e70c
	if (!ctx.cr6.eq) goto loc_8253E70C;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8252f1c0
	ctx.lr = 0x8253E6A0;
	sub_8252F1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253e70c
	if (ctx.cr0.eq) goto loc_8253E70C;
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253e70c
	if (!ctx.cr0.eq) goto loc_8253E70C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r11,r10,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm r4,r11,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// bl 0x82503a18
	ctx.lr = 0x8253E6D0;
	sub_82503A18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253e6ec
	goto loc_8253E6EC;
loc_8253E6E4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253E6EC:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253e6e4
	if (!ctx.cr6.eq) goto loc_8253E6E4;
loc_8253E6F4:
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
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_8253E70C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253e5a8
	if (!ctx.cr6.eq) goto loc_8253E5A8;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x8253e5a8
	goto loc_8253E5A8;
loc_8253E720:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253eb2c
	if (!ctx.cr0.eq) goto loc_8253EB2C;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253e780
	if (ctx.cr6.eq) goto loc_8253E780;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8253E748:
	// srw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8253e778
	if (!ctx.cr6.eq) goto loc_8253E778;
	// srw r9,r26,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r21,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// andc r8,r28,r8
	ctx.r8.u64 = r28.u64 & ~ctx.r8.u64;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8253E778:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8253e748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253E748;
loc_8253E780:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r5,12(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82503da0
	ctx.lr = 0x8253E790;
	sub_82503DA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r5,12(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8253E7B0;
	sub_82503DA0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// rlwinm r11,r29,20,9,11
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x700000;
	// rlwinm r8,r10,0,27,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r8,r8,0,7,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82532998
	ctx.lr = 0x8253E7FC;
	sub_82532998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8253e8bc
	if (!ctx.cr0.eq) goto loc_8253E8BC;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825355f8
	ctx.lr = 0x8253E828;
	sub_825355F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8253e844
	goto loc_8253E844;
loc_8253E83C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8253E844:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253e83c
	if (!ctx.cr6.eq) goto loc_8253E83C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8253E868;
	sub_824F7A20(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8253e880
	goto loc_8253E880;
loc_8253E878:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8253E880:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8253e878
	if (!ctx.cr6.eq) goto loc_8253E878;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8253E8A4;
	sub_824F7A20(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825380f0
	ctx.lr = 0x8253E8B8;
	sub_825380F0(ctx, base);
	// b 0x8253d4e4
	goto loc_8253D4E4;
loc_8253E8BC:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253eb28
	if (!ctx.cr0.eq) goto loc_8253EB28;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253eb28
	if (!ctx.cr0.eq) goto loc_8253EB28;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82509448
	ctx.lr = 0x8253E8DC;
	sub_82509448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253eb28
	if (!ctx.cr0.eq) goto loc_8253EB28;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82509448
	ctx.lr = 0x8253E8EC;
	sub_82509448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82509448
	ctx.lr = 0x8253E8F8;
	sub_82509448(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8253ea44
	if (!ctx.cr6.eq) goto loc_8253EA44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253eb28
	if (ctx.cr6.eq) goto loc_8253EB28;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8253E90C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825c3328
	ctx.lr = 0x8253E920;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253eb28
	if (ctx.cr0.eq) goto loc_8253EB28;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8252e3f8
	ctx.lr = 0x8253E93C;
	sub_8252E3F8(ctx, base);
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253e9a4
	if (ctx.cr6.eq) goto loc_8253E9A4;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8253E950:
	// srw r11,r24,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r24.u32 >> (r28.u8 & 0x3F));
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// beq 0x8253e98c
	if (ctx.cr0.eq) goto loc_8253E98C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_8253E98C:
	// bl 0x825ba3a0
	ctx.lr = 0x8253E990;
	sub_825BA3A0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x8253e950
	if (ctx.cr6.lt) goto loc_8253E950;
loc_8253E9A4:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rlwinm r4,r9,13,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// stw r22,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8252e460
	ctx.lr = 0x8253E9F0;
	sub_8252E460(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253eb28
	if (ctx.cr0.eq) goto loc_8253EB28;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253eb28
	if (!ctx.cr6.eq) goto loc_8253EB28;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825c4b00
	ctx.lr = 0x8253EA18;
	sub_825C4B00(ctx, base);
	// addi r30,r18,4
	r30.s64 = r18.s64 + 4;
loc_8253EA1C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253ea9c
	if (ctx.cr6.eq) goto loc_8253EA9C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ea88
	if (ctx.cr6.eq) goto loc_8253EA88;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253ea5c
	goto loc_8253EA5C;
loc_8253EA44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8253eb28
	if (!ctx.cr6.eq) goto loc_8253EB28;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x8253e90c
	goto loc_8253E90C;
loc_8253EA54:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253EA5C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253ea54
	if (!ctx.cr6.eq) goto loc_8253EA54;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// bl 0x82503a18
	ctx.lr = 0x8253EA88;
	sub_82503A18(ctx, base);
loc_8253EA88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253ea1c
	if (!ctx.cr6.eq) goto loc_8253EA1C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8253ea1c
	goto loc_8253EA1C;
loc_8253EA9C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r17)
	ctx.r5.u64 = REX_LOAD_U32(r17.u32 + 652);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253EAB0;
	sub_825C2288(ctx, base);
loc_8253EAB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253EAB8:
	// mr r31,r16
	r31.u64 = r16.u64;
	// b 0x8253eac4
	goto loc_8253EAC4;
loc_8253EAC0:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_8253EAC4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82530ae0
	ctx.lr = 0x8253EADC;
	sub_82530AE0(ctx, base);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253eaf8
	if (ctx.cr0.eq) goto loc_8253EAF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8253EAF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,228
	ctx.r6.s64 = 228;
	// rlwinm r7,r11,29,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82537760
	ctx.lr = 0x8253EB18;
	sub_82537760(ctx, base);
	// b 0x82541b8c
	goto loc_82541B8C;
loc_8253EB1C:
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r17,1236(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// b 0x8253eb2c
	goto loc_8253EB2C;
loc_8253EB28:
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8253EB2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8253eb44
	if (ctx.cr6.eq) goto loc_8253EB44;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8253ec04
	if (!ctx.cr6.eq) goto loc_8253EC04;
loc_8253EB44:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253ec04
	if (!ctx.cr0.eq) goto loc_8253EC04;
	// lwz r31,48(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 48);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r30,44(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b8fb0
	ctx.lr = 0x8253EB64;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ebc0
	if (ctx.cr0.eq) goto loc_8253EBC0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b8fb0
	ctx.lr = 0x8253EB78;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ebc0
	if (ctx.cr0.eq) goto loc_8253EBC0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82530ae0
	ctx.lr = 0x8253EB98;
	sub_82530AE0(ctx, base);
loc_8253EB98:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ebb4
	if (ctx.cr0.eq) goto loc_8253EBB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8253EBB4:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// b 0x8253fb84
	goto loc_8253FB84;
loc_8253EBC0:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b8fb0
	ctx.lr = 0x8253EBCC;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ec04
	if (ctx.cr0.eq) goto loc_8253EC04;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b8fb0
	ctx.lr = 0x8253EBE0;
	sub_825B8FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ec04
	if (ctx.cr0.eq) goto loc_8253EC04;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82530bb0
	ctx.lr = 0x8253EC00;
	sub_82530BB0(ctx, base);
	// b 0x8253eb98
	goto loc_8253EB98;
loc_8253EC04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r21,r22
	r21.u64 = r22.u64;
	// lfd f29,3728(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_8253EC10:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,1664
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1664, ctx.xer);
	// bne cr6,0x8253efa4
	if (!ctx.cr6.eq) goto loc_8253EFA4;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8253efa4
	if (!ctx.cr6.eq) goto loc_8253EFA4;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253efa4
	if (!ctx.cr0.eq) goto loc_8253EFA4;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm. r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253efa4
	if (!ctx.cr0.eq) goto loc_8253EFA4;
	// lwz r30,44(r14)
	r30.u64 = REX_LOAD_U32(r14.u32 + 44);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8253efa4
	if (!ctx.cr6.eq) goto loc_8253EFA4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r31,r11,18,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253efa4
	if (!ctx.cr6.eq) goto loc_8253EFA4;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8253EC80;
	sub_824F6FC8(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
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
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253efa4
	if (!ctx.cr6.eq) goto loc_8253EFA4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825c4930
	ctx.lr = 0x8253ECC8;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253efa4
	if (ctx.cr0.eq) goto loc_8253EFA4;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82531af0
	ctx.lr = 0x8253ECDC;
	sub_82531AF0(ctx, base);
	// clrlwi. r28,r21,24
	r28.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8253ed28
	if (ctx.cr0.eq) goto loc_8253ED28;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ed28
	if (ctx.cr0.eq) goto loc_8253ED28;
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
loc_8253ED00:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8253ed14
	if (!ctx.cr6.eq) goto loc_8253ED14;
	// stfd f29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, f29.u64);
	// b 0x8253ed18
	goto loc_8253ED18;
loc_8253ED14:
	// stfd f31,0(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 0, f31.u64);
loc_8253ED18:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8253ed00
	if (ctx.cr6.lt) goto loc_8253ED00;
loc_8253ED28:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r20,r22
	r20.u64 = r22.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ed68
	if (ctx.cr0.eq) goto loc_8253ED68;
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
loc_8253ED48:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8253ed58
	if (ctx.cr6.eq) goto loc_8253ED58;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_8253ED58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8253ed48
	if (ctx.cr6.lt) goto loc_8253ED48;
loc_8253ED68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r31,r11,7,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x82531af0
	ctx.lr = 0x8253ED7C;
	sub_82531AF0(ctx, base);
	// mr r25,r22
	r25.u64 = r22.u64;
	// mr r23,r22
	r23.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253edb4
	if (ctx.cr6.eq) goto loc_8253EDB4;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
loc_8253ED94:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8253edb4
	if (!ctx.cr6.eq) goto loc_8253EDB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8253ed94
	if (ctx.cr6.lt) goto loc_8253ED94;
loc_8253EDB4:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bge cr6,0x8253edec
	if (!ctx.cr6.lt) goto loc_8253EDEC;
	// rlwinm r9,r25,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8253EDCC:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x8253edec
	if (!ctx.cr6.eq) goto loc_8253EDEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x8253edcc
	if (ctx.cr6.lt) goto loc_8253EDCC;
loc_8253EDEC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8253efa4
	if (ctx.cr6.eq) goto loc_8253EFA4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8253efa4
	if (ctx.cr6.eq) goto loc_8253EFA4;
	// subf r11,r25,r31
	ctx.r11.u64 = r31.u64 - r25.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253efa4
	if (!ctx.cr6.eq) goto loc_8253EFA4;
	// li r26,0
	r26.s64 = 0;
	// mr r22,r25
	r22.u64 = r25.u64;
	// add r29,r23,r25
	r29.u64 = r23.u64 + r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8253ee28
	if (ctx.cr6.eq) goto loc_8253EE28;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r20
	r26.u64 = r20.u64;
	// add r22,r25,r20
	r22.u64 = r25.u64 + r20.u64;
loc_8253EE28:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r5,12(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82503da0
	ctx.lr = 0x8253EE38;
	sub_82503DA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r24,r29,1,0,30
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r20,20,9,11
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 20) & 0x700000;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw r10,r10,r24
	ctx.r10.u64 = r24.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r24.u8 & 0x3F));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,7,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r4,48(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 48);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8253EE80;
	sub_82503DA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// rlwimi r11,r25,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r4,52(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 52);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8253EEA0;
	sub_82503DA0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// rlwinm r7,r7,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r23,20,9,11
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 20) & 0x700000;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r3,r4,0,27,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r3,0,7,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82532998
	ctx.lr = 0x8253EEFC;
	sub_82532998(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82532998
	ctx.lr = 0x8253EF2C;
	sub_82532998(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x8253ef60
	if (ctx.cr0.eq) goto loc_8253EF60;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ef98
	if (ctx.cr0.eq) goto loc_8253EF98;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r9,r8,0,21,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F0;
	// rlwinm r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253ef98
	if (!ctx.cr6.lt) goto loc_8253EF98;
loc_8253EF60:
	// lwz r7,212(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r8,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r22,r26
	r22.u64 = r26.u64;
	// stw r7,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r6,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
loc_8253EF98:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253efcc
	if (!ctx.cr0.eq) goto loc_8253EFCC;
	// li r22,0
	r22.s64 = 0;
loc_8253EFA4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e4
	if (!ctx.cr0.eq) goto loc_8253D4E4;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// lwz r14,136(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r15,r16
	r15.u64 = r16.u64;
	// li r21,1
	r21.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
	// b 0x8253ec10
	goto loc_8253EC10;
loc_8253EFCC:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825c4a48
	ctx.lr = 0x8253EFE4;
	sub_825C4A48(ctx, base);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825355f8
	ctx.lr = 0x8253F008;
	sub_825355F8(ctx, base);
	// add r10,r29,r20
	ctx.r10.u64 = r29.u64 + r20.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8253f058
	if (!ctx.cr6.lt) goto loc_8253F058;
	// addi r9,r1,524
	ctx.r9.s64 = ctx.r1.s64 + 524;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// li r24,3
	r24.s64 = 3;
loc_8253F02C:
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// stfsu f30,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// slw r7,r24,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// andc r7,r21,r7
	ctx.r7.u64 = r21.u64 & ~ctx.r7.u64;
	// add r6,r31,r29
	ctx.r6.u64 = r31.u64 + r29.u64;
	// or r21,r7,r8
	r21.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8253f02c
	if (ctx.cr6.lt) goto loc_8253F02C;
	// b 0x8253f05c
	goto loc_8253F05C;
loc_8253F058:
	// li r24,3
	r24.s64 = 3;
loc_8253F05C:
	// add r8,r26,r25
	ctx.r8.u64 = r26.u64 + r25.u64;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8253f0a8
	if (!ctx.cr6.lt) goto loc_8253F0A8;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r31,r26
	ctx.r9.u64 = r26.u64 - r31.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8253F080:
	// slw r7,r31,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// stfsu f30,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// slw r6,r24,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// andc r6,r21,r6
	ctx.r6.u64 = r21.u64 & ~ctx.r6.u64;
	// add r5,r31,r9
	ctx.r5.u64 = r31.u64 + ctx.r9.u64;
	// or r21,r6,r7
	r21.u64 = ctx.r6.u64 | ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8253f080
	if (ctx.cr6.lt) goto loc_8253F080;
loc_8253F0A8:
	// add r8,r22,r23
	ctx.r8.u64 = r22.u64 + r23.u64;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8253f0f4
	if (!ctx.cr6.lt) goto loc_8253F0F4;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r31,r22
	ctx.r9.u64 = r22.u64 - r31.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8253F0CC:
	// slw r7,r31,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// stfsu f28,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// slw r6,r24,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// andc r6,r21,r6
	ctx.r6.u64 = r21.u64 & ~ctx.r6.u64;
	// add r5,r31,r9
	ctx.r5.u64 = r31.u64 + ctx.r9.u64;
	// or r21,r6,r7
	r21.u64 = ctx.r6.u64 | ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8253f0cc
	if (ctx.cr6.lt) goto loc_8253F0CC;
loc_8253F0F4:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825bdf00
	ctx.lr = 0x8253F114;
	sub_825BDF00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8250ac20
	ctx.lr = 0x8253F130;
	sub_8250AC20(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8253f154
	if (ctx.cr6.eq) goto loc_8253F154;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8253f158
	if (!ctx.cr6.eq) goto loc_8253F158;
loc_8253F154:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253F158:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f168
	if (ctx.cr0.eq) goto loc_8253F168;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8253f198
	goto loc_8253F198;
loc_8253F168:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8253f188
	if (ctx.cr6.eq) goto loc_8253F188;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8253f18c
	if (!ctx.cr6.eq) goto loc_8253F18C;
loc_8253F188:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253F18C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f1b0
	if (ctx.cr0.eq) goto loc_8253F1B0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_8253F198:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f1b0
	if (ctx.cr0.eq) goto loc_8253F1B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,1,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8253F1B0:
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r31,25,4,6
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0xE000000;
	// add r11,r25,r20
	ctx.r11.u64 = r25.u64 + r20.u64;
	// rlwinm r10,r8,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	// rlwinm r7,r8,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r8,0,7,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// stw r6,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8253f224
	if (!ctx.cr6.lt) goto loc_8253F224;
	// subf r7,r11,r31
	ctx.r7.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8253F1F4:
	// slw r7,r24,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// slw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwimi r7,r6,0,27,18
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F) | (ctx.r7.u64 & 0x1FE0);
	// stw r7,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// bdnz 0x8253f1f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253F1F4;
loc_8253F224:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,228
	ctx.r8.s64 = 228;
	// rlwinm r10,r10,0,7,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82528e18
	ctx.lr = 0x8253F24C;
	sub_82528E18(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82530e20
	ctx.lr = 0x8253F268;
	sub_82530E20(ctx, base);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f284
	if (ctx.cr0.eq) goto loc_8253F284;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8253F284:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8253F28C;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// b 0x8253fb88
	goto loc_8253FB88;
loc_8253F2A8:
	// lwz r29,44(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 44);
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,48(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 48);
	// li r28,0
	r28.s64 = 0;
	// beq 0x8253f39c
	if (ctx.cr0.eq) goto loc_8253F39C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7010
	ctx.lr = 0x8253F2C8;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f39c
	if (ctx.cr0.eq) goto loc_8253F39C;
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82528d80
	ctx.lr = 0x8253F2DC;
	sub_82528D80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f39c
	if (ctx.cr0.eq) goto loc_8253F39C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8253F2E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f314
	if (ctx.cr6.eq) goto loc_8253F314;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f304
	if (ctx.cr6.eq) goto loc_8253F304;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8253f30c
	if (!ctx.cr6.eq) goto loc_8253F30C;
loc_8253F304:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253f2e8
	goto loc_8253F2E8;
loc_8253F30C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253f318
	goto loc_8253F318;
loc_8253F314:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8253F318:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253f39c
	if (!ctx.cr0.eq) goto loc_8253F39C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253f39c
	if (!ctx.cr0.eq) goto loc_8253F39C;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8253F330:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f364
	if (ctx.cr6.eq) goto loc_8253F364;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f35c
	if (ctx.cr6.eq) goto loc_8253F35C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253f35c
	if (ctx.cr0.eq) goto loc_8253F35C;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8253F35C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8253f330
	goto loc_8253F330;
loc_8253F364:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r10,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8253F39C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253f79c
	if (!ctx.cr0.eq) goto loc_8253F79C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7010
	ctx.lr = 0x8253F3B4;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f79c
	if (ctx.cr0.eq) goto loc_8253F79C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825380f0
	ctx.lr = 0x8253F3D0;
	sub_825380F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f7708
	ctx.lr = 0x8253F3D8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253f3e8
	if (ctx.cr0.eq) goto loc_8253F3E8;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253F3E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// lwz r23,1244(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// li r25,0
	r25.s64 = 0;
	// rlwinm. r27,r11,7,29,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x8253f480
	if (ctx.cr0.eq) goto loc_8253F480;
	// li r31,0
	r31.s64 = 0;
loc_8253F408:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// add r30,r31,r11
	r30.u64 = r31.u64 + ctx.r11.u64;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8253F43C;
	sub_825BA3A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8253f454
	if (!ctx.cr6.eq) goto loc_8253F454;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_8253F454:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8253f464
	if (!ctx.cr6.eq) goto loc_8253F464;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// b 0x8253f470
	goto loc_8253F470;
loc_8253F464:
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253f470
	if (ctx.cr6.eq) goto loc_8253F470;
	// li r25,1
	r25.s64 = 1;
loc_8253F470:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x8253f408
	if (ctx.cr6.lt) goto loc_8253F408;
loc_8253F480:
	// cmplw cr6,r24,r27
	ctx.cr6.compare<uint32_t>(r24.u32, r27.u32, ctx.xer);
	// bne cr6,0x8253f5b4
	if (!ctx.cr6.eq) goto loc_8253F5B4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8253f4c8
	if (ctx.cr6.eq) goto loc_8253F4C8;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8253F498:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// bl 0x825b8558
	ctx.lr = 0x8253F4B4;
	sub_825B8558(ctx, base);
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8253f498
	if (!ctx.cr0.eq) goto loc_8253F498;
loc_8253F4C8:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// lwz r25,1236(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825bdf00
	ctx.lr = 0x8253F4EC;
	sub_825BDF00(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253f5b8
	if (ctx.cr6.eq) goto loc_8253F5B8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253F504;
	sub_825335B8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253f51c
	goto loc_8253F51C;
loc_8253F514:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253F51C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8253f514
	if (!ctx.cr6.eq) goto loc_8253F514;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r27,57
	r27.s64 = 57;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r27,7,19,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253f564
	goto loc_8253F564;
loc_8253F55C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253F564:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8253f55c
	if (!ctx.cr6.eq) goto loc_8253F55C;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r31,12(r26)
	REX_STORE_U32(r26.u32 + 12, r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwimi r11,r27,7,19,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// bl 0x82528fd8
	ctx.lr = 0x8253F598;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253F5B0;
	sub_825335B8(ctx, base);
	// b 0x8253f5b8
	goto loc_8253F5B8;
loc_8253F5B4:
	// lwz r25,1236(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
loc_8253F5B8:
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8253d4e4
	if (!ctx.cr6.eq) goto loc_8253D4E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r31,8(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x824f6fc8
	ctx.lr = 0x8253F5D8;
	sub_824F6FC8(ctx, base);
	// rlwinm r11,r31,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0xF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253d4e4
	if (!ctx.cr6.eq) goto loc_8253D4E4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82509448
	ctx.lr = 0x8253F5EC;
	sub_82509448(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8253d4e4
	if (ctx.cr0.eq) goto loc_8253D4E4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r31,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 9) & 0x1;
	// rlwinm r9,r11,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8253d4e4
	if (!ctx.cr6.eq) goto loc_8253D4E4;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_8253F60C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f638
	if (ctx.cr6.eq) goto loc_8253F638;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f628
	if (ctx.cr6.eq) goto loc_8253F628;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8253f630
	if (!ctx.cr6.eq) goto loc_8253F630;
loc_8253F628:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253f60c
	goto loc_8253F60C;
loc_8253F630:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253f63c
	goto loc_8253F63C;
loc_8253F638:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F63C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e4
	if (!ctx.cr0.eq) goto loc_8253D4E4;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8253F648:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253f674
	if (ctx.cr6.eq) goto loc_8253F674;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f664
	if (ctx.cr6.eq) goto loc_8253F664;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8253f66c
	if (!ctx.cr6.eq) goto loc_8253F66C;
loc_8253F664:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8253f648
	goto loc_8253F648;
loc_8253F66C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253f678
	goto loc_8253F678;
loc_8253F674:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253F678:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e4
	if (!ctx.cr0.eq) goto loc_8253D4E4;
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253f6b8
	if (ctx.cr6.eq) goto loc_8253F6B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82516b38
	ctx.lr = 0x8253F698;
	sub_82516B38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82516b38
	ctx.lr = 0x8253F6A8;
	sub_82516B38(ctx, base);
	// subf r11,r27,r3
	ctx.r11.u64 = ctx.r3.u64 - r27.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_8253F6B8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253d4e4
	if (ctx.cr0.eq) goto loc_8253D4E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r28,44
	ctx.r6.s64 = r28.s64 + 44;
loc_8253F6C8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253f770
	if (!ctx.cr6.lt) goto loc_8253F770;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// bne cr6,0x8253f764
	if (!ctx.cr6.eq) goto loc_8253F764;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x6;
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,11
	ctx.r8.s64 = ctx.r8.s64 + 11;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8253f724
	goto loc_8253F724;
loc_8253F71C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253F724:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253f71c
	if (!ctx.cr6.eq) goto loc_8253F71C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwimi r10,r9,0,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8253F764:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x8253f6c8
	goto loc_8253F6C8;
loc_8253F770:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 652);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253F784;
	sub_825C2288(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,652(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 652);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253F798;
	sub_825C2288(ctx, base);
	// b 0x8253d4e4
	goto loc_8253D4E4;
loc_8253F79C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8253d4e4
	if (!ctx.cr6.eq) goto loc_8253D4E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// addi r6,r1,260
	ctx.r6.s64 = ctx.r1.s64 + 260;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8253F7D4;
	sub_825BA3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r7,r1,312
	ctx.r7.s64 = ctx.r1.s64 + 312;
	// addi r6,r1,264
	ctx.r6.s64 = ctx.r1.s64 + 264;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8253F7F8;
	sub_825BA3A0(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r30,r28
	r30.u64 = r28.u64;
	// oris r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 67108864;
	// rlwinm r29,r11,6,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// stw r10,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r10.u32);
	// lwz r11,652(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 652);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253f844
	if (!ctx.cr0.eq) goto loc_8253F844;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8253f844
	if (ctx.cr0.eq) goto loc_8253F844;
loc_8253F824:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253f844
	if (!ctx.cr0.eq) goto loc_8253F844;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253f824
	if (!ctx.cr6.eq) goto loc_8253F824;
loc_8253F844:
	// addi r11,r1,548
	ctx.r11.s64 = ctx.r1.s64 + 548;
	// stw r28,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, r28.u32);
	// addi r10,r1,772
	ctx.r10.s64 = ctx.r1.s64 + 772;
	// stw r28,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, r28.u32);
	// addi r9,r1,744
	ctx.r9.s64 = ctx.r1.s64 + 744;
	// lwz r8,320(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r7,r1,968
	ctx.r7.s64 = ctx.r1.s64 + 968;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
	// stw r28,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, r28.u32);
	// stw r28,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, r28.u32);
	// stw r28,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, r28.u32);
	// stw r28,796(r1)
	REX_STORE_U32(ctx.r1.u32 + 796, r28.u32);
	// stw r28,928(r1)
	REX_STORE_U32(ctx.r1.u32 + 928, r28.u32);
	// stw r28,964(r1)
	REX_STORE_U32(ctx.r1.u32 + 964, r28.u32);
	// std r28,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r28.u64);
	// std r28,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r28.u64);
	// std r28,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r28.u64);
	// std r28,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r28.u64);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// bne cr6,0x8253f988
	if (!ctx.cr6.eq) goto loc_8253F988;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 384, ctx.xer);
	// bne cr6,0x8253f988
	if (!ctx.cr6.eq) goto loc_8253F988;
	// lwz r8,304(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8253f920
	if (!ctx.cr6.eq) goto loc_8253F920;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// lwz r4,260(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,460
	ctx.r5.s64 = ctx.r1.s64 + 460;
	// bl 0x825ba3a0
	ctx.lr = 0x8253F8EC;
	sub_825BA3A0(ctx, base);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r10,448(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r9,464(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r8,460(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x8252ecf0
	ctx.lr = 0x8253F91C;
	sub_8252ECF0(ctx, base);
	// b 0x8253f984
	goto loc_8253F984;
loc_8253F920:
	// lwz r10,572(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// addi r5,r1,556
	ctx.r5.s64 = ctx.r1.s64 + 556;
	// lwz r9,264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r31,r1,708
	r31.s64 = ctx.r1.s64 + 708;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,312(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// lwz r6,260(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r9.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,740(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r28,572(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, r28.u32);
	// stwx r25,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r25.u32);
	// lwz r11,740(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r11.u32);
	// bl 0x8252ecf0
	ctx.lr = 0x8253F984;
	sub_8252ECF0(ctx, base);
loc_8253F984:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_8253F988:
	// lwz r10,312(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253fa74
	if (!ctx.cr6.eq) goto loc_8253FA74;
	// lwz r5,304(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 384, ctx.xer);
	// bne cr6,0x8253fa74
	if (!ctx.cr6.eq) goto loc_8253FA74;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x8253fa10
	if (!ctx.cr6.eq) goto loc_8253FA10;
	// lwz r3,48(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r7,r1,420
	ctx.r7.s64 = ctx.r1.s64 + 420;
	// lwz r4,264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r6,r1,428
	ctx.r6.s64 = ctx.r1.s64 + 428;
	// addi r5,r1,436
	ctx.r5.s64 = ctx.r1.s64 + 436;
	// bl 0x825ba3a0
	ctx.lr = 0x8253F9DC;
	sub_825BA3A0(ctx, base);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,436(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8252ecf0
	ctx.lr = 0x8253FA0C;
	sub_8252ECF0(ctx, base);
	// b 0x8253fa74
	goto loc_8253FA74;
loc_8253FA10:
	// lwz r10,796(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r31,r1,932
	r31.s64 = ctx.r1.s64 + 932;
	// lwz r6,264(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// lwz r10,320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,964(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 964);
	// lwz r28,796(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,796(r1)
	REX_STORE_U32(ctx.r1.u32 + 796, r28.u32);
	// stwx r25,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r25.u32);
	// lwz r11,964(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 964);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,964(r1)
	REX_STORE_U32(ctx.r1.u32 + 964, ctx.r11.u32);
	// bl 0x8252ecf0
	ctx.lr = 0x8253FA74;
	sub_8252ECF0(ctx, base);
loc_8253FA74:
	// lwz r11,572(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8253fb18
	if (ctx.cr6.eq) goto loc_8253FB18;
	// lwz r10,752(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8253fa94
	if (!ctx.cr6.eq) goto loc_8253FA94;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253fb18
	if (!ctx.cr6.eq) goto loc_8253FB18;
loc_8253FA94:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8253fb10
	if (ctx.cr6.eq) goto loc_8253FB10;
	// lwz r31,976(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 976);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8253fab4
	if (!ctx.cr6.eq) goto loc_8253FAB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8253fb10
	if (!ctx.cr6.eq) goto loc_8253FB10;
loc_8253FAB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253facc
	if (ctx.cr6.eq) goto loc_8253FACC;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r5,756(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r4,544(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x825c3fe8
	ctx.lr = 0x8253FACC;
	sub_825C3FE8(ctx, base);
loc_8253FACC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253fae4
	if (ctx.cr6.eq) goto loc_8253FAE4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r5,980(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r4,768(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x825c3fe8
	ctx.lr = 0x8253FAE4;
	sub_825C3FE8(ctx, base);
loc_8253FAE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82536980
	ctx.lr = 0x8253FAF8;
	sub_82536980(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e4
	if (!ctx.cr0.eq) goto loc_8253D4E4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// b 0x8253d4e4
	goto loc_8253D4E4;
loc_8253FB10:
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// b 0x8253fb1c
	goto loc_8253FB1C;
loc_8253FB18:
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
loc_8253FB1C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8253bc68
	ctx.lr = 0x8253FB28;
	sub_8253BC68(ctx, base);
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253FB2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lfd f29,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8253FB40;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fbc4
	if (ctx.cr0.eq) goto loc_8253FBC4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fba0
	if (ctx.cr0.eq) goto loc_8253FBA0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x82530ae0
	ctx.lr = 0x8253FB6C;
	sub_82530AE0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8253FB84:
	// li r6,228
	ctx.r6.s64 = 228;
loc_8253FB88:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82537760
	ctx.lr = 0x8253FB98;
	sub_82537760(ctx, base);
loc_8253FB98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_8253FBA0:
	// lwz r5,44(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r31,12(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x825380f0
	ctx.lr = 0x8253FBB4;
	sub_825380F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f7708
	ctx.lr = 0x8253FBBC;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253fb98
	if (!ctx.cr0.eq) goto loc_8253FB98;
loc_8253FBC4:
	// lwz r10,44(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 48);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// beq cr6,0x8253fc0c
	if (ctx.cr6.eq) goto loc_8253FC0C;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x8253fc0c
	if (!ctx.cr6.eq) goto loc_8253FC0C;
	// stw r11,44(r25)
	REX_STORE_U32(r25.u32 + 44, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8253FC0C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,8(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 8);
	// clrlwi. r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f31,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// bne 0x8253ff98
	if (!ctx.cr0.eq) goto loc_8253FF98;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// addi r6,r10,-125
	ctx.r6.s64 = ctx.r10.s64 + -125;
	// addi r8,r8,-16000
	ctx.r8.s64 = ctx.r8.s64 + -16000;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8253ff98
	if (ctx.cr6.eq) goto loc_8253FF98;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// bne cr6,0x8253fc6c
	if (!ctx.cr6.eq) goto loc_8253FC6C;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// b 0x8253fc74
	goto loc_8253FC74;
loc_8253FC6C:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_8253FC74:
	// li r24,0
	r24.s64 = 0;
	// rlwinm r31,r7,31,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xF;
	// li r22,1
	r22.s64 = 1;
loc_8253FC80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253fcd8
	if (ctx.cr6.eq) goto loc_8253FCD8;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x8253FCB8;
	sub_825B8558(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x8253fcc8
	if (!ctx.cr6.eq) goto loc_8253FCC8;
	// slw r11,r22,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r22.u32 << (r30.u8 & 0x3F));
	// or r24,r11,r24
	r24.u64 = ctx.r11.u64 | r24.u64;
loc_8253FCC8:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// b 0x8253fc80
	goto loc_8253FC80;
loc_8253FCD8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8253ff98
	if (ctx.cr6.eq) goto loc_8253FF98;
	// lwz r21,1244(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r23,1236(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r26,r21,4
	r26.s64 = r21.s64 + 4;
	// lwz r27,4(r21)
	r27.u64 = REX_LOAD_U32(r21.u32 + 4);
loc_8253FCF0:
	// li r28,0
	r28.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8253FCF8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8253fe00
	if (ctx.cr6.eq) goto loc_8253FE00;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253fdf8
	if (ctx.cr6.eq) goto loc_8253FDF8;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r9,r31,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fdf8
	if (ctx.cr0.eq) goto loc_8253FDF8;
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253fd50
	if (ctx.cr6.eq) goto loc_8253FD50;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253FD2C:
	// rlwinm r8,r31,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r8,r22,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r8.u8 & 0x3F));
	// or r30,r8,r30
	r30.u64 = ctx.r8.u64 | r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8253fd2c
	if (ctx.cr6.lt) goto loc_8253FD2C;
loc_8253FD50:
	// and. r11,r30,r24
	ctx.r11.u64 = r30.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fdf8
	if (ctx.cr0.eq) goto loc_8253FDF8;
	// andc. r11,r30,r24
	ctx.r11.u64 = r30.u64 & ~r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253fdf0
	if (!ctx.cr0.eq) goto loc_8253FDF0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8253fd7c
	if (ctx.cr6.lt) goto loc_8253FD7C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// ble cr6,0x8253fd80
	if (!ctx.cr6.gt) goto loc_8253FD80;
loc_8253FD7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253FD80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fdf0
	if (ctx.cr0.eq) goto loc_8253FDF0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// bl 0x825290b8
	ctx.lr = 0x8253FD94;
	sub_825290B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fdf0
	if (ctx.cr0.eq) goto loc_8253FDF0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fdc0
	if (ctx.cr0.eq) goto loc_8253FDC0;
	// rlwinm. r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fdc0
	if (ctx.cr0.eq) goto loc_8253FDC0;
loc_8253FDB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8253fde8
	goto loc_8253FDE8;
loc_8253FDC0:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fdd0
	if (ctx.cr0.eq) goto loc_8253FDD0;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253fdb8
	if (!ctx.cr0.eq) goto loc_8253FDB8;
loc_8253FDD0:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fde4
	if (ctx.cr0.eq) goto loc_8253FDE4;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8253fde8
	if (!ctx.cr0.eq) goto loc_8253FDE8;
loc_8253FDE4:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8253FDE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253fdf8
	if (!ctx.cr0.eq) goto loc_8253FDF8;
loc_8253FDF0:
	// andc r24,r24,r30
	r24.u64 = r24.u64 & ~r30.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_8253FDF8:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x8253fcf8
	goto loc_8253FCF8;
loc_8253FE00:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253fcf0
	if (!ctx.cr0.eq) goto loc_8253FCF0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8253ff98
	if (ctx.cr6.eq) goto loc_8253FF98;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8253FE14:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253ff98
	if (ctx.cr6.eq) goto loc_8253FF98;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ff84
	if (ctx.cr6.eq) goto loc_8253FF84;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r8,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ff84
	if (ctx.cr0.eq) goto loc_8253FF84;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fe78
	if (ctx.cr6.eq) goto loc_8253FE78;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_8253FE58:
	// srw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r22,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8253fe58
	if (ctx.cr6.lt) goto loc_8253FE58;
loc_8253FE78:
	// and. r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253ff84
	if (ctx.cr0.eq) goto loc_8253FF84;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253fe9c
	goto loc_8253FE9C;
loc_8253FE94:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253FE9C:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253fe94
	if (!ctx.cr6.eq) goto loc_8253FE94;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fee0
	if (ctx.cr0.eq) goto loc_8253FEE0;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fee0
	if (ctx.cr0.eq) goto loc_8253FEE0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8253FEE0:
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253fef4
	if (ctx.cr0.eq) goto loc_8253FEF4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8253FEF4:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253ff08
	if (ctx.cr0.eq) goto loc_8253FF08;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8253ff08
	if (ctx.cr0.eq) goto loc_8253FF08;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8253FF08:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// rlwinm r8,r11,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r6,r6,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r10,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// bl 0x825335b8
	ctx.lr = 0x8253FF6C;
	sub_825335B8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825335b8
	ctx.lr = 0x8253FF78;
	sub_825335B8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253FF84;
	sub_825335B8(ctx, base);
loc_8253FF84:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253fe14
	if (!ctx.cr6.eq) goto loc_8253FE14;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8253fe14
	goto loc_8253FE14;
loc_8253FF98:
	// lwz r16,1236(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e4
	if (!ctx.cr0.eq) goto loc_8253D4E4;
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// lfs f30,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_8253FFBC:
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541c38
	if (ctx.cr6.eq) goto loc_82541C38;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// bl 0x8252f098
	ctx.lr = 0x8253FFEC;
	sub_8252F098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825414ac
	if (ctx.cr0.eq) goto loc_825414AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,44(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x82540018;
	sub_825BA3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r3,48(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 48);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8254003C;
	sub_825BA3A0(ctx, base);
	// lwz r26,196(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825401bc
	if (!ctx.cr6.eq) goto loc_825401BC;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,2304
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2304, ctx.xer);
	// bne cr6,0x82540180
	if (!ctx.cr6.eq) goto loc_82540180;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82540180
	if (!ctx.cr6.eq) goto loc_82540180;
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,2304
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2304, ctx.xer);
	// bne cr6,0x82540180
	if (!ctx.cr6.eq) goto loc_82540180;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8252dd00
	ctx.lr = 0x82540088;
	sub_8252DD00(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82540170
	if (!ctx.cr6.eq) goto loc_82540170;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8252dd00
	ctx.lr = 0x825400A4;
	sub_8252DD00(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82540170
	if (!ctx.cr6.eq) goto loc_82540170;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r31,44(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r30,48(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r8,44(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,48(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// bl 0x82533238
	ctx.lr = 0x825400FC;
	sub_82533238(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82540170
	if (ctx.cr0.eq) goto loc_82540170;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r9,480(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// lwz r8,664(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 664);
	// rlwinm r11,r9,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82540170
	if (ctx.cr6.gt) goto loc_82540170;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825396e8
	ctx.lr = 0x82540168;
	sub_825396E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825414c8
	if (!ctx.cr0.eq) goto loc_825414C8;
loc_82540170:
	// lwz r26,196(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825401bc
	if (!ctx.cr6.eq) goto loc_825401BC;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82540180:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8254019c
	if (ctx.cr6.lt) goto loc_8254019C;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825401a0
	if (!ctx.cr6.gt) goto loc_825401A0;
loc_8254019C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825401A0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825401c0
	if (ctx.cr0.eq) goto loc_825401C0;
	// lwz r27,192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// lwz r25,124(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,160(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x82540200
	goto loc_82540200;
loc_825401BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_825401C0:
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82540bac
	if (!ctx.cr6.eq) goto loc_82540BAC;
	// lwz r19,124(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825401ec
	if (ctx.cr6.lt) goto loc_825401EC;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825401f0
	if (!ctx.cr6.gt) goto loc_825401F0;
loc_825401EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825401F0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82540bac
	if (ctx.cr0.eq) goto loc_82540BAC;
	// lwz r27,200(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_82540200:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82540bac
	if (ctx.cr6.eq) goto loc_82540BAC;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 8);
	// oris r9,r11,1024
	ctx.r9.u64 = ctx.r11.u64 | 67108864;
	// rlwinm r31,r11,6,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// stw r9,8(r18)
	REX_STORE_U32(r18.u32 + 8, ctx.r9.u32);
	// rlwinm r30,r10,6,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// mr r17,r23
	r17.u64 = r23.u64;
	// stb r31,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r31.u8);
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// lwz r11,652(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 652);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82540274
	if (!ctx.cr0.eq) goto loc_82540274;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82540274
	if (ctx.cr0.eq) goto loc_82540274;
loc_82540254:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r17,r11,r17
	r17.u64 = ctx.r11.u64 + r17.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82540274
	if (!ctx.cr0.eq) goto loc_82540274;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82540254
	if (!ctx.cr6.eq) goto loc_82540254;
loc_82540274:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r15,r23
	r15.u64 = r23.u64;
	// bl 0x8253c1d8
	ctx.lr = 0x8254028C;
	sub_8253C1D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82541680
	if (!ctx.cr0.eq) goto loc_82541680;
	// lwz r29,44(r19)
	r29.u64 = REX_LOAD_U32(r19.u32 + 44);
	// lwz r28,48(r19)
	r28.u64 = REX_LOAD_U32(r19.u32 + 48);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r14,r11,7,29,31
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplwi cr6,r14,4
	ctx.cr6.compare<uint32_t>(r14.u32, 4, ctx.xer);
	// bge cr6,0x82540b64
	if (!ctx.cr6.lt) goto loc_82540B64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82540498
	if (!ctx.cr6.eq) goto loc_82540498;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82540498
	if (!ctx.cr6.eq) goto loc_82540498;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r7,r1,444
	ctx.r7.s64 = ctx.r1.s64 + 444;
	// addi r6,r1,424
	ctx.r6.s64 = ctx.r1.s64 + 424;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x825402E8;
	sub_825BA3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r7,r1,452
	ctx.r7.s64 = ctx.r1.s64 + 452;
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8254030C;
	sub_825BA3A0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r6,444(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,424(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x8250acc8
	ctx.lr = 0x82540320;
	sub_8250ACC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,452(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r5,432(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r4,300(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x8250acc8
	ctx.lr = 0x82540338;
	sub_8250ACC8(ctx, base);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82533238
	ctx.lr = 0x82540388;
	sub_82533238(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254040c
	if (ctx.cr0.eq) goto loc_8254040C;
	// lwz r11,384(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r9,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7F;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537328
	ctx.lr = 0x825403B8;
	sub_82537328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254040c
	if (ctx.cr0.eq) goto loc_8254040C;
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825396e8
	ctx.lr = 0x82540404;
	sub_825396E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825416ac
	if (!ctx.cr0.eq) goto loc_825416AC;
loc_8254040C:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82540424
	goto loc_82540424;
loc_8254041C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82540424:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254041c
	if (!ctx.cr6.eq) goto loc_8254041C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x82540448;
	sub_824F7A20(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82540460
	goto loc_82540460;
loc_82540458:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82540460:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82540458
	if (!ctx.cr6.eq) goto loc_82540458;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x82540484;
	sub_824F7A20(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82536980
	ctx.lr = 0x82540498;
	sub_82536980(ctx, base);
loc_82540498:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250acc8
	ctx.lr = 0x825404AC;
	sub_8250ACC8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// bl 0x82532998
	ctx.lr = 0x825404DC;
	sub_82532998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825404ec
	if (!ctx.cr0.eq) goto loc_825404EC;
	// mr r24,r29
	r24.u64 = r29.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825404EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82532998
	ctx.lr = 0x82540510;
	sub_82532998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82540554
	if (!ctx.cr0.eq) goto loc_82540554;
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82540538
	if (ctx.cr6.eq) goto loc_82540538;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r9,r11,0,21,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	// rlwinm r10,r10,0,21,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7F0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82540554
	if (!ctx.cr6.lt) goto loc_82540554;
loc_82540538:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r24,r28
	r24.u64 = r28.u64;
	// lwz r9,280(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
loc_82540554:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82540b64
	if (ctx.cr6.eq) goto loc_82540B64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r20,r23
	r20.u64 = r23.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x825c36d0
	ctx.lr = 0x82540584;
	sub_825C36D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// beq cr6,0x8254064c
	if (ctx.cr6.eq) goto loc_8254064C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825405A0;
	sub_82503DA0(ctx, base);
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r14,1
	ctx.r8.s64 = r14.s64 + 1;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// rlwimi r7,r8,25,4,6
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xE000000) | (ctx.r7.u64 & 0xFFFFFFFFF1FFFFFF);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// rlwinm r31,r10,0,28,20
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF80F;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r31,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// rlwimi r11,r7,0,27,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F) | (ctx.r11.u64 & 0x1FE0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825405F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540628
	if (ctx.cr6.eq) goto loc_82540628;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82540620
	if (ctx.cr6.eq) goto loc_82540620;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x82540620
	if (!ctx.cr6.eq) goto loc_82540620;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254062c
	if (!ctx.cr0.eq) goto loc_8254062C;
loc_82540620:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825405f0
	goto loc_825405F0;
loc_82540628:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254062C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8254063c
	if (ctx.cr6.eq) goto loc_8254063C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x8254063C;
	sub_825335B8(ctx, base);
loc_8254063C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825335b8
	ctx.lr = 0x82540648;
	sub_825335B8(ctx, base);
	// b 0x8254097c
	goto loc_8254097C;
loc_8254064C:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82540664;
	sub_825C1A18(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82540678;
	sub_8250AC70(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82528fd8
	ctx.lr = 0x82540684;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825406ac
	if (!ctx.cr6.eq) goto loc_825406AC;
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x825407f8
	goto loc_825407F8;
loc_825406AC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825406B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825406ec
	if (ctx.cr6.eq) goto loc_825406EC;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825406e4
	if (ctx.cr6.eq) goto loc_825406E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x825406e4
	if (!ctx.cr6.eq) goto loc_825406E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825406f0
	if (!ctx.cr0.eq) goto loc_825406F0;
loc_825406E4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825406b4
	goto loc_825406B4;
loc_825406EC:
	// li r31,0
	r31.s64 = 0;
loc_825406F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825407b8
	if (ctx.cr6.eq) goto loc_825407B8;
	// li r27,0
	r27.s64 = 0;
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
loc_82540700:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825407b8
	if (!ctx.cr6.lt) goto loc_825407B8;
	// lwz r25,0(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x825c36d0
	ctx.lr = 0x82540730;
	sub_825C36D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82540780
	if (ctx.cr6.eq) goto loc_82540780;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x825406ac
	if (ctx.cr6.eq) goto loc_825406AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x82540758;
	sub_825335B8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// bl 0x825335b8
	ctx.lr = 0x82540764;
	sub_825335B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825c3328
	ctx.lr = 0x82540778;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254078c
	if (!ctx.cr0.eq) goto loc_8254078C;
loc_82540780:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x82540700
	goto loc_82540700;
loc_8254078C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825407b0
	if (ctx.cr6.eq) goto loc_825407B0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825407AC;
	sub_8250AC70(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825407B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x825407f8
	if (!ctx.cr6.eq) goto loc_825407F8;
loc_825407B8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82530ae0
	ctx.lr = 0x825407D0;
	sub_82530AE0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825407E0;
	sub_8250AB60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250aed8
	ctx.lr = 0x825407EC;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r11.u32);
loc_825407F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503da0
	ctx.lr = 0x82540808;
	sub_82503DA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82533008
	ctx.lr = 0x8254082C;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82540898
	if (!ctx.cr0.eq) goto loc_82540898;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82540854
	if (ctx.cr6.eq) goto loc_82540854;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 652);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825c2288
	ctx.lr = 0x82540850;
	sub_825C2288(ctx, base);
	// b 0x82540b64
	goto loc_82540B64;
loc_82540854:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r10,r22,4
	ctx.r10.s64 = r22.s64 + 4;
	// b 0x82540868
	goto loc_82540868;
loc_82540860:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82540868:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82540860
	if (!ctx.cr6.eq) goto loc_82540860;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x8254088C;
	sub_824F7A20(ctx, base);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// bne cr6,0x82540b18
	if (!ctx.cr6.eq) goto loc_82540B18;
	// b 0x82540b64
	goto loc_82540B64;
loc_82540898:
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825355f8
	ctx.lr = 0x825408BC;
	sub_825355F8(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825408e0
	if (ctx.cr6.lt) goto loc_825408E0;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825408e4
	if (!ctx.cr6.gt) goto loc_825408E4;
loc_825408E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825408E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825408fc
	if (ctx.cr0.eq) goto loc_825408FC;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250ad88
	ctx.lr = 0x825408F8;
	sub_8250AD88(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_825408FC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82540978
	if (ctx.cr6.eq) goto loc_82540978;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824f7708
	ctx.lr = 0x8254090C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82540978
	if (!ctx.cr0.eq) goto loc_82540978;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r31,r9,160
	r31.s64 = ctx.r9.s64 + 160;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r31,r10,0,28,20
	r31.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF80F) | (r31.u64 & 0x7F0);
	// rlwinm r10,r9,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// stw r31,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// cmplwi cr6,r10,1664
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1664, ctx.xer);
	// bne cr6,0x8254097c
	if (!ctx.cr6.eq) goto loc_8254097C;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// bl 0x825c36d0
	ctx.lr = 0x8254095C;
	sub_825C36D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8254097c
	if (ctx.cr6.eq) goto loc_8254097C;
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// rlwimi r31,r11,4,21,27
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7F0) | (r31.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r31,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// b 0x8254097c
	goto loc_8254097C;
loc_82540978:
	// lwz r31,168(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
loc_8254097C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,28(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825bb860
	ctx.lr = 0x82540998;
	sub_825BB860(ctx, base);
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
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
	// bl 0x8250ad28
	ctx.lr = 0x825409DC;
	sub_8250AD28(ctx, base);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82533008
	ctx.lr = 0x825409FC;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82540aac
	if (ctx.cr0.eq) goto loc_82540AAC;
	// lwz r30,240(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm r26,r31,28,25,31
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x7F;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(r14.u32, 2, ctx.xer);
	// rlwinm r11,r30,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x7F;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// bne cr6,0x82540a44
	if (!ctx.cr6.eq) goto loc_82540A44;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x82540a44
	if (!ctx.cr6.eq) goto loc_82540A44;
	// lwz r3,52(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 52);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82540A38;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82540a44
	if (ctx.cr0.eq) goto loc_82540A44;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
loc_82540A44:
	// rlwinm. r11,r31,17,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 17) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r31,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 17) & 0x1FFFF;
	// beq 0x82540a6c
	if (ctx.cr0.eq) goto loc_82540A6C;
	// rlwinm. r9,r30,17,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 17) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r30,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 17) & 0x1FFFF;
	// beq 0x82540a6c
	if (ctx.cr0.eq) goto loc_82540A6C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82540aac
	if (!ctx.cr0.eq) goto loc_82540AAC;
loc_82540A6C:
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537328
	ctx.lr = 0x82540A84;
	sub_82537328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82540aac
	if (ctx.cr0.eq) goto loc_82540AAC;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825418c0
	if (ctx.cr6.eq) goto loc_825418C0;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825418c0
	if (ctx.cr6.eq) goto loc_825418C0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825418c0
	if (ctx.cr6.eq) goto loc_825418C0;
loc_82540AAC:
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,40(r16)
	REX_STORE_U32(r16.u32 + 40, ctx.r11.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825c2288
	ctx.lr = 0x82540ACC;
	sub_825C2288(ctx, base);
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,40(r16)
	REX_STORE_U32(r16.u32 + 40, ctx.r11.u32);
	// beq cr6,0x82540af0
	if (ctx.cr6.eq) goto loc_82540AF0;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b470
	ctx.lr = 0x82540AF0;
	sub_8250B470(ctx, base);
loc_82540AF0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82540b18
	if (ctx.cr6.eq) goto loc_82540B18;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82540B00;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x82540B18;
	sub_825335B8(ctx, base);
loc_82540B18:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82540b64
	if (ctx.cr6.eq) goto loc_82540B64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,12(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// rlwinm r30,r11,27,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x82536980
	ctx.lr = 0x82540B40;
	sub_82536980(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82540b64
	if (ctx.cr6.eq) goto loc_82540B64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825c3fe8
	ctx.lr = 0x82540B64;
	sub_825C3FE8(ctx, base);
loc_82540B64:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82536980
	ctx.lr = 0x82540B78;
	sub_82536980(ctx, base);
	// lbz r11,129(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82540b90
	if (!ctx.cr0.eq) goto loc_82540B90;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r18)
	REX_STORE_U32(r18.u32 + 8, ctx.r11.u32);
loc_82540B90:
	// lbz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82540ba8
	if (!ctx.cr0.eq) goto loc_82540BA8;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
loc_82540BA8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82540BAC:
	// lwz r10,1252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82540fec
	if (!ctx.cr6.lt) goto loc_82540FEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824f7678
	ctx.lr = 0x82540BC8;
	sub_824F7678(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r19,r3,4
	r19.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r19,1
	ctx.r10.u64 = r19.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r18,0
	r18.s64 = 0;
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r22,r18
	r22.u64 = r18.u64;
	// bl 0x8255db50
	ctx.lr = 0x82540BF4;
	sub_8255DB50(ctx, base);
	// lwz r11,1244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r23,r18
	r23.u64 = r18.u64;
	// stw r18,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r18.u32);
	// li r26,1
	r26.s64 = 1;
	// li r21,1
	r21.s64 = 1;
	// lwz r20,224(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
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
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
loc_82540C24:
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82540C28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82540de0
	if (ctx.cr6.eq) goto loc_82540DE0;
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82540ccc
	if (ctx.cr6.eq) goto loc_82540CCC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82540ccc
	if (ctx.cr0.eq) goto loc_82540CCC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82540cd4
	if (!ctx.cr6.eq) goto loc_82540CD4;
	// lwz r8,44(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82540cd4
	if (!ctx.cr6.eq) goto loc_82540CD4;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// stw r9,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// bne 0x82540ca0
	if (!ctx.cr0.eq) goto loc_82540CA0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82540ca0
	if (ctx.cr0.eq) goto loc_82540CA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82540cac
	if (!ctx.cr6.gt) goto loc_82540CAC;
loc_82540CA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82531a20
	ctx.lr = 0x82540CAC;
	sub_82531A20(ctx, base);
loc_82540CAC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// ld r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stdx r10,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
loc_82540CCC:
	// lwz r25,8(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 8);
	// b 0x82540c28
	goto loc_82540C28;
loc_82540CD4:
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bne cr6,0x82540ccc
	if (!ctx.cr6.eq) goto loc_82540CCC;
	// rlwinm. r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r27,r18
	r27.u64 = r18.u64;
	// beq 0x82540d08
	if (ctx.cr0.eq) goto loc_82540D08;
	// addi r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 + 44;
loc_82540CEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// beq cr6,0x82540d08
	if (ctx.cr6.eq) goto loc_82540D08;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82540cec
	if (ctx.cr6.lt) goto loc_82540CEC;
loc_82540D08:
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82540D0C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82540ccc
	if (ctx.cr6.eq) goto loc_82540CCC;
	// lwz r28,16(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82540dd8
	if (ctx.cr6.eq) goto loc_82540DD8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82540dd8
	if (!ctx.cr6.eq) goto loc_82540DD8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r18
	r30.u64 = r18.u64;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82540dd8
	if (ctx.cr0.eq) goto loc_82540DD8;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82540D44:
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bne cr6,0x82540dc0
	if (!ctx.cr6.eq) goto loc_82540DC0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// stw r28,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r28.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// bne 0x82540d94
	if (!ctx.cr0.eq) goto loc_82540D94;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82540d94
	if (ctx.cr0.eq) goto loc_82540D94;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82540da0
	if (!ctx.cr6.gt) goto loc_82540DA0;
loc_82540D94:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82531a20
	ctx.lr = 0x82540DA0;
	sub_82531A20(ctx, base);
loc_82540DA0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// ld r10,368(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 368);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stdx r10,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
loc_82540DC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82540d44
	if (ctx.cr6.lt) goto loc_82540D44;
loc_82540DD8:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x82540d0c
	goto loc_82540D0C;
loc_82540DE0:
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x82540e54
	if (ctx.cr6.eq) goto loc_82540E54;
	// cmplwi cr6,r22,10000
	ctx.cr6.compare<uint32_t>(r22.u32, 10000, ctx.xer);
	// bgt cr6,0x82540e54
	if (ctx.cr6.gt) goto loc_82540E54;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82540e18
	if (!ctx.cr6.eq) goto loc_82540E18;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// stw r18,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r18.u32);
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
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// b 0x82540e24
	goto loc_82540E24;
loc_82540E18:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82553828
	ctx.lr = 0x82540E20;
	sub_82553828(ctx, base);
	// lwz r20,224(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
loc_82540E24:
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r26,4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(r26.u32, r21.u32, ctx.xer);
	// ble cr6,0x82540c24
	if (!ctx.cr6.gt) goto loc_82540C24;
	// mr r21,r26
	r21.u64 = r26.u64;
	// b 0x82540c24
	goto loc_82540C24;
loc_82540E54:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82540f3c
	if (ctx.cr6.eq) goto loc_82540F3C;
	// lwz r27,1244(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// b 0x82540e6c
	goto loc_82540E6C;
loc_82540E68:
	// lwz r20,224(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
loc_82540E6C:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r29,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r29.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r30,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r30.u32);
loc_82540E8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82540ea4
	if (ctx.cr6.eq) goto loc_82540EA4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82540ea8
	if (!ctx.cr6.eq) goto loc_82540EA8;
loc_82540EA4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82540EA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82540f10
	if (!ctx.cr0.eq) goto loc_82540F10;
	// addi r11,r29,2
	ctx.r11.s64 = r29.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82540efc
	if (!ctx.cr6.eq) goto loc_82540EFC;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82540efc
	if (!ctx.cr0.eq) goto loc_82540EFC;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// lwz r3,1236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 28);
	// bl 0x82542898
	ctx.lr = 0x82540EF4;
	sub_82542898(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82540f10
	if (!ctx.cr6.eq) goto loc_82540F10;
loc_82540EFC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82553828
	ctx.lr = 0x82540F04;
	sub_82553828(ctx, base);
	// lwz r29,232(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r30,228(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x82540e8c
	goto loc_82540E8C;
loc_82540F10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82540f28
	if (ctx.cr6.eq) goto loc_82540F28;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82540f2c
	if (!ctx.cr6.eq) goto loc_82540F2C;
loc_82540F28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82540F2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82540f3c
	if (ctx.cr0.eq) goto loc_82540F3C;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82540e68
	if (!ctx.cr0.eq) goto loc_82540E68;
loc_82540F3C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82540fc8
	if (!ctx.cr0.eq) goto loc_82540FC8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82540fc8
	if (ctx.cr0.eq) goto loc_82540FC8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// bne 0x82540fb4
	if (!ctx.cr0.eq) goto loc_82540FB4;
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
	ctx.lr = 0x82540FB4;
	sub_824E4308(ctx, base);
loc_82540FB4:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82540f3c
	goto loc_82540F3C;
loc_82540FC8:
	// lwz r31,1236(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82540FE0;
	sub_824FFBD8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82541b7c
	if (!ctx.cr6.eq) goto loc_82541B7C;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82540FEC:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82541274
	if (!ctx.cr6.eq) goto loc_82541274;
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82541274
	if (!ctx.cr6.eq) goto loc_82541274;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82541274
	if (!ctx.cr6.eq) goto loc_82541274;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82541274
	if (!ctx.cr6.eq) goto loc_82541274;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82541040
	if (ctx.cr0.eq) goto loc_82541040;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82541274
	if (!ctx.cr0.eq) goto loc_82541274;
loc_82541040:
	// lwz r26,1244(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r27,1236(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8254127c
	if (!ctx.cr6.eq) goto loc_8254127C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82537328
	ctx.lr = 0x82541070;
	sub_82537328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// beq 0x8254127c
	if (ctx.cr0.eq) goto loc_8254127C;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8254108C;
	sub_82503DA0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-2561
	ctx.r12.s64 = -167837696;
	// ori r11,r11,224
	ctx.r11.u64 = ctx.r11.u64 | 224;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r12,r12,57375
	ctx.r12.u64 = ctx.r12.u64 | 57375;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r7,r11,27,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r11,29,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r9,r7,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r7,r6,30
	ctx.r7.u64 = ctx.r6.u32 & 0x3;
	// rlwinm r6,r11,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r7,r8,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82541114;
	sub_82503DA0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r11,224
	ctx.r11.u64 = ctx.r11.u64 | 224;
	// lis r12,-2561
	ctx.r12.s64 = -167837696;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r7,r11,27,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r11,29,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r9,r7,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r7,r6,30
	ctx.r7.u64 = ctx.r6.u32 & 0x3;
	// rlwinm r6,r11,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r7,r8,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// ori r12,r12,57375
	ctx.r12.u64 = ctx.r12.u64 | 57375;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8254119c
	if (ctx.cr0.eq) goto loc_8254119C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8254119C:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x825411B8;
	sub_825C1A18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825411CC;
	sub_8250AC70(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825312b0
	ctx.lr = 0x825411E8;
	sub_825312B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82541224
	if (ctx.cr0.eq) goto loc_82541224;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8250a678
	ctx.lr = 0x82541208;
	sub_8250A678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82503400
	ctx.lr = 0x82541218;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82541224;
	sub_8250AD28(ctx, base);
loc_82541224:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8254122C;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82530160
	ctx.lr = 0x82541244;
	sub_82530160(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254125c
	if (ctx.cr0.eq) goto loc_8254125C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8254125C:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8254126C:
	// bl 0x82537a20
	ctx.lr = 0x82541270;
	sub_82537A20(ctx, base);
	// b 0x8253fb98
	goto loc_8253FB98;
loc_82541274:
	// lwz r27,1236(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r26,1244(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
loc_8254127C:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// oris r6,r8,1024
	ctx.r6.u64 = ctx.r8.u64 | 67108864;
	// rlwinm r30,r8,6,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r29,r7,6,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x1;
	// stw r6,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r6.u32);
	// rlwinm r28,r10,6,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,652(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 652);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825412fc
	if (!ctx.cr0.eq) goto loc_825412FC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825412fc
	if (ctx.cr0.eq) goto loc_825412FC;
loc_825412DC:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825412fc
	if (!ctx.cr0.eq) goto loc_825412FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825412dc
	if (!ctx.cr6.eq) goto loc_825412DC;
loc_825412FC:
	// addi r8,r1,772
	ctx.r8.s64 = ctx.r1.s64 + 772;
	// stw r9,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r9.u32);
	// addi r11,r1,548
	ctx.r11.s64 = ctx.r1.s64 + 548;
	// stw r9,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r9.u32);
	// addi r7,r1,744
	ctx.r7.s64 = ctx.r1.s64 + 744;
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r6,r1,968
	ctx.r6.s64 = ctx.r1.s64 + 968;
	// rlwinm. r5,r10,0,30,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r9.u32);
	// stw r9,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r9.u32);
	// stw r9,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// stw r9,796(r1)
	REX_STORE_U32(ctx.r1.u32 + 796, ctx.r9.u32);
	// stw r9,928(r1)
	REX_STORE_U32(ctx.r1.u32 + 928, ctx.r9.u32);
	// stw r9,964(r1)
	REX_STORE_U32(ctx.r1.u32 + 964, ctx.r9.u32);
	// std r9,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r9,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r9,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bne 0x825413a4
	if (!ctx.cr0.eq) goto loc_825413A4;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x825413a4
	if (!ctx.cr6.eq) goto loc_825413A4;
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82530210
	ctx.lr = 0x8254139C;
	sub_82530210(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_825413A4:
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm. r11,r7,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825413e4
	if (!ctx.cr0.eq) goto loc_825413E4;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x825413e4
	if (!ctx.cr6.eq) goto loc_825413E4;
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82530210
	ctx.lr = 0x825413E4;
	sub_82530210(ctx, base);
loc_825413E4:
	// addi r6,r1,768
	ctx.r6.s64 = ctx.r1.s64 + 768;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825373d0
	ctx.lr = 0x825413F8;
	sub_825373D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541b94
	if (!ctx.cr0.eq) goto loc_82541B94;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825373d0
	ctx.lr = 0x82541414;
	sub_825373D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541bec
	if (!ctx.cr0.eq) goto loc_82541BEC;
	// lwz r11,976(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541438
	if (ctx.cr6.eq) goto loc_82541438;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,980(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r4,768(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x825c3fe8
	ctx.lr = 0x82541438;
	sub_825C3FE8(ctx, base);
loc_82541438:
	// lwz r11,752(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541454
	if (ctx.cr6.eq) goto loc_82541454;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,756(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r4,544(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x825c3fe8
	ctx.lr = 0x82541454;
	sub_825C3FE8(ctx, base);
loc_82541454:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82536980
	ctx.lr = 0x82541468;
	sub_82536980(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254147c
	if (!ctx.cr0.eq) goto loc_8254147C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_8254147C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541494
	if (!ctx.cr0.eq) goto loc_82541494;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82541494:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825414ac
	if (!ctx.cr0.eq) goto loc_825414AC;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_825414AC:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r16,1236(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x8253ffbc
	goto loc_8253FFBC;
loc_825414C8:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82531120
	ctx.lr = 0x825414E0;
	sub_82531120(ctx, base);
	// lwz r4,488(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82541508
	if (ctx.cr6.eq) goto loc_82541508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x825414FC;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82541508;
	sub_8250AD28(ctx, base);
loc_82541508:
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8254152c
	if (ctx.cr6.eq) goto loc_8254152C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x82541520;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8254152C;
	sub_8250AD28(ctx, base);
loc_8254152C:
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82541530:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825415a0
	if (ctx.cr6.eq) goto loc_825415A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254158c
	if (!ctx.cr0.eq) goto loc_8254158C;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82541558
	if (ctx.cr0.eq) goto loc_82541558;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254158c
	if (ctx.cr0.eq) goto loc_8254158C;
loc_82541558:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254156c
	goto loc_8254156C;
loc_82541564:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8254156C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82541564
	if (!ctx.cr6.eq) goto loc_82541564;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_8254158C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82541530
	if (!ctx.cr6.eq) goto loc_82541530;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82541530
	goto loc_82541530;
loc_825415A0:
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_825415A4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541614
	if (ctx.cr6.eq) goto loc_82541614;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82541600
	if (!ctx.cr0.eq) goto loc_82541600;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825415cc
	if (ctx.cr0.eq) goto loc_825415CC;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82541600
	if (ctx.cr0.eq) goto loc_82541600;
loc_825415CC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825415e0
	goto loc_825415E0;
loc_825415D8:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825415E0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825415d8
	if (!ctx.cr6.eq) goto loc_825415D8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_82541600:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825415a4
	if (!ctx.cr6.eq) goto loc_825415A4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x825415a4
	goto loc_825415A4;
loc_82541614:
	// lwz r11,480(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// rlwinm. r5,r11,17,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8254162c
	if (ctx.cr0.eq) goto loc_8254162C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8252ffc8
	ctx.lr = 0x8254162C;
	sub_8252FFC8(ctx, base);
loc_8254162C:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82541644
	if (ctx.cr0.eq) goto loc_82541644;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82541644:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537a20
	ctx.lr = 0x82541658;
	sub_82537A20(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x82541664;
	sub_825335B8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825335b8
	ctx.lr = 0x82541670;
	sub_825335B8(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_82541674:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x8254167C;
	sub_825335B8(ctx, base);
	// b 0x8253fb98
	goto loc_8253FB98;
loc_82541680:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541694
	if (!ctx.cr0.eq) goto loc_82541694;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r18)
	REX_STORE_U32(r18.u32 + 8, ctx.r11.u32);
loc_82541694:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253d4e8
	if (!ctx.cr0.eq) goto loc_8253D4E8;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_825416AC:
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r14,3
	ctx.cr6.compare<uint32_t>(r14.u32, 3, ctx.xer);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bne cr6,0x825416d0
	if (!ctx.cr6.eq) goto loc_825416D0;
	// bl 0x82531120
	ctx.lr = 0x825416CC;
	sub_82531120(ctx, base);
	// b 0x825416d4
	goto loc_825416D4;
loc_825416D0:
	// bl 0x825311e8
	ctx.lr = 0x825416D4;
	sub_825311E8(ctx, base);
loc_825416D4:
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825416fc
	if (ctx.cr6.eq) goto loc_825416FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x825416F0;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825416FC;
	sub_8250AD28(ctx, base);
loc_825416FC:
	// lwz r4,392(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82541720
	if (ctx.cr6.eq) goto loc_82541720;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x82541714;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82541720;
	sub_8250AD28(ctx, base);
loc_82541720:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_82541724:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541794
	if (ctx.cr6.eq) goto loc_82541794;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82541780
	if (!ctx.cr0.eq) goto loc_82541780;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254174c
	if (ctx.cr0.eq) goto loc_8254174C;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82541780
	if (ctx.cr0.eq) goto loc_82541780;
loc_8254174C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82541760
	goto loc_82541760;
loc_82541758:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82541760:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82541758
	if (!ctx.cr6.eq) goto loc_82541758;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_82541780:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82541724
	if (!ctx.cr6.eq) goto loc_82541724;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82541724
	goto loc_82541724;
loc_82541794:
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_82541798:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541808
	if (ctx.cr6.eq) goto loc_82541808;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825417f4
	if (!ctx.cr0.eq) goto loc_825417F4;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825417c0
	if (ctx.cr0.eq) goto loc_825417C0;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825417f4
	if (ctx.cr0.eq) goto loc_825417F4;
loc_825417C0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825417d4
	goto loc_825417D4;
loc_825417CC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825417D4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825417cc
	if (!ctx.cr6.eq) goto loc_825417CC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_825417F4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82541798
	if (!ctx.cr6.eq) goto loc_82541798;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82541798
	goto loc_82541798;
loc_82541808:
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm. r5,r11,17,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82541820
	if (ctx.cr0.eq) goto loc_82541820;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8252ffc8
	ctx.lr = 0x82541820;
	sub_8252FFC8(ctx, base);
loc_82541820:
	// cmplwi cr6,r14,3
	ctx.cr6.compare<uint32_t>(r14.u32, 3, ctx.xer);
	// bne cr6,0x82541858
	if (!ctx.cr6.eq) goto loc_82541858;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82541840
	if (ctx.cr0.eq) goto loc_82541840;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82541840:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537a20
	ctx.lr = 0x82541854;
	sub_82537A20(ctx, base);
	// b 0x82541870
	goto loc_82541870;
loc_82541858:
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537fd8
	ctx.lr = 0x82541870;
	sub_82537FD8(ctx, base);
loc_82541870:
	// lbz r11,129(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82541888
	if (!ctx.cr0.eq) goto loc_82541888;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r18)
	REX_STORE_U32(r18.u32 + 8, ctx.r11.u32);
loc_82541888:
	// lbz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825418a0
	if (!ctx.cr0.eq) goto loc_825418A0;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
loc_825418A0:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x825418AC;
	sub_825335B8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x825418B8;
	sub_825335B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x82541674
	goto loc_82541674;
loc_825418C0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r5,12(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503da0
	ctx.lr = 0x825418D0;
	sub_82503DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r8,28(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 28);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825355f8
	ctx.lr = 0x825418F4;
	sub_825355F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82541910
	if (ctx.cr6.eq) goto loc_82541910;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8250b470
	ctx.lr = 0x82541910;
	sub_8250B470(ctx, base);
loc_82541910:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82541974
	if (ctx.cr6.eq) goto loc_82541974;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82528fd8
	ctx.lr = 0x82541920;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82541974
	if (ctx.cr6.eq) goto loc_82541974;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824f7708
	ctx.lr = 0x8254193C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82541960
	if (ctx.cr0.eq) goto loc_82541960;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 652);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825c2288
	ctx.lr = 0x82541958;
	sub_825C2288(ctx, base);
	// li r20,0
	r20.s64 = 0;
	// b 0x82541974
	goto loc_82541974;
loc_82541960:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82541968;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r11.u32);
loc_82541974:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82541988
	goto loc_82541988;
loc_82541980:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82541988:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x82541980
	if (!ctx.cr6.eq) goto loc_82541980;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r9.u32);
	// bl 0x825c2288
	ctx.lr = 0x825419B4;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r14,3
	ctx.cr6.compare<uint32_t>(r14.u32, 3, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bne cr6,0x825419d8
	if (!ctx.cr6.eq) goto loc_825419D8;
	// bl 0x82531120
	ctx.lr = 0x825419D4;
	sub_82531120(ctx, base);
	// b 0x825419dc
	goto loc_825419DC;
loc_825419D8:
	// bl 0x825311e8
	ctx.lr = 0x825419DC;
	sub_825311E8(ctx, base);
loc_825419DC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_825419E4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541a54
	if (ctx.cr6.eq) goto loc_82541A54;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82541a40
	if (!ctx.cr0.eq) goto loc_82541A40;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82541a0c
	if (ctx.cr0.eq) goto loc_82541A0C;
	// rlwinm. r10,r10,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82541a40
	if (ctx.cr0.eq) goto loc_82541A40;
loc_82541A0C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82541a20
	goto loc_82541A20;
loc_82541A18:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82541A20:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82541a18
	if (!ctx.cr6.eq) goto loc_82541A18;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_82541A40:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825419e4
	if (!ctx.cr6.eq) goto loc_825419E4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x825419e4
	goto loc_825419E4;
loc_82541A54:
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82541a78
	if (ctx.cr6.eq) goto loc_82541A78;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x82541A6C;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82541A78;
	sub_8250AD28(ctx, base);
loc_82541A78:
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82541a9c
	if (ctx.cr6.eq) goto loc_82541A9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x82541A90;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82541A9C;
	sub_8250AD28(ctx, base);
loc_82541A9C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82530160
	ctx.lr = 0x82541AA8;
	sub_82530160(ctx, base);
	// cmplwi cr6,r14,3
	ctx.cr6.compare<uint32_t>(r14.u32, 3, ctx.xer);
	// bne cr6,0x82541ae0
	if (!ctx.cr6.eq) goto loc_82541AE0;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82541ac8
	if (ctx.cr0.eq) goto loc_82541AC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82541AC8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537a20
	ctx.lr = 0x82541ADC;
	sub_82537A20(ctx, base);
	// b 0x82541af8
	goto loc_82541AF8;
loc_82541AE0:
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537fd8
	ctx.lr = 0x82541AF8;
	sub_82537FD8(ctx, base);
loc_82541AF8:
	// lbz r11,129(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82541b10
	if (!ctx.cr0.eq) goto loc_82541B10;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r18)
	REX_STORE_U32(r18.u32 + 8, ctx.r11.u32);
loc_82541B10:
	// lbz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82541b28
	if (!ctx.cr0.eq) goto loc_82541B28;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
loc_82541B28:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82541b3c
	if (ctx.cr6.eq) goto loc_82541B3C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x82541B3C;
	sub_825335B8(ctx, base);
loc_82541B3C:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x82541B48;
	sub_825335B8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825335b8
	ctx.lr = 0x82541B54;
	sub_825335B8(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm. r11,r11,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82541b6c
	if (ctx.cr0.eq) goto loc_82541B6C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825335b8
	ctx.lr = 0x82541B6C;
	sub_825335B8(ctx, base);
loc_82541B6C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8253fb98
	if (ctx.cr6.eq) goto loc_8253FB98;
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 12);
	// b 0x82541674
	goto loc_82541674;
loc_82541B7C:
	// lwz r30,1244(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82541B88:
	// bl 0x825335b8
	ctx.lr = 0x82541B8C;
	sub_825335B8(ctx, base);
loc_82541B8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_82541B94:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541ba8
	if (!ctx.cr0.eq) goto loc_82541BA8;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_82541BA8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541bc0
	if (!ctx.cr0.eq) goto loc_82541BC0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82541BC0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541bd8
	if (!ctx.cr0.eq) goto loc_82541BD8;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82541BD8:
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
loc_82541BDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8253b5b0
	ctx.lr = 0x82541BE8;
	sub_8253B5B0(ctx, base);
	// b 0x8253d4e8
	goto loc_8253D4E8;
loc_82541BEC:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541c00
	if (!ctx.cr0.eq) goto loc_82541C00;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_82541C00:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541c18
	if (!ctx.cr0.eq) goto loc_82541C18;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82541C18:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541c30
	if (!ctx.cr0.eq) goto loc_82541C30;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82541C30:
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// b 0x82541bdc
	goto loc_82541BDC;
loc_82541C38:
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x8253d4e4
	if (!ctx.cr6.eq) goto loc_8253D4E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82541C4C:
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 8);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8253d4e4
	if (!ctx.cr6.lt) goto loc_8253D4E4;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// clrlwi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825423f4
	if (!ctx.cr0.eq) goto loc_825423F4;
	// lwz r17,12(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x825423f4
	if (!ctx.cr6.eq) goto loc_825423F4;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x825423f4
	if (!ctx.cr6.eq) goto loc_825423F4;
	// lwz r10,4(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 4);
loc_82541CA0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82541ccc
	if (ctx.cr6.eq) goto loc_82541CCC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541cbc
	if (ctx.cr6.eq) goto loc_82541CBC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82541cc4
	if (!ctx.cr6.eq) goto loc_82541CC4;
loc_82541CBC:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82541ca0
	goto loc_82541CA0;
loc_82541CC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82541cd0
	goto loc_82541CD0;
loc_82541CCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82541CD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825423f4
	if (!ctx.cr0.eq) goto loc_825423F4;
	// li r14,0
	r14.s64 = 0;
	// addi r11,r17,44
	ctx.r11.s64 = r17.s64 + 44;
	// addi r15,r17,48
	r15.s64 = r17.s64 + 48;
loc_82541CE4:
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// stw r14,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r14.u32);
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825423f4
	if (!ctx.cr6.lt) goto loc_825423F4;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825423dc
	if (!ctx.cr0.eq) goto loc_825423DC;
	// lwz r30,12(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82541d2c
	if (!ctx.cr6.eq) goto loc_82541D2C;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x82541d34
	if (!ctx.cr6.eq) goto loc_82541D34;
loc_82541D2C:
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
loc_82541D34:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82541D38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82541d64
	if (ctx.cr6.eq) goto loc_82541D64;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541d5c
	if (ctx.cr6.eq) goto loc_82541D5C;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x82541d5c
	if (ctx.cr6.eq) goto loc_82541D5C;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
loc_82541D5C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82541d38
	goto loc_82541D38;
loc_82541D64:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r19,r17
	r19.u64 = r17.u64;
	// lwz r10,1244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// subfic r11,r11,12
	ctx.xer.ca = ctx.r11.u32 <= 12;
	ctx.r11.u64 = static_cast<uint64_t>(12) - ctx.r11.u64;
	// lwz r18,0(r15)
	r18.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82541d9c
	if (!ctx.cr0.eq) goto loc_82541D9C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82541db0
	if (ctx.cr6.eq) goto loc_82541DB0;
loc_82541D9C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
loc_82541DB0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825423dc
	if (!ctx.cr0.eq) goto loc_825423DC;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
	// lwz r4,1244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfic r21,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r21.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r20,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r20.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x8252f098
	ctx.lr = 0x82541E04;
	sub_8252F098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825423f4
	if (ctx.cr0.eq) goto loc_825423F4;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r4,1244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8252f098
	ctx.lr = 0x82541E1C;
	sub_8252F098(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825423f4
	if (ctx.cr0.eq) goto loc_825423F4;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// rlwinm r8,r21,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r20,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(r31.u32, r17.u32, ctx.xer);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r22,r8,30
	r22.u64 = ctx.r8.u32 & 0x3;
	// clrlwi r25,r11,30
	r25.u64 = ctx.r11.u32 & 0x3;
	// bne cr6,0x82541e68
	if (!ctx.cr6.eq) goto loc_82541E68;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_82541E68:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x82541f48
	if (ctx.cr6.eq) goto loc_82541F48;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,184(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm r7,r22,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r10,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r31,48(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// srw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// srw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// srw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r5,r10,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r8,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x6;
	// rlwinm r9,r9,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// rlwinm r7,r7,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// rlwinm r4,r3,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r6,1,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x6;
	// srw r28,r5,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r3,r5,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r29,r5,r7
	r29.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// li r27,224
	r27.s64 = 224;
	// li r10,224
	ctx.r10.s64 = 224;
	// srw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r6,r4,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// li r30,224
	r30.s64 = 224;
	// li r26,224
	r26.s64 = 224;
	// srw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r10,r9,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r27,r28,2,28,29
	r27.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xC) | (r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// rlwimi r30,r3,2,28,29
	r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xC) | (r30.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r4,r29,30
	ctx.r4.u64 = r29.u32 & 0x3;
	// rlwimi r26,r8,2,28,29
	r26.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (r26.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// clrlwi r8,r7,30
	ctx.r8.u64 = ctx.r7.u32 & 0x3;
	// or r28,r27,r5
	r28.u64 = r27.u64 | ctx.r5.u64;
	// or r6,r30,r4
	ctx.r6.u64 = r30.u64 | ctx.r4.u64;
	// or r27,r10,r9
	r27.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ld r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// or r26,r26,r8
	r26.u64 = r26.u64 | ctx.r8.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x82542130
	goto loc_82542130;
loc_82541F48:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r22,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r11,r10,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x825423dc
	if (!ctx.cr0.eq) goto loc_825423DC;
	// lwz r24,12(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
	// lwz r5,4(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_82541FB8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82541fe4
	if (ctx.cr6.eq) goto loc_82541FE4;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82541fd4
	if (ctx.cr6.eq) goto loc_82541FD4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82541fdc
	if (!ctx.cr6.eq) goto loc_82541FDC;
loc_82541FD4:
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x82541fb8
	goto loc_82541FB8;
loc_82541FDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82541fe8
	goto loc_82541FE8;
loc_82541FE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82541FE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825423dc
	if (!ctx.cr0.eq) goto loc_825423DC;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,48(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 48);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srw r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
	// rlwinm r6,r6,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x6;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r4,r10,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r7,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x6;
	// rlwinm r5,r5,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xFF;
	// srw r29,r4,r6
	r29.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srw r4,r4,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,224
	r28.s64 = 224;
	// li r27,224
	r27.s64 = 224;
	// rlwimi r28,r29,2,28,29
	r28.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xC) | (r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r27,r6,2,28,29
	r27.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC) | (r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r3,r7,30
	ctx.r3.u64 = ctx.r7.u32 & 0x3;
	// lwzx r7,r5,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r30.u32);
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// clrlwi. r29,r8,27
	r29.u64 = ctx.r8.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// or r6,r28,r4
	ctx.r6.u64 = r28.u64 | ctx.r4.u64;
	// or r26,r27,r3
	r26.u64 = r27.u64 | ctx.r3.u64;
	// bne 0x825423dc
	if (!ctx.cr0.eq) goto loc_825423DC;
	// lwz r23,12(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bne cr6,0x825423dc
	if (!ctx.cr6.eq) goto loc_825423DC;
	// lwz r5,4(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_825420A4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825420d0
	if (ctx.cr6.eq) goto loc_825420D0;
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825420c0
	if (ctx.cr6.eq) goto loc_825420C0;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x825420c8
	if (!ctx.cr6.eq) goto loc_825420C8;
loc_825420C0:
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x825420a4
	goto loc_825420A4;
loc_825420C8:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x825420d4
	goto loc_825420D4;
loc_825420D0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825420D4:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825423dc
	if (!ctx.cr0.eq) goto loc_825423DC;
	// lwz r30,44(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 44);
	// rlwinm r9,r8,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x6;
	// lwz r29,48(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 48);
	// li r8,224
	ctx.r8.s64 = 224;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r5,224
	ctx.r5.s64 = 224;
	// rlwinm r7,r7,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x6;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r4,r4,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0xFF;
	// rlwinm r3,r3,27,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0xFF;
	// srw r28,r4,r7
	r28.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r4,r4,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r8,r28,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// rlwimi r5,r7,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r28,r8,r4
	r28.u64 = ctx.r8.u64 | ctx.r4.u64;
	// or r27,r5,r9
	r27.u64 = ctx.r5.u64 | ctx.r9.u64;
loc_82542130:
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250ac20
	ctx.lr = 0x82542144;
	sub_8250AC20(ctx, base);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250ac20
	ctx.lr = 0x82542164;
	sub_8250AC20(ctx, base);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250ac20
	ctx.lr = 0x82542184;
	sub_8250AC20(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250ac20
	ctx.lr = 0x825421A4;
	sub_8250AC20(ctx, base);
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(r19.u32, r17.u32, ctx.xer);
	// bne cr6,0x825421c0
	if (!ctx.cr6.eq) goto loc_825421C0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_825421C0:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82580638
	ctx.lr = 0x825421CC;
	sub_82580638(ctx, base);
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82580638
	ctx.lr = 0x825421E0;
	sub_82580638(ctx, base);
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825324d0
	ctx.lr = 0x825421F8;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542274
	if (ctx.cr0.eq) goto loc_82542274;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8252e010
	ctx.lr = 0x82542224;
	sub_8252E010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542274
	if (ctx.cr0.eq) goto loc_82542274;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825324d0
	ctx.lr = 0x82542240;
	sub_825324D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542274
	if (ctx.cr0.eq) goto loc_82542274;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8252e010
	ctx.lr = 0x8254226C;
	sub_8252E010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82542404
	if (!ctx.cr0.eq) goto loc_82542404;
loc_82542274:
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82542290
	goto loc_82542290;
loc_82542288:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82542290:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82542288
	if (!ctx.cr6.eq) goto loc_82542288;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825422B0;
	sub_824F7A20(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825422cc
	goto loc_825422CC;
loc_825422C4:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825422CC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825422c4
	if (!ctx.cr6.eq) goto loc_825422C4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825422EC;
	sub_824F7A20(ctx, base);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82542308
	goto loc_82542308;
loc_82542300:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82542308:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82542300
	if (!ctx.cr6.eq) goto loc_82542300;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x82542328;
	sub_824F7A20(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82542344
	goto loc_82542344;
loc_8254233C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82542344:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8254233c
	if (!ctx.cr6.eq) goto loc_8254233C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x82542364;
	sub_824F7A20(ctx, base);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82542380
	goto loc_82542380;
loc_82542378:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82542380:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82542378
	if (!ctx.cr6.eq) goto loc_82542378;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825423A0;
	sub_824F7A20(ctx, base);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825423bc
	goto loc_825423BC;
loc_825423B4:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825423BC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825423b4
	if (!ctx.cr6.eq) goto loc_825423B4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825423DC;
	sub_824F7A20(ctx, base);
loc_825423DC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// addi r15,r15,-4
	r15.s64 = r15.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82541ce4
	goto loc_82541CE4;
loc_825423F4:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r18,1244(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82541c4c
	goto loc_82541C4C;
loc_82542404:
	// lwz r29,1244(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x825312b0
	ctx.lr = 0x82542424;
	sub_825312B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825312b0
	ctx.lr = 0x82542444;
	sub_825312B0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254246c
	if (ctx.cr0.eq) goto loc_8254246C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8254246C:
	// lwz r4,368(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82542490
	if (ctx.cr6.eq) goto loc_82542490;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x82542484;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82542490;
	sub_8250AD28(ctx, base);
loc_82542490:
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825424b4
	if (ctx.cr6.eq) goto loc_825424B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82503400
	ctx.lr = 0x825424A8;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825424B4;
	sub_8250AD28(ctx, base);
loc_825424B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82530160
	ctx.lr = 0x825424C0;
	sub_82530160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82530160
	ctx.lr = 0x825424CC;
	sub_82530160(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82537a20
	ctx.lr = 0x825424E0;
	sub_82537A20(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x8254126c
	goto loc_8254126C;
}

DEFINE_REX_FUNC(sub_827CEB60) {
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
	ctx.lr = 0x827CEB68;
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
	// lwz r9,3744(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
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
	// lwz r5,3748(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 3748);
	// rlwinm r28,r3,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,3752(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 3752);
	// lwz r3,268(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 268);
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
	// bne cr6,0x827cebd4
	if (!ctx.cr6.eq) goto loc_827CEBD4;
	// lwz r11,22492(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 22492);
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
	// b 0x827cebe4
	goto loc_827CEBE4;
loc_827CEBD4:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,1480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// stw r10,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r10.u32);
loc_827CEBE4:
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
	// bge cr6,0x827ceec8
	if (!ctx.cr6.lt) goto loc_827CEEC8;
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
	// lis r24,-32106
	r24.s64 = -2104098816;
	// li r19,1
	r19.s64 = 1;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// b 0x827cec60
	goto loc_827CEC60;
loc_827CEC54:
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_827CEC60:
	// lwz r17,20920(r23)
	r17.u64 = REX_LOAD_U32(r23.u32 + 20920);
	// mr r14,r21
	r14.u64 = r21.u64;
	// lwz r16,20924(r23)
	r16.u64 = REX_LOAD_U32(r23.u32 + 20924);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r15,20928(r23)
	r15.u64 = REX_LOAD_U32(r23.u32 + 20928);
	// ble cr6,0x827cee6c
	if (!ctx.cr6.gt) goto loc_827CEE6C;
	// subf r11,r20,r30
	ctx.r11.u64 = r30.u64 - r20.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_827CEC84:
	// addi r11,r31,560
	ctx.r11.s64 = r31.s64 + 560;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_827CEC94:
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
	// lwz r9,29984(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 29984);
	// lwz r6,29980(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 29980);
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
	// bl 0x8277e208
	ctx.lr = 0x827CECF0;
	sub_8277E208(ctx, base);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,768
	ctx.cr6.compare<int32_t>(r30.s32, 768, ctx.xer);
	// blt cr6,0x827cec94
	if (ctx.cr6.lt) goto loc_827CEC94;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cee04
	if (ctx.cr6.eq) goto loc_827CEE04;
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
	// beq cr6,0x827ced70
	if (ctx.cr6.eq) goto loc_827CED70;
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
	// b 0x827cedb4
	goto loc_827CEDB4;
loc_827CED70:
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
loc_827CEDB4:
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
	// bne cr6,0x827cedf0
	if (!ctx.cr6.eq) goto loc_827CEDF0;
	// bl 0x827cea20
	ctx.lr = 0x827CEDE0;
	sub_827CEA20(ctx, base);
	// addi r17,r17,32
	r17.s64 = r17.s64 + 32;
	// addi r16,r16,16
	r16.s64 = r16.s64 + 16;
	// addi r15,r15,16
	r15.s64 = r15.s64 + 16;
	// b 0x827cee3c
	goto loc_827CEE3C;
loc_827CEDF0:
	// bl 0x827cea70
	ctx.lr = 0x827CEDF4;
	sub_827CEA70(ctx, base);
	// addi r17,r17,32
	r17.s64 = r17.s64 + 32;
	// addi r16,r16,16
	r16.s64 = r16.s64 + 16;
	// addi r15,r15,16
	r15.s64 = r15.s64 + 16;
	// b 0x827cee3c
	goto loc_827CEE3C;
loc_827CEE04:
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
	// bne cr6,0x827cee38
	if (!ctx.cr6.eq) goto loc_827CEE38;
	// bl 0x827ceac0
	ctx.lr = 0x827CEE34;
	sub_827CEAC0(ctx, base);
	// b 0x827cee3c
	goto loc_827CEE3C;
loc_827CEE38:
	// bl 0x827ceb10
	ctx.lr = 0x827CEE3C;
	sub_827CEB10(ctx, base);
loc_827CEE3C:
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
	// blt cr6,0x827cec84
	if (ctx.cr6.lt) goto loc_827CEC84;
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,84(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_827CEE6C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cee98
	if (ctx.cr6.eq) goto loc_827CEE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,20928(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20928);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r8,20924(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 20924);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r7,20920(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 20920);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d2618
	ctx.lr = 0x827CEE98;
	sub_827D2618(ctx, base);
loc_827CEE98:
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
	// bne 0x827cec54
	if (!ctx.cr0.eq) goto loc_827CEC54;
loc_827CEEC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

